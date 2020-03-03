#include "dx.h"
void SETERM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,A,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==485)) goto l5;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+10)*/
if((x[jvj+10]!=22)) goto l7;
pile[v[22]]=1821; pile[WZ1]=145; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1821,145,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l6;
l7:pile[v[22]]=20; pile[WZ1]=A; pile[WZ2]=R; 
(*f[409])( );     /*TRI14(20,A,R)*/
l8:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1964])( );     /*SETERM0(jvj+5,jvj+6)*/
l3:if((x[jvj+6]>0)) goto l4;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
goto l8;
l4:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+7)*/
x[jvj+6]=t[x[jvj+6]];
goto l3;
l5:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=R; 
(*f[33])( );     /*FNDE0(107,A,R)*/
goto l8;
l6:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,A,jvj+1)*/
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,A,jvj+5)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1964])( );     /*SETERM0(jvj+1,jvj+2)*/
goto l1;
}
