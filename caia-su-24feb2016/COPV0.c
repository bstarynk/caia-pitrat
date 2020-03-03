#include "dx.h"
void COPV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V7=0;
int RM,BT,Z,R,X;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10577;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1818&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RM=pile[v[22]]; BT=pile[v[22]+1]; Z=pile[v[22]+2]; R=pile[v[22]+3]; X=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((V7=w[x[BT]][1])==incon) goto l1;
if((V7!=23)) goto l5;
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=X; 
(*f[36])( );     /*PLUSC0(R,BT,X)*/
l1:if((V3=w[x[BT]][1])==incon) goto l2;
if((V3!=23)) goto l2;
V4=x[Z];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(BT,R,V4)*/
l2:if((x[BT]!=105)) goto l3;
pile[v[22]]=337; pile[WZ1]=Z; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(337,Z,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+4; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+4,jvj+5)*/
pile[v[22]]=X; pile[WZ1]=337; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(X,337,jvj+5)*/
l3:pile[v[22]]=X; pile[WZ1]=BT; pile[WZ2]=R; pile[WZ3]=RM; 
(*f[1635])( );     /*COPT0(X,BT,R,RM)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l5:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=X; 
(*f[35])( );     /*CHGC1(R,BT,X)*/
goto l1;
}
