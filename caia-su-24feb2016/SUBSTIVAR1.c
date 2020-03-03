#include "dx.h"
void SUBSTIVAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V16=0;
int T,S,BT,X,Y;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; S=pile[v[22]+1]; BT=pile[v[22]+2]; X=pile[v[22]+3]; Y=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[BT]==250)) goto l1;
pile[v[22]]=T; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[760])( );     /*MEMEX0(T,X,jvj+3)*/
if((x[jvj+3]==135)) goto l3;
l4:pile[v[22]]=100; pile[WZ1]=T; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,T,jvj+5)*/
x[jvj+11]=w[x[jvj+5]][9];
l5:if((x[jvj+11]>0)) goto l6;
x[jvj+12]=w[x[jvj+5]][8];
l8:if((x[jvj+12]<=0)) goto l11;
x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
pile[v[22]]=jvj+8; pile[WZ1]=T; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,T,jvj+9)*/
x[jvj+13]=x[jvj+9] ;z[jvj+13]=z[jvj+9];
l9:if((x[jvj+13]>0)) goto l10;
x[jvj+12]=t[x[jvj+12]];
goto l8;
l1:pile[v[22]]=T; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[760])( );     /*MEMEX0(T,X,jvj+1)*/
if((x[jvj+1]==135)) goto l2;
goto l4;
l2:pile[v[22]]=Y; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(Y,jvj+2)*/
l11:v[0]=jvj; v[22]-=5; return;
l3:pile[v[22]]=Y; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(Y,jvj+4)*/
if((V17=w[x[BT]][1])==incon) goto l11;
if((V17!=23)) goto l12;
V16=x[T];
pile[v[22]]=BT; pile[WZ1]=S; pile[WZ2]=V16; 
(*f[134])( );     /*OTA0(BT,S,V16)*/
pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(S,BT,jvj+4)*/
goto l11;
l6:x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=jvj+6; pile[WZ1]=T; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+6,T,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ2]=jvj+6; pile[WZ3]=X; pile[WZ4]=Y; 
(*f[4003])( );     /*SUBSTIVAR1(jvj+7,T,jvj+6,X,Y)*/
l7:x[jvj+11]=t[x[jvj+11]];
goto l5;
l10:x[jvj+10]=s[x[jvj+13]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+13];
pile[v[22]]=jvj+10; pile[WZ1]=T; pile[WZ2]=jvj+8; pile[WZ3]=X; pile[WZ4]=Y; 
(*f[4003])( );     /*SUBSTIVAR1(jvj+10,T,jvj+8,X,Y)*/
x[jvj+13]=t[x[jvj+13]];
goto l9;
l12:pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(S,BT,jvj+4)*/
goto l11;
}
