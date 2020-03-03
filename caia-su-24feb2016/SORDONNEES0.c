#include "dx.h"
void SORDONNEES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,F=0;
int S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11200;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==407&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=128; pile[WZ1]=S; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,S,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+3]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+3];
pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+2,jvj+4)*/
F=x[jvj+4];
if(F!=531&&F!=453&&F!=979&&F!=1027&&F!=41) goto l3;
if((F==41)) goto l4;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V3; 
(*f[37])( );     /*SRA0(0,V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; 
(*f[40])( );     /*SLG0(V4)*/
l4:pile[v[22]]=jvj+2; 
(*f[769])( );     /*SORDON1(jvj+2)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
}
