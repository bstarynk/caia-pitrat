#include "dx.h"
void CRESIMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V17=0,V14=0;
int K,KR,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=261;
x[jvj+1]=10141;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==415&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; KR=pile[v[22]+1]; N=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=449; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(449,N,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+30,jvj+27)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+39)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=722; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,722,jvj+37)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+46; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+46)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3141); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3141),jvj+44)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+40; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+40)*/
pile[WZ3]=68; pile[WZ4]=jvj+53; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+53)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+51)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+47; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+47)*/
pile[WZ3]=68; pile[WZ4]=jvj+58; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3188); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3188),jvj+56)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+54; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=160; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,160,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+58,jvj+57,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=160; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,160,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=120; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,120,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+50,jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+53,jvj+52,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=160; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,160,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=120; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,120,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+46,jvj+45,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=120; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,120,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=111; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+39,jvj+38,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+26; 
(*f[180])( );     /*TRIENS0(jvj+25,(-20),105,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+26,42,100,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+28)*/
pile[v[22]]=jvj+5; pile[WZ1]=184; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+5,184,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+70)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=722; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,722,jvj+68)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+77; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+77)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3141); pile[WZ4]=jvj+75; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3141),jvj+75)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+71; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+71)*/
pile[WZ3]=68; pile[WZ4]=jvj+84; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+84)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+82)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+78; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+78)*/
pile[WZ3]=68; pile[WZ4]=jvj+91; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+91)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3188); pile[WZ4]=jvj+89; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3188),jvj+89)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+85; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+85)*/
pile[WZ3]=68; pile[WZ4]=jvj+96; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+96)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+94)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+92; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=160; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,160,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; pile[WZ2]=103; pile[WZ3]=jvj+95; 
(*f[58])( );     /*TRI3(jvj+93,jvj+94,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+96,jvj+95,jvj+87)*/
pile[v[22]]=jvj+85; pile[WZ1]=160; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,160,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; pile[WZ2]=120; pile[WZ3]=jvj+88; 
(*f[58])( );     /*TRI3(jvj+86,jvj+87,120,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=103; pile[WZ3]=jvj+90; 
(*f[58])( );     /*TRI3(jvj+88,jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+91,jvj+90,jvj+80)*/
pile[v[22]]=jvj+78; pile[WZ1]=160; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,160,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; pile[WZ2]=120; pile[WZ3]=jvj+81; 
(*f[58])( );     /*TRI3(jvj+79,jvj+80,120,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+81,jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+84,jvj+83,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=160; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,160,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=120; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,120,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=103; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,103,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+77,jvj+76,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=120; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,120,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=111; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,111,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+70,jvj+69,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+60; 
(*f[180])( );     /*TRIENS0(jvj+59,(-20),107,jvj+60)*/
pile[v[22]]=jvj+61; pile[WZ2]=jvj+60; pile[WZ3]=105; pile[WZ4]=jvj+62; 
(*f[298])( );     /*TRIENS1(jvj+61,(-20),jvj+60,105,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+62,42,100,jvj+7)*/
pile[v[22]]=jvj+5; pile[WZ1]=184; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+5,184,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+101)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+103; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+103)*/
pile[v[22]]=jvj+101; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,111,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=jvj+97; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+102,jvj+97)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+108; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+108)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=722; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,722,jvj+106)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+115; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+115)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3141); pile[WZ4]=jvj+113; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3141),jvj+113)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+109; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+109)*/
pile[WZ3]=68; pile[WZ4]=jvj+122; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+122)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+120; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+120)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+116; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+116)*/
pile[WZ3]=68; pile[WZ4]=jvj+129; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+129)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3188); pile[WZ4]=jvj+127; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3188),jvj+127)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+123; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+123)*/
pile[WZ3]=68; pile[WZ4]=jvj+134; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+134)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+132)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+130; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=160; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,160,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=jvj+132; pile[WZ2]=103; pile[WZ3]=jvj+133; 
(*f[58])( );     /*TRI3(jvj+131,jvj+132,103,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+134; pile[WZ4]=jvj+133; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+134,jvj+133,jvj+125)*/
pile[v[22]]=jvj+123; pile[WZ1]=160; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(jvj+123,160,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; pile[WZ2]=120; pile[WZ3]=jvj+126; 
(*f[58])( );     /*TRI3(jvj+124,jvj+125,120,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; pile[WZ2]=103; pile[WZ3]=jvj+128; 
(*f[58])( );     /*TRI3(jvj+126,jvj+127,103,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+129,jvj+128,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=160; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,160,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=120; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,120,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; pile[WZ2]=103; pile[WZ3]=jvj+121; 
(*f[58])( );     /*TRI3(jvj+119,jvj+120,103,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+122; pile[WZ4]=jvj+121; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+122,jvj+121,jvj+111)*/
pile[v[22]]=jvj+109; pile[WZ1]=160; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,160,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=jvj+111; pile[WZ2]=120; pile[WZ3]=jvj+112; 
(*f[58])( );     /*TRI3(jvj+110,jvj+111,120,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; pile[WZ2]=103; pile[WZ3]=jvj+114; 
(*f[58])( );     /*TRI3(jvj+112,jvj+113,103,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+115,jvj+114,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=120; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+104,120,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; pile[WZ2]=111; pile[WZ3]=jvj+107; 
(*f[58])( );     /*TRI3(jvj+105,jvj+106,111,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+108; pile[WZ4]=jvj+107; pile[WZ5]=jvj+99; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+108,jvj+107,jvj+99)*/
pile[v[22]]=jvj+97; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+98; 
(*f[180])( );     /*TRIENS0(jvj+97,(-20),107,jvj+98)*/
pile[v[22]]=jvj+99; pile[WZ2]=jvj+98; pile[WZ3]=105; pile[WZ4]=jvj+100; 
(*f[298])( );     /*TRIENS1(jvj+99,(-20),jvj+98,105,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+100,42,100,jvj+8)*/
pile[v[22]]=jvj+5; pile[WZ1]=184; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+5,184,jvj+8)*/
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(218,N,jvj+9)*/
pile[v[22]]=159; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,jvj+9,jvj+10)*/
l4:if((x[jvj+10]<=0)) goto l9;
x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=242; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(242,jvj+2,jvj+4)*/
l3:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+2,V17)*/
V17=pile[WZ2]; 
l2:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+2,V2)*/
V2=pile[WZ2]; 
l5:x[jvj+10]=t[x[jvj+10]];
goto l4;
l1:pile[v[22]]=242; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(242,jvj+2,jvj+3)*/
goto l5;
l6:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+2,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+2,jvj+11)*/
pile[v[22]]=109; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+2,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+141)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+143; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+143)*/
pile[v[22]]=jvj+141; pile[WZ1]=111; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,111,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+142; pile[WZ5]=jvj+135; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+143,jvj+142,jvj+135)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+144)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+148; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+148)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+11; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+11,jvj+146)*/
pile[v[22]]=jvj+144; pile[WZ1]=111; pile[WZ2]=jvj+145; 
(*f[54])( );     /*TRI1(jvj+144,111,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=jvj+146; pile[WZ2]=103; pile[WZ3]=jvj+147; 
(*f[58])( );     /*TRI3(jvj+145,jvj+146,103,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+148; pile[WZ4]=jvj+147; pile[WZ5]=jvj+136; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+148,jvj+147,jvj+136)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+149; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+149)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+153; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+153)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=jvj+151; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,jvj+151)*/
pile[v[22]]=jvj+149; pile[WZ1]=111; pile[WZ2]=jvj+150; 
(*f[54])( );     /*TRI1(jvj+149,111,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=jvj+151; pile[WZ2]=103; pile[WZ3]=jvj+152; 
(*f[58])( );     /*TRI3(jvj+150,jvj+151,103,jvj+152)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+153; pile[WZ4]=jvj+152; pile[WZ5]=jvj+137; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+153,jvj+152,jvj+137)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+156; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+156)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3188); pile[WZ4]=jvj+161; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3188),jvj+161)*/
pile[WZ3]=(-3823); pile[WZ4]=jvj+159; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3823),jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=103; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+159,103,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+161; pile[WZ4]=jvj+160; pile[WZ5]=jvj+154; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+161,jvj+160,jvj+154)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4015); pile[WZ4]=jvj+164; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4015),jvj+164)*/
pile[WZ3]=(-3822); pile[WZ4]=jvj+162; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=103; pile[WZ2]=jvj+163; 
(*f[54])( );     /*TRI1(jvj+162,103,jvj+163)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+164; pile[WZ4]=jvj+163; pile[WZ5]=jvj+157; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+164,jvj+163,jvj+157)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5320); pile[WZ4]=jvj+167; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5320),jvj+167)*/
pile[WZ3]=(-3840); pile[WZ4]=jvj+165; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3840),jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=103; pile[WZ2]=jvj+166; 
(*f[54])( );     /*TRI1(jvj+165,103,jvj+166)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+167; pile[WZ4]=jvj+166; pile[WZ5]=jvj+158; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+167,jvj+166,jvj+158)*/
pile[v[22]]=jvj+154; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+155; 
(*f[180])( );     /*TRIENS0(jvj+154,(-20),114,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+156; pile[WZ4]=jvj+155; pile[WZ5]=jvj+138; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+156,jvj+155,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=113; pile[WZ2]=jvj+157; 
(*f[36])( );     /*PLUSC0(jvj+138,113,jvj+157)*/
pile[WZ2]=jvj+158; 
(*f[36])( );     /*PLUSC0(jvj+138,113,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4015); pile[WZ4]=jvj+172; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4015),jvj+172)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+170)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2733); pile[WZ4]=jvj+168; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2733),jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=436; pile[WZ2]=jvj+169; 
(*f[54])( );     /*TRI1(jvj+168,436,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=jvj+170; pile[WZ2]=111; pile[WZ3]=jvj+171; 
(*f[58])( );     /*TRI3(jvj+169,jvj+170,111,jvj+171)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+172; pile[WZ4]=jvj+171; pile[WZ5]=jvj+139; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+172,jvj+171,jvj+139)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5320); pile[WZ4]=jvj+177; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5320),jvj+177)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+175)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3141); pile[WZ4]=jvj+173; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3141),jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=436; pile[WZ2]=jvj+174; 
(*f[54])( );     /*TRI1(jvj+173,436,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=jvj+175; pile[WZ2]=111; pile[WZ3]=jvj+176; 
(*f[58])( );     /*TRI3(jvj+174,jvj+175,111,jvj+176)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+177; pile[WZ4]=jvj+176; pile[WZ5]=jvj+140; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+177,jvj+176,jvj+140)*/
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(42,100,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+135; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+135)*/
pile[WZ2]=jvj+136; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+136)*/
pile[WZ2]=jvj+137; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+137)*/
pile[WZ1]=105; pile[WZ2]=jvj+138; 
(*f[36])( );     /*PLUSC0(jvj+13,105,jvj+138)*/
pile[WZ2]=jvj+139; 
(*f[36])( );     /*PLUSC0(jvj+13,105,jvj+139)*/
pile[WZ2]=jvj+140; 
(*f[36])( );     /*PLUSC0(jvj+13,105,jvj+140)*/
pile[v[22]]=jvj+5; pile[WZ1]=184; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+5,184,jvj+13)*/
goto l3;
l7:pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+2,jvj+14)*/
pile[v[22]]=242; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(242,jvj+2,jvj+15)*/
pile[v[22]]=109; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+2,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+184)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+186; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+186)*/
pile[v[22]]=jvj+184; pile[WZ1]=111; pile[WZ2]=jvj+185; 
(*f[54])( );     /*TRI1(jvj+184,111,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+186; pile[WZ4]=jvj+185; pile[WZ5]=jvj+178; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+186,jvj+185,jvj+178)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+187)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+191; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+191)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+14; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+189)*/
pile[v[22]]=jvj+187; pile[WZ1]=111; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+187,111,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=jvj+189; pile[WZ2]=103; pile[WZ3]=jvj+190; 
(*f[58])( );     /*TRI3(jvj+188,jvj+189,103,jvj+190)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+191; pile[WZ4]=jvj+190; pile[WZ5]=jvj+179; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+191,jvj+190,jvj+179)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+192)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+196; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+196)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+15; pile[WZ4]=jvj+194; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+15,jvj+194)*/
pile[v[22]]=jvj+192; pile[WZ1]=111; pile[WZ2]=jvj+193; 
(*f[54])( );     /*TRI1(jvj+192,111,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=jvj+194; pile[WZ2]=103; pile[WZ3]=jvj+195; 
(*f[58])( );     /*TRI3(jvj+193,jvj+194,103,jvj+195)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+196; pile[WZ4]=jvj+195; pile[WZ5]=jvj+180; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+196,jvj+195,jvj+180)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+16; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+16,jvj+199)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3188); pile[WZ4]=jvj+204; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3188),jvj+204)*/
pile[WZ3]=(-3823); pile[WZ4]=jvj+202; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3823),jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=103; pile[WZ2]=jvj+203; 
(*f[54])( );     /*TRI1(jvj+202,103,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+204; pile[WZ4]=jvj+203; pile[WZ5]=jvj+197; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+204,jvj+203,jvj+197)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4015); pile[WZ4]=jvj+207; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4015),jvj+207)*/
pile[WZ3]=(-3822); pile[WZ4]=jvj+205; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=103; pile[WZ2]=jvj+206; 
(*f[54])( );     /*TRI1(jvj+205,103,jvj+206)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+207; pile[WZ4]=jvj+206; pile[WZ5]=jvj+200; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+207,jvj+206,jvj+200)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5320); pile[WZ4]=jvj+210; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5320),jvj+210)*/
pile[WZ3]=(-3840); pile[WZ4]=jvj+208; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3840),jvj+208)*/
pile[v[22]]=jvj+208; pile[WZ1]=103; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,103,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+210; pile[WZ4]=jvj+209; pile[WZ5]=jvj+201; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+210,jvj+209,jvj+201)*/
pile[v[22]]=jvj+197; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+198; 
(*f[180])( );     /*TRIENS0(jvj+197,(-20),114,jvj+198)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+199; pile[WZ4]=jvj+198; pile[WZ5]=jvj+181; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+199,jvj+198,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=113; pile[WZ2]=jvj+200; 
(*f[36])( );     /*PLUSC0(jvj+181,113,jvj+200)*/
pile[WZ2]=jvj+201; 
(*f[36])( );     /*PLUSC0(jvj+181,113,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4015); pile[WZ4]=jvj+215; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4015),jvj+215)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+213)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2733); pile[WZ4]=jvj+211; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2733),jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=436; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,436,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=jvj+213; pile[WZ2]=111; pile[WZ3]=jvj+214; 
(*f[58])( );     /*TRI3(jvj+212,jvj+213,111,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+215; pile[WZ4]=jvj+214; pile[WZ5]=jvj+182; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+215,jvj+214,jvj+182)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5320); pile[WZ4]=jvj+220; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5320),jvj+220)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+218)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3141); pile[WZ4]=jvj+216; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3141),jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=436; pile[WZ2]=jvj+217; 
(*f[54])( );     /*TRI1(jvj+216,436,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=jvj+218; pile[WZ2]=111; pile[WZ3]=jvj+219; 
(*f[58])( );     /*TRI3(jvj+217,jvj+218,111,jvj+219)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+220; pile[WZ4]=jvj+219; pile[WZ5]=jvj+183; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+220,jvj+219,jvj+183)*/
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(42,100,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=107; pile[WZ2]=jvj+178; 
(*f[36])( );     /*PLUSC0(jvj+17,107,jvj+178)*/
pile[WZ2]=jvj+179; 
(*f[36])( );     /*PLUSC0(jvj+17,107,jvj+179)*/
pile[WZ2]=jvj+180; 
(*f[36])( );     /*PLUSC0(jvj+17,107,jvj+180)*/
pile[WZ1]=105; pile[WZ2]=jvj+181; 
(*f[36])( );     /*PLUSC0(jvj+17,105,jvj+181)*/
pile[WZ2]=jvj+182; 
(*f[36])( );     /*PLUSC0(jvj+17,105,jvj+182)*/
pile[WZ2]=jvj+183; 
(*f[36])( );     /*PLUSC0(jvj+17,105,jvj+183)*/
pile[v[22]]=jvj+5; pile[WZ1]=184; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+5,184,jvj+17)*/
goto l2;
l8:pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+2,jvj+18)*/
pile[v[22]]=109; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+2,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+227)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+229; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+229)*/
pile[v[22]]=jvj+227; pile[WZ1]=111; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+227,111,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+229; pile[WZ4]=jvj+228; pile[WZ5]=jvj+221; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+229,jvj+228,jvj+221)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+230)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+232; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+232)*/
pile[v[22]]=jvj+230; pile[WZ1]=111; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,111,jvj+231)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+232; pile[WZ4]=jvj+231; pile[WZ5]=jvj+222; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+232,jvj+231,jvj+222)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+233)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+237; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+237)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+18; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+18,jvj+235)*/
pile[v[22]]=jvj+233; pile[WZ1]=111; pile[WZ2]=jvj+234; 
(*f[54])( );     /*TRI1(jvj+233,111,jvj+234)*/
pile[v[22]]=jvj+234; pile[WZ1]=jvj+235; pile[WZ2]=103; pile[WZ3]=jvj+236; 
(*f[58])( );     /*TRI3(jvj+234,jvj+235,103,jvj+236)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+237; pile[WZ4]=jvj+236; pile[WZ5]=jvj+223; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+237,jvj+236,jvj+223)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+240)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3188); pile[WZ4]=jvj+245; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3188),jvj+245)*/
pile[WZ3]=(-3823); pile[WZ4]=jvj+243; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3823),jvj+243)*/
pile[v[22]]=jvj+243; pile[WZ1]=103; pile[WZ2]=jvj+244; 
(*f[54])( );     /*TRI1(jvj+243,103,jvj+244)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+245; pile[WZ4]=jvj+244; pile[WZ5]=jvj+238; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+245,jvj+244,jvj+238)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4015); pile[WZ4]=jvj+248; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4015),jvj+248)*/
pile[WZ3]=(-3822); pile[WZ4]=jvj+246; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=103; pile[WZ2]=jvj+247; 
(*f[54])( );     /*TRI1(jvj+246,103,jvj+247)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+248; pile[WZ4]=jvj+247; pile[WZ5]=jvj+241; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+248,jvj+247,jvj+241)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5320); pile[WZ4]=jvj+251; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5320),jvj+251)*/
pile[WZ3]=(-3840); pile[WZ4]=jvj+249; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3840),jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=103; pile[WZ2]=jvj+250; 
(*f[54])( );     /*TRI1(jvj+249,103,jvj+250)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+251; pile[WZ4]=jvj+250; pile[WZ5]=jvj+242; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+251,jvj+250,jvj+242)*/
pile[v[22]]=jvj+238; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+239; 
(*f[180])( );     /*TRIENS0(jvj+238,(-20),114,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+240; pile[WZ4]=jvj+239; pile[WZ5]=jvj+224; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+240,jvj+239,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=113; pile[WZ2]=jvj+241; 
(*f[36])( );     /*PLUSC0(jvj+224,113,jvj+241)*/
pile[WZ2]=jvj+242; 
(*f[36])( );     /*PLUSC0(jvj+224,113,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4015); pile[WZ4]=jvj+256; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4015),jvj+256)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+254; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+254)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2733); pile[WZ4]=jvj+252; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2733),jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=436; pile[WZ2]=jvj+253; 
(*f[54])( );     /*TRI1(jvj+252,436,jvj+253)*/
pile[v[22]]=jvj+253; pile[WZ1]=jvj+254; pile[WZ2]=111; pile[WZ3]=jvj+255; 
(*f[58])( );     /*TRI3(jvj+253,jvj+254,111,jvj+255)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+256; pile[WZ4]=jvj+255; pile[WZ5]=jvj+225; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+256,jvj+255,jvj+225)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5320); pile[WZ4]=jvj+261; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5320),jvj+261)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+259; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+259)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3141); pile[WZ4]=jvj+257; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3141),jvj+257)*/
pile[v[22]]=jvj+257; pile[WZ1]=436; pile[WZ2]=jvj+258; 
(*f[54])( );     /*TRI1(jvj+257,436,jvj+258)*/
pile[v[22]]=jvj+258; pile[WZ1]=jvj+259; pile[WZ2]=111; pile[WZ3]=jvj+260; 
(*f[58])( );     /*TRI3(jvj+258,jvj+259,111,jvj+260)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+261; pile[WZ4]=jvj+260; pile[WZ5]=jvj+226; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+261,jvj+260,jvj+226)*/
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(42,100,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=jvj+221; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+221)*/
pile[WZ2]=jvj+222; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+222)*/
pile[WZ2]=jvj+223; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+223)*/
pile[WZ1]=105; pile[WZ2]=jvj+224; 
(*f[36])( );     /*PLUSC0(jvj+20,105,jvj+224)*/
pile[WZ2]=jvj+225; 
(*f[36])( );     /*PLUSC0(jvj+20,105,jvj+225)*/
pile[WZ2]=jvj+226; 
(*f[36])( );     /*PLUSC0(jvj+20,105,jvj+226)*/
pile[v[22]]=jvj+5; pile[WZ1]=184; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+5,184,jvj+20)*/
goto l5;
l9:if(K!=32&&K!=46) goto l12;
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,N,jvj+21)*/
pile[v[22]]=159; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(159,jvj+21,jvj+22)*/
l10:if((x[jvj+22]<=0)) goto l12;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,jvj+23,jvj+24)*/
pile[v[22]]=KR; pile[WZ1]=K; 
(*f[356])( );     /*EAX1(KR,K)*/
l11:x[jvj+22]=t[x[jvj+22]];
goto l10;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
