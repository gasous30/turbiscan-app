import os
os.system('conda activate object')
import numpy as np
from powerloss import Powerloss
from findcycle import Findcycle

df2 = "Output_ VarSpeednoAOA_NACA4412.csv"

numcycle = Findcycle()
cycle =  numcycle.calc_cyle(df2)


matrix_fatigue = numcycle.fatigue_life_data("FatigueLifeFreeze_Carbon.csv")




remaining_lifetime = matrix_fatigue/cycle


blade1_lifetime = remaining_lifetime.min(axis=1)
print(blade1_lifetime/365)

