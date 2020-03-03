#include "dx.h"
void TRNBVRAI1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V27=0,V13=0,V23=0,V65=0,V64=0;
int X,Y,BT,M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; BT=pile[v[22]+2]; M=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,X,jvj+12)*/
x[jvj+47]=w[x[jvj+12]][9];
l8:if((x[jvj+47]>0)) goto l9;
x[jvj+48]=w[x[jvj+12]][8];
l11:if((x[jvj+48]>0)) goto l12;
if((x[jvj+12]!=22)) goto l16;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,X,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+18,jvj+19)*/
if(x[jvj+19]!=1215&&x[jvj+19]!=1214) goto l16;
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=322; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(322,jvj+4,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,X,jvj+20)*/
x[jvj+3]=0 ;z[jvj+3]=0;
l1:if((x[jvj+20]>0)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8106); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8106),jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+39,jvj+38,jvj+25)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+3; pile[WZ2]=107; pile[WZ3]=jvj+42; 
(*f[301])( );     /*TRI11(jvj+41,jvj+3,107,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+42,22,100,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+9)*/
V23=V13+1;
if((V13!=0)) goto l17;
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7141); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7141),jvj+34)*/
pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7141),jvj+32)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(128,100,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=460; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,460,jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8106); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8106),jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=436; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,436,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=160; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,160,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=111; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=454; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,454,102,jvj+34,jvj+33,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+4,454,jvj+5)*/
l17:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8106); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8106),jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+45,jvj+44,jvj+46)*/
if((V65=w[x[BT]][1])==incon) goto l6;
if((V65!=23)) goto l18;
V64=x[X];
pile[v[22]]=BT; pile[WZ1]=Y; pile[WZ2]=V64; 
(*f[134])( );     /*OTA0(BT,Y,V64)*/
pile[v[22]]=Y; pile[WZ1]=BT; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(Y,BT,jvj+46)*/
l6:if((x[M]==250)) goto l7;
pile[v[22]]=jvj+9; pile[WZ1]=447; pile[WZ2]=M; 
(*f[35])( );     /*CHGC1(jvj+9,447,M)*/
l7:pile[v[22]]=191; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(191,X,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=191; 
(*f[35])( );     /*CHGC1(jvj+9,191,jvj+10)*/
l3:pile[v[22]]=454; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(454,jvj+4,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l15;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=436; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,jvj+7,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+8,V27)*/
V27=pile[WZ2]; 
if((V27!=(-8106))) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=498; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+7,498,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=480; pile[WZ2]=277; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,480,277,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=V13; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+36; pile[WZ5]=jvj+11; 
(*f[725])( );     /*QUADRI14(130,V13,158,41,jvj+36,jvj+11)*/
pile[v[22]]=jvj+7; pile[WZ1]=480; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+7,480,jvj+11)*/
l15:pile[v[22]]=jvj+4; pile[WZ1]=322; pile[WZ2]=V23; 
(*f[43])( );     /*CHGC2(jvj+4,322,V23)*/
pile[WZ1]=509; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+4,509,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=1216; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+9,1216,jvj+19)*/
l16:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+1]=s[x[jvj+20]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+20];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
x[jvj+20]=t[x[jvj+20]];
goto l1;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l9:x[jvj+13]=s[x[jvj+47]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+47];
pile[v[22]]=jvj+13; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+13,X,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ2]=jvj+13; pile[WZ3]=M; 
(*f[2062])( );     /*TRNBVRAI1(jvj+14,X,jvj+13,M)*/
l10:x[jvj+47]=t[x[jvj+47]];
goto l8;
l12:x[jvj+15]=s[x[jvj+48]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+48];
pile[v[22]]=jvj+15; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+15,X,jvj+16)*/
x[jvj+49]=x[jvj+16] ;z[jvj+49]=z[jvj+16];
l13:if((x[jvj+49]>0)) goto l14;
x[jvj+48]=t[x[jvj+48]];
goto l11;
l14:x[jvj+17]=s[x[jvj+49]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+49];
pile[v[22]]=jvj+17; pile[WZ1]=X; pile[WZ2]=jvj+15; pile[WZ3]=M; 
(*f[2062])( );     /*TRNBVRAI1(jvj+17,X,jvj+15,M)*/
x[jvj+49]=t[x[jvj+49]];
goto l13;
l18:pile[v[22]]=Y; pile[WZ1]=BT; pile[WZ2]=jvj+46; 
(*f[35])( );     /*CHGC1(Y,BT,jvj+46)*/
goto l6;
}
