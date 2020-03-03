#include "dx.h"
void USV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0;
int X,V;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; V=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,X,V18)*/
V18=pile[WZ2]; 
if((V==V18)) goto l1;
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]!=39)) goto l5;
pile[v[22]]=114; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(114,X,jvj+2)*/
l3:if((x[jvj+2]<=0)) goto l5;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=V; pile[WZ2]=jvj+5; 
(*f[1988])( );     /*USV0(jvj+4,V,jvj+5)*/
if((x[jvj+5]==135)) goto l1;
l4:x[jvj+2]=t[x[jvj+2]];
goto l3;
l1:x[RES]=135 ;z[RES]=135;
l13:v[0]=jvj; v[22]-=3; return;
l5:x[jvj+13]=w[x[jvj+1]][9];
l6:if((x[jvj+13]>0)) goto l7;
if((x[jvj+1]==39)) goto l12;
x[jvj+14]=w[x[jvj+1]][8];
l9:if((x[jvj+14]<=0)) goto l12;
x[jvj+9]=s[x[jvj+14]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+14];
pile[v[22]]=jvj+9; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,X,jvj+10)*/
x[jvj+15]=x[jvj+10] ;z[jvj+15]=z[jvj+10];
l10:if((x[jvj+15]>0)) goto l11;
x[jvj+14]=t[x[jvj+14]];
goto l9;
l7:x[jvj+6]=s[x[jvj+13]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+13];
if((x[jvj+6]==436)) goto l8;
pile[v[22]]=jvj+6; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+6,X,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=V; pile[WZ2]=jvj+8; 
(*f[1988])( );     /*USV0(jvj+7,V,jvj+8)*/
if((x[jvj+8]==135)) goto l1;
l8:x[jvj+13]=t[x[jvj+13]];
goto l6;
l11:x[jvj+11]=s[x[jvj+15]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+15];
pile[v[22]]=jvj+11; pile[WZ1]=V; pile[WZ2]=jvj+12; 
(*f[1988])( );     /*USV0(jvj+11,V,jvj+12)*/
if((x[jvj+12]==135)) goto l1;
x[jvj+15]=t[x[jvj+15]];
goto l10;
l12:x[RES]=134 ;z[RES]=134;
goto l13;
}
