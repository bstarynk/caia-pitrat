#include "dx.h"
void ALCTS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DN=0,V=0,DP=0,V6=0,V25=0,V26=0,V7=0,V27=0,V28=0,V8=0,V29=0,V30=0,V15=0,V10=0,V2=0,V16=0,E=0,DXX=0,V20=0,V21=0,V4=0,DQ=0,F=0,DT=0,V5=0,G=0;
int I,AL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=10012;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==392&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; AL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=incon;
pile[v[22]]=I; 
(*f[107])( );     /*CRC0(I,DN)*/
DN=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(I,64,67,jvj+2)*/
l1:pile[v[22]]=DN; 
(*f[131])( );     /*SMV0(DN,V,DP)*/
V=pile[WZ1]; DP=pile[WZ2]; 
if(x[jvj+2]!=incon) goto l4;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l4:if((x[jvj+2]!=128)) goto l5;
V15=bh[v[1]][DP];
if((V15==32)) goto l13;
if((V15!=61)) goto l5;
pile[v[22]]=DP; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l5;     /*LEXP0(DP,jvj+4,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=128; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=436; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,436,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=111; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+29; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+5,jvj+29,jvj+6)*/
pile[v[22]]=AL; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+6)*/
l5:V2=bh[v[1]][DP];
if((V2==32)) goto l6;
if((V2!=61)) goto l7;
if(x[jvj+2]!=451&&x[jvj+2]!=570) goto l7;
pile[v[22]]=DP; pile[WZ1]=jvj+8; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(DP,jvj+8,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+35)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=436; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,436,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=111; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+34,jvj+35,111,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+36; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+9,jvj+36,jvj+10)*/
pile[v[22]]=AL; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+10)*/
l7:if((x[jvj+2]!=531)) goto l8;
pile[v[22]]=DP; 
(*f[131])( );     /*SMV0(DP,E,DXX)*/
E=pile[WZ1]; DXX=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=E; pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,E,jvj+20)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=531; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,531,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=436; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,436,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=111; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+22,jvj+21,jvj+11)*/
pile[v[22]]=AL; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+11)*/
l8:if(x[jvj+2]!=979&&x[jvj+2]!=1027) goto l10;
pile[v[22]]=DP; 
(*f[131])( );     /*SMV0(DP,V20,V21)*/
V20=pile[WZ1]; V21=pile[WZ2]; 
x[jvj+12]=incon;
if((x[jvj+2]==1027)) goto l12;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+12)*/
l9:pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V20; pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,V20,jvj+44)*/
pile[WZ3]=(-6610); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6610),jvj+42)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=436; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,436,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+13; pile[WZ2]=160; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,jvj+13,160,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=111; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+44,jvj+43,jvj+14)*/
pile[v[22]]=AL; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+14)*/
l10:if((x[jvj+2]!=453)) goto l11;
pile[v[22]]=DP; 
(*f[131])( );     /*SMV0(DP,V4,DQ)*/
V4=pile[WZ1]; DQ=pile[WZ2]; 
pile[v[22]]=DQ; 
(*f[131])( );     /*SMV0(DQ,F,DT)*/
F=pile[WZ1]; DT=pile[WZ2]; 
V5=DT+1;
pile[v[22]]=V5; 
(*f[258])( );     /*SMV1(V5,G)*/
G=pile[WZ1]; 
V6=bh[v[1]][DQ];
if(V6==42) goto l2;
pile[v[22]]=20; pile[WZ1]=10012; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10012,0,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,1,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
l2:V7=bh[v[1]][DT];
if(V7==45) goto l3;
pile[v[22]]=20; pile[WZ1]=10012; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10012,0,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,2,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
l3:V8=bh[v[1]][V5];
if(V8==62) goto l14;
pile[v[22]]=20; pile[WZ1]=10012; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10012,0,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(41,3,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
l14:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V4; pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,V4,jvj+53)*/
pile[WZ3]=F; pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,F,jvj+51)*/
pile[WZ3]=G; pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,G,jvj+47)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=453; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,453,jvj+49)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=436; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,436,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=160; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,160,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=111; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+50,jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+53,jvj+52,jvj+15)*/
pile[v[22]]=AL; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+15)*/
goto l11;
l6:if(x[jvj+2]!=451&&x[jvj+2]!=570) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=436; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,436,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,448,111,jvj+32,jvj+31,jvj+7)*/
pile[v[22]]=AL; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+7)*/
goto l7;
l12:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=89; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,89,jvj+12)*/
goto l9;
l13:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=128; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=436; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,436,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=111; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,448,111,jvj+25,jvj+24,jvj+3)*/
pile[v[22]]=AL; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+3)*/
goto l5;
}
