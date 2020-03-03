#include "dx.h"
void MNV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V6=0,V4=0,RR=0,V5=0;
int S;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=w[177][8];
l1:if((x[jvj+3]<=0)) goto l4;
x[jvj+1]=s[x[jvj+3]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+3];
pile[v[22]]=190; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(190,jvj+1,V2)*/
V2=pile[WZ2]; 
if((V2!=S)) goto l2;
x[jvj+2]=x[jvj+1] ;z[jvj+2]=z[jvj+1];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+2,R)*/
R=pile[WZ2]; 
l5:v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(515,jvj+2,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=747; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(747,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; 
(*f[194])( );if(v[102]) goto l4;     /*MNV0(V4,RR)*/
RR=pile[WZ1]; 
V5=RR+V6;
R=V5;
goto l5;
l4:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
