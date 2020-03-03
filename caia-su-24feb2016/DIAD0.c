#include "dx.h"
void DIAD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int X;
int BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=109; pile[WZ1]=X; pile[WZ2]=BL; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,X,BL)*/
l3:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:pile[v[22]]=110; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(110,X,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=BL; 
(*f[1071])( );if(v[102]) goto l2;     /*NOUB0(BL)*/
pile[v[22]]=10664; pile[WZ1]=10666; 
(*f[294])( );     /*PLUK2(10664,10666)*/
pile[v[22]]=X; pile[WZ1]=109; pile[WZ2]=BL; 
(*f[35])( );     /*CHGC1(X,109,BL)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+6)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-619); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+10)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V1; pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,96,163,V1,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+6,111,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+7,jvj+8,103,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+2; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+9,jvj+2)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=BL; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,BL,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+16)*/
pile[WZ3]=(-4762); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4762),jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=103; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+16,jvj+15,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+12; 
(*f[180])( );     /*TRIENS0(jvj+11,(-20),114,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+13,jvj+12,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+3; 
(*f[180])( );     /*TRIENS0(jvj+2,(-20),107,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ2]=jvj+3; pile[WZ3]=105; pile[WZ4]=jvj+5; 
(*f[298])( );     /*TRIENS1(jvj+4,(-20),jvj+3,105,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+1; 
(*f[58])( );     /*TRI3(jvj+5,42,100,jvj+1)*/
pile[v[22]]=10664; pile[WZ1]=184; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(10664,184,jvj+1)*/
goto l3;
l2:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
