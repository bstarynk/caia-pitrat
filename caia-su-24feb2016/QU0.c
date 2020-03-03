#include "dx.h"
void QU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,N=0,V18=0,V19=0,V6=0,V11=0,V12=0,V13=0,V9=0,V10=0,V8=0,V14=0,V16=0,V15=0,V7=0,V5=0,V3=0,V2=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=11021;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2140&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(235,jvj+2,jvj+3)*/
pile[v[22]]=193; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(193,jvj+3,L)*/
L=pile[WZ2]; 
pile[v[22]]=466; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(466,X,N)*/
N=pile[WZ2]; 
if((N<=1)) goto l1;
pile[v[22]]=241; pile[WZ1]=445; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,445,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l1;     /*FNDC2(331,390,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V6; 
(*f[64])( );     /*SRA2((-2491),V6,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V11,91,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=63; pile[WZ1]=V12; 
(*f[99])( );     /*SPM0(63,V12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V13,93,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=V9; 
(*f[64])( );     /*SRA2(V18,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=V10; 
(*f[99])( );     /*SPM0(N,V10,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=V19; 
(*f[38])( );     /*SPC0(V8,V19,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V14; 
(*f[64])( );     /*SRA2((-843),V14,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=L; pile[WZ1]=V16; 
(*f[64])( );     /*SRA2(L,V16,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=V19; 
(*f[38])( );     /*SPC0(V15,V19,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V7,125,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; 
(*f[656])( );     /*SPLN2(V5,J)*/
J=pile[WZ1]; 
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:pile[v[22]]=(-843); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-843),I,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=L; pile[WZ1]=V3; 
(*f[64])( );     /*SRA2(L,V3,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[1803])( );     /*SPLL0(V2,J)*/
J=pile[WZ1]; 
goto l3;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
