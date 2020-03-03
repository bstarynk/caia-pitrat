#include "dx.h"
void CRINST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V32=0,V115=0,V105=0,V123=0,V104=0,V51=0,V33=0,V26=0,V6=0,VV=0,NK=0,V79=0,V100=0,V80=0,V128=0,Z=0,V130=0,V127=0,V129=0;
int BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=169;
x[jvj+1]=11373;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==751&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1420; pile[WZ1]=BL; 
(*f[71])( );     /*ENLV0(1420,BL)*/
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,BL,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=69)) goto l16;
pile[v[22]]=108; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(108,jvj+9,jvj+11)*/
x[jvj+167]=x[jvj+11] ;z[jvj+167]=z[jvj+11];
l7:if((x[jvj+167]<=0)) goto l16;
x[jvj+12]=s[x[jvj+167]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+167];
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+12,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+13,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+12,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=576)) goto l13;
V105=V115;
x[jvj+168]=x[jvj+11] ;z[jvj+168]=z[jvj+11];
l9:if((x[jvj+168]<=0)) goto l13;
x[jvj+16]=s[x[jvj+168]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+168];
if((x[jvj+12]==x[jvj+16])) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+16,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+17,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+16,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]==758)) goto l11;
if((x[jvj+19]==749)) goto l12;
if((x[jvj+19]!=576)) goto l10;
pile[v[22]]=1546; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1546,BL,jvj+2)*/
x[jvj+164]=x[jvj+2] ;z[jvj+164]=z[jvj+2];
l1:if((x[jvj+164]<=0)) goto l10;
x[jvj+3]=s[x[jvj+164]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+164];
pile[v[22]]=110; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(110,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5!=V105)) goto l2;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+3,V6)*/
V6=pile[WZ2]; 
VV=V123;
NK=V6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+96)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V105; pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,V105,jvj+100)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=267; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,267,jvj+101)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9981); pile[WZ4]=jvj+103; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9981),jvj+103)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+108)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9980); pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9980),jvj+112)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=622; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,622,jvj+113)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+115)*/
pile[v[22]]=jvj+113; pile[WZ1]=111; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,111,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+110; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+115,jvj+114,jvj+110)*/
pile[v[22]]=jvj+108; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+110; pile[WZ2]=103; pile[WZ3]=jvj+111; 
(*f[58])( );     /*TRI3(jvj+109,jvj+110,103,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+112,jvj+111,jvj+104)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+116)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9981); pile[WZ4]=jvj+120; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9981),jvj+120)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=509; pile[WZ4]=jvj+123; 
(*f[181])( );     /*QUADRI2(100,20,101,509,jvj+123)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9980); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9980),jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=103; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+123,jvj+122,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,111,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+105)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+124)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9981); pile[WZ4]=jvj+128; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9981),jvj+128)*/
pile[WZ3]=VV; pile[WZ4]=jvj+126; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+126)*/
pile[v[22]]=jvj+124; pile[WZ1]=111; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,111,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=103; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+125,jvj+126,103,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+128,jvj+127,jvj+106)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+129; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+129)*/
pile[WZ3]=44; pile[WZ4]=jvj+132; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+132)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NK; pile[WZ4]=jvj+136; 
(*f[192])( );     /*QUADRI4(100,41,130,NK,jvj+136)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1417; pile[WZ4]=jvj+139; 
(*f[181])( );     /*QUADRI2(100,20,101,1417,jvj+139)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9981); pile[WZ4]=jvj+137; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9981),jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=103; pile[WZ2]=jvj+138; 
(*f[54])( );     /*TRI1(jvj+137,103,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+139; pile[WZ4]=jvj+138; pile[WZ5]=jvj+134; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+139,jvj+138,jvj+134)*/
pile[v[22]]=jvj+132; pile[WZ1]=111; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,111,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+134; pile[WZ2]=103; pile[WZ3]=jvj+135; 
(*f[58])( );     /*TRI3(jvj+133,jvj+134,103,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+136; pile[WZ4]=jvj+135; pile[WZ5]=jvj+130; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+136,jvj+135,jvj+130)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+140)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NK; pile[WZ4]=jvj+144; 
(*f[192])( );     /*QUADRI4(100,41,130,NK,jvj+144)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1545; pile[WZ4]=jvj+147; 
(*f[181])( );     /*QUADRI2(100,20,101,1545,jvj+147)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4349); pile[WZ4]=jvj+145; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4349),jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=103; pile[WZ2]=jvj+146; 
(*f[54])( );     /*TRI1(jvj+145,103,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+146; pile[WZ5]=jvj+142; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+147,jvj+146,jvj+142)*/
pile[v[22]]=jvj+140; pile[WZ1]=111; pile[WZ2]=jvj+141; 
(*f[54])( );     /*TRI1(jvj+140,111,jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=jvj+142; pile[WZ2]=103; pile[WZ3]=jvj+143; 
(*f[58])( );     /*TRI3(jvj+141,jvj+142,103,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+143; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+144,jvj+143,jvj+131)*/
pile[WZ2]=111; pile[WZ3]=jvj+129; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+129,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=107; pile[WZ2]=jvj+130; 
(*f[36])( );     /*PLUSC0(jvj+107,107,jvj+130)*/
pile[WZ2]=jvj+131; 
(*f[36])( );     /*PLUSC0(jvj+107,107,jvj+131)*/
pile[v[22]]=jvj+101; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,111,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=jvj+98; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+102,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=107; pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+98,107,jvj+104)*/
pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(jvj+98,107,jvj+105)*/
pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(jvj+98,107,jvj+106)*/
pile[WZ2]=jvj+107; 
(*f[36])( );     /*PLUSC0(jvj+98,107,jvj+107)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+98; pile[WZ2]=103; pile[WZ3]=jvj+99; 
(*f[58])( );     /*TRI3(jvj+97,jvj+98,103,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+100; pile[WZ4]=jvj+99; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+100,jvj+99,jvj+24)*/
pile[v[22]]=BL; pile[WZ1]=V105; pile[WZ2]=jvj+24; 
(*f[1116])( );     /*CRINSTA0(BL,V105,jvj+24)*/
l10:x[jvj+168]=t[x[jvj+168]];
goto l9;
l2:x[jvj+164]=t[x[jvj+164]];
goto l1;
l4:x[jvj+165]=t[x[jvj+165]];
l3:if((x[jvj+165]<=0)) goto l10;
x[jvj+5]=s[x[jvj+165]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+165];
pile[v[22]]=110; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+5,V32)*/
V32=pile[WZ2]; 
if((V32!=V105)) goto l4;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+5,V33)*/
V33=pile[WZ2]; 
V26=V33;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+59)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V105; pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(100,21,140,V105,jvj+63)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=267; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,267,jvj+64)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9981); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9981),jvj+66)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+69)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9981); pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9981),jvj+73)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=509; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,509,jvj+76)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V51; pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,V51,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=103; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+76,jvj+75,jvj+71)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+72,jvj+67)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+77)*/
pile[WZ3]=44; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+80)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V26; pile[WZ4]=jvj+84; 
(*f[192])( );     /*QUADRI4(100,41,130,V26,jvj+84)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1417; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,1417,jvj+87)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9981); pile[WZ4]=jvj+85; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9981),jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=103; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,103,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+87,jvj+86,jvj+82)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+81,jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+83,jvj+78)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+88)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V26; pile[WZ4]=jvj+92; 
(*f[192])( );     /*QUADRI4(100,41,130,V26,jvj+92)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1545; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,1545,jvj+95)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4349); pile[WZ4]=jvj+93; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4349),jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=103; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+95,jvj+94,jvj+90)*/
pile[v[22]]=jvj+88; pile[WZ1]=111; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,111,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+90; pile[WZ2]=103; pile[WZ3]=jvj+91; 
(*f[58])( );     /*TRI3(jvj+89,jvj+90,103,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+92; pile[WZ4]=jvj+91; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+92,jvj+91,jvj+79)*/
pile[WZ2]=111; pile[WZ3]=jvj+77; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+77,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=107; pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+68,107,jvj+78)*/
pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+68,107,jvj+79)*/
pile[v[22]]=jvj+64; pile[WZ1]=111; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,111,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+66,jvj+65,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=107; pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+61,107,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+61,107,jvj+68)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+62,jvj+23)*/
pile[v[22]]=BL; pile[WZ1]=V105; pile[WZ2]=jvj+23; 
(*f[1116])( );     /*CRINSTA0(BL,V105,jvj+23)*/
goto l10;
l6:x[jvj+6]=s[x[jvj+166]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+166];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+166]=t[x[jvj+166]];
l5:if((x[jvj+166]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V51; pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,V51,jvj+46)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=267; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,267,jvj+47)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9980); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9980),jvj+49)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-9980); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,(-9980),jvj+55)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=622; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,622,jvj+56)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V105; pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,V105,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+50)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=107; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+44,107,jvj+50)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+44; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+8,jvj+44,107)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+46,jvj+45,jvj+22)*/
pile[v[22]]=BL; pile[WZ1]=V51; pile[WZ2]=jvj+22; 
(*f[1116])( );     /*CRINSTA0(BL,V51,jvj+22)*/
pile[v[22]]=1546; pile[WZ1]=BL; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1546,BL,jvj+4)*/
x[jvj+165]=x[jvj+4] ;z[jvj+165]=z[jvj+4];
goto l3;
l8:x[jvj+167]=t[x[jvj+167]];
goto l7;
l11:V104=V123;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V104; pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,V104,jvj+38)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=678; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,678,jvj+41)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V105; pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,V105,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=103; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,103,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+41,jvj+40,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+37,jvj+20)*/
pile[v[22]]=BL; pile[WZ1]=V104; pile[WZ2]=jvj+20; 
(*f[1116])( );     /*CRINSTA0(BL,V104,jvj+20)*/
goto l10;
l12:V51=V123;
pile[v[22]]=V51; pile[WZ1]=BL; pile[WZ2]=jvj+21; 
(*f[1117])( );     /*TROUVEREL0(V51,BL,jvj+21)*/
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+166]=x[jvj+21] ;z[jvj+166]=z[jvj+21];
goto l5;
l13:x[jvj+25]=x[jvj+15] ;z[jvj+25]=z[jvj+15];
if(x[jvj+25]!=749&&x[jvj+25]!=756) goto l8;
pile[v[22]]=319; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(319,jvj+25,jvj+26)*/
V79=V115;
x[jvj+169]=x[jvj+11] ;z[jvj+169]=z[jvj+11];
l14:if((x[jvj+169]<=0)) goto l8;
x[jvj+27]=s[x[jvj+169]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+169];
if((x[jvj+12]==x[jvj+27])) goto l15;
pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+27,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+28,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+27,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=758)) goto l15;
V80=V100;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+148)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V79; pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,V79,jvj+152)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+26; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,jvj+155)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V80; pile[WZ4]=jvj+153; 
(*f[270])( );     /*QUADRI7(100,21,140,V80,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=103; pile[WZ2]=jvj+154; 
(*f[54])( );     /*TRI1(jvj+153,103,jvj+154)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+155; pile[WZ4]=jvj+154; pile[WZ5]=jvj+150; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+155,jvj+154,jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+150; pile[WZ2]=103; pile[WZ3]=jvj+151; 
(*f[58])( );     /*TRI3(jvj+149,jvj+150,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+152; pile[WZ4]=jvj+151; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+152,jvj+151,jvj+31)*/
pile[v[22]]=BL; pile[WZ1]=V79; pile[WZ2]=jvj+31; 
(*f[1116])( );     /*CRINSTA0(BL,V79,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+156; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+156)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V80; pile[WZ4]=jvj+160; 
(*f[270])( );     /*QUADRI7(100,21,140,V80,jvj+160)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=498; pile[WZ4]=jvj+163; 
(*f[181])( );     /*QUADRI2(100,20,101,498,jvj+163)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V79; pile[WZ4]=jvj+161; 
(*f[270])( );     /*QUADRI7(100,21,140,V79,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=103; pile[WZ2]=jvj+162; 
(*f[54])( );     /*TRI1(jvj+161,103,jvj+162)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+163; pile[WZ4]=jvj+162; pile[WZ5]=jvj+158; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+163,jvj+162,jvj+158)*/
pile[v[22]]=jvj+156; pile[WZ1]=111; pile[WZ2]=jvj+157; 
(*f[54])( );     /*TRI1(jvj+156,111,jvj+157)*/
pile[v[22]]=jvj+157; pile[WZ1]=jvj+158; pile[WZ2]=103; pile[WZ3]=jvj+159; 
(*f[58])( );     /*TRI3(jvj+157,jvj+158,103,jvj+159)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+160; pile[WZ4]=jvj+159; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+160,jvj+159,jvj+32)*/
pile[v[22]]=BL; pile[WZ1]=V80; pile[WZ2]=jvj+32; 
(*f[1116])( );     /*CRINSTA0(BL,V80,jvj+32)*/
l15:x[jvj+169]=t[x[jvj+169]];
goto l14;
l16:pile[v[22]]=1420; pile[WZ1]=BL; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1420,BL,jvj+33)*/
V128=x[BL];
l17:if((x[jvj+33]>0)) goto l18;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l18:Z=s[x[jvj+33]];
V130=Z;
pile[v[22]]=20; pile[WZ1]=V128; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V128,0,V127)*/
V127=pile[WZ3]; 
pile[WZ1]=V130; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(20,V130,V127,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; 
(*f[40])( );     /*SLG0(V129)*/
x[jvj+33]=t[x[jvj+33]];
goto l17;
}
