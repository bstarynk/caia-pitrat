#include "dx.h"
void POLYSEQ1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,NM=0,V1=0,V2=0,X=0,V5=0,V4=0,Z=0,V9=0,V10=0;
int N,EE,E,Y,I;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; EE=pile[v[22]+1]; E=pile[v[22]+2]; Y=pile[v[22]+3]; I=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V10=Y;
V9=N;
l1:V3=V9-1;
NM=V3;
x[jvj+4]=x[E] ;z[jvj+4]=z[E];
l2:if((x[jvj+4]>0)) goto l3;
X=0;
l5:V5=I*V10;
V4=X+V5;
Z=V4;
x[jvj+2]=d[194];z[jvj+2]=0;
pile[v[22]]=117; pile[WZ1]=NM; pile[WZ2]=510; pile[WZ3]=Z; pile[WZ4]=jvj+3; 
(*f[391])( );     /*QUADRI10(117,NM,510,Z,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=EE; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,EE)*/
if((NM>0)) goto l6;
v[0]=jvj; v[22]-=5; return;
l3:x[jvj+1]=s[x[jvj+4]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+4];
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+1,V1)*/
V1=pile[WZ2]; 
if((V1!=V9)) goto l4;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+1,V2)*/
V2=pile[WZ2]; 
X=V2;
goto l5;
l4:x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:V9=NM;
V10=Z;
goto l1;
}
