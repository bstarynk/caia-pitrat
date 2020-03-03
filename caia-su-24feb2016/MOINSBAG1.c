#include "dx.h"
void MOINSBAG1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V9=0;
int BB,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

BB=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=x[A] ;z[jvj+8]=z[A];
V9=BB;
l6:if((V9==0)) goto l7;
if((V9<=0)) goto l8;
V4=s[V9];
x[jvj+1]=V4 ;z[jvj+1]=(V4<=sepcte) ? V4 : 0;
V5=t[V9];
x[jvj+6]=x[jvj+8] ;z[jvj+6]=z[jvj+8];
l1:if((x[jvj+6]<=0)) goto l8;
x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[760])( );     /*MEMEX0(jvj+1,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
x[jvj+6]=t[x[jvj+6]];
goto l1;
l2:x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+7]=x[jvj+8] ;z[jvj+7]=z[jvj+8];
l3:if((x[jvj+7]>0)) goto l4;
V9=V5;
x[jvj+8]=x[jvj+4] ;z[jvj+8]=z[jvj+4];
goto l6;
l4:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
if((x[jvj+5]==x[jvj+2])) goto l5;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l5:x[jvj+7]=t[x[jvj+7]];
goto l3;
l7:x[R]=x[jvj+8] ;z[R]=z[jvj+8];
v[0]=jvj; v[22]-=3; v[102]=0;return;
l8:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
