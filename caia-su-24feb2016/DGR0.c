#include "dx.h"
void DGR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V3=0,V12=0,V14=0,V13=0,V24=0,XA=0,YA=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[A] ;z[jvj+4]=z[A];
l8:pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]==484)) goto l9;
if((x[jvj+5]==41)) goto l10;
if((x[jvj+5]!=22)) goto l13;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]!=485&&x[jvj+7]!=55&&x[jvj+7]!=48) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+8)*/
V12=(-999999);
l4:if((x[jvj+8]>0)) goto l5;
if((V12==(-999999))) goto l11;
R=V12;
l16:v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+13]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+13];
pile[v[22]]=jvj+1; 
(*f[897])( );if(v[102]) goto l3;     /*DGR0(jvj+1,V5)*/
V5=pile[WZ1]; 
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V5; 
(*f[186])( );     /*BTC0(jvj+2,117,V5)*/
l3:x[jvj+13]=t[x[jvj+13]];
l1:if((x[jvj+13]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(117,jvj+2,V3)*/
V3=pile[WZ2]; 
R=V3;
goto l16;
l5:x[jvj+3]=s[x[jvj+8]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+8];
pile[v[22]]=jvj+3; 
(*f[897])( );if(v[102]) goto l6;     /*DGR0(jvj+3,V14)*/
V14=pile[WZ1]; 
V13=V14;
if(V13>V12) V12=V13;
l6:x[jvj+8]=t[x[jvj+8]];
goto l4;
l7:V24=XA;
l12:R=V24;
goto l16;
l9:R=1;
goto l16;
l10:R=0;
goto l16;
l11:if(x[jvj+7]!=25&&x[jvj+7]!=26&&x[jvj+7]!=27&&x[jvj+7]!=28&&x[jvj+7]!=29&&x[jvj+7]!=30&&x[jvj+7]!=408&&x[jvj+7]!=625) goto l13;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+4,jvj+9)*/
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+4,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[897])( );if(v[102]) goto l13;     /*DGR0(jvj+10,XA)*/
XA=pile[WZ1]; 
pile[v[22]]=jvj+9; 
(*f[897])( );if(v[102]) goto l13;     /*DGR0(jvj+9,YA)*/
YA=pile[WZ1]; 
V24=incon;
if((XA>=YA)) goto l7;
V24=YA;
goto l12;
l13:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+4,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==486)) goto l14;
if((x[jvj+12]!=52)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+4,jvj+14)*/
x[jvj+4]=x[jvj+14] ;z[jvj+4]=z[jvj+14];
goto l8;
l14:pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+13)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
goto l1;
l15:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
