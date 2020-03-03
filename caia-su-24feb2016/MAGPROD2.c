#include "dx.h"
void MAGPROD2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V11=0,V10=0,V9=0,L=0,V14=0,V13=0,V6=0,J=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=26094;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2370&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=0 ;z[jvj+6]=0;
V14=3*N;
V13=V14-6;
pile[v[22]]=V13; pile[WZ1]=6; 
(*f[1006])( );if(v[102]) goto l6;     /*POWER0(V13,6,V6)*/
V6=pile[WZ2]; 
J=1;
l5:if((J>N)) goto l6;
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l1:if((I<=N)) goto l2;
x[jvj+3]=0 ;z[jvj+3]=0;
l3:if((x[jvj+2]>0)) goto l4;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V6; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V6,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+5; pile[WZ2]=107; pile[WZ3]=jvj+18; 
(*f[301])( );     /*TRI11(jvj+17,jvj+5,107,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+18,22,100,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
J++;
goto l5;
l2:V11=I-1;
V10=V11*N;
V9=J+V10;
pile[v[22]]=jvj+2; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+2,V9)*/
I++;
goto l1;
l4:L=s[x[jvj+2]];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+8)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+10,jvj+9,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
x[jvj+2]=t[x[jvj+2]];
goto l3;
l6:x[NNNE]=x[jvj+6] ;z[NNNE]=z[jvj+6];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
