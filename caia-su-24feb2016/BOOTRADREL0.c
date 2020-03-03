#include "dx.h"
void BOOTRADREL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V43=0,V56=0,F=0,I=0;
int R,BA;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=60;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; BA=pile[v[22]+1]; RT=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RT]=x[jvj+29]=F=I=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,R,jvj+5)*/
if((x[jvj+5]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]!=25&&x[jvj+7]!=26) goto l7;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,R,jvj+1)*/
pile[v[22]]=BA; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[1492])( );     /*EXPVAUT0(BA,jvj+1,jvj+8)*/
if((x[jvj+8]!=129)) goto l7;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,R,jvj+3)*/
pile[v[22]]=BA; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[1492])( );     /*EXPVAUT0(BA,jvj+3,jvj+9)*/
if((x[jvj+9]!=129)) goto l7;
pile[v[22]]=218; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+7,jvj+10)*/
pile[v[22]]=jvj+1; pile[WZ1]=BA; pile[WZ2]=jvj+2; 
(*f[2115])( );if(v[102]) goto l2;     /*POSNEXPR0(jvj+1,BA,jvj+2)*/
if((x[jvj+2]==68)) goto l1;
l2:pile[v[22]]=jvj+1; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+11)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+39,jvj+12,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+40; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+40,RT)*/
l7:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,R,jvj+25)*/
if((x[jvj+25]!=22)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,R,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+26,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+27,jvj+28)*/
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,R,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+17,jvj+22)*/
if((x[jvj+22]!=43)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+17,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+23,jvj+24)*/
if((V43=w[x[jvj+24]][1])==incon) goto l4;
if((V43==41)) goto l9;
l4:pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+17,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+19,jvj+13)*/
pile[v[22]]=146; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(146,jvj+13,jvj+16)*/
if((x[jvj+16]==41)) goto l9;
l3:pile[v[22]]=1834; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1834,jvj+13,jvj+14)*/
if((x[jvj+14]!=129)) goto l5;
pile[v[22]]=1876; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1876,jvj+13,jvj+15)*/
if((x[jvj+15]==41)) goto l9;
l5:pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+17,V)*/
V=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=V; pile[WZ2]=jvj+20; 
(*f[1491])( );     /*VDSBA0(BA,V,jvj+20)*/
pile[v[22]]=1261; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1261,jvj+20,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==41) goto l6;
l8:x[jvj+29]=x[jvj+17] ;z[jvj+29]=z[jvj+17];
F=x[jvj+28];
I=V56;
l9:if(x[RT]==incon) goto l10;
l22:v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:pile[v[22]]=jvj+3; pile[WZ1]=BA; pile[WZ2]=jvj+4; 
(*f[2115])( );if(v[102]) goto l2;     /*POSNEXPR0(jvj+3,BA,jvj+4)*/
if((x[jvj+4]==68)) goto l7;
goto l2;
l6:for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==1881) goto l9;
goto l8;
l10:if(x[jvj+29]!=incon) goto l11;
l21:v[0]=jvj; v[22]-=3; v[102]=1;return;
l11:if(F!=incon) goto l12;
goto l21;
l12:if(I!=incon) goto l13;
goto l21;
l13:if((F==26)) goto l14;
if((F==29)) goto l16;
if((F==27)) goto l17;
if((F==30)) goto l18;
if((F==28)) goto l19;
if((F!=25)) goto l21;
if((I==0)) goto l20;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1858; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,1858,jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+59; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+59)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; pile[WZ2]=103; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+58,jvj+59,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+60; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+60,RT)*/
goto l22;
l14:if((I==0)) goto l15;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1857; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,1857,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+46; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+46,RT)*/
goto l22;
l15:pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1379; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,1379,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+42; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+42,RT)*/
goto l22;
l16:if((I!=0)) goto l21;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=738; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,738,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+48; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+48,RT)*/
goto l22;
l17:if((I!=0)) goto l21;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1378; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,1378,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+50; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+50,RT)*/
goto l22;
l18:if((I!=0)) goto l21;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1632; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,1632,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+52; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+52,RT)*/
goto l22;
l19:if((I!=0)) goto l21;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1631; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,1631,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+54; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+54,RT)*/
goto l22;
l20:pile[v[22]]=jvj+29; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1833; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,1833,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+56; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+56,RT)*/
goto l22;
}
