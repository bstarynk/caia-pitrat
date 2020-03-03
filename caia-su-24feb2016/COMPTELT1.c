#include "dx.h"
void COMPTELT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int SS=0;
int A,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
SS=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==41)) goto l1;
if((x[jvj+1]==20)) goto l2;
if((x[jvj+1]!=484)) goto l3;
SS=68;
pile[v[22]]=T; pile[WZ1]=609; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(T,609,1)*/
l3:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,A,jvj+4)*/
x[jvj+15]=x[jvj+4] ;z[jvj+15]=z[jvj+4];
l4:if((x[jvj+15]<=0)) goto l8;
x[jvj+5]=s[x[jvj+15]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+15];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=41)) goto l5;
x[jvj+16]=x[jvj+4] ;z[jvj+16]=z[jvj+4];
l6:if((x[jvj+16]<=0)) goto l5;
x[jvj+7]=s[x[jvj+16]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+16];
if((x[jvj+5]==x[jvj+7])) goto l7;
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=41)) goto l7;
pile[v[22]]=T; pile[WZ1]=610; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(T,610,1)*/
l7:x[jvj+16]=t[x[jvj+16]];
goto l6;
l1:SS=68;
pile[v[22]]=T; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(T,510,1)*/
goto l3;
l2:SS=68;
pile[v[22]]=T; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(T,515,1)*/
goto l3;
l5:x[jvj+15]=t[x[jvj+15]];
goto l4;
l8:if(SS==incon) goto l9;
l16:v[0]=jvj; v[22]-=2; return;
l9:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,A,jvj+9)*/
x[jvj+17]=w[x[jvj+9]][9];
l10:if((x[jvj+17]>0)) goto l11;
x[jvj+18]=w[x[jvj+9]][8];
l13:if((x[jvj+18]<=0)) goto l16;
x[jvj+12]=s[x[jvj+18]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+18];
pile[v[22]]=jvj+12; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,A,jvj+13)*/
x[jvj+19]=x[jvj+13] ;z[jvj+19]=z[jvj+13];
l14:if((x[jvj+19]>0)) goto l15;
x[jvj+18]=t[x[jvj+18]];
goto l13;
l11:x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+10,A,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=T; 
(*f[1209])( );     /*COMPTELT1(jvj+11,T)*/
l12:x[jvj+17]=t[x[jvj+17]];
goto l10;
l15:x[jvj+14]=s[x[jvj+19]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+19];
pile[v[22]]=jvj+14; pile[WZ1]=T; 
(*f[1209])( );     /*COMPTELT1(jvj+14,T)*/
x[jvj+19]=t[x[jvj+19]];
goto l14;
}
