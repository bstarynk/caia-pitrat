#include "dx.h"
void QS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V9=0,V3=0,V4=0,V5=0,V6=0,V2=0;
int I,X;
int J;
int WZ1,WZ2;

I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=466; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(466,X,V7)*/
V7=pile[WZ2]; 
if((V7!=1)) goto l1;
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,87,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l1;     /*FNDC2(331,390,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V8,I,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-2491),V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V4,91,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=63; pile[WZ1]=V5; 
(*f[99])( );     /*SPM0(63,V5,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V6,93,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=V9; 
(*f[38])( );     /*SPC0(V2,V9,J)*/
J=pile[WZ2]; 
l2:v[22]-=3; pile[v[22]+2]=J; return;
l1:J=I;
goto l2;
}
