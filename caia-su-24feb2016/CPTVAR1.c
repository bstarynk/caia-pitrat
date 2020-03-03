#include "dx.h"
void CPTVAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V9=0,V19=0,V18=0,V23=0;
int A,RR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l1;
if((x[jvj+1]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]!=614&&x[jvj+3]!=1162&&x[jvj+3]!=1282&&x[jvj+3]!=1283&&x[jvj+3]!=1285&&x[jvj+3]!=1284&&x[jvj+3]!=1036) goto l2;
pile[v[22]]=A; 
(*f[457])( );if(v[102]) goto l2;     /*CARDENS0(A,V3)*/
V3=pile[WZ1]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,A,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[981])( );if(v[102]) goto l2;     /*CPTVAR0(jvj+4,V2)*/
V2=pile[WZ1]; 
V9=V2*V3;
pile[v[22]]=RR; pile[WZ1]=117; pile[WZ2]=V9; 
(*f[186])( );     /*BTC0(RR,117,V9)*/
l10:v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=RR; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RR,117,1)*/
goto l10;
l2:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=1286)) goto l3;
pile[v[22]]=A; 
(*f[457])( );if(v[102]) goto l3;     /*CARDENS0(A,V19)*/
V19=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,A,jvj+7)*/
pile[v[22]]=jvj+7; 
(*f[981])( );if(v[102]) goto l3;     /*CPTVAR0(jvj+7,V18)*/
V18=pile[WZ1]; 
V23=V18*V19;
pile[v[22]]=RR; pile[WZ1]=117; pile[WZ2]=V23; 
(*f[186])( );     /*BTC0(RR,117,V23)*/
goto l10;
l3:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+8)*/
x[jvj+14]=w[x[jvj+8]][9];
l4:if((x[jvj+14]>0)) goto l5;
x[jvj+15]=w[x[jvj+8]][8];
l7:if((x[jvj+15]<=0)) goto l10;
x[jvj+11]=s[x[jvj+15]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+15];
pile[v[22]]=jvj+11; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+11,A,jvj+12)*/
x[jvj+16]=x[jvj+12] ;z[jvj+16]=z[jvj+12];
l8:if((x[jvj+16]>0)) goto l9;
x[jvj+15]=t[x[jvj+15]];
goto l7;
l5:x[jvj+9]=s[x[jvj+14]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+14];
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+9,A,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=RR; 
(*f[1346])( );     /*CPTVAR1(jvj+10,RR)*/
l6:x[jvj+14]=t[x[jvj+14]];
goto l4;
l9:x[jvj+13]=s[x[jvj+16]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+16];
pile[v[22]]=jvj+13; pile[WZ1]=RR; 
(*f[1346])( );     /*CPTVAR1(jvj+13,RR)*/
x[jvj+16]=t[x[jvj+16]];
goto l8;
}
