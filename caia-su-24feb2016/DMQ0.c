#include "dx.h"
void DMQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,K=0,V5=0,V30=0,V31=0,V32=0,V35=0,V34=0,V9=0,V20=0,V18=0,V21=0,V26=0;
int X,M,NN;
int H;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=170;
x[jvj+1]=10648;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2164&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; M=pile[v[22]+1]; NN=pile[v[22]+2]; H=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[jvj+21]=x[jvj+12]=x[H]=incon;
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
pile[v[22]]=583; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(583,jvj+3,jvj+4)*/
pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(724,240,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l3;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+6,V3)*/
V3=pile[WZ2]; 
if((V3!=NN)) goto l2;
pile[v[22]]=109; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+6,jvj+7)*/
if((x[jvj+7]!=x[jvj+4])) goto l2;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+6,K)*/
K=pile[WZ2]; 
V5=x[jvj+6];
x[jvj+21]=x[jvj+6] ;z[jvj+21]=z[jvj+6];
pile[v[22]]=724; pile[WZ1]=240; pile[WZ2]=V5; 
(*f[134])( );     /*OTA0(724,240,V5)*/
l5:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,X,jvj+10)*/
pile[v[22]]=K; pile[WZ1]=510; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(K,510,jvj+24)*/
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=117; pile[WZ3]=NN; pile[WZ4]=jvj+24; pile[WZ5]=jvj+9; 
(*f[47])( );     /*QUADRI0(109,jvj+4,117,NN,jvj+24,jvj+9)*/
x[jvj+12]=x[jvj+9] ;z[jvj+12]=z[jvj+9];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,117,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[2205])( );     /*DMV0(jvj+9,jvj+10,jvj+11)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,X,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=499; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+9,499,V9)*/
l6:pile[v[22]]=240; pile[WZ1]=724; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(240,724,jvj+9)*/
pile[v[22]]=M; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(M,jvj+16)*/
pile[v[22]]=X; pile[WZ1]=jvj+17; 
(*f[378])( );     /*CPI0(X,jvj+17)*/
x[jvj+18]=incon;
pile[v[22]]=499; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(499,jvj+12,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=M; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(M,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+26)*/
pile[v[22]]=jvj+13; pile[WZ1]=120; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+13,120,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+26,jvj+25,jvj+18)*/
l7:pile[v[22]]=499; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(499,jvj+12,V20)*/
V20=pile[WZ2]; 
l9:if(x[jvj+18]==incon) goto l19;
l10:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+86)*/
pile[WZ3]=285; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,285,jvj+91)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-4712); pile[WZ4]=jvj+95; 
(*f[270])( );     /*QUADRI7(100,96,163,(-4712),jvj+95)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+93; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+93)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; pile[WZ2]=103; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+92,jvj+93,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+95,jvj+94,jvj+90)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+88; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+88)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; pile[WZ2]=103; pile[WZ3]=jvj+89; 
(*f[58])( );     /*TRI3(jvj+87,jvj+88,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+89,jvj+82)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+96)*/
pile[WZ3]=48; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+99)*/
pile[WZ3]=25; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+102)*/
pile[WZ3]=285; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,285,jvj+107)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-4713); pile[WZ4]=jvj+111; 
(*f[270])( );     /*QUADRI7(100,96,163,(-4713),jvj+111)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+109; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+109)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+108,jvj+109,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+111,jvj+110,jvj+106)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+104; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+104)*/
pile[v[22]]=jvj+102; pile[WZ1]=111; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,111,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=103; pile[WZ3]=jvj+105; 
(*f[58])( );     /*TRI3(jvj+103,jvj+104,103,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+106; pile[WZ4]=jvj+105; pile[WZ5]=jvj+100; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+106,jvj+105,jvj+100)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+112; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+112)*/
pile[WZ3]=285; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,285,jvj+117)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-4712); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,96,163,(-4712),jvj+121)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+119; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+119)*/
pile[v[22]]=jvj+117; pile[WZ1]=111; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(jvj+117,111,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+119; pile[WZ2]=103; pile[WZ3]=jvj+120; 
(*f[58])( );     /*TRI3(jvj+118,jvj+119,103,jvj+120)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+121; pile[WZ4]=jvj+120; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+121,jvj+120,jvj+116)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+114; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+114)*/
pile[v[22]]=jvj+112; pile[WZ1]=111; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,111,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+114; pile[WZ2]=103; pile[WZ3]=jvj+115; 
(*f[58])( );     /*TRI3(jvj+113,jvj+114,103,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+116; pile[WZ4]=jvj+115; pile[WZ5]=jvj+101; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+116,jvj+115,jvj+101)*/
pile[WZ2]=111; pile[WZ3]=jvj+99; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+99,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=107; pile[WZ2]=jvj+100; 
(*f[36])( );     /*PLUSC0(jvj+97,107,jvj+100)*/
pile[WZ2]=jvj+101; 
(*f[36])( );     /*PLUSC0(jvj+97,107,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+122; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+122)*/
pile[WZ3]=725; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,725,jvj+126)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+128; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+128)*/
pile[v[22]]=jvj+126; pile[WZ1]=111; pile[WZ2]=jvj+127; 
(*f[54])( );     /*TRI1(jvj+126,111,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+124; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+128,jvj+127,jvj+124)*/
pile[v[22]]=jvj+122; pile[WZ1]=111; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,111,jvj+123)*/
pile[v[22]]=jvj+124; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+125; 
(*f[298])( );     /*TRIENS1(jvj+124,(-20),jvj+123,107,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+98; 
(*f[58])( );     /*TRI3(jvj+125,22,100,jvj+98)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+96; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+96,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=107; pile[WZ2]=jvj+97; 
(*f[36])( );     /*PLUSC0(jvj+83,107,jvj+97)*/
pile[WZ2]=jvj+98; 
(*f[36])( );     /*PLUSC0(jvj+83,107,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+134)*/
pile[WZ3]=285; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,285,jvj+139)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-4712); pile[WZ4]=jvj+143; 
(*f[270])( );     /*QUADRI7(100,96,163,(-4712),jvj+143)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+141; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+141)*/
pile[v[22]]=jvj+139; pile[WZ1]=111; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,111,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+141; pile[WZ2]=103; pile[WZ3]=jvj+142; 
(*f[58])( );     /*TRI3(jvj+140,jvj+141,103,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+142; pile[WZ5]=jvj+138; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+143,jvj+142,jvj+138)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+136; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+136)*/
pile[v[22]]=jvj+134; pile[WZ1]=111; pile[WZ2]=jvj+135; 
(*f[54])( );     /*TRI1(jvj+134,111,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=jvj+136; pile[WZ2]=103; pile[WZ3]=jvj+137; 
(*f[58])( );     /*TRI3(jvj+135,jvj+136,103,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+138; pile[WZ4]=jvj+137; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+138,jvj+137,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+132; 
(*f[180])( );     /*TRIENS0(jvj+131,(-20),107,jvj+132)*/
pile[v[22]]=jvj+19; pile[WZ2]=jvj+132; pile[WZ3]=105; pile[WZ4]=jvj+133; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+132,105,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+129; 
(*f[58])( );     /*TRI3(jvj+133,42,100,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=(-20); pile[WZ2]=184; pile[WZ3]=jvj+130; 
(*f[180])( );     /*TRIENS0(jvj+129,(-20),184,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+130,47,100,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=229; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+144)*/
pile[WZ3]=25; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+152)*/
pile[WZ3]=285; pile[WZ4]=jvj+157; 
(*f[181])( );     /*QUADRI2(100,20,101,285,jvj+157)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=(-4712); pile[WZ4]=jvj+161; 
(*f[270])( );     /*QUADRI7(100,96,163,(-4712),jvj+161)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+159; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+159)*/
pile[v[22]]=jvj+157; pile[WZ1]=111; pile[WZ2]=jvj+158; 
(*f[54])( );     /*TRI1(jvj+157,111,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=jvj+159; pile[WZ2]=103; pile[WZ3]=jvj+160; 
(*f[58])( );     /*TRI3(jvj+158,jvj+159,103,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+161; pile[WZ4]=jvj+160; pile[WZ5]=jvj+156; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+161,jvj+160,jvj+156)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+154; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+154)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+154; pile[WZ2]=103; pile[WZ3]=jvj+155; 
(*f[58])( );     /*TRI3(jvj+153,jvj+154,103,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+156; pile[WZ4]=jvj+155; pile[WZ5]=jvj+148; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+156,jvj+155,jvj+148)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10814; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,20,101,10814,jvj+164)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+167; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+167)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-595); pile[WZ4]=jvj+165; 
(*f[270])( );     /*QUADRI7(100,21,140,(-595),jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=103; pile[WZ2]=jvj+166; 
(*f[54])( );     /*TRI1(jvj+165,103,jvj+166)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+167; pile[WZ4]=jvj+166; pile[WZ5]=jvj+162; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+167,jvj+166,jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+163; 
(*f[180])( );     /*TRIENS0(jvj+162,(-20),114,jvj+163)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+164; pile[WZ4]=jvj+163; pile[WZ5]=jvj+150; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+164,jvj+163,jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+149; 
(*f[180])( );     /*TRIENS0(jvj+148,(-20),107,jvj+149)*/
pile[v[22]]=jvj+150; pile[WZ2]=jvj+149; pile[WZ3]=105; pile[WZ4]=jvj+151; 
(*f[298])( );     /*TRIENS1(jvj+150,(-20),jvj+149,105,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+146; 
(*f[58])( );     /*TRI3(jvj+151,42,100,jvj+146)*/
pile[v[22]]=jvj+144; pile[WZ1]=337; pile[WZ2]=jvj+145; 
(*f[54])( );     /*TRI1(jvj+144,337,jvj+145)*/
pile[v[22]]=jvj+146; pile[WZ1]=(-20); pile[WZ3]=184; pile[WZ4]=jvj+147; 
(*f[298])( );     /*TRIENS1(jvj+146,(-20),jvj+145,184,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=jvj+85; 
(*f[58])( );     /*TRI3(jvj+147,47,100,jvj+85)*/
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(42,100,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=107; pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+82)*/
pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+83)*/
pile[WZ1]=105; pile[WZ2]=jvj+84; 
(*f[36])( );     /*PLUSC0(jvj+33,105,jvj+84)*/
pile[WZ2]=jvj+85; 
(*f[36])( );     /*PLUSC0(jvj+33,105,jvj+85)*/
pile[WZ1]=(-20); pile[WZ2]=184; pile[WZ3]=jvj+34; 
(*f[180])( );     /*TRIENS0(jvj+33,(-20),184,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=H; 
(*f[58])( );     /*TRI3(jvj+34,47,100,H)*/
pile[v[22]]=K; pile[WZ1]=510; pile[WZ2]=jvj+168; 
(*f[46])( );     /*TRI0(K,510,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=jvj+12; pile[WZ2]=218; pile[WZ3]=jvj+169; 
(*f[58])( );     /*TRI3(jvj+168,jvj+12,218,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=jvj+17; pile[WZ2]=132; pile[WZ3]=jvj+170; 
(*f[58])( );     /*TRI3(jvj+169,jvj+17,132,jvj+170)*/
pile[v[22]]=115; pile[WZ1]=H; pile[WZ2]=117; pile[WZ3]=NN; pile[WZ4]=jvj+170; pile[WZ5]=jvj+20; 
(*f[47])( );     /*QUADRI0(115,H,117,NN,jvj+170,jvj+20)*/
pile[v[22]]=jvj+3; pile[WZ1]=724; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+3,724,jvj+20)*/
l11:if(x[jvj+21]!=incon) goto l12;
l17:if(x[H]!=incon) goto l18;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l3:pile[v[22]]=1; pile[WZ1]=240; pile[WZ2]=413; 
(*f[1113])( );     /*INCM0(1,240,413,K)*/
K=pile[WZ3]; 
if((K<=950)) goto l4;
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(30,0,64,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=10648; 
(*f[42])( );     /*SRA1(135,V30,10648,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,K,V31,V32)*/
V32=pile[WZ3]; 
V35=75-V32;
pile[v[22]]=V35; pile[WZ1]=V32; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(V35,V32,64,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l4:if(x[jvj+4]!=incon) goto l5;
goto l16;
l8:pile[v[22]]=297; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(297,jvj+3,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[2206])( );if(v[102]) goto l9;     /*Z115Z0(jvj+14,V21)*/
V21=pile[WZ1]; 
if((V21!=1)) goto l9;
pile[v[22]]=M; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(M,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+29)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+41; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+41)*/
pile[WZ3]=123; pile[WZ4]=jvj+39; 
(*f[272])( );     /*QUADRI9(100,89,162,123,jvj+39)*/
pile[WZ3]=46; pile[WZ4]=jvj+35; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+35)*/
pile[WZ3]=75; pile[WZ4]=jvj+48; 
(*f[272])( );     /*QUADRI9(100,89,162,75,jvj+48)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+4; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+4,jvj+46)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=43; pile[WZ4]=jvj+42; 
(*f[272])( );     /*QUADRI9(100,89,162,43,jvj+42)*/
pile[WZ3]=68; pile[WZ4]=jvj+54; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+54)*/
pile[WZ3]=125; pile[WZ4]=jvj+52; 
(*f[272])( );     /*QUADRI9(100,89,162,125,jvj+52)*/
pile[WZ3]=46; pile[WZ4]=jvj+49; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=160; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,160,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+15; pile[WZ2]=120; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+50,jvj+15,120,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+54,jvj+53,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=160; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,160,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=120; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,120,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+45,jvj+46,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+48,jvj+47,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=160; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,160,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=120; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,120,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=103; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+41,jvj+40,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=120; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,120,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+29,jvj+28,jvj+18)*/
goto l10;
l12:if(x[jvj+12]!=incon) goto l13;
goto l17;
l13:pile[v[22]]=39; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(39,jvj+21,jvj+22)*/
pile[v[22]]=jvj+12; pile[WZ1]=39; 
(*f[35])( );     /*CHGC1(jvj+12,39,jvj+22)*/
l14:pile[v[22]]=331; pile[WZ1]=jvj+21; 
(*f[219])( );if(v[102]) goto l15;     /*FNDC2(331,jvj+21,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=331; pile[WZ2]=V26; 
(*f[69])( );     /*CHGC3(jvj+12,331,V26)*/
l15:pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+23)*/
if((x[jvj+23]==0)) goto l17;
pile[v[22]]=jvj+12; pile[WZ1]=107; 
(*f[34])( );     /*CHGC0(jvj+12,107,jvj+23)*/
goto l17;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l19:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+32)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+61; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+61)*/
pile[WZ3]=123; pile[WZ4]=jvj+59; 
(*f[272])( );     /*QUADRI9(100,89,162,123,jvj+59)*/
pile[WZ3]=46; pile[WZ4]=jvj+55; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+55)*/
pile[WZ3]=75; pile[WZ4]=jvj+68; 
(*f[272])( );     /*QUADRI9(100,89,162,75,jvj+68)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+4; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+4,jvj+66)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=43; pile[WZ4]=jvj+62; 
(*f[272])( );     /*QUADRI9(100,89,162,43,jvj+62)*/
pile[WZ3]=68; pile[WZ4]=jvj+75; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+75)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NN; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,NN,jvj+73)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+69; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+69)*/
pile[WZ3]=68; pile[WZ4]=jvj+81; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+81)*/
pile[WZ3]=125; pile[WZ4]=jvj+79; 
(*f[272])( );     /*QUADRI9(100,89,162,125,jvj+79)*/
pile[WZ3]=46; pile[WZ4]=jvj+76; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=160; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,160,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+16; pile[WZ2]=120; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+77,jvj+16,120,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; pile[WZ2]=103; pile[WZ3]=jvj+80; 
(*f[58])( );     /*TRI3(jvj+78,jvj+79,103,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+81; pile[WZ4]=jvj+80; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+81,jvj+80,jvj+71)*/
pile[v[22]]=jvj+69; pile[WZ1]=160; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,160,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=120; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,120,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=103; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,103,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+75,jvj+74,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=160; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,160,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=120; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+63,jvj+64,120,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+65,jvj+66,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+68,jvj+67,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=160; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,160,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=120; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,120,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; pile[WZ2]=103; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+58,jvj+59,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+61,jvj+60,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=120; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,120,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+32,jvj+31,jvj+18)*/
goto l10;
}
