#include "dx.h"
void EVLW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int TZK=0,V1=0,V5=0,V9=0,V12=0,V13=0;
int X,V,YY,T,TZ;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; V=pile[v[22]+1]; YY=pile[v[22]+2]; T=pile[v[22]+3]; TZ=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[YY]!=20)) goto l1;
if((T>sepcte)) goto l1;
TZK=T;
l2:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,X,jvj+1)*/
l3:if((x[jvj+1]<=0)) goto l5;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+2,V1)*/
V1=pile[WZ2]; 
if((V1!=V)) goto l4;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+2,jvj+3)*/
V5=T;
if((x[jvj+4]=w[x[jvj+3]][3])==incon) goto l5;
V9=V5;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+2,jvj+4,V9)*/
pile[WZ1]=416; pile[WZ2]=TZK; 
(*f[43])( );     /*CHGC2(jvj+2,416,TZK)*/
l6:v[0]=jvj; v[22]-=5; return;
l1:TZK=TZ;
goto l2;
l4:x[jvj+1]=t[x[jvj+1]];
goto l3;
l5:x[jvj+7]=T ;z[jvj+7]=(x[YY]==20&&T<=sepcte) ? T : (x[YY]==41) ? (-1000) : 0;
if((x[jvj+8]=w[x[YY]][3])==incon) goto l6;
pile[v[22]]=TZK; pile[WZ1]=416; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(TZK,416,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=158; pile[WZ3]=YY; pile[WZ4]=jvj+6; pile[WZ5]=jvj+5; 
(*f[48])( );     /*QUADRI1(140,V,158,YY,jvj+6,jvj+5)*/
V12=x[jvj+7];
V13=z[jvj+7];
pile[v[22]]=jvj+5; pile[WZ1]=V12; pile[WZ2]=jvj+8; pile[WZ3]=V13; 
(*f[49])( );     /*CHP0(jvj+5,V12,jvj+8,V13)*/
pile[v[22]]=X; pile[WZ1]=128; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(X,128,jvj+5)*/
goto l6;
}
