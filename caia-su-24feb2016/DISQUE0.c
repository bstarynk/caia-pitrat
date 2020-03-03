#include "dx.h"
void DISQUE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,K=0,V4=0;
int WZ1,WZ2;


WZ2=v[22]+2; WZ1=v[22]+1; 
v[7]=1;
V1=vv[2];
if((V1!=1)) goto l1;
V3=(time(tzt)-inccc);
pile[v[22]]=1009; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1009,994,K)*/
K=pile[WZ2]; 
V4=V3-K;
pile[v[22]]=994; pile[WZ1]=1009; pile[WZ2]=V3; 
(*f[43])( );     /*CHGC2(994,1009,V3)*/
pile[WZ1]=1242; pile[WZ2]=V4; 
(*f[186])( );     /*BTC0(994,1242,V4)*/
l1:
(*f[281])( );     /*DISQUZ0()*/
v[7]=0;
return;
}
