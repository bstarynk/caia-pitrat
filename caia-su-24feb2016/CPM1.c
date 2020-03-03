#include "dx.h"
void CPM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V213=0,C=0,I=0,SS=0,V=0,V276=0,V308=0,V295=0,V198=0,V55=0,CM=0,V299=0,V134=0,V30=0;
int H,S,R,A,B,VL,NV,XX,BOOT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=323;
x[jvj+1]=10576;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1985&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; S=pile[v[22]+1]; R=pile[v[22]+2]; A=pile[v[22]+3]; B=pile[v[22]+4]; VL=pile[v[22]+5]; NV=pile[v[22]+6]; XX=pile[v[22]+7]; BOOT=pile[v[22]+8]; v[22]+=9; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
CM=incon;
pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,B,jvj+31)*/
pile[v[22]]=A; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(A,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+138; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+138)*/
pile[WZ3]=101; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,101,jvj+144)*/
pile[v[22]]=jvj+32; pile[WZ1]=103; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+32,103,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+143; pile[WZ5]=jvj+142; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+144,jvj+143,jvj+142)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+31; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+31,jvj+140)*/
pile[v[22]]=jvj+138; pile[WZ1]=111; pile[WZ2]=jvj+139; 
(*f[54])( );     /*TRI1(jvj+138,111,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=jvj+140; pile[WZ2]=103; pile[WZ3]=jvj+141; 
(*f[58])( );     /*TRI3(jvj+139,jvj+140,103,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+142; pile[WZ4]=jvj+141; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+142,jvj+141,jvj+33)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(R,107,jvj+33)*/
l8:pile[v[22]]=162; pile[WZ1]=B; 
(*f[219])( );if(v[102]) goto l9;     /*FNDC2(162,B,C)*/
C=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(A,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+145; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+145)*/
pile[WZ3]=162; pile[WZ4]=jvj+151; 
(*f[181])( );     /*QUADRI2(100,20,101,162,jvj+151)*/
pile[v[22]]=jvj+34; pile[WZ1]=103; pile[WZ2]=jvj+150; 
(*f[54])( );     /*TRI1(jvj+34,103,jvj+150)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+151; pile[WZ4]=jvj+150; pile[WZ5]=jvj+149; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+151,jvj+150,jvj+149)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=C; pile[WZ4]=jvj+147; 
(*f[272])( );     /*QUADRI9(100,89,162,C,jvj+147)*/
pile[v[22]]=jvj+145; pile[WZ1]=111; pile[WZ2]=jvj+146; 
(*f[54])( );     /*TRI1(jvj+145,111,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=jvj+147; pile[WZ2]=103; pile[WZ3]=jvj+148; 
(*f[58])( );     /*TRI3(jvj+146,jvj+147,103,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+148; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+149,jvj+148,jvj+35)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(R,107,jvj+35)*/
l9:pile[v[22]]=130; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,B,I)*/
I=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(A,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+152)*/
pile[WZ3]=130; pile[WZ4]=jvj+158; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+158)*/
pile[v[22]]=jvj+36; pile[WZ1]=103; pile[WZ2]=jvj+157; 
(*f[54])( );     /*TRI1(jvj+36,103,jvj+157)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+158; pile[WZ4]=jvj+157; pile[WZ5]=jvj+156; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+158,jvj+157,jvj+156)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+154; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+154)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+154; pile[WZ2]=103; pile[WZ3]=jvj+155; 
(*f[58])( );     /*TRI3(jvj+153,jvj+154,103,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+156; pile[WZ4]=jvj+155; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+156,jvj+155,jvj+37)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(R,107,jvj+37)*/
l10:pile[v[22]]=163; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,B,SS)*/
SS=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(A,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+159; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+159)*/
pile[WZ3]=163; pile[WZ4]=jvj+165; 
(*f[181])( );     /*QUADRI2(100,20,101,163,jvj+165)*/
pile[v[22]]=jvj+38; pile[WZ1]=103; pile[WZ2]=jvj+164; 
(*f[54])( );     /*TRI1(jvj+38,103,jvj+164)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+165; pile[WZ4]=jvj+164; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+165,jvj+164,jvj+163)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=SS; pile[WZ4]=jvj+161; 
(*f[270])( );     /*QUADRI7(100,96,163,SS,jvj+161)*/
pile[v[22]]=jvj+159; pile[WZ1]=111; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+159,111,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=jvj+161; pile[WZ2]=103; pile[WZ3]=jvj+162; 
(*f[58])( );     /*TRI3(jvj+160,jvj+161,103,jvj+162)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+163; pile[WZ4]=jvj+162; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+163,jvj+162,jvj+39)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(R,107,jvj+39)*/
l11:pile[v[22]]=140; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,B,V)*/
V=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(A,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+166; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+166)*/
pile[WZ3]=140; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,140,jvj+172)*/
pile[v[22]]=jvj+40; pile[WZ1]=103; pile[WZ2]=jvj+171; 
(*f[54])( );     /*TRI1(jvj+40,103,jvj+171)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+172; pile[WZ4]=jvj+171; pile[WZ5]=jvj+170; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+172,jvj+171,jvj+170)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V; pile[WZ4]=jvj+168; 
(*f[270])( );     /*QUADRI7(100,96,163,V,jvj+168)*/
pile[v[22]]=jvj+166; pile[WZ1]=111; pile[WZ2]=jvj+167; 
(*f[54])( );     /*TRI1(jvj+166,111,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=jvj+168; pile[WZ2]=103; pile[WZ3]=jvj+169; 
(*f[58])( );     /*TRI3(jvj+167,jvj+168,103,jvj+169)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+170; pile[WZ4]=jvj+169; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+170,jvj+169,jvj+41)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(R,107,jvj+41)*/
l12:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,B,jvj+3)*/
if((x[jvj+3]==387)) goto l13;
if((x[jvj+3]==1317)) goto l14;
if((x[jvj+3]!=22)) goto l25;
pile[v[22]]=111; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,B,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+47,jvj+48)*/
if(x[jvj+48]!=654&&x[jvj+48]!=848) goto l16;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,B,jvj+49)*/
l15:if((x[jvj+49]<=0)) goto l16;
x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(R,107,jvj+50)*/
x[jvj+49]=t[x[jvj+49]];
goto l15;
l1:x[jvj+10]=vo[15];z[jvj+10]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(297,jvj+10,jvj+11)*/
pile[v[22]]=147; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(147,jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V55) goto l20;
l21:pile[v[22]]=418; pile[WZ1]=jvj+48; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(418,jvj+48,jvj+65)*/
if((x[jvj+65]!=68)) goto l25;
pile[v[22]]=111; pile[WZ1]=XX; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,XX,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]==910)) goto l25;
l22:pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,B,jvj+18)*/
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,B,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=653)) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==653)) goto l25;
l23:pile[v[22]]=jvj+18; pile[WZ1]=jvj+21; pile[WZ2]=jvj+66; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+21,jvj+66)*/
if((x[jvj+66]==134)) goto l24;
l25:if((x[H]!=67)) goto l28;
if((x[BOOT]!=68)) goto l26;
if((x[jvj+3]==178)) goto l26;
pile[v[22]]=763; pile[WZ1]=jvj+3; pile[WZ2]=jvj+67; 
(*f[33])( );     /*FNDE0(763,jvj+3,jvj+67)*/
if((x[jvj+67]==0)) goto l26;
pile[v[22]]=A; pile[WZ1]=jvj+68; 
(*f[255])( );     /*COPEXP0(A,jvj+68)*/
(*f[1817])( );     /*NOUV2(V299)*/
V299=pile[v[22]]; 
x[jvj+30]=0 ;z[jvj+30]=0;
x[jvj+28]=d[76];z[jvj+28]=0;
l6:if((x[jvj+67]>0)) goto l7;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+69; 
(*f[299])( );     /*COPEL0(jvj+30,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+199; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=111; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+199,111,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+69; pile[WZ2]=107; pile[WZ3]=jvj+201; 
(*f[301])( );     /*TRI11(jvj+200,jvj+69,107,jvj+201)*/
pile[v[22]]=jvj+201; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+201,22,100,jvj+70)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(R,107,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=100; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+208)*/
pile[v[22]]=jvj+68; pile[WZ1]=103; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+68,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+208; pile[WZ4]=jvj+207; pile[WZ5]=jvj+206; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+208,jvj+207,jvj+206)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+204)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V299; pile[WZ4]=jvj+202; 
(*f[270])( );     /*QUADRI7(100,21,140,V299,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=436; pile[WZ2]=jvj+203; 
(*f[54])( );     /*TRI1(jvj+202,436,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=jvj+204; pile[WZ2]=111; pile[WZ3]=jvj+205; 
(*f[58])( );     /*TRI3(jvj+203,jvj+204,111,jvj+205)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+206; pile[WZ4]=jvj+205; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+206,jvj+205,jvj+71)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(R,107,jvj+71)*/
l26:if((x[jvj+3]==178)) goto l28;
if((x[BOOT]==67)) goto l27;
pile[v[22]]=763; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(763,jvj+3,jvj+4)*/
if((x[jvj+4]==0)) goto l27;
l28:x[jvj+321]=w[x[jvj+3]][8];
if((x[jvj+3]!=22)) goto l29;
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,B,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+5,jvj+6)*/
if(x[jvj+6]==654||x[jvj+6]==848) goto l31;
l29:if((x[jvj+321]<=0)) goto l31;
x[jvj+74]=s[x[jvj+321]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+321];
pile[v[22]]=jvj+74; pile[WZ1]=B; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(jvj+74,B,jvj+75)*/
if((x[jvj+75]==0)) goto l30;
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(216,158,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=R; pile[WZ4]=jvj+74; pile[WZ5]=S; pile[v[22]+6]=VL; pile[v[22]+7]=NV; pile[v[22]+8]=XX; pile[v[22]+9]=BOOT; 
(*f[1984])( );     /*CPN0(jvj+76,A,B,R,jvj+74,S,VL,NV,XX,BOOT)*/
l30:x[jvj+321]=t[x[jvj+321]];
goto l29;
l2:x[jvj+100]=x[A] ;z[jvj+100]=z[A];
l40:pile[v[22]]=jvj+100; pile[WZ1]=jvj+101; 
(*f[255])( );     /*COPEXP0(jvj+100,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+276; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+276)*/
pile[WZ3]=100; pile[WZ4]=jvj+282; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+282)*/
pile[v[22]]=jvj+99; pile[WZ1]=103; pile[WZ2]=jvj+281; 
(*f[54])( );     /*TRI1(jvj+99,103,jvj+281)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+282; pile[WZ4]=jvj+281; pile[WZ5]=jvj+280; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+282,jvj+281,jvj+280)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+98; pile[WZ4]=jvj+278; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+98,jvj+278)*/
pile[v[22]]=jvj+276; pile[WZ1]=111; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(jvj+276,111,jvj+277)*/
pile[v[22]]=jvj+277; pile[WZ1]=jvj+278; pile[WZ2]=103; pile[WZ3]=jvj+279; 
(*f[58])( );     /*TRI3(jvj+277,jvj+278,103,jvj+279)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+280; pile[WZ4]=jvj+279; pile[WZ5]=jvj+102; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+280,jvj+279,jvj+102)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+102; 
(*f[36])( );     /*PLUSC0(R,107,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+283; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+283)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V134; pile[WZ4]=jvj+286; 
(*f[270])( );     /*QUADRI7(100,21,140,V134,jvj+286)*/
pile[v[22]]=jvj+283; pile[WZ1]=111; pile[WZ2]=jvj+284; 
(*f[54])( );     /*TRI1(jvj+283,111,jvj+284)*/
pile[v[22]]=jvj+284; pile[WZ1]=jvj+101; pile[WZ2]=103; pile[WZ3]=jvj+285; 
(*f[58])( );     /*TRI3(jvj+284,jvj+101,103,jvj+285)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+286; pile[WZ4]=jvj+285; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+286,jvj+285,jvj+103)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+103; 
(*f[36])( );     /*PLUSC0(R,107,jvj+103)*/
l41:pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,B,jvj+104)*/
pile[v[22]]=101; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+104,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=22)) goto l42;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+16,jvj+17)*/
if(x[jvj+17]==650||x[jvj+17]==651||x[jvj+17]==653) goto l44;
l42:pile[v[22]]=A; pile[WZ1]=jvj+106; 
(*f[255])( );     /*COPEXP0(A,jvj+106)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+107; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+107)*/
if((x[jvj+300]=w[x[jvj+105]][3])==incon) goto l44;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+287; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+287)*/
pile[WZ3]=100; pile[WZ4]=jvj+293; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+293)*/
pile[v[22]]=jvj+106; pile[WZ1]=103; pile[WZ2]=jvj+292; 
(*f[54])( );     /*TRI1(jvj+106,103,jvj+292)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+293; pile[WZ4]=jvj+292; pile[WZ5]=jvj+291; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+293,jvj+292,jvj+291)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+105; pile[WZ4]=jvj+289; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+105,jvj+289)*/
pile[v[22]]=jvj+287; pile[WZ1]=111; pile[WZ2]=jvj+288; 
(*f[54])( );     /*TRI1(jvj+287,111,jvj+288)*/
pile[v[22]]=jvj+288; pile[WZ1]=jvj+289; pile[WZ2]=103; pile[WZ3]=jvj+290; 
(*f[58])( );     /*TRI3(jvj+288,jvj+289,103,jvj+290)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+291; pile[WZ4]=jvj+290; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+291,jvj+290,jvj+108)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+108; 
(*f[36])( );     /*PLUSC0(R,107,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+294; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+294)*/
pile[WZ3]=jvj+300; pile[WZ4]=jvj+299; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+300,jvj+299)*/
pile[v[22]]=jvj+106; pile[WZ1]=103; pile[WZ2]=jvj+298; 
(*f[54])( );     /*TRI1(jvj+106,103,jvj+298)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+299; pile[WZ4]=jvj+298; pile[WZ5]=jvj+296; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+299,jvj+298,jvj+296)*/
pile[v[22]]=jvj+294; pile[WZ1]=111; pile[WZ2]=jvj+295; 
(*f[54])( );     /*TRI1(jvj+294,111,jvj+295)*/
pile[v[22]]=jvj+295; pile[WZ1]=jvj+296; pile[WZ2]=103; pile[WZ3]=jvj+297; 
(*f[58])( );     /*TRI3(jvj+295,jvj+296,103,jvj+297)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+297; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+107,jvj+297,jvj+109)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+109; 
(*f[36])( );     /*PLUSC0(R,107,jvj+109)*/
l44:if((CM!=68)) goto l45;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,B,jvj+112)*/
pile[v[22]]=103; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,B,jvj+113)*/
pile[v[22]]=A; pile[WZ1]=jvj+114; 
(*f[255])( );     /*COPEXP0(A,jvj+114)*/
(*f[1817])( );     /*NOUV2(V30)*/
V30=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=102; pile[WZ4]=jvj+306; 
(*f[181])( );     /*QUADRI2(100,20,101,102,jvj+306)*/
pile[WZ3]=103; pile[WZ4]=jvj+307; 
(*f[181])( );     /*QUADRI2(100,20,101,103,jvj+307)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+305; 
(*f[54])( );     /*TRI1(128,100,jvj+305)*/
pile[v[22]]=jvj+305; pile[WZ1]=128; pile[WZ2]=jvj+306; 
(*f[36])( );     /*PLUSC0(jvj+305,128,jvj+306)*/
pile[WZ2]=jvj+307; 
(*f[36])( );     /*PLUSC0(jvj+305,128,jvj+307)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=180; pile[WZ4]=jvj+303; 
(*f[181])( );     /*QUADRI2(100,20,101,180,jvj+303)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V30; pile[WZ4]=jvj+301; 
(*f[270])( );     /*QUADRI7(100,21,140,V30,jvj+301)*/
pile[v[22]]=jvj+301; pile[WZ1]=436; pile[WZ2]=jvj+302; 
(*f[54])( );     /*TRI1(jvj+301,436,jvj+302)*/
pile[v[22]]=jvj+302; pile[WZ1]=jvj+303; pile[WZ2]=111; pile[WZ3]=jvj+304; 
(*f[58])( );     /*TRI3(jvj+302,jvj+303,111,jvj+304)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+305; pile[WZ4]=jvj+304; pile[WZ5]=jvj+115; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+305,jvj+304,jvj+115)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+115; 
(*f[36])( );     /*PLUSC0(R,107,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V30; pile[WZ4]=jvj+309; 
(*f[270])( );     /*QUADRI7(100,21,140,V30,jvj+309)*/
pile[v[22]]=jvj+114; pile[WZ1]=103; pile[WZ2]=jvj+308; 
(*f[54])( );     /*TRI1(jvj+114,103,jvj+308)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+309; pile[WZ4]=jvj+308; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+309,jvj+308,jvj+116)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+116; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+112,jvj+116,R,S,VL,NV,XX,BOOT)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=268; pile[WZ4]=jvj+314; 
(*f[181])( );     /*QUADRI2(100,20,101,268,jvj+314)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V30; pile[WZ4]=jvj+312; 
(*f[270])( );     /*QUADRI7(100,21,140,V30,jvj+312)*/
pile[v[22]]=jvj+312; pile[WZ1]=103; pile[WZ2]=jvj+313; 
(*f[54])( );     /*TRI1(jvj+312,103,jvj+313)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+314; pile[WZ4]=jvj+313; pile[WZ5]=jvj+311; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+314,jvj+313,jvj+311)*/
pile[v[22]]=jvj+114; pile[WZ1]=103; pile[WZ2]=jvj+310; 
(*f[54])( );     /*TRI1(jvj+114,103,jvj+310)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+311; pile[WZ4]=jvj+310; pile[WZ5]=jvj+117; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+311,jvj+310,jvj+117)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+117; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+113,jvj+117,R,S,VL,NV,XX,BOOT)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=111; pile[WZ4]=jvj+316; 
(*f[181])( );     /*QUADRI2(100,20,101,111,jvj+316)*/
pile[v[22]]=jvj+114; pile[WZ1]=103; pile[WZ2]=jvj+315; 
(*f[54])( );     /*TRI1(jvj+114,103,jvj+315)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+316; pile[WZ4]=jvj+315; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+316,jvj+315,jvj+118)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+118; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+77,jvj+118,R,S,VL,NV,XX,BOOT)*/
l45:if((x[H]!=67)) goto l51;
if((CM==67)) goto l46;
if((CM!=68)) goto l51;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,B,jvj+124)*/
x[jvj+323]=w[x[jvj+124]][9];
pile[v[22]]=A; pile[WZ1]=jvj+125; 
(*f[255])( );     /*COPEXP0(A,jvj+125)*/
l49:if((x[jvj+323]<=0)) goto l51;
x[jvj+126]=s[x[jvj+323]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+323];
if(x[jvj+126]==102||x[jvj+126]==103) goto l50;
pile[v[22]]=jvj+126; pile[WZ1]=B; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(jvj+126,B,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+126; pile[WZ4]=jvj+320; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+126,jvj+320)*/
pile[v[22]]=jvj+125; pile[WZ1]=103; pile[WZ2]=jvj+319; 
(*f[54])( );     /*TRI1(jvj+125,103,jvj+319)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+320; pile[WZ4]=jvj+319; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+320,jvj+319,jvj+128)*/
pile[v[22]]=jvj+127; pile[WZ1]=jvj+128; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+127,jvj+128,R,S,VL,NV,XX,BOOT)*/
l50:x[jvj+323]=t[x[jvj+323]];
goto l49;
l4:x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=110; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(110,jvj+27,V213)*/
V213=pile[WZ2]; 
if((V213!=V198)) goto l5;
x[jvj+61]=x[jvj+27] ;z[jvj+61]=z[jvj+27];
l18:pile[v[22]]=S; pile[WZ1]=159; pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(S,159,jvj+61)*/
pile[v[22]]=A; pile[WZ1]=444; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(A,444,jvj+194)*/
pile[v[22]]=117; pile[WZ1]=NV; pile[WZ2]=218; pile[WZ3]=R; pile[WZ4]=jvj+194; pile[WZ5]=jvj+62; 
(*f[725])( );     /*QUADRI14(117,NV,218,R,jvj+194,jvj+62)*/
pile[v[22]]=jvj+61; pile[WZ1]=258; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+61,258,jvj+62)*/
l19:if(x[jvj+48]!=650&&x[jvj+48]!=651) goto l21;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,B,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+7,V55)*/
V55=pile[WZ2]; 
if((x[BOOT]!=68)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]==1704||x[jvj+9]==1765) goto l1;
l20:pile[v[22]]=A; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(A,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+195; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+195)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V55; pile[WZ4]=jvj+198; 
(*f[270])( );     /*QUADRI7(100,21,140,V55,jvj+198)*/
pile[v[22]]=jvj+195; pile[WZ1]=111; pile[WZ2]=jvj+196; 
(*f[54])( );     /*TRI1(jvj+195,111,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=jvj+63; pile[WZ2]=103; pile[WZ3]=jvj+197; 
(*f[58])( );     /*TRI3(jvj+196,jvj+63,103,jvj+197)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+198; pile[WZ4]=jvj+197; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+198,jvj+197,jvj+64)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(R,107,jvj+64)*/
goto l21;
l5:x[jvj+26]=t[x[jvj+26]];
l3:if((x[jvj+26]>0)) goto l4;
pile[v[22]]=V198; pile[WZ1]=110; pile[WZ2]=jvj+61; 
(*f[329])( );     /*TRI13(V198,110,jvj+61)*/
goto l18;
l7:x[jvj+137]=s[x[jvj+67]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+67];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+132; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+132)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V299; pile[WZ4]=jvj+136; 
(*f[270])( );     /*QUADRI7(100,21,140,V299,jvj+136)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+137; pile[WZ4]=jvj+134; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+137,jvj+134)*/
pile[v[22]]=jvj+132; pile[WZ1]=111; pile[WZ2]=jvj+133; 
(*f[54])( );     /*TRI1(jvj+132,111,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+134; pile[WZ2]=103; pile[WZ3]=jvj+135; 
(*f[58])( );     /*TRI3(jvj+133,jvj+134,103,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+136; pile[WZ4]=jvj+135; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+136,jvj+135,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[196])( );     /*PLUF0(jvj+28,jvj+29,jvj+30)*/
x[jvj+67]=t[x[jvj+67]];
goto l6;
l13:pile[v[22]]=1670; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(1670,B,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(A,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+173; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+173)*/
pile[WZ3]=1670; pile[WZ4]=jvj+179; 
(*f[181])( );     /*QUADRI2(100,20,101,1670,jvj+179)*/
pile[v[22]]=jvj+42; pile[WZ1]=103; pile[WZ2]=jvj+178; 
(*f[54])( );     /*TRI1(jvj+42,103,jvj+178)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+179; pile[WZ4]=jvj+178; pile[WZ5]=jvj+177; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+179,jvj+178,jvj+177)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V276; pile[WZ4]=jvj+175; 
(*f[270])( );     /*QUADRI7(100,96,163,V276,jvj+175)*/
pile[v[22]]=jvj+173; pile[WZ1]=111; pile[WZ2]=jvj+174; 
(*f[54])( );     /*TRI1(jvj+173,111,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=jvj+175; pile[WZ2]=103; pile[WZ3]=jvj+176; 
(*f[58])( );     /*TRI3(jvj+174,jvj+175,103,jvj+176)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+177; pile[WZ4]=jvj+176; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+177,jvj+176,jvj+43)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(R,107,jvj+43)*/
goto l25;
l14:pile[v[22]]=B; pile[WZ1]=1352; pile[WZ3]=jvj+44; 
(*f[45])( );if(v[102]) goto l25;     /*FNDZ0(B,1352,V308,jvj+44)*/
V308=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(A,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+180)*/
pile[WZ3]=1352; pile[WZ4]=jvj+186; 
(*f[181])( );     /*QUADRI2(100,20,101,1352,jvj+186)*/
pile[v[22]]=jvj+45; pile[WZ1]=103; pile[WZ2]=jvj+185; 
(*f[54])( );     /*TRI1(jvj+45,103,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+186; pile[WZ4]=jvj+185; pile[WZ5]=jvj+184; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+186,jvj+185,jvj+184)*/
pile[WZ1]=1427; pile[WZ2]=1352; pile[WZ3]=V308; pile[WZ4]=jvj+182; 
(*f[271])( );     /*QUADRI8(100,1427,1352,V308,jvj+182)*/
pile[v[22]]=jvj+180; pile[WZ1]=111; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,111,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+182; pile[WZ2]=103; pile[WZ3]=jvj+183; 
(*f[58])( );     /*TRI3(jvj+181,jvj+182,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+184; pile[WZ4]=jvj+183; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+184,jvj+183,jvj+46)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(R,107,jvj+46)*/
goto l25;
l16:if((x[BOOT]==68)) goto l17;
if((x[BOOT]!=67)) goto l19;
if(x[jvj+48]!=650&&x[jvj+48]!=651) goto l19;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,B,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+57,V198)*/
V198=pile[WZ2]; 
x[jvj+58]=vo[15];z[jvj+58]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(297,jvj+58,jvj+59)*/
pile[v[22]]=147; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(147,jvj+59,jvj+60)*/
for(a=x[jvj+60];a>0;a=t[a]) if(s[a]==V198) goto l19;
x[jvj+61]=incon;
pile[v[22]]=159; pile[WZ1]=S; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(159,S,jvj+26)*/
goto l3;
l17:if(x[jvj+48]!=650&&x[jvj+48]!=651) goto l19;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,B,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+51,V295)*/
V295=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+52,jvj+53)*/
if(x[jvj+53]!=1704&&x[jvj+53]!=1765) goto l19;
pile[v[22]]=218; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+53,jvj+54)*/
pile[v[22]]=A; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(A,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+187)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V295; pile[WZ4]=jvj+191; 
(*f[270])( );     /*QUADRI7(100,21,140,V295,jvj+191)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+54; pile[WZ4]=jvj+193; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+54,jvj+193)*/
pile[v[22]]=jvj+55; pile[WZ1]=103; pile[WZ2]=jvj+192; 
(*f[54])( );     /*TRI1(jvj+55,103,jvj+192)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+193; pile[WZ4]=jvj+192; pile[WZ5]=jvj+189; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+193,jvj+192,jvj+189)*/
pile[v[22]]=jvj+187; pile[WZ1]=111; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+187,111,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=jvj+189; pile[WZ2]=103; pile[WZ3]=jvj+190; 
(*f[58])( );     /*TRI3(jvj+188,jvj+189,103,jvj+190)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+191; pile[WZ4]=jvj+190; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+191,jvj+190,jvj+56)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(R,107,jvj+56)*/
goto l19;
l24:CM=68;
goto l25;
l27:pile[v[22]]=A; pile[WZ1]=jvj+72; 
(*f[255])( );     /*COPEXP0(A,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+209; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+209)*/
pile[WZ3]=100; pile[WZ4]=jvj+215; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+215)*/
pile[v[22]]=jvj+72; pile[WZ1]=103; pile[WZ2]=jvj+214; 
(*f[54])( );     /*TRI1(jvj+72,103,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+215; pile[WZ4]=jvj+214; pile[WZ5]=jvj+213; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+215,jvj+214,jvj+213)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+3; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+3,jvj+211)*/
pile[v[22]]=jvj+209; pile[WZ1]=111; pile[WZ2]=jvj+210; 
(*f[54])( );     /*TRI1(jvj+209,111,jvj+210)*/
pile[v[22]]=jvj+210; pile[WZ1]=jvj+211; pile[WZ2]=103; pile[WZ3]=jvj+212; 
(*f[58])( );     /*TRI3(jvj+210,jvj+211,103,jvj+212)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+213; pile[WZ4]=jvj+212; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+213,jvj+212,jvj+73)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+73; 
(*f[36])( );     /*PLUSC0(R,107,jvj+73)*/
goto l28;
l31:if(CM==incon) goto l32;
l33:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,B,jvj+77)*/
pile[v[22]]=101; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+77,jvj+78)*/
if((x[jvj+78]==848)) goto l34;
if((x[jvj+78]==654)) goto l36;
if((x[jvj+78]==650)) goto l43;
if((x[jvj+78]!=151)) goto l44;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,B,jvj+111)*/
pile[v[22]]=67; pile[WZ1]=S; pile[WZ2]=R; pile[WZ3]=A; pile[WZ4]=jvj+111; pile[WZ5]=VL; pile[v[22]+6]=NV; pile[v[22]+7]=XX; pile[v[22]+8]=BOOT; 
(*f[1985])( );     /*CPM1(67,S,R,A,jvj+111,VL,NV,XX,BOOT)*/
goto l44;
l32:CM=67;
goto l33;
l34:pile[v[22]]=A; pile[WZ1]=jvj+79; 
(*f[255])( );     /*COPEXP0(A,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+216; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+216)*/
pile[WZ3]=100; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+222)*/
pile[v[22]]=jvj+79; pile[WZ1]=103; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+79,103,jvj+221)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+222; pile[WZ4]=jvj+221; pile[WZ5]=jvj+220; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+222,jvj+221,jvj+220)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=570; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,20,101,570,jvj+218)*/
pile[v[22]]=jvj+216; pile[WZ1]=111; pile[WZ2]=jvj+217; 
(*f[54])( );     /*TRI1(jvj+216,111,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=jvj+218; pile[WZ2]=103; pile[WZ3]=jvj+219; 
(*f[58])( );     /*TRI3(jvj+217,jvj+218,103,jvj+219)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+220; pile[WZ4]=jvj+219; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+220,jvj+219,jvj+80)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(R,107,jvj+80)*/
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,B,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=102; pile[WZ4]=jvj+224; 
(*f[181])( );     /*QUADRI2(100,20,101,102,jvj+224)*/
pile[v[22]]=jvj+79; pile[WZ1]=103; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+79,103,jvj+223)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+224; pile[WZ4]=jvj+223; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+224,jvj+223,jvj+82)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+81,jvj+82,R,S,VL,NV,XX,BOOT)*/
l35:pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,B,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=103; pile[WZ4]=jvj+226; 
(*f[181])( );     /*QUADRI2(100,20,101,103,jvj+226)*/
pile[v[22]]=jvj+79; pile[WZ1]=103; pile[WZ2]=jvj+225; 
(*f[54])( );     /*TRI1(jvj+79,103,jvj+225)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+226; pile[WZ4]=jvj+225; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+226,jvj+225,jvj+84)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+83,jvj+84,R,S,VL,NV,XX,BOOT)*/
goto l44;
l36:pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,B,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+14,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+85,jvj+86)*/
if((x[jvj+86]!=653)) goto l39;
pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,B,jvj+87)*/
pile[v[22]]=101; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+87,jvj+88)*/
if((x[jvj+88]==324)) goto l37;
if((x[jvj+88]!=201)) goto l38;
pile[v[22]]=A; pile[WZ1]=jvj+91; 
(*f[255])( );     /*COPEXP0(A,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+241)*/
pile[WZ3]=48; pile[WZ4]=jvj+244; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+244)*/
pile[WZ3]=29; pile[WZ4]=jvj+248; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+248)*/
pile[WZ3]=130; pile[WZ4]=jvj+254; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+254)*/
pile[v[22]]=jvj+91; pile[WZ1]=103; pile[WZ2]=jvj+253; 
(*f[54])( );     /*TRI1(jvj+91,103,jvj+253)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+254; pile[WZ4]=jvj+253; pile[WZ5]=jvj+252; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+254,jvj+253,jvj+252)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+250; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+250)*/
pile[v[22]]=jvj+248; pile[WZ1]=111; pile[WZ2]=jvj+249; 
(*f[54])( );     /*TRI1(jvj+248,111,jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=jvj+250; pile[WZ2]=103; pile[WZ3]=jvj+251; 
(*f[58])( );     /*TRI3(jvj+249,jvj+250,103,jvj+251)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+252; pile[WZ4]=jvj+251; pile[WZ5]=jvj+246; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+252,jvj+251,jvj+246)*/
pile[v[22]]=jvj+244; pile[WZ1]=111; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,111,jvj+245)*/
pile[v[22]]=jvj+246; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+247; 
(*f[298])( );     /*TRIENS1(jvj+246,(-20),jvj+245,107,jvj+247)*/
pile[v[22]]=jvj+247; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+242; 
(*f[58])( );     /*TRI3(jvj+247,22,100,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+255; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+255)*/
pile[WZ3]=25; pile[WZ4]=jvj+259; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+259)*/
pile[WZ3]=101; pile[WZ4]=jvj+266; 
(*f[181])( );     /*QUADRI2(100,20,101,101,jvj+266)*/
pile[WZ3]=111; pile[WZ4]=jvj+268; 
(*f[181])( );     /*QUADRI2(100,20,101,111,jvj+268)*/
pile[v[22]]=jvj+91; pile[WZ1]=103; pile[WZ2]=jvj+267; 
(*f[54])( );     /*TRI1(jvj+91,103,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+268; pile[WZ4]=jvj+267; pile[WZ5]=jvj+264; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+268,jvj+267,jvj+264)*/
pile[v[22]]=jvj+264; pile[WZ1]=103; pile[WZ2]=jvj+265; 
(*f[54])( );     /*TRI1(jvj+264,103,jvj+265)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+266; pile[WZ4]=jvj+265; pile[WZ5]=jvj+263; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+266,jvj+265,jvj+263)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+261; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+261)*/
pile[v[22]]=jvj+259; pile[WZ1]=111; pile[WZ2]=jvj+260; 
(*f[54])( );     /*TRI1(jvj+259,111,jvj+260)*/
pile[v[22]]=jvj+260; pile[WZ1]=jvj+261; pile[WZ2]=103; pile[WZ3]=jvj+262; 
(*f[58])( );     /*TRI3(jvj+260,jvj+261,103,jvj+262)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+263; pile[WZ4]=jvj+262; pile[WZ5]=jvj+257; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+263,jvj+262,jvj+257)*/
pile[v[22]]=jvj+255; pile[WZ1]=111; pile[WZ2]=jvj+256; 
(*f[54])( );     /*TRI1(jvj+255,111,jvj+256)*/
pile[v[22]]=jvj+257; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+258; 
(*f[298])( );     /*TRIENS1(jvj+257,(-20),jvj+256,107,jvj+258)*/
pile[v[22]]=jvj+258; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+243; 
(*f[58])( );     /*TRI3(jvj+258,22,100,jvj+243)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+241; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+241,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=107; pile[WZ2]=jvj+242; 
(*f[36])( );     /*PLUSC0(jvj+92,107,jvj+242)*/
pile[WZ2]=jvj+243; 
(*f[36])( );     /*PLUSC0(jvj+92,107,jvj+243)*/
pile[v[22]]=R; pile[WZ2]=jvj+92; 
(*f[36])( );     /*PLUSC0(R,107,jvj+92)*/
l38:if(x[jvj+88]==324||x[jvj+88]==201) goto l39;
pile[v[22]]=A; pile[WZ1]=jvj+93; 
(*f[255])( );     /*COPEXP0(A,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+269)*/
pile[WZ3]=100; pile[WZ4]=jvj+275; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+275)*/
pile[v[22]]=jvj+93; pile[WZ1]=103; pile[WZ2]=jvj+274; 
(*f[54])( );     /*TRI1(jvj+93,103,jvj+274)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+275; pile[WZ4]=jvj+274; pile[WZ5]=jvj+273; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+275,jvj+274,jvj+273)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+88; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+88,jvj+271)*/
pile[v[22]]=jvj+269; pile[WZ1]=111; pile[WZ2]=jvj+270; 
(*f[54])( );     /*TRI1(jvj+269,111,jvj+270)*/
pile[v[22]]=jvj+270; pile[WZ1]=jvj+271; pile[WZ2]=103; pile[WZ3]=jvj+272; 
(*f[58])( );     /*TRI3(jvj+270,jvj+271,103,jvj+272)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+273; pile[WZ4]=jvj+272; pile[WZ5]=jvj+94; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+273,jvj+272,jvj+94)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(R,107,jvj+94)*/
l39:if(x[jvj+86]!=650&&x[jvj+86]!=651) goto l41;
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+14,jvj+95)*/
if((x[jvj+95]!=22)) goto l41;
pile[v[22]]=102; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+14,jvj+96)*/
pile[v[22]]=140; pile[WZ1]=jvj+96; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+96,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,B,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+97,jvj+98)*/
pile[v[22]]=A; pile[WZ1]=jvj+99; 
(*f[255])( );     /*COPEXP0(A,jvj+99)*/
x[jvj+100]=incon;
if((x[jvj+98]==128)) goto l2;
pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(A,jvj+13)*/
if((x[jvj+131]=w[x[jvj+98]][3])==incon) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+131; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+131,jvj+130)*/
pile[v[22]]=jvj+13; pile[WZ1]=103; pile[WZ2]=jvj+129; 
(*f[54])( );     /*TRI1(jvj+13,103,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+130; pile[WZ4]=jvj+129; pile[WZ5]=jvj+100; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+130,jvj+129,jvj+100)*/
goto l40;
l37:pile[v[22]]=A; pile[WZ1]=jvj+89; 
(*f[255])( );     /*COPEXP0(A,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+227)*/
pile[WZ3]=100; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+233)*/
pile[v[22]]=jvj+89; pile[WZ1]=103; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(jvj+89,103,jvj+232)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+233; pile[WZ4]=jvj+232; pile[WZ5]=jvj+231; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+233,jvj+232,jvj+231)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=96; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,96,jvj+234)*/
pile[WZ3]=89; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,89,jvj+235)*/
pile[WZ3]=41; pile[WZ4]=jvj+236; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+236)*/
pile[WZ3]=20; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+237)*/
pile[WZ3]=128; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+238)*/
pile[WZ3]=570; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,570,jvj+239)*/
pile[WZ3]=1317; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,1317,jvj+240)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+229; 
(*f[54])( );     /*TRI1(128,100,jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=128; pile[WZ2]=jvj+234; 
(*f[36])( );     /*PLUSC0(jvj+229,128,jvj+234)*/
pile[WZ2]=jvj+235; 
(*f[36])( );     /*PLUSC0(jvj+229,128,jvj+235)*/
pile[WZ2]=jvj+236; 
(*f[36])( );     /*PLUSC0(jvj+229,128,jvj+236)*/
pile[WZ2]=jvj+237; 
(*f[36])( );     /*PLUSC0(jvj+229,128,jvj+237)*/
pile[WZ2]=jvj+238; 
(*f[36])( );     /*PLUSC0(jvj+229,128,jvj+238)*/
pile[WZ2]=jvj+239; 
(*f[36])( );     /*PLUSC0(jvj+229,128,jvj+239)*/
pile[WZ2]=jvj+240; 
(*f[36])( );     /*PLUSC0(jvj+229,128,jvj+240)*/
pile[v[22]]=jvj+227; pile[WZ1]=111; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+227,111,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=jvj+229; pile[WZ2]=103; pile[WZ3]=jvj+230; 
(*f[58])( );     /*TRI3(jvj+228,jvj+229,103,jvj+230)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+231; pile[WZ4]=jvj+230; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+231,jvj+230,jvj+90)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(R,107,jvj+90)*/
goto l38;
l43:pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,B,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=A; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+110,A,R,S,VL,NV,XX,BOOT)*/
goto l44;
l46:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,B,jvj+119)*/
x[jvj+322]=w[x[jvj+119]][9];
pile[v[22]]=A; pile[WZ1]=jvj+120; 
(*f[255])( );     /*COPEXP0(A,jvj+120)*/
l47:if((x[jvj+322]<=0)) goto l51;
x[jvj+121]=s[x[jvj+322]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+322];
pile[v[22]]=jvj+121; pile[WZ1]=B; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(jvj+121,B,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+121; pile[WZ4]=jvj+318; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+121,jvj+318)*/
pile[v[22]]=jvj+120; pile[WZ1]=103; pile[WZ2]=jvj+317; 
(*f[54])( );     /*TRI1(jvj+120,103,jvj+317)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+318; pile[WZ4]=jvj+317; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+318,jvj+317,jvj+123)*/
pile[v[22]]=jvj+122; pile[WZ1]=jvj+123; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+122,jvj+123,R,S,VL,NV,XX,BOOT)*/
l48:x[jvj+322]=t[x[jvj+322]];
goto l47;
l51:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=9; return;
}
