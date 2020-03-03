#include "dx.h"
void XINC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V18=0,V38=0,V14=0,V15=0,V16=0,V17=0,L=0,V30=0,V32=0,V33=0,V34=0,V35=0,V20=0,V21=0,V24=0,V25=0,V27=0,V28=0;
int X,N,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; N=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V38=I;
x[jvj+1]=x[N] ;z[jvj+1]=z[N];
l1:if((V1=w[x[jvj+1]][1])==incon) goto l3;
if((V1==23)) goto l2;
if((x[jvj+1]==436)) goto l4;
pile[v[22]]=X; pile[WZ1]=jvj+1; pile[WZ3]=jvj+3; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(X,jvj+1,V30,jvj+3)*/
V30=pile[WZ2]; 
x[jvj+4]=V30 ;z[jvj+4]=(x[jvj+3]==20&&V30<=sepcte) ? V30 : (x[jvj+3]==41) ? (-1000) : 0;
pile[v[22]]=V38; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V38,40,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V32,jvj+1,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V33,58,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=jvj+4; 
(*f[223])( );if(v[102]) goto l5;     /*XX0(V34,jvj+4,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V35,41,L)*/
L=pile[WZ2]; 
l9:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+1,jvj+9)*/
x[jvj+1]=x[jvj+9] ;z[jvj+1]=z[jvj+9];
V38=L;
goto l1;
l2:if(x[jvj+1]==107||x[jvj+1]==105||x[jvj+1]==184) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(jvj+1,X,jvj+2)*/
if((x[jvj+2]==0)) goto l3;
V18=x[jvj+2];
pile[v[22]]=V38; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V38,40,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V14; pile[WZ2]=jvj+1; 
(*f[98])( );     /*SRA3(135,V14,jvj+1,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V15,58,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=V18; pile[WZ2]=23; 
(*f[179])( );     /*SDX1(V16,V18,23,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V17,41,L)*/
L=pile[WZ2]; 
goto l9;
l3:if((x[jvj+1]==436)) goto l4;
l5:if((x[jvj+1]==107)) goto l6;
if((x[jvj+1]==105)) goto l7;
if((x[jvj+1]!=184)) goto l8;
pile[v[22]]=184; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(184,X,jvj+8)*/
if((x[jvj+8]==0)) goto l8;
pile[v[22]]=V38; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V38,91,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=jvj+8; pile[WZ2]=59; 
(*f[640])( );     /*XL0(V27,jvj+8,59,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V28,93,L)*/
L=pile[WZ2]; 
goto l9;
l4:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,X,jvj+5)*/
pile[v[22]]=V38; pile[WZ1]=jvj+5; 
(*f[223])( );if(v[102]) goto l8;     /*XX0(V38,jvj+5,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V20,58,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V21,61,L)*/
L=pile[WZ2]; 
goto l9;
l6:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,X,jvj+6)*/
if((x[jvj+6]==0)) goto l8;
pile[v[22]]=V38; pile[WZ1]=jvj+6; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V38,jvj+6,44,L)*/
L=pile[WZ3]; 
goto l9;
l7:pile[v[22]]=105; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(105,X,jvj+7)*/
if((x[jvj+7]==0)) goto l8;
pile[v[22]]=V38; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V38,61,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V24,62,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=jvj+7; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V25,jvj+7,44,L)*/
L=pile[WZ3]; 
goto l9;
l8:L=V38;
goto l9;
l10:J=V38;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
}
