#include "dx.h"
void COMPRIMUTILE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V13=0,V3=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,JJ=0,V16=0,V30=0,V21=0,V22=0,V23=0,V24=0,V26=0,V28=0,V15=0,V14=0,V31=0;
int I,N,T,J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10944;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1334&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; T=pile[v[22]+2]; J=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V31=J;
V30=I;
l1:if((V30>N)) goto l3;
V4=tt[V30];
V13=tu[V30];
if((V13>0)) goto l2;
if((V4==864)) goto l2;
l3:JJ=V31;
l7:if((V30!=N)) goto l8;
pile[v[22]]=T; pile[WZ1]=117; pile[WZ2]=JJ; 
(*f[43])( );     /*CHGC2(T,117,JJ)*/
l8:if((JJ<1999)) goto l9;
V15=g[507];
if((V15<=0)) goto l10;
V16=vg[507];
if((V16!=0)) goto l4;
if((V15<3)) goto l6;
l4:pile[v[22]]=507; pile[WZ1]=10944; pile[WZ2]=0; pile[WZ3]=(-592); pile[WZ4]=V30; pile[WZ5]=(-625); pile[v[22]+6]=N; pile[v[22]+7]=jvj+2; 
(*f[1256])( );     /*INTERP12(507,10944,0,(-592),V30,(-625),N,jvj+2)*/
if((x[jvj+2]==135)) goto l5;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:V3=V31+1;
V5=tp[V30];
V6=tm[V30];
V7=tn[V30];
V8=ta1[V30];
V9=ta2[V30];
V10=ta3[V30];
V11=ta4[V30];
V12=ta5[V30];
JJ=V3;
ctt[JJ]=V4;
ctp[JJ]=V5;
ctm[JJ]=V6;
ctn[JJ]=V7;
cta1[JJ]=V8;
cta2[JJ]=V9;
cta3[JJ]=V10;
cta4[JJ]=V11;
cta5[JJ]=V12;
cts[JJ]=V30;
ctu[JJ]=V13;
goto l7;
l5:if((V15<4)) goto l6;
goto l10;
l6:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V21; pile[WZ2]=10944; 
(*f[98])( );     /*SRA3(135,V21,10944,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V22,125,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V30; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V30,V23,V24)*/
V24=pile[WZ3]; 
pile[WZ1]=N; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,N,V24,V26)*/
V26=pile[WZ3]; 
pile[WZ1]=JJ; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,JJ,V26,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
if((V15!=2)) goto l10;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l10;
l9:if((V30>=N)) goto l10;
V14=V30+1;
V30=V14;
V31=JJ;
goto l1;
}
