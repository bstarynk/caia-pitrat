#include "dx.h"
void PEUTCALCULER1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V36=0,V11=0,V38=0,V24=0,V9=0,F=0,V27=0;
int EA,EB,EE;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=29;
if(v[0]>99700) (*f[6])( );

EA=pile[v[22]]; EB=pile[v[22]+1]; EE=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=x[EA] ;z[jvj+29]=z[EA];
x[jvj+13]=x[EB] ;z[jvj+13]=z[EB];
l6:x[jvj+24]=x[jvj+29] ;z[jvj+24]=z[jvj+29];
l4:if((x[jvj+24]>0)) goto l5;
x[RES]=135 ;z[RES]=135;
l20:v[0]=jvj; v[22]-=4; return;
l2:VV=s[V36];
for(a=x[EE];a>0;a=t[a]) if(s[a]==VV) goto l3;
l16:x[jvj+26]=t[x[jvj+26]];
l14:if((x[jvj+26]>0)) goto l15;
x[jvj+28]=0 ;z[jvj+28]=0;
x[jvj+27]=x[jvj+29] ;z[jvj+27]=z[jvj+29];
l17:if((x[jvj+27]>0)) goto l18;
x[RES]=134 ;z[RES]=134;
goto l20;
l3:V36=t[V36];
l1:if((V36>0)) goto l2;
pile[v[22]]=EE; pile[WZ1]=V9; 
(*f[331])( );     /*PLUE3(EE,V9)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
goto l6;
l5:x[jvj+3]=s[x[jvj+24]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+24];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[703])( );     /*USW0(jvj+3,jvj+4)*/
V38=x[jvj+4];
l8:if((V38<=0)) goto l7;
V11=s[V38];
for(a=x[EE];a>0;a=t[a]) if(s[a]==V11) goto l9;
pile[v[22]]=EE; pile[WZ1]=jvj+5; 
(*f[195])( );     /*CPE0(EE,jvj+5)*/
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+25]=x[jvj+29] ;z[jvj+25]=z[jvj+29];
l10:if((x[jvj+25]>0)) goto l11;
x[jvj+26]=x[jvj+29] ;z[jvj+26]=z[jvj+29];
goto l14;
l7:x[jvj+24]=t[x[jvj+24]];
goto l4;
l9:V38=t[V38];
goto l8;
l11:x[jvj+6]=s[x[jvj+25]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+25];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l12;
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=54)) goto l12;
pile[v[22]]=436; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+6,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+9,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+5; pile[WZ3]=jvj+12; 
(*f[1812])( );     /*PEUTCALCULER1(jvj+10,jvj+11,jvj+5,jvj+12)*/
if((x[jvj+12]==135)) goto l13;
l12:x[jvj+25]=t[x[jvj+25]];
goto l10;
l13:pile[v[22]]=EE; pile[WZ1]=V24; 
(*f[331])( );     /*PLUE3(EE,V24)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+6)*/
goto l6;
l15:x[jvj+14]=s[x[jvj+26]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+26];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=22)) goto l16;
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+14,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+16,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+14,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+17,jvj+18)*/
F=x[jvj+18];
if(F!=25&&F!=44) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+14; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+14,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[703])( );     /*USW0(jvj+1,jvj+2)*/
V36=x[jvj+2];
goto l1;
l18:x[jvj+19]=s[x[jvj+27]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+27];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+19]) goto l19;
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=22)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+19,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+21,jvj+22)*/
V27=x[jvj+22];
if(V27!=50&&V27!=55&&V27!=48) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+23)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+19)*/
x[jvj+13]=x[jvj+28] ;z[jvj+13]=z[jvj+28];
x[jvj+29]=x[jvj+23] ;z[jvj+29]=z[jvj+23];
goto l6;
l19:x[jvj+27]=t[x[jvj+27]];
goto l17;
}
