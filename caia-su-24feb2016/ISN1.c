#include "dx.h"
void ISN1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V3=0,V7=0;
int Y,D,X;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; D=pile[v[22]+1]; X=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[2003])( );     /*INC0(K)*/
K=pile[v[22]]; 
pile[v[22]]=X; pile[WZ1]=220; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(X,220,K)*/
pile[v[22]]=D; 
(*f[43])( );     /*CHGC2(D,220,K)*/
if((x[D]==x[Y])) goto l1;
pile[v[22]]=135; pile[WZ1]=D; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(135,D,jvj+1)*/
pile[v[22]]=220; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(220,jvj+1,V3)*/
V3=pile[WZ2]; 
if((V3==K)) goto l3;
l2:pile[v[22]]=jvj+1; pile[WZ1]=Y; pile[WZ2]=K; pile[WZ3]=jvj+3; 
(*f[2098])( );     /*ISN2(jvj+1,Y,K,jvj+3)*/
if((x[jvj+3]==134)) goto l1;
l3:pile[v[22]]=134; pile[WZ1]=D; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(134,D,jvj+2)*/
pile[v[22]]=220; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(220,jvj+2,V7)*/
V7=pile[WZ2]; 
if((V7==K)) goto l5;
l4:pile[v[22]]=jvj+2; pile[WZ1]=Y; pile[WZ2]=K; pile[WZ3]=jvj+4; 
(*f[2098])( );     /*ISN2(jvj+2,Y,K,jvj+4)*/
if((x[jvj+4]==134)) goto l1;
l5:x[RES]=135 ;z[RES]=135;
l6:v[0]=jvj; v[22]-=4; return;
l1:x[RES]=134 ;z[RES]=134;
goto l6;
}
