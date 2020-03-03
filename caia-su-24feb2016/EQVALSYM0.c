#include "dx.h"
void EQVALSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0;
int A,B;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=109; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,B,jvj+1)*/
pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,A,jvj+2)*/
if((x[jvj+1]!=x[jvj+2])) goto l1;
l2:pile[v[22]]=163; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,B,V1)*/
V1=pile[WZ2]; 
pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,A,V2)*/
V2=pile[WZ2]; 
if((V1!=V2)) goto l1;
l3:x[R]=135 ;z[R]=135;
l4:v[0]=jvj; v[22]-=3; return;
l1:x[R]=134 ;z[R]=134;
goto l4;
}
