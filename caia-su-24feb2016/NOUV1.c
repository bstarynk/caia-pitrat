#include "dx.h"
void NOUV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V=0;
int VV,TL;
int R;
int WZ1,WZ2,WZ3,WZ4;

VV=pile[v[22]]; TL=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1; pile[WZ1]=TL; pile[WZ2]=322; 
(*f[1113])( );     /*INCM0(1,TL,322,V1)*/
V1=pile[WZ3]; 
V2=V1;
V=V2;
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=R; 
(*f[1385])( );     /*QUADRI16(110,V,140,VV,R)*/
pile[v[22]]=TL; pile[WZ1]=273; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(TL,273,V)*/
v[22]-=3; return;
}
