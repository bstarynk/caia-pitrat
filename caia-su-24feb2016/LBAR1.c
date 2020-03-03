#include "dx.h"
void LBAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V2=0,V4=0,V6=0,V5=0,V30=0,DY=0,V29=0,DR=0,V13=0,V12=0,V23=0,V22=0;
int DP,EX;
int DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V30=DP;
l9:DX=DR=incon;
V1=bh[v[1]][V30];
if((V1!=32)) goto l1;
V3=V30+1;
V2=bh[v[1]][V3];
if((V2==32)) goto l1;
l2:V4=bh[v[1]][V30];
if((V4!=32)) goto l7;
V6=V30+1;
V5=bh[v[1]][V6];
if((V5==32)) goto l7;
pile[v[22]]=V30; pile[WZ1]=jvj+1; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(V30,jvj+1,DY)*/
DY=pile[WZ2]; 
V29=bh[v[1]][DY];
if(V29==32||V29==93||V29==44||V29==59) goto l3;
if((V29==45)) goto l5;
if((V29!=60)) goto l7;
V23=DY+1;
V22=bh[v[1]][V23];
if((V22!=45)) goto l7;
pile[v[22]]=V23; pile[WZ1]=jvj+6; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(V23,jvj+6,DR)*/
DR=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=103; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+8,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+13; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+7,jvj+13,jvj+10)*/
x[jvj+9]=113 ;z[jvj+9]=113;
l6:pile[v[22]]=EX; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(EX,jvj+9,jvj+10)*/
l7:if(DX==incon) goto l8;
v[0]=jvj; v[22]-=3; pile[v[22]+2]=DX; v[102]=0;return;
l1:DX=V30;
goto l2;
l3:pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
DR=DY;
pile[v[22]]=jvj+2; pile[WZ1]=103; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+2,103,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+11; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+2,jvj+11,jvj+10)*/
l4:x[jvj+9]=114 ;z[jvj+9]=114;
goto l6;
l5:V13=DY+1;
V12=bh[v[1]][V13];
if((V12!=62)) goto l7;
pile[v[22]]=V13; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(V13,jvj+3,DR)*/
DR=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=103; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+5,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+12; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+4,jvj+12,jvj+10)*/
goto l4;
l8:if(DR!=incon) goto l10;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l10:V30=DR;
goto l9;
}
