import os
from zlib import MAX_WBITS
os.system('conda activate object')
import sys
import numpy as np
from powerloss import Powerloss
from findcycle import Findcycle

MATERIAL = sys.argv[1]
if(MATERIAL == 'carbon'):
    MAT_PATH = 'FatigueLifeFreeze_Carbon.csv'
elif (MATERIAL == 'glassfiber'):
    MAT_PATH = 'FatigueLifeFreeze_Glass Fiber.csv'
elif (MATERIAL == 'polyester'):
    MAT_PATH = 'FatigueLifeFreeze_Polyester.csv'
else:
    MAT_PATH = 'FatigueLifeFreeze_Resin.csv'

OUTPUT_PATH = 'data/output_simulink'
ACTUAL_PATH = 'data/actual-power'
MATERIAL_PATH = 'data/fatigue-material/'+MAT_PATH

x = os.listdir(ACTUAL_PATH)[0].split('_')


# df = os.path.join(OUTPUT_PATH, x[2].replace('.csv', ''), "Output_ "+x[1]+"_"+x[2])
df = OUTPUT_PATH +'/'+ x[2].replace('.csv', '') +'/'+ "Output_ "+x[1]+"_"+x[2]
calc = Powerloss()
avg_power = calc.calc_total_power_loss(df)

df2 = os.path.join(ACTUAL_PATH, os.listdir(ACTUAL_PATH)[0])
calc2 = Powerloss()
avg_power2 = calc2.calc_total_power_loss(df2)


powerloss = avg_power- avg_power2
print(powerloss*1644.52)


numcycle = Findcycle()
cycle =  numcycle.calc_cyle(df)


matrix_fatigue = numcycle.fatigue_life_data(MATERIAL_PATH)


remaining_lifetime = matrix_fatigue/cycle


blade1_lifetime = remaining_lifetime.min(axis=1)
print(blade1_lifetime/365)




