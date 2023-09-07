export interface IBladeTypeManual {
  airfoil: {
    1: String;
    2: String;
    3: String;
    4: String;
  };
  bladeDiam: String;
  chord: String;
  twist: String;
  ratedPower: String;
  material: String;
}

export interface IDoneObj {
  done1: boolean;
  done2: boolean;
  done3: boolean;
}
