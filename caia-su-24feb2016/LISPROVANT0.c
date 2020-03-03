#include "dx.h"
void LISPROVANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V9=0,V11=0,V7=0,V8=0,V10=0,V12=0,P=0,V20=0,V19=0,V18=0,V5=0,V14=0,V15=0,V16=0,V17=0;
int N,X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11554;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==563&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=683; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,X,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=934; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(934,X,jvj+2)*/
V9=x[N];
V11=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V9; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(20,V9,V7,V8)*/
V8=pile[WZ3]; 
pile[WZ1]=V11; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(20,V11,V8,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(41,V1,V10,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l2:pile[v[22]]=159; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,X,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
pile[v[22]]=288; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(288,jvj+3,jvj+6)*/
if(x[jvj+6]!=187&&x[jvj+6]!=44) goto l5;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(110,jvj+3,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V14; pile[WZ2]=110; 
(*f[42])( );     /*SRA1(135,V14,110,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V15,58,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=V5; 
(*f[37])( );     /*SRA0(V16,V5,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
pile[v[22]]=1489; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1489,jvj+3,jvj+4)*/
V20=x[jvj+4];
l1:if((V20<=0)) goto l5;
P=s[V20];
V19=P;
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V19,0,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
V20=t[V20];
goto l1;
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
}
