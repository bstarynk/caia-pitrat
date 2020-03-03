#include "dx.h"
void COULAV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V1=0;
int E,Z;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=204; pile[WZ1]=10016; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(204,10016,V3)*/
V3=pile[WZ2]; 
for(i=x[E],V2=0;i>0;i=t[i],V2++)  ;
V1=V2*V3;
pile[v[22]]=Z; pile[WZ1]=117; pile[WZ2]=V1; 
(*f[186])( );     /*BTC0(Z,117,V1)*/
l3:x[jvj+6]=x[E] ;z[jvj+6]=z[E];
l1:if((x[jvj+6]>0)) goto l2;
v[0]=jvj; v[22]-=2; return;
l2:x[jvj+1]=s[x[jvj+6]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+6];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=108)) goto l4;
pile[v[22]]=103; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+1,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=69)) goto l4;
pile[v[22]]=108; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(108,jvj+3,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=Z; 
(*f[2176])( );     /*COULAV0(jvj+5,Z)*/
l4:x[jvj+6]=t[x[jvj+6]];
goto l1;
}
