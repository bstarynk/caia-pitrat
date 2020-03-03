#include "dx.h"
void BOOTRADIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B,BA,C;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; BA=pile[v[22]+2]; C=pile[v[22]+3]; RT=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=A; pile[WZ3]=jvj+1; 
(*f[1503])( );if(v[102]) goto l4;     /*BOOTRADA0(C,BA,A,jvj+1)*/
if((x[B]==1668)) goto l1;
if((x[B]==1751)) goto l2;
if((x[B]==1750)) goto l3;
if(x[B]!=135&&x[B]!=134) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+15)*/
pile[WZ3]=B; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,B,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+18; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+18,RT)*/
l5:v[0]=jvj; v[22]-=5; v[102]=0;return;
l1:pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+6)*/
pile[WZ3]=74; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+20; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+2,jvj+20,jvj+10)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+6,111,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+7,jvj+8,103,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+9,RT)*/
goto l5;
l2:pile[v[22]]=jvj+1; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1400; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,1400,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+12; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+12,RT)*/
goto l5;
l3:pile[v[22]]=jvj+1; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1401; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,1401,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+14; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+14,RT)*/
goto l5;
l4:v[0]=jvj; v[22]-=5; v[102]=1;return;
}
