#include "dx.h"
void SRA2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V15=0,V37=0,V18=0,V20=0,V40=0,V8=0,V30=0,V31=0,V32=0,V33=0,V34=0,V5=0,V35=0,V36=0,V7=0,V24=0,V28=0,L=0,V4=0,V47=0,V43=0,V45=0;
int X,I;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=x[jvj+1]=L=incon;
if((I<40000)) goto l1;
J=I;
l1:V1=X;
if((V1>=0)) goto l2;
V2=(-V1);
pile[v[22]]=V2; pile[WZ1]=jvj+1; 
(*f[90])( );if(v[102]) goto l2;     /*SRF0(V2,jvj+1)*/
l2:if(J==incon) goto l3;
l9:if(x[jvj+1]!=incon) goto l8;
l11:if(J==incon) goto l12;
l14:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l3:if((V1<=0)) goto l4;
V15=V1-2000;
if((V15>=0)) goto l4;
pile[v[22]]=I; pile[WZ1]=86; 
(*f[38])( );     /*SPC0(I,86,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=V1; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V37,V1,41,J)*/
J=pile[WZ3]; 
goto l9;
l4:V18=V1-2000;
if((V18<0)) goto l9;
V20=V1-4000;
if((V20>=0)) goto l9;
pile[v[22]]=I; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(I,108,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=V18; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V40,V18,41,J)*/
J=pile[WZ3]; 
goto l9;
l6:if((V7<4)) goto l7;
goto l11;
l7:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V30,10008,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,2,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V32,125,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=(-1448); 
(*f[37])( );     /*SRA0(V33,(-1448),V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=V5; 
(*f[37])( );     /*SRA0(V34,V5,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=X; 
(*f[37])( );     /*SRA0(V35,X,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
if((V7!=2)) goto l11;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l11;
l8:V24=incon;
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+1,V24)*/
V24=pile[WZ2]; 
V28=I+V24;
L=V28;
V47=L;
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
l15:pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(162,jvj+3,V43)*/
V43=pile[WZ2]; 
c[v[1]][V47]=V43;
l16:if((V47<=I)) goto l10;
pile[v[22]]=153; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(153,jvj+3,jvj+4)*/
V45=V47-1;
x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
V47=V45;
goto l15;
l10:pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,jvj+1,V5)*/
V5=pile[WZ2]; 
if((V5==X)) goto l11;
V7=g[71];
if((V7<=0)) goto l11;
V8=vg[71];
if((V8!=0)) goto l5;
if((V7<3)) goto l7;
l5:pile[v[22]]=71; pile[WZ1]=10008; pile[WZ2]=2; pile[WZ3]=(-620); pile[WZ4]=jvj+1; pile[WZ5]=(-596); pile[v[22]+6]=X; pile[v[22]+7]=jvj+2; 
(*f[218])( );     /*INTERP2(71,10008,2,(-620),jvj+1,(-596),X,jvj+2)*/
if((x[jvj+2]==135)) goto l6;
goto l11;
l12:if(L!=incon) goto l13;
J=I;
goto l14;
l13:V4=L+1;
J=V4;
goto l14;
}
