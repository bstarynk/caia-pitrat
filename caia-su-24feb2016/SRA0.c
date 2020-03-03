#include "dx.h"
void SRA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,I=0,V1=0,V2=0,V15=0,V38=0,V18=0,V20=0,V41=0,V8=0,V31=0,V32=0,V33=0,V34=0,V35=0,V5=0,V36=0,V37=0,V7=0,V25=0,V29=0,L=0,V4=0,V48=0,V44=0,V46=0;
int II,X;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

II=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=x[jvj+1]=L=incon;
if((II>=40000)) goto l1;
if((II>0)) goto l2;
I=0;
l3:if((II<=0)) goto l4;
c[v[1]][II]=32;
l4:V1=X;
if((V1>=0)) goto l5;
V2=(-V1);
pile[v[22]]=V2; pile[WZ1]=jvj+1; 
(*f[90])( );if(v[102]) goto l5;     /*SRF0(V2,jvj+1)*/
l5:if(J==incon) goto l6;
l12:if(x[jvj+1]!=incon) goto l11;
l14:if(J==incon) goto l15;
l17:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:J=II;
l2:V24=II+1;
I=V24;
goto l3;
l6:if((V1<=0)) goto l7;
V15=V1-2000;
if((V15>=0)) goto l7;
pile[v[22]]=I; pile[WZ1]=86; 
(*f[38])( );     /*SPC0(I,86,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=V1; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V38,V1,41,J)*/
J=pile[WZ3]; 
goto l12;
l7:V18=V1-2000;
if((V18<0)) goto l12;
V20=V1-4000;
if((V20>=0)) goto l12;
pile[v[22]]=I; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(I,108,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=V18; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V41,V18,41,J)*/
J=pile[WZ3]; 
goto l12;
l9:if((V7<4)) goto l10;
goto l14;
l10:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V31; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V31,10008,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,2,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V33,125,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=(-1448); 
(*f[37])( );     /*SRA0(V34,(-1448),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=V5; 
(*f[37])( );     /*SRA0(V35,V5,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=X; 
(*f[37])( );     /*SRA0(V36,X,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
if((V7!=2)) goto l14;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l14;
l11:V25=incon;
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+1,V25)*/
V25=pile[WZ2]; 
V29=I+V25;
L=V29;
V48=L;
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
l18:pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l19;     /*FNDC2(162,jvj+3,V44)*/
V44=pile[WZ2]; 
c[v[1]][V48]=V44;
l19:if((V48<=I)) goto l13;
pile[v[22]]=153; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(153,jvj+3,jvj+4)*/
V46=V48-1;
x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
V48=V46;
goto l18;
l13:pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+1,V5)*/
V5=pile[WZ2]; 
if((V5==X)) goto l14;
V7=g[71];
if((V7<=0)) goto l14;
V8=vg[71];
if((V8!=0)) goto l8;
if((V7<3)) goto l10;
l8:pile[v[22]]=71; pile[WZ1]=10008; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=jvj+1; pile[WZ5]=(-596); pile[v[22]+6]=X; pile[v[22]+7]=jvj+2; 
(*f[218])( );     /*INTERP2(71,10008,0,(-620),jvj+1,(-596),X,jvj+2)*/
if((x[jvj+2]==135)) goto l9;
goto l14;
l15:if(L!=incon) goto l16;
J=I;
goto l17;
l16:V4=L+1;
J=V4;
goto l17;
}
