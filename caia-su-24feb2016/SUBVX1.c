#include "dx.h"
void SUBVX1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V16=0,V15=0;
int M,S,BT,X,V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

M=pile[v[22]]; S=pile[v[22]+1]; BT=pile[v[22]+2]; X=pile[v[22]+3]; V=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=M; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,M,V10)*/
V10=pile[WZ2]; 
if((V!=V10)) goto l1;
pile[v[22]]=X; pile[WZ1]=jvj+1; 
(*f[255])( );     /*COPEXP0(X,jvj+1)*/
if((V16=w[x[BT]][1])==incon) goto l1;
if((V16!=23)) goto l9;
V15=x[M];
pile[v[22]]=BT; pile[WZ1]=S; pile[WZ2]=V15; 
(*f[134])( );     /*OTA0(BT,S,V15)*/
pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(S,BT,jvj+1)*/
l1:pile[v[22]]=100; pile[WZ1]=M; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,M,jvj+2)*/
x[jvj+8]=w[x[jvj+2]][9];
l2:if((x[jvj+8]>0)) goto l3;
x[jvj+9]=w[x[jvj+2]][8];
l5:if((x[jvj+9]<=0)) goto l8;
x[jvj+5]=s[x[jvj+9]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+9];
pile[v[22]]=jvj+5; pile[WZ1]=M; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,M,jvj+6)*/
x[jvj+10]=x[jvj+6] ;z[jvj+10]=z[jvj+6];
l6:if((x[jvj+10]>0)) goto l7;
x[jvj+9]=t[x[jvj+9]];
goto l5;
l3:x[jvj+3]=s[x[jvj+8]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+8];
pile[v[22]]=jvj+3; pile[WZ1]=M; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+3,M,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ2]=jvj+3; pile[WZ3]=X; pile[WZ4]=V; 
(*f[1073])( );     /*SUBVX1(jvj+4,M,jvj+3,X,V)*/
l4:x[jvj+8]=t[x[jvj+8]];
goto l2;
l7:x[jvj+7]=s[x[jvj+10]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+10];
pile[v[22]]=jvj+7; pile[WZ1]=M; pile[WZ2]=jvj+5; pile[WZ3]=X; pile[WZ4]=V; 
(*f[1073])( );     /*SUBVX1(jvj+7,M,jvj+5,X,V)*/
x[jvj+10]=t[x[jvj+10]];
goto l6;
l8:v[0]=jvj; v[22]-=5; return;
l9:pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(S,BT,jvj+1)*/
goto l1;
}
