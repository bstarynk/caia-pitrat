#include "dx.h"
void SPBK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V26=0,V27=0,V28=0,V29=0,T=0,V20=0,V23=0,V2=0,V3=0,V6=0,V7=0,V8=0,V4=0,V5=0,V13=0,V15=0,V16=0,V14=0,V9=0,V10=0,V11=0,V12=0,V17=0,V18=0,V19=0;
int X,I,A,B;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10562;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2146&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; I=pile[v[22]+1]; A=pile[v[22]+2]; B=pile[v[22]+3]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(A,I,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V25,61,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=(-1727); pile[WZ1]=V26; 
(*f[64])( );     /*SRA2((-1727),V26,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V27,91,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=B; pile[WZ1]=V28; 
(*f[2077])( );     /*SPR0(B,V28,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V29,93,T)*/
T=pile[WZ2]; 
pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,A,V20)*/
V20=pile[WZ2]; 
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=440; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(440,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V20) goto l1;
l2:J=T;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=J; return;
l1:pile[v[22]]=241; pile[WZ1]=30; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(241,30,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=T; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(T,32,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V2,59,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-1729),V3,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V6,91,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=3; pile[WZ2]=A; 
(*f[2147])( );     /*SPP0(V7,3,A,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V8,93,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V4,61,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V5,40,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=V13; 
(*f[2077])( );     /*SPR0(A,V13,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=V15; 
(*f[64])( );     /*SRA2(V23,V15,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=(-5048); pile[WZ1]=V16; 
(*f[64])( );     /*SRA2((-5048),V16,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V14,41,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=(-2601); pile[WZ1]=V9; 
(*f[64])( );     /*SRA2((-2601),V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=V10; 
(*f[2077])( );     /*SPR0(A,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=(-2602); pile[WZ1]=V11; 
(*f[64])( );     /*SRA2((-2602),V11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V12; 
(*f[64])( );     /*SRA2((-1729),V12,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V17,91,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=3; pile[WZ2]=B; 
(*f[2147])( );     /*SPP0(V18,3,B,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V19,93,J)*/
J=pile[WZ2]; 
goto l3;
}
