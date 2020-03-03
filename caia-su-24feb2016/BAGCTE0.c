#include "dx.h"
void BAGCTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0;
int A;
int R,RR,RV;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; RR=pile[v[22]+2]; RV=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=0 ;z[jvj+9]=0;
x[R]=x[jvj+9] ;z[R]=z[jvj+9];
x[RR]=x[jvj+9] ;z[RR]=z[jvj+9];
x[RV]=x[jvj+9] ;z[RV]=z[jvj+9];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l1;
x[jvj+10]=w[x[jvj+1]][9];
l2:if((x[jvj+10]<=0)) goto l4;
x[jvj+3]=s[x[jvj+10]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+10];
pile[v[22]]=jvj+3; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+3,A,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=R; pile[WZ2]=RR; pile[WZ3]=RV; 
(*f[4103])( );     /*BAGCTE1(jvj+4,R,RR,RV)*/
l3:x[jvj+10]=t[x[jvj+10]];
goto l2;
l1:pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(A,jvj+2)*/
pile[v[22]]=RV; 
(*f[522])( );     /*PLUB2(RV,jvj+2)*/
l4:x[jvj+11]=w[x[jvj+1]][8];
l5:if((x[jvj+11]<=0)) goto l8;
x[jvj+5]=s[x[jvj+11]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+11];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,A,jvj+6)*/
x[jvj+12]=x[jvj+6] ;z[jvj+12]=z[jvj+6];
l6:if((x[jvj+12]>0)) goto l7;
x[jvj+11]=t[x[jvj+11]];
goto l5;
l7:x[jvj+7]=s[x[jvj+12]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+12];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=RR; pile[WZ3]=RV; 
(*f[4103])( );     /*BAGCTE1(jvj+7,R,RR,RV)*/
x[jvj+12]=t[x[jvj+12]];
goto l6;
l8:pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,A,jvj+8)*/
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(R,jvj+8)*/
l9:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,A,K)*/
K=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=K; 
(*f[978])( );     /*PLUB3(RR,K)*/
l10:v[0]=jvj; v[22]-=4; return;
}
