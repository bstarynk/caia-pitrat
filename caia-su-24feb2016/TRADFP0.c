#include "dx.h"
void TRADFP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11913;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3920&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[B]==134)) goto l7;
if((x[B]==135)) goto l1;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=763; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,A,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+11; 
(*f[301])( );     /*TRI11(jvj+10,jvj+8,107,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+11,22,100,R)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+3,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=C; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,C,jvj+16)*/
pile[WZ3]=V9; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=160; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,160,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=111; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+13,jvj+14,111,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+17; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+17,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,134,R)*/
goto l6;
}
