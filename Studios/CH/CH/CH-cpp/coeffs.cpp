
#include "coeffs.h"


I N_d1acc2 = 3;
I N_d1acc4 = 5;
I N_d1acc6 = 7;
I N_d1acc8 = 9;
COEFFS d1acc2[] = {                                       -1/ 2.0,    0     ,    1/ 2.0                                     };
COEFFS d1acc4[] = {                          1/ 12.0,     -2/ 3.0,    0     ,    2/ 3.0,    -1/ 12.0                        };
COEFFS d1acc6[] = {            -1/ 60.0,     3/ 20.0,     -3/ 4.0,    0     ,    3/ 4.0,    -3/ 20.0,    1/ 60.0            };
COEFFS d1acc8[] = {1/280.0,    -4/105.0,     1/  5.0,     -4/ 5.0,    0     ,    4/ 5.0,    -1/  5.0,    4/105.0,   -1/280.0};

//d2 central:
I N_d2acc2 = 3;
I N_d2acc4 = 5;
I N_d2acc6 = 7;
I N_d2acc8 = 9;
COEFFS d2acc2[] = {                                        1     ,   -2     ,    1                                          };
COEFFS d2acc4[] = {                         -1/ 12.0,      4/ 3.0,   -5/ 2.0,    4/ 3.0,    -1/ 12.0                        };
COEFFS d2acc6[] = {             1/ 90.0,    -3/ 20.0,      3/ 2.0,  -49/18.0,    3/ 2.0,    -3/ 20.0,    1/ 90.0            };
COEFFS d2acc8[] = {-1/560.0,    8/315.0,    -1/  5.0,      8/ 5.0, -205/72.0,    8/ 5.0,    -1/  5.0,    8/315.0,   -1/560.0};

//d3 central:
I N_d3acc2 = 5;
I N_d3acc4 = 7;
I N_d3acc6 = 9;
COEFFS d3acc2[] = {                         -1/  2.0,      1     ,    0     ,   -1     ,     1/  2.0                        };
COEFFS d3acc4[] = { 	           1/  8.0,    -1      ,     13/ 8.0,    0     ,  -13/ 8.0,     1      ,   -1/  8.0            };
COEFFS d3acc6[] = {-7/240.0,    3/ 10.0,  -169/120.0,	 61/30.0,    0     ,  -61/30.0,   169/120.0,   -3/ 10.0,    7/240.0};

//d4 central:
I N_d4acc2 = 5;
I N_d4acc4 = 7;
I N_d4acc6 = 9;
COEFFS d4acc2[] = {                          1      ,     -4     ,    6     ,   -4     ,     1                              };
COEFFS d4acc4[] = {  	      -1/  6.0,     2	   ,    -13/ 2.0,   28/ 3.0,  -13/ 2.0,     2      ,   -1/  6.0            };
COEFFS d4acc6[] = { 7/240.0,   -2/  5.0,   169/ 60.0,   -122/15.0,   91/ 8.0, -122/15.0,   169/ 60.0,   -2/  5.0,    7/240.0};



// Forward & backward coeffs.

// d1 bw fw:
I N_d1acc1fb = 2;
I N_d1acc2fb = 3;
I N_d1acc3fb = 4;
I N_d1acc4fb = 5;
I N_d1acc5fb = 6;
I N_d1acc6fb = 7;
COEFFS d1acc1fb[] = {  -1     ,    1};
COEFFS d1acc2fb[] = {  -3/ 2.0,    2,     -1/2.0};
COEFFS d1acc3fb[] = { -11/ 6.0,    3,     -3/2.0,     1/3.0};
COEFFS d1acc4fb[] = { -25/12.0,    4,     -3    ,     4/3.0,     -1/4.0};
COEFFS d1acc5fb[] = {-137/60.0,    5,     -5    ,    10/3.0,     -5/4.0,    1/5.0};
COEFFS d1acc6fb[] = { -49/20.0,    6,    -15/2.0,    20/3.0,    -15/4.0,    6/5.0,    -1/6.0};

// d2 bw fw:
I N_d2acc1fb = 3;
I N_d2acc2fb = 4;
I N_d2acc3fb = 5;
I N_d2acc4fb = 6;
I N_d2acc5fb = 7;
I N_d2acc6fb = 8;
COEFFS d2acc1fb[] = {   1     ,   -2, 1};
COEFFS d2acc2fb[] = {   2     ,   -5, 4  ,  -1};
COEFFS d2acc3fb[] = {  35/12.0,  -26/ 3.0,  19/ 2.0,  -14/ 3.0, 11/12.0};
COEFFS d2acc4fb[] = {  15/ 4.0,  -77/ 6.0, 107/ 6.0,  -13     , 61/12.0,   -5/ 6.0};
COEFFS d2acc5fb[] = { 203/45.0,  -87/ 5.0, 117/ 4.0, -254/ 9.0, 33/ 2.0,  -27/ 5.0,  137/180.0};
COEFFS d2acc6fb[] = { 469/90.0, -223/10.0, 879/20.0, -949/18.0, 41     , -201/10.0, 1019/180.0, -7/10.0};

// d3 bw fw:
I N_d3acc1fb = 4;
I N_d3acc2fb = 5;
I N_d3acc3fb = 6;
I N_d3acc4fb = 7;
I N_d3acc5fb = 8;
I N_d3acc6fb = 9;
COEFFS d3acc1fb[] = {  -1      ,   3     ,     -3      ,    1};
COEFFS d3acc2fb[] = {  -5/  2.0,	  9     ,    -12      ,    7     ,	   -3/ 2.0};
COEFFS d3acc3fb[] = { -17/  4.0,	 71/ 4,0,    -59/  2.0,   49/ 2.0,    -41/ 4.0,	   7/ 4.0};
COEFFS d3acc4fb[] = { -49/  8.0,	 29     ,   -461/  8.0,   62     ,	 -307/ 8.0,	  13     ,    -15/  8.0};
COEFFS d3acc5fb[] = {-967/120.0,	638/15.0,  -3929/ 40.0,  389/ 3.0,	-2545/24.0,	 268/ 5.0,	-1849/120.0,  29/15.0};
COEFFS d3acc6fb[] = {-801/ 80.0,	349/ 6.0, -18353/120.0, 2391/10.0,	-1457/ 6.0,	4891/30.0,	 -561/  8.0, 527/30.0, -469/240.0};

// d4 bw fw:
I N_d4acc1fb = 5;
I N_d4acc2fb = 6;
I N_d4acc3fb = 7;
I N_d4acc4fb = 8;
I N_d4acc5fb = 9;
COEFFS d4acc1fb[] = {   1     ,     -4     ,     6	  ,    -4    ,     1};
COEFFS d4acc2fb[] = {   3     ,    -14     ,    26	  ,   -24    ,    11     ,    -2};
COEFFS d4acc3fb[] = {  35/ 6.0,	  -31     ,   137/ 2.0,  -242/3.0,   107/ 2.0,   -19     ,   17/ 6.0,};
COEFFS d4acc4fb[] = {  28/ 3.0,	 -111/ 2.0,   142     , -1219/6.0,   176     ,  -185/ 2.0,   82/ 3.0,   -7/ 2.0};
COEFFS d4acc5fb[] = {1069/80.0,	-1316/15.0, 15289/60.0, -2144/5.0, 10993/24.0, -4772/15.0, 2803/20.0, -536/15.0, 967/240.0};
