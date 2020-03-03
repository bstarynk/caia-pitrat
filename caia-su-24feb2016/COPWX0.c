#include "dx.h"
void COPWX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V58=0,V61=0,V68=0,V53=0,V101=0,V102=0,V84=0,V43=0,V49=0,V50=0,V37=0,V14=0,V15=0,V16=0,V=0,V71=0,V31=0,V20=0;
int R,Y,BT,RM;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=117;
x[jvj+1]=10457;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2155&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Y=pile[v[22]+1]; BT=pile[v[22]+2]; RM=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,Y,jvj+8)*/
if((x[jvj+8]!=22)) goto l8;
pile[v[22]]=107; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,Y,jvj+9)*/
for(i=x[jvj+9],V58=0;i>0;i=t[i],V58++)  ;
if((V58!=1)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,Y,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+10,jvj+11)*/
pile[v[22]]=118; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(118,jvj+11,V61)*/
V61=pile[WZ2]; 
if((V61==0)) goto l2;
if((V61!=1)) goto l3;
pile[v[22]]=155; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(155,jvj+11,jvj+18)*/
if((x[jvj+18]!=68)) goto l3;
pile[v[22]]=109; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+11,jvj+19)*/
pile[v[22]]=754; pile[WZ1]=107; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(754,107,V101)*/
V101=pile[WZ2]; 
pile[WZ1]=102; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(754,102,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,Y,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
if((x[jvj+9]<=0)) goto l3;
x[jvj+22]=s[x[jvj+9]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+9];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
(*f[1817])( );     /*NOUV2(V84)*/
V84=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+57)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V101; pile[WZ4]=jvj+87; 
(*f[270])( );     /*QUADRI7(100,21,140,V101,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=103; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,103,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+88; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+23,jvj+88,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V102; pile[WZ4]=jvj+89; 
(*f[270])( );     /*QUADRI7(100,21,140,V102,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=103; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+90; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+21,jvj+90,jvj+59)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V84; pile[WZ4]=jvj+93; 
(*f[270])( );     /*QUADRI7(100,21,140,V84,jvj+93)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=103; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,103,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+93; pile[WZ4]=jvj+92; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+93,jvj+92,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+56; 
(*f[180])( );     /*TRIENS0(jvj+55,(-20),113,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+57,jvj+56,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=114; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+25,114,jvj+58)*/
pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+25,114,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V84; pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,V84,jvj+24)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+24)*/
pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+25; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+25)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=jvj+25; pile[WZ1]=860; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+25,860,jvj+11)*/
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l1:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(155,jvj+2,jvj+7)*/
if((x[jvj+7]==68)) goto l8;
l6:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+43)*/
(*f[1817])( );     /*NOUV2(V71)*/
V71=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+43; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+43,jvj+73)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V71; pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,V71,jvj+112)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+110; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=103; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,103,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+112,jvj+111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+72; 
(*f[180])( );     /*TRIENS0(jvj+71,(-20),113,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+73,jvj+72,jvj+45)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V71; pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,V71,jvj+44)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+44)*/
pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+45; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+45)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=jvj+45; pile[WZ1]=860; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+45,860,jvj+2)*/
goto l9;
l2:pile[v[22]]=155; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(155,jvj+11,jvj+12)*/
if((x[jvj+12]!=68)) goto l3;
pile[v[22]]=109; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+11,jvj+13)*/
pile[v[22]]=754; pile[WZ1]=107; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(754,107,V68)*/
V68=pile[WZ2]; 
if((x[jvj+9]<=0)) goto l3;
x[jvj+14]=s[x[jvj+9]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+9];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
(*f[1817])( );     /*NOUV2(V53)*/
V53=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+13; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+13,jvj+54)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V68; pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(100,21,140,V68,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=103; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+83; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+15,jvj+83,jvj+50)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V53; pile[WZ4]=jvj+86; 
(*f[270])( );     /*QUADRI7(100,21,140,V53,jvj+86)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+84; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=103; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,103,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+85; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+86,jvj+85,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+51; 
(*f[180])( );     /*TRIENS0(jvj+50,(-20),114,jvj+51)*/
pile[v[22]]=jvj+52; pile[WZ2]=jvj+51; pile[WZ3]=113; pile[WZ4]=jvj+53; 
(*f[298])( );     /*TRIENS1(jvj+52,(-20),jvj+51,113,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+54; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+54,jvj+53,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V53; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,V53,jvj+16)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+16)*/
pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+17; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+17)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=jvj+17; pile[WZ1]=860; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+17,860,jvj+11)*/
goto l9;
l3:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,Y,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+26,jvj+2)*/
pile[v[22]]=118; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(118,jvj+2,V43)*/
V43=pile[WZ2]; 
if((V43==2)) goto l4;
if((V43==3)) goto l5;
if((V43==0)) goto l1;
if((V43!=1)) goto l8;
pile[v[22]]=155; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(155,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l8;
l7:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+46)*/
pile[v[22]]=754; pile[WZ1]=102; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(754,102,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,Y,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+48)*/
(*f[1817])( );     /*NOUV2(V20)*/
V20=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+46; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+46,jvj+78)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V31; pile[WZ4]=jvj+113; 
(*f[270])( );     /*QUADRI7(100,21,140,V31,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=103; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,103,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+114; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+48,jvj+114,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V20; pile[WZ4]=jvj+117; 
(*f[270])( );     /*QUADRI7(100,21,140,V20,jvj+117)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=103; pile[WZ2]=jvj+116; 
(*f[54])( );     /*TRI1(jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+116; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+117,jvj+116,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+75; 
(*f[180])( );     /*TRIENS0(jvj+74,(-20),114,jvj+75)*/
pile[v[22]]=jvj+76; pile[WZ2]=jvj+75; pile[WZ3]=113; pile[WZ4]=jvj+77; 
(*f[298])( );     /*TRIENS1(jvj+76,(-20),jvj+75,113,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+78; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+78,jvj+77,jvj+5)*/
pile[v[22]]=832; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(832,jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+4; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+4,jvj+81)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=103; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,103,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+81; pile[WZ4]=jvj+80; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+81,jvj+80,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+5,114,jvj+6)*/
l10:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V20; pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(100,21,140,V20,jvj+49)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+49)*/
pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+5; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+5)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=jvj+5; pile[WZ1]=860; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+5,860,jvj+2)*/
goto l9;
l4:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+27)*/
pile[v[22]]=754; pile[WZ1]=103; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(754,103,V49)*/
V49=pile[WZ2]; 
pile[WZ1]=102; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(754,102,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,Y,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,Y,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
(*f[1817])( );     /*NOUV2(V37)*/
V37=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V49; pile[WZ4]=jvj+94; 
(*f[270])( );     /*QUADRI7(100,21,140,V49,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=103; pile[WZ2]=jvj+95; 
(*f[54])( );     /*TRI1(jvj+94,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+95; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+31,jvj+95,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V50; pile[WZ4]=jvj+96; 
(*f[270])( );     /*QUADRI7(100,21,140,V50,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=103; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,103,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+97; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+29,jvj+97,jvj+64)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V37; pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,V37,jvj+100)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=103; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,103,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+100; pile[WZ4]=jvj+99; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+100,jvj+99,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+61; 
(*f[180])( );     /*TRIENS0(jvj+60,(-20),113,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+62,jvj+61,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=114; pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+33,114,jvj+63)*/
pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(jvj+33,114,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V37; pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,V37,jvj+32)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+32)*/
pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+33; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+33)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=jvj+33; pile[WZ1]=860; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+33,860,jvj+2)*/
goto l9;
l5:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+34)*/
pile[v[22]]=754; pile[WZ1]=160; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(754,160,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=103; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(754,103,V15)*/
V15=pile[WZ2]; 
pile[WZ1]=102; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(754,102,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,Y,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,Y,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=160; pile[WZ1]=Y; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,Y,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+39,jvj+40)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+34; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V14; pile[WZ4]=jvj+101; 
(*f[270])( );     /*QUADRI7(100,21,140,V14,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=103; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,103,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+102; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+40,jvj+102,jvj+68)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V15; pile[WZ4]=jvj+103; 
(*f[270])( );     /*QUADRI7(100,21,140,V15,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=103; pile[WZ2]=jvj+104; 
(*f[54])( );     /*TRI1(jvj+103,103,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+104; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+38,jvj+104,jvj+69)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V16; pile[WZ4]=jvj+105; 
(*f[270])( );     /*QUADRI7(100,21,140,V16,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=103; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,103,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+106; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+36,jvj+106,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+109; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+109)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+107; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=103; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,103,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+109; pile[WZ4]=jvj+108; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+109,jvj+108,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+66; 
(*f[180])( );     /*TRIENS0(jvj+65,(-20),113,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+67,jvj+66,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=114; pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+42,114,jvj+68)*/
pile[WZ2]=jvj+69; 
(*f[36])( );     /*PLUSC0(jvj+42,114,jvj+69)*/
pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+42,114,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+41)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=Y; pile[WZ3]=R; 
(*f[1818])( );     /*COPV0(RM,BT,Y,R,jvj+41)*/
pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+42; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+42)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=jvj+42; pile[WZ1]=860; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+42,860,jvj+2)*/
goto l9;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
