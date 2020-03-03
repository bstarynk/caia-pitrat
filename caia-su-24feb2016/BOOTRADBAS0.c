#include "dx.h"
void BOOTRADBAS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F,A,B,T,BA,C;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11830;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1921&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
F=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; T=pile[v[22]+3]; BA=pile[v[22]+4]; C=pile[v[22]+5]; RT=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=459; pile[WZ1]=C; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(459,C,jvj+2)*/
if((x[jvj+2]!=865)) goto l1;
pile[v[22]]=T; pile[WZ1]=BA; pile[WZ2]=jvj+3; 
(*f[2045])( );if(v[102]) goto l1;     /*BOOTRADREL0(T,BA,jvj+3)*/
pile[v[22]]=C; pile[WZ3]=RT; 
(*f[1503])( );if(v[102]) goto l1;     /*BOOTRADA0(C,BA,jvj+3,RT)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; v[102]=0;return;
l1:pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=A; pile[WZ3]=jvj+4; 
(*f[1503])( );if(v[102]) goto l2;     /*BOOTRADA0(C,BA,A,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=B; pile[WZ3]=jvj+6; 
(*f[1503])( );if(v[102]) goto l2;     /*BOOTRADA0(C,BA,B,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=F; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,F,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+9,jvj+7,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+10; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+10,RT)*/
goto l3;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; v[102]=1;return;
}
