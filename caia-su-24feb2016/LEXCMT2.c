#include "dx.h"
void LEXCMT2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,C=0,V5=0,V10=0,V11=0,V12=0,V13=0,V14=0,V4=0,V2=0,V3=0,V15=0,V16=0;
int P,N,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; N=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V16=I;
V15=P;
l1:if((V15>=80)) goto l7;
V1=bh[v[1]][V16];
C=V1;
if((C==35)) goto l5;
if((V15<79)) goto l6;
V4=g[603];
if((V4<=0)) goto l7;
V5=vg[603];
if((V5!=0)) goto l2;
if((V4<3)) goto l4;
l2:pile[v[22]]=603; pile[WZ1]=11384; pile[WZ2]=2; pile[WZ3]=jvj+1; 
(*f[291])( );     /*INTERP4(603,11384,2,jvj+1)*/
if((x[jvj+1]==135)) goto l3;
l7:v[0]=jvj; v[22]-=4; v[102]=1;return;
l3:if((V4<4)) goto l4;
goto l7;
l4:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V10; pile[WZ2]=11384; 
(*f[98])( );     /*SRA3(135,V10,11384,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=V11; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V11,125,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=(-10669); 
(*f[37])( );     /*SRA0(V12,(-10669),V13)*/
V13=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V13; pile[WZ2]=194; 
(*f[42])( );     /*SRA1(135,V13,194,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; 
(*f[40])( );     /*SLG0(V14)*/
if((V4!=2)) goto l7;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l7;
l5:cmt[N][V15]=0;
J=V16;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; v[102]=0;return;
l6:V2=V15+1;
V3=V16+1;
cmt[N][V15]=C;
V15=V2;
V16=V3;
goto l1;
}
