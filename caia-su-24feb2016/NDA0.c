#include "dx.h"
void NDA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V18=0,RP=0,V20=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(277,A,jvj+1)*/
if((x[jvj+1]==481)) goto l1;
l4:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+6)*/
if((x[jvj+6]!=1050)) goto l1;
if((x[jvj+7]=w[x[jvj+6]][3])==incon) goto l1;
pile[v[22]]=A; pile[WZ1]=jvj+7; pile[WZ3]=jvj+8; 
(*f[45])( );if(v[102]) goto l1;     /*FNDZ0(A,jvj+7,V18,jvj+8)*/
V18=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+9,RP)*/
RP=pile[WZ2]; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l1;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=436; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+4,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V4)*/
V4=pile[WZ2]; 
if((V4!=RP)) goto l3;
pile[v[22]]=481; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(481,jvj+4,jvj+10)*/
l5:if((x[jvj+10]<=0)) goto l1;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+7; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+11,jvj+7,V20,jvj+12)*/
V20=pile[WZ2]; 
if((V18!=V20)) goto l6;
x[R]=x[jvj+11] ;z[R]=z[jvj+11];
l7:v[0]=jvj; v[22]-=2; return;
l1:x[R]=x[A] ;z[R]=z[A];
goto l7;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l6:x[jvj+10]=t[x[jvj+10]];
goto l5;
}
