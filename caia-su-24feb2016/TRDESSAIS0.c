#include "dx.h"
void TRDESSAIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,A,jvj+1)*/
x[jvj+3]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=978)) goto l1;
pile[v[22]]=983; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(983,jvj+1,jvj+3)*/
l4:pile[v[22]]=jvj+3; pile[WZ1]=498; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+3,498,R)*/
pile[v[22]]=163; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,A,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=163; pile[WZ2]=V5; 
(*f[177])( );     /*CHGC4(R,163,V5)*/
l3:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
goto l4;
l2:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
