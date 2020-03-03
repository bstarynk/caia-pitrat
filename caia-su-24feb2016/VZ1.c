#include "dx.h"
void VZ1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0;
int RX,D;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=10480;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1640&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RX=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=RX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,RX,jvj+3)*/
if((x[jvj+3]!=39)) goto l3;
pile[v[22]]=RX; pile[WZ1]=D; pile[WZ2]=jvj+4; 
(*f[1641])( );if(v[102]) goto l3;     /*VC0(RX,D,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=RX; pile[WZ1]=130; pile[WZ2]=V3; 
(*f[43])( );     /*CHGC2(RX,130,V3)*/
l3:x[jvj+5]=d[107];z[jvj+5]=0;
l1:if((x[jvj+5]>0)) goto l2;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=RX; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,RX,jvj+7)*/
x[jvj+9]=x[jvj+7] ;z[jvj+9]=z[jvj+7];
l4:if((x[jvj+9]>0)) goto l5;
x[jvj+5]=t[x[jvj+5]];
goto l1;
l5:x[jvj+8]=s[x[jvj+9]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+9];
pile[v[22]]=jvj+8; pile[WZ1]=D; 
(*f[1640])( );     /*VZ1(jvj+8,D)*/
x[jvj+9]=t[x[jvj+9]];
goto l4;
}
