#include "dx.h"
void NUMEROTENS3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V2=0,V3=0,V5=0,RR=0;
int E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=642 ;z[jvj+1]=642;
I=1;
pile[v[22]]=146; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(146,jvj+1,jvj+2)*/
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
l2:if((x[E]==0)) goto l4;
V2=s[x[E]];
x[jvj+3]=V2 ;z[jvj+3]=(V2<=sepcte) ? V2 : 0;
V3=I+1;
V5=t[x[E]];
x[jvj+5]=V5 ;z[jvj+5]=0;
if((x[jvj+6]==129)) goto l5;
if((x[jvj+6]!=67)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+1; pile[WZ2]=I; 
(*f[43])( );     /*CHGC2(jvj+3,jvj+1,I)*/
l3:pile[v[22]]=V3; pile[WZ1]=jvj+5; pile[WZ2]=jvj+1; pile[WZ3]=jvj+6; 
(*f[1700])( );     /*NUMEROTENS1(V3,jvj+5,jvj+1,jvj+6,RR)*/
RR=pile[WZ4]; 
l4:v[0]=jvj; v[22]-=1; return;
l1:x[jvj+6]=67 ;z[jvj+6]=67;
goto l2;
l5:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+4; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+3,jvj+1,jvj+4)*/
goto l3;
}
