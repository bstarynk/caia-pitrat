#include "dx.h"
void EFFACE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V26=0,V12=0,V28=0,V13=0,V30=0,V3=0,V6=0,V8=0,V31=0,V23=0,V22=0;
int L;
int M;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10829;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==372&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+8]=x[M]=incon;
V26=bh[v[1]][2];
if((V26!=32)) goto l2;
pile[v[22]]=374; pile[WZ1]=L; pile[WZ2]=M; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(374,L,M)*/
l1:pile[v[22]]=358; pile[WZ1]=L; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(358,L,jvj+2)*/
l2:pile[v[22]]=374; pile[WZ1]=L; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(374,L,jvj+3)*/
pile[v[22]]=274; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(274,jvj+3,jvj+4)*/
pile[v[22]]=109; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+3,jvj+5)*/
x[jvj+8]=x[jvj+4] ;z[jvj+8]=z[jvj+4];
z[jvj+8]=x[jvj+5];
l3:if(x[jvj+2]!=incon) goto l4;
l11:if(x[M]!=incon) goto l12;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l4:if(x[jvj+8]!=incon) goto l5;
goto l11;
l5:if((V3=w[x[jvj+2]][1])==incon) goto l11;
if((V3==23)) goto l6;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+2,jvj+8,jvj+6)*/
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,L,jvj+15)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; 
(*f[71])( );     /*ENLV0(jvj+2,jvj+8)*/
V12=bh[v[1]][1];
if((V12!=43)) goto l9;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l9;     /*FNDZ0(jvj+6,jvj+2,V28,jvj+7)*/
V28=pile[WZ2]; 
V13=V28;
V30=V13;
pile[v[22]]=jvj+8; pile[WZ2]=V30; 
(*f[43])( );     /*CHGC2(jvj+8,jvj+2,V30)*/
l9:pile[v[22]]=jvj+15; 
(*f[365])( );     /*STK0(jvj+15)*/
goto l11;
l6:if((V6=w[x[jvj+2]][2])==incon) goto l11;
if((V6!=20)) goto l8;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(274,L,jvj+9)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+2,jvj+8,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l7;
l8:if(V6!=41&&V6!=89&&V6!=96) goto l11;
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,L,jvj+12)*/
if((x[jvj+13]=w[V6][3])==incon) goto l11;
pile[v[22]]=L; pile[WZ1]=jvj+13; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(L,jvj+13,V31,jvj+14)*/
V31=pile[WZ2]; 
V23=V31;
V22=V23;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=V22; 
(*f[134])( );     /*OTA0(jvj+2,jvj+8,V22)*/
pile[v[22]]=jvj+12; 
(*f[365])( );     /*STK0(jvj+12)*/
goto l11;
l7:pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,L,jvj+11)*/
V8=x[jvj+9];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(jvj+2,jvj+8,V8)*/
pile[v[22]]=jvj+11; 
(*f[365])( );     /*STK0(jvj+11)*/
goto l8;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
}
