#include "dx.h"
void LSUCHTHAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V2=0,DZ=0,DYY=0,V5=0;
int DR,EX;
int DY;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11758;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1596&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V7=DR;
l1:pile[v[22]]=V7; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+2; 
(*f[666])( );if(v[102]) goto l4;     /*SMA3(V7,64,66,jvj+2)*/
(*f[667])( );if(v[102]) goto l4;     /*CRK0(V7,V2)*/
V2=pile[WZ1]; 
pile[v[22]]=V2; pile[WZ1]=jvj+3; 
(*f[1058])( );if(v[102]) goto l4;     /*LFACT0(V2,jvj+3,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=1671; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1671,jvj+2,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1194) goto l2;
l4:DY=V7;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; return;
l2:DYY=DZ;
pile[v[22]]=EX; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(EX,jvj+2,jvj+3)*/
pile[v[22]]=DYY; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+5; 
(*f[666])( );if(v[102]) goto l3;     /*SMA3(DYY,64,66,jvj+5)*/
if((x[jvj+5]!=338)) goto l3;
pile[WZ3]=jvj+6; 
(*f[666])( );if(v[102]) goto l4;     /*SMA3(DYY,64,66,jvj+6)*/
if((x[jvj+6]!=338)) goto l4;
(*f[667])( );if(v[102]) goto l4;     /*CRK0(DYY,V5)*/
V5=pile[WZ1]; 
V7=V5;
goto l1;
l3:DY=DYY;
goto l5;
}
