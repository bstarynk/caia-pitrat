#include "dx.h"
void TROUVAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V33=0;
int AT,V,R,N;
int H;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; V=pile[v[22]+1]; R=pile[v[22]+2]; N=pile[v[22]+3]; H=pile[v[22]+4]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,R,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,N,jvj+11)*/
l4:if((x[jvj+11]>0)) goto l5;
v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=22)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=43)) goto l3;
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+4,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+6,V14)*/
V14=pile[WZ2]; 
if((V!=V14)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[AT]!=x[jvj+8])) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+2,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=41)) goto l3;
x[H]=x[jvj+2] ;z[H]=z[jvj+2];
l7:v[0]=jvj; v[22]-=5; v[102]=0;return;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l5:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=22)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+12,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=43)) goto l6;
pile[v[22]]=103; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+14,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+16,V33)*/
V33=pile[WZ2]; 
if((V!=V33)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+14,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[AT]!=x[jvj+18])) goto l6;
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+12,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=41)) goto l6;
x[H]=x[jvj+12] ;z[H]=z[jvj+12];
goto l7;
l6:x[jvj+11]=t[x[jvj+11]];
goto l4;
}
