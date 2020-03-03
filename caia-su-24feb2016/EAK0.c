#include "dx.h"
void EAK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V3=0,V4=0,V6=0,V7=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V8=0,V16=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=10089;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==113&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=494; pile[WZ1]=240; 
(*f[71])( );     /*ENLV0(494,240)*/
pile[v[22]]=242; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(242,240,jvj+3)*/
if((x[jvj+3]!=68)) goto l1;
pile[v[22]]=365; pile[WZ1]=10833; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,10833,jvj+2)*/
if((x[jvj+2]<=0)) goto l1;
x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
(*f[91])( );     /*MND0()*/
pile[v[22]]=jvj+4; 
(*f[306])( );     /*EAC0(jvj+4)*/
pile[v[22]]=242; pile[WZ1]=240; 
(*f[71])( );     /*ENLV0(242,240)*/
pile[v[22]]=jvj+4; pile[WZ1]=32; 
(*f[339])( );     /*CMP0(jvj+4,32)*/
l1:V5=0;
v[2]=v[1];
V3=V5;
v[1]=4;
pile[v[22]]=(-7464); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-7464),V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V4,0,V6)*/
V6=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V6; pile[WZ1]=406; pile[WZ2]=0; 
(*f[67])( );     /*SPA0(V6,406,0)*/
v[2]=v[1];
V7=V5;
v[1]=4;
pile[v[22]]=(-6425); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-6425),V7,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V9,32,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=(-6424); pile[WZ1]=V10; 
(*f[64])( );     /*SRA2((-6424),V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V11,42,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=(-2696); pile[WZ1]=V12; 
(*f[64])( );     /*SRA2((-2696),V12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V13,32,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=(-6420); pile[WZ1]=V14; 
(*f[64])( );     /*SRA2((-6420),V14,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V8,0,V16)*/
V16=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V16; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V16,406,130)*/
l2:x[jvj+1]=incon; v[0]=jvj; return;
}
