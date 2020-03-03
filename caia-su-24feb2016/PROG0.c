#include "dx.h"
void PROG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V7=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[A] ;z[jvj+1]=z[A];
V7=B;
l1:if((x[jvj+1]!=602)) goto l2;
if((V7<2)) goto l2;
x[R]=607 ;z[R]=607;
l6:v[0]=jvj; v[22]-=3; return;
l2:if((V7==1)) goto l3;
if((V7>=2)) goto l4;
if((V7>=0)) goto l5;
if(x[jvj+1]==606||x[jvj+1]==616) goto l5;
pile[v[22]]=242; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(242,jvj+1,jvj+2)*/
V5=V7+1;
V7=V5;
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
goto l1;
l3:if(x[jvj+1]==602||x[jvj+1]==607||x[jvj+1]==616) goto l5;
pile[v[22]]=196; pile[WZ1]=jvj+1; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(196,jvj+1,R)*/
goto l6;
l4:if(x[jvj+1]==607||x[jvj+1]==602||x[jvj+1]==616) goto l5;
V3=V7-1;
V7=V3;
goto l1;
l5:x[R]=x[jvj+1] ;z[R]=z[jvj+1];
goto l6;
}
