#include "dx.h"
void ENLEVENATTENTE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V4=0;
int L,S,N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; S=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[L] ;z[jvj+1]=z[L];
x[jvj+3]=x[S] ;z[jvj+3]=z[S];
l2:pile[v[22]]=698; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(698,jvj+1,jvj+4)*/
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V4==N)) goto l3;
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+1,jvj+5)*/
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
x[jvj+1]=x[jvj+5] ;z[jvj+1]=z[jvj+5];
goto l2;
l3:pile[v[22]]=120; pile[WZ1]=jvj+3; 
(*f[71])( );     /*ENLV0(120,jvj+3)*/
pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+3,120,jvj+2)*/
l1:V6=vv[21];
if((V6<=0)) goto l4;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l4:v[0]=jvj; v[22]-=3; return;
}
