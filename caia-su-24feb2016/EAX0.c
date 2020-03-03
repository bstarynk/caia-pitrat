#include "dx.h"
void EAX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int KR,UR,TL;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10603;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==355&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
KR=pile[v[22]]; UR=pile[v[22]+1]; TL=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
if(KR!=82&&KR!=81) goto l1;
pile[v[22]]=TL; 
(*f[306])( );     /*EAC0(TL)*/
l1:if(KR!=80&&KR!=81) goto l2;
pile[v[22]]=TL; pile[WZ1]=UR; 
(*f[339])( );     /*CMP0(TL,UR)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
}
