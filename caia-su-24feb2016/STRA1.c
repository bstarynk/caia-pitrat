#include "dx.h"
void STRA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,X=0,V5=0,V7=0,V2=0,V3=0,R=0,V9=0,V11=0,V10=0,V12=0,V13=0,V23=0,V22=0,V14=0,V16=0,V18=0,V21=0,V19=0,V17=0;
int P,T,I,J;
int Q,NK;
int WZ1,WZ2,WZ3,WZ4;

P=pile[v[22]]; T=pile[v[22]+1]; I=pile[v[22]+2]; J=pile[v[22]+3]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[8]<T)) goto l9;
V1=phb[T];
X=V1;
V2=r[X];
if((V2>0)) goto l6;
if((V2>=0)) goto l9;
V7=(-V2);
V5=incon;
if((V7==20)) goto l1;
if((V7==41)) goto l2;
if((V7==89)) goto l3;
if((V7==96)) goto l4;
if((V7==1317)) goto l5;
V5=0;
l7:V9=P+2;
V11=X;
for(i=V11,V10=0;i>0;i=t[i],V10++)  ;
V12=P+4;
sy[P]=((V5>>8)&0xff);sy[P+1]=(V5&0xff);
sy[V9]=((V10>>8)&0xff);sy[V9+1]=(V10&0xff);
V23=X;
V22=V12;
l11:if((V7!=20)) goto l14;
V14=s[V23];
if((V14<=sepcte)) goto l14;
pile[v[22]]=V14; 
(*f[1068])( );     /*CORVA2(V14,V16)*/
V16=pile[WZ1]; 
l12:sy[V22]=((V16>>8)&0xff);sy[V22+1]=(V16&0xff);
V18=t[V23];
if((V18>0)) goto l13;
V21=V22+2;
R=V21;
if((V5!=0)) goto l8;
pile[v[22]]=10030; pile[WZ1]=V7; pile[WZ2]=(-3412); 
(*f[242])( );     /*FAUTE0(10030,V7,(-3412))*/
l8:V13=T+1;
pile[v[22]]=R; pile[WZ1]=V13; 
(*f[678])( );     /*STRA0(R,V13,Q,NK)*/
Q=pile[WZ2]; NK=pile[WZ3]; 
l10:v[22]-=6; pile[v[22]+4]=Q; pile[v[22]+5]=NK; return;
l1:V5=stenobj;
goto l7;
l2:V5=stenbre;
goto l7;
l3:V5=stencar;
goto l7;
l4:V5=stensymb;
goto l7;
l5:V5=stencmt;
goto l7;
l6:V3=P+2;
pile[v[22]]=X; pile[WZ1]=V3; pile[WZ2]=I; pile[WZ3]=J; 
(*f[1066])( );     /*STRO0(X,V3,I,J,R)*/
R=pile[WZ4]; 
sy[P]=((stonorm>>8)&0xff);sy[P+1]=(stonorm&0xff);
goto l8;
l9:Q=P;
NK=v[8];
goto l10;
l13:V19=V22+2;
V22=V19;
V23=V18;
goto l11;
l14:V17=s[V23];
V16=V17;
goto l12;
}
