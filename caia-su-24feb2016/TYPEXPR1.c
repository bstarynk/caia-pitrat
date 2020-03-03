#include "dx.h"
void TYPEXPR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q;
int NV;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; NV=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,Q,jvj+1)*/
if((x[jvj+1]==61)) goto l1;
if((x[jvj+1]==41)) goto l1;
if((x[jvj+1]==20)) goto l2;
if((x[jvj+1]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,Q,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
pile[v[22]]=1045; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1045,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l2;
l3:pile[v[22]]=111; pile[WZ1]=Q; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,Q,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=654)) goto l4;
pile[v[22]]=103; pile[WZ1]=Q; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,Q,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==41)) goto l1;
if((x[jvj+8]==20)) goto l2;
if((x[jvj+8]!=89)) goto l4;
x[NV]=89 ;z[NV]=89;
l7:v[0]=jvj; v[22]-=2; return;
l1:x[NV]=41 ;z[NV]=41;
goto l7;
l2:x[NV]=20 ;z[NV]=20;
goto l7;
l4:pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,Q,jvj+9)*/
if((x[jvj+9]==43)) goto l5;
if((x[jvj+9]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,Q,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+12,jvj+13)*/
pile[v[22]]=1876; pile[WZ1]=jvj+13; pile[WZ2]=NV; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1876,jvj+13,NV)*/
goto l7;
l5:pile[v[22]]=102; pile[WZ1]=Q; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,Q,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+10,jvj+11)*/
pile[v[22]]=1876; pile[WZ1]=jvj+11; pile[WZ2]=NV; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1876,jvj+11,NV)*/
goto l7;
l6:x[NV]=250 ;z[NV]=250;
goto l7;
}
