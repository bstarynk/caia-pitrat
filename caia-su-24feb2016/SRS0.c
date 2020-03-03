#include "dx.h"
void SRS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V6=0,V10=0,V9=0,V14=0,V15=0,V16=0,V17=0,V18=0,V20=0,V5=0,V26=0,V21=0,V24=0,V22=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V2=A+1;
V1=bh[v[1]][V2];
if((V1!=96)) goto l4;
V3=V2+1;
V26=V3;
l6:V21=bh[v[1]][V26];
if((V21==96)) goto l8;
if(V21!=96&&V21!=94) goto l7;
l4:V5=g[16];
if((V5<=0)) goto l5;
V6=vg[16];
if((V6!=0)) goto l1;
if((V5<3)) goto l3;
l1:pile[v[22]]=16; pile[WZ1]=10249; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=jvj+1; 
(*f[612])( );     /*INTERP9(16,10249,0,(-598),A,jvj+1)*/
if((x[jvj+1]==135)) goto l2;
l5:v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:if((V5<4)) goto l3;
goto l5;
l3:V10=A+1;
V9=bh[v[1]][V10];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V14; pile[WZ2]=10249; 
(*f[98])( );     /*SRA3(135,V14,10249,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V15,125,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=(-4428); 
(*f[37])( );     /*SRA0(V16,(-4428),V17)*/
V17=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(41,V10,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; pile[WZ1]=V9; 
(*f[38])( );     /*SPC0(V18,V9,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
if((V5!=2)) goto l5;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l5;
l7:V24=V26+1;
V26=V24;
goto l6;
l8:V22=V26+1;
R=V22;
v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
}
