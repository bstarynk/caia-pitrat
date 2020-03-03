#include "dx.h"
void EDIPROD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,DP=0,V2=0,DF=0,J=0,V9=0,V18=0,V19=0,V11=0,V10=0,V20=0,V21=0,V17=0,V27=0;
int N,R,BT;
int M;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=10824;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==366&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; R=pile[v[22]+1]; BT=pile[v[22]+2]; M=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=x[BT] ;z[jvj+9]=z[BT];
x[jvj+3]=x[R] ;z[jvj+3]=z[R];
l17:DP=x[jvj+7]=DF=incon;
(*f[74])( );     /*LK0()*/
V3=bh[v[1]][0];
if((V3==61)) goto l1;
x[jvj+7]=x[jvj+9] ;z[jvj+7]=z[jvj+9];
DP=(-1);
l2:V2=bh[v[1]][0];
if((V2!=43)) goto l3;
pile[v[22]]=0; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l3;     /*SMA0(0,64,67,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=337; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+3,337,jvj+4)*/
l3:if(DP!=incon) goto l4;
l7:if(V2!=47&&V2!=32) goto l11;
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[727])( );     /*INTERA0(184,N,jvj+3)*/
x[jvj+8]=184 ;z[jvj+8]=184;
if((V27=w[x[jvj+8]][1])==incon) goto l8;
if((V27!=23)) goto l20;
pile[v[22]]=N; pile[WZ1]=jvj+8; 
(*f[36])( );     /*PLUSC0(N,jvj+8,jvj+3)*/
l8:pile[v[22]]=0; pile[WZ1]=jvj+3; 
(*f[223])( );if(v[102]) goto l11;     /*XX0(0,jvj+3,J)*/
J=pile[WZ2]; 
pile[v[22]]=J; 
(*f[40])( );     /*SLG0(J)*/
pile[v[22]]=N; 
(*f[365])( );     /*STK0(N)*/
l11:if(DF!=incon) goto l9;
l12:V17=bh[v[1]][0];
if((V17==32)) goto l18;
if(x[jvj+7]!=incon) goto l13;
l14:if((V17==47)) goto l19;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:V4=bh[v[1]][1];
if((V4!=62)) goto l2;
DP=1;
x[jvj+7]=105 ;z[jvj+7]=105;
goto l2;
l4:if(x[jvj+7]!=incon) goto l5;
goto l7;
l5:if((x[jvj+7]==105)) goto l6;
if((x[jvj+7]!=107)) goto l7;
if(V2==32||V2==47||V2==43) goto l7;
pile[v[22]]=DP; pile[WZ1]=jvj+6; 
(*f[335])( );if(v[102]) goto l7;     /*LANT0(DP,jvj+6,DF)*/
DF=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
goto l7;
l6:if(V2==32||V2==47||V2==43) goto l7;
pile[v[22]]=DP; pile[WZ1]=jvj+5; 
(*f[726])( );     /*LCONT0(DP,jvj+5,DF)*/
DF=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=105; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,105,jvj+5)*/
goto l7;
l9:V9=bh[v[1]][DF];
if(V9==32) goto l10;
pile[v[22]]=20; pile[WZ1]=10824; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10824,0,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(41,1,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
l10:V11=DF+1;
V10=bh[v[1]][V11];
if(V10==32) goto l12;
pile[v[22]]=20; pile[WZ1]=10824; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10824,0,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,2,V20,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
goto l12;
l13:if(V17==32||V17==47) goto l14;
pile[v[22]]=N; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; pile[WZ3]=M; 
(*f[366])( );if(v[102]) goto l14;     /*EDIPROD0(N,jvj+3,jvj+7,M)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l18:pile[v[22]]=109; pile[WZ1]=N; pile[WZ2]=274; pile[WZ3]=jvj+3; pile[WZ4]=M; 
(*f[181])( );     /*QUADRI2(109,N,274,jvj+3,M)*/
goto l16;
l19:pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(42,100,jvj+3)*/
x[jvj+9]=107 ;z[jvj+9]=107;
goto l17;
l20:pile[v[22]]=N; pile[WZ1]=jvj+8; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(N,jvj+8,jvj+3)*/
goto l8;
}
