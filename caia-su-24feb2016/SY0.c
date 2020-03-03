#include "dx.h"
void SY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V15=0,V18=0,V17=0,V8=0,V12=0,V11=0,V21=0,V22=0,V23=0,V24=0,V25=0,V27=0,V28=0,V7=0;
int I;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V16=I+1;
V15=bh[v[1]][V16];
if((V15!=96)) goto l5;
V18=V16+1;
V17=bh[v[1]][V18];
if((V17==96)) goto l1;
pile[v[22]]=I; pile[WZ1]=jvj+1; 
(*f[163])( );if(v[102]) goto l5;     /*SYA0(I,jvj+1)*/
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+1,J)*/
J=pile[WZ2]; 
l7:v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; v[102]=0;return;
l1:J=(0);
goto l7;
l3:if((V7<4)) goto l4;
l6:v[0]=jvj; v[22]-=2; v[102]=1;return;
l4:V12=I+1;
V11=bh[v[1]][V12];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V21; pile[WZ2]=10389; 
(*f[98])( );     /*SRA3(135,V21,10389,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V22,125,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=(-4428); 
(*f[37])( );     /*SRA0(V23,(-4428),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,V12,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V25,32,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=V11; 
(*f[38])( );     /*SPC0(V27,V11,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
if((V7!=2)) goto l6;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l6;
l5:V7=g[15];
if((V7<=0)) goto l6;
V8=vg[15];
if((V8!=0)) goto l2;
if((V7<3)) goto l4;
l2:pile[v[22]]=15; pile[WZ1]=10389; pile[WZ2]=0; pile[WZ3]=(-592); pile[WZ4]=I; pile[WZ5]=jvj+2; 
(*f[612])( );     /*INTERP9(15,10389,0,(-592),I,jvj+2)*/
if((x[jvj+2]==135)) goto l3;
goto l6;
}
