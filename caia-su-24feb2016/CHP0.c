#include "dx.h"
void CHP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0;
int X,VL,ATT,ZT;
int WZ1,WZ2;

X=pile[v[22]]; VL=pile[v[22]+1]; ATT=pile[v[22]+2]; ZT=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((V1=w[x[ATT]][1])==incon) goto l1;
if((V1!=23)) goto l1;
if((ZT<(-1))) goto l2;
if((VL<=0)) goto l1;
V3=r[VL];
if((V3>0)) goto l2;
l1:pile[v[22]]=X; pile[WZ1]=ATT; pile[WZ2]=VL; 
(*f[43])( );     /*CHGC2(X,ATT,VL)*/
l3:v[22]-=4; return;
l2:pile[v[22]]=VL; pile[WZ1]=ATT; pile[WZ2]=X; 
(*f[235])( );     /*PLUSC2(VL,ATT,X)*/
goto l3;
}
