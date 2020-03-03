#include "dx.h"
void FAUTE8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V6=0,V9=0,V4=0,V5=0,V7=0,V8=0,V10=0,V13=0,V12=0,V16=0,V19=0,V14=0,V15=0,V17=0,V18=0;
int BL,V,S,R,RR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; V=pile[v[22]+1]; S=pile[v[22]+2]; R=pile[v[22]+3]; RR=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=vo[15];z[jvj+1]=vz[15];
x[jvj+2]=x[jvj+1] ;z[jvj+2]=z[jvj+1];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+2,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(583,jvj+2,jvj+3)*/
V6=x[BL];
V9=x[jvj+3];
pile[v[22]]=25; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(25,0,126,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V6; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(20,V6,V4,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=V5; pile[WZ1]=(-4405); 
(*f[37])( );     /*SRA0(V5,(-4405),V7)*/
V7=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V9; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(20,V9,V7,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(41,V1,V8,V10)*/
V10=pile[WZ3]; 
V13=75-V10;
pile[v[22]]=V13; pile[WZ1]=V10; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(V13,V10,126,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l1:V16=x[R];
V19=x[RR];
pile[v[22]]=0; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(0,V,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V16; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V16,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=S; 
(*f[37])( );     /*SRA0(V15,S,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V19,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
v[0]=jvj; v[22]-=5; return;
}
