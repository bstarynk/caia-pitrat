#include "dx.h"
void IDENSEXP0(void )
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
v[0]+=5;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
for(i=x[A],V1=0;i>0;i=t[i],V1++)  ;
for(i=x[B],V2=0;i>0;i=t[i],V2++)  ;
if((V1!=V2)) goto l2;
x[jvj+5]=x[A] ;z[jvj+5]=z[A];
l3:if((x[jvj+5]>0)) goto l4;
x[R]=135 ;z[R]=135;
l6:v[0]=jvj; v[22]-=3; return;
l2:x[R]=134 ;z[R]=134;
goto l6;
l4:x[jvj+1]=s[x[jvj+5]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+5];
x[jvj+4]=x[B] ;z[jvj+4]=z[B];
l1:if((x[jvj+4]<=0)) goto l2;
x[jvj+2]=s[x[jvj+4]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+4];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[760])( );     /*MEMEX0(jvj+1,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l5;
x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
}
