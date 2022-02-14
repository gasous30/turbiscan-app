import pandas as pd



class Powerloss():
    def __init__(self):
        self.delta_time = [0]

    def calc_total_power_loss(self, datainput):
        data= pd.read_csv(str(datainput), sep=";", engine="python")
        time = data.iloc[:,0]
        time.values.tolist()
        for i in range (0, len(time)):
            if i>0:
                self.delta_time.append(time[i]-time[i-1])
        data["Selisih"] = self.delta_time
        data["constant_power_sum"] = data["Selisih"]*data["power"]
        total_power_input = data["constant_power_sum"].sum()
        average_power_input = total_power_input/1440
        return average_power_input



