#include "dx.h"
void CREXB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F,A,B,C,BA,R,BL;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=85;
x[jvj+1]=11826;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1248&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
F=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; BA=pile[v[22]+4]; R=pile[v[22]+5]; BL=pile[v[22]+6]; RR=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=R; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,R,jvj+64)*/
pile[WZ3]=82; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-11438); pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(100,21,140,(-11438),jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=436; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,436,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=111; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,111,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+64,jvj+63,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+58; 
(*f[180])( );     /*TRIENS0(jvj+57,(-20),105,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+2; 
(*f[58])( );     /*TRI3(jvj+58,42,100,jvj+2)*/
pile[v[22]]=BA; pile[WZ1]=1738; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(BA,1738,jvj+2)*/
pile[v[22]]=A; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(A,jvj+42)*/
pile[v[22]]=BA; pile[WZ2]=jvj+43; 
(*f[1230])( );if(v[102]) goto l7;     /*TRADMATCH0(BA,jvj+42,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+77)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+80)*/
pile[v[22]]=jvj+77; pile[WZ1]=111; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+77,111,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+79; 
(*f[58])( );     /*TRI3(jvj+78,jvj+44,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+79,jvj+45)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+45)*/
l7:pile[v[22]]=1871; pile[WZ1]=BL; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1871,BL,jvj+46)*/
pile[v[22]]=1836; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1836,jvj+46,jvj+47)*/
if((x[jvj+47]!=129)) goto l15;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+48)*/
pile[v[22]]=B; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[760])( );     /*MEMEX0(B,jvj+48,jvj+49)*/
if((x[jvj+49]==134)) goto l8;
l15:pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=459; pile[WZ3]=228; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(447,68,459,228,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=BA; pile[WZ2]=C; pile[WZ3]=jvj+55; 
(*f[1234])( );if(v[102]) goto l9;     /*TRADCREE0(jvj+54,BA,C,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ2]=129; pile[WZ3]=jvj+2; pile[WZ4]=jvj+25; 
(*f[1232])( );     /*CORRECTIF0(jvj+55,BA,129,jvj+2,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+25,jvj+35)*/
if((x[jvj+35]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+25,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[F]!=x[jvj+37])) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=F; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,F,jvj+59)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+59; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+59,jvj+34)*/
x[jvj+85]=w[1659][9];
l3:if((x[jvj+85]>0)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+71)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=436; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,436,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=111; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,111,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+72; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+34,jvj+72,jvj+38)*/
pile[v[22]]=jvj+2; pile[WZ1]=105; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+2,105,jvj+38)*/
l2:pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+25,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[F]==x[jvj+28])) goto l9;
l6:pile[v[22]]=jvj+25; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=jvj+39; 
(*f[1233])( );if(v[102]) goto l9;     /*MISENFORME0(jvj+25,BA,129,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+39,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+75)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=436; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,436,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=111; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,111,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+76; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+40,jvj+76,jvj+41)*/
pile[v[22]]=jvj+2; pile[WZ1]=105; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+2,105,jvj+41)*/
l9:pile[v[22]]=1688; pile[WZ1]=R; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1688,R,jvj+56)*/
l10:if((x[jvj+56]>0)) goto l11;
pile[v[22]]=jvj+2; pile[WZ1]=RR; 
(*f[1520])( );     /*CREXTRAD0(jvj+2,RR)*/
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; return;
l4:x[jvj+29]=s[x[jvj+85]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+85];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+29,jvj+25,jvj+30)*/
pile[v[22]]=1877; pile[WZ1]=jvj+29; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1877,jvj+29,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=F; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+31,F,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=BA; pile[WZ3]=jvj+33; 
(*f[1233])( );if(v[102]) goto l5;     /*MISENFORME0(jvj+30,BA,jvj+32,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[35])( );     /*CHGC1(jvj+34,jvj+29,jvj+33)*/
l5:x[jvj+85]=t[x[jvj+85]];
goto l3;
l8:pile[v[22]]=B; pile[WZ1]=jvj+50; 
(*f[255])( );     /*COPEXP0(B,jvj+50)*/
pile[v[22]]=BA; pile[WZ2]=jvj+51; 
(*f[1230])( );if(v[102]) goto l15;     /*TRADMATCH0(BA,jvj+50,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+51,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+81)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+84; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+84)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+82,jvj+52,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+83,jvj+53)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+53)*/
goto l15;
l11:x[jvj+3]=s[x[jvj+56]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+56];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+3,jvj+9)*/
if((x[jvj+9]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+3,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=1045; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1045,jvj+12,jvj+13)*/
if((x[jvj+13]!=68)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+3,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+3,jvj+16)*/
pile[v[22]]=BA; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1230])( );if(v[102]) goto l1;     /*TRADMATCH0(BA,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
x[jvj+68]=x[jvj+15] ;z[jvj+68]=z[jvj+15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+66,jvj+18,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+68,jvj+67,jvj+19)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+19)*/
l1:pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+3,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+5,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=1045; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1045,jvj+7,jvj+8)*/
if((x[jvj+8]==68)) goto l12;
l14:pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(447,68,459,865,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=BA; pile[WZ2]=jvj+3; pile[WZ3]=jvj+21; 
(*f[1234])( );if(v[102]) goto l12;     /*TRADCREE0(jvj+20,BA,jvj+3,jvj+21)*/
x[jvj+22]=x[jvj+21] ;z[jvj+22]=z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ2]=129; pile[WZ3]=jvj+2; pile[WZ4]=jvj+23; 
(*f[1232])( );     /*CORRECTIF0(jvj+22,BA,129,jvj+2,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ2]=1881; pile[WZ3]=jvj+24; 
(*f[1233])( );if(v[102]) goto l12;     /*MISENFORME0(jvj+23,BA,1881,jvj+24)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+24)*/
l12:x[jvj+56]=t[x[jvj+56]];
goto l10;
}
