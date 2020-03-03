#include "dx.h"
void SPVARIAIRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V17=0,V2=0,V3=0,V13=0,V7=0,V8=0,V6=0,K=0;
int E,F,I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; F=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=x[E] ;z[jvj+8]=z[E];
V17=I;
l1:x[jvj+7]=x[jvj+8] ;z[jvj+7]=z[jvj+8];
if((x[jvj+7]<=0)) goto l6;
x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
x[jvj+3]=x[jvj+5] ;z[jvj+3]=z[jvj+5];
for(i=x[jvj+8],V4=0;i>0;i=t[i],V4++)  ;
if((V4==1)) goto l5;
if((V4<=1)) goto l6;
pile[v[22]]=145; pile[WZ1]=F; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,F,jvj+4)*/
pile[v[22]]=241; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(241,jvj+4,V13)*/
V13=pile[WZ2]; 
x[jvj+1]=0 ;z[jvj+1]=0;
x[jvj+6]=x[jvj+8] ;z[jvj+6]=z[jvj+8];
l2:if((x[jvj+6]>0)) goto l3;
pile[v[22]]=V17; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V17,40,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V7; 
(*f[2077])( );     /*SPR0(jvj+3,V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V8,41,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=V6; 
(*f[64])( );     /*SRA2(V13,V6,K)*/
K=pile[WZ2]; 
V17=K;
x[jvj+8]=x[jvj+1] ;z[jvj+8]=z[jvj+1];
goto l1;
l3:x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
if((x[jvj+2]==x[jvj+3])) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+1,jvj+2)*/
l4:x[jvj+6]=t[x[jvj+6]];
goto l2;
l5:pile[v[22]]=V17; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V17,40,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V2; 
(*f[2077])( );     /*SPR0(jvj+3,V2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V3,41,J)*/
J=pile[WZ2]; 
l7:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l6:J=V17;
goto l7;
}
