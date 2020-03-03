#include "dx.h"
void COMPTESTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,E;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; E=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,X,jvj+1)*/
x[jvj+9]=w[x[jvj+1]][9];
l1:if((x[jvj+9]>0)) goto l2;
x[jvj+10]=w[x[jvj+1]][8];
l5:if((x[jvj+10]<=0)) goto l8;
x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,X,jvj+6)*/
x[jvj+11]=x[jvj+6] ;z[jvj+11]=z[jvj+6];
l6:if((x[jvj+11]>0)) goto l7;
x[jvj+10]=t[x[jvj+10]];
goto l5;
l2:x[jvj+2]=s[x[jvj+9]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+9];
pile[v[22]]=jvj+2; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+2,X,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=E; pile[WZ2]=jvj+4; 
(*f[1415])( );     /*COMPTEST0(jvj+3,E,jvj+4)*/
if((x[jvj+4]==134)) goto l4;
l3:x[jvj+9]=t[x[jvj+9]];
goto l1;
l4:x[RES]=134 ;z[RES]=134;
l9:v[0]=jvj; v[22]-=3; return;
l7:x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=E; pile[WZ2]=jvj+8; 
(*f[1415])( );     /*COMPTEST0(jvj+7,E,jvj+8)*/
if((x[jvj+8]==134)) goto l4;
x[jvj+11]=t[x[jvj+11]];
goto l6;
l8:x[RES]=135 ;z[RES]=135;
goto l9;
}
