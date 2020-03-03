#include "dx.h"
void CREFONCDANSA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=0 ;z[jvj+15]=0;
x[E]=x[jvj+15] ;z[E]=z[jvj+15];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]!=44&&x[jvj+3]!=45) goto l1;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+4,jvj+5)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,A,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=43)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=1300)) goto l1;
pile[v[22]]=E; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(E,jvj+5)*/
l1:x[jvj+16]=w[x[jvj+1]][9];
l2:if((x[jvj+16]>0)) goto l3;
x[jvj+17]=w[x[jvj+1]][8];
l5:if((x[jvj+17]<=0)) goto l8;
x[jvj+12]=s[x[jvj+17]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+17];
pile[v[22]]=jvj+12; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,A,jvj+13)*/
x[jvj+18]=x[jvj+13] ;z[jvj+18]=z[jvj+13];
l6:if((x[jvj+18]>0)) goto l7;
x[jvj+17]=t[x[jvj+17]];
goto l5;
l3:x[jvj+10]=s[x[jvj+16]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+16];
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+10,A,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=E; 
(*f[1396])( );     /*CREFONCDANSA1(jvj+11,E)*/
l4:x[jvj+16]=t[x[jvj+16]];
goto l2;
l7:x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
pile[v[22]]=jvj+14; pile[WZ1]=E; 
(*f[1396])( );     /*CREFONCDANSA1(jvj+14,E)*/
x[jvj+18]=t[x[jvj+18]];
goto l6;
l8:v[0]=jvj; v[22]-=2; return;
}
