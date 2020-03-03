#include "dx.h"
void TRADCREA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V120=0,V127=0,V109=0;
int A,B,C;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=173;
x[jvj+1]=11801;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1502&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; R=pile[v[22]+3]; RR=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=R; 
(*f[270])( );     /*QUADRI7(100,21,140,V,R)*/
l33:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,20,101,250,RR)*/
if(x[R]!=incon) goto l32;
x[R]=x[RR]=incon;
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+56]=x[C] ;z[jvj+56]=z[C];
l23:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(107,A,jvj+54)*/
pile[v[22]]=102; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,A,jvj+55)*/
pile[v[22]]=jvj+56; pile[WZ1]=B; pile[WZ3]=jvj+57; 
(*f[1234])( );if(v[102]) goto l24;     /*TRADCREE0(jvj+56,B,jvj+55,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(jvj+57,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=111; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,111,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+142; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+142,R)*/
l3:if((x[jvj+54]<=0)) goto l33;
x[jvj+6]=s[x[jvj+54]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+54];
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+6; pile[WZ3]=jvj+7; 
(*f[1234])( );if(v[102]) goto l4;     /*TRADCREE0(C,B,jvj+6,jvj+7)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(R,107,jvj+7)*/
l4:x[jvj+54]=t[x[jvj+54]];
goto l3;
l14:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,A,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=1741)) goto l17;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,A,jvj+29)*/
for(i=x[jvj+29],V120=0;i>0;i=t[i],V120++)  ;
if((V120!=1)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,A,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+30,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,A,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]==1368)) goto l15;
l17:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,A,jvj+35)*/
if((x[jvj+35]==43)) goto l18;
if((x[jvj+35]==22)) goto l19;
if((x[jvj+35]!=73)) goto l29;
pile[v[22]]=102; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,A,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+90,jvj+91)*/
if(x[jvj+91]!=164&&x[jvj+91]!=280) goto l28;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,A,jvj+92)*/
pile[v[22]]=101; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+92,jvj+93)*/
if((x[jvj+93]!=262)) goto l28;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,A,jvj+94)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+95; 
(*f[1234])( );if(v[102]) goto l28;     /*TRADCREE0(C,B,jvj+94,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=jvj+96; 
(*f[255])( );     /*COPEXP0(jvj+95,jvj+96)*/
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(160,A,jvj+97)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+98; 
(*f[1234])( );if(v[102]) goto l28;     /*TRADCREE0(C,B,jvj+97,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; 
(*f[255])( );     /*COPEXP0(jvj+98,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+91; pile[WZ4]=jvj+161; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+91,jvj+161)*/
pile[WZ3]=262; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,20,101,262,jvj+158)*/
pile[v[22]]=jvj+99; pile[WZ1]=160; pile[WZ2]=jvj+157; 
(*f[54])( );     /*TRI1(jvj+99,160,jvj+157)*/
pile[v[22]]=jvj+157; pile[WZ1]=jvj+158; pile[WZ2]=111; pile[WZ3]=jvj+159; 
(*f[58])( );     /*TRI3(jvj+157,jvj+158,111,jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=jvj+96; pile[WZ2]=103; pile[WZ3]=jvj+160; 
(*f[58])( );     /*TRI3(jvj+159,jvj+96,103,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+161; pile[WZ4]=jvj+160; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+161,jvj+160,R)*/
goto l33;
l16:x[jvj+29]=t[x[jvj+29]];
l15:if((x[jvj+29]<=0)) goto l17;
x[jvj+33]=s[x[jvj+29]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+29];
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+33; pile[WZ3]=jvj+34; 
(*f[1234])( );if(v[102]) goto l16;     /*TRADCREE0(C,B,jvj+33,jvj+34)*/
x[R]=x[jvj+34] ;z[R]=z[jvj+34];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+131; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+131)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V127; pile[WZ4]=jvj+135; 
(*f[270])( );     /*QUADRI7(100,21,140,V127,jvj+135)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1859; pile[WZ4]=jvj+173; 
(*f[181])( );     /*QUADRI2(100,20,101,1859,jvj+173)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+173; pile[WZ4]=jvj+133; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+173,jvj+133)*/
pile[v[22]]=jvj+131; pile[WZ1]=111; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+131,111,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=jvj+133; pile[WZ2]=103; pile[WZ3]=jvj+134; 
(*f[58])( );     /*TRI3(jvj+132,jvj+133,103,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+135; pile[WZ4]=jvj+134; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+135,jvj+134,RR)*/
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l18:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,A,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+36,jvj+37)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,A,jvj+38)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+39; 
(*f[1234])( );if(v[102]) goto l29;     /*TRADCREE0(C,B,jvj+38,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+39,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+137; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+137)*/
pile[v[22]]=jvj+40; pile[WZ1]=103; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+40,103,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+136; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+137,jvj+136,R)*/
goto l33;
l19:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,A,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=21)) goto l20;
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+41; pile[WZ3]=jvj+43; 
(*f[1234])( );if(v[102]) goto l20;     /*TRADCREE0(C,B,jvj+41,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,A,jvj+45)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+46; 
(*f[1234])( );if(v[102]) goto l20;     /*TRADCREE0(C,B,jvj+45,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+46,jvj+47)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,A,jvj+48)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+49; 
(*f[1234])( );if(v[102]) goto l20;     /*TRADCREE0(C,B,jvj+48,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; 
(*f[255])( );     /*COPEXP0(jvj+49,jvj+50)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+138; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+50; pile[WZ2]=103; pile[WZ3]=jvj+139; 
(*f[58])( );     /*TRI3(jvj+138,jvj+50,103,jvj+139)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+139; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+139,R)*/
goto l33;
l20:pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+41,jvj+2)*/
pile[v[22]]=118; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(118,jvj+2,V109)*/
V109=pile[WZ2]; 
if((V109==0)) goto l21;
if((V109==1)) goto l22;
if((V109!=2)) goto l26;
pile[v[22]]=1841; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1841,jvj+2,jvj+76)*/
if((x[jvj+76]!=68)) goto l26;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,A,jvj+77)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+78; 
(*f[1234])( );if(v[102]) goto l26;     /*TRADCREE0(C,B,jvj+77,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; 
(*f[255])( );     /*COPEXP0(jvj+78,jvj+79)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,A,jvj+80)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+81; 
(*f[1234])( );if(v[102]) goto l26;     /*TRADCREE0(C,B,jvj+80,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; 
(*f[255])( );     /*COPEXP0(jvj+81,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+151; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=111; pile[WZ2]=jvj+152; 
(*f[54])( );     /*TRI1(jvj+151,111,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+153; 
(*f[58])( );     /*TRI3(jvj+152,jvj+82,103,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+153; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+79,jvj+153,R)*/
pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(155,jvj+2,jvj+21)*/
if((x[jvj+21]!=68)) goto l33;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,A,jvj+22)*/
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(447,C,jvj+23)*/
l12:if((x[jvj+22]<=0)) goto l33;
x[jvj+25]=s[x[jvj+22]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+22];
pile[v[22]]=447; pile[WZ1]=jvj+23; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(447,jvj+23,459,865,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=B; pile[WZ2]=jvj+25; pile[WZ3]=jvj+26; 
(*f[1503])( );if(v[102]) goto l13;     /*BOOTRADA0(jvj+24,B,jvj+25,jvj+26)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(R,107,jvj+26)*/
l13:x[jvj+22]=t[x[jvj+22]];
goto l12;
l21:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(155,jvj+2,jvj+51)*/
if((x[jvj+51]!=68)) goto l26;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(107,A,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+140)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+140; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+140,R)*/
pile[v[22]]=436; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,A,jvj+11)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+12; 
(*f[1234])( );if(v[102]) goto l8;     /*TRADCREE0(C,B,jvj+11,jvj+12)*/
pile[v[22]]=R; pile[WZ1]=436; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(R,436,jvj+12)*/
l8:if((x[jvj+52]<=0)) goto l33;
x[jvj+13]=s[x[jvj+52]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+52];
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+13; pile[WZ3]=jvj+14; 
(*f[1234])( );if(v[102]) goto l9;     /*TRADCREE0(C,B,jvj+13,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(R,107,jvj+14)*/
l9:x[jvj+52]=t[x[jvj+52]];
goto l8;
l22:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(155,jvj+2,jvj+53)*/
if((x[jvj+53]!=68)) goto l24;
x[jvj+56]=incon;
if((x[jvj+2]!=156)) goto l2;
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(447,C,jvj+5)*/
pile[WZ1]=jvj+5; pile[WZ2]=459; pile[WZ3]=228; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(447,jvj+5,459,228,jvj+56)*/
goto l23;
l24:pile[v[22]]=1841; pile[WZ1]=jvj+2; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1841,jvj+2,jvj+59)*/
if((x[jvj+59]!=68)) goto l25;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,A,jvj+60)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+61; 
(*f[1234])( );if(v[102]) goto l25;     /*TRADCREE0(C,B,jvj+60,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[255])( );     /*COPEXP0(jvj+61,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+143; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=111; pile[WZ2]=jvj+144; 
(*f[54])( );     /*TRI1(jvj+143,111,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+144; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+144,R)*/
pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(155,jvj+2,jvj+15)*/
if((x[jvj+15]!=68)) goto l33;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,A,jvj+16)*/
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(447,C,jvj+17)*/
l10:if((x[jvj+16]<=0)) goto l33;
x[jvj+19]=s[x[jvj+16]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+16];
pile[v[22]]=447; pile[WZ1]=jvj+17; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(447,jvj+17,459,865,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=B; pile[WZ2]=jvj+19; pile[WZ3]=jvj+20; 
(*f[1503])( );if(v[102]) goto l11;     /*BOOTRADA0(jvj+18,B,jvj+19,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(R,107,jvj+20)*/
l11:x[jvj+16]=t[x[jvj+16]];
goto l10;
l25:if((x[jvj+2]==1597)) goto l5;
pile[v[22]]=11; pile[WZ1]=jvj+2; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(11,jvj+2,jvj+63)*/
if((x[jvj+63]!=68)) goto l5;
pile[v[22]]=155; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(155,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l5;
l1:pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,A,jvj+4)*/
l5:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(155,jvj+2,jvj+8)*/
if((x[jvj+8]==68)) goto l26;
l6:pile[v[22]]=11; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(11,jvj+2,jvj+9)*/
if((x[jvj+9]==68)) goto l26;
l7:pile[v[22]]=1841; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(1841,jvj+2,jvj+10)*/
l26:pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(1564,145,jvj+83)*/
for(a=x[jvj+83];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l27;
l29:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,A,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+110,jvj+111)*/
if((x[jvj+111]!=1861)) goto l33;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,A,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+112,jvj+113)*/
if((x[jvj+113]==22)) goto l30;
if((x[jvj+113]!=43)) goto l33;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,A,jvj+122)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+123; 
(*f[1234])( );if(v[102]) goto l33;     /*TRADCREE0(C,B,jvj+122,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+124; 
(*f[255])( );     /*COPEXP0(jvj+123,jvj+124)*/
pile[v[22]]=103; pile[WZ1]=jvj+112; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+112,jvj+125)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+126; 
(*f[1234])( );if(v[102]) goto l33;     /*TRADCREE0(C,B,jvj+125,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; 
(*f[255])( );     /*COPEXP0(jvj+126,jvj+127)*/
pile[v[22]]=102; pile[WZ1]=jvj+112; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+112,jvj+128)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+129; 
(*f[1234])( );if(v[102]) goto l33;     /*TRADCREE0(C,B,jvj+128,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=jvj+130; 
(*f[255])( );     /*COPEXP0(jvj+129,jvj+130)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=36; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,36,jvj+170)*/
pile[v[22]]=jvj+124; pile[WZ1]=160; pile[WZ2]=jvj+169; 
(*f[54])( );     /*TRI1(jvj+124,160,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=jvj+170; pile[WZ2]=111; pile[WZ3]=jvj+171; 
(*f[58])( );     /*TRI3(jvj+169,jvj+170,111,jvj+171)*/
pile[v[22]]=jvj+171; pile[WZ1]=jvj+127; pile[WZ2]=103; pile[WZ3]=jvj+172; 
(*f[58])( );     /*TRI3(jvj+171,jvj+127,103,jvj+172)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+130; pile[WZ4]=jvj+172; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+130,jvj+172,R)*/
goto l33;
l27:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,A,jvj+84)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+85; 
(*f[1234])( );if(v[102]) goto l29;     /*TRADCREE0(C,B,jvj+84,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+86; 
(*f[255])( );     /*COPEXP0(jvj+85,jvj+86)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,A,jvj+87)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+88; 
(*f[1234])( );if(v[102]) goto l29;     /*TRADCREE0(C,B,jvj+87,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; 
(*f[255])( );     /*COPEXP0(jvj+88,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+154)*/
pile[v[22]]=jvj+154; pile[WZ1]=111; pile[WZ2]=jvj+155; 
(*f[54])( );     /*TRI1(jvj+154,111,jvj+155)*/
pile[v[22]]=jvj+155; pile[WZ1]=jvj+89; pile[WZ2]=103; pile[WZ3]=jvj+156; 
(*f[58])( );     /*TRI3(jvj+155,jvj+89,103,jvj+156)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+156; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+86,jvj+156,R)*/
goto l33;
l28:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,A,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+100,jvj+101)*/
if(x[jvj+101]!=902&&x[jvj+101]!=904) goto l29;
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+90; pile[WZ3]=jvj+102; 
(*f[1234])( );if(v[102]) goto l29;     /*TRADCREE0(C,B,jvj+90,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[255])( );     /*COPEXP0(jvj+102,jvj+103)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,A,jvj+104)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+105; 
(*f[1234])( );if(v[102]) goto l29;     /*TRADCREE0(C,B,jvj+104,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; 
(*f[255])( );     /*COPEXP0(jvj+105,jvj+106)*/
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(160,A,jvj+107)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+108; 
(*f[1234])( );if(v[102]) goto l29;     /*TRADCREE0(C,B,jvj+107,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; 
(*f[255])( );     /*COPEXP0(jvj+108,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+101; pile[WZ4]=jvj+163; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+101,jvj+163)*/
pile[v[22]]=jvj+109; pile[WZ1]=160; pile[WZ2]=jvj+162; 
(*f[54])( );     /*TRI1(jvj+109,160,jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=jvj+163; pile[WZ2]=111; pile[WZ3]=jvj+164; 
(*f[58])( );     /*TRI3(jvj+162,jvj+163,111,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=jvj+106; pile[WZ2]=103; pile[WZ3]=jvj+165; 
(*f[58])( );     /*TRI3(jvj+164,jvj+106,103,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+165; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+103,jvj+165,R)*/
goto l33;
l30:pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+112,jvj+114)*/
pile[v[22]]=101; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+114,jvj+115)*/
pile[v[22]]=1841; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(1841,jvj+115,jvj+116)*/
if((x[jvj+116]!=68)) goto l33;
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+112; pile[WZ3]=jvj+117; 
(*f[1234])( );if(v[102]) goto l33;     /*TRADCREE0(C,B,jvj+112,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; 
(*f[255])( );     /*COPEXP0(jvj+117,jvj+118)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,A,jvj+119)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+120; 
(*f[1234])( );if(v[102]) goto l33;     /*TRADCREE0(C,B,jvj+119,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; 
(*f[255])( );     /*COPEXP0(jvj+120,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+166; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+166)*/
pile[v[22]]=jvj+166; pile[WZ1]=111; pile[WZ2]=jvj+167; 
(*f[54])( );     /*TRI1(jvj+166,111,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+168; 
(*f[58])( );     /*TRI3(jvj+167,jvj+118,103,jvj+168)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+121; pile[WZ4]=jvj+168; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+121,jvj+168,R)*/
goto l33;
l34:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+64)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+64; pile[WZ3]=jvj+65; 
(*f[1234])( );if(v[102]) goto l5;     /*TRADCREE0(C,B,jvj+64,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(jvj+65,jvj+66)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,A,jvj+67)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+68; 
(*f[1234])( );if(v[102]) goto l5;     /*TRADCREE0(C,B,jvj+67,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[255])( );     /*COPEXP0(jvj+68,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+145)*/
pile[WZ3]=38; pile[WZ4]=jvj+147; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+147)*/
pile[v[22]]=jvj+145; pile[WZ1]=160; pile[WZ2]=jvj+146; 
(*f[54])( );     /*TRI1(jvj+145,160,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=jvj+147; pile[WZ2]=111; pile[WZ3]=jvj+148; 
(*f[58])( );     /*TRI3(jvj+146,jvj+147,111,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+149; 
(*f[58])( );     /*TRI3(jvj+148,jvj+69,103,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+149; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+66,jvj+149,R)*/
goto l33;
l35:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+70)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ2]=jvj+70; pile[WZ3]=jvj+71; 
(*f[1234])( );if(v[102]) goto l26;     /*TRADCREE0(C,B,jvj+70,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; 
(*f[255])( );     /*COPEXP0(jvj+71,jvj+72)*/
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,A,jvj+73)*/
pile[v[22]]=C; pile[WZ1]=B; pile[WZ3]=jvj+74; 
(*f[1234])( );if(v[102]) goto l26;     /*TRADCREE0(C,B,jvj+73,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[255])( );     /*COPEXP0(jvj+74,jvj+75)*/
pile[v[22]]=jvj+72; pile[WZ1]=111; pile[WZ2]=jvj+150; 
(*f[54])( );     /*TRI1(jvj+72,111,jvj+150)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+150; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+75,jvj+150,R)*/
goto l33;
}
