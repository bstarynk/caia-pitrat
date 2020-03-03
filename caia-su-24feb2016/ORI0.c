#include "dx.h"
void ORI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,VV=0,WW=0;
int R,Z,W,V,G;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10720;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2087&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Z=pile[v[22]+1]; W=pile[v[22]+2]; V=pile[v[22]+3]; G=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=436; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,436,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=111; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+2; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+18,jvj+17,jvj+2)*/
pile[v[22]]=R; pile[WZ1]=jvj+2; pile[WZ2]=Z; 
(*f[2166])( );     /*ORU0(R,jvj+2,Z)*/
pile[v[22]]=111; pile[WZ1]=G; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,G,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=734)) goto l3;
pile[v[22]]=107; pile[WZ1]=G; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,G,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l3;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+6,V4)*/
V4=pile[WZ2]; 
VV=V4;
if((VV==V)) goto l2;
(*f[1817])( );     /*NOUV2(WW)*/
WW=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10247; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,10247,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+21)*/
pile[WZ3]=(-598); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=103; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+21,jvj+20,jvj+12)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+24)*/
pile[WZ3]=(-591); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=103; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+24,jvj+23,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+27)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=103; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+27,jvj+26,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+10; 
(*f[180])( );     /*TRIENS0(jvj+9,(-20),113,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+11,jvj+10,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=114; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+7,114,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+7,114,jvj+13)*/
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[2167])( );     /*ORU1(R,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=743; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,743,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+32)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+8)*/
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[2167])( );     /*ORU1(R,jvj+8)*/
pile[v[22]]=jvj+7; 
(*f[1424])( );     /*VZ0(jvj+7)*/
pile[v[22]]=250; pile[WZ1]=jvj+7; 
(*f[1600])( );     /*DVA0(250,jvj+7)*/
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
}
