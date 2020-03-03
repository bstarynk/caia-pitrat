#include "dx.h"
void TRADREW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V29=0,V=0,W=0;
int RR,A,B,R,BK;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=65;
x[jvj+1]=11807;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==936&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; R=pile[v[22]+3]; BK=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=R; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,R,jvj+50)*/
pile[WZ3]=82; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+48)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-11438); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,(-11438),jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=436; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,436,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=111; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+50,jvj+49,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+36; 
(*f[180])( );     /*TRIENS0(jvj+35,(-20),105,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+36,42,100,jvj+9)*/
pile[v[22]]=R; pile[WZ1]=RR; pile[WZ2]=jvj+8; 
(*f[1236])( );     /*TRADWA0(R,RR,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=1682; pile[WZ2]=BK; 
(*f[35])( );     /*CHGC1(jvj+8,1682,BK)*/
pile[WZ1]=1738; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+8,1738,jvj+9)*/
pile[v[22]]=1688; pile[WZ1]=RR; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1688,RR,jvj+17)*/
l4:if((x[jvj+17]>0)) goto l5;
x[jvj+16]=incon;
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,B,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1653)) goto l3;
pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,B,jvj+16)*/
l15:pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=459; pile[WZ3]=228; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(447,68,459,228,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+8; pile[WZ2]=jvj+16; pile[WZ3]=jvj+20; 
(*f[1234])( );if(v[102]) goto l6;     /*TRADCREE0(jvj+19,jvj+8,jvj+16,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ2]=129; pile[WZ3]=jvj+9; pile[WZ4]=jvj+21; 
(*f[1232])( );     /*CORRECTIF0(jvj+20,jvj+8,129,jvj+9,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ2]=228; pile[WZ3]=jvj+22; 
(*f[1233])( );if(v[102]) goto l6;     /*MISENFORME0(jvj+21,jvj+8,228,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+53)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-11915); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,(-11915),jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=436; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,436,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=111; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,111,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+54; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+23,jvj+54,jvj+24)*/
pile[v[22]]=jvj+9; pile[WZ1]=105; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+9,105,jvj+24)*/
l6:pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[1230])( );if(v[102]) goto l8;     /*TRADMATCH0(jvj+8,A,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+25)*/
x[jvj+26]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=651)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+10,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+13,V)*/
V=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+41)*/
pile[WZ3]=(-11914); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-11914),jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+40,jvj+26)*/
l7:pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+26)*/
l8:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,B,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=1653)) goto l9;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,B,jvj+29)*/
pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(447,68,459,865,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=RR; pile[WZ2]=jvj+29; pile[WZ3]=jvj+31; 
(*f[1234])( );if(v[102]) goto l9;     /*TRADCREE0(jvj+30,RR,jvj+29,jvj+31)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+31)*/
l9:pile[v[22]]=R; pile[WZ1]=jvj+32; 
(*f[1235])( );     /*Z16Z0(R,jvj+32)*/
x[jvj+7]=0 ;z[jvj+7]=0;
l1:if((x[jvj+32]<=0)) goto l10;
x[jvj+2]=s[x[jvj+32]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+32];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=43)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+4,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=365)) goto l2;
V29=V38;
pile[v[22]]=jvj+7; pile[WZ1]=V29; 
(*f[331])( );     /*PLUE3(jvj+7,V29)*/
l2:x[jvj+32]=t[x[jvj+32]];
goto l1;
l3:x[jvj+16]=x[B] ;z[jvj+16]=z[B];
goto l15;
l5:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1231])( );     /*TRADRIF0(jvj+18,jvj+8,jvj+9)*/
x[jvj+17]=t[x[jvj+17]];
goto l4;
l11:W=s[x[jvj+7]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+55)*/
pile[WZ3]=202; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,202,jvj+62)*/
pile[WZ3]=170; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,170,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=103; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+62,jvj+61,jvj+59)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+59,jvj+58,jvj+33)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+33)*/
x[jvj+7]=t[x[jvj+7]];
l10:if((x[jvj+7]>0)) goto l11;
pile[v[22]]=80; pile[WZ1]=jvj+8; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(80,jvj+8,jvj+34)*/
if((x[jvj+34]==616)) goto l13;
l12:pile[v[22]]=jvj+9; 
(*f[1237])( );     /*TOUCHEFINALE0(jvj+9)*/
pile[v[22]]=BK; 
(*f[365])( );     /*STK0(BK)*/
pile[v[22]]=R; pile[WZ1]=1856; pile[WZ2]=BK; 
(*f[36])( );     /*PLUSC0(R,1856,BK)*/
pile[v[22]]=BK; pile[WZ1]=184; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(BK,184,jvj+9)*/
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l14:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-11914); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-11914),jvj+45)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,jvj+25,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+44,jvj+26)*/
goto l7;
}
