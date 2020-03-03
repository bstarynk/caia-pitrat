#include "dx.h"
void QY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,NT=0,V7=0,V9=0,V6=0,V15=0,PP=0,V14=0,P=0,V20=0,V19=0;
int N,Q;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11020;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2071&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; Q=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,N,jvj+2)*/
if((x[jvj+2]!=528)) goto l1;
pile[v[22]]=218; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,N,jvj+3)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+4)*/
for(i=x[jvj+4],V2=0;i>0;i=t[i],V2++)  ;
if((V2<=0)) goto l1;
NT=V2;
l2:pile[v[22]]=NT; 
(*f[850])( );if(v[102]) goto l3;     /*LOG0(NT,V15)*/
V15=pile[WZ1]; 
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=jvj+7; pile[WZ1]=955; pile[WZ2]=V15; 
(*f[186])( );     /*BTC0(jvj+7,955,V15)*/
l3:pile[v[22]]=N; pile[WZ1]=949; pile[WZ2]=NT; 
(*f[43])( );     /*CHGC2(N,949,NT)*/
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=18; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(18,jvj+8,PP)*/
PP=pile[WZ2]; 
if((PP>100)) goto l4;
V14=PP*NT;
P=V14;
pile[v[22]]=jvj+8; pile[WZ1]=18; pile[WZ2]=P; 
(*f[43])( );     /*CHGC2(jvj+8,18,P)*/
l5:if((P>100)) goto l6;
pile[v[22]]=728; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(728,N,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=P; 
(*f[2071])( );     /*QY0(jvj+10,P)*/
l7:x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=18; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(18,jvj+11,V20)*/
V20=pile[WZ2]; 
V19=V20/P;
pile[v[22]]=N; pile[WZ1]=466; pile[WZ2]=V19; 
(*f[43])( );     /*CHGC2(N,466,V19)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=158; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,N,jvj+5)*/
if((x[jvj+5]!=528)) goto l4;
pile[v[22]]=218; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,N,jvj+6)*/
pile[v[22]]=164; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(164,jvj+6,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(280,jvj+6,V9)*/
V9=pile[WZ2]; 
V6=V7-V9;
NT=V6;
goto l2;
l4:P=Q;
goto l5;
l6:pile[v[22]]=728; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(728,N,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[2128])( );     /*QYBIS0(jvj+9)*/
goto l7;
}
