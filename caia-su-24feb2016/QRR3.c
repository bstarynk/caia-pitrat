#include "dx.h"
void QRR3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V42=0,FF=0,V61=0,V78=0,V2=0,V12=0,V4=0,V83=0,V71=0,V26=0,S=0,V66=0,V52=0,V47=0,V31=0;
int R,K,G,RS;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=65;
x[jvj+1]=10869;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2119&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; K=pile[v[22]+1]; G=pile[v[22]+2]; RS=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=K; pile[WZ1]=158; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(K,158,jvj+32)*/
x[jvj+35]=x[G] ;z[jvj+35]=z[G];
if((x[RS]!=68)) goto l9;
x[jvj+33]=vo[16];z[jvj+33]=vz[16];
V2=x[R];
pile[v[22]]=509; pile[WZ1]=jvj+33; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(509,jvj+33,V2)*/
x[jvj+34]=vo[14];z[jvj+34]=vz[14];
V12=x[R];
pile[v[22]]=221; pile[WZ1]=jvj+34; pile[WZ2]=V12; 
(*f[134])( );     /*OTA0(221,jvj+34,V12)*/
l9:pile[v[22]]=jvj+32; pile[WZ1]=208; pile[WZ2]=jvj+35; 
(*f[35])( );     /*CHGC1(jvj+32,208,jvj+35)*/
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=608; pile[WZ1]=jvj+29; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(608,jvj+29,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=728; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+31,728,jvj+32)*/
l10:pile[v[22]]=jvj+29; pile[WZ1]=608; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+29,608,jvj+32)*/
pile[v[22]]=728; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(728,jvj+29,jvj+30)*/
l12:x[jvj+36]=vo[12];z[jvj+36]=vz[12];
pile[v[22]]=1256; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1256,jvj+36,jvj+37)*/
if((x[jvj+37]!=68)) goto l13;
pile[v[22]]=R; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(R,jvj+38)*/
x[jvj+39]=vo[14];z[jvj+39]=vz[14];
pile[v[22]]=jvj+39; pile[WZ1]=1081; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+39,1081,jvj+38)*/
l13:pile[v[22]]=258; pile[WZ1]=R; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(258,R,jvj+40)*/
V4=x[R];
l14:if((x[jvj+40]>0)) goto l15;
pile[v[22]]=R; pile[WZ1]=jvj+42; 
(*f[2123])( );     /*Z96Z0(R,jvj+42)*/
x[jvj+43]=vo[14];z[jvj+43]=vz[14];
l16:if((x[jvj+42]>0)) goto l17;
pile[v[22]]=R; pile[WZ1]=jvj+47; 
(*f[2120])( );     /*Z92Z0(R,jvj+47)*/
x[jvj+48]=vo[14];z[jvj+48]=vz[14];
l19:if((x[jvj+47]>0)) goto l20;
pile[v[22]]=R; pile[WZ1]=jvj+52; 
(*f[2122])( );     /*Z95Z0(R,jvj+52)*/
x[jvj+53]=vo[14];z[jvj+53]=vz[14];
l22:if((x[jvj+52]>0)) goto l23;
pile[v[22]]=R; pile[WZ1]=jvj+57; 
(*f[2121])( );     /*Z94Z0(R,jvj+57)*/
x[jvj+58]=vo[14];z[jvj+58]=vz[14];
l25:if((x[jvj+57]>0)) goto l26;
l28:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+62]=t[x[jvj+62]];
l1:if((x[jvj+62]<=0)) goto l21;
x[jvj+5]=s[x[jvj+62]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+62];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=448)) goto l2;
pile[v[22]]=436; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V21)*/
V21=pile[WZ2]; 
if((S!=V21)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=453)) goto l2;
pile[v[22]]=jvj+48; pile[WZ1]=678; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+48,678,jvj+5)*/
l21:x[jvj+47]=t[x[jvj+47]];
goto l19;
l4:x[jvj+63]=t[x[jvj+63]];
l3:if((x[jvj+63]<=0)) goto l27;
x[jvj+12]=s[x[jvj+63]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+63];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=448)) goto l4;
pile[v[22]]=436; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,jvj+12,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+14,V42)*/
V42=pile[WZ2]; 
if((V31!=V42)) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+12,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+15,jvj+16)*/
FF=x[jvj+16];
if(FF!=979&&FF!=1027) goto l4;
pile[v[22]]=jvj+58; pile[WZ1]=678; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+58,678,jvj+12)*/
l27:x[jvj+57]=t[x[jvj+57]];
goto l25;
l6:x[jvj+64]=t[x[jvj+64]];
l5:if((x[jvj+64]<=0)) goto l24;
x[jvj+19]=s[x[jvj+64]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+64];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=448)) goto l6;
pile[v[22]]=436; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,jvj+19,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+21,V61)*/
V61=pile[WZ2]; 
if((V52!=V61)) goto l6;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+19,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=531)) goto l6;
pile[v[22]]=jvj+53; pile[WZ1]=678; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+53,678,jvj+19)*/
l24:x[jvj+52]=t[x[jvj+52]];
goto l22;
l8:x[jvj+65]=t[x[jvj+65]];
l7:if((x[jvj+65]<=0)) goto l18;
x[jvj+26]=s[x[jvj+65]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+65];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=448)) goto l8;
pile[v[22]]=436; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+26,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+28,V78)*/
V78=pile[WZ2]; 
if((V71!=V78)) goto l8;
pile[v[22]]=jvj+43; pile[WZ1]=678; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+43,678,jvj+26)*/
l18:x[jvj+42]=t[x[jvj+42]];
goto l16;
l11:pile[v[22]]=jvj+29; pile[WZ1]=728; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+29,728,jvj+32)*/
goto l12;
l15:x[jvj+41]=s[x[jvj+40]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+40];
z[jvj+41]=(-1);
pile[v[22]]=509; pile[WZ1]=jvj+41; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(509,jvj+41,V4)*/
x[jvj+40]=t[x[jvj+40]];
goto l14;
l17:x[jvj+44]=s[x[jvj+42]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+42];
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=22)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+44,jvj+46)*/
pile[v[22]]=163; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(163,jvj+46,V83)*/
V83=pile[WZ2]; 
V71=V83;
x[jvj+24]=vo[16];z[jvj+24]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(448,jvj+24,jvj+25)*/
x[jvj+65]=x[jvj+25] ;z[jvj+65]=z[jvj+25];
goto l7;
l20:x[jvj+49]=s[x[jvj+47]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+47];
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=453)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+49,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+51,V26)*/
V26=pile[WZ2]; 
S=V26;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(448,jvj+3,jvj+4)*/
x[jvj+62]=x[jvj+4] ;z[jvj+62]=z[jvj+4];
goto l1;
l23:x[jvj+54]=s[x[jvj+52]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+52];
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+54,jvj+55)*/
if((x[jvj+55]!=531)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+54,jvj+56)*/
pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+56,V66)*/
V66=pile[WZ2]; 
V52=V66;
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(448,jvj+17,jvj+18)*/
x[jvj+64]=x[jvj+18] ;z[jvj+64]=z[jvj+18];
goto l5;
l26:x[jvj+59]=s[x[jvj+57]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+57];
pile[v[22]]=100; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+59,jvj+60)*/
if((x[jvj+60]!=979)) goto l27;
pile[v[22]]=111; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+59,jvj+61)*/
pile[v[22]]=140; pile[WZ1]=jvj+61; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+61,V47)*/
V47=pile[WZ2]; 
V31=V47;
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(448,jvj+10,jvj+11)*/
x[jvj+63]=x[jvj+11] ;z[jvj+63]=z[jvj+11];
goto l3;
}
