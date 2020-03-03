#include "dx.h"
void XY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V12=0,V11=0,V13=0;
int I,X;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=651)) goto l1;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,X,jvj+3)*/
pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=1617)) goto l1;
pile[v[22]]=I; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(I,42,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=jvj+3; 
(*f[223])( );if(v[102]) goto l1;     /*XX0(V16,jvj+3,J)*/
J=pile[WZ2]; 
l5:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:pile[v[22]]=101; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,X,jvj+6)*/
pile[v[22]]=135; pile[WZ1]=I; 
(*f[98])( );     /*SRA3(135,I,jvj+6,J)*/
J=pile[WZ3]; 
goto l5;
l2:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=1617)) goto l3;
pile[v[22]]=I; pile[WZ1]=X; 
(*f[344])( );if(v[102]) goto l3;     /*XX1(I,X,J)*/
J=pile[WZ2]; 
goto l5;
l3:V12=I+1;
c[v[1]][I]=123;
pile[v[22]]=V12; pile[WZ1]=X; 
(*f[223])( );if(v[102]) goto l4;     /*XX0(V12,X,V11)*/
V11=pile[WZ2]; 
V13=V11+1;
c[v[1]][V11]=125;
J=V13;
goto l5;
l4:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
