#include "dx.h"
void PPCMENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,RR=0,V7=0;
int E;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=t[x[E]];
if((V1==0)) goto l1;
if((V1<=0)) goto l2;
x[jvj+1]=V1 ;z[jvj+1]=0;
pile[v[22]]=jvj+1; 
(*f[4020])( );if(v[102]) goto l2;     /*PPCMENS0(jvj+1,RR)*/
RR=pile[WZ1]; 
V7=s[x[E]];
pile[v[22]]=RR; pile[WZ1]=V7; 
(*f[1021])( );if(v[102]) goto l2;     /*PPCM0(RR,V7,R)*/
R=pile[WZ2]; 
l3:v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l1:V2=s[x[E]];
R=V2;
goto l3;
l2:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
