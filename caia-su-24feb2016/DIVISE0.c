#include "dx.h"
void DIVISE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V4=0,V2=0;
int B,A;
int R;
int WZ1,WZ2;

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,A,V1)*/
V1=pile[WZ2]; 
if((V1==0)) goto l1;
l2:pile[v[22]]=130; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,B,V3)*/
V3=pile[WZ2]; 
pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,A,V4)*/
V4=pile[WZ2]; 
V2=V3%V4;
if((V2!=0)) goto l1;
l3:x[R]=135 ;z[R]=135;
l4:v[22]-=3; return;
l1:x[R]=134 ;z[R]=134;
goto l4;
}
