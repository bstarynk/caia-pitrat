#include "dx.h"
void SORTOTAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0;
int K,EE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; EE=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=tm[K];
if((V1<=0)) goto l5;
V3=vbl[V1];
x[jvj+5]=V3 ;z[jvj+5]=(V3<=sepcte) ? V3 : 0;
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
x[jvj+6]=x[EE] ;z[jvj+6]=z[EE];
l1:if((x[jvj+6]>0)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=447; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(jvj+4,447,jvj+3)*/
pile[v[22]]=EE; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(EE,jvj+3)*/
l4:pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
l5:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+1]=s[x[jvj+6]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+6];
pile[v[22]]=447; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(447,jvj+1,jvj+2)*/
if((x[jvj+2]!=x[jvj+4])) goto l3;
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
goto l4;
l3:x[jvj+6]=t[x[jvj+6]];
goto l1;
}
