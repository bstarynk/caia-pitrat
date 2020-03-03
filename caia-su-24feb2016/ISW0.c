#include "dx.h"
void ISW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VB,VA,X,TL,S;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=10428;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1604&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
VB=pile[v[22]]; VA=pile[v[22]+1]; X=pile[v[22]+2]; TL=pile[v[22]+3]; S=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=S; pile[WZ2]=TL; 
(*f[1801])( );     /*ISV1(X,S,TL)*/
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(302,TL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
if((x[jvj+3]==x[X])) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=VB; pile[WZ1]=VA; pile[WZ3]=TL; 
(*f[1802])( );     /*SUBST1(VB,VA,jvj+4,TL)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
}
