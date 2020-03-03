#include "dx.h"
void LCANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V7=0,V11=0,V10=0,V4=0,V3=0,V17=0,DFF=0;
int DP,R;
int DF;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; R=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V17=DP;
l1:V6=bh[v[1]][V17];
if((V6==32)) goto l2;
if((V6!=61)) goto l4;
V11=V17+1;
V10=bh[v[1]][V11];
if((V10!=62)) goto l4;
DF=V11;
l9:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DF; v[102]=0;return;
l2:V8=V17+1;
V7=bh[v[1]][V8];
if((V7==32)) goto l3;
l4:if(V6==58||V6==93) goto l3;
V4=V17+1;
V3=bh[v[1]][V4];
if((V3!=58)) goto l6;
if(V6==91||V6==44) goto l5;
l6:if((V6!=42)) goto l7;
if(V3==61||V3==62) goto l5;
l7:pile[v[22]]=V17; pile[WZ1]=jvj+1; 
(*f[335])( );if(v[102]) goto l8;     /*LANT0(V17,jvj+1,DFF)*/
DFF=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(R,107,jvj+1)*/
V17=DFF;
goto l1;
l3:DF=V17;
goto l9;
l5:DF=V4;
goto l9;
l8:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
