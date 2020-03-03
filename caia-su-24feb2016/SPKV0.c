#include "dx.h"
void SPKV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V13=0,V14=0,V18=0,V5=0,V6=0,V9=0,V10=0,V11=0,V7=0,V8=0,V19=0,V4=0,V12=0,L=0,V15=0;
int I,N;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; N=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V19=N;
V18=I;
l1:pile[v[22]]=474; pile[WZ1]=21; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(474,21,jvj+1)*/
l2:if((x[jvj+1]<=0)) goto l4;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=V19)) goto l3;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
pile[v[22]]=110; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+3,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(241,51,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=V18; 
(*f[64])( );     /*SRA2(V13,V18,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V5,61,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V6; 
(*f[64])( );     /*SRA2((-2491),V6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V9,91,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V10; 
(*f[99])( );     /*SPM0(22,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V11,93,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=V7; 
(*f[64])( );     /*SRA2(V14,V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=V8; 
(*f[99])( );     /*SPM0(V19,V8,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V4,59,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V12,32,L)*/
L=pile[WZ2]; 
l5:if((V19>0)) goto l6;
pile[v[22]]=V18; 
(*f[656])( );     /*SPLN2(V18,J)*/
J=pile[WZ1]; 
v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l3:x[jvj+1]=t[x[jvj+1]];
goto l2;
l4:L=V18;
goto l5;
l6:V15=V19-1;
V18=L;
V19=V15;
goto l1;
}
