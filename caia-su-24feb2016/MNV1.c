#include "dx.h"
void MNV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V2=0,RR=0,V3=0;
int X;
int R;
int WZ1,WZ2;

X=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=510; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(510,X,R)*/
R=pile[WZ2]; 
l3:v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l1:pile[v[22]]=515; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(515,X,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=747; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(747,X,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[194])( );if(v[102]) goto l2;     /*MNV0(V2,RR)*/
RR=pile[WZ1]; 
V3=RR+V4;
R=V3;
goto l3;
l2:v[22]-=2; v[102]=1;return;
}
