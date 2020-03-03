#include "dx.h"
void LCONTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V89=0,V90=0,V7=0,V16=0,V87=0,V88=0,V40=0,V93=0,V94=0,V41=0,V95=0,V96=0,V43=0,V97=0,V98=0,V44=0,V99=0,V100=0,V31=0,V39=0,V91=0,V92=0,V64=0,V105=0,V106=0,V52=0,V62=0,V101=0,V102=0,V53=0,V63=0,V103=0,V104=0,V83=0,V109=0,V110=0,V84=0,V111=0,V112=0,V86=0,V113=0,V114=0,V75=0,V82=0,V107=0,V108=0,V50=0,V60=0,V59=0,V55=0,V46=0,V61=0,V8=0,DXX=0,V15=0,V65=0,V80=0,V67=0,V81=0,V19=0,V37=0,V21=0,V38=0;
int DZ;
int P,DY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
if(v[0]>99700) (*f[6])( );

DZ=pile[v[22]]; P=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V50)*/
V50=pile[WZ1]; 
V60=V50+1;
V59=bh[v[1]][V60];
if((V59!=123)) goto l11;
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+10; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(DZ,64,67,jvj+10)*/
if((x[jvj+10]==32)) goto l13;
pile[v[22]]=V60; pile[WZ1]=jvj+15; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V60,jvj+15,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
V37=V19+1;
pile[v[22]]=V37; pile[WZ1]=jvj+17; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V37,jvj+17,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
V38=V21+1;
pile[v[22]]=V38; pile[WZ1]=jvj+19; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V38,jvj+19,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+34)*/
pile[v[22]]=jvj+20; pile[WZ1]=160; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+20,160,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=111; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,jvj+18,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+36; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+16,jvj+36,P)*/
V40=bh[v[1]][V19];
if(V40==125) goto l2;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(41,4,V93,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
l2:V41=bh[v[1]][V37];
if(V41==40) goto l3;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V95; 
(*f[39])( );     /*SDX0(41,5,V95,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
l3:V43=bh[v[1]][V21];
if(V43==41) goto l4;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,6,V97,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; 
(*f[40])( );     /*SLG0(V98)*/
l4:V44=bh[v[1]][V38];
if(V44==32) goto l5;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(41,7,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; 
(*f[40])( );     /*SLG0(V100)*/
l5:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V31)*/
V31=pile[WZ1]; 
V39=bh[v[1]][V31];
if(V39==32) goto l15;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V91; 
(*f[39])( );     /*SDX0(41,3,V91,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
l15:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; v[102]=0;return;
l11:pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(DZ,64,67,jvj+1)*/
if((x[jvj+1]==32)) goto l12;
pile[v[22]]=V50; 
(*f[107])( );     /*CRC0(V50,V8)*/
V8=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(V50,64,67,jvj+5)*/
pile[v[22]]=V8; pile[WZ1]=jvj+6; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V8,jvj+6,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
V15=DXX+1;
pile[v[22]]=V15; pile[WZ1]=jvj+8; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V15,jvj+8,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+5; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+5,jvj+29)*/
pile[WZ3]=jvj+1; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+26)*/
pile[v[22]]=jvj+9; pile[WZ1]=160; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+9,160,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=111; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,jvj+7,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+29,jvj+28,P)*/
V17=bh[v[1]][V15];
if(V17==32) goto l1;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(41,2,V89,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; 
(*f[40])( );     /*SLG0(V90)*/
l1:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V7)*/
V7=pile[WZ1]; 
V16=bh[v[1]][V7];
if(V16==32) goto l15;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(41,1,V87,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
goto l15;
l12:pile[v[22]]=V50; 
(*f[107])( );     /*CRC0(V50,V55)*/
V55=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(V50,64,67,jvj+2)*/
pile[v[22]]=V55; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V55,jvj+3,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
V61=V46+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+24)*/
pile[WZ3]=32; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,32,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+4; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,jvj+4,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+24,jvj+23,P)*/
DY=V61;
V64=bh[v[1]][V46];
if(V64==41) goto l6;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=10; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(41,10,V105,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; 
(*f[40])( );     /*SLG0(V106)*/
l6:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V52)*/
V52=pile[WZ1]; 
V62=bh[v[1]][V52];
if(V62==32) goto l7;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=8; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(41,8,V101,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; 
(*f[40])( );     /*SLG0(V102)*/
l7:pile[v[22]]=V52; 
(*f[107])( );     /*CRC0(V52,V53)*/
V53=pile[WZ1]; 
V63=bh[v[1]][V53];
if(V63==40) goto l15;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=9; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(41,9,V103,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; 
(*f[40])( );     /*SLG0(V104)*/
goto l15;
l13:pile[v[22]]=V60; pile[WZ1]=jvj+11; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V60,jvj+11,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
V80=V65+1;
pile[v[22]]=V80; pile[WZ1]=jvj+13; 
(*f[79])( );if(v[102]) goto l14;     /*LEXP0(V80,jvj+13,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
V81=V67+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=32; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,32,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+14,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+32; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+12,jvj+32,P)*/
DY=V81;
V83=bh[v[1]][V65];
if(V83==125) goto l8;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=12; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(41,12,V109,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=V110; 
(*f[40])( );     /*SLG0(V110)*/
l8:V84=bh[v[1]][V80];
if(V84==40) goto l9;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=13; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,13,V111,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; 
(*f[40])( );     /*SLG0(V112)*/
l9:V86=bh[v[1]][V67];
if(V86==41) goto l10;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=14; pile[WZ2]=V113; 
(*f[39])( );     /*SDX0(41,14,V113,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l10:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V75)*/
V75=pile[WZ1]; 
V82=bh[v[1]][V75];
if(V82==32) goto l15;
pile[v[22]]=20; pile[WZ1]=10529; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10529,0,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=11; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(41,11,V107,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
goto l15;
l14:x[P]=DY=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
