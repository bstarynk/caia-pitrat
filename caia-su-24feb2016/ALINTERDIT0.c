#include "dx.h"
void ALINTERDIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V11=0,H=0,V21=0,V20=0,V23=0,V22=0,V26=0,V25=0,V14=0,V13=0,V18=0,V17=0,IX=0,J=0,T=0,V6=0,S=0,V7=0,V8=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=26138;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2582&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=0 ;z[jvj+6]=0;
V14=N-1;
V13=V14/2;
V18=N*N;
V17=V18-1;
IX=1;
l6:if((IX<=V13)) goto l8;
x[NNNE]=x[jvj+6] ;z[NNNE]=z[jvj+6];
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:if((IX!=J)) goto l11;
if((IX!=1)) goto l9;
l11:x[jvj+4]=d[136];z[jvj+4]=0;
l10:if((x[jvj+4]<=0)) goto l9;
T=s[x[jvj+4]];
V6=T*J;
S=0;
l12:if((S<=V17)) goto l14;
x[jvj+4]=t[x[jvj+4]];
goto l10;
l5:V21=H*IX;
V20=V7+V21;
if((V20<0)) goto l4;
if((V20>=N)) goto l4;
V23=H*V6;
V22=V8+V23;
if((V22<0)) goto l4;
if((V22>=N)) goto l4;
V26=V22*N;
V25=V20+V26;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+8)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V25; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V25,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+10,jvj+9,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l4:H++;
l3:if((H<=V14)) goto l5;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+5; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+11)*/
pile[WZ3]=1273; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+19)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+5; pile[WZ2]=107; pile[WZ3]=jvj+18; 
(*f[301])( );     /*TRI11(jvj+17,jvj+5,107,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
l13:S++;
goto l12;
l8:J=1;
l7:if((J<=V13)) goto l1;
IX++;
goto l6;
l9:J++;
goto l7;
l14:V7=S%N;
V8=S/N;
V9=V7-IX;
if((V9<0)) goto l2;
if((V9>=N)) goto l2;
V11=V8-V6;
if((V11<0)) goto l2;
if((V11<N)) goto l13;
l2:x[jvj+2]=0 ;z[jvj+2]=0;
H=0;
goto l3;
}
