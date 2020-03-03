#include "dx.h"
void COMPAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V12=0,V8=0,V14=0,V9=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,B,jvj+10)*/
if((x[jvj+3]=w[x[jvj+10]][3])==incon) goto l8;
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=365; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,A,jvj+8)*/
l4:if((x[jvj+8]>0)) goto l5;
x[R]=x[jvj+9] ;z[R]=z[jvj+9];
v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(jvj+2,jvj+3,V12,jvj+4)*/
V12=pile[WZ2]; 
V8=V12;
pile[v[22]]=B; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(B,jvj+3,V14,jvj+5)*/
V14=pile[WZ2]; 
V9=V14;
if((V8!=V9)) goto l7;
l3:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,jvj+2,jvj+6)*/
pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,B,jvj+7)*/
if((x[jvj+6]!=x[jvj+7])) goto l7;
l6:x[jvj+8]=t[x[jvj+8]];
goto l4;
l5:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=688; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(688,B,V6)*/
V6=pile[WZ2]; 
if((V6==1)) goto l2;
l1:pile[v[22]]=921; pile[WZ1]=C; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(921,C,jvj+1)*/
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==x[A]) goto l2;
l7:pile[v[22]]=jvj+9; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+2)*/
goto l6;
l8:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
