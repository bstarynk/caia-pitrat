#include "dx.h"
void ITD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V53=0,V63=0,V73=0,V83=0,V93=0,V103=0,V113=0,V123=0;
int W,VV,V,TY,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=103;
x[jvj+1]=10132;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1848&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
W=pile[v[22]]; VV=pile[v[22]+1]; V=pile[v[22]+2]; TY=pile[v[22]+3]; X=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=incon;
pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,X,jvj+2)*/
l1:pile[v[22]]=VV; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(VV,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+16; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+16,jvj+4)*/
pile[v[22]]=250; pile[WZ1]=jvj+4; 
(*f[1600])( );     /*DVA0(250,jvj+4)*/
pile[v[22]]=X; pile[WZ1]=102; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(X,102,jvj+4)*/
if(x[jvj+2]!=incon) goto l2;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:pile[v[22]]=W; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(W,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+3; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,jvj+3,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+19; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+19,jvj+6)*/
pile[v[22]]=250; pile[WZ1]=jvj+6; 
(*f[1600])( );     /*DVA0(250,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=102; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+6,102,jvj+20)*/
x[jvj+40]=134 ;z[jvj+40]=134;
pile[v[22]]=jvj+40; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+40,X,jvj+41)*/
pile[v[22]]=248; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(248,jvj+41,jvj+42)*/
l4:if((x[jvj+42]<=0)) goto l6;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=122; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(122,jvj+43,jvj+44)*/
if((x[jvj+44]!=x[jvj+40])) goto l5;
pile[v[22]]=161; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(161,jvj+43,jvj+45)*/
if((x[jvj+45]!=x[X])) goto l5;
V53=x[jvj+43];
pile[v[22]]=248; pile[WZ1]=jvj+41; pile[WZ2]=V53; 
(*f[134])( );     /*OTA0(248,jvj+41,V53)*/
l5:x[jvj+42]=t[x[jvj+42]];
goto l4;
l6:pile[v[22]]=jvj+40; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(jvj+40,X)*/
pile[v[22]]=X; pile[WZ1]=jvj+40; pile[WZ2]=jvj+20; 
(*f[35])( );     /*CHGC1(X,jvj+40,jvj+20)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=X; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(122,jvj+40,161,X,jvj+46)*/
pile[v[22]]=jvj+20; pile[WZ1]=248; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+20,248,jvj+46)*/
x[jvj+47]=vo[15];z[jvj+47]=vz[15];
pile[v[22]]=jvj+47; pile[WZ1]=302; pile[WZ2]=X; 
(*f[36])( );     /*PLUSC0(jvj+47,302,X)*/
x[jvj+48]=135 ;z[jvj+48]=135;
pile[v[22]]=jvj+48; pile[WZ1]=jvj+20; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+48,jvj+20,jvj+49)*/
pile[v[22]]=248; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(248,jvj+49,jvj+50)*/
l7:if((x[jvj+50]<=0)) goto l9;
x[jvj+51]=s[x[jvj+50]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+50];
pile[v[22]]=122; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(122,jvj+51,jvj+52)*/
if((x[jvj+52]!=x[jvj+48])) goto l8;
pile[v[22]]=161; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(161,jvj+51,jvj+53)*/
if((x[jvj+53]!=x[jvj+20])) goto l8;
V63=x[jvj+51];
pile[v[22]]=248; pile[WZ1]=jvj+49; pile[WZ2]=V63; 
(*f[134])( );     /*OTA0(248,jvj+49,V63)*/
l8:x[jvj+50]=t[x[jvj+50]];
goto l7;
l9:pile[v[22]]=jvj+48; pile[WZ1]=jvj+20; 
(*f[71])( );     /*ENLV0(jvj+48,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+48; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+20,jvj+48,jvj+2)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=jvj+20; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(122,jvj+48,161,jvj+20,jvj+54)*/
pile[v[22]]=jvj+2; pile[WZ1]=248; pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+2,248,jvj+54)*/
x[jvj+55]=vo[15];z[jvj+55]=vz[15];
pile[v[22]]=jvj+55; pile[WZ1]=302; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+55,302,jvj+20)*/
pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(135,jvj+2,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=TY; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,TY,jvj+8)*/
pile[v[22]]=145; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(145,jvj+8,jvj+9)*/
pile[v[22]]=W; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(W,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+3; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,jvj+3,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+23; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+23,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=102; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,102,jvj+25)*/
x[jvj+56]=134 ;z[jvj+56]=134;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+20; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+56,jvj+20,jvj+57)*/
pile[v[22]]=248; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(248,jvj+57,jvj+58)*/
l10:if((x[jvj+58]<=0)) goto l12;
x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=122; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(122,jvj+59,jvj+60)*/
if((x[jvj+60]!=x[jvj+56])) goto l11;
pile[v[22]]=161; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(161,jvj+59,jvj+61)*/
if((x[jvj+61]!=x[jvj+20])) goto l11;
V73=x[jvj+59];
pile[v[22]]=248; pile[WZ1]=jvj+57; pile[WZ2]=V73; 
(*f[134])( );     /*OTA0(248,jvj+57,V73)*/
l11:x[jvj+58]=t[x[jvj+58]];
goto l10;
l12:pile[v[22]]=jvj+56; pile[WZ1]=jvj+20; 
(*f[71])( );     /*ENLV0(jvj+56,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+56; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(jvj+20,jvj+56,jvj+25)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=jvj+20; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(122,jvj+56,161,jvj+20,jvj+62)*/
pile[v[22]]=jvj+25; pile[WZ1]=248; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+25,248,jvj+62)*/
x[jvj+63]=vo[15];z[jvj+63]=vz[15];
pile[v[22]]=jvj+63; pile[WZ1]=302; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+63,302,jvj+20)*/
x[jvj+64]=134 ;z[jvj+64]=134;
pile[v[22]]=jvj+64; pile[WZ1]=jvj+25; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+64,jvj+25,jvj+65)*/
pile[v[22]]=248; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(248,jvj+65,jvj+66)*/
l13:if((x[jvj+66]<=0)) goto l15;
x[jvj+67]=s[x[jvj+66]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+66];
pile[v[22]]=122; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(122,jvj+67,jvj+68)*/
if((x[jvj+68]!=x[jvj+64])) goto l14;
pile[v[22]]=161; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(161,jvj+67,jvj+69)*/
if((x[jvj+69]!=x[jvj+25])) goto l14;
V83=x[jvj+67];
pile[v[22]]=248; pile[WZ1]=jvj+65; pile[WZ2]=V83; 
(*f[134])( );     /*OTA0(248,jvj+65,V83)*/
l14:x[jvj+66]=t[x[jvj+66]];
goto l13;
l15:pile[v[22]]=jvj+64; pile[WZ1]=jvj+25; 
(*f[71])( );     /*ENLV0(jvj+64,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+64; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+25,jvj+64,jvj+7)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=jvj+25; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(122,jvj+64,161,jvj+25,jvj+70)*/
pile[v[22]]=jvj+7; pile[WZ1]=248; pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+7,248,jvj+70)*/
x[jvj+71]=vo[15];z[jvj+71]=vz[15];
pile[v[22]]=jvj+71; pile[WZ1]=302; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+71,302,jvj+25)*/
pile[v[22]]=W; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(W,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+27)*/
pile[v[22]]=jvj+3; pile[WZ1]=436; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+3,436,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=111; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,111,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+28; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+11,jvj+28,jvj+12)*/
pile[v[22]]=250; pile[WZ1]=jvj+12; 
(*f[1600])( );     /*DVA0(250,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=102; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+12,102,jvj+29)*/
x[jvj+72]=135 ;z[jvj+72]=135;
pile[v[22]]=jvj+72; pile[WZ1]=jvj+25; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+72,jvj+25,jvj+73)*/
pile[v[22]]=248; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(248,jvj+73,jvj+74)*/
l16:if((x[jvj+74]<=0)) goto l18;
x[jvj+75]=s[x[jvj+74]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+74];
pile[v[22]]=122; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(122,jvj+75,jvj+76)*/
if((x[jvj+76]!=x[jvj+72])) goto l17;
pile[v[22]]=161; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(161,jvj+75,jvj+77)*/
if((x[jvj+77]!=x[jvj+25])) goto l17;
V93=x[jvj+75];
pile[v[22]]=248; pile[WZ1]=jvj+73; pile[WZ2]=V93; 
(*f[134])( );     /*OTA0(248,jvj+73,V93)*/
l17:x[jvj+74]=t[x[jvj+74]];
goto l16;
l18:pile[v[22]]=jvj+72; pile[WZ1]=jvj+25; 
(*f[71])( );     /*ENLV0(jvj+72,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+72; pile[WZ2]=jvj+29; 
(*f[35])( );     /*CHGC1(jvj+25,jvj+72,jvj+29)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=jvj+25; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(122,jvj+72,161,jvj+25,jvj+78)*/
pile[v[22]]=jvj+29; pile[WZ1]=248; pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+29,248,jvj+78)*/
x[jvj+79]=vo[15];z[jvj+79]=vz[15];
pile[v[22]]=jvj+79; pile[WZ1]=302; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+79,302,jvj+25)*/
x[jvj+80]=135 ;z[jvj+80]=135;
pile[v[22]]=jvj+80; pile[WZ1]=X; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+80,X,jvj+81)*/
pile[v[22]]=248; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(248,jvj+81,jvj+82)*/
l19:if((x[jvj+82]<=0)) goto l21;
x[jvj+83]=s[x[jvj+82]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+82];
pile[v[22]]=122; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(122,jvj+83,jvj+84)*/
if((x[jvj+84]!=x[jvj+80])) goto l20;
pile[v[22]]=161; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(161,jvj+83,jvj+85)*/
if((x[jvj+85]!=x[X])) goto l20;
V103=x[jvj+83];
pile[v[22]]=248; pile[WZ1]=jvj+81; pile[WZ2]=V103; 
(*f[134])( );     /*OTA0(248,jvj+81,V103)*/
l20:x[jvj+82]=t[x[jvj+82]];
goto l19;
l21:pile[v[22]]=jvj+80; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(jvj+80,X)*/
pile[v[22]]=X; pile[WZ1]=jvj+80; pile[WZ2]=jvj+29; 
(*f[35])( );     /*CHGC1(X,jvj+80,jvj+29)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=X; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(122,jvj+80,161,X,jvj+86)*/
pile[v[22]]=jvj+29; pile[WZ1]=248; pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+29,248,jvj+86)*/
x[jvj+87]=vo[15];z[jvj+87]=vz[15];
pile[v[22]]=jvj+87; pile[WZ1]=302; pile[WZ2]=X; 
(*f[36])( );     /*PLUSC0(jvj+87,302,X)*/
pile[v[22]]=V; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(V,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+35)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+39)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=103; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,103,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+38,jvj+33)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+31)*/
pile[v[22]]=jvj+13; pile[WZ1]=436; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+13,436,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=111; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,111,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+33,jvj+32,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=102; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+14,102,jvj+34)*/
pile[v[22]]=250; pile[WZ1]=jvj+14; 
(*f[1600])( );     /*DVA0(250,jvj+14)*/
x[jvj+88]=135 ;z[jvj+88]=135;
pile[v[22]]=jvj+88; pile[WZ1]=jvj+34; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+88,jvj+34,jvj+89)*/
pile[v[22]]=248; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(248,jvj+89,jvj+90)*/
l22:if((x[jvj+90]<=0)) goto l24;
x[jvj+91]=s[x[jvj+90]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+90];
pile[v[22]]=122; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(122,jvj+91,jvj+92)*/
if((x[jvj+92]!=x[jvj+88])) goto l23;
pile[v[22]]=161; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(161,jvj+91,jvj+93)*/
if((x[jvj+93]!=x[jvj+34])) goto l23;
V113=x[jvj+91];
pile[v[22]]=248; pile[WZ1]=jvj+89; pile[WZ2]=V113; 
(*f[134])( );     /*OTA0(248,jvj+89,V113)*/
l23:x[jvj+90]=t[x[jvj+90]];
goto l22;
l24:pile[v[22]]=jvj+88; pile[WZ1]=jvj+34; 
(*f[71])( );     /*ENLV0(jvj+88,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+88; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+34,jvj+88,jvj+2)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=jvj+34; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(122,jvj+88,161,jvj+34,jvj+94)*/
pile[v[22]]=jvj+2; pile[WZ1]=248; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(jvj+2,248,jvj+94)*/
x[jvj+95]=vo[15];z[jvj+95]=vz[15];
pile[v[22]]=jvj+95; pile[WZ1]=302; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+95,302,jvj+34)*/
x[jvj+96]=135 ;z[jvj+96]=135;
pile[v[22]]=jvj+96; pile[WZ1]=jvj+29; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+96,jvj+29,jvj+97)*/
pile[v[22]]=248; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(248,jvj+97,jvj+98)*/
l25:if((x[jvj+98]<=0)) goto l27;
x[jvj+99]=s[x[jvj+98]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+98];
pile[v[22]]=122; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(122,jvj+99,jvj+100)*/
if((x[jvj+100]!=x[jvj+96])) goto l26;
pile[v[22]]=161; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(161,jvj+99,jvj+101)*/
if((x[jvj+101]!=x[jvj+29])) goto l26;
V123=x[jvj+99];
pile[v[22]]=248; pile[WZ1]=jvj+97; pile[WZ2]=V123; 
(*f[134])( );     /*OTA0(248,jvj+97,V123)*/
l26:x[jvj+98]=t[x[jvj+98]];
goto l25;
l27:pile[v[22]]=jvj+96; pile[WZ1]=jvj+29; 
(*f[71])( );     /*ENLV0(jvj+96,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+96; pile[WZ2]=jvj+34; 
(*f[35])( );     /*CHGC1(jvj+29,jvj+96,jvj+34)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=jvj+29; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(122,jvj+96,161,jvj+29,jvj+102)*/
pile[v[22]]=jvj+34; pile[WZ1]=248; pile[WZ2]=jvj+102; 
(*f[36])( );     /*PLUSC0(jvj+34,248,jvj+102)*/
x[jvj+103]=vo[15];z[jvj+103]=vz[15];
pile[v[22]]=jvj+103; pile[WZ1]=302; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+103,302,jvj+29)*/
goto l3;
}
