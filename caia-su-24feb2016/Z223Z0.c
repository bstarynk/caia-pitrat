#include "dx.h"
void Z223Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V151=0;
int BXXX;
int BRRR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=BXXX; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,BXXX,V151)*/
V151=pile[WZ2]; 
if((V151<0)) goto l1;
l2:pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,BXXX,jvj+1)*/
x[jvj+9]=w[x[jvj+1]][9];
l3:if((x[jvj+9]>0)) goto l4;
x[jvj+10]=w[x[jvj+1]][8];
l6:if((x[jvj+10]<=0)) goto l9;
x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=BXXX; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,BXXX,jvj+6)*/
x[jvj+11]=x[jvj+6] ;z[jvj+11]=z[jvj+6];
l7:if((x[jvj+11]>0)) goto l8;
x[jvj+10]=t[x[jvj+10]];
goto l6;
l1:x[BRRR]=135 ;z[BRRR]=135;
l10:v[0]=jvj; v[22]-=2; return;
l4:x[jvj+2]=s[x[jvj+9]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+9];
pile[v[22]]=jvj+2; pile[WZ1]=BXXX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+2,BXXX,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[2029])( );     /*Z223Z0(jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l1;
l5:x[jvj+9]=t[x[jvj+9]];
goto l3;
l8:x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[2029])( );     /*Z223Z0(jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l1;
x[jvj+11]=t[x[jvj+11]];
goto l7;
l9:x[BRRR]=134 ;z[BRRR]=134;
goto l10;
}
