#include "dx.h"
void SORCMT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V2=0,K=0,V3=0,V4=0;
int BL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11492;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==341&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1428; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1428,BL,jvj+2)*/
l1:x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=1352; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+3,1352,V5,jvj+4)*/
V5=pile[WZ2]; 
V2=V5;
c[v[1]][0]=35;
c[v[1]][1]=32;
pile[v[22]]=V2; pile[WZ1]=2; 
(*f[227])( );     /*SPCMT0(V2,2,K)*/
K=pile[WZ2]; 
V3=K+1;
V4=K+2;
c[v[1]][K]=32;
c[v[1]][V3]=0;
pile[v[22]]=V4; 
(*f[40])( );     /*SLG0(V4)*/
l2:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+3,jvj+2)*/
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
