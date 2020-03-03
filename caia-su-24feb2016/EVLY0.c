#include "dx.h"
void EVLY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,Z;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Z=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=incon;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,X,jvj+1)*/
if((x[jvj+1]!=0)) goto l1;
x[RES]=135 ;z[RES]=135;
l1:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(107,X,jvj+2)*/
if((x[jvj+2]==0)) goto l2;
x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=128; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(128,X,jvj+4)*/
pile[v[22]]=Z; pile[WZ1]=372; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(Z,372,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+4; pile[WZ2]=128; pile[WZ3]=jvj+10; 
(*f[301])( );     /*TRI11(jvj+9,jvj+4,128,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=10547; pile[WZ2]=109; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+10,10547,109,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=567; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+3,567,jvj+5)*/
l2:if(x[RES]==incon) goto l3;
l8:v[0]=jvj; v[22]-=3; return;
l3:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,X,jvj+8)*/
l4:if((x[jvj+8]>0)) goto l5;
x[RES]=135 ;z[RES]=135;
goto l8;
l5:x[jvj+6]=s[x[jvj+8]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+8];
pile[v[22]]=jvj+6; pile[WZ1]=567; pile[WZ2]=jvj+7; 
(*f[630])( );if(v[102]) goto l7;     /*EVL3(jvj+6,567,jvj+7)*/
if((x[jvj+7]==135)) goto l6;
l7:x[RES]=134 ;z[RES]=134;
goto l8;
l6:x[jvj+8]=t[x[jvj+8]];
goto l4;
}
