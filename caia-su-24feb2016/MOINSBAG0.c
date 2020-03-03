#include "dx.h"
void MOINSBAG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,BB=0,V4=0,V5=0;
int A,B;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V7=x[B];
BB=V7;
if((BB==0)) goto l6;
if((BB<=0)) goto l7;
V4=s[BB];
x[jvj+1]=V4 ;z[jvj+1]=(V4<=sepcte) ? V4 : 0;
V5=t[BB];
x[jvj+6]=x[A] ;z[jvj+6]=z[A];
l1:if((x[jvj+6]<=0)) goto l7;
x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[760])( );     /*MEMEX0(jvj+1,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
x[jvj+6]=t[x[jvj+6]];
goto l1;
l2:x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+7]=x[A] ;z[jvj+7]=z[A];
l3:if((x[jvj+7]>0)) goto l4;
pile[v[22]]=V5; pile[WZ1]=jvj+4; pile[WZ2]=R; 
(*f[3995])( );if(v[102]) goto l7;     /*MOINSBAG1(V5,jvj+4,R)*/
l8:v[0]=jvj; v[22]-=3; v[102]=0;return;
l4:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
if((x[jvj+5]==x[jvj+2])) goto l5;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l5:x[jvj+7]=t[x[jvj+7]];
goto l3;
l6:x[R]=x[A] ;z[R]=z[A];
goto l8;
l7:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
