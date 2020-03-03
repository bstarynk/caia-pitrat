#include "dx.h"
void Z65Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NNNY;
int NNNX,NNNT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=15566;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1857&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(539,NNNY,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=43)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+2,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[NNNY]!=x[jvj+5])) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+2,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=NNNY; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,NNNY,jvj+8)*/
NNNT=15;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+2,jvj+8,NNNX)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[NNNX]=NNNT=incon;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
