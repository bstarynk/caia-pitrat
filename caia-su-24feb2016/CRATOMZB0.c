#include "dx.h"
void CRATOMZB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,G=0,V8=0,V9=0;
int MB,N,EV;
int VZ;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11847;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1514&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
MB=pile[v[22]]; N=pile[v[22]+1]; EV=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=80; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(80,N,jvj+2)*/
if((x[jvj+2]==67)) goto l7;
l1:pile[v[22]]=N; pile[WZ1]=jvj+3; 
(*f[1717])( );     /*TRADEB0(N,jvj+3)*/
pile[v[22]]=MB; pile[WZ1]=jvj+7; 
(*f[938])( );     /*USE0(MB,jvj+7)*/
V9=x[EV];
l5:if((V9<=0)) goto l7;
V=s[V9];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V) goto l2;
l6:V9=t[V9];
goto l5;
l2:pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(256,100,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=V; pile[WZ2]=jvj+5; 
(*f[1491])( );     /*VDSBA0(jvj+3,V,jvj+5)*/
pile[v[22]]=1261; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1261,jvj+5,jvj+6)*/
V8=x[jvj+4];
l3:if((V8>0)) goto l4;
pile[v[22]]=jvj+3; pile[WZ1]=V; pile[WZ2]=jvj+8; 
(*f[1491])( );     /*VDSBA0(jvj+3,V,jvj+8)*/
pile[v[22]]=1261; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1261,jvj+8,jvj+9)*/
VZ=V;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=VZ; v[102]=0;return;
l4:G=s[V8];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==G) goto l6;
V8=t[V8];
goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
