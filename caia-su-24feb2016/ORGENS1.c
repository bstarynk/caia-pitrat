#include "dx.h"
void ORGENS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V11=0,V9=0,V13=0,V7=0,V10=0,V3=0;
int AT,BT,N,M;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; BT=pile[v[22]+1]; N=pile[v[22]+2]; M=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:x[jvj+4]=0 ;z[jvj+4]=0;
V3=incon;
pile[v[22]]=BT; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(BT,N,jvj+1)*/
l2:if((x[jvj+1]>0)) goto l3;
if((x[jvj+4]<=0)) goto l7;
x[jvj+7]=s[x[jvj+4]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+4];
V10=x[jvj+7];
pile[v[22]]=BT; pile[WZ1]=N; pile[WZ2]=V10; 
(*f[134])( );     /*OTA0(BT,N,V10)*/
pile[v[22]]=M; pile[WZ1]=BT; pile[WZ2]=jvj+7; 
(*f[774])( );     /*TJPLUS0(M,BT,jvj+7)*/
pile[v[22]]=BT; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(BT,N,jvj+6)*/
for(i=x[jvj+6],V7=0;i>0;i=t[i],V7++)  ;
if((V7==0)) goto l6;
if((V7>0)) goto l1;
l7:v[0]=jvj; v[22]-=4; return;
l3:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=AT; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(AT,jvj+2,jvj+3)*/
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+3,V2)*/
V2=pile[WZ2]; 
if(V3==incon) goto l8;
if((V2==V3)) goto l5;
if((V2>=V3)) goto l8;
l4:x[jvj+1]=t[x[jvj+1]];
goto l2;
l6:pile[v[22]]=M; pile[WZ1]=BT; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(M,BT,V11,jvj+5)*/
V11=pile[WZ2]; 
V9=V11;
V13=V9;
pile[v[22]]=N; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(N,BT,V13)*/
goto l7;
l8:V3=V2;
x[jvj+4]=0 ;z[jvj+4]=0;
l5:pile[v[22]]=jvj+4; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+2)*/
goto l4;
}
