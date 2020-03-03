#include "dx.h"
void DECOMPVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,VX;
int E,RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11334;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4006&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; VX=pile[v[22]+1]; E=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
x[E]=x[jvj+8] ;z[E]=z[jvj+8];
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l4;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,R,jvj+4)*/
pile[v[22]]=VX; pile[WZ1]=E; pile[WZ2]=36; pile[WZ3]=68; pile[WZ4]=jvj+4; pile[WZ5]=jvj+5; 
(*f[4070])( );     /*DEPZ0(VX,E,36,68,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l1;
l4:x[E]=x[RES]=incon;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,R,jvj+6)*/
pile[v[22]]=VX; pile[WZ1]=E; pile[WZ2]=52; pile[WZ3]=68; pile[WZ4]=jvj+6; pile[WZ5]=jvj+7; 
(*f[4070])( );     /*DEPZ0(VX,E,52,68,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l2;
goto l4;
l2:x[RES]=135 ;z[RES]=135;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
}
