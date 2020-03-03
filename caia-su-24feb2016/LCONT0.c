#include "dx.h"
void LCONT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DZ=0,V16=0,V111=0,V112=0,V17=0,V113=0,V114=0,V19=0,V115=0,V116=0,V20=0,V117=0,V118=0,V49=0,V48=0,V38=0,V67=0,V119=0,V120=0,V68=0,V121=0,V122=0,V103=0,V93=0,V94=0,V109=0,V125=0,V126=0,V71=0,V74=0,V70=0,V75=0,V77=0,V78=0,V60=0,V65=0,V54=0,V66=0,V88=0,V102=0,V107=0,V106=0,V105=0,V104=0,V24=0,V28=0,V30=0,V29=0,V52=0,V51=0,V39=0,V45=0,V47=0,V46=0,V35=0,V12=0,V11=0,DZZ=0,V14=0,DXX=0,V15=0,V79=0,V123=0,V124=0,V143=0,V27=0,V145=0,V41=0;
int DT;
int P,DY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
if(v[0]>99700) (*f[6])( );

DT=pile[v[22]]; P=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+27]=DY=incon;
pile[v[22]]=DT; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(DT,64,67,jvj+1)*/
pile[v[22]]=116; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(116,jvj+1,jvj+2)*/
if((x[jvj+2]!=337)) goto l1;
pile[v[22]]=DT; 
(*f[107])( );     /*CRC0(DT,DZ)*/
DZ=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+1; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+1,jvj+27)*/
l11:pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l20;     /*SMA0(DZ,64,67,jvj+5)*/
if((x[jvj+5]==255)) goto l12;
if((x[jvj+5]!=47)) goto l13;
(*f[107])( );     /*CRC0(DZ,V71)*/
V71=pile[WZ1]; 
V74=bh[v[1]][V71];
if((V74!=91)) goto l13;
pile[v[22]]=47; pile[WZ1]=100; pile[WZ2]=P; 
(*f[54])( );     /*TRI1(47,100,P)*/
pile[v[22]]=P; pile[WZ1]=V71; 
(*f[1107])( );if(v[102]) goto l26;     /*LCOPT0(P,V71,V70)*/
V70=pile[WZ2]; 
V75=V70+1;
DY=V75;
l26:if(x[jvj+27]!=incon) goto l27;
l28:if(DY==incon) goto l29;
l30:v[0]=jvj; v[22]-=3; pile[v[22]+2]=DY; return;
l1:DZ=DT;
goto l11;
l6:pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l21;     /*SMA0(DZ,64,67,jvj+3)*/
pile[v[22]]=116; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(116,jvj+3,jvj+4)*/
l7:V38=incon;
V49=DZ+1;
V48=bh[v[1]][V49];
if(V48==47||V48==37) goto l8;
V38=DZ;
l22:V52=V38+1;
V51=bh[v[1]][V52];
V145=V51;
if((V145>=97)) goto l38;
if((V145<65)) goto l36;
if((V145<=90)) goto l37;
l36:V41=134;
l23:if((V41==135)) goto l24;
l25:V12=DZ+1;
V11=bh[v[1]][V12];
if((V11!=123)) goto l32;
pile[v[22]]=V12; pile[WZ1]=jvj+21; 
(*f[79])( );if(v[102]) goto l32;     /*LEXP0(V12,jvj+21,DZZ)*/
DZZ=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
V14=DZZ+1;
pile[v[22]]=V14; pile[WZ1]=jvj+23; 
(*f[79])( );if(v[102]) goto l32;     /*LEXP0(V14,jvj+23,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
V15=DXX+1;
pile[v[22]]=V15; pile[WZ1]=jvj+25; 
(*f[79])( );if(v[102]) goto l32;     /*LEXP0(V15,jvj+25,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=38; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+41)*/
pile[v[22]]=jvj+26; pile[WZ1]=160; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+26,160,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=111; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+24; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+24,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+43; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+22,jvj+43,P)*/
V16=bh[v[1]][DZZ];
if(V16==125) goto l2;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(41,1,V111,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; 
(*f[40])( );     /*SLG0(V112)*/
l2:V17=bh[v[1]][V14];
if(V17==40) goto l3;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V113; 
(*f[39])( );     /*SDX0(41,2,V113,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l3:V19=bh[v[1]][DXX];
if(V19==41) goto l4;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(41,3,V115,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=V116; 
(*f[40])( );     /*SLG0(V116)*/
l4:V20=bh[v[1]][V15];
if(V20==61) goto l26;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V117; 
(*f[39])( );     /*SDX0(41,4,V117,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; 
(*f[40])( );     /*SLG0(V118)*/
goto l26;
l8:V38=V49;
goto l22;
l12:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,DY)*/
DY=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=255; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,255,jvj+28)*/
pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+28; pile[WZ4]=P; 
(*f[181])( );     /*QUADRI2(100,73,111,jvj+28,P)*/
goto l26;
l13:pile[v[22]]=39; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(39,jvj+5,jvj+10)*/
if((x[jvj+10]!=10529)) goto l14;
pile[v[22]]=DZ; pile[WZ1]=P; 
(*f[1108])( );if(v[102]) goto l14;     /*LCONTA0(DZ,P,DY)*/
DY=pile[WZ2]; 
goto l26;
l14:if(x[jvj+5]==33||x[jvj+5]==853||x[jvj+5]==1479) goto l15;
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V60)*/
V60=pile[WZ1]; 
V65=bh[v[1]][V60];
if((V65!=40)) goto l16;
pile[v[22]]=V60; pile[WZ1]=jvj+11; 
(*f[79])( );if(v[102]) goto l16;     /*LEXP0(V60,jvj+11,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
V66=V54+1;
pile[v[22]]=V66; pile[WZ1]=jvj+13; 
(*f[79])( );if(v[102]) goto l16;     /*LEXP0(V66,jvj+13,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+5; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+5,jvj+34)*/
pile[WZ3]=38; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+31)*/
pile[v[22]]=jvj+14; pile[WZ1]=160; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+14,160,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=111; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,jvj+12,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+34,jvj+33,P)*/
V67=bh[v[1]][V54];
if(V67==41) goto l9;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(41,5,V119,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; 
(*f[40])( );     /*SLG0(V120)*/
l9:V68=bh[v[1]][V66];
if(V68==61) goto l26;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V121; 
(*f[39])( );     /*SDX0(41,6,V121,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; 
(*f[40])( );     /*SLG0(V122)*/
goto l26;
l15:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V77)*/
V77=pile[WZ1]; 
V78=V77+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+5; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+5,jvj+29)*/
pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=P; 
(*f[181])( );     /*QUADRI2(100,73,111,jvj+29,P)*/
pile[v[22]]=V78; pile[WZ1]=P; 
(*f[664])( );if(v[102]) goto l26;     /*LPAT1(V78,P,DY)*/
DY=pile[WZ2]; 
goto l26;
l16:pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+5,V88)*/
V88=pile[WZ2]; 
if((V88<0)) goto l18;
if((V88>4)) goto l18;
pile[v[22]]=39; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(39,jvj+5,jvj+6)*/
l18:if((x[jvj+5]!=722)) goto l20;
pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V102)*/
V102=pile[WZ1]; 
V107=V102+1;
pile[v[22]]=V107; pile[WZ1]=jvj+15; 
(*f[79])( );if(v[102]) goto l20;     /*LEXP0(V107,jvj+15,V93)*/
V93=pile[WZ2]; 
x[jvj+8]=incon;
V103=bh[v[1]][V93];
if((V103!=44)) goto l31;
pile[v[22]]=V93; pile[WZ1]=jvj+7; 
(*f[79])( );if(v[102]) goto l31;     /*LEXP0(V93,jvj+7,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=117; pile[WZ3]=V94; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(102,jvj+7,117,V94,jvj+8)*/
l19:pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+8,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
V105=V106+1;
V104=V105+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=722; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,722,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+36; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+16,jvj+36,P)*/
pile[v[22]]=V104; pile[WZ1]=P; 
(*f[664])( );if(v[102]) goto l26;     /*LPAT1(V104,P,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+8,jvj+9)*/
pile[v[22]]=P; pile[WZ1]=103; 
(*f[35])( );     /*CHGC1(P,103,jvj+9)*/
l10:V109=bh[v[1]][V106];
if(V109==93) goto l26;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V125; 
(*f[39])( );     /*SDX0(41,7,V125,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=V126; 
(*f[40])( );     /*SLG0(V126)*/
goto l26;
l17:pile[v[22]]=DZ; pile[WZ2]=P; 
(*f[1109])( );if(v[102]) goto l18;     /*LCONTB0(DZ,DY,P)*/
DY=pile[WZ1]; 
goto l26;
l20:pile[v[22]]=DZ; 
(*f[107])( );     /*CRC0(DZ,V24)*/
V24=pile[WZ1]; 
V28=bh[v[1]][V24];
if((V28!=32)) goto l7;
V30=DZ+1;
V29=bh[v[1]][V30];
if((V29==36)) goto l6;
V143=V29;
if((V143>=97)) goto l35;
if((V143<65)) goto l33;
if((V143<=90)) goto l34;
l33:V27=134;
l5:if((V27==135)) goto l6;
goto l7;
l21:pile[v[22]]=DZ; pile[WZ1]=P; 
(*f[715])( );if(v[102]) goto l7;     /*LBLOC0(DZ,P,DY)*/
DY=pile[WZ2]; 
goto l26;
l24:pile[v[22]]=V38; 
(*f[107])( );     /*CRC0(V38,V39)*/
V39=pile[WZ1]; 
V45=bh[v[1]][V39];
if((V45!=58)) goto l25;
V47=V39+1;
V46=bh[v[1]][V47];
if((V46!=61)) goto l25;
pile[v[22]]=V47; pile[WZ1]=jvj+17; 
(*f[79])( );if(v[102]) goto l25;     /*LEXP0(V47,jvj+17,DY)*/
DY=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=DZ; pile[WZ1]=jvj+19; 
(*f[79])( );if(v[102]) goto l32;     /*LEXP0(DZ,jvj+19,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+38)*/
pile[v[22]]=jvj+20; pile[WZ1]=436; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+20,436,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=111; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+39; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+18,jvj+39,P)*/
goto l26;
l27:pile[v[22]]=P; pile[WZ1]=337; pile[WZ2]=jvj+27; 
(*f[35])( );     /*CHGC1(P,337,jvj+27)*/
goto l28;
l29:DY=DT;
V79=bh[v[1]][DT];
if(V79==94) goto l30;
pile[v[22]]=20; pile[WZ1]=10325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10325,0,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=8; pile[WZ2]=V123; 
(*f[39])( );     /*SDX0(41,8,V123,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=V124; 
(*f[40])( );     /*SLG0(V124)*/
goto l30;
l31:pile[v[22]]=V93; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(V93,117,jvj+8)*/
goto l19;
l32:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=125; pile[WZ4]=P; 
(*f[181])( );     /*QUADRI2(100,20,101,125,P)*/
goto l26;
l34:V27=135;
goto l5;
l35:if((V143<=122)) goto l34;
goto l33;
l37:V41=135;
goto l23;
l38:if((V145<=122)) goto l37;
goto l36;
}
