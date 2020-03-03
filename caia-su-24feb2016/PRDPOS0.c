#include "dx.h"
void PRDPOS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int E;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; S=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+4]=x[jvj+6] ;z[jvj+4]=z[jvj+6];
x[jvj+7]=x[E] ;z[jvj+7]=z[E];
l1:if((x[jvj+7]>0)) goto l2;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:x[jvj+1]=s[x[jvj+7]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+7];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l3;
pile[v[22]]=195; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(195,jvj+1,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[4011])( );if(v[102]) goto l3;     /*APLIS0(jvj+2,jvj+3)*/
pile[v[22]]=250; pile[WZ1]=459; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(250,459,jvj+5)*/
pile[v[22]]=218; pile[WZ1]=jvj+1; pile[WZ2]=447; pile[WZ3]=jvj+3; pile[WZ4]=jvj+5; pile[WZ5]=S; 
(*f[269])( );     /*QUADRI6(218,jvj+1,447,jvj+3,jvj+5,S)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
pile[v[22]]=E; pile[WZ1]=jvj+4; pile[WZ2]=S; 
(*f[4012])( );     /*PRDPOS1(E,jvj+4,S)*/
v[0]=jvj; v[22]-=2; v[102]=0;return;
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
}
