#include "dx.h"
void EAD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0;
int UR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10602;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==707&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=890; pile[WZ1]=240; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(890,240,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+3,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=V3; pile[WZ2]=jvj+5; 
(*f[133])( );if(v[102]) goto l3;     /*TLDEBL1(jvj+4,V3,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=UR; 
(*f[339])( );     /*CMP0(jvj+5,UR)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
}
