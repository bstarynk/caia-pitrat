#include "dx.h"
void QH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V21=0,V19=0,V15=0,V2=0,V4=0,V8=0,V9=0,V10=0,V11=0,V12=0,V6=0,V7=0,V5=0,V3=0,V13=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=10460;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2134&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,X,jvj+2)*/
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,87,V18)*/
V18=pile[WZ2]; 
pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,27,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,jvj+2,jvj+3)*/
pile[v[22]]=688; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(688,jvj+3,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=436; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(436,jvj+3,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+4,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=67; 
(*f[2132])( );     /*QB0(jvj+2,67)*/
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V2,40,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=V4; 
(*f[64])( );     /*SRA2(V18,V4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=107; 
(*f[38])( );     /*SPC0(V8,107,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=V9; 
(*f[64])( );     /*SRA2(V15,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V10,91,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l1;     /*SPSS0(V11,jvj+2,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V12,93,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=V6; 
(*f[64])( );     /*SRA2(V21,V6,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=V7; 
(*f[99])( );     /*SPM0(V19,V7,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V5,41,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V3,32,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l1;     /*QU0(V13,X,J)*/
J=pile[WZ2]; 
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:J=I;
goto l2;
}
