#include "dx.h"
void FAUTE5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V6=0,V1=0,V2=0,V4=0,V5=0,V8=0,V7=0,V11=0,V9=0,V10=0;
int BL,S,R,BK;
int WZ1,WZ2,WZ3;

BL=pile[v[22]]; S=pile[v[22]+1]; R=pile[v[22]+2]; BK=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=x[BL];
V6=x[BK];
pile[v[22]]=25; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(25,0,126,V1)*/
V1=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V3; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(20,V3,V1,V2)*/
V2=pile[WZ3]; 
pile[v[22]]=V2; pile[WZ1]=(-4405); 
(*f[37])( );     /*SRA0(V2,(-4405),V4)*/
V4=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V6; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(20,V6,V4,V5)*/
V5=pile[WZ3]; 
V8=75-V5;
pile[v[22]]=V8; pile[WZ1]=V5; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(V8,V5,126,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
V11=x[R];
pile[v[22]]=0; pile[WZ1]=S; 
(*f[37])( );     /*SRA0(0,S,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V11; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(20,V11,V9,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
v[22]-=4; return;
}
