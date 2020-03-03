#include "dx.h"
void NOUB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int BL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=67 ;z[jvj+3]=67;
pile[v[22]]=670; pile[WZ1]=240; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(670,240,jvj+1)*/
if((x[jvj+1]>0)) goto l1;
pile[v[22]]=10153; 
(*f[1389])( );     /*FAUTE6(10153)*/
v[0]=jvj; v[22]-=1; v[102]=1;return;
l1:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
V2=x[jvj+2];
x[BL]=x[jvj+2] ;z[BL]=z[jvj+2];
pile[v[22]]=670; pile[WZ1]=240; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(670,240,V2)*/
pile[v[22]]=jvj+2; pile[WZ1]=100; pile[WZ2]=508; 
(*f[35])( );     /*CHGC1(jvj+2,100,508)*/
pile[WZ1]=741; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(jvj+2,741,100)*/
pile[WZ1]=129; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+2,129,jvj+3)*/
v[0]=jvj; v[22]-=1; v[102]=0;return;
}
