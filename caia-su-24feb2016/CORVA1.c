#include "dx.h"
void CORVA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V1=0,V2=0,V18=0,V20=0,V22=0,V4=0,V32=0,V7=0,V31=0,V25=0,V26=0,V27=0,V28=0,V30=0,V3=0,V9=0,V10=0,V13=0,V12=0,V15=0,V14=0,V17=0,V33=0;
int A,N,T;
int B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; N=pile[v[22]+1]; T=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V33=T;
V32=N;
l6:if((V32<=32000)) goto l8;
V3=g[122];
if((V3<=0)) goto l1;
V4=vg[122];
if((V4!=0)) goto l3;
if((V3<3)) goto l5;
l3:pile[v[22]]=122; pile[WZ1]=10028; pile[WZ2]=1; pile[WZ3]=(-625); pile[WZ4]=V32; pile[WZ5]=jvj+1; 
(*f[612])( );     /*INTERP9(122,10028,1,(-625),V32,jvj+1)*/
if((x[jvj+1]==135)) goto l4;
l1:if((v[46]!=1)) goto l7;
I=0;
l2:V1=cpb[I];
V2=cpa[I];
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,I,0,V18)*/
V18=pile[WZ3]; 
pile[WZ1]=V2; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(41,V2,V18,V20)*/
V20=pile[WZ3]; 
pile[WZ1]=V1; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,V1,V20,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
I++;
if((I<=32767)) goto l2;
l7:pile[v[22]]=15; 
(*f[611])( );     /*ERRINCIDENT0(15)*/
l8:V9=cpb[V33];
if((V9==A)) goto l9;
if((V9<=0)) goto l10;
V14=incon;
V15=V33+1;
if((V15<=32767)) goto l11;
V14=0;
l12:V17=V32+1;
V32=V17;
V33=V14;
goto l6;
l4:if((V3<4)) goto l5;
goto l1;
l5:V7=v[18];
V31=V7;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V25; pile[WZ2]=10028; 
(*f[98])( );     /*SRA3(135,V25,10028,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V26,125,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V32; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,V32,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V31; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(20,V31,V28,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
if((V3!=2)) goto l1;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l1;
l9:V10=cpa[V33];
B=V10;
l13:v[0]=jvj; v[22]-=4; pile[v[22]+3]=B; return;
l10:V13=v[8]+1;
V12=(-V13);
cpa[V33]=V12;
cpb[V33]=A;
phb[V13]=A;
v[8]=V13;
B=V12;
goto l13;
l11:V14=V15;
goto l12;
}
