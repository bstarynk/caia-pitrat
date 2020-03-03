#include "dx.h"
void CMPM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V93=0,V10=0,W=0,WW=0,VV=0,VA=0,VB=0,VC=0,VD=0,V19=0,V=0,F=0,V89=0,LL=0,I=0,V118=0,V113=0,V132=0,KK=0,V141=0,M=0,V84=0,V88=0,V87=0,SS=0,V95=0,S=0,V151=0;
int H,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=93;
x[jvj+1]=10194;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==695&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+36]=x[jvj+44]=incon;
pile[v[22]]=100; pile[WZ1]=508; pile[WZ2]=218; pile[WZ3]=N; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,508,218,N,jvj+2)*/
pile[v[22]]=H; pile[WZ1]=N; 
(*f[1077])( );     /*CRENUM0(H,N)*/
pile[WZ1]=345; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(H,345,jvj+2)*/
pile[v[22]]=N; pile[WZ1]=367; 
(*f[36])( );     /*PLUSC0(N,367,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=H; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,H,jvj+7)*/
if((x[jvj+7]==448)) goto l7;
if((x[jvj+7]!=284)) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,H,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=548; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,548,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+84; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+84,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1080])( );     /*SUBVECT0(jvj+15,jvj+16)*/
pile[v[22]]=102; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+16,jvj+17)*/
pile[v[22]]=67; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1078])( );if(v[102]) goto l22;     /*TRAD0(67,jvj+17,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+87)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3822); pile[WZ4]=jvj+85; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=436; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,436,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; pile[WZ2]=111; pile[WZ3]=jvj+88; 
(*f[58])( );     /*TRI3(jvj+86,jvj+87,111,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+88; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+19,jvj+88,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+74; 
(*f[180])( );     /*TRIENS0(jvj+73,(-20),105,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+74,42,100,jvj+36)*/
l21:pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+36)*/
l22:pile[v[22]]=96; pile[WZ1]=(-3822); pile[WZ2]=jvj+43; 
(*f[328])( );     /*TRI12(96,(-3822),jvj+43)*/
V89=0;
l1:pile[v[22]]=367; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(367,N,jvj+3)*/
x[jvj+91]=x[jvj+3] ;z[jvj+91]=z[jvj+3];
l2:if((x[jvj+91]>0)) goto l3;
pile[v[22]]=N; pile[WZ1]=V89; 
(*f[744])( );if(v[102]) goto l23;     /*VE0(N,V89,LL)*/
LL=pile[WZ2]; 
pile[WZ1]=583; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(N,583,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+2; pile[WZ2]=297; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+75,jvj+2,297,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=LL; pile[WZ2]=246; pile[WZ3]=jvj+77; 
(*f[189])( );     /*TRI4(jvj+76,LL,246,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+43; pile[WZ2]=223; pile[WZ3]=jvj+78; 
(*f[301])( );     /*TRI11(jvj+77,jvj+43,223,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=V89; pile[WZ2]=130; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+78,V89,130,jvj+44)*/
pile[v[22]]=jvj+2; pile[WZ1]=365; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+2,365,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=H; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,H,jvj+62)*/
if((x[jvj+62]==448)) goto l27;
if((x[jvj+62]!=284)) goto l28;
pile[v[22]]=111; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,H,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]==531)) goto l24;
if((x[jvj+46]==453)) goto l25;
if((x[jvj+46]==979)) goto l26;
if((x[jvj+46]!=1027)) goto l28;
pile[v[22]]=102; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+45,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+57,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+45; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+45,jvj+58)*/
pile[v[22]]=140; pile[WZ1]=jvj+58; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+58,M)*/
M=pile[WZ2]; 
pile[WZ1]=V141; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+59; 
(*f[692])( );     /*QUADRI13(140,V141,158,41,jvj+59)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+59)*/
pile[v[22]]=140; pile[WZ1]=M; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+60; 
(*f[692])( );     /*QUADRI13(140,M,158,41,jvj+60)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+60)*/
l38:pile[v[22]]=140; pile[WZ1]=(-3822); pile[WZ2]=158; pile[WZ3]=89; pile[WZ4]=jvj+61; 
(*f[692])( );     /*QUADRI13(140,(-3822),158,89,jvj+61)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+61)*/
l28:if(x[jvj+36]!=incon) goto l8;
if(x[jvj+44]!=incon) goto l36;
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+4]=s[x[jvj+91]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+91];
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+4,jvj+5)*/
x[jvj+92]=x[jvj+5] ;z[jvj+92]=z[jvj+5];
l4:if((x[jvj+92]>0)) goto l5;
x[jvj+91]=t[x[jvj+91]];
goto l2;
l5:x[jvj+6]=s[x[jvj+92]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+92];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+6,V93)*/
V93=pile[WZ2]; 
if((V93==V89)) goto l23;
l6:x[jvj+92]=t[x[jvj+92]];
goto l4;
l7:pile[v[22]]=111; pile[WZ1]=H; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,H,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=451)) goto l22;
pile[v[22]]=102; pile[WZ1]=H; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,H,jvj+10)*/
pile[v[22]]=67; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1078])( );if(v[102]) goto l22;     /*TRAD0(67,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+81)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3822); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=436; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,436,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; pile[WZ2]=111; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+80,jvj+81,111,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+82; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+12,jvj+82,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+72; 
(*f[180])( );     /*TRIENS0(jvj+71,(-20),105,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+72,42,100,jvj+36)*/
goto l21;
l8:x[jvj+28]=0 ;z[jvj+28]=0;
pile[v[22]]=100; pile[WZ1]=H; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,H,jvj+24)*/
if((x[jvj+24]!=284)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,H,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]==531)) goto l9;
if((x[jvj+26]==453)) goto l10;
if((x[jvj+26]==979)) goto l12;
if((x[jvj+26]!=1027)) goto l15;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+25,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+33,VC)*/
VC=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=VC; 
(*f[331])( );     /*PLUE3(jvj+28,VC)*/
l14:pile[v[22]]=103; pile[WZ1]=jvj+25; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+25,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+34,VD)*/
VD=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=VD; 
(*f[331])( );     /*PLUE3(jvj+28,VD)*/
l15:pile[v[22]]=448; pile[WZ1]=N; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(448,N,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[938])( );     /*USE0(jvj+36,jvj+37)*/
l16:if((x[jvj+35]>0)) goto l17;
x[jvj+69]=x[jvj+28] ;z[jvj+69]=z[jvj+28];
if(x[jvj+44]!=incon) goto l33;
goto l37;
l9:pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+25,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+27,W)*/
W=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+28,W)*/
goto l15;
l10:pile[v[22]]=103; pile[WZ1]=jvj+25; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+25,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+29,WW)*/
WW=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=WW; 
(*f[331])( );     /*PLUE3(jvj+28,WW)*/
l11:pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+25,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+30,VV)*/
VV=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=VV; 
(*f[331])( );     /*PLUE3(jvj+28,VV)*/
goto l15;
l12:pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+25,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+31,VA)*/
VA=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=VA; 
(*f[331])( );     /*PLUE3(jvj+28,VA)*/
l13:pile[v[22]]=103; pile[WZ1]=jvj+25; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+25,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+32,VB)*/
VB=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=VB; 
(*f[331])( );     /*PLUE3(jvj+28,VB)*/
goto l15;
l17:x[jvj+38]=s[x[jvj+35]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+35];
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=448)) goto l18;
pile[v[22]]=436; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,jvj+38,jvj+40)*/
pile[v[22]]=140; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+40,V19)*/
V19=pile[WZ2]; 
V=V19;
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==V) goto l19;
l18:x[jvj+35]=t[x[jvj+35]];
goto l16;
l19:pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+38,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+41,jvj+42)*/
F=x[jvj+42];
if(F!=451&&F!=128) goto l18;
pile[v[22]]=100; pile[WZ1]=H; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,H,jvj+20)*/
if((x[jvj+20]!=448)) goto l20;
pile[v[22]]=436; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(436,H,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+21,V10)*/
V10=pile[WZ2]; 
if((V!=V10)) goto l20;
pile[v[22]]=111; pile[WZ1]=H; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,H,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==451)) goto l18;
l20:pile[v[22]]=jvj+28; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+28,V)*/
goto l18;
l23:V89++;
if((V89<=50)) goto l1;
goto l28;
l24:pile[v[22]]=102; pile[WZ1]=jvj+45; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+45,jvj+47)*/
pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+47,I)*/
I=pile[WZ2]; 
pile[WZ1]=I; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+48; 
(*f[692])( );     /*QUADRI13(140,I,158,41,jvj+48)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+48)*/
l39:pile[v[22]]=140; pile[WZ1]=(-3822); pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+65; 
(*f[692])( );     /*QUADRI13(140,(-3822),158,41,jvj+65)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+65)*/
goto l28;
l25:pile[v[22]]=102; pile[WZ1]=jvj+45; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+45,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+49,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+45; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+45,jvj+50)*/
pile[v[22]]=140; pile[WZ1]=jvj+50; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+50,V113)*/
V113=pile[WZ2]; 
pile[WZ1]=V118; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+51; 
(*f[692])( );     /*QUADRI13(140,V118,158,41,jvj+51)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=V113; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+52; 
(*f[692])( );     /*QUADRI13(140,V113,158,41,jvj+52)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+52)*/
goto l38;
l26:pile[v[22]]=102; pile[WZ1]=jvj+45; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+45,jvj+53)*/
pile[v[22]]=140; pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+53,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+45; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+45,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+54,KK)*/
KK=pile[WZ2]; 
pile[WZ1]=V132; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+55; 
(*f[692])( );     /*QUADRI13(140,V132,158,41,jvj+55)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+55)*/
pile[v[22]]=140; pile[WZ1]=KK; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+56; 
(*f[692])( );     /*QUADRI13(140,KK,158,41,jvj+56)*/
pile[v[22]]=jvj+44; pile[WZ1]=283; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+44,283,jvj+56)*/
goto l39;
l27:pile[v[22]]=111; pile[WZ1]=H; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,H,jvj+63)*/
pile[v[22]]=101; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+63,jvj+64)*/
if((x[jvj+64]==451)) goto l39;
goto l28;
l30:x[jvj+67]=s[x[jvj+93]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+93];
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+67,V84)*/
V84=pile[WZ2]; 
if((V84!=SS)) goto l31;
SS++;
l32:if((SS>V87)) goto l35;
pile[v[22]]=213; pile[WZ1]=jvj+44; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(213,jvj+44,jvj+66)*/
x[jvj+93]=x[jvj+66] ;z[jvj+93]=z[jvj+66];
l29:if((x[jvj+93]>0)) goto l30;
pile[v[22]]=S; pile[WZ1]=140; pile[WZ2]=jvj+89; 
(*f[329])( );     /*TRI13(S,140,jvj+89)*/
pile[v[22]]=122; pile[WZ1]=114; pile[WZ2]=130; pile[WZ3]=SS; pile[WZ4]=jvj+89; pile[WZ5]=jvj+68; 
(*f[47])( );     /*QUADRI0(122,114,130,SS,jvj+89,jvj+68)*/
pile[v[22]]=jvj+44; pile[WZ1]=213; pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+44,213,jvj+68)*/
l35:V151=t[V151];
l34:if((V151<=0)) goto l36;
S=s[V151];
for(i=x[jvj+69],V88=0;i>0;i=t[i],V88++)  ;
V87=V88-1;
SS=0;
goto l32;
l31:x[jvj+93]=t[x[jvj+93]];
goto l29;
l33:pile[v[22]]=jvj+44; pile[WZ1]=222; pile[WZ2]=jvj+69; 
(*f[34])( );     /*CHGC0(jvj+44,222,jvj+69)*/
for(i=x[jvj+69],V95=0;i>0;i=t[i],V95++)  ;
pile[v[22]]=(-3822); pile[WZ1]=140; pile[WZ2]=jvj+90; 
(*f[329])( );     /*TRI13((-3822),140,jvj+90)*/
pile[v[22]]=122; pile[WZ1]=113; pile[WZ2]=130; pile[WZ3]=V95; pile[WZ4]=jvj+90; pile[WZ5]=jvj+70; 
(*f[47])( );     /*QUADRI0(122,113,130,V95,jvj+90,jvj+70)*/
pile[v[22]]=jvj+44; pile[WZ1]=213; pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+44,213,jvj+70)*/
V151=x[jvj+69];
goto l34;
l36:pile[v[22]]=jvj+44; 
(*f[745])( );     /*CREKNDR0(jvj+44)*/
pile[WZ1]=10194; 
(*f[273])( );     /*PLUK1(jvj+44,10194)*/
goto l37;
}
