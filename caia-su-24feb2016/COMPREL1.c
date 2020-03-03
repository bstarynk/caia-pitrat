#include "dx.h"
void COMPREL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V8=0;
int BB,AA,K,N;
int RK;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

BB=pile[v[22]]; AA=pile[v[22]+1]; K=pile[v[22]+2]; N=pile[v[22]+3]; RK=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=117; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,N,V1)*/
V1=pile[WZ2]; 
if((V1<=200)) goto l5;
pile[WZ1]=1550; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,1550,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[611])( );     /*ERRINCIDENT0(V2)*/
l5:pile[v[22]]=1331; pile[WZ1]=BB; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1331,BB,jvj+1)*/
l6:if((x[jvj+1]>0)) goto l7;
pile[v[22]]=1331; pile[WZ1]=BB; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1331,BB,jvj+5)*/
l14:if((x[jvj+5]>0)) goto l15;
v[0]=jvj; v[22]-=5; v[102]=1;return;
l3:if(x[jvj+11]==incon) goto l4;
l9:x[RK]=x[jvj+11] ;z[RK]=z[jvj+11];
l18:v[0]=jvj; v[22]-=5; v[102]=0;return;
l4:x[jvj+11]=30 ;z[jvj+11]=30;
goto l9;
l7:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=497; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(497,jvj+2,jvj+3)*/
if((x[jvj+3]!=x[AA])) goto l8;
pile[v[22]]=145; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(145,jvj+2,jvj+4)*/
x[jvj+11]=incon;
if((x[jvj+4]!=29)) goto l1;
x[jvj+11]=29 ;z[jvj+11]=29;
l1:if((x[K]!=29)) goto l2;
x[jvj+11]=29 ;z[jvj+11]=29;
l2:if((x[jvj+4]!=25)) goto l3;
if((x[K]!=25)) goto l3;
x[jvj+11]=25 ;z[jvj+11]=25;
goto l9;
l8:x[jvj+1]=t[x[jvj+1]];
goto l6;
l12:if(x[jvj+12]==incon) goto l13;
l17:x[jvj+9]=x[jvj+12] ;z[jvj+9]=z[jvj+12];
if((x[jvj+9]==25)) goto l16;
pile[v[22]]=N; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(N,117,1)*/
pile[v[22]]=jvj+7; pile[WZ1]=AA; pile[WZ2]=jvj+9; pile[WZ3]=N; pile[WZ4]=jvj+10; 
(*f[2116])( );if(v[102]) goto l16;     /*COMPREL1(jvj+7,AA,jvj+9,N,jvj+10)*/
x[RK]=x[jvj+10] ;z[RK]=z[jvj+10];
goto l18;
l13:x[jvj+12]=30 ;z[jvj+12]=30;
goto l17;
l15:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=497; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(497,jvj+6,jvj+7)*/
if((x[jvj+7]==x[AA])) goto l16;
pile[v[22]]=145; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(145,jvj+6,jvj+8)*/
V8=x[jvj+8];
x[jvj+12]=incon;
if((V8!=29)) goto l10;
x[jvj+12]=29 ;z[jvj+12]=29;
l10:if((x[K]!=29)) goto l11;
x[jvj+12]=29 ;z[jvj+12]=29;
l11:if((V8!=25)) goto l12;
if((x[K]!=25)) goto l12;
x[jvj+12]=25 ;z[jvj+12]=25;
goto l17;
l16:x[jvj+5]=t[x[jvj+5]];
goto l14;
}
