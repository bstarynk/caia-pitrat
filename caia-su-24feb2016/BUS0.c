#include "dx.h"
void BUS0(int sign)
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int WZ1;

v[22]+=100; 
WZ1=v[22]+1; 
V2=vv[19];
if((V2==1)) goto l1;
pile[v[22]]=286; 
(*f[14])( );     /*SORTA0(286)*/
pile[v[22]]=53; 
(*f[15])( );     /*ERR1(53)*/
l2:v[22]-=100; return;
l1:vv[0]=1;
pile[v[22]]=10643; pile[WZ1]=v[0]; 
(*f[16])( );     /*DERNIERBLOC0(10643,v[0])*/
(*f[17])( );     /*FERMER0()*/
goto l2;
}
