#include "dx.h"
void TYPEXPR2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V45=0;
int Q,BA;
int XP,TS,NV;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=38;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; BA=pile[v[22]+1]; XP=pile[v[22]+2]; TS=pile[v[22]+3]; NV=pile[v[22]+4]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[XP]=incon;
pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,Q,jvj+11)*/
if((x[jvj+11]==61)) goto l14;
if((x[jvj+11]==41)) goto l16;
if((x[jvj+11]==20)) goto l17;
if((x[jvj+11]!=22)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,Q,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+12,jvj+13)*/
pile[v[22]]=1045; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1045,jvj+13,jvj+14)*/
if((x[jvj+14]!=68)) goto l18;
x[XP]=129 ;z[XP]=129;
x[NV]=20 ;z[NV]=20;
l27:pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,Q,jvj+24)*/
if((x[jvj+24]==43)) goto l28;
if((x[jvj+24]!=22)) goto l30;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,Q,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+27,jvj+28)*/
pile[v[22]]=146; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(146,jvj+28,jvj+29)*/
if((x[jvj+29]==23)) goto l29;
l30:x[TS]=250 ;z[TS]=250;
l31:if(x[XP]==incon) goto l32;
l35:v[0]=jvj; v[22]-=5; return;
l2:pile[v[22]]=1918; pile[WZ1]=129; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1918,129,jvj+3)*/
pile[v[22]]=1261; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1261,jvj+4,jvj+5)*/
l3:if((x[jvj+3]<=0)) goto l7;
x[jvj+1]=s[x[jvj+3]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+3];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l6;
pile[v[22]]=218; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+1,jvj+2)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l6;
l4:x[jvj+3]=t[x[jvj+3]];
goto l3;
l6:x[jvj+35]=x[jvj+1] ;z[jvj+35]=z[jvj+1];
l23:x[XP]=x[jvj+35] ;z[XP]=z[jvj+35];
x[NV]=x[jvj+36] ;z[NV]=z[jvj+36];
x[TS]=x[jvj+37] ;z[TS]=z[jvj+37];
goto l35;
l8:x[jvj+35]=250 ;z[jvj+35]=250;
goto l23;
l11:x[jvj+38]=s[x[jvj+8]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+8];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+38]) goto l12;
x[jvj+8]=t[x[jvj+8]];
l10:if((x[jvj+8]>0)) goto l11;
x[jvj+36]=250 ;z[jvj+36]=250;
l1:x[jvj+35]=incon;
pile[v[22]]=129; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(129,jvj+4,jvj+7)*/
x[jvj+35]=x[jvj+7] ;z[jvj+35]=z[jvj+7];
l5:pile[v[22]]=129; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(129,jvj+4,jvj+6)*/
l7:if(x[jvj+35]==incon) goto l8;
goto l23;
l12:x[jvj+36]=x[jvj+38] ;z[jvj+36]=z[jvj+38];
goto l1;
l13:x[jvj+37]=23 ;z[jvj+37]=23;
l9:x[jvj+36]=incon;
pile[v[22]]=159; pile[WZ1]=100; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,100,jvj+8)*/
pile[v[22]]=1261; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1261,jvj+4,jvj+9)*/
goto l10;
l14:x[NV]=41 ;z[NV]=41;
l15:x[XP]=1881 ;z[XP]=1881;
goto l27;
l16:x[NV]=41 ;z[NV]=41;
goto l15;
l17:x[NV]=20 ;z[NV]=20;
goto l15;
l18:pile[v[22]]=111; pile[WZ1]=Q; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,Q,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=654)) goto l22;
pile[v[22]]=103; pile[WZ1]=Q; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,Q,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]==41)) goto l19;
if((x[jvj+18]==20)) goto l21;
if((x[jvj+18]!=89)) goto l22;
x[NV]=89 ;z[NV]=89;
l20:x[XP]=129 ;z[XP]=129;
goto l27;
l19:x[NV]=41 ;z[NV]=41;
goto l20;
l21:x[NV]=20 ;z[NV]=20;
goto l20;
l22:pile[v[22]]=140; pile[WZ1]=Q; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,Q,V)*/
V=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=V; pile[WZ2]=jvj+4; 
(*f[1491])( );     /*VDSBA0(BA,V,jvj+4)*/
x[jvj+37]=incon;
pile[v[22]]=1261; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1261,jvj+4,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==23) goto l13;
x[jvj+37]=250 ;z[jvj+37]=250;
goto l9;
l24:pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,Q,jvj+19)*/
if((x[jvj+19]==43)) goto l25;
if((x[jvj+19]!=22)) goto l26;
pile[v[22]]=111; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,Q,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+22,jvj+23)*/
pile[v[22]]=1876; pile[WZ1]=jvj+23; pile[WZ2]=NV; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1876,jvj+23,NV)*/
goto l27;
l25:pile[v[22]]=102; pile[WZ1]=Q; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,Q,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+20,jvj+21)*/
pile[v[22]]=1876; pile[WZ1]=jvj+21; pile[WZ2]=NV; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1876,jvj+21,NV)*/
goto l27;
l26:x[NV]=250 ;z[NV]=250;
goto l27;
l28:pile[v[22]]=102; pile[WZ1]=Q; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,Q,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+25,jvj+26)*/
if((V45=w[x[jvj+26]][1])==incon) goto l30;
if((V45==23)) goto l29;
goto l30;
l29:x[TS]=23 ;z[TS]=23;
goto l31;
l32:pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,Q,jvj+30)*/
if((x[jvj+30]==43)) goto l33;
if((x[jvj+30]!=22)) goto l34;
pile[v[22]]=111; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,Q,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+33,jvj+34)*/
pile[v[22]]=1834; pile[WZ1]=jvj+34; pile[WZ2]=XP; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(1834,jvj+34,XP)*/
goto l35;
l33:pile[v[22]]=102; pile[WZ1]=Q; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,Q,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+31,jvj+32)*/
pile[v[22]]=1834; pile[WZ1]=jvj+32; pile[WZ2]=XP; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(1834,jvj+32,XP)*/
goto l35;
l34:x[XP]=250 ;z[XP]=250;
goto l35;
}
