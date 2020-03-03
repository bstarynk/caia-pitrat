#include "dx.h"
void SUDOKU3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,L=0,M=0,V9=0,V7=0,I=0,J=0,K=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=26071;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2311&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=0 ;z[jvj+9]=0;
I=1;
l7:x[jvj+6]=d[129];z[jvj+6]=0;
l5:if((x[jvj+6]>0)) goto l6;
I++;
if((I<=9)) goto l7;
x[NNNE]=x[jvj+9] ;z[NNNE]=z[jvj+9];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:L=s[x[jvj+2]];
x[jvj+3]=d[128];z[jvj+3]=0;
l3:if((x[jvj+3]>0)) goto l4;
x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+14)*/
pile[WZ3]=1273; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+22)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+21; 
(*f[301])( );     /*TRI11(jvj+20,jvj+8,107,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[522])( );     /*PLUB2(jvj+9,jvj+10)*/
x[jvj+7]=t[x[jvj+7]];
l8:if((x[jvj+7]>0)) goto l9;
x[jvj+6]=t[x[jvj+6]];
goto l5;
l4:M=s[x[jvj+3]];
V9=L+M;
V7=V8+V9;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+13,jvj+12,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l3;
l6:J=s[x[jvj+6]];
x[jvj+7]=d[130];z[jvj+7]=0;
goto l8;
l9:K=s[x[jvj+7]];
x[jvj+4]=0 ;z[jvj+4]=0;
V8=J+K;
x[jvj+2]=d[127];z[jvj+2]=0;
goto l1;
}
