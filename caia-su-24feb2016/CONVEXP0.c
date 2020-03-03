#include "dx.h"
void CONVEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,A,jvj+1)*/
if((x[jvj+1]==20)) goto l1;
if((x[jvj+1]==89)) goto l2;
if((x[jvj+1]!=41)) goto l3;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,A,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,R)*/
l4:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,A,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,R)*/
goto l4;
l2:pile[v[22]]=162; pile[WZ1]=A; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,A,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V2; pile[WZ4]=R; 
(*f[272])( );     /*QUADRI9(100,89,162,V2,R)*/
goto l4;
l3:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
