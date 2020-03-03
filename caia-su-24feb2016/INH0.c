#include "dx.h"
void INH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int NR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10297;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==62&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((NR!=9)) goto l1;
v[79]=1;
l1:V1=incon;
if((NR==9)) goto l2;
V1=NR;
l3:pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(724,240,jvj+2)*/
l4:if((x[jvj+2]>0)) goto l5;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:V1=0;
goto l3;
l5:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=V1; 
(*f[245])( );     /*INU0(jvj+3,V1)*/
x[jvj+2]=t[x[jvj+2]];
goto l4;
}
