#include "dx.h"
void CPIL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V12=0;
int T,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=360; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(360,A,jvj+1)*/
if((x[jvj+1]!=68)) goto l1;
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
V3=x[A];
pile[v[22]]=68; pile[WZ1]=1; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(68,1,R)*/
pile[v[22]]=A; pile[WZ1]=360; 
(*f[35])( );     /*CHGC1(A,360,R)*/
pile[v[22]]=jvj+2; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(jvj+2,302,R)*/
pile[v[22]]=V3; pile[WZ1]=R; pile[WZ2]=T; 
(*f[1601])( );     /*CPIM0(V3,R,T)*/
pile[v[22]]=1; 
(*f[71])( );     /*ENLV0(1,R)*/
l3:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,A,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]==85)) goto l4;
if((x[jvj+12]!=86)) goto l7;
x[jvj+10]=incon;
pile[v[22]]=248; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(248,A,jvj+3)*/
for(i=x[jvj+3],V12=0;i>0;i=t[i],V12++)  ;
if((V12!=1)) goto l2;
if((x[jvj+3]<=0)) goto l2;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=161; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(161,jvj+4,jvj+5)*/
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=73)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=255)) goto l2;
pile[v[22]]=T; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[1379])( );if(v[102]) goto l2;     /*CPIL0(T,jvj+5,jvj+10)*/
l5:pile[v[22]]=T; pile[WZ1]=135; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(T,135,jvj+10)*/
l7:v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:x[R]=x[jvj+1] ;z[R]=z[jvj+1];
goto l3;
l2:x[jvj+10]=x[R] ;z[jvj+10]=z[R];
goto l5;
l4:pile[v[22]]=T; pile[WZ1]=120; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(T,120,R)*/
goto l7;
l6:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
