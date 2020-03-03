#include "dx.h"
void SUBSTITUVARB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V14=0;
int T,S,BT,X,Y,A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; S=pile[v[22]+1]; BT=pile[v[22]+2]; X=pile[v[22]+3]; Y=pile[v[22]+4]; A=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[BT]==250)) goto l3;
pile[v[22]]=T; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[760])( );     /*MEMEX0(T,X,jvj+1)*/
if((x[jvj+1]==135)) goto l1;
l3:pile[v[22]]=100; pile[WZ1]=T; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,T,jvj+3)*/
x[jvj+9]=w[x[jvj+3]][9];
l4:if((x[jvj+9]>0)) goto l5;
x[jvj+10]=w[x[jvj+3]][8];
l7:if((x[jvj+10]<=0)) goto l10;
x[jvj+6]=s[x[jvj+10]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+10];
pile[v[22]]=jvj+6; pile[WZ1]=T; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,T,jvj+7)*/
x[jvj+11]=x[jvj+7] ;z[jvj+11]=z[jvj+7];
l8:if((x[jvj+11]>0)) goto l9;
x[jvj+10]=t[x[jvj+10]];
goto l7;
l1:pile[v[22]]=Y; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(Y,jvj+2)*/
if((V15=w[x[BT]][1])==incon) goto l2;
if((V15!=23)) goto l11;
V14=x[T];
pile[v[22]]=BT; pile[WZ1]=S; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(BT,S,V14)*/
pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(S,BT,jvj+2)*/
l2:pile[v[22]]=A; pile[WZ1]=218; pile[WZ2]=135; 
(*f[35])( );     /*CHGC1(A,218,135)*/
l10:v[0]=jvj; v[22]-=6; return;
l5:x[jvj+4]=s[x[jvj+9]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+9];
pile[v[22]]=jvj+4; pile[WZ1]=T; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+4,T,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=X; pile[WZ4]=Y; pile[WZ5]=A; 
(*f[1074])( );     /*SUBSTITUVARB0(jvj+5,T,jvj+4,X,Y,A)*/
l6:x[jvj+9]=t[x[jvj+9]];
goto l4;
l9:x[jvj+8]=s[x[jvj+11]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+11];
pile[v[22]]=jvj+8; pile[WZ1]=T; pile[WZ2]=jvj+6; pile[WZ3]=X; pile[WZ4]=Y; pile[WZ5]=A; 
(*f[1074])( );     /*SUBSTITUVARB0(jvj+8,T,jvj+6,X,Y,A)*/
x[jvj+11]=t[x[jvj+11]];
goto l8;
l11:pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(S,BT,jvj+2)*/
goto l2;
}
