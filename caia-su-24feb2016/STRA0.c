#include "dx.h"
void STRA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,X=0,V5=0,V7=0,I=0,J=0,V2=0,V3=0,R=0,V6=0,V9=0,V11=0,V10=0,V12=0,V13=0,V14=0,V15=0,V25=0,V24=0,V16=0,V18=0,V20=0,V23=0,V21=0,V19=0;
int P,T;
int Q,NK;
int WZ1,WZ2,WZ3,WZ4;

P=pile[v[22]]; T=pile[v[22]+1]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V15=T;
V14=P;
l12:X=incon;
if((v[8]<V15)) goto l6;
V1=phb[V15];
X=V1;
l6:I=0;
J=0;
if(X!=incon) goto l7;
l11:Q=V14;
NK=v[8];
v[22]-=4; pile[v[22]+2]=Q; pile[v[22]+3]=NK; return;
l1:V5=stenobj;
l9:V9=V14+2;
V11=X;
for(i=V11,V10=0;i>0;i=t[i],V10++)  ;
V12=V14+4;
sy[V14]=((V5>>8)&0xff);sy[V14+1]=(V5&0xff);
sy[V9]=((V10>>8)&0xff);sy[V9+1]=(V10&0xff);
V25=X;
V24=V12;
l13:if((V7!=20)) goto l16;
V16=s[V25];
if((V16<=sepcte)) goto l16;
pile[v[22]]=V16; 
(*f[1068])( );     /*CORVA2(V16,V18)*/
V18=pile[WZ1]; 
l14:sy[V24]=((V18>>8)&0xff);sy[V24+1]=(V18&0xff);
V20=t[V25];
if((V20>0)) goto l15;
V23=V24+2;
R=V23;
if((V5!=0)) goto l10;
pile[v[22]]=10030; pile[WZ1]=V7; pile[WZ2]=(-3412); 
(*f[242])( );     /*FAUTE0(10030,V7,(-3412))*/
l10:V13=V15+1;
V14=R;
V15=V13;
goto l12;
l2:V5=stenbre;
goto l9;
l3:V5=stencar;
goto l9;
l4:V5=stensymb;
goto l9;
l5:V5=stencmt;
goto l9;
l7:V2=r[X];
if((V2>0)) goto l8;
V6=r[X];
if((V6>=0)) goto l11;
V7=(-V6);
V5=incon;
if((V7==20)) goto l1;
if((V7==41)) goto l2;
if((V7==89)) goto l3;
if((V7==96)) goto l4;
if((V7==1317)) goto l5;
V5=0;
goto l9;
l8:V3=V14+2;
pile[v[22]]=X; pile[WZ1]=V3; pile[WZ2]=I; pile[WZ3]=J; 
(*f[1066])( );     /*STRO0(X,V3,I,J,R)*/
R=pile[WZ4]; 
sy[V14]=((stonorm>>8)&0xff);sy[V14+1]=(stonorm&0xff);
goto l10;
l15:V21=V24+2;
V24=V21;
V25=V20;
goto l13;
l16:V19=s[V25];
V18=V19;
goto l14;
}
