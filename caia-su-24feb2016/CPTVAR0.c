#include "dx.h"
void CPTVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V9=0,V19=0,V18=0,V23=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l1;
if((x[jvj+1]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]!=614&&x[jvj+4]!=1162&&x[jvj+4]!=1282&&x[jvj+4]!=1283&&x[jvj+4]!=1285&&x[jvj+4]!=1284&&x[jvj+4]!=1036) goto l2;
pile[v[22]]=A; 
(*f[457])( );if(v[102]) goto l2;     /*CARDENS0(A,V3)*/
V3=pile[WZ1]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,A,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[981])( );if(v[102]) goto l2;     /*CPTVAR0(jvj+5,V2)*/
V2=pile[WZ1]; 
V9=V2*V3;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V9; 
(*f[186])( );     /*BTC0(jvj+2,117,V9)*/
l10:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+2,R)*/
R=pile[WZ2]; 
v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l1:pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
goto l10;
l2:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=1286)) goto l3;
pile[v[22]]=A; 
(*f[457])( );if(v[102]) goto l3;     /*CARDENS0(A,V19)*/
V19=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,A,jvj+8)*/
pile[v[22]]=jvj+8; 
(*f[981])( );if(v[102]) goto l3;     /*CPTVAR0(jvj+8,V18)*/
V18=pile[WZ1]; 
V23=V18*V19;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V23; 
(*f[186])( );     /*BTC0(jvj+2,117,V23)*/
goto l10;
l3:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+9)*/
x[jvj+15]=w[x[jvj+9]][9];
l4:if((x[jvj+15]>0)) goto l5;
x[jvj+16]=w[x[jvj+9]][8];
l7:if((x[jvj+16]<=0)) goto l10;
x[jvj+12]=s[x[jvj+16]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+16];
pile[v[22]]=jvj+12; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,A,jvj+13)*/
x[jvj+17]=x[jvj+13] ;z[jvj+17]=z[jvj+13];
l8:if((x[jvj+17]>0)) goto l9;
x[jvj+16]=t[x[jvj+16]];
goto l7;
l5:x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+10,A,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+2; 
(*f[1346])( );     /*CPTVAR1(jvj+11,jvj+2)*/
l6:x[jvj+15]=t[x[jvj+15]];
goto l4;
l9:x[jvj+14]=s[x[jvj+17]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+17];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+2; 
(*f[1346])( );     /*CPTVAR1(jvj+14,jvj+2)*/
x[jvj+17]=t[x[jvj+17]];
goto l8;
l11:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
