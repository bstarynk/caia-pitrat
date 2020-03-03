#include "dx.h"
void DIAH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V3=0,V4=0,V2=0,V6=0,V8=0;
int BL,X,T,XX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; X=pile[v[22]+1]; T=pile[v[22]+2]; XX=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V8=X;
l1:V3=w[x[T]][9];
V4=w[x[T]][8];
V2=r[V8];
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
if((V5=w[x[T]][3])==incon) goto l2;
if((x[jvj+1]==V5)) goto l3;
l2:for(a=V3;a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l3;
for(a=V4;a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l3;
if(x[jvj+1]==100||x[jvj+1]==1428) goto l3;
pile[v[22]]=10019; pile[WZ1]=BL; pile[WZ2]=XX; pile[WZ3]=(-4391); pile[WZ4]=jvj+1; 
(*f[733])( );     /*FAUTE2(10019,BL,XX,(-4391),jvj+1)*/
l3:V6=t[V8];
if((V6>0)) goto l4;
v[0]=jvj; v[22]-=4; return;
l4:V8=V6;
goto l1;
}
