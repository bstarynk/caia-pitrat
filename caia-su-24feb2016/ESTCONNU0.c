#include "dx.h"
void ESTCONNU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V7=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+6]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l2;
l1:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=525; pile[WZ1]=773; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(525,773,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==V) goto l3;
l2:x[R]=134 ;z[R]=134;
l3:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,A,jvj+3)*/
if((x[jvj+3]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
l4:if(x[R]==incon) goto l5;
l13:v[0]=jvj; v[22]-=2; return;
l5:if(x[jvj+6]!=incon) goto l6;
l12:x[R]=135 ;z[R]=135;
goto l13;
l6:pile[v[22]]=118; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(118,jvj+6,V7)*/
V7=pile[WZ2]; 
if((V7<1)) goto l10;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,A,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1479])( );     /*ESTCONNU0(jvj+7,jvj+8)*/
if((x[jvj+8]==134)) goto l7;
l8:if((V7<2)) goto l10;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,A,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1479])( );     /*ESTCONNU0(jvj+9,jvj+10)*/
if((x[jvj+10]==134)) goto l7;
l9:if((V7<3)) goto l10;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,A,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1479])( );     /*ESTCONNU0(jvj+11,jvj+12)*/
if((x[jvj+12]==134)) goto l7;
l10:pile[v[22]]=155; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(155,jvj+6,jvj+13)*/
if((x[jvj+13]!=68)) goto l12;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,A,jvj+14)*/
l11:if((x[jvj+14]<=0)) goto l12;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1479])( );     /*ESTCONNU0(jvj+15,jvj+16)*/
if((x[jvj+16]==134)) goto l7;
x[jvj+14]=t[x[jvj+14]];
goto l11;
l7:x[R]=134 ;z[R]=134;
goto l13;
}
