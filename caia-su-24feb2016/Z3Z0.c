#include "dx.h"
void Z3Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V82=0,V66=0,V4=0,V12=0,V25=0,V42=0,V113=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=15504;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1864&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(539,NNNY,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==596)) goto l5;
if((x[jvj+10]!=25)) goto l9;
x[jvj+15]=d[20];z[jvj+15]=0;
l7:if((x[jvj+15]<=0)) goto l9;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+16,jvj+8,jvj+17)*/
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=486)) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+16,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+8; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+20,jvj+8,jvj+21)*/
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+21,V66)*/
V66=pile[WZ2]; 
if((V66!=0)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+22)*/
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+5]=d[76];z[jvj+5]=0;
l3:if((x[jvj+22]>0)) goto l4;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+23; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+23)*/
NNNT=100;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+23; pile[WZ2]=107; pile[WZ3]=jvj+65; 
(*f[301])( );     /*TRI11(jvj+64,jvj+23,107,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+65,22,100,jvj+24)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+24; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+8,jvj+24,NNNX)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[jvj+57]=s[x[jvj+50]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+50];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+53)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+55; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+55)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+57,jvj+56,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,jvj+4)*/
x[jvj+50]=t[x[jvj+50]];
l1:if((x[jvj+50]>0)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+51; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+51)*/
NNNT=100;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+51; pile[WZ2]=107; pile[WZ3]=jvj+68; 
(*f[301])( );     /*TRI11(jvj+67,jvj+51,107,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+68,22,100,jvj+52)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+52; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+52,NNNX)*/
goto l22;
l4:x[jvj+62]=s[x[jvj+22]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+22];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+6,jvj+7)*/
x[jvj+22]=t[x[jvj+22]];
goto l3;
l5:pile[v[22]]=103; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+8,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+11,V82)*/
V82=pile[WZ2]; 
if((V82!=0)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+8,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1446])( );     /*NONUL0(jvj+12,jvj+13)*/
if((x[jvj+13]==135)) goto l6;
l9:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(543,NNNY,jvj+25)*/
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==485)) goto l10;
if((x[jvj+27]!=486)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+30)*/
l13:if((x[jvj+30]<=0)) goto l15;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+31,V12)*/
V12=pile[WZ2]; 
if((V12!=0)) goto l14;
NNNT=3;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+32)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+32; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+25,jvj+32,NNNX)*/
goto l22;
l6:NNNT=189;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+14)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+14; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+8,jvj+14,NNNX)*/
goto l22;
l8:x[jvj+15]=t[x[jvj+15]];
goto l7;
l10:pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+25,jvj+28)*/
l11:if((x[jvj+28]<=0)) goto l15;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
if((x[NNNY]!=x[jvj+29])) goto l12;
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+29,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l12;
x[NNNX]=x[jvj+25] ;z[NNNX]=z[jvj+25];
NNNT=1;
V113=x[NNNY];
pile[v[22]]=107; pile[WZ1]=jvj+25; pile[WZ2]=V113; 
(*f[134])( );     /*OTA0(107,jvj+25,V113)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+25)*/
goto l22;
l12:x[jvj+28]=t[x[jvj+28]];
goto l11;
l14:x[jvj+30]=t[x[jvj+30]];
goto l13;
l15:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(538,NNNY,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=22)) goto l17;
pile[v[22]]=102; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+33,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+35,V25)*/
V25=pile[WZ2]; 
if((V25!=0)) goto l17;
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+33,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+36,jvj+37)*/
if(x[jvj+37]!=63&&x[jvj+37]!=990) goto l17;
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+33,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[1446])( );     /*NONUL0(jvj+38,jvj+39)*/
if((x[jvj+39]==135)) goto l16;
l17:pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+33,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=25)) goto l21;
x[jvj+43]=d[20];z[jvj+43]=0;
l18:if((x[jvj+43]<=0)) goto l21;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+33; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+44,jvj+33,jvj+45)*/
pile[v[22]]=111; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+45,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=486)) goto l19;
pile[v[22]]=268; pile[WZ1]=jvj+44; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+44,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+33; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+48,jvj+33,jvj+49)*/
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+49,V42)*/
V42=pile[WZ2]; 
if((V42!=0)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+45; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+45,jvj+50)*/
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+2]=d[76];z[jvj+2]=0;
goto l1;
l16:NNNT=22;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+40)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+40; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+33,jvj+40,NNNX)*/
goto l22;
l19:x[jvj+43]=t[x[jvj+43]];
goto l18;
l21:x[NNNX]=NNNT=incon;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
