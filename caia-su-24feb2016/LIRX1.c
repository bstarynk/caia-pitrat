#include "dx.h"
void LIRX1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V18=0,V20=0,V12=0,V13=0,V14=0,V15=0,V17=0,V19=0,V1=0,V9=0,V8=0;
int W;
int B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

W=pile[v[22]]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((W<=v[11])) goto l5;
V1=g[13];
if((V1<=0)) goto l4;
V2=vg[13];
if((V2!=0)) goto l1;
if((V1<3)) goto l3;
l1:pile[v[22]]=13; pile[WZ1]=10040; pile[WZ2]=1; pile[WZ3]=(-622); pile[WZ4]=W; pile[WZ5]=jvj+1; 
(*f[612])( );     /*INTERP9(13,10040,1,(-622),W,jvj+1)*/
if((x[jvj+1]==135)) goto l2;
l4:pile[v[22]]=22; 
(*f[611])( );     /*ERRINCIDENT0(22)*/
l5:V9=lpr[W];
if((V9>0)) goto l6;
if((V9==0)) goto l7;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:if((V1<4)) goto l3;
goto l4;
l3:V5=v[16];
V18=v[11];
V20=V5;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V12; pile[WZ2]=10040; 
(*f[98])( );     /*SRA3(135,V12,10040,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V13,125,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=W; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(41,W,V14,V15)*/
V15=pile[WZ3]; 
pile[WZ1]=V18; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(41,V18,V15,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V20; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V20,V17,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
if((V1!=2)) goto l4;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l4;
l6:B=V9;
l8:v[0]=jvj; v[22]-=2; pile[v[22]+1]=B; v[102]=0;return;
l7:pile[v[22]]=0; pile[WZ1]=0; pile[WZ2]=jvj+2; 
(*f[211])( );     /*TRI6(0,0,jvj+2)*/
V8=x[jvj+2];
B=V8;
lpr[W]=B;
goto l8;
}
