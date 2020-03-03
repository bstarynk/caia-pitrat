#include "dx.h"
void EVLW1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,TZ=0,V13=0,V14=0,V15=0,V8=0,V9=0,TZK=0,V1=0,V5=0,V16=0,V20=0,V21=0;
int X,Z,V,TY;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Z=pile[v[22]+1]; V=pile[v[22]+2]; TY=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[TY]!=599)) goto l1;
pile[v[22]]=Z; pile[WZ1]=X; pile[WZ3]=jvj+2; 
(*f[80])( );if(v[102]) goto l8;     /*EVL1(Z,X,V13,jvj+2,V14)*/
V13=pile[WZ2]; V14=pile[WZ4]; 
V15=d[V13];
T=V15;
x[jvj+1]=23 ;z[jvj+1]=23;
x[RES]=134 ;z[RES]=134;
TZ=0;
l4:TZK=TZ;
l5:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,X,jvj+5)*/
l6:if((x[jvj+5]<=0)) goto l9;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+6,V1)*/
V1=pile[WZ2]; 
if((V1!=V)) goto l7;
pile[v[22]]=158; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+6,jvj+7)*/
V5=T;
if((x[jvj+8]=w[x[jvj+7]][3])==incon) goto l9;
V16=V5;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(jvj+6,jvj+8,V16)*/
pile[WZ1]=416; pile[WZ2]=TZK; 
(*f[43])( );     /*CHGC2(jvj+6,416,TZK)*/
l10:v[0]=jvj; v[22]-=5; return;
l1:pile[v[22]]=Z; pile[WZ1]=X; pile[WZ3]=jvj+1; 
(*f[80])( );if(v[102]) goto l8;     /*EVL1(Z,X,T,jvj+1,TZ)*/
T=pile[WZ2]; TZ=pile[WZ4]; 
x[RES]=134 ;z[RES]=134;
if((x[jvj+1]!=20)) goto l4;
if((T>sepcte)) goto l4;
TZK=T;
goto l5;
l7:x[jvj+5]=t[x[jvj+5]];
goto l6;
l8:x[RES]=135 ;z[RES]=135;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,X,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l10;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V8)*/
V8=pile[WZ2]; 
if((V8!=V)) goto l3;
V9=x[jvj+4];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=V9; 
(*f[134])( );     /*OTA0(128,X,V9)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l9:x[jvj+11]=T ;z[jvj+11]=(x[jvj+1]==20&&T<=sepcte) ? T : (x[jvj+1]==41) ? (-1000) : 0;
if((x[jvj+12]=w[x[jvj+1]][3])==incon) goto l10;
pile[v[22]]=TZK; pile[WZ1]=416; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(TZK,416,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=158; pile[WZ3]=jvj+1; pile[WZ4]=jvj+10; pile[WZ5]=jvj+9; 
(*f[48])( );     /*QUADRI1(140,V,158,jvj+1,jvj+10,jvj+9)*/
V20=x[jvj+11];
V21=z[jvj+11];
pile[v[22]]=jvj+9; pile[WZ1]=V20; pile[WZ2]=jvj+12; pile[WZ3]=V21; 
(*f[49])( );     /*CHP0(jvj+9,V20,jvj+12,V21)*/
pile[v[22]]=X; pile[WZ1]=128; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(X,128,jvj+9)*/
goto l10;
}
