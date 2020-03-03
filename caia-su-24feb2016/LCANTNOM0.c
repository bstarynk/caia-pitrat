#include "dx.h"
void LCANTNOM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,DY=0,V10=0,V7=0;
int FV,DP,EX;
int DX;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

FV=pile[v[22]]; DP=pile[v[22]+1]; EX=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1829; pile[WZ1]=FV; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1829,FV,jvj+1)*/
pile[v[22]]=DP; 
(*f[107])( );     /*CRC0(DP,V2)*/
V2=pile[WZ1]; 
V4=DP+1;
pile[v[22]]=V4; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+2; 
(*f[666])( );if(v[102]) goto l2;     /*SMA3(V4,64,66,jvj+2)*/
if((x[jvj+2]!=x[jvj+1])) goto l2;
pile[v[22]]=V2; pile[WZ1]=jvj+3; 
(*f[335])( );if(v[102]) goto l2;     /*LANT0(V2,jvj+3,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=107; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(EX,107,jvj+3)*/
pile[v[22]]=1655; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1655,jvj+1,jvj+4)*/
V10=DY+1;
pile[v[22]]=V10; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+5; 
(*f[666])( );if(v[102]) goto l1;     /*SMA3(V10,64,66,jvj+5)*/
if((x[jvj+5]!=x[jvj+4])) goto l1;
(*f[107])( );     /*CRC0(V10,V7)*/
V7=pile[WZ1]; 
pile[v[22]]=FV; pile[WZ1]=V7; pile[WZ2]=EX; 
(*f[669])( );if(v[102]) goto l1;     /*LCANTNOM0(FV,V7,EX,DX)*/
DX=pile[WZ3]; 
l3:v[0]=jvj; v[22]-=4; pile[v[22]+3]=DX; v[102]=0;return;
l1:DX=DY;
goto l3;
l2:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
