#include "dx.h"
void LIRESQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V9=0,V11=0,V14=0,V19=0,V20=0,V21=0,V12=0,V16=0;
int DP,N;
int EX,DF;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; N=pile[v[22]+1]; EX=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[EX]=incon;
pile[v[22]]=DP; 
(*f[107])( );     /*CRC0(DP,V2)*/
V2=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l2;     /*SMA0(DP,64,67,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+3,jvj+4)*/
pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,984,102,jvj+4,EX)*/
if((x[jvj+3]==12)) goto l1;
pile[v[22]]=V2; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l2;     /*SMA0(V2,36,67,jvj+1)*/
(*f[107])( );     /*CRC0(V2,V4)*/
V4=pile[WZ1]; 
pile[v[22]]=V4; 
(*f[131])( );     /*SMV0(V4,V9,V11)*/
V9=pile[WZ1]; V11=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V9; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(100,21,140,V9,jvj+5)*/
pile[v[22]]=EX; pile[WZ1]=103; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(EX,103,jvj+5)*/
V14=bh[v[1]][V11];
if((V14==58)) goto l10;
if((V14!=43)) goto l4;
pile[v[22]]=V11; pile[WZ1]=jvj+6; 
(*f[79])( );if(v[102]) goto l4;     /*LEXP0(V11,jvj+6,V19)*/
V19=pile[WZ2]; 
V20=bh[v[1]][V19];
if((V20!=44)) goto l5;
pile[v[22]]=V19; pile[WZ1]=EX; 
(*f[321])( );if(v[102]) goto l5;     /*LCANT0(V19,EX,V21)*/
V21=pile[WZ2]; 
l5:pile[v[22]]=EX; pile[WZ1]=337; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(EX,337,jvj+6)*/
l4:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+2)*/
pile[v[22]]=EX; pile[WZ1]=111; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(EX,111,jvj+2)*/
l2:DF=v[83];
if(x[EX]!=incon) goto l3;
x[EX]=DF=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:v[83]=V2;
goto l2;
l3:v[0]=jvj; v[22]-=4; pile[v[22]+3]=DF; v[102]=0;return;
l7:x[jvj+8]=448 ;z[jvj+8]=448;
l6:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+8,jvj+7)*/
pile[v[22]]=EX; pile[WZ1]=160; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(EX,160,jvj+7)*/
goto l4;
l8:x[jvj+8]=455 ;z[jvj+8]=455;
goto l6;
l9:x[jvj+8]=454 ;z[jvj+8]=454;
goto l6;
l10:V16=V11+1;
V12=bh[v[1]][V16];
x[jvj+8]=incon;
if((V12==83)) goto l7;
if((V12==84)) goto l9;
if((V12==65)) goto l8;
if((V12!=72)) goto l4;
x[jvj+8]=477 ;z[jvj+8]=477;
goto l6;
}
