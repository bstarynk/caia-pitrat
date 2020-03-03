#include "dx.h"
void ANEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0;
int V,XB,BA,F;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11856;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1702&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; XB=pile[v[22]+1]; BA=pile[v[22]+2]; F=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=XB; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,XB,W)*/
W=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=W; pile[WZ2]=BA; 
(*f[1704])( );     /*MEMEXPR0(V,W,BA)*/
l1:pile[v[22]]=100; pile[WZ1]=XB; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,XB,jvj+2)*/
if((x[jvj+2]==21)) goto l4;
l3:pile[v[22]]=XB; pile[WZ1]=BA; pile[WZ2]=jvj+6; pile[WZ3]=jvj+4; pile[WZ4]=jvj+5; 
(*f[1708])( );     /*TYPEXPR2(XB,BA,jvj+6,jvj+4,jvj+5)*/
pile[v[22]]=V; pile[WZ1]=jvj+5; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V,jvj+5,BA)*/
pile[WZ1]=jvj+6; 
(*f[1506])( );     /*NATFNS0(V,jvj+6,BA)*/
pile[v[22]]=270; pile[WZ1]=F; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(270,F,jvj+3)*/
if((x[jvj+3]==23)) goto l4;
l2:pile[v[22]]=V; pile[WZ1]=jvj+4; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V,jvj+4,BA)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
