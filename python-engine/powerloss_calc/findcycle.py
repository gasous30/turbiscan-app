import pandas as pd
import numpy as np

class Findcycle():
    def __init__(self):
        self.limit = 6000

    def calc_cyle(self,datainput):
        cycle_list1 = []
        cycle_list2 = []
        cycle_list3 = []
        for i in range (0,9):
            n_cycle1 = self.num_cycle_1(datainput)
            cycle_list1.append(n_cycle1)
            self.limit = self.limit*2
        self.limit = 6000
        print(cycle_list1)

        for i in range(0, 9):
            n_cycle2 = self.num_cycle_2(datainput)
            cycle_list2.append(n_cycle2)
            self.limit = self.limit * 2

        print(cycle_list2)
        self.limit = 6000

        for i in range(0, 9):
            n_cycle3 = self.num_cycle_3(datainput)
            cycle_list3.append(n_cycle3)
            self.limit = self.limit * 2
        print(cycle_list3)

        num_cycle_list =[cycle_list1,cycle_list2,cycle_list3]
        matrix_cycle = np.array(num_cycle_list)

        return matrix_cycle

    def num_cycle_1(self, datainput):
        in_cycle1 = False
        num_cycle1=0
        data = pd.read_csv(str(datainput), sep=";",engine= "python")
        force1 = abs(data["Force(1)"])
        force1.values.tolist()
        for force in force1:
            if force > self.limit and in_cycle1 == False:
               in_cycle1 = True
            elif force < self.limit and in_cycle1 == True:
                num_cycle1 += 1
                in_cycle1 = False
        return  num_cycle1

    def num_cycle_2(self, datainput):
        numcycle2 = 0
        in_cycle2 = False
        data =pd.read_csv(str(datainput), sep=";",engine= "python")
        force2 = abs(data["Force(2)"])
        force2.values.tolist()
        for force in force2:
            if force > self.limit and in_cycle2 == False:
                in_cycle2 = True
            elif force < self.limit and in_cycle2 == True:
                numcycle2 += 1
                in_cycle2 = False
        return  numcycle2

    def num_cycle_3(self, datainput):
        in_cycle3 = False
        data = pd.read_csv(str(datainput), sep=";",engine= "python")
        num_cycle3 = 0
        force3 = abs(data["Force(3)"])
        force3.values.tolist()
        for force in force3:
            if force > self.limit and in_cycle3 == False:
                in_cycle3 = True
            elif force < self.limit and in_cycle3 == True:
                num_cycle3 += 1
                in_cycle3 = False
        return  num_cycle3

    def fatigue_life_data(self,datainput):
        data = pd.read_csv(str(datainput), sep=";", engine="python")
        fatigue_life = data["Cycle"]
        fatigue_list = fatigue_life.values.tolist()
        fatigue_array = np.array(fatigue_list)
        fatigue_array.reshape(1,len(fatigue_array))
        fatigue_array.tolist()
        matrix_list_fatigue = [fatigue_array,fatigue_array,fatigue_array]
        matrix_list_fatigue = np.array(matrix_list_fatigue)
        return matrix_list_fatigue



