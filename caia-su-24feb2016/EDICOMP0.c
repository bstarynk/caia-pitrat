#include "dx.h"
void EDICOMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,SS=0,V11=0,V9=0,S=0,V12=0,V14=0,V2=0,V19=0,V18=0,V17=0,V8=0,V7=0,V4=0;
int LL,KR,UR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10553;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==121&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
LL=pile[v[22]]; KR=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=vv[16];
SS=V1;
vv[16]=2;
V19=LL+1;
V18=V19+1;
V17=bh[v[1]][V18];
if((V17!=32)) goto l3;
pile[v[22]]=KR; pile[WZ1]=UR; 
(*f[356])( );     /*EAX1(KR,UR)*/
l3:V9=LL+1;
V8=V9+1;
V7=bh[v[1]][V8];
if((V7==32)) goto l8;
V2=incon;
pile[v[22]]=V9; 
(*f[107])( );     /*CRC0(V9,S)*/
S=pile[WZ1]; 
V12=S+1;
V14=bh[v[1]][V12];
if((V14<48)) goto l10;
if((V14>57)) goto l10;
V4=135;
l1:if((V4==135)) goto l2;
V2=(-1);
l4:pile[v[22]]=V9; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+4; 
(*f[78])( );if(v[102]) goto l8;     /*SMA0(V9,36,67,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[354])( );     /*ORIPOS0(jvj+4,jvj+5)*/
pile[v[22]]=365; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
l5:if((x[jvj+6]<=0)) goto l8;
x[jvj+3]=s[x[jvj+6]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+6];
if((V2<0)) goto l7;
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+3,V11)*/
V11=pile[WZ2]; 
if((V11==V2)) goto l7;
l6:x[jvj+6]=t[x[jvj+6]];
goto l5;
l2:pile[v[22]]=V12; 
(*f[135])( );     /*LND3(V12,V2)*/
V2=pile[WZ1]; 
goto l4;
l7:pile[v[22]]=jvj+3; pile[WZ1]=73; 
(*f[273])( );     /*PLUK1(jvj+3,73)*/
pile[v[22]]=KR; pile[WZ1]=UR; pile[WZ2]=jvj+3; 
(*f[355])( );     /*EAX0(KR,UR,jvj+3)*/
goto l6;
l8:vv[16]=SS;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l10:V4=134;
goto l1;
}
