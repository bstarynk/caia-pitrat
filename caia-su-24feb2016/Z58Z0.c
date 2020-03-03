#include "dx.h"
void Z58Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V293=0,V119=0,V295=0,V122=0,V297=0,V147=0,V299=0,V150=0,V170=0,V171=0,V173=0,V174=0,V199=0,V200=0,V202=0,V203=0,V229=0,V230=0,V266=0,V267=0,V236=0,V249=0,V243=0,II=0,V231=0,V184=0,I=0,V4=0,V19=0,V273=0,V286=0,V280=0,V260=0,V268=0,V213=0,V194=0,V45=0,V33=0,V60=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=150;
x[jvj+1]=15559;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1855&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(538,NNNY,jvj+20)*/
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=25)) goto l30;
x[jvj+23]=d[20];z[jvj+23]=0;
l15:if((x[jvj+23]>0)) goto l16;
x[jvj+36]=d[20];z[jvj+36]=0;
l23:if((x[jvj+36]>0)) goto l24;
x[jvj+44]=d[20];z[jvj+44]=0;
l27:if((x[jvj+44]<=0)) goto l30;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+20; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+45,jvj+20,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=484)) goto l28;
pile[v[22]]=268; pile[WZ1]=jvj+45; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(268,jvj+45,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+20; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+48,jvj+20,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+2,jvj+49)*/
if(x[jvj+49]!=96&&x[jvj+49]!=89&&x[jvj+49]!=41&&x[jvj+49]!=20&&x[jvj+49]!=128&&x[jvj+49]!=570&&x[jvj+49]!=1317) goto l28;
pile[v[22]]=jvj+46; pile[WZ1]=jvj+50; 
(*f[200])( );if(v[102]) goto l28;     /*NDD0(jvj+46,jvj+50)*/
x[jvj+51]=x[jvj+50] ;z[jvj+51]=z[jvj+50];
pile[v[22]]=365; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(365,jvj+51,jvj+52)*/
if((x[jvj+52]==0)) goto l28;
if((x[jvj+3]=w[x[jvj+49]][3])==incon) goto l29;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l29;     /*FNDZ0(jvj+2,jvj+3,V293,jvj+4)*/
V293=pile[WZ2]; 
V119=V293;
x[jvj+143]=x[jvj+52] ;z[jvj+143]=z[jvj+52];
l1:if((x[jvj+143]<=0)) goto l29;
x[jvj+5]=s[x[jvj+143]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+143];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+5,jvj+3,V295,jvj+6)*/
V295=pile[WZ2]; 
V122=V295;
if((V119==V122)) goto l28;
l2:x[jvj+143]=t[x[jvj+143]];
goto l1;
l16:x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+20; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+24,jvj+20,jvj+25)*/
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=485)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+28)*/
for(i=x[jvj+28],V236=0;i>0;i=t[i],V236++)  ;
if((V236!=2)) goto l17;
pile[v[22]]=268; pile[WZ1]=jvj+24; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+24,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+20; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+29,jvj+20,jvj+30)*/
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+30,V249)*/
V249=pile[WZ2]; 
if((V249!=0)) goto l17;
x[jvj+147]=x[jvj+28] ;z[jvj+147]=z[jvj+28];
l18:if((x[jvj+147]<=0)) goto l17;
x[jvj+31]=s[x[jvj+147]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+147];
if((x[NNNY]!=x[jvj+31])) goto l19;
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+31,V243)*/
V243=pile[WZ2]; 
II=V243;
V231=(-II);
x[jvj+148]=x[jvj+28] ;z[jvj+148]=z[jvj+28];
l20:if((x[jvj+148]<=0)) goto l19;
x[jvj+32]=s[x[jvj+148]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+148];
if((x[jvj+32]==x[jvj+31])) goto l21;
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=484)) goto l21;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; 
(*f[200])( );if(v[102]) goto l21;     /*NDD0(jvj+32,jvj+34)*/
x[jvj+18]=x[jvj+34] ;z[jvj+18]=z[jvj+34];
pile[v[22]]=280; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(280,jvj+18,V229)*/
V229=pile[WZ2]; 
if((V229>V231)) goto l22;
l13:pile[v[22]]=164; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(164,jvj+18,V230)*/
V230=pile[WZ2]; 
if((V230<V231)) goto l22;
l21:x[jvj+148]=t[x[jvj+148]];
goto l20;
l17:x[jvj+23]=t[x[jvj+23]];
goto l15;
l19:x[jvj+147]=t[x[jvj+147]];
goto l18;
l22:NNNT=155;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+35)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+35; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+35,NNNX)*/
l57:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l24:x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+20; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+37,jvj+20,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=484)) goto l25;
pile[v[22]]=268; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(268,jvj+37,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+20; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+40,jvj+20,jvj+41)*/
if((x[NNNY]!=x[jvj+41])) goto l25;
pile[v[22]]=130; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+41,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=jvj+38; pile[WZ1]=jvj+42; 
(*f[200])( );if(v[102]) goto l25;     /*NDD0(jvj+38,jvj+42)*/
I=V184;
x[jvj+12]=x[jvj+42] ;z[jvj+12]=z[jvj+42];
pile[v[22]]=280; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(280,jvj+12,V170)*/
V170=pile[WZ2]; 
if((V170>I)) goto l26;
l5:pile[v[22]]=164; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(164,jvj+12,V171)*/
V171=pile[WZ2]; 
if((V171<I)) goto l26;
l6:pile[v[22]]=1553; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1553,jvj+12,jvj+13)*/
x[jvj+145]=x[jvj+13] ;z[jvj+145]=z[jvj+13];
l7:if((x[jvj+145]<=0)) goto l25;
x[jvj+14]=s[x[jvj+145]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+145];
pile[v[22]]=280; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(280,jvj+14,V173)*/
V173=pile[WZ2]; 
if((I<V173)) goto l8;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(164,jvj+14,V174)*/
V174=pile[WZ2]; 
if((I<=V174)) goto l26;
l8:x[jvj+145]=t[x[jvj+145]];
goto l7;
l25:x[jvj+36]=t[x[jvj+36]];
goto l23;
l26:NNNT=146;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+43)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+43; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+43,NNNX)*/
goto l57;
l28:x[jvj+44]=t[x[jvj+44]];
goto l27;
l29:NNNT=49;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+53)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+53; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+53,NNNX)*/
goto l57;
l30:pile[v[22]]=118; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(118,jvj+22,V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l31;
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+20,jvj+54)*/
if((x[jvj+54]!=22)) goto l31;
pile[v[22]]=102; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+20,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+55,jvj+56)*/
if(x[jvj+56]!=96&&x[jvj+56]!=89&&x[jvj+56]!=41&&x[jvj+56]!=20&&x[jvj+56]!=128&&x[jvj+56]!=570&&x[jvj+56]!=1317) goto l31;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+57; 
(*f[980])( );if(v[102]) goto l31;     /*EVL4(jvj+20,jvj+57)*/
NNNT=5;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+57,NNNX)*/
goto l57;
l31:pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+20,jvj+58)*/
if((x[jvj+58]==531)) goto l32;
if((x[jvj+58]==979)) goto l33;
if((x[jvj+58]==1027)) goto l34;
if((x[jvj+58]!=453)) goto l35;
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+21,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+20,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+75,jvj+76)*/
if(x[jvj+76]!=96&&x[jvj+76]!=89&&x[jvj+76]!=41&&x[jvj+76]!=20&&x[jvj+76]!=128&&x[jvj+76]!=570&&x[jvj+76]!=1317) goto l35;
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,jvj+20,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+77,jvj+78)*/
if(x[jvj+78]!=96&&x[jvj+78]!=89&&x[jvj+78]!=41&&x[jvj+78]!=20&&x[jvj+78]!=128&&x[jvj+78]!=570&&x[jvj+78]!=1317) goto l35;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+79; 
(*f[980])( );if(v[102]) goto l35;     /*EVL4(jvj+20,jvj+79)*/
NNNT=8;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+79,NNNX)*/
goto l57;
l32:pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+21,jvj+59)*/
if((x[jvj+59]!=21)) goto l35;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+20,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+60,jvj+61)*/
if(x[jvj+61]!=96&&x[jvj+61]!=89&&x[jvj+61]!=41&&x[jvj+61]!=20&&x[jvj+61]!=128&&x[jvj+61]!=570&&x[jvj+61]!=1317) goto l35;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+62; 
(*f[980])( );if(v[102]) goto l35;     /*EVL4(jvj+20,jvj+62)*/
NNNT=26;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+62,NNNX)*/
goto l57;
l33:pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+21,jvj+63)*/
if((x[jvj+63]!=21)) goto l35;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+20,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+64,jvj+65)*/
if(x[jvj+65]!=96&&x[jvj+65]!=89&&x[jvj+65]!=41&&x[jvj+65]!=20&&x[jvj+65]!=128&&x[jvj+65]!=570&&x[jvj+65]!=1317) goto l35;
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,jvj+20,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+66,jvj+67)*/
if(x[jvj+67]!=96&&x[jvj+67]!=89&&x[jvj+67]!=41&&x[jvj+67]!=20&&x[jvj+67]!=128&&x[jvj+67]!=570&&x[jvj+67]!=1317) goto l35;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+68; 
(*f[980])( );if(v[102]) goto l35;     /*EVL4(jvj+20,jvj+68)*/
NNNT=47;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+68,NNNX)*/
goto l57;
l34:pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+21,jvj+69)*/
if((x[jvj+69]!=21)) goto l35;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+20,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+70,jvj+71)*/
if(x[jvj+71]!=96&&x[jvj+71]!=89&&x[jvj+71]!=41&&x[jvj+71]!=20&&x[jvj+71]!=128&&x[jvj+71]!=570&&x[jvj+71]!=1317) goto l35;
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,jvj+20,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+72,jvj+73)*/
if(x[jvj+73]!=96&&x[jvj+73]!=89&&x[jvj+73]!=41&&x[jvj+73]!=20&&x[jvj+73]!=128&&x[jvj+73]!=570&&x[jvj+73]!=1317) goto l35;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+74; 
(*f[980])( );if(v[102]) goto l35;     /*EVL4(jvj+20,jvj+74)*/
NNNT=48;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+20,jvj+74,NNNX)*/
goto l57;
l35:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(539,NNNY,jvj+80)*/
pile[v[22]]=111; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,jvj+80,jvj+81)*/
pile[v[22]]=101; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+81,jvj+82)*/
if((x[jvj+82]!=25)) goto l51;
x[jvj+83]=d[20];z[jvj+83]=0;
l36:if((x[jvj+83]>0)) goto l37;
x[jvj+96]=d[20];z[jvj+96]=0;
l44:if((x[jvj+96]>0)) goto l45;
x[jvj+104]=d[20];z[jvj+104]=0;
l48:if((x[jvj+104]<=0)) goto l51;
x[jvj+105]=s[x[jvj+104]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+104];
pile[v[22]]=jvj+105; pile[WZ1]=jvj+80; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(jvj+105,jvj+80,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+106,jvj+107)*/
if((x[jvj+107]!=484)) goto l49;
pile[v[22]]=268; pile[WZ1]=jvj+105; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(268,jvj+105,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+80; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(jvj+108,jvj+80,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+7,jvj+109)*/
if(x[jvj+109]!=96&&x[jvj+109]!=89&&x[jvj+109]!=41&&x[jvj+109]!=20&&x[jvj+109]!=128&&x[jvj+109]!=570&&x[jvj+109]!=1317) goto l49;
pile[v[22]]=jvj+106; pile[WZ1]=jvj+110; 
(*f[200])( );if(v[102]) goto l49;     /*NDD0(jvj+106,jvj+110)*/
x[jvj+111]=x[jvj+110] ;z[jvj+111]=z[jvj+110];
pile[v[22]]=365; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[33])( );     /*FNDE0(365,jvj+111,jvj+112)*/
if((x[jvj+112]==0)) goto l49;
if((x[jvj+8]=w[x[jvj+109]][3])==incon) goto l50;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l50;     /*FNDZ0(jvj+7,jvj+8,V297,jvj+9)*/
V297=pile[WZ2]; 
V147=V297;
x[jvj+144]=x[jvj+112] ;z[jvj+144]=z[jvj+112];
l3:if((x[jvj+144]<=0)) goto l50;
x[jvj+10]=s[x[jvj+144]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+144];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+8; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l4;     /*FNDZ0(jvj+10,jvj+8,V299,jvj+11)*/
V299=pile[WZ2]; 
V150=V299;
if((V147==V150)) goto l49;
l4:x[jvj+144]=t[x[jvj+144]];
goto l3;
l37:x[jvj+84]=s[x[jvj+83]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+83];
pile[v[22]]=jvj+84; pile[WZ1]=jvj+80; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+84,jvj+80,jvj+85)*/
pile[v[22]]=111; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+85,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+86,jvj+87)*/
if((x[jvj+87]!=485)) goto l38;
pile[v[22]]=107; pile[WZ1]=jvj+85; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(107,jvj+85,jvj+88)*/
for(i=x[jvj+88],V273=0;i>0;i=t[i],V273++)  ;
if((V273!=2)) goto l38;
pile[v[22]]=268; pile[WZ1]=jvj+84; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(268,jvj+84,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+80; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(jvj+89,jvj+80,jvj+90)*/
pile[v[22]]=130; pile[WZ1]=jvj+90; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+90,V286)*/
V286=pile[WZ2]; 
if((V286!=0)) goto l38;
x[jvj+149]=x[jvj+88] ;z[jvj+149]=z[jvj+88];
l39:if((x[jvj+149]<=0)) goto l38;
x[jvj+91]=s[x[jvj+149]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+149];
if((x[NNNY]!=x[jvj+91])) goto l40;
pile[v[22]]=130; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+91,V280)*/
V280=pile[WZ2]; 
V260=V280;
V268=(-V260);
x[jvj+150]=x[jvj+88] ;z[jvj+150]=z[jvj+88];
l41:if((x[jvj+150]<=0)) goto l40;
x[jvj+92]=s[x[jvj+150]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+150];
if((x[jvj+92]==x[jvj+91])) goto l42;
pile[v[22]]=100; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+92,jvj+93)*/
if((x[jvj+93]!=484)) goto l42;
pile[v[22]]=jvj+92; pile[WZ1]=jvj+94; 
(*f[200])( );if(v[102]) goto l42;     /*NDD0(jvj+92,jvj+94)*/
x[jvj+19]=x[jvj+94] ;z[jvj+19]=z[jvj+94];
pile[v[22]]=280; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(280,jvj+19,V266)*/
V266=pile[WZ2]; 
if((V266>V268)) goto l43;
l14:pile[v[22]]=164; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(164,jvj+19,V267)*/
V267=pile[WZ2]; 
if((V267<V268)) goto l43;
l42:x[jvj+150]=t[x[jvj+150]];
goto l41;
l38:x[jvj+83]=t[x[jvj+83]];
goto l36;
l40:x[jvj+149]=t[x[jvj+149]];
goto l39;
l43:NNNT=155;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+95)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+95; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+80,jvj+95,NNNX)*/
goto l57;
l45:x[jvj+97]=s[x[jvj+96]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+96];
pile[v[22]]=jvj+97; pile[WZ1]=jvj+80; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(jvj+97,jvj+80,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+98,jvj+99)*/
if((x[jvj+99]!=484)) goto l46;
pile[v[22]]=268; pile[WZ1]=jvj+97; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(268,jvj+97,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+80; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(jvj+100,jvj+80,jvj+101)*/
if((x[NNNY]!=x[jvj+101])) goto l46;
pile[v[22]]=130; pile[WZ1]=jvj+101; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+101,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=jvj+98; pile[WZ1]=jvj+102; 
(*f[200])( );if(v[102]) goto l46;     /*NDD0(jvj+98,jvj+102)*/
V194=V213;
x[jvj+15]=x[jvj+102] ;z[jvj+15]=z[jvj+102];
pile[v[22]]=280; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(280,jvj+15,V199)*/
V199=pile[WZ2]; 
if((V199>V194)) goto l47;
l9:pile[v[22]]=164; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(164,jvj+15,V200)*/
V200=pile[WZ2]; 
if((V200<V194)) goto l47;
l10:pile[v[22]]=1553; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1553,jvj+15,jvj+16)*/
x[jvj+146]=x[jvj+16] ;z[jvj+146]=z[jvj+16];
l11:if((x[jvj+146]<=0)) goto l46;
x[jvj+17]=s[x[jvj+146]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+146];
pile[v[22]]=280; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(280,jvj+17,V202)*/
V202=pile[WZ2]; 
if((V194<V202)) goto l12;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(164,jvj+17,V203)*/
V203=pile[WZ2]; 
if((V194<=V203)) goto l47;
l12:x[jvj+146]=t[x[jvj+146]];
goto l11;
l46:x[jvj+96]=t[x[jvj+96]];
goto l44;
l47:NNNT=146;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+103; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+103)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+103; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+80,jvj+103,NNNX)*/
goto l57;
l49:x[jvj+104]=t[x[jvj+104]];
goto l48;
l50:NNNT=49;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+113)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+113; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+80,jvj+113,NNNX)*/
goto l57;
l51:pile[v[22]]=118; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(118,jvj+82,V45)*/
V45=pile[WZ2]; 
if((V45!=2)) goto l52;
pile[v[22]]=100; pile[WZ1]=jvj+80; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(100,jvj+80,jvj+114)*/
if((x[jvj+114]!=22)) goto l52;
pile[v[22]]=102; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(102,jvj+80,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(100,jvj+115,jvj+116)*/
if(x[jvj+116]!=96&&x[jvj+116]!=89&&x[jvj+116]!=41&&x[jvj+116]!=20&&x[jvj+116]!=128&&x[jvj+116]!=570&&x[jvj+116]!=1317) goto l52;
pile[v[22]]=103; pile[WZ1]=jvj+80; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(103,jvj+80,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(100,jvj+117,jvj+118)*/
if(x[jvj+118]!=96&&x[jvj+118]!=89&&x[jvj+118]!=41&&x[jvj+118]!=20&&x[jvj+118]!=128&&x[jvj+118]!=570&&x[jvj+118]!=1317) goto l52;
pile[v[22]]=jvj+80; pile[WZ1]=jvj+119; 
(*f[980])( );if(v[102]) goto l52;     /*EVL4(jvj+80,jvj+119)*/
NNNT=9;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+80,jvj+119,NNNX)*/
goto l57;
l52:pile[v[22]]=100; pile[WZ1]=jvj+80; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+80,jvj+120)*/
if((x[jvj+120]==1027)) goto l53;
if((x[jvj+120]!=453)) goto l54;
pile[v[22]]=140; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(140,jvj+81,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+80; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,jvj+80,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+127,jvj+128)*/
if(x[jvj+128]!=96&&x[jvj+128]!=89&&x[jvj+128]!=41&&x[jvj+128]!=20&&x[jvj+128]!=128&&x[jvj+128]!=570&&x[jvj+128]!=1317) goto l54;
pile[v[22]]=103; pile[WZ1]=jvj+80; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(103,jvj+80,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+129,jvj+130)*/
if(x[jvj+130]!=96&&x[jvj+130]!=89&&x[jvj+130]!=41&&x[jvj+130]!=20&&x[jvj+130]!=128&&x[jvj+130]!=570&&x[jvj+130]!=1317) goto l54;
pile[v[22]]=jvj+80; pile[WZ1]=jvj+131; 
(*f[980])( );if(v[102]) goto l54;     /*EVL4(jvj+80,jvj+131)*/
NNNT=8;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+80,jvj+131,NNNX)*/
goto l57;
l53:pile[v[22]]=100; pile[WZ1]=jvj+81; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+81,jvj+121)*/
if((x[jvj+121]!=21)) goto l54;
pile[v[22]]=102; pile[WZ1]=jvj+80; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,jvj+80,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+122,jvj+123)*/
if(x[jvj+123]!=96&&x[jvj+123]!=89&&x[jvj+123]!=41&&x[jvj+123]!=20&&x[jvj+123]!=128&&x[jvj+123]!=570&&x[jvj+123]!=1317) goto l54;
pile[v[22]]=103; pile[WZ1]=jvj+80; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(103,jvj+80,jvj+124)*/
pile[v[22]]=100; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+124,jvj+125)*/
if(x[jvj+125]!=96&&x[jvj+125]!=89&&x[jvj+125]!=41&&x[jvj+125]!=20&&x[jvj+125]!=128&&x[jvj+125]!=570&&x[jvj+125]!=1317) goto l54;
pile[v[22]]=jvj+80; pile[WZ1]=jvj+126; 
(*f[980])( );if(v[102]) goto l54;     /*EVL4(jvj+80,jvj+126)*/
NNNT=48;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+80,jvj+126,NNNX)*/
goto l57;
l54:pile[v[22]]=541; pile[WZ1]=NNNY; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(541,NNNY,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+132,jvj+133)*/
if((x[jvj+133]!=22)) goto l56;
pile[v[22]]=111; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+132,jvj+134)*/
pile[v[22]]=101; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+134,jvj+135)*/
pile[v[22]]=118; pile[WZ1]=jvj+135; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(118,jvj+135,V60)*/
V60=pile[WZ2]; 
if((V60!=3)) goto l56;
pile[v[22]]=102; pile[WZ1]=jvj+132; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(102,jvj+132,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+136,jvj+137)*/
if(x[jvj+137]!=96&&x[jvj+137]!=89&&x[jvj+137]!=41&&x[jvj+137]!=20&&x[jvj+137]!=128&&x[jvj+137]!=570&&x[jvj+137]!=1317) goto l56;
pile[v[22]]=103; pile[WZ1]=jvj+132; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(103,jvj+132,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+138,jvj+139)*/
if(x[jvj+139]!=96&&x[jvj+139]!=89&&x[jvj+139]!=41&&x[jvj+139]!=20&&x[jvj+139]!=128&&x[jvj+139]!=570&&x[jvj+139]!=1317) goto l56;
pile[v[22]]=160; pile[WZ1]=jvj+132; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(160,jvj+132,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+140,jvj+141)*/
if(x[jvj+141]!=96&&x[jvj+141]!=89&&x[jvj+141]!=41&&x[jvj+141]!=20&&x[jvj+141]!=128&&x[jvj+141]!=570&&x[jvj+141]!=1317) goto l56;
pile[v[22]]=jvj+132; pile[WZ1]=jvj+142; 
(*f[980])( );if(v[102]) goto l56;     /*EVL4(jvj+132,jvj+142)*/
NNNT=23;
pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+132,jvj+142,NNNX)*/
goto l57;
l56:x[NNNX]=NNNT=incon;
l55:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
