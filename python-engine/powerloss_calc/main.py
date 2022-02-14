import numpy as np
from powerloss import Powerloss
from findcycle import Findcycle

df = "Output_ VarSpeednoAOA_NACA4412.csv"
calc = Powerloss()
avg_power = calc.calc_total_power_loss(df)
print(avg_power)

df2 = "PowerInput_ VarSpeednoAOA_NACA4412.csv"
calc2 = Powerloss()
avg_power2 = calc2.calc_total_power_loss(df2)
print(avg_power2)

powerloss = avg_power-avg_power2
print(f"Power Loss: {powerloss}")

df2 = "Output_ VarSpeednoAOA_NACA4412.csv"

numcycle = Findcycle()
cycle =  numcycle.calc_cyle(df2)
print(cycle)

matrix_fatigue = numcycle.fatigue_life_data("FatigueLifeFreeze_Carbon.csv")
print(matrix_fatigue)



remaining_lifetime = matrix_fatigue/cycle

print(remaining_lifetime)



blade1_lifetime = remaining_lifetime.min(axis=1)
print(blade1_lifetime/365)

