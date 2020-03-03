#include "dx.h"
void ERR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V5=0,V6=0,V8=0;
int I;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V9=v[0];
pile[v[22]]=0; pile[WZ1]=(-1448); 
(*f[37])( );     /*SRA0(0,(-1448),V5)*/
V5=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,I,V5,V6)*/
V6=pile[WZ3]; 
pile[WZ1]=V9; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(41,V9,V6,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; 
(*f[40])( );     /*SLG0(V8)*/
if((I!=0)) goto l2;
pile[v[22]]=10400; 
(*f[14])( );     /*SORTA0(10400)*/
l2:x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=502; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(502,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l1;
exit(0);
l1:x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=502; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(502,jvj+1,jvj+2)*/
if((x[jvj+2]==68)) goto l4;
l3:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l4:v[0]=jvj; v[22]-=1; return;
}
