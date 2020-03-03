#include "dx.h"
void PARAMEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,KR=0,NR=0,V5=0;
int D;
int H;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11499;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==550&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; H=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=111; pile[WZ1]=158; pile[WZ2]=H; 
(*f[54])( );     /*TRI1(111,158,H)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
KR=V1;
if((KR==(-89))) goto l1;
if((KR==89)) goto l2;
if((KR==69)) goto l3;
if((KR==84)) goto l4;
if((KR!=83)) goto l5;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=(-1); pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l5;     /*SMA0((-1),64,67,jvj+3)*/
pile[v[22]]=H; pile[WZ1]=449; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(H,449,jvj+3)*/
l5:pile[v[22]]=H; 
(*f[910])( );     /*PARAMEXP1(H)*/
goto l6;
l2:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+4; 
(*f[78])( );if(v[102]) goto l5;     /*SMA0(1,64,67,jvj+4)*/
pile[v[22]]=H; pile[WZ1]=288; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(H,288,jvj+4)*/
goto l5;
l3:pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=H; pile[WZ1]=117; pile[WZ2]=NR; 
(*f[43])( );     /*CHGC2(H,117,NR)*/
goto l5;
l4:pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V5)*/
V5=pile[WZ1]; 
pile[v[22]]=H; pile[WZ1]=936; pile[WZ2]=V5; 
(*f[43])( );     /*CHGC2(H,936,V5)*/
goto l5;
}
