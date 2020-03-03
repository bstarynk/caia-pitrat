#include "dx.h"
void MEVALM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V26=0,V18=0,V53=0,V44=0,V41=0,F=0,V31=0,V65=0,V15=0,V12=0,M=0,V=0,V60=0;
int TL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=10222;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1654&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(302,TL,jvj+12)*/
l4:if((x[jvj+12]>0)) goto l5;
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(302,TL,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
pile[v[22]]=TL; pile[WZ1]=535; pile[WZ2]=jvj+11; 
(*f[34])( );     /*CHGC0(TL,535,jvj+11)*/
pile[v[22]]=135; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(135,TL,jvj+2)*/
pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+3)*/
if((x[jvj+3]<=0)) goto l20;
x[jvj+26]=s[x[jvj+3]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+3];
x[jvj+32]=x[jvj+26] ;z[jvj+32]=z[jvj+26];
pile[v[22]]=jvj+26; pile[WZ1]=360; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+26,360,68)*/
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(222,TL,jvj+34)*/
l13:if((x[jvj+34]>0)) goto l14;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(302,TL,jvj+36)*/
x[jvj+37]=d[111];z[jvj+37]=0;
l15:if((x[jvj+36]>0)) goto l16;
pile[v[22]]=297; pile[WZ1]=TL; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(297,TL,jvj+45)*/
pile[v[22]]=147; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(147,jvj+45,jvj+46)*/
l18:if((x[jvj+46]<=0)) goto l20;
V60=s[x[jvj+46]];
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(222,TL,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==V60) goto l19;
pile[v[22]]=283; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(283,TL,jvj+27)*/
x[jvj+48]=x[jvj+27] ;z[jvj+48]=z[jvj+27];
l10:if((x[jvj+48]>0)) goto l11;
x[jvj+31]=d[111];z[jvj+31]=0;
pile[v[22]]=140; pile[WZ1]=V60; pile[WZ2]=361; pile[WZ3]=178; pile[WZ4]=jvj+33; 
(*f[692])( );     /*QUADRI13(140,V60,361,178,jvj+33)*/
pile[v[22]]=356; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; pile[WZ3]=jvj+31; 
(*f[663])( );     /*PLUG0(356,jvj+32,jvj+33,jvj+31)*/
l19:pile[v[22]]=TL; pile[WZ1]=263; pile[WZ2]=V60; 
(*f[735])( );     /*PLUSC4(TL,263,V60)*/
x[jvj+46]=t[x[jvj+46]];
goto l18;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=73)) goto l3;
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+6,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+8,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+6,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=534)) goto l3;
V18=V26;
pile[v[22]]=jvj+11; pile[WZ1]=V18; 
(*f[331])( );     /*PLUE3(jvj+11,V18)*/
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]==39)) goto l7;
if((x[jvj+15]!=435)) goto l6;
pile[v[22]]=436; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,jvj+14,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+23,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+14,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+24,jvj+25)*/
F=x[jvj+25];
if(F!=179&&F!=500) goto l6;
V31=V41;
pile[v[22]]=TL; pile[WZ1]=263; pile[WZ2]=V31; 
(*f[735])( );     /*PLUSC4(TL,263,V31)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l4;
l7:pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+16,jvj+17)*/
x[jvj+18]=x[jvj+17] ;z[jvj+18]=z[jvj+17];
pile[v[22]]=371; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(371,jvj+18,jvj+19)*/
if((x[jvj+19]!=67)) goto l6;
pile[v[22]]=113; pile[WZ1]=jvj+14; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(113,jvj+14,jvj+20)*/
x[jvj+47]=x[jvj+20] ;z[jvj+47]=z[jvj+20];
l8:if((x[jvj+47]<=0)) goto l6;
x[jvj+21]=s[x[jvj+47]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+47];
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+21,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+22,V53)*/
V53=pile[WZ2]; 
V44=V53;
pile[v[22]]=TL; pile[WZ1]=263; pile[WZ2]=V44; 
(*f[735])( );     /*PLUSC4(TL,263,V44)*/
l9:x[jvj+47]=t[x[jvj+47]];
goto l8;
l11:x[jvj+28]=s[x[jvj+48]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+48];
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+28,V65)*/
V65=pile[WZ2]; 
if((V65!=V60)) goto l12;
pile[v[22]]=158; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+28,jvj+29)*/
if((x[jvj+29]==23)) goto l19;
l12:x[jvj+48]=t[x[jvj+48]];
goto l10;
l14:V15=s[x[jvj+34]];
pile[v[22]]=140; pile[WZ1]=V15; pile[WZ2]=361; pile[WZ3]=225; pile[WZ4]=jvj+35; 
(*f[692])( );     /*QUADRI13(140,V15,361,225,jvj+35)*/
pile[v[22]]=jvj+32; pile[WZ1]=356; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+32,356,jvj+35)*/
x[jvj+34]=t[x[jvj+34]];
goto l13;
l16:x[jvj+38]=s[x[jvj+36]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+36];
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+38,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=22)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+39,jvj+41)*/
pile[v[22]]=140; pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+41,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+39,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+42,jvj+43)*/
M=x[jvj+43];
if(M!=225&&M!=178) goto l17;
V=V12;
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=361; pile[WZ3]=178; pile[WZ4]=jvj+44; 
(*f[692])( );     /*QUADRI13(140,V,361,178,jvj+44)*/
pile[v[22]]=356; pile[WZ1]=jvj+32; pile[WZ2]=jvj+44; pile[WZ3]=jvj+37; 
(*f[663])( );     /*PLUG0(356,jvj+32,jvj+44,jvj+37)*/
l17:x[jvj+36]=t[x[jvj+36]];
goto l15;
l20:pile[v[22]]=TL; pile[WZ1]=135; pile[WZ2]=TL; 
(*f[1839])( );     /*MEVALX0(TL,135,TL)*/
(*f[1840])( );     /*MEVALY0(TL,135,TL)*/
(*f[1841])( );     /*MEVALS0(TL)*/
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
