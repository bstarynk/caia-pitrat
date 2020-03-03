#include "dx.h"
void COMBDIVA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V9=0,N=0;
int EX,R,Q;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

EX=pile[v[22]]; R=pile[v[22]+1]; Q=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((EX==0)) goto l6;
if((EX<=0)) goto l5;
V5=s[EX];
x[jvj+1]=V5 ;z[jvj+1]=(V5<=sepcte) ? V5 : 0;
pile[v[22]]=195; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(195,jvj+1,jvj+9)*/
V9=t[EX];
l4:if((x[jvj+9]<=0)) goto l5;
N=s[x[jvj+9]];
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=218; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+1,jvj+2)*/
x[jvj+3]=d[126];z[jvj+3]=0;
pile[v[22]]=117; pile[WZ1]=N; pile[WZ2]=218; pile[WZ3]=jvj+2; pile[WZ4]=jvj+4; 
(*f[567])( );     /*QUADRI11(117,N,218,jvj+2,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[196])( );     /*PLUF0(jvj+3,jvj+4,jvj+5)*/
l1:pile[v[22]]=Q; pile[WZ1]=jvj+6; 
(*f[195])( );     /*CPE0(Q,jvj+6)*/
x[jvj+10]=x[jvj+6] ;z[jvj+10]=z[jvj+6];
l2:if((x[jvj+10]>0)) goto l3;
pile[v[22]]=V9; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[4037])( );     /*COMBDIVA0(V9,R,jvj+5)*/
x[jvj+9]=t[x[jvj+9]];
goto l4;
l3:x[jvj+7]=s[x[jvj+10]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+7)*/
x[jvj+10]=t[x[jvj+10]];
goto l2;
l6:pile[v[22]]=Q; pile[WZ1]=763; pile[WZ2]=jvj+8; 
(*f[300])( );     /*TRI10(Q,763,jvj+8)*/
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(R,jvj+8)*/
l5:v[0]=jvj; v[22]-=3; return;
}
