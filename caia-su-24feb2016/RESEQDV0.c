#include "dx.h"
void RESEQDV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,C=0,V2=0,V7=0,V4=0,V3=0,H=0,V5=0,V8=0,V9=0,V10=0,V11=0,V13=0,V15=0,V17=0,V19=0,V6=0;
int A,B,K;
int T,S;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=11542;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1592&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; K=pile[v[22]+2]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=A%B;
C=V1;
if((C==1)) goto l1;
if((C<=1)) goto l5;
V7=(-K);
pile[v[22]]=B; pile[WZ1]=C; pile[WZ2]=V7; 
(*f[1779])( );if(v[102]) goto l5;     /*RESEQDV1(B,C,V7,T)*/
T=pile[WZ3]; 
l2:V4=A*T;
V3=V4+K;
H=V3;
V5=H%B;
if((V5==0)) goto l3;
pile[v[22]]=0; pile[WZ1]=15; 
(*f[178])( );     /*SPLO0(0,15,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V8; pile[WZ2]=36; 
(*f[41])( );     /*SRB0(10,V8,36,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11542; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(20,11542,V9,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(41,A,V10,V11)*/
V11=pile[WZ3]; 
pile[WZ1]=B; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,B,V11,V13)*/
V13=pile[WZ3]; 
pile[WZ1]=K; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(41,K,V13,V15)*/
V15=pile[WZ3]; 
pile[WZ1]=T; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(41,T,V15,V17)*/
V17=pile[WZ3]; 
pile[WZ1]=H; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(41,H,V17,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
l3:V6=H/B;
S=V6;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+3]=T; pile[v[22]+4]=S; v[102]=0;return;
l1:V2=B-K;
T=V2;
goto l2;
l5:T=S=incon;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
