#include "dx.h"
void FNDZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V3=0;
int X,ATT;
int R,TY;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; ATT=pile[v[22]+1]; TY=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[jvj+3]=w[x[ATT]][1])==incon) goto l6;
x[TY]=x[jvj+3] ;z[TY]=z[jvj+3];
if((x[TY]==20)) goto l1;
if((x[TY]==41)) goto l2;
if((x[TY]==96)) goto l3;
if((x[TY]==89)) goto l4;
if((x[TY]==1317)) goto l5;
if((x[TY]!=23)) goto l6;
pile[v[22]]=ATT; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(ATT,X,jvj+2)*/
V3=x[jvj+2];
R=V3;
l7:v[0]=jvj; v[22]-=4; pile[v[22]+2]=R; v[102]=0;return;
l1:pile[v[22]]=ATT; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(ATT,X,jvj+1)*/
V1=x[jvj+1];
R=V1;
goto l7;
l2:pile[v[22]]=ATT; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(ATT,X,R)*/
R=pile[WZ2]; 
goto l7;
l3:pile[v[22]]=ATT; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(ATT,X,V6)*/
V6=pile[WZ2]; 
V7=V6;
R=V7;
goto l7;
l4:pile[v[22]]=ATT; pile[WZ1]=X; 
(*f[219])( );if(v[102]) goto l6;     /*FNDC2(ATT,X,V8)*/
V8=pile[WZ2]; 
V9=V8;
R=V9;
goto l7;
l5:pile[v[22]]=ATT; pile[WZ1]=X; 
(*f[233])( );if(v[102]) goto l6;     /*FNDC3(ATT,X,V10)*/
V10=pile[WZ2]; 
V11=V10;
R=V11;
goto l7;
l6:R=x[TY]=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
}
