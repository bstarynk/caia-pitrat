#include "dx.h"
void FAUTE9(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V5=0,V8=0,V3=0,V4=0,V6=0,V7=0,V9=0,V12=0,V11=0,V15=0,V18=0,V13=0,V14=0,V16=0,V17=0;
int BL,V,S,R,TL,RR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; V=pile[v[22]+1]; S=pile[v[22]+2]; R=pile[v[22]+3]; TL=pile[v[22]+4]; RR=pile[v[22]+5]; v[22]+=6; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,TL,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(583,TL,jvj+1)*/
V5=x[BL];
V8=x[jvj+1];
pile[v[22]]=25; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(25,0,126,V3)*/
V3=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V5; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(20,V5,V3,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=V4; pile[WZ1]=(-4405); 
(*f[37])( );     /*SRA0(V4,(-4405),V6)*/
V6=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V8; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V8,V6,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,V1,V7,V9)*/
V9=pile[WZ3]; 
V12=75-V9;
pile[v[22]]=V12; pile[WZ1]=V9; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(V12,V9,126,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=V11; 
(*f[40])( );     /*SLG0(V11)*/
l1:V15=x[R];
V18=x[RR];
pile[v[22]]=0; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(0,V,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V15; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,V15,V13,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; pile[WZ1]=S; 
(*f[37])( );     /*SRA0(V14,S,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V18; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V18,V16,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
v[0]=jvj; v[22]-=6; return;
}
