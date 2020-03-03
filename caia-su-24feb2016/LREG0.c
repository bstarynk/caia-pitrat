#include "dx.h"
void LREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V18=0,DW=0,V4=0,V3=0,V6=0,V5=0,DZ=0,V13=0,V25=0,V26=0,V21=0,V20=0;
int DPP;
int R,DF;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

DPP=pile[v[22]]; R=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DF=incon;
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(42,100,R)*/
V19=DPP+1;
V18=bh[v[1]][V19];
if((V18==61)) goto l1;
pile[v[22]]=DPP; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(DPP,64,67,jvj+1)*/
pile[v[22]]=116; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(116,jvj+1,jvj+2)*/
if((x[jvj+2]!=337)) goto l1;
pile[v[22]]=DPP; 
(*f[107])( );     /*CRC0(DPP,DW)*/
DW=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=337; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(R,337,jvj+3)*/
l2:V4=DW+1;
V3=bh[v[1]][V4];
if((V3==61)) goto l3;
pile[v[22]]=DW; pile[WZ1]=R; 
(*f[321])( );if(v[102]) goto l8;     /*LCANT0(DW,R,DZ)*/
DZ=pile[WZ2]; 
l4:V21=DZ+1;
V20=bh[v[1]][V21];
if((V20==32)) goto l5;
if((V20==93)) goto l6;
if(V20==32||V20==93) goto l7;
pile[v[22]]=DZ; pile[WZ1]=R; 
(*f[724])( );     /*LCONS0(DZ,R,DF)*/
DF=pile[WZ2]; 
l7:if((DZ<=0)) goto l9;
V13=bh[v[1]][DZ];
if(V13==62) goto l9;
pile[v[22]]=20; pile[WZ1]=10333; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10333,0,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,1,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
l9:if(DF!=incon) goto l10;
l8:x[R]=DF=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:DW=DPP;
goto l2;
l3:V6=V4+1;
V5=bh[v[1]][V6];
if((V5!=62)) goto l8;
DZ=V6;
goto l4;
l5:DF=DZ;
goto l7;
l6:DF=V21;
goto l7;
l10:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DF; v[102]=0;return;
}
