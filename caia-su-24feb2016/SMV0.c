#include "dx.h"
void SMV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V10=0,V13=0,V12=0,NR=0,V17=0,S=0,HH=0,V4=0,V3=0,V6=0,DXX=0,V9=0;
int I;
int R,DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=397 ;z[jvj+1]=397;
V11=I+1;
V10=bh[v[1]][V11];
if((V10!=86)) goto l3;
V13=V11+1;
V12=bh[v[1]][V13];
if((V12<48)) goto l7;
if((V12>57)) goto l7;
V9=135;
l1:if((V9==135)) goto l2;
l3:pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,77,HH)*/
HH=pile[WZ2]; 
V4=I+1;
V3=V4+1;
V6=bh[v[1]][V4];
pile[v[22]]=1392; pile[WZ1]=V3; pile[WZ2]=V4; pile[WZ3]=94; pile[WZ4]=V6; pile[WZ5]=jvj+1; pile[v[22]+6]=HH; pile[v[22]+7]=jvj+2; 
(*f[410])( );if(v[102]) goto l4;     /*SMB1(1392,V3,V4,94,V6,jvj+1,HH,jvj+2,DXX)*/
DXX=pile[v[22]+8]; 
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+2,S)*/
S=pile[WZ2]; 
DX=DXX;
if((S!=HH)) goto l5;
pile[v[22]]=77; pile[WZ1]=130; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(77,130,(-1))*/
l5:R=S;
l6:v[0]=jvj; v[22]-=3; pile[v[22]+1]=R; pile[v[22]+2]=DX; return;
l2:pile[v[22]]=V13; 
(*f[126])( );     /*LND2(V13,NR,DX)*/
NR=pile[WZ1]; DX=pile[WZ2]; 
V17=NR;
S=V17;
goto l5;
l4:DX=I;
R=((-9563));
goto l6;
l7:V9=134;
goto l1;
}
