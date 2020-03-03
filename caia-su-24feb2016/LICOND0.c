#include "dx.h"
void LICOND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V4=0,DY=0,V7=0,DZ=0,V12=0,K=0,V9=0,NR=0,RS=0,V13=0;
int DX;
int EC;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
if(v[0]>99700) (*f[6])( );

DX=pile[v[22]]; EC=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+31]=0 ;z[jvj+31]=0;
x[EC]=x[jvj+31] ;z[EC]=z[jvj+31];
V3=bh[v[1]][DX];
if(V3!=59&&V3!=44) goto l15;
V5=DX+1;
V4=bh[v[1]][V5];
x[jvj+32]=incon;
if((V4==78)) goto l1;
if((V4==83)) goto l2;
if((V4==84)) goto l3;
if((V4==68)) goto l4;
if((V4==69)) goto l5;
if((V4==67)) goto l6;
if((V4==81)) goto l7;
if((V4==65)) goto l8;
if((V4==80)) goto l9;
if((V4==77)) goto l10;
if((V4!=66)) goto l15;
x[jvj+32]=977 ;z[jvj+32]=977;
l11:x[jvj+14]=x[jvj+32] ;z[jvj+14]=z[jvj+32];
DY=V5;
V7=DY+1;
pile[v[22]]=V7; pile[WZ2]=jvj+1; 
(*f[716])( );if(v[102]) goto l15;     /*VALREL0(V7,DZ,jvj+1)*/
DZ=pile[WZ1]; 
if((V12=w[x[jvj+14]][1])==incon) goto l15;
if((V12==20)) goto l12;
if((V12==41)) goto l13;
if((V12!=96)) goto l15;
pile[v[22]]=DZ; 
(*f[131])( );     /*SMV0(DZ,RS,K)*/
RS=pile[WZ1]; K=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+23)*/
pile[WZ3]=jvj+14; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7886); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7886),jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=103; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+30,jvj+29,jvj+27)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=RS; pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,96,163,RS,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+5)*/
pile[v[22]]=EC; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(EC,jvj+5)*/
l14:V13=bh[v[1]][K];
if((V13!=44)) goto l15;
pile[v[22]]=EC; pile[WZ1]=K; 
(*f[844])( );     /*LICOND1(EC,K)*/
l15:v[0]=jvj; v[22]-=2; return;
l1:x[jvj+32]=683 ;z[jvj+32]=683;
goto l11;
l2:x[jvj+32]=493 ;z[jvj+32]=493;
goto l11;
l3:x[jvj+32]=936 ;z[jvj+32]=936;
goto l11;
l4:x[jvj+32]=967 ;z[jvj+32]=967;
goto l11;
l5:x[jvj+32]=876 ;z[jvj+32]=876;
goto l11;
l6:x[jvj+32]=935 ;z[jvj+32]=935;
goto l11;
l7:x[jvj+32]=860 ;z[jvj+32]=860;
goto l11;
l8:x[jvj+32]=1005 ;z[jvj+32]=1005;
goto l11;
l9:x[jvj+32]=1015 ;z[jvj+32]=1015;
goto l11;
l10:x[jvj+32]=695 ;z[jvj+32]=695;
goto l11;
l12:pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l15;     /*SMA0(DZ,64,67,jvj+2)*/
(*f[107])( );     /*CRC0(DZ,K)*/
K=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+6)*/
pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7886); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7886),jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=103; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+13,jvj+12,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+6,111,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+7,jvj+8,103,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+9,jvj+3)*/
pile[v[22]]=EC; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(EC,jvj+3)*/
goto l14;
l13:V9=DZ+1;
pile[v[22]]=V9; 
(*f[126])( );     /*LND2(V9,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+15)*/
pile[WZ3]=jvj+14; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7886); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7886),jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=103; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+22,jvj+21,jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NR; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,NR,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+4)*/
pile[v[22]]=EC; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(EC,jvj+4)*/
goto l14;
}
