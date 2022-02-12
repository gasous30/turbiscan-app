//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Wind_Turbine_data.cpp
//
// Code generated for Simulink model 'Wind_Turbine'.
//
// Model version                  : 3.4
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Fri Feb 11 17:40:12 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives:
//    1. RAM efficiency
//    2. Execution efficiency
// Validation result: Not run
//
#include "Wind_Turbine.h"
#include "Wind_Turbine_private.h"

// Invariant block signals (default storage)
const ConstB rtConstB = {
  {
    { -2041.2414523193152, 0.0 },

    { 1020.6207261596571, 1767.766952966369 },

    { 1020.6207261596571, -1767.766952966369 }
  }
  ,                                    // '<S93>/Magnitude-Angle to Complex'

  {
    { 0.0, 0.0 },

    { 0.0, 0.0 },

    { 0.0, 0.0 }
  }
  // '<S94>/Magnitude-Angle to Complex'
};

// Constant parameters (default storage)
const ConstP rtConstP = {
  // Expression: [ 0 1  0  0; -1  0  0  0;  0  0  0  0;  0  0  0  0]
  //  Referenced by: '<S55>/u3'

  { 0.0, -1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 },

  // Expression: SM.Ll
  //  Referenced by: '<S66>/u5'

  { 0.1248, 0.0, 0.0, 0.0, 0.0, 0.1248, 0.0, 0.0, 0.0, 0.0, 0.1791, 0.0, 0.0,
    0.0, 0.0, 0.1791 },

  // Expression: SM.R
  //  Referenced by: '<S63>/u1'

  { 0.004843, 0.0, 0.0, 0.0, 0.0, 0.004843, 0.0, 0.0, 0.0, 0.0, 0.004377, 0.0,
    0.0, 0.0, 0.0, 0.004377 },

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by: '<S63>/1-D Lookup Table'

  { 0.0, 1.0 },

  // Expression: SM.Linv
  //  Referenced by: '<S58>/Constant2'

  { 3.3413075430608061, 0.0, -3.2551916171190021, -0.0, 0.0, 3.3413075430608061,
    0.0, -3.2551916171190021, -3.2551916171190021, 0.0, 3.3151986944921852, -0.0,
    -0.0, -3.2551916171190021, -0.0, 3.3151986944921852 },

  // Expression: SM.RLinv
  //  Referenced by: '<S58>/Constant4'

  { 0.016181952431043485, 0.0, -0.014247973708129871, 0.0, 0.0,
    0.016181952431043485, 0.0, -0.014247973708129871, -0.015764893001707327, 0.0,
    0.014510624685792294, 0.0, 0.0, -0.015764893001707327, 0.0,
    0.014510624685792294 },

  // Pooled Parameter (Expression: sps.tv)
  //  Referenced by:
  //    '<S281>/Look-Up Table'
  //    '<S292>/Look-Up Table'

  { 0.0, 1.0E+6, 1.0E+6, 1.000001E+6 },

  // Expression: sps.opv
  //  Referenced by: '<S281>/Look-Up Table'

  { 0.0, 0.0, 1.0, 1.0 },

  // Pooled Parameter (Expression: tv)
  //  Referenced by:
  //    '<S276>/Look-Up Table'
  //    '<S278>/Look-Up Table'
  //    '<S280>/Look-Up Table'
  //    '<S287>/Look-Up Table'
  //    '<S289>/Look-Up Table'
  //    '<S291>/Look-Up Table'

  { -1.0, 0.0, 1.0E+6, 1.0E+6, 1.000001E+6 },

  // Pooled Parameter (Expression: opv)
  //  Referenced by:
  //    '<S276>/Look-Up Table'
  //    '<S278>/Look-Up Table'
  //    '<S280>/Look-Up Table'

  { 0.0, 0.0, 0.0, 1.0, 1.0 },

  // Pooled Parameter (Mixed Expressions)
  //  Referenced by:
  //    '<S292>/Look-Up Table'
  //    '<S64>/Integrator'

  { 0.0, 0.0, 0.0, 0.0 },

  // Pooled Parameter (Expression: opv)
  //  Referenced by:
  //    '<S287>/Look-Up Table'
  //    '<S289>/Look-Up Table'
  //    '<S291>/Look-Up Table'

  { 1.0, 1.0, 1.0, 0.0, 0.0 },

  // Expression: sps.tv
  //  Referenced by: '<S97>/Look-Up Table'

  { 0.0, 10.0, 10.0, 10.1, 10.1, 11.1 },

  // Expression: sps.opv
  //  Referenced by: '<S97>/Look-Up Table'

  { 1.0, 1.0, 0.5, 0.5, 1.0, 1.0 },

  // Computed Parameter: StateSpace_P1_Size
  //  Referenced by: '<S304>/State-Space'

  { 17.0, 11.0 },

  // Expression: real(S.H)
  //  Referenced by: '<S304>/State-Space'

  { -500002.54916554526, -2.4999783720704727, -2.499978372186888,
    -499997.45083445497, 2.499978372012265, 2.4999783720704727,
    500000.04899463541, -9.8784286153228681E-12, -5.0001497728517279,
    -4.9999572350643575, -4.9999572348897345, 0.0, 0.0, 0.0, 0.49999745083445468,
    -2.499978372039191E-6, -2.49997837198368E-6, -2.4999783720413689,
    -500002.54916554521, -2.4999783721286803, 2.4999783719831612,
    -499997.45083445479, 2.4999783721577842, -500000.04899463541,
    500000.04899463535, -4.99995723500615, -5.0001497728517279,
    -4.9999572348897345, 0.0, 0.0, 0.0, -2.499978372039191E-6,
    0.49999745083445474, -2.4999783720114355E-6, -2.4999783720704727,
    -2.4999783720995765, -500002.54916554526, 2.4999783720413689,
    2.4999783720704727, -499997.45083445462, -5.9081894640450831E-11,
    -500000.04899463535, -4.9999572350643575, -4.9999572351225652,
    -5.0001497726771049, 0.0, 0.0, 0.0, -2.4999783721224578E-6,
    -2.4999783720947022E-6, 0.49999745083445479, -499997.45083445497,
    2.4999783720704727, 2.499978372186888, -500002.54916554538,
    -2.4999783720704727, -2.4999783721286803, 499999.95100536488,
    9.8784286153228681E-12, 5.0001497728517279, 4.9999572350643575,
    4.9999572348897345, 0.0, 0.0, 0.0, -0.49999745083445468,
    2.499978372039191E-6, 2.49997837198368E-6, 2.4999783719540574,
    -499997.45083445479, 2.499978372186888, -2.4999783720704727,
    -500002.54916554515, -2.4999783720704727, -499999.95100536448,
    499999.95100536471, 4.99995723500615, 5.0001497728517279, 4.9999572348315269,
    0.0, 0.0, 0.0, 2.4999783721779689E-6, -0.49999745083445468,
    2.499978372039191E-6, 2.4999783719249535, 2.499978372012265,
    -499997.45083445462, -2.499978372012265, -2.4999783719540574,
    -500002.54916554515, 1.2774127567735298E-10, -499999.95100536454,
    4.9999572348897345, 4.9999572349479422, 5.00014977256069, 0.0, 0.0, 0.0,
    2.4999783720947022E-6, 2.4999783720947022E-6, -0.49999745083445496,
    500000.04899463552, -3.3700857648110176E-11, -500000.04899463529,
    499999.95100536477, -2.4506803265357231E-11, -499999.95100536459,
    -500000.04918717337, -500000.04918717308, -0.00019253781826281569,
    5.2105355514237367E-11, 0.00019253782968962292, 0.0, 0.0, 0.0,
    0.50000004899463513, 5.7864472062386815E-18, -0.50000004899463524,
    1.2632518398512618E-14, 500000.04899463535, -500000.04899463535,
    5.8200921886032269E-11, 499999.95100536465, -499999.95100536454,
    500000.04918717319, -1.0000000983743464E+6, -5.8187872095828662E-11,
    -0.000192537876492422, 0.00019253777189904981, 0.0, 0.0, 0.0,
    -5.8203918696373592E-17, 0.50000004899463513, -0.50000004899463535,
    0.012041795567687814, -2.1001545039200965E-5, -2.1001545039475986E-5,
    -0.012041795567687631, 2.1001545039200965E-5, 2.1001545039474519E-5,
    0.012062799481421324, 5.8436299011294609E-16, 0.024083593499946109,
    -4.200309420204979E-5, -4.2003094202873378E-5, 1.0, 0.0, 0.0,
    1.2041795567687315E-8, -2.1001545038879681E-11, -2.1001545039205452E-11,
    -2.1001545039396036E-5, 0.0120417955676876, -2.1001545039252207E-5,
    2.10015450393058E-5, -0.0120417955676876, 2.100154503925074E-5,
    -0.012062799481421469, 0.012062799481421357, -4.2003094202593382E-5,
    0.024083593499945818, -4.2003094202425819E-5, 0.0, 1.0, 0.0,
    -2.1001545039149627E-11, 1.2041795567687242E-8, -2.1001545039510681E-11,
    -2.1001545039405706E-5, -2.1001545039389575E-5, 0.012041795567687736,
    2.1001545039311374E-5, 2.1001545039389575E-5, -0.012041795567687738,
    1.5251198798057377E-16, -0.012062799481421943, -4.2003094202605607E-5,
    -4.2003094202866269E-5, 0.024083593499946213, 0.0, 0.0, 1.0,
    -2.1001545039154625E-11, -2.1001545039351242E-11, 1.2041795567687727E-8 },

  // Computed Parameter: StateSpace_P2_Size
  //  Referenced by: '<S304>/State-Space'

  { 17.0, 11.0 },

  // Expression: imag(S.H)
  //  Referenced by: '<S304>/State-Space'

  { -0.0024162054142526121, -6.0968417320745218E-5, -6.0968417286771871E-5,
    0.00241620541688326, 6.0968417320745218E-5, 6.0968417283676366E-5,
    -0.0023552374620576942, -2.5821789305119531E-14, -0.0048324113055864433,
    -0.00012193684660485079, -0.00012193684657193433, 0.0, 0.0, 0.0,
    -2.4162054155643248E-9, -6.096841732566992E-11, -6.0968417302146338E-11,
    -6.0968417317400888E-5, -0.0024162054142441332, -6.0968417293266263E-5,
    6.09684173048297E-5, 0.0024162054168962339, 6.0968417293723471E-5,
    0.0023552374620549729, -0.0023552374620639904, -0.00012193684659119318,
    -0.0048324113055764548, -0.00012193684658492312, 0.0, 0.0, 0.0,
    -6.0968417324272993E-11, -2.4162054155541455E-9, -6.0968417295326441E-11,
    -6.0968417315166076E-5, -6.0968417313486972E-5, -0.0024162054142243708,
    6.0968417302594894E-5, 6.0968417313486972E-5, 0.0024162054168751523,
    -7.5494955442110935E-15, 0.0023552374620669555, -0.00012193684659027627,
    -0.00012193684657612345, -0.0048324113055826174, 0.0, 0.0, 0.0,
    -6.0968417322367362E-11, -6.0968417308658731E-11, -2.4162054155603026E-9,
    0.0024162054169064892, 6.0968417320745218E-5, 6.0968417286771871E-5,
    -0.0024162054142329355, -6.0968417320745218E-5, -6.0968417283676366E-5,
    0.0023552374594002644, 2.5821789305119531E-14, 0.0048324113055864433,
    0.00012193684660485079, 0.00012193684657193433, 0.0, 0.0, 0.0,
    2.4162054155643248E-9, 6.096841732566992E-11, 6.0968417302152955E-11,
    6.0968417315166076E-5, 0.0024162054168957755, 6.096841729418282E-5,
    -6.0968417302594894E-5, -0.0024162054142436748, -6.0968417294640028E-5,
    -0.0023552374594042469, 0.0023552374594069617, 0.00012193684659027627,
    0.0048324113055719844, 0.00012193684658675622, 0.0, 0.0, 0.0,
    6.09684173257555E-11, 2.4162054155539337E-9, 6.0968417295742719E-11,
    6.0968417317400888E-5, 6.096841731394542E-5, 0.0024162054168773311,
    -6.09684173048297E-5, -6.096841731394542E-5, -0.0024162054142239115,
    7.1481372749046519E-15, -0.0023552374594170322, 0.00012193684659119318,
    0.00012193684658059307, 0.0048324113055807846, 0.0, 0.0, 0.0,
    6.0968417324272993E-11, 6.0968417308870308E-11, 2.4162054155583546E-9,
    -0.0023552374620727993, -7.429057242985929E-15, 0.0023552374620737638,
    0.0023552374594112179, 7.429057242985929E-15, -0.0023552374594211821,
    -0.0023552379218782491, -0.0023552379219238936, -0.0047104753839623693,
    -2.7904561987110384E-14, 0.004710475383976751, 0.0, 0.0, 0.0,
    -2.3552374607237591E-9, -1.5833046759982387E-20, 2.3552374607392245E-9,
    -3.6271121151101234E-16, -0.0023552374620656106, 0.0023552374620653084,
    3.6093710009488087E-16, 0.0023552374594130281, -0.0023552374594127262,
    0.0023552379218938022, -0.0047104758437887, -7.240956253773078E-16,
    -0.004710475383961632, 0.0047104753839598374, 0.0, 0.0, 0.0,
    -3.6018108043170387E-22, -2.3552374607274434E-9, 2.3552374607465368E-9,
    -2.4030369110888418E-6, 8.2144453262576661E-7, 8.2144463845490457E-7,
    2.4030376628617465E-6, -8.2144453262576661E-7, -8.21444638443241E-7,
    -3.2244836188778064E-6, 1.047682792332266E-12, -4.8060754334883422E-6,
    1.642890316343636E-6, 1.6428894876959738E-6, 0.0, 0.0, 0.0,
    -2.4030388112960131E-12, 8.214457306273657E-13, 8.2144564158462009E-13,
    8.2144432960527784E-7, -2.4030374400422771E-6, 8.2144464393001087E-7,
    -8.2144470541315053E-7, 2.4030374400422771E-6, -8.2144464391751057E-7,
    3.2244832900475414E-6, -3.2244834843047892E-6, 1.6428893901601915E-6,
    -4.8060758968844009E-6, 1.6428894987948129E-6, 0.0, 0.0, 0.0,
    8.2144527959034207E-13, -2.4030387830514533E-12, 8.2144367115687089E-13,
    8.2144432929184675E-7, 8.2144465522479447E-7, -2.4030375345766318E-6,
    -8.21444705256879E-7, -8.2144465522479447E-7, 2.4030375345524689E-6,
    3.288302641356164E-13, 3.2244824366219966E-6, 1.6428893896792418E-6,
    1.6428889268918582E-6, -4.806075640139692E-6, 0.0, 0.0, 0.0,
    8.2144527951398549E-13, 8.2144480023240284E-13, -2.4030375649331752E-12 },

  // Computed Parameter: StateSpace_P3_Size
  //  Referenced by: '<S304>/State-Space'

  { 6.0, 1.0 },

  // Expression: S.Rswitch
  //  Referenced by: '<S304>/State-Space'

  { 0.001, 0.001, 0.001, 0.001, 0.001, 0.001 },

  // Computed Parameter: StateSpace_P4_Size
  //  Referenced by: '<S304>/State-Space'

  { 1.0, 5.0 },

  // Expression: S.InputsNonZero
  //  Referenced by: '<S304>/State-Space'

  { 7.0, 8.0, 9.0, 10.0, 11.0 },

  // Expression: -Actuator_Lookup.angle
  //  Referenced by: '<S229>/Angle to Extension'

  { -72.203738875408817, -72.202445001338887, -72.199858079807044,
    -72.186939958354472, -72.1227561163285, -71.811383684979788,
    -71.514316312946846, -71.1406770524173, -70.785585639599745,
    -70.368911049374631, -69.972987694813227, -69.495521563386646,
    -69.042475669160311, -68.493756041243188, -67.973826269054044,
    -67.339861197480616, -66.740043682137355, -66.002397987520354,
    -65.305609489796851, -64.439091188358219, -63.62206993062162,
    -62.623060581317063, -61.68153909716667, -60.494415552179746,
    -59.377587654753654, -57.986903192975234, -56.679079425979523,
    -55.028884205625253, -53.477772362019977, -51.491530152282735,
    -49.625269069096611, -47.208324210303225, -44.936622763113654,
    -41.944502074051975, -39.128426047242513, -35.470818041905972,
    -32.011652995005626, -27.863441101060872, -23.896185138023959,
    -19.112761741651653, -14.480079412071008, -9.9507022095673516,
    -5.4871425231163435, -1.0579677951335154, -7.5465129934665976E-13,
    8.6818242044916765E-15, 1.6368642238881346, 4.9158773651216352,
    9.5364589317321009, 14.217379658993947, 18.990140689746017,
    23.890455416047008, 28.9610506330855, 34.255872255462776, 39.847017753536818,
    45.837283771464563, 52.38552362456732, 59.766133247666509,
    64.833712106233477, 70.638646563128063, 74.195005865216544,
    78.255981340859719, 80.695154776224612, 83.44678218739098, 85.8755769976522,
    87.893425554047681, 89.600116046478917, 91.009660432739935, 92.1769986860601,
    93.151142131688047, 93.987592038340665, 94.565213082067032,
    95.19321774835845, 95.67071678517604, 96.188836733361882, 96.760169257540568,
    97.214802871479293, 97.552177079836383, 97.9189747101887, 98.324584863378533,
    98.6402227690008, 98.8726764213678, 99.125486774661852, 99.316504465287522,
    99.523713540017312, 99.752099928643588, 99.934870430719783,
    100.0706655020248 },

  // Expression: Actuator_Lookup.extension
  //  Referenced by: '<S229>/Angle to Extension'

  { -0.445, -0.44499851295792359, -0.4449955388737708, -0.44498066845300671,
    -0.44490631634918626, -0.444534555830084, -0.44416279531098174,
    -0.44367156043022177, -0.44318032554946185, -0.44257364232146157,
    -0.44196695909346129, -0.44119624463867224, -0.4404255301838832,
    -0.439440794689992, -0.43845605919610076, -0.43718755157002576,
    -0.4359190439439507, -0.43426836926151019, -0.43261769457906968,
    -0.430441738606885, -0.42826578263470039, -0.42544245322014695,
    -0.42261912380559352, -0.41883687359709387, -0.41505462338859422,
    -0.41004553185479542, -0.40503644032099656, -0.39831079593121443,
    -0.39158515154143236, -0.38241576575274744, -0.37324637996406251,
    -0.36060202877227843, -0.34795767758049428, -0.33023707278225073,
    -0.31251646798400723, -0.28810448893341145, -0.26369250988281573,
    -0.23290746861555217, -0.20212242734828864, -0.16354433878744712,
    -0.12496625022660562, -0.086388161665764129, -0.047810073104922635,
    -0.0092319845440810844, -6.7168492989821971E-15, 5.5511151231257827E-17,
    0.014282400686160046, 0.042847202058480027, 0.082847202058480007,
    0.12284720205848004, 0.16284720205848019, 0.20284720205848022,
    0.24284720205848026, 0.2828472020584803, 0.32284720205848033,
    0.36284720205848037, 0.4028472020584804, 0.44284720205848044,
    0.46697791947878936, 0.49110863689909839, 0.50397729978438077,
    0.51684596266966332, 0.52362399690608052, 0.530402031142498,
    0.5356129194825312, 0.53938749559650412, 0.54218489053100272,
    0.5442210965651848, 0.54571911738149725, 0.54683834751282157,
    0.547704215127472, 0.5482507676273296, 0.54879732012718718,
    0.549179626692526, 0.54956193325786473, 0.54994423982320328,
    0.55021901981914345, 0.55040605826336808, 0.55059309670759249,
    0.55078013515181712, 0.55091130027211777, 0.5509998459065113,
    0.55108839154090483, 0.55114993536742785, 0.55121147919395086,
    0.55127302302047387, 0.551317523019274, 0.55134785018766963 }
};

//
// File trailer for generated code.
//
// [EOF]
//