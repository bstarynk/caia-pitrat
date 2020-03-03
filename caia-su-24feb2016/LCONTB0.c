#include "dx.h"
void LCONTB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V95=0,V96=0,V12=0,V97=0,V98=0,V8=0,V10=0,V93=0,V94=0,V26=0,V101=0,V102=0,V21=0,V25=0,V99=0,V100=0,V45=0,V105=0,V106=0,V46=0,V107=0,V108=0,V40=0,V44=0,V103=0,V104=0,V53=0,V57=0,V109=0,V110=0,V62=0,V65=0,V111=0,V112=0,V90=0,V115=0,V116=0,V91=0,V117=0,V118=0,V92=0,V119=0,V120=0,V85=0,V89=0,V113=0,V114=0,V69=0,V54=0,V22=0,V13=0,V41=0,V27=0,V29=0,V86=0,V70=0,V72=0,V74=0,V63=0,V9=0,FXX=0,DXX=0;
int DZ;
int DY,P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
if(v[0]>99700) (*f[6])( );

DZ=pile[v[22]]; P=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l16;     /*SMA0(DZ,64,67,jvj+1)*/
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+1,V69)*/
V69=pile[WZ2]; 
if((V69==0)) goto l9;
if((V69==1)) goto l10;
if((V69==2)) goto l11;
if((V69==3)) goto l12;
if((V69!=4)) goto l13;
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V86)*/
V86=pile[WZ1]; 
pile[v[22]]=V86; pile[WZ1]=jvj+14; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V86,jvj+14,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=V70; pile[WZ1]=jvj+16; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V70,jvj+16,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=V72; pile[WZ1]=jvj+18; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V72,jvj+18,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=V74; pile[WZ1]=jvj+20; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V74,jvj+20,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+42)*/
pile[v[22]]=jvj+21; pile[WZ1]=1324; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+21,1324,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+19; pile[WZ2]=160; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,jvj+19,160,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=111; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,jvj+17,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+44; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+15,jvj+44,P)*/
V90=bh[v[1]][V70];
if(V90==32) goto l6;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=12; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(41,12,V115,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=V116; 
(*f[40])( );     /*SLG0(V116)*/
l6:V91=bh[v[1]][V72];
if(V91==32) goto l7;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=13; pile[WZ2]=V117; 
(*f[39])( );     /*SDX0(41,13,V117,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; 
(*f[40])( );     /*SLG0(V118)*/
l7:V92=bh[v[1]][V74];
if(V92==32) goto l8;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=14; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(41,14,V119,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; 
(*f[40])( );     /*SLG0(V120)*/
l8:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V85)*/
V85=pile[WZ1]; 
V89=bh[v[1]][V85];
if(V89==32) goto l17;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=11; pile[WZ2]=V113; 
(*f[39])( );     /*SDX0(41,11,V113,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l17:v[0]=jvj; v[22]-=3; pile[v[22]+1]=DY; v[102]=0;return;
l9:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,DY)*/
DY=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+30)*/
pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=P; 
(*f[181])( );     /*QUADRI2(100,73,111,jvj+30,P)*/
goto l17;
l10:if((x[jvj+1]==536)) goto l14;
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V54)*/
V54=pile[WZ1]; 
pile[v[22]]=V54; pile[WZ1]=jvj+2; 
(*f[79])( );if(v[102]) goto l15;     /*LEXP0(V54,jvj+2,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+32; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+3,jvj+32,P)*/
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V53)*/
V53=pile[WZ1]; 
V57=bh[v[1]][V53];
if(V57==32) goto l17;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=9; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(41,9,V109,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=V110; 
(*f[40])( );     /*SLG0(V110)*/
goto l17;
l11:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V22)*/
V22=pile[WZ1]; 
pile[v[22]]=V22; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V22,jvj+4,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=V13; pile[WZ1]=jvj+6; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V13,jvj+6,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,jvj+7,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+35; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+5,jvj+35,P)*/
V26=bh[v[1]][V13];
if(V26==32) goto l3;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(41,5,V101,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; 
(*f[40])( );     /*SLG0(V102)*/
l3:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V21)*/
V21=pile[WZ1]; 
V25=bh[v[1]][V21];
if(V25==32) goto l17;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(41,4,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; 
(*f[40])( );     /*SLG0(V100)*/
goto l17;
l12:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V41)*/
V41=pile[WZ1]; 
pile[v[22]]=V41; pile[WZ1]=jvj+8; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V41,jvj+8,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=V27; pile[WZ1]=jvj+10; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V27,jvj+10,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=V29; pile[WZ1]=jvj+12; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V29,jvj+12,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+37)*/
pile[v[22]]=jvj+13; pile[WZ1]=160; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+13,160,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=111; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,jvj+11,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+39; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+9,jvj+39,P)*/
V45=bh[v[1]][V27];
if(V45==32) goto l4;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(41,7,V105,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; 
(*f[40])( );     /*SLG0(V106)*/
l4:V46=bh[v[1]][V29];
if(V46==32) goto l5;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=8; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(41,8,V107,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
l5:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V40)*/
V40=pile[WZ1]; 
V44=bh[v[1]][V40];
if(V44==32) goto l17;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(41,6,V103,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; 
(*f[40])( );     /*SLG0(V104)*/
goto l17;
l13:if((x[jvj+1]==536)) goto l14;
l15:if((x[jvj+1]!=49)) goto l16;
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V9)*/
V9=pile[WZ1]; 
pile[v[22]]=V9; pile[WZ1]=jvj+24; 
(*f[79])( );if(v[102]) goto l16;     /*LEXP0(V9,jvj+24,FXX)*/
FXX=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=FXX; pile[WZ1]=jvj+26; 
(*f[79])( );if(v[102]) goto l16;     /*LEXP0(FXX,jvj+26,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=DXX; pile[WZ1]=jvj+28; 
(*f[79])( );if(v[102]) goto l16;     /*LEXP0(DXX,jvj+28,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+55; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+55)*/
pile[WZ3]=46; pile[WZ4]=jvj+52; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=160; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,160,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+53,jvj+25,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+55,jvj+54,jvj+51)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=49; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,49,jvj+48)*/
pile[v[22]]=jvj+29; pile[WZ1]=160; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+29,160,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=111; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,jvj+27,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+51,jvj+50,P)*/
V11=bh[v[1]][FXX];
if(V11==32) goto l1;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V95; 
(*f[39])( );     /*SDX0(41,2,V95,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
l1:V12=bh[v[1]][DXX];
if(V12==32) goto l2;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,3,V97,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; 
(*f[40])( );     /*SLG0(V98)*/
l2:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V8)*/
V8=pile[WZ1]; 
V10=bh[v[1]][V8];
if(V10==32) goto l17;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(41,1,V93,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
goto l17;
l14:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V63)*/
V63=pile[WZ1]; 
pile[v[22]]=V63; pile[WZ1]=jvj+22; 
(*f[726])( );     /*LCONT0(V63,jvj+22,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+46; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+23,jvj+46,P)*/
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V62)*/
V62=pile[WZ1]; 
V65=bh[v[1]][V62];
if(V65==32) goto l17;
pile[v[22]]=20; pile[WZ1]=10570; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10570,0,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=10; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,10,V111,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; 
(*f[40])( );     /*SLG0(V112)*/
goto l17;
l16:DY=x[P]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
