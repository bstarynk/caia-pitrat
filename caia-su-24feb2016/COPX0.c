#include "dx.h"
void COPX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,F=0,AT=0,V11=0,W=0,V51=0,V67=0,V73=0,V163=0,V23=0,V151=0,V124=0,V103=0,V104=0;
int R,Y,RM,BT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=232;
x[jvj+1]=10106;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2153&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Y=pile[v[22]+1]; RM=pile[v[22]+2]; BT=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+2; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+2)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(R,BT,jvj+2)*/
pile[v[22]]=RM; pile[WZ1]=V; pile[WZ2]=jvj+3; 
(*f[2152])( );     /*COPXX0(RM,V,jvj+3)*/
pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,Y,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+44,jvj+9)*/
if((x[jvj+9]==427)) goto l13;
if((x[jvj+9]!=426)) goto l16;
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,Y,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+13,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=424)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+50)*/
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,Y,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+51,jvj+52)*/
(*f[1817])( );     /*NOUV2(V163)*/
V163=pile[v[22]]; 
x[jvj+43]=0 ;z[jvj+43]=0;
x[jvj+39]=d[76];z[jvj+39]=0;
l10:if((x[jvj+50]>0)) goto l11;
pile[v[22]]=jvj+43; pile[WZ1]=jvj+53; 
(*f[299])( );     /*COPEL0(jvj+43,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+159; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+159)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V163; pile[WZ4]=jvj+162; 
(*f[270])( );     /*QUADRI7(100,21,140,V163,jvj+162)*/
pile[v[22]]=jvj+159; pile[WZ1]=111; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+159,111,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+161; 
(*f[58])( );     /*TRI3(jvj+160,jvj+52,103,jvj+161)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+162; pile[WZ4]=jvj+161; pile[WZ5]=jvj+158; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+162,jvj+161,jvj+158)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+167; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+167)*/
pile[WZ3]=V163; pile[WZ4]=jvj+165; 
(*f[270])( );     /*QUADRI7(100,21,140,V163,jvj+165)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=430; pile[WZ4]=jvj+163; 
(*f[181])( );     /*QUADRI2(100,20,101,430,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=111; pile[WZ2]=jvj+164; 
(*f[54])( );     /*TRI1(jvj+163,111,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=jvj+165; pile[WZ2]=103; pile[WZ3]=jvj+166; 
(*f[58])( );     /*TRI3(jvj+164,jvj+165,103,jvj+166)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+167; pile[WZ4]=jvj+166; pile[WZ5]=jvj+156; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+167,jvj+166,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+157; 
(*f[180])( );     /*TRIENS0(jvj+156,(-20),105,jvj+157)*/
pile[v[22]]=jvj+157; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+157,42,100,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=107; pile[WZ2]=jvj+158; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+158)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+53,jvj+54,107)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+54; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+54)*/
l3:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]==424)) goto l16;
l15:pile[v[22]]=jvj+13; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+55)*/
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,Y,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[255])( );     /*COPEXP0(jvj+56,jvj+57)*/
(*f[1817])( );     /*NOUV2(V23)*/
V23=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+172)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V23; pile[WZ4]=jvj+175; 
(*f[270])( );     /*QUADRI7(100,21,140,V23,jvj+175)*/
pile[v[22]]=jvj+172; pile[WZ1]=111; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,111,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+174; 
(*f[58])( );     /*TRI3(jvj+173,jvj+55,103,jvj+174)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+175; pile[WZ4]=jvj+174; pile[WZ5]=jvj+170; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+175,jvj+174,jvj+170)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+176; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+176)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V23; pile[WZ4]=jvj+179; 
(*f[270])( );     /*QUADRI7(100,21,140,V23,jvj+179)*/
pile[v[22]]=jvj+176; pile[WZ1]=111; pile[WZ2]=jvj+177; 
(*f[54])( );     /*TRI1(jvj+176,111,jvj+177)*/
pile[v[22]]=jvj+177; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+178; 
(*f[58])( );     /*TRI3(jvj+177,jvj+57,103,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+179; pile[WZ4]=jvj+178; pile[WZ5]=jvj+171; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+179,jvj+178,jvj+171)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+184; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+184)*/
pile[WZ3]=V23; pile[WZ4]=jvj+182; 
(*f[270])( );     /*QUADRI7(100,21,140,V23,jvj+182)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=430; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,430,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=111; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,111,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+182; pile[WZ2]=103; pile[WZ3]=jvj+183; 
(*f[58])( );     /*TRI3(jvj+181,jvj+182,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+184; pile[WZ4]=jvj+183; pile[WZ5]=jvj+168; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+184,jvj+183,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+169; 
(*f[180])( );     /*TRIENS0(jvj+168,(-20),105,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+169,42,100,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=107; pile[WZ2]=jvj+170; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+170)*/
pile[WZ2]=jvj+171; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+171)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+58; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+58)*/
l16:if(x[jvj+9]!=1868&&x[jvj+9]!=739) goto l17;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,Y,jvj+59)*/
if((x[jvj+59]!=22)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,Y,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; 
(*f[255])( );     /*COPEXP0(jvj+60,jvj+61)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,Y,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
(*f[1817])( );     /*NOUV2(V151)*/
V151=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+189)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V151; pile[WZ4]=jvj+192; 
(*f[270])( );     /*QUADRI7(100,21,140,V151,jvj+192)*/
pile[v[22]]=jvj+189; pile[WZ1]=111; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,111,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+191; 
(*f[58])( );     /*TRI3(jvj+190,jvj+61,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+192; pile[WZ4]=jvj+191; pile[WZ5]=jvj+187; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+192,jvj+191,jvj+187)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+193; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+193)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V151; pile[WZ4]=jvj+196; 
(*f[270])( );     /*QUADRI7(100,21,140,V151,jvj+196)*/
pile[v[22]]=jvj+193; pile[WZ1]=111; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(jvj+193,111,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=jvj+63; pile[WZ2]=103; pile[WZ3]=jvj+195; 
(*f[58])( );     /*TRI3(jvj+194,jvj+63,103,jvj+195)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+196; pile[WZ4]=jvj+195; pile[WZ5]=jvj+188; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+196,jvj+195,jvj+188)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+201; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+201)*/
pile[WZ3]=V151; pile[WZ4]=jvj+199; 
(*f[270])( );     /*QUADRI7(100,21,140,V151,jvj+199)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=430; pile[WZ4]=jvj+197; 
(*f[181])( );     /*QUADRI2(100,20,101,430,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=111; pile[WZ2]=jvj+198; 
(*f[54])( );     /*TRI1(jvj+197,111,jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=jvj+199; pile[WZ2]=103; pile[WZ3]=jvj+200; 
(*f[58])( );     /*TRI3(jvj+198,jvj+199,103,jvj+200)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+201; pile[WZ4]=jvj+200; pile[WZ5]=jvj+185; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+201,jvj+200,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+186; 
(*f[180])( );     /*TRIENS0(jvj+185,(-20),105,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+186,42,100,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=107; pile[WZ2]=jvj+187; 
(*f[36])( );     /*PLUSC0(jvj+64,107,jvj+187)*/
pile[WZ2]=jvj+188; 
(*f[36])( );     /*PLUSC0(jvj+64,107,jvj+188)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+64; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+64)*/
l17:if(x[jvj+9]!=424&&x[jvj+9]!=850) goto l25;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,Y,jvj+65)*/
if((x[jvj+65]!=22)) goto l25;
pile[v[22]]=107; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(107,Y,jvj+66)*/
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(218,jvj+9,jvj+67)*/
x[jvj+232]=x[jvj+66] ;z[jvj+232]=z[jvj+66];
l18:if((x[jvj+232]<=0)) goto l23;
x[jvj+24]=s[x[jvj+232]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+232];
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+24,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]!=623)) goto l20;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+24,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[255])( );     /*COPEXP0(jvj+70,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+207; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+207)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+67; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+67,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=111; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,111,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+206; 
(*f[58])( );     /*TRI3(jvj+205,jvj+71,103,jvj+206)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+207; pile[WZ4]=jvj+206; pile[WZ5]=jvj+202; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+207,jvj+206,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+203; 
(*f[180])( );     /*TRIENS0(jvj+202,(-20),105,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+203,42,100,jvj+72)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+72; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+72)*/
l20:V124=x[jvj+69];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+24,jvj+73)*/
if((x[jvj+73]!=22)) goto l21;
pile[v[22]]=708; pile[WZ1]=jvj+9; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(708,jvj+9,jvj+74)*/
if((V124!=x[jvj+74])) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+75)*/
x[jvj+38]=0 ;z[jvj+38]=0;
x[jvj+231]=x[jvj+75] ;z[jvj+231]=z[jvj+75];
l8:if((x[jvj+231]>0)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+24,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+77; 
(*f[255])( );     /*COPEXP0(jvj+76,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+214; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+214)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+67; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+67,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=111; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,111,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=jvj+77; pile[WZ2]=103; pile[WZ3]=jvj+213; 
(*f[58])( );     /*TRI3(jvj+212,jvj+77,103,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+214; pile[WZ4]=jvj+213; pile[WZ5]=jvj+209; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+214,jvj+213,jvj+209)*/
pile[v[22]]=jvj+38; pile[WZ1]=107; pile[WZ2]=jvj+208; 
(*f[300])( );     /*TRI10(jvj+38,107,jvj+208)*/
pile[v[22]]=jvj+209; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+210; 
(*f[298])( );     /*TRIENS1(jvj+209,(-20),jvj+208,105,jvj+210)*/
pile[v[22]]=jvj+210; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+210,42,100,jvj+78)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+78; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+78)*/
l21:pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+24,jvj+79)*/
if(x[jvj+79]==69||x[jvj+79]==20||x[jvj+79]==89||x[jvj+79]==96||x[jvj+79]==41) goto l22;
if((x[jvj+79]!=43)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+25,jvj+26)*/
V67=x[jvj+26];
if((V73=w[V67][1])==incon) goto l19;
if((V73!=23)) goto l22;
l19:x[jvj+232]=t[x[jvj+232]];
goto l18;
l1:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
F=x[jvj+6];
if(F==623||F==267||F==156) goto l24;
l2:pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(218,jvj+9,jvj+10)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+11)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+109; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+109)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+112)*/
pile[v[22]]=jvj+109; pile[WZ1]=111; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,111,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+111; 
(*f[58])( );     /*TRI3(jvj+110,jvj+11,103,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+112,jvj+111,jvj+105)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+117; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+117)*/
pile[WZ3]=W; pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+115)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=111; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,111,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=jvj+115; pile[WZ2]=103; pile[WZ3]=jvj+116; 
(*f[58])( );     /*TRI3(jvj+114,jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+116; pile[WZ5]=jvj+107; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+117,jvj+116,jvj+107)*/
pile[v[22]]=jvj+105; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+106; 
(*f[180])( );     /*TRIENS0(jvj+105,(-20),107,jvj+106)*/
pile[v[22]]=jvj+107; pile[WZ2]=jvj+106; pile[WZ3]=105; pile[WZ4]=jvj+108; 
(*f[298])( );     /*TRIENS1(jvj+107,(-20),jvj+106,105,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+108,42,100,jvj+12)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+12)*/
l24:x[jvj+66]=t[x[jvj+66]];
l23:if((x[jvj+66]<=0)) goto l25;
x[jvj+4]=s[x[jvj+66]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+66];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+4,jvj+82)*/
if(x[jvj+82]==69||x[jvj+82]==20||x[jvj+82]==89||x[jvj+82]==96||x[jvj+82]==41||x[jvj+82]==1317) goto l24;
if((x[jvj+82]==22)) goto l1;
if((x[jvj+82]!=43)) goto l2;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
AT=x[jvj+8];
if((V11=w[AT][1])==incon) goto l2;
if((V11!=23)) goto l24;
goto l2;
l5:x[jvj+16]=s[x[jvj+86]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+86];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+17)*/
x[jvj+86]=t[x[jvj+86]];
l4:if((x[jvj+86]>0)) goto l5;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,Y,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; 
(*f[255])( );     /*COPEXP0(jvj+87,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+227; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+227)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+85; pile[WZ4]=jvj+224; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+85,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=111; pile[WZ2]=jvj+225; 
(*f[54])( );     /*TRI1(jvj+224,111,jvj+225)*/
pile[v[22]]=jvj+225; pile[WZ1]=jvj+88; pile[WZ2]=103; pile[WZ3]=jvj+226; 
(*f[58])( );     /*TRI3(jvj+225,jvj+88,103,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+227; pile[WZ4]=jvj+226; pile[WZ5]=jvj+222; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+227,jvj+226,jvj+222)*/
pile[v[22]]=jvj+18; pile[WZ1]=107; pile[WZ2]=jvj+221; 
(*f[300])( );     /*TRI10(jvj+18,107,jvj+221)*/
pile[v[22]]=jvj+222; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+223; 
(*f[298])( );     /*TRIENS1(jvj+222,(-20),jvj+221,105,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+89; 
(*f[58])( );     /*TRI3(jvj+223,42,100,jvj+89)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+89; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+89)*/
l27:if(x[jvj+9]!=490&&x[jvj+9]!=491) goto l28;
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(107,Y,jvj+90)*/
pile[v[22]]=102; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,Y,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[255])( );     /*COPEXP0(jvj+91,jvj+92)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,Y,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; 
(*f[255])( );     /*COPEXP0(jvj+93,jvj+94)*/
(*f[1817])( );     /*NOUV2(V103)*/
V103=pile[v[22]]; 
x[jvj+29]=0 ;z[jvj+29]=0;
x[jvj+27]=d[40];z[jvj+27]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+137; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+137)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V103; pile[WZ4]=jvj+135; 
(*f[270])( );     /*QUADRI7(100,21,140,V103,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=436; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+135,436,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; pile[WZ2]=111; pile[WZ3]=jvj+138; 
(*f[58])( );     /*TRI3(jvj+136,jvj+137,111,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+138; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+94,jvj+138,jvj+28)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[196])( );     /*PLUF0(jvj+27,jvj+28,jvj+29)*/
l6:if((x[jvj+90]>0)) goto l7;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+95; 
(*f[299])( );     /*COPEL0(jvj+29,jvj+95)*/
(*f[1817])( );     /*NOUV2(V104)*/
V104=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+99)*/
pile[WZ3]=255; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,255,jvj+230)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V104; pile[WZ4]=jvj+228; 
(*f[270])( );     /*QUADRI7(100,21,140,V104,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+229; 
(*f[180])( );     /*TRIENS0(jvj+228,(-20),128,jvj+229)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+230; pile[WZ4]=jvj+229; pile[WZ5]=jvj+101; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+230,jvj+229,jvj+101)*/
pile[v[22]]=jvj+99; pile[WZ1]=337; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,337,jvj+100)*/
pile[v[22]]=jvj+101; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+102; 
(*f[298])( );     /*TRIENS1(jvj+101,(-20),jvj+100,105,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+97; 
(*f[58])( );     /*TRI3(jvj+102,42,100,jvj+97)*/
x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+31]=d[122];z[jvj+31]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+147; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+147)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V103; pile[WZ4]=jvj+145; 
(*f[270])( );     /*QUADRI7(100,21,140,V103,jvj+145)*/
pile[WZ3]=V; pile[WZ4]=jvj+143; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+143)*/
pile[WZ3]=V104; pile[WZ4]=jvj+139; 
(*f[270])( );     /*QUADRI7(100,21,140,V104,jvj+139)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+141)*/
pile[v[22]]=jvj+139; pile[WZ1]=436; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,436,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+141; pile[WZ2]=337; pile[WZ3]=jvj+142; 
(*f[58])( );     /*TRI3(jvj+140,jvj+141,337,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; pile[WZ2]=111; pile[WZ3]=jvj+144; 
(*f[58])( );     /*TRI3(jvj+142,jvj+143,111,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; pile[WZ2]=103; pile[WZ3]=jvj+146; 
(*f[58])( );     /*TRI3(jvj+144,jvj+145,103,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=492; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+146; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,492,102,jvj+147,jvj+146,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[196])( );     /*PLUF0(jvj+31,jvj+32,jvj+33)*/
x[jvj+34]=d[76];z[jvj+34]=0;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+151; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+151)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=430; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,430,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+92; pile[WZ2]=103; pile[WZ3]=jvj+150; 
(*f[58])( );     /*TRI3(jvj+149,jvj+92,103,jvj+150)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+151; pile[WZ4]=jvj+150; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+151,jvj+150,jvj+35)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=jvj+33; 
(*f[196])( );     /*PLUF0(jvj+34,jvj+35,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+96; 
(*f[299])( );     /*COPEL0(jvj+33,jvj+96)*/
pile[v[22]]=jvj+95; pile[WZ1]=107; pile[WZ2]=jvj+103; 
(*f[300])( );     /*TRI10(jvj+95,107,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+96; pile[WZ2]=105; pile[WZ3]=jvj+104; 
(*f[301])( );     /*TRI11(jvj+103,jvj+96,105,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+98; 
(*f[58])( );     /*TRI3(jvj+104,42,100,jvj+98)*/
pile[v[22]]=jvj+97; pile[WZ1]=184; pile[WZ2]=jvj+3; pile[WZ3]=jvj+97; 
(*f[1819])( );     /*COPV1(jvj+97,184,jvj+3,jvj+97)*/
pile[v[22]]=jvj+98; pile[WZ3]=jvj+98; 
(*f[1819])( );     /*COPV1(jvj+98,184,jvj+3,jvj+98)*/
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l7:x[jvj+30]=s[x[jvj+90]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+90];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+30)*/
x[jvj+90]=t[x[jvj+90]];
goto l6;
l9:x[jvj+36]=s[x[jvj+231]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+231];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+37)*/
pile[v[22]]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+38,jvj+37)*/
x[jvj+231]=t[x[jvj+231]];
goto l8;
l11:x[jvj+40]=s[x[jvj+50]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+50];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+152)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V163; pile[WZ4]=jvj+155; 
(*f[270])( );     /*QUADRI7(100,21,140,V163,jvj+155)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+154; 
(*f[58])( );     /*TRI3(jvj+153,jvj+41,103,jvj+154)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+155; pile[WZ4]=jvj+154; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+155,jvj+154,jvj+42)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[196])( );     /*PLUF0(jvj+39,jvj+42,jvj+43)*/
x[jvj+50]=t[x[jvj+50]];
goto l10;
l13:x[jvj+45]=d[20];z[jvj+45]=0;
l12:if((x[jvj+45]<=0)) goto l16;
x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=jvj+46; pile[WZ1]=Y; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+46,Y,jvj+21)*/
pile[v[22]]=268; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+46,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=Y; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+47,Y,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
(*f[1817])( );     /*NOUV2(V51)*/
V51=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+122; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+122)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V51; pile[WZ4]=jvj+125; 
(*f[270])( );     /*QUADRI7(100,21,140,V51,jvj+125)*/
pile[v[22]]=jvj+122; pile[WZ1]=111; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,111,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+124; 
(*f[58])( );     /*TRI3(jvj+123,jvj+20,103,jvj+124)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+125; pile[WZ4]=jvj+124; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+125,jvj+124,jvj+120)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V51; pile[WZ4]=jvj+129; 
(*f[270])( );     /*QUADRI7(100,21,140,V51,jvj+129)*/
pile[v[22]]=jvj+126; pile[WZ1]=111; pile[WZ2]=jvj+127; 
(*f[54])( );     /*TRI1(jvj+126,111,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+128; 
(*f[58])( );     /*TRI3(jvj+127,jvj+22,103,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+121; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+129,jvj+128,jvj+121)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+134; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+134)*/
pile[WZ3]=V51; pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,V51,jvj+132)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=430; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,430,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=111; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,111,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=jvj+132; pile[WZ2]=103; pile[WZ3]=jvj+133; 
(*f[58])( );     /*TRI3(jvj+131,jvj+132,103,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+134; pile[WZ4]=jvj+133; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+134,jvj+133,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+119; 
(*f[180])( );     /*TRIENS0(jvj+118,(-20),105,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+119,42,100,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=107; pile[WZ2]=jvj+120; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+120)*/
pile[WZ2]=jvj+121; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+121)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+23)*/
l14:x[jvj+45]=t[x[jvj+45]];
goto l12;
l22:pile[v[22]]=jvj+24; pile[WZ1]=jvj+80; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+220; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+220)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+67; pile[WZ4]=jvj+217; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+67,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=111; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,111,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=jvj+80; pile[WZ2]=103; pile[WZ3]=jvj+219; 
(*f[58])( );     /*TRI3(jvj+218,jvj+80,103,jvj+219)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+220; pile[WZ4]=jvj+219; pile[WZ5]=jvj+215; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+220,jvj+219,jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+216; 
(*f[180])( );     /*TRIENS0(jvj+215,(-20),105,jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+81; 
(*f[58])( );     /*TRI3(jvj+216,42,100,jvj+81)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+81; 
(*f[1824])( );     /*COPV2(184,jvj+3,jvj+81)*/
goto l19;
l25:pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,Y,jvj+83)*/
if((x[jvj+83]!=22)) goto l28;
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+84)*/
for(a=x[jvj+84];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l26;
goto l27;
l26:pile[v[22]]=145; pile[WZ1]=jvj+9; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(145,jvj+9,jvj+85)*/
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(107,Y,jvj+86)*/
x[jvj+18]=0 ;z[jvj+18]=0;
goto l4;
}
