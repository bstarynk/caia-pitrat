#include "dx.h"
void TRSIMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int FF=0,V67=0,V71=0,VA=0,VB=0,VC=0,VD=0,W=0,V114=0,V31=0,V42=0;
int R,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=137;
x[jvj+1]=10146;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==411&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,R,jvj+52)*/
if((x[jvj+52]!=537)) goto l28;
pile[v[22]]=102; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,R,jvj+53)*/
pile[v[22]]=130; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+53,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(160,R,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+54,jvj+55)*/
if((x[jvj+55]!=73)) goto l28;
pile[v[22]]=102; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+54,jvj+56)*/
pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+56,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,R,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+57,jvj+58)*/
if((x[jvj+58]!=42)) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+54,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+59,jvj+60)*/
pile[v[22]]=105; pile[WZ1]=jvj+57; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(105,jvj+57,jvj+61)*/
x[jvj+62]=incon;
x[jvj+135]=x[jvj+61] ;z[jvj+135]=z[jvj+61];
l14:if((x[jvj+135]<=0)) goto l18;
x[jvj+30]=s[x[jvj+135]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+135];
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=73)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+30,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=633)) goto l15;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+62)*/
l18:x[jvj+136]=x[jvj+61] ;z[jvj+136]=z[jvj+61];
l16:if((x[jvj+136]>0)) goto l17;
if(x[jvj+62]==incon) goto l28;
l27:if((x[jvj+62]==(-99999998))) goto l28;
x[jvj+25]=0 ;z[jvj+25]=0;
l7:if((x[jvj+61]>0)) goto l8;
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(107,R,jvj+64)*/
pile[WZ1]=jvj+57; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(107,jvj+57,jvj+65)*/
x[jvj+27]=0 ;z[jvj+27]=0;
l11:if((x[jvj+65]<=0)) goto l12;
x[jvj+28]=s[x[jvj+65]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+65];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+27,jvj+28)*/
x[jvj+65]=t[x[jvj+65]];
goto l11;
l5:if(x[jvj+26]==incon) goto l6;
l10:if((x[jvj+26]==(-99999998))) goto l9;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
l9:x[jvj+61]=t[x[jvj+61]];
goto l7;
l6:x[jvj+26]=(-99999998);
goto l9;
l8:x[jvj+6]=s[x[jvj+61]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+61];
x[jvj+26]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=73)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+8,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+6,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+2,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+6,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=635)) goto l1;
VA=V67;
VB=V71;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10937; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,10937,jvj+69)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VA; pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,VA,jvj+91)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+89; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=103; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+91,jvj+90,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VB; pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,21,140,VB,jvj+94)*/
pile[WZ3]=(-657); pile[WZ4]=jvj+92; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=103; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+94,jvj+93,jvj+71)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+69; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+69,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=114; pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+70)*/
pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+71)*/
l1:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+11)*/
if((x[jvj+11]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+12,jvj+13)*/
x[jvj+111]=x[jvj+13] ;z[jvj+111]=z[jvj+13];
if(x[jvj+111]!=228&&x[jvj+111]!=295&&x[jvj+111]!=585) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+6,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=633)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+2,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
VC=V67;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10748; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,10748,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VC; pile[WZ4]=jvj+97; 
(*f[270])( );     /*QUADRI7(100,21,140,VC,jvj+97)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+95; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=103; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+97,jvj+96,jvj+75)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=103; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,103,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+99; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+17,jvj+99,jvj+76)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+102; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+102)*/
pile[WZ3]=(-3283); pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3283),jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=103; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,103,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; pile[WZ5]=jvj+72; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+102,jvj+101,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+73; 
(*f[180])( );     /*TRIENS0(jvj+72,(-20),113,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+74,jvj+73,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=114; pile[WZ2]=jvj+75; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+75)*/
pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+76)*/
l2:if(x[jvj+111]!=139&&x[jvj+111]!=149&&x[jvj+111]!=141&&x[jvj+111]!=432&&x[jvj+111]!=138&&x[jvj+111]!=1382) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+6,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=633)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
VD=V67;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10748; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,10748,jvj+79)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VD; pile[WZ4]=jvj+105; 
(*f[270])( );     /*QUADRI7(100,21,140,VD,jvj+105)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+103; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=103; pile[WZ2]=jvj+104; 
(*f[54])( );     /*TRI1(jvj+103,103,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+105; pile[WZ4]=jvj+104; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+105,jvj+104,jvj+80)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+111; pile[WZ4]=jvj+109; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=111; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,111,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+110; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+110,jvj+108)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+106; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=103; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(jvj+106,103,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+108; pile[WZ4]=jvj+107; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+108,jvj+107,jvj+81)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+114; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+114)*/
pile[WZ3]=(-3283); pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3283),jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=103; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+114; pile[WZ4]=jvj+113; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+114,jvj+113,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+78; 
(*f[180])( );     /*TRIENS0(jvj+77,(-20),113,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+79,jvj+78,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=114; pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+80)*/
pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+81)*/
l3:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+6,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=633)) goto l5;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
FF=x[jvj+5];
if(FF==228||FF==139||FF==149||FF==141||FF==432||FF==138||FF==295||FF==585||FF==1382) goto l5;
l4:pile[v[22]]=jvj+2; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+24)*/
W=V67;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10748; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,10748,jvj+84)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+117; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+117)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=103; pile[WZ2]=jvj+116; 
(*f[54])( );     /*TRI1(jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+116; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+117,jvj+116,jvj+85)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=228; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=111; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,111,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+122; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+122,jvj+120)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+118; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=103; pile[WZ2]=jvj+119; 
(*f[54])( );     /*TRI1(jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+120,jvj+119,jvj+86)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4781); pile[WZ4]=jvj+125; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4781),jvj+125)*/
pile[WZ3]=(-3283); pile[WZ4]=jvj+123; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3283),jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=103; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(jvj+123,103,jvj+124)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+125; pile[WZ4]=jvj+124; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+125,jvj+124,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+83; 
(*f[180])( );     /*TRIENS0(jvj+82,(-20),113,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+84,jvj+83,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=114; pile[WZ2]=jvj+85; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+85)*/
pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+26,114,jvj+86)*/
goto l10;
l13:x[jvj+29]=s[x[jvj+64]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+64];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+27,jvj+29)*/
x[jvj+64]=t[x[jvj+64]];
l12:if((x[jvj+64]>0)) goto l13;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+66; 
(*f[299])( );     /*COPEL0(jvj+27,jvj+66)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+60; pile[WZ2]=N; pile[WZ3]=jvj+67; 
(*f[770])( );     /*BLSIMP0(jvj+54,jvj+60,N,jvj+67)*/
x[jvj+41]=0 ;z[jvj+41]=0;
x[jvj+39]=d[40];z[jvj+39]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+128; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+128)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3822); pile[WZ4]=jvj+126; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3822),jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=436; pile[WZ2]=jvj+127; 
(*f[54])( );     /*TRI1(jvj+126,436,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=jvj+128; pile[WZ2]=111; pile[WZ3]=jvj+129; 
(*f[58])( );     /*TRI3(jvj+127,jvj+128,111,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+129; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+63,jvj+129,jvj+40)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[196])( );     /*PLUF0(jvj+39,jvj+40,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V31; pile[WZ4]=jvj+134; 
(*f[192])( );     /*QUADRI4(100,41,130,V31,jvj+134)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+132; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+132)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3840); pile[WZ4]=jvj+130; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3840),jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=436; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,436,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=jvj+132; pile[WZ2]=111; pile[WZ3]=jvj+133; 
(*f[58])( );     /*TRI3(jvj+131,jvj+132,111,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+134; pile[WZ4]=jvj+133; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+134,jvj+133,jvj+42)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+42; pile[WZ2]=jvj+41; 
(*f[196])( );     /*PLUF0(jvj+39,jvj+42,jvj+41)*/
l20:if((x[jvj+25]>0)) goto l21;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+68; 
(*f[299])( );     /*COPEL0(jvj+41,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=107; pile[WZ2]=jvj+87; 
(*f[300])( );     /*TRI10(jvj+66,107,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+68; pile[WZ2]=105; pile[WZ3]=jvj+88; 
(*f[301])( );     /*TRI11(jvj+87,jvj+68,105,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+88,42,100,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=V42; pile[WZ2]=(-3823); 
(*f[771])( );     /*SUBST0(jvj+44,V42,(-3823))*/
pile[v[22]]=894; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[492])( );     /*FIGURE0(894,jvj+44,jvj+45)*/
if((x[jvj+45]==134)) goto l22;
l24:if((x[jvj+45]==135)) goto l25;
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l15:x[jvj+135]=t[x[jvj+135]];
goto l14;
l17:x[jvj+34]=s[x[jvj+136]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+136];
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=73)) goto l19;
pile[v[22]]=103; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+34,jvj+36)*/
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+36,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+34,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=635)) goto l19;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V114; pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,V114,jvj+62)*/
goto l27;
l19:x[jvj+136]=t[x[jvj+136]];
goto l16;
l21:x[jvj+43]=s[x[jvj+25]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+25];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+41,jvj+43)*/
x[jvj+25]=t[x[jvj+25]];
goto l20;
l22:pile[v[22]]=jvj+44; pile[WZ1]=jvj+46; 
(*f[378])( );     /*CPI0(jvj+44,jvj+46)*/
x[jvj+137]=x[jvj+67] ;z[jvj+137]=z[jvj+67];
l23:if((x[jvj+137]<=0)) goto l24;
x[jvj+47]=s[x[jvj+137]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+137];
pile[v[22]]=jvj+47; pile[WZ1]=184; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+47,184,jvj+46)*/
x[jvj+137]=t[x[jvj+137]];
goto l23;
l25:pile[v[22]]=jvj+44; pile[WZ1]=jvj+48; 
(*f[378])( );     /*CPI0(jvj+44,jvj+48)*/
pile[v[22]]=538; pile[WZ1]=894; pile[WZ2]=jvj+48; pile[WZ3]=jvj+49; 
(*f[772])( );     /*SUBOBJ0(538,894,jvj+48,jvj+49)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+50; 
(*f[378])( );     /*CPI0(jvj+44,jvj+50)*/
pile[v[22]]=539; pile[WZ1]=894; pile[WZ2]=jvj+50; pile[WZ3]=jvj+51; 
(*f[772])( );     /*SUBOBJ0(539,894,jvj+50,jvj+51)*/
l26:if((x[jvj+67]<=0)) goto l28;
x[jvj+47]=s[x[jvj+67]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+67];
pile[v[22]]=jvj+47; pile[WZ1]=184; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+47,184,jvj+49)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+47,184,jvj+51)*/
x[jvj+67]=t[x[jvj+67]];
goto l26;
}
