#include "dx.h"
void TRADR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V76=0,V53=0,V66=0,V89=0,V100=0,V=0,V12=0,V41=0,V186=0,V185=0;
int BT,XX,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=126;
x[jvj+1]=10136;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1390&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BT=pile[v[22]]; XX=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[X] ;z[jvj+6]=z[X];
l5:pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==531)) goto l6;
if((x[jvj+7]==453)) goto l8;
if((x[jvj+7]==979)) goto l10;
if((x[jvj+7]==1027)) goto l12;
if((x[jvj+7]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+6,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+30,jvj+31)*/
if(x[jvj+31]!=614&&x[jvj+31]!=1162&&x[jvj+31]!=1282&&x[jvj+31]!=1283&&x[jvj+31]!=1284&&x[jvj+31]!=1285&&x[jvj+31]!=1036) goto l14;
pile[v[22]]=145; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(145,jvj+31,jvj+32)*/
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+33)*/
x[jvj+2]=0 ;z[jvj+2]=0;
l1:if((x[jvj+33]>0)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+34; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+34)*/
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+6,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+32; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+32,jvj+90)*/
pile[WZ3]=585; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,585,jvj+101)*/
pile[WZ3]=156; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,156,jvj+104)*/
pile[WZ3]=228; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,111,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+109; pile[WZ5]=jvj+107; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+109,jvj+107)*/
pile[v[22]]=jvj+104; pile[WZ1]=111; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+104,111,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+34; pile[WZ2]=107; pile[WZ3]=jvj+106; 
(*f[301])( );     /*TRI11(jvj+105,jvj+34,107,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+106; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+107,jvj+106,jvj+103)*/
pile[v[22]]=jvj+101; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,111,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+102,jvj+92)*/
pile[v[22]]=jvj+90; pile[WZ1]=111; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+90,111,jvj+91)*/
pile[v[22]]=jvj+92; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+93; 
(*f[298])( );     /*TRIENS1(jvj+92,(-20),jvj+91,107,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+93,22,100,jvj+74)*/
l30:if((V186=w[x[BT]][1])==incon) goto l29;
if((V186!=23)) goto l31;
V185=x[jvj+6];
pile[v[22]]=BT; pile[WZ1]=XX; pile[WZ2]=V185; 
(*f[134])( );     /*OTA0(BT,XX,V185)*/
pile[v[22]]=XX; pile[WZ1]=BT; pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(XX,BT,jvj+74)*/
l29:x[jvj+6]=x[jvj+74] ;z[jvj+6]=z[jvj+74];
goto l5;
l2:x[jvj+3]=s[x[jvj+33]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+33];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+3)*/
x[jvj+33]=t[x[jvj+33]];
goto l1;
l4:x[jvj+5]=s[x[jvj+42]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+42];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+42]=t[x[jvj+42]];
l3:if((x[jvj+42]>0)) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+43; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+43)*/
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+6,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+45)*/
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+6,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+46,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1273; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+97)*/
pile[WZ3]=585; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,585,jvj+114)*/
pile[WZ3]=156; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,156,jvj+117)*/
pile[WZ3]=228; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=111; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,111,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+122; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+122,jvj+120)*/
pile[v[22]]=jvj+117; pile[WZ1]=111; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(jvj+117,111,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+43; pile[WZ2]=107; pile[WZ3]=jvj+119; 
(*f[301])( );     /*TRI11(jvj+118,jvj+43,107,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+116)*/
pile[v[22]]=jvj+114; pile[WZ1]=111; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,111,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+116; pile[WZ4]=jvj+115; pile[WZ5]=jvj+99; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+116,jvj+115,jvj+99)*/
pile[v[22]]=jvj+97; pile[WZ1]=111; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,111,jvj+98)*/
pile[v[22]]=jvj+99; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+100; 
(*f[298])( );     /*TRIENS1(jvj+99,(-20),jvj+98,107,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+100,jvj+74)*/
goto l30;
l6:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+8,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[1608])( );     /*SANSVECT0(jvj+6,jvj+9)*/
if((x[jvj+9]==135)) goto l7;
l14:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+6,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]==981)) goto l15;
if((x[jvj+38]!=1286)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+42)*/
x[jvj+4]=0 ;z[jvj+4]=0;
goto l3;
l7:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+6,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=542; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,542,jvj+70)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V76; pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,96,163,V76,jvj+73)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+71,jvj+11,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+72,jvj+74)*/
goto l30;
l8:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+6,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+12,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+13; 
(*f[1608])( );     /*SANSVECT0(jvj+6,jvj+13)*/
if((x[jvj+13]==135)) goto l9;
goto l14;
l9:pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+6,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+6,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=419; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,419,jvj+76)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V53; pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,96,163,V53,jvj+79)*/
pile[v[22]]=jvj+15; pile[WZ1]=160; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+15,160,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; pile[WZ2]=111; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+75,jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+77,jvj+17,103,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+79,jvj+78,jvj+74)*/
goto l30;
l10:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+6,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+18,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+19; 
(*f[1608])( );     /*SANSVECT0(jvj+6,jvj+19)*/
if((x[jvj+19]==135)) goto l11;
goto l14;
l11:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+6,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+6,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=980; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,980,jvj+81)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V66; pile[WZ4]=jvj+84; 
(*f[270])( );     /*QUADRI7(100,96,163,V66,jvj+84)*/
pile[v[22]]=jvj+23; pile[WZ1]=160; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+23,160,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; pile[WZ2]=111; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+80,jvj+81,111,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+82,jvj+21,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+83,jvj+74)*/
goto l30;
l12:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+6,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+24,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=jvj+25; 
(*f[1608])( );     /*SANSVECT0(jvj+6,jvj+25)*/
if((x[jvj+25]==135)) goto l13;
goto l14;
l13:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+6,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+6,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=419; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,419,jvj+86)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V89; pile[WZ4]=jvj+89; 
(*f[270])( );     /*QUADRI7(100,96,163,V89,jvj+89)*/
pile[v[22]]=jvj+29; pile[WZ1]=160; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+29,160,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+86; pile[WZ2]=111; pile[WZ3]=jvj+87; 
(*f[58])( );     /*TRI3(jvj+85,jvj+86,111,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+88; 
(*f[58])( );     /*TRI3(jvj+87,jvj+27,103,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+89; pile[WZ4]=jvj+88; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+89,jvj+88,jvj+74)*/
goto l30;
l15:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+6,jvj+39)*/
pile[v[22]]=163; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+39,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+6,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+96; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+96)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=982; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,982,jvj+110)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V100; pile[WZ4]=jvj+113; 
(*f[270])( );     /*QUADRI7(100,96,163,V100,jvj+113)*/
pile[v[22]]=jvj+110; pile[WZ1]=111; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,111,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+112; 
(*f[58])( );     /*TRI3(jvj+111,jvj+41,103,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; pile[WZ5]=jvj+94; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+113,jvj+112,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=103; pile[WZ2]=jvj+95; 
(*f[54])( );     /*TRI1(jvj+94,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+96,jvj+95,jvj+74)*/
goto l30;
l16:pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+6,V)*/
V=pile[WZ2]; 
x[jvj+48]=vo[16];z[jvj+48]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(448,jvj+48,jvj+49)*/
x[jvj+123]=x[jvj+49] ;z[jvj+123]=z[jvj+49];
l17:if((x[jvj+123]<=0)) goto l19;
x[jvj+50]=s[x[jvj+123]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+123];
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=448)) goto l18;
pile[v[22]]=436; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,jvj+50,jvj+52)*/
pile[v[22]]=140; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+52,V12)*/
V12=pile[WZ2]; 
if((V!=V12)) goto l18;
pile[v[22]]=102; pile[WZ1]=jvj+50; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+50,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+53,jvj+54)*/
if((x[jvj+54]!=61)) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+50; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+50,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=128)) goto l18;
x[jvj+74]=x[jvj+53] ;z[jvj+74]=z[jvj+53];
goto l30;
l18:x[jvj+123]=t[x[jvj+123]];
goto l17;
l20:x[jvj+49]=t[x[jvj+49]];
l19:if((x[jvj+49]<=0)) goto l21;
x[jvj+57]=s[x[jvj+49]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+49];
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+57,jvj+58)*/
if((x[jvj+58]!=448)) goto l20;
pile[v[22]]=436; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(436,jvj+57,jvj+59)*/
pile[v[22]]=140; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+59,V41)*/
V41=pile[WZ2]; 
if((V!=V41)) goto l20;
pile[v[22]]=102; pile[WZ1]=jvj+57; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+57,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=128)) goto l20;
pile[v[22]]=111; pile[WZ1]=jvj+57; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+57,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+62,jvj+63)*/
if((x[jvj+63]!=128)) goto l20;
x[jvj+74]=x[jvj+60] ;z[jvj+74]=z[jvj+60];
goto l30;
l21:pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+6,jvj+64)*/
x[jvj+124]=w[x[jvj+64]][9];
l22:if((x[jvj+124]>0)) goto l23;
x[jvj+125]=w[x[jvj+64]][8];
l25:if((x[jvj+125]<=0)) goto l28;
x[jvj+67]=s[x[jvj+125]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+125];
pile[v[22]]=jvj+67; pile[WZ1]=jvj+6; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(jvj+67,jvj+6,jvj+68)*/
x[jvj+126]=x[jvj+68] ;z[jvj+126]=z[jvj+68];
l26:if((x[jvj+126]>0)) goto l27;
x[jvj+125]=t[x[jvj+125]];
goto l25;
l23:x[jvj+65]=s[x[jvj+124]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+124];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+6; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+65,jvj+6,jvj+66)*/
(*f[1390])( );     /*TRADR0(jvj+65,jvj+6,jvj+66)*/
l24:x[jvj+124]=t[x[jvj+124]];
goto l22;
l27:x[jvj+69]=s[x[jvj+126]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+126];
pile[v[22]]=jvj+67; pile[WZ1]=jvj+6; pile[WZ2]=jvj+69; 
(*f[1390])( );     /*TRADR0(jvj+67,jvj+6,jvj+69)*/
x[jvj+126]=t[x[jvj+126]];
goto l26;
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l31:pile[v[22]]=XX; pile[WZ1]=BT; pile[WZ2]=jvj+74; 
(*f[35])( );     /*CHGC1(XX,BT,jvj+74)*/
goto l29;
}
