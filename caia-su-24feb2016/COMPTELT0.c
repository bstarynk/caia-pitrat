#include "dx.h"
void COMPTELT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int SS=0;
int A;
int I,C,V,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
SS=I=C=V=D=incon;
pile[v[22]]=0; pile[WZ1]=610; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(0,610,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=0; pile[WZ2]=609; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,0,609,jvj+17)*/
pile[v[22]]=510; pile[WZ2]=515; pile[WZ3]=0; pile[WZ4]=jvj+17; pile[WZ5]=jvj+2; 
(*f[190])( );     /*QUADRI3(510,0,515,0,jvj+17,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==41)) goto l1;
if((x[jvj+1]==20)) goto l2;
if((x[jvj+1]!=484)) goto l3;
SS=68;
pile[v[22]]=jvj+2; pile[WZ1]=609; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,609,1)*/
l3:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,A,jvj+5)*/
x[jvj+18]=x[jvj+5] ;z[jvj+18]=z[jvj+5];
l4:if((x[jvj+18]<=0)) goto l8;
x[jvj+6]=s[x[jvj+18]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+18];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=41)) goto l5;
x[jvj+19]=x[jvj+5] ;z[jvj+19]=z[jvj+5];
l6:if((x[jvj+19]<=0)) goto l5;
x[jvj+8]=s[x[jvj+19]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+19];
if((x[jvj+6]==x[jvj+8])) goto l7;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=41)) goto l7;
pile[v[22]]=jvj+2; pile[WZ1]=610; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,610,1)*/
l7:x[jvj+19]=t[x[jvj+19]];
goto l6;
l1:SS=68;
pile[v[22]]=jvj+2; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,510,1)*/
goto l3;
l2:SS=68;
pile[v[22]]=jvj+2; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,515,1)*/
goto l3;
l5:x[jvj+18]=t[x[jvj+18]];
goto l4;
l8:if(SS==incon) goto l9;
l16:pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+2,I)*/
I=pile[WZ2]; 
l17:pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(515,jvj+2,C)*/
C=pile[WZ2]; 
l18:pile[v[22]]=609; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(609,jvj+2,V)*/
V=pile[WZ2]; 
l19:pile[v[22]]=610; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(610,jvj+2,D)*/
D=pile[WZ2]; 
l21:if(I!=incon) goto l22;
l20:I=C=V=D=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
l9:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,A,jvj+10)*/
x[jvj+20]=w[x[jvj+10]][9];
l10:if((x[jvj+20]>0)) goto l11;
x[jvj+21]=w[x[jvj+10]][8];
l13:if((x[jvj+21]<=0)) goto l16;
x[jvj+13]=s[x[jvj+21]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+21];
pile[v[22]]=jvj+13; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(jvj+13,A,jvj+14)*/
x[jvj+22]=x[jvj+14] ;z[jvj+22]=z[jvj+14];
l14:if((x[jvj+22]>0)) goto l15;
x[jvj+21]=t[x[jvj+21]];
goto l13;
l11:x[jvj+11]=s[x[jvj+20]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+20];
pile[v[22]]=jvj+11; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+11,A,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+2; 
(*f[1209])( );     /*COMPTELT1(jvj+12,jvj+2)*/
l12:x[jvj+20]=t[x[jvj+20]];
goto l10;
l15:x[jvj+15]=s[x[jvj+22]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+22];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+2; 
(*f[1209])( );     /*COMPTELT1(jvj+15,jvj+2)*/
x[jvj+22]=t[x[jvj+22]];
goto l14;
l22:if(C!=incon) goto l23;
goto l20;
l23:if(V!=incon) goto l24;
goto l20;
l24:if(D!=incon) goto l25;
goto l20;
l25:v[0]=jvj; v[22]-=5; pile[v[22]+1]=I; pile[v[22]+2]=C; pile[v[22]+3]=V; pile[v[22]+4]=D; v[102]=0;return;
}
