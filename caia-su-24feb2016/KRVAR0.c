#include "dx.h"
void KRVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int N,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11261;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==297&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=118; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(118,N,V1)*/
V1=pile[WZ2]; 
if((V1!=0)) goto l1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+7)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+8,jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+10,jvj+3)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=595; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,595,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-697); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+20; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+18,107,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+20,22,100,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=436; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,436,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=111; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+13,jvj+14,111,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+16,jvj+15,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+4; 
(*f[180])( );     /*TRIENS0(jvj+3,(-20),107,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=105; pile[WZ4]=jvj+6; 
(*f[298])( );     /*TRIENS1(jvj+5,(-20),jvj+4,105,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+2; 
(*f[58])( );     /*TRI3(jvj+6,42,100,jvj+2)*/
pile[v[22]]=BL; pile[WZ1]=184; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(BL,184,jvj+2)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
