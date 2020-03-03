#include "dx.h"
void LEXV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V11=0,V12=0,V2=0,V10=0,V9=0,DFF=0,V5=0,DYY=0;
int DT,EX,FV;
int DX;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

DT=pile[v[22]]; EX=pile[v[22]+1]; FV=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DX=incon;
V2=bh[v[1]][DT];
if((V2==93)) goto l2;
if((V2!=32)) goto l3;
V10=DT+1;
V9=bh[v[1]][V10];
if((V9==32)) goto l2;
l3:if((x[FV]!=433)) goto l4;
pile[v[22]]=452; pile[WZ1]=100; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(452,100,jvj+2)*/
pile[v[22]]=DT; pile[WZ1]=jvj+2; 
(*f[321])( );if(v[102]) goto l1;     /*LCANT0(DT,jvj+2,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l1;     /*LEXP0(V5,jvj+3,DYY)*/
DYY=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=107; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(EX,107,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=102; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+2,102,jvj+3)*/
pile[v[22]]=DYY; pile[WZ1]=EX; pile[WZ2]=FV; 
(*f[661])( );if(v[102]) goto l1;     /*LEXV0(DYY,EX,FV,DX)*/
DX=pile[WZ3]; 
l1:V1=bh[v[1]][DT];
if(V1==93||V1==91||V1==44||V1==59) goto l5;
pile[v[22]]=20; pile[WZ1]=10328; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10328,0,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,1,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l5:if(DX!=incon) goto l6;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l2:DX=DT;
goto l1;
l4:pile[v[22]]=DT; pile[WZ1]=jvj+1; 
(*f[335])( );if(v[102]) goto l1;     /*LANT0(DT,jvj+1,DFF)*/
DFF=pile[WZ2]; 
pile[v[22]]=EX; pile[WZ1]=107; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(EX,107,jvj+1)*/
pile[v[22]]=DFF; pile[WZ1]=EX; pile[WZ2]=FV; 
(*f[661])( );if(v[102]) goto l1;     /*LEXV0(DFF,EX,FV,DX)*/
DX=pile[WZ3]; 
goto l1;
l6:v[0]=jvj; v[22]-=4; pile[v[22]+3]=DX; v[102]=0;return;
}
