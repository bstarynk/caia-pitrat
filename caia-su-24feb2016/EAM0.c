#include "dx.h"
void EAM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V21=0,V20=0,C=0,D=0,V1=0,V4=0,H=0,V17=0,X=0,Y=0,V3=0,V2=0,DX=0,V6=0,V5=0,V8=0,V7=0,DYY=0,I=0,V10=0,V11=0,V23=0,V25=0,V27=0,V12=0,V13=0,V14=0,V15=0,V16=0,V29=0,V31=0,V33=0,V35=0,V37=0,V39=0,V40=0;
int L;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10470;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==112&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V19=bh[v[1]][L];
V21=L+1;
V20=bh[v[1]][V21];
C=V19;
D=V20;
if((C==88)) goto l2;
if((C==66)) goto l3;
if((D==84)) goto l19;
if((C!=43)) goto l7;
l21:pile[v[22]]=L; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l22;     /*SMA0(L,64,67,jvj+3)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V39,jvj+3,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
pile[v[22]]=jvj+3; 
(*f[338])( );     /*SORGRAMI0(jvj+3)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:V1=V2;
l8:pile[v[22]]=V1; 
(*f[126])( );     /*LND2(V1,X,DX)*/
X=pile[WZ1]; DX=pile[WZ2]; 
V6=DX+1;
V5=bh[v[1]][V6];
if((V5==32)) goto l9;
V8=DX+1;
V7=bh[v[1]][V8];
if((V7==32)) goto l19;
pile[v[22]]=V8; 
(*f[126])( );     /*LND2(V8,Y,DYY)*/
Y=pile[WZ1]; DYY=pile[WZ2]; 
l10:if((C==82)) goto l11;
if((C==83)) goto l12;
if((C==84)) goto l13;
if((C==86)) goto l14;
if((C==88)) goto l17;
if((C!=66)) goto l19;
V12=X;
l18:if((V12>Y)) goto l22;
V13=ty[V12];
V14=pl[V12];
V15=av[V12];
V16=ou[V12];
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V12,0,V29)*/
V29=pile[WZ3]; 
pile[WZ1]=V16; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(41,V16,V29,V31)*/
V31=pile[WZ3]; 
pile[WZ1]=V15; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,V15,V31,V33)*/
V33=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,V14,V33,V35)*/
V35=pile[WZ3]; 
pile[WZ1]=V13; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,V13,V35,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
V12++;
goto l18;
l2:if((D!=84)) goto l7;
H=v[0];
l4:if((H>=20)) goto l5;
X=0;
l6:Y=H;
goto l10;
l3:if((D!=84)) goto l7;
H=v[14];
goto l4;
l5:V17=H-20;
X=V17;
goto l6;
l7:V3=L+1;
V2=V3+1;
V1=incon;
if((D==32)) goto l1;
V4=V2+1;
V1=V4;
goto l8;
l9:Y=X;
goto l10;
l11:r[X]=Y;
goto l22;
l12:s[X]=Y;
goto l22;
l13:t[X]=Y;
goto l22;
l14:if((D==32)) goto l15;
if((D!=86)) goto l22;
vv[X]=Y;
goto l22;
l15:v[X]=Y;
goto l22;
l17:I=X;
l16:if((I>Y)) goto l22;
V10=z[I];
V11=x[I];
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,I,0,V23)*/
V23=pile[WZ3]; 
pile[WZ1]=V11; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V11,V23,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V10; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,V10,V25,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
I++;
goto l16;
l19:if((C==32)) goto l20;
if((C==43)) goto l21;
goto l22;
l20:pile[v[22]]=L; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l22;     /*SMA0(L,64,67,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[109])( );     /*SD0(jvj+2)*/
goto l22;
}
