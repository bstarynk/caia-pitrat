#include "dx.h"
void BILANSANSCHOIX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0;
int M;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=11014;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==964&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=M; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,M,jvj+2)*/
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=jvj+3; pile[WZ1]=1124; 
(*f[35])( );     /*CHGC1(jvj+3,1124,jvj+2)*/
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(15,0,35,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V4; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V4,jvj+2,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
