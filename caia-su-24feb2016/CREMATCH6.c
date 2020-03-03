#include "dx.h"
void CREMATCH6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V4=0,V2=0,V1=0,V9=0,V11=0,V10=0,V8=0,V7=0;
int J,I;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26113;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2440&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
J=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V3=I-1;
V5=J-1;
V4=4*V5;
V2=V3+V4;
pile[v[22]]=0; pile[WZ1]=(-596); 
(*f[1010])( );if(v[102]) goto l1;     /*FVECT0(0,(-596),V1)*/
V1=pile[WZ2]; 
if((V1!=V2)) goto l1;
NNNX=88;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNX; v[102]=0;return;
l1:V9=I-1;
V11=J-1;
V10=4*V11;
V8=V9+V10;
pile[v[22]]=V8; pile[WZ1]=(-1544); 
(*f[1010])( );if(v[102]) goto l2;     /*FVECT0(V8,(-1544),V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; 
(*f[979])( );if(v[102]) goto l2;     /*CHILET0(V7,NNNX)*/
NNNX=pile[WZ1]; 
goto l3;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
