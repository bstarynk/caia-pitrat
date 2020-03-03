#include "dx.h"
void LEXR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,K=0,V1=0,V35=0,V36=0,V17=0,V39=0,V40=0,V21=0,V20=0,V24=0,V23=0,V26=0,V25=0,V29=0,V28=0,DT=0,V10=0,V9=0,V42=0,V7=0,DZ=0,V12=0,V16=0,V6=0,V37=0,V38=0;
int DP,EX;
int DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V42=DP;
l18:x[jvj+6]=DT=DZ=x[jvj+2]=DX=incon;
V19=bh[v[1]][V42];
K=V19;
if((K==41)) goto l2;
if((K!=40)) goto l3;
V21=V42+1;
V20=bh[v[1]][V21];
if((V20!=41)) goto l3;
DX=V21;
l3:V24=V42+1;
V23=bh[v[1]][V24];
if((V23!=42)) goto l4;
V26=V24+1;
V25=bh[v[1]][V26];
if((V25!=42)) goto l4;
if((K==41)) goto l1;
V29=V26+1;
V28=bh[v[1]][V29];
if((V28==42)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+7)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+7; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+7,jvj+6)*/
DT=V29;
l5:V10=V42+1;
V9=bh[v[1]][V10];
if((V9!=123)) goto l6;
pile[v[22]]=V10; pile[WZ1]=jvj+2; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(V10,jvj+2,V12)*/
V12=pile[WZ2]; 
V16=V12+1;
DZ=V16;
V17=bh[v[1]][V12];
if(V17==125) goto l7;
pile[v[22]]=20; pile[WZ1]=10331; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10331,0,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(41,3,V39,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
l7:if((K!=94)) goto l1;
l8:if(x[jvj+6]==incon) goto l9;
l13:if(DX==incon) goto l14;
v[0]=jvj; v[22]-=3; pile[v[22]+2]=DX; v[102]=0;return;
l2:DX=V42;
goto l3;
l4:if((K!=41)) goto l5;
l1:V1=bh[v[1]][V42];
if(V1==44||V1==40||V1==41) goto l8;
pile[v[22]]=20; pile[WZ1]=10331; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10331,0,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,1,V35,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
goto l8;
l6:pile[v[22]]=V42; 
(*f[107])( );     /*CRC0(V42,V7)*/
V7=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l7;     /*SMA0(V42,64,67,jvj+1)*/
DZ=V7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+2)*/
goto l7;
l9:if(DT==incon) goto l10;
goto l13;
l10:if(DZ!=incon) goto l11;
goto l13;
l11:if(x[jvj+2]!=incon) goto l12;
goto l13;
l12:if((K==41)) goto l13;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=DZ; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(DZ,jvj+4,DT)*/
DT=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=103; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+5,103,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+8; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+3,jvj+8,jvj+6)*/
V6=bh[v[1]][DZ];
if(V6==58) goto l13;
pile[v[22]]=20; pile[WZ1]=10331; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10331,0,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,2,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
goto l13;
l14:if(x[jvj+6]!=incon) goto l15;
l17:v[0]=jvj; v[22]-=3; v[102]=1;return;
l15:if(DT!=incon) goto l16;
goto l17;
l16:pile[v[22]]=EX; pile[WZ1]=108; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(EX,108,jvj+6)*/
V42=DT;
goto l18;
}
