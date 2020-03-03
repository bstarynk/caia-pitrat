#include "dx.h"
void EXTRAIRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0;
int B,A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
for(i=x[B],V1=0;i>0;i=t[i],V1++)  ;
if((V1<=A)) goto l1;
x[jvj+2]=0 ;z[jvj+2]=0;
x[R]=x[jvj+2] ;z[R]=z[jvj+2];
x[jvj+3]=x[B] ;z[jvj+3]=z[B];
l2:if((x[jvj+3]<=0)) goto l4;
x[jvj+1]=s[x[jvj+3]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+3];
for(a=x[R];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l3;
pile[v[22]]=R; pile[WZ1]=jvj+1; 
(*f[522])( );     /*PLUB2(R,jvj+1)*/
l4:V3=A-1;
if((V3<=0)) goto l5;
pile[v[22]]=R; pile[WZ1]=V3; pile[WZ2]=B; pile[WZ3]=68; 
(*f[3997])( );     /*EXTRAIRE1(R,V3,B,68)*/
l5:v[0]=jvj; v[22]-=3; return;
l1:x[R]=x[B] ;z[R]=z[B];
goto l5;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
}
