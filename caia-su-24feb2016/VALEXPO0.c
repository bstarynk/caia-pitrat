#include "dx.h"
void VALEXPO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=B; pile[WZ1]=jvj+1; 
(*f[1007])( );if(v[102]) goto l3;     /*DECFACTPREM0(B,jvj+1)*/
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+2]=s[x[jvj+3]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+3];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1!=A)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(515,jvj+2,V2)*/
V2=pile[WZ2]; 
R=V2;
l4:v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:R=0;
goto l4;
}
