#include "dx.h"
void SUBSTITUVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,Y,Z,M;
int RES,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; Z=pile[v[22]+2]; M=pile[v[22]+3]; RES=pile[v[22]+4]; T=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=Z; pile[WZ1]=T; 
(*f[255])( );     /*COPEXP0(Z,T)*/
pile[v[22]]=X; pile[WZ1]=jvj+1; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(X,jvj+1)*/
pile[v[22]]=Y; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(Y,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l1;
l5:pile[v[22]]=134; pile[WZ1]=218; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(134,218,jvj+3)*/
pile[v[22]]=T; pile[WZ1]=T; pile[WZ2]=250; pile[WZ3]=X; pile[WZ4]=Y; pile[WZ5]=jvj+3; 
(*f[1074])( );     /*SUBSTITUVARB0(T,T,250,X,Y,jvj+3)*/
l1:if((x[M]!=68)) goto l2;
pile[v[22]]=1006; pile[WZ1]=Z; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,Z,jvj+4)*/
pile[v[22]]=T; pile[WZ1]=1006; 
(*f[34])( );     /*CHGC0(T,1006,jvj+4)*/
l2:if(x[jvj+3]!=incon) goto l3;
l4:x[RES]=x[T]=incon;
v[0]=jvj; v[22]-=6; v[102]=1;return;
l3:pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=RES; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+3,RES)*/
v[0]=jvj; v[22]-=6; v[102]=0;return;
}
