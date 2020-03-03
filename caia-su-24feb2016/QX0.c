#include "dx.h"
void QX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V5=0,V6=0,V8=0,V10=0,V11=0,V9=0,V7=0,V12=0,V4=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10640;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2135&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
J=I;
pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,X,jvj+2)*/
pile[v[22]]=921; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(921,jvj+2,jvj+3)*/
if((x[jvj+3]==0)) goto l1;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=jvj+4; pile[WZ1]=679; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+4,679,jvj+2)*/
l1:pile[v[22]]=241; pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(241,25,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=921; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(921,jvj+2,jvj+5)*/
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=679; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(679,jvj+6,jvj+7)*/
V5=0;
l2:if((x[jvj+5]<=0)) goto l5;
x[jvj+8]=s[x[jvj+5]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+5];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l4;
l3:x[jvj+5]=t[x[jvj+5]];
goto l2;
l4:pile[v[22]]=(-2577); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-2577),V5,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V6,40,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l3;     /*SPSS0(V8,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=V10; 
(*f[64])( );     /*SRA2(V16,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=jvj+8; 
(*f[1981])( );if(v[102]) goto l3;     /*SPSS0(V11,jvj+8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V9,41,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V7,32,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l3;     /*QU0(V12,X,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; 
(*f[289])( );     /*SPLN1(V4)*/
goto l3;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
}
