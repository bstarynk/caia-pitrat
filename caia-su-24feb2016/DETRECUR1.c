#include "dx.h"
void DETRECUR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V10=0;
int A,N,K;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11212;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1076&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; N=pile[v[22]+1]; K=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,A,jvj+3)*/
if((x[jvj+3]!=484)) goto l2;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,A,jvj+4)*/
V10=N+1;
pile[v[22]]=117; pile[WZ1]=K; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,K,V9)*/
V9=pile[WZ2]; 
if((N<=V9)) goto l1;
pile[v[22]]=K; pile[WZ1]=117; pile[WZ2]=N; 
(*f[43])( );     /*CHGC2(K,117,N)*/
l1:pile[v[22]]=jvj+4; pile[WZ1]=V10; pile[WZ2]=K; 
(*f[1076])( );     /*DETRECUR1(jvj+4,V10,K)*/
l5:x[jvj+11]=w[x[jvj+3]][8];
l6:if((x[jvj+11]<=0)) goto l9;
x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,A,jvj+8)*/
x[jvj+12]=x[jvj+8] ;z[jvj+12]=z[jvj+8];
l7:if((x[jvj+12]>0)) goto l8;
x[jvj+11]=t[x[jvj+11]];
goto l6;
l2:x[jvj+10]=w[x[jvj+3]][9];
l3:if((x[jvj+10]<=0)) goto l5;
x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+5,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=N; pile[WZ2]=K; 
(*f[1076])( );     /*DETRECUR1(jvj+6,N,K)*/
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l8:x[jvj+9]=s[x[jvj+12]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+12];
pile[v[22]]=jvj+9; pile[WZ1]=N; pile[WZ2]=K; 
(*f[1076])( );     /*DETRECUR1(jvj+9,N,K)*/
x[jvj+12]=t[x[jvj+12]];
goto l7;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
}
