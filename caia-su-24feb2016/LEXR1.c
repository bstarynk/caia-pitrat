#include "dx.h"
void LEXR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V30=0,V31=0,V17=0,V34=0,V35=0,V19=0,V18=0,V21=0,V20=0,V24=0,V23=0,V10=0,V9=0,V7=0,DZ=0,V12=0,V16=0,V6=0,V32=0,V33=0;
int DP,K;
int H,DT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; K=pile[v[22]+1]; H=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[H]=DT=DZ=x[jvj+2]=incon;
V19=DP+1;
V18=bh[v[1]][V19];
if((V18!=42)) goto l2;
V21=V19+1;
V20=bh[v[1]][V21];
if((V20!=42)) goto l2;
if((K==41)) goto l1;
V24=V21+1;
V23=bh[v[1]][V24];
if((V23==42)) goto l3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+6)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+6; pile[WZ4]=H; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+6,H)*/
DT=V24;
l3:V10=DP+1;
V9=bh[v[1]][V10];
if((V9!=123)) goto l4;
pile[v[22]]=V10; pile[WZ1]=jvj+2; 
(*f[79])( );if(v[102]) goto l5;     /*LEXP0(V10,jvj+2,V12)*/
V12=pile[WZ2]; 
V16=V12+1;
DZ=V16;
V17=bh[v[1]][V12];
if(V17==125) goto l5;
pile[v[22]]=20; pile[WZ1]=10331; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10331,0,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,3,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
l5:if((K!=94)) goto l1;
l6:if(x[H]==incon) goto l7;
if(DT!=incon) goto l12;
l11:x[H]=DT=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l2:if((K!=41)) goto l3;
l1:V1=bh[v[1]][DP];
if(V1==44||V1==40||V1==41) goto l6;
pile[v[22]]=20; pile[WZ1]=10331; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10331,0,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,1,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
goto l6;
l4:pile[v[22]]=DP; 
(*f[107])( );     /*CRC0(DP,V7)*/
V7=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l5;     /*SMA0(DP,64,67,jvj+1)*/
DZ=V7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+2)*/
goto l5;
l7:if(DT==incon) goto l8;
goto l11;
l8:if(DZ!=incon) goto l9;
goto l11;
l9:if(x[jvj+2]!=incon) goto l10;
goto l11;
l10:if((K==41)) goto l11;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=DZ; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l11;     /*LEXP0(DZ,jvj+4,DT)*/
DT=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=103; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+5,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+7; pile[WZ5]=H; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+3,jvj+7,H)*/
V6=bh[v[1]][DZ];
if(V6==58) goto l12;
pile[v[22]]=20; pile[WZ1]=10331; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10331,0,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,2,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
l12:v[0]=jvj; v[22]-=4; pile[v[22]+3]=DT; v[102]=0;return;
}
