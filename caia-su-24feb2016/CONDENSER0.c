#include "dx.h"
void CONDENSER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V11=0,V7=0,V8=0,V9=0,V10=0,V12=0,V1=0,RES=0;
int N,V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11206;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==405&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; V=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=g[542];
if((V1<=0)) goto l7;
V2=vg[542];
if((V2!=0)) goto l1;
if((V1<3)) goto l3;
l1:pile[v[22]]=542; pile[WZ1]=11206; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=N; pile[WZ5]=(-611); pile[v[22]+6]=V; pile[v[22]+7]=jvj+2; 
(*f[218])( );     /*INTERP2(542,11206,0,(-625),N,(-611),V,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
l7:pile[v[22]]=N; pile[WZ1]=V; pile[WZ2]=jvj+4; pile[WZ3]=jvj+6; 
(*f[767])( );if(v[102]) goto l8;     /*ETATCREF1(N,V,jvj+4,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
l4:if((x[jvj+7]>0)) goto l5;
pile[v[22]]=N; pile[WZ1]=jvj+6; pile[WZ2]=68; 
(*f[768])( );     /*ELIMPARNOUVPB0(N,jvj+6,68)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:if((V1<4)) goto l3;
goto l7;
l3:V11=x[N];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=11206; 
(*f[98])( );     /*SRA3(135,V7,11206,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V8,125,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V11; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(20,V11,V9,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V10,V,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
if((V1!=2)) goto l7;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l7;
l5:x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[765])( );     /*EVALNOUVPB0(jvj+3,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[766])( );if(v[102]) goto l6;     /*VALGLO0(jvj+5,RES)*/
RES=pile[WZ1]; 
pile[v[22]]=jvj+3; pile[WZ1]=741; pile[WZ2]=RES; 
(*f[43])( );     /*CHGC2(jvj+3,741,RES)*/
l6:x[jvj+7]=t[x[jvj+7]];
goto l4;
}
