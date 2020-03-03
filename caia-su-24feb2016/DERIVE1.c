#include "dx.h"
void DERIVE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V169=0,V160=0,V179=0,V61=0,V80=0,V52=0,V113=0,V85=0,V26=0,W=0,V43=0,F=0,V126=0,V118=0,V156=0,XX=0,V135=0,V145=0,V17=0,V7=0,X=0;
int V,E,BL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=58;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; E=pile[v[22]+1]; BL=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=E; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(E,V)*/
pile[v[22]]=184; pile[WZ1]=BL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(184,BL,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=658; pile[WZ1]=BL; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(658,BL,jvj+24)*/
l8:if((x[jvj+24]>0)) goto l9;
v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+3)*/
x[jvj+57]=x[jvj+3] ;z[jvj+57]=z[jvj+3];
l3:if((x[jvj+57]>0)) goto l4;
x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+4]=s[x[jvj+57]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+57];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==44)) goto l6;
if((x[jvj+6]!=278)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+13,V61)*/
V61=pile[WZ2]; 
if((V!=V61)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+4,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=22)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+14,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=651)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+16,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+19,V80)*/
V80=pile[WZ2]; 
V52=V80;
for(a=x[E];a>0;a=t[a]) if(s[a]==V52) goto l7;
pile[v[22]]=V52; pile[WZ1]=E; pile[WZ2]=BL; 
(*f[1438])( );     /*DERIVE1(V52,E,BL)*/
l7:pile[v[22]]=103; pile[WZ1]=jvj+14; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+14,jvj+20)*/
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=651)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+20,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+23,V113)*/
V113=pile[WZ2]; 
V85=V113;
for(a=x[E];a>0;a=t[a]) if(s[a]==V85) goto l5;
pile[v[22]]=V85; pile[WZ1]=E; pile[WZ2]=BL; 
(*f[1438])( );     /*DERIVE1(V85,E,BL)*/
l5:x[jvj+57]=t[x[jvj+57]];
goto l3;
l6:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V169)*/
V169=pile[WZ2]; 
V160=V169;
for(a=x[E];a>0;a=t[a]) if(s[a]==V160) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+4,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=43)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+8,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+10,V179)*/
V179=pile[WZ2]; 
if((V!=V179)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+8,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=509)) goto l5;
pile[v[22]]=V160; pile[WZ1]=E; pile[WZ2]=BL; 
(*f[1438])( );     /*DERIVE1(V160,E,BL)*/
goto l5;
l9:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==25)) goto l12;
if((x[jvj+27]!=44)) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+25; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+25,jvj+37)*/
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=267)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,jvj+37,jvj+40)*/
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+25,jvj+41)*/
pile[v[22]]=140; pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+41,V126)*/
V126=pile[WZ2]; 
V118=V126;
for(a=x[E];a>0;a=t[a]) if(s[a]==V118) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+37,jvj+42)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+42,V156)*/
V156=pile[WZ2]; 
XX=V156;
x[jvj+58]=x[jvj+40] ;z[jvj+58]=z[jvj+40];
l14:if((x[jvj+58]<=0)) goto l16;
x[jvj+43]=s[x[jvj+58]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+58];
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+43,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=44)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+43,jvj+46)*/
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+46,V135)*/
V135=pile[WZ2]; 
if((XX!=V135)) goto l15;
pile[v[22]]=103; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+43,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+47,jvj+48)*/
if((x[jvj+48]!=43)) goto l15;
pile[v[22]]=103; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+47,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+49,V145)*/
V145=pile[WZ2]; 
if((V!=V145)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+47,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+50,jvj+51)*/
if((x[jvj+51]!=509)) goto l15;
pile[v[22]]=V118; pile[WZ1]=E; pile[WZ2]=BL; 
(*f[1438])( );     /*DERIVE1(V118,E,BL)*/
l15:x[jvj+58]=t[x[jvj+58]];
goto l14;
l12:x[jvj+28]=d[20];z[jvj+28]=0;
l11:if((x[jvj+28]<=0)) goto l10;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+29,jvj+25,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+30,V26)*/
V26=pile[WZ2]; 
W=V26;
for(a=x[E];a>0;a=t[a]) if(s[a]==W) goto l13;
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+29,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+25; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+31,jvj+25,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=43)) goto l13;
pile[v[22]]=103; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+32,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+34,V43)*/
V43=pile[WZ2]; 
if((V!=V43)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+32,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+35,jvj+36)*/
F=x[jvj+36];
if(F!=102&&F!=103) goto l13;
pile[v[22]]=W; pile[WZ1]=E; pile[WZ2]=BL; 
(*f[1438])( );     /*DERIVE1(W,E,BL)*/
l13:x[jvj+28]=t[x[jvj+28]];
goto l11;
l16:pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+37,jvj+52)*/
if((x[jvj+52]!=43)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+37,jvj+53)*/
pile[v[22]]=140; pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+53,V17)*/
V17=pile[WZ2]; 
if((V!=V17)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+25,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+54,V7)*/
V7=pile[WZ2]; 
X=V7;
for(a=x[E];a>0;a=t[a]) if(s[a]==X) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+37,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=509)) goto l10;
pile[v[22]]=E; pile[WZ1]=X; 
(*f[331])( );     /*PLUE3(E,X)*/
pile[v[22]]=X; pile[WZ1]=E; pile[WZ2]=BL; 
(*f[1438])( );     /*DERIVE1(X,E,BL)*/
l10:x[jvj+24]=t[x[jvj+24]];
goto l8;
}
