#include "dx.h"
void LTAKING0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V2=0,J=0,V4=0,DZ=0,V6=0;
int DR,EX;
int DY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11754;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1370&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V8=DR;
l1:pile[v[22]]=V8; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+2; 
(*f[666])( );if(v[102]) goto l2;     /*SMA3(V8,64,66,jvj+2)*/
if((x[jvj+2]!=1592)) goto l2;
(*f[667])( );if(v[102]) goto l2;     /*CRK0(V8,V2)*/
V2=pile[WZ1]; 
pile[v[22]]=V2; pile[WZ1]=jvj+3; 
(*f[1057])( );if(v[102]) goto l2;     /*LELT0(V2,jvj+3,J)*/
J=pile[WZ2]; 
pile[v[22]]=J; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+4; 
(*f[666])( );if(v[102]) goto l2;     /*SMA3(J,64,66,jvj+4)*/
if((x[jvj+4]!=1645)) goto l2;
(*f[667])( );if(v[102]) goto l2;     /*CRK0(J,V4)*/
V4=pile[WZ1]; 
pile[v[22]]=V4; pile[WZ1]=jvj+5; 
(*f[1057])( );if(v[102]) goto l2;     /*LELT0(V4,jvj+5,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=103; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+5,103,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=1716; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+9; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,1716,102,jvj+3,jvj+9,jvj+6)*/
pile[v[22]]=EX; pile[WZ1]=1592; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(EX,1592,jvj+6)*/
pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+7; 
(*f[666])( );if(v[102]) goto l3;     /*SMA3(DZ,64,66,jvj+7)*/
if((x[jvj+7]!=338)) goto l3;
(*f[667])( );if(v[102]) goto l4;     /*CRK0(DZ,V6)*/
V6=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+8; 
(*f[666])( );if(v[102]) goto l4;     /*SMA3(DZ,64,66,jvj+8)*/
if((x[jvj+8]!=338)) goto l4;
V8=V6;
goto l1;
l2:DY=V8;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; v[102]=0;return;
l3:DY=DZ;
goto l5;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
