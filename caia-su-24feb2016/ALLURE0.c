#include "dx.h"
void ALLURE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V37=0,V=0,I=0,V20=0,V207=0,V11=0,V90=0,V200=0,V173=0;
int Y,R;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=120;
x[jvj+1]=10923;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==535&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; R=pile[v[22]+1]; RR=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[R] ;z[jvj+4]=z[R];
x[jvj+19]=x[Y] ;z[jvj+19]=z[Y];
l12:pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+20; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+20,RR)*/
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=s[x[jvj+62]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+62];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[535])( );     /*ALLURE0(jvj+3,jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
x[jvj+62]=t[x[jvj+62]];
l1:if((x[jvj+62]>0)) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+63; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=111; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,111,jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=jvj+63; pile[WZ2]=107; pile[WZ3]=jvj+116; 
(*f[301])( );     /*TRI11(jvj+115,jvj+63,107,jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RR; 
(*f[58])( );     /*TRI3(jvj+116,22,100,RR)*/
goto l34;
l4:x[jvj+7]=s[x[jvj+51]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+51];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[535])( );     /*ALLURE0(jvj+7,jvj+4,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+51]=t[x[jvj+51]];
l3:if((x[jvj+51]>0)) goto l4;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+52; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+52)*/
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+19,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+4; pile[WZ2]=jvj+54; 
(*f[535])( );     /*ALLURE0(jvj+53,jvj+4,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+54,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+52; pile[WZ2]=107; pile[WZ3]=jvj+109; 
(*f[301])( );     /*TRI11(jvj+108,jvj+52,107,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+109; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+109,RR)*/
goto l34;
l6:x[jvj+10]=s[x[jvj+26]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+26];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[535])( );     /*ALLURE0(jvj+11,jvj+4,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(jvj+13,128,jvj+12)*/
l7:x[jvj+26]=t[x[jvj+26]];
l5:if((x[jvj+26]>0)) goto l6;
pile[v[22]]=jvj+13; pile[WZ1]=RR; 
(*f[886])( );     /*REDUITENS0(jvj+13,RR)*/
goto l34;
l9:x[jvj+14]=s[x[jvj+58]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+58];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[535])( );     /*ALLURE0(jvj+14,jvj+4,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
x[jvj+58]=t[x[jvj+58]];
l8:if((x[jvj+58]>0)) goto l9;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+59; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+59)*/
pile[v[22]]=184; pile[WZ1]=jvj+19; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(184,jvj+19,jvj+60)*/
x[jvj+18]=0 ;z[jvj+18]=0;
l10:if((x[jvj+60]>0)) goto l11;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+61; 
(*f[299])( );     /*COPEL0(jvj+18,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+111)*/
pile[v[22]]=jvj+61; pile[WZ1]=184; pile[WZ2]=jvj+110; 
(*f[300])( );     /*TRI10(jvj+61,184,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=jvj+111; pile[WZ2]=111; pile[WZ3]=jvj+112; 
(*f[58])( );     /*TRI3(jvj+110,jvj+111,111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+59; pile[WZ2]=107; pile[WZ3]=jvj+113; 
(*f[301])( );     /*TRI11(jvj+112,jvj+59,107,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RR; 
(*f[58])( );     /*TRI3(jvj+113,22,100,RR)*/
goto l34;
l11:x[jvj+14]=s[x[jvj+60]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+60];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[535])( );     /*ALLURE0(jvj+14,jvj+4,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+17)*/
x[jvj+60]=t[x[jvj+60]];
goto l10;
l13:pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+19,V)*/
V=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=jvj+4; pile[WZ2]=RR; 
(*f[536])( );     /*ALLURV0(V,jvj+4,RR)*/
goto l34;
l14:pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+19,I)*/
I=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=RR; 
(*f[192])( );     /*QUADRI4(100,41,130,I,RR)*/
goto l34;
l15:pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+19,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+21,jvj+2)*/
if((x[jvj+2]==139)) goto l36;
if((x[jvj+2]==138)) goto l37;
if((x[jvj+2]==295)) goto l16;
if((x[jvj+2]==149)) goto l17;
if((x[jvj+2]==654)) goto l18;
if((x[jvj+2]==433)) goto l38;
if((x[jvj+2]==228)) goto l19;
if((x[jvj+2]==585)) goto l20;
if((x[jvj+2]!=650)) goto l21;
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+19,jvj+29)*/
x[jvj+19]=x[jvj+29] ;z[jvj+19]=z[jvj+29];
goto l12;
l16:pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+22,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=jvj+4; pile[WZ2]=RR; 
(*f[536])( );     /*ALLURV0(V20,jvj+4,RR)*/
goto l34;
l17:pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+19,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+23,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=jvj+4; pile[WZ2]=RR; 
(*f[536])( );     /*ALLURV0(V207,jvj+4,RR)*/
goto l34;
l18:pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+19,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+24,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+25; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,RR)*/
goto l34;
l19:pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+19,jvj+27)*/
x[jvj+19]=x[jvj+27] ;z[jvj+19]=z[jvj+27];
goto l12;
l20:pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+19,jvj+28)*/
x[jvj+19]=x[jvj+28] ;z[jvj+19]=z[jvj+28];
goto l12;
l21:if(x[jvj+2]!=267&&x[jvj+2]!=156&&x[jvj+2]!=1272) goto l22;
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+19,jvj+30)*/
if((x[jvj+30]!=22)) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+19,jvj+31)*/
x[jvj+19]=x[jvj+31] ;z[jvj+19]=z[jvj+31];
x[jvj+4]=x[jvj+19] ;z[jvj+4]=z[jvj+19];
goto l12;
l22:if(x[jvj+2]==650||x[jvj+2]==654) goto l23;
pile[v[22]]=118; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(118,jvj+2,V11)*/
V11=pile[WZ2]; 
if((V11!=2)) goto l23;
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+19,jvj+32)*/
if((x[jvj+32]!=22)) goto l23;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+19,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+4; pile[WZ2]=jvj+34; 
(*f[535])( );     /*ALLURE0(jvj+33,jvj+4,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+34,jvj+35)*/
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+19,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+4; pile[WZ2]=jvj+37; 
(*f[535])( );     /*ALLURE0(jvj+36,jvj+4,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=111; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,111,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+102; 
(*f[58])( );     /*TRI3(jvj+101,jvj+38,103,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+102; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+102,RR)*/
goto l34;
l23:pile[v[22]]=118; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(118,jvj+2,V90)*/
V90=pile[WZ2]; 
if((V90==3)) goto l24;
if((V90!=1)) goto l25;
if((x[jvj+2]==649)) goto l25;
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+19,jvj+49)*/
if((x[jvj+49]!=22)) goto l25;
pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(155,jvj+2,jvj+50)*/
if((x[jvj+50]!=68)) goto l25;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+51)*/
x[jvj+9]=0 ;z[jvj+9]=0;
goto l3;
l24:pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+19,jvj+39)*/
if((x[jvj+39]!=22)) goto l25;
pile[v[22]]=160; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,jvj+19,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+4; pile[WZ2]=jvj+41; 
(*f[535])( );     /*ALLURE0(jvj+40,jvj+4,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+42)*/
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+19,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+4; pile[WZ2]=jvj+44; 
(*f[535])( );     /*ALLURE0(jvj+43,jvj+4,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+45)*/
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+19,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+4; pile[WZ2]=jvj+47; 
(*f[535])( );     /*ALLURE0(jvj+46,jvj+4,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+104)*/
pile[v[22]]=jvj+42; pile[WZ1]=160; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+42,160,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=111; pile[WZ3]=jvj+105; 
(*f[58])( );     /*TRI3(jvj+103,jvj+104,111,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+106; 
(*f[58])( );     /*TRI3(jvj+105,jvj+48,103,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+106; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+106,RR)*/
goto l34;
l25:pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+19,jvj+56)*/
if((x[jvj+56]!=22)) goto l28;
pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(155,jvj+2,jvj+57)*/
if((x[jvj+57]==336)) goto l26;
if((x[jvj+57]!=68)) goto l28;
pile[v[22]]=118; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(118,jvj+2,V37)*/
V37=pile[WZ2]; 
if((V37>0)) goto l28;
l27:pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+62)*/
x[jvj+6]=0 ;z[jvj+6]=0;
goto l1;
l26:pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+58)*/
x[jvj+16]=0 ;z[jvj+16]=0;
goto l8;
l28:pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+19,jvj+64)*/
if((x[jvj+64]==484)) goto l29;
if((x[jvj+64]!=22)) goto l33;
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+21,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+70,jvj+71)*/
if((x[jvj+71]!=654)) goto l33;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+21,jvj+72)*/
pile[v[22]]=111; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+72,jvj+73)*/
pile[v[22]]=101; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+73,jvj+74)*/
if((x[jvj+74]!=651)) goto l33;
pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+75)*/
pile[v[22]]=102; pile[WZ1]=jvj+72; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+72,jvj+76)*/
pile[v[22]]=140; pile[WZ1]=jvj+76; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+76,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+19,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+4; pile[WZ2]=jvj+78; 
(*f[535])( );     /*ALLURE0(jvj+77,jvj+4,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; 
(*f[255])( );     /*COPEXP0(jvj+78,jvj+79)*/
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+19,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+4; pile[WZ2]=jvj+81; 
(*f[535])( );     /*ALLURE0(jvj+80,jvj+4,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; 
(*f[255])( );     /*COPEXP0(jvj+81,jvj+82)*/
l30:if((x[jvj+75]<=0)) goto l33;
x[jvj+83]=s[x[jvj+75]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+75];
pile[v[22]]=111; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+83,jvj+84)*/
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+84,jvj+85)*/
if((x[jvj+85]!=44)) goto l31;
pile[v[22]]=102; pile[WZ1]=jvj+83; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+83,jvj+86)*/
pile[v[22]]=140; pile[WZ1]=jvj+86; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+86,V173)*/
V173=pile[WZ2]; 
if((V200!=V173)) goto l31;
pile[v[22]]=103; pile[WZ1]=jvj+83; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(103,jvj+83,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+87,jvj+88)*/
if((x[jvj+88]!=128)) goto l31;
pile[v[22]]=jvj+87; pile[WZ1]=jvj+89; 
(*f[255])( );     /*COPEXP0(jvj+87,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+118,jvj+82,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+119; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+79,jvj+119,RR)*/
goto l34;
l29:pile[v[22]]=jvj+21; pile[WZ1]=jvj+4; pile[WZ2]=jvj+65; 
(*f[535])( );     /*ALLURE0(jvj+21,jvj+4,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(jvj+65,jvj+66)*/
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+19,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+4; pile[WZ2]=jvj+68; 
(*f[535])( );     /*ALLURE0(jvj+67,jvj+4,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[255])( );     /*COPEXP0(jvj+68,jvj+69)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+117; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+69,jvj+117,RR)*/
goto l34;
l31:x[jvj+75]=t[x[jvj+75]];
goto l30;
l33:pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+19,jvj+95)*/
if((x[jvj+95]!=22)) goto l39;
pile[v[22]]=111; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+19,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+96,jvj+97)*/
if((x[jvj+97]==20)) goto l39;
pile[v[22]]=jvj+96; pile[WZ1]=jvj+4; pile[WZ2]=jvj+98; 
(*f[535])( );     /*ALLURE0(jvj+96,jvj+4,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; 
(*f[255])( );     /*COPEXP0(jvj+98,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+99; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+99,jvj+92)*/
x[RR]=x[jvj+92] ;z[RR]=z[jvj+92];
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+19,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+4; pile[WZ2]=jvj+91; 
(*f[535])( );     /*ALLURE0(jvj+90,jvj+4,jvj+91)*/
pile[v[22]]=jvj+92; pile[WZ1]=102; 
(*f[35])( );     /*CHGC1(jvj+92,102,jvj+91)*/
l32:pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+19,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+4; pile[WZ2]=jvj+94; 
(*f[535])( );     /*ALLURE0(jvj+93,jvj+4,jvj+94)*/
pile[v[22]]=jvj+92; pile[WZ1]=103; 
(*f[35])( );     /*CHGC1(jvj+92,103,jvj+94)*/
goto l34;
l35:x[jvj+19]=x[jvj+22] ;z[jvj+19]=z[jvj+22];
goto l12;
l36:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,20,101,41,RR)*/
goto l34;
l37:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=89; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,20,101,89,RR)*/
goto l34;
l38:pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(128,100,jvj+13)*/
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+26)*/
goto l5;
l39:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+120)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+120; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+120,RR)*/
goto l34;
}
