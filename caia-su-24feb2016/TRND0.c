#include "dx.h"
void TRND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(277,A,jvj+1)*/
if(x[jvj+1]!=480&&x[jvj+1]!=481) goto l1;
pile[v[22]]=A; pile[WZ1]=R; 
(*f[1290])( );if(v[102]) goto l1;     /*DEPEXP0(A,R)*/
l5:v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,A,jvj+2)*/
pile[v[22]]=A; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(A,R)*/
goto l5;
l2:x[jvj+3]=incon;
V4=x[A];
if((V4<sepcte)) goto l3;
x[jvj+3]=250 ;z[jvj+3]=250;
l4:x[R]=x[jvj+3] ;z[R]=z[jvj+3];
goto l5;
l3:x[jvj+3]=x[A] ;z[jvj+3]=z[A];
goto l4;
}
