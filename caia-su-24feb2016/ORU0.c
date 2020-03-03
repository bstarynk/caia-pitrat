#include "dx.h"
void ORU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int R,H,Z;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10683;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2166&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; H=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V4=x[Z];
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(107,R,V4)*/
pile[v[22]]=159; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,R,jvj+3)*/
x[jvj+4]=d[121];z[jvj+4]=0;
l1:if((x[jvj+4]>0)) goto l2;
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=H; 
(*f[36])( );     /*PLUSC0(R,107,H)*/
pile[v[22]]=H; pile[WZ1]=jvj+7; 
(*f[938])( );     /*USE0(H,jvj+7)*/
pile[WZ1]=253; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(H,253,jvj+7)*/
pile[WZ1]=R; pile[WZ2]=H; 
(*f[2208])( );     /*ORA1(H,R,H)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
l3:if((x[jvj+8]>0)) goto l4;
x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:x[jvj+6]=s[x[jvj+8]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+8];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(jvj+5,jvj+6,V4)*/
x[jvj+8]=t[x[jvj+8]];
goto l3;
}
