#include "dx.h"
void CRINSTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0;
int BL,V,A;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; V=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1420; pile[WZ1]=BL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1420,BL,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=110; pile[WZ3]=V; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(102,A,110,V,jvj+5)*/
pile[v[22]]=BL; pile[WZ1]=1420; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(BL,1420,jvj+5)*/
l4:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,jvj+2,V3)*/
V3=pile[WZ2]; 
if((V3!=V)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+3)*/
pile[v[22]]=A; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[760])( );     /*MEMEX0(A,jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l4;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
}
