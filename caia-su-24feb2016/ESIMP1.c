#include "dx.h"
void ESIMP1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V20=0,V22=0,V13=0,V14=0,V15=0,V16=0,V17=0,V19=0,V21=0,V23=0,V1=0;
int T,NY,I;
int NX,NT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10741;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1664&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; NY=pile[v[22]+1]; I=pile[v[22]+2]; NX=pile[v[22]+3]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[T]==772)) goto l1;
if((x[T]!=825)) goto l9;
if((I==1)) goto l3;
if((I!=0)) goto l9;
pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1867])( );if(v[102]) goto l9;     /*Z61Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
l7:V1=g[265];
if((V1<=0)) goto l10;
V2=vg[265];
if((V2!=0)) goto l4;
if((V1<3)) goto l6;
l4:pile[v[22]]=265; pile[WZ1]=10741; pile[WZ2]=1; pile[WZ3]=(-620); pile[WZ4]=T; pile[WZ5]=(-3188); pile[v[22]+6]=NY; pile[v[22]+7]=(-3141); pile[v[22]+8]=NT; pile[v[22]+9]=(-592); pile[v[22]+10]=I; pile[v[22]+11]=jvj+3; 
(*f[1257])( );     /*INTERP13(265,10741,1,(-620),T,(-3188),NY,(-3141),NT,(-592),I,jvj+3)*/
if((x[jvj+3]==135)) goto l5;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=NT; v[102]=0;return;
l1:if((I==0)) goto l2;
if((I!=1)) goto l9;
pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1865])( );if(v[102]) goto l9;     /*Z24Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l7;
l2:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1864])( );if(v[102]) goto l9;     /*Z3Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l7;
l3:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1866])( );if(v[102]) goto l9;     /*Z60Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l7;
l5:if((V1<4)) goto l6;
goto l10;
l6:V20=x[T];
V22=x[NY];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V13; pile[WZ2]=10741; 
(*f[98])( );     /*SRA3(135,V13,10741,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(41,3,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V15,125,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(41,NT,V16,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V20; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V20,V17,V19)*/
V19=pile[WZ3]; 
pile[WZ1]=V22; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,V22,V19,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(41,I,V21,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
if((V1!=2)) goto l10;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l10;
l9:x[NX]=NT=incon;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
