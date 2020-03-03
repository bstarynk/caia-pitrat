#include "dx.h"
void SPKMAIN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,V6=0,V7=0,V3=0,V4=0,V8=0,V1=0,V13=0,V14=0,V15=0,V11=0,V12=0,V16=0,V9=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=11038;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1805&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V2=0;
pile[v[22]]=(-3571); pile[WZ1]=V2; 
(*f[64])( );     /*SRA2((-3571),V2,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V5,91,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=V6; 
(*f[99])( );     /*SPM0(2,V6,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V7,93,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V3,61,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V4; pile[WZ2]=10833; 
(*f[98])( );     /*SRA3(135,V4,10833,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=0; pile[WZ1]=V8; 
(*f[99])( );     /*SPM0(0,V8,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V1; 
(*f[289])( );     /*SPLN1(V1)*/
pile[v[22]]=(-3571); pile[WZ1]=V2; 
(*f[64])( );     /*SRA2((-3571),V2,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V13,91,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V14; 
(*f[99])( );     /*SPM0(1,V14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V15,93,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V11,61,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V12; pile[WZ2]=11040; 
(*f[98])( );     /*SRA3(135,V12,11040,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=0; pile[WZ1]=V16; 
(*f[99])( );     /*SPM0(0,V16,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; 
(*f[289])( );     /*SPLN1(V9)*/
l1:x[jvj+1]=incon; v[0]=jvj; return;
}
