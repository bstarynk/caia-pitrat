#include "dx.h"
void QRR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V51=0,FF=0,V70=0,V87=0,V2=0,V14=0,V15=0,V16=0,V18=0,V17=0,W=0,V92=0,V80=0,V35=0,S=0,V75=0,V61=0,V56=0,V40=0,V4=0;
int R,V,K,G,RS;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=71;
x[jvj+1]=10869;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2065&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; V=pile[v[22]+1]; K=pile[v[22]+2]; G=pile[v[22]+3]; RS=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=K; pile[WZ1]=158; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(K,158,jvj+32)*/
x[jvj+37]=x[G] ;z[jvj+37]=z[G];
if((x[RS]!=68)) goto l9;
x[jvj+33]=vo[16];z[jvj+33]=vz[16];
V2=x[R];
pile[v[22]]=509; pile[WZ1]=jvj+33; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(509,jvj+33,V2)*/
x[jvj+34]=vo[14];z[jvj+34]=vz[14];
V14=x[R];
pile[v[22]]=221; pile[WZ1]=jvj+34; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(221,jvj+34,V14)*/
l9:V15=x[V];
V16=x[R];
z[V]=(-1);
pile[v[22]]=258; pile[WZ1]=R; pile[WZ2]=V15; 
(*f[134])( );     /*OTA0(258,R,V15)*/
pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=V16; 
(*f[134])( );     /*OTA0(509,V,V16)*/
pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(509,V,jvj+35)*/
l10:if((x[jvj+35]>0)) goto l11;
pile[v[22]]=jvj+32; pile[WZ1]=218; pile[WZ2]=V; 
(*f[35])( );     /*CHGC1(jvj+32,218,V)*/
pile[WZ1]=208; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(jvj+32,208,jvj+37)*/
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=608; pile[WZ1]=jvj+29; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(608,jvj+29,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=728; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+31,728,jvj+32)*/
l12:pile[v[22]]=jvj+29; pile[WZ1]=608; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+29,608,jvj+32)*/
pile[v[22]]=728; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(728,jvj+29,jvj+30)*/
l14:x[jvj+38]=vo[14];z[jvj+38]=vz[14];
pile[v[22]]=jvj+38; pile[WZ1]=1232; pile[WZ2]=V; 
(*f[36])( );     /*PLUSC0(jvj+38,1232,V)*/
pile[WZ1]=1304; 
(*f[36])( );     /*PLUSC0(jvj+38,1304,V)*/
x[jvj+39]=vo[12];z[jvj+39]=vz[12];
pile[v[22]]=1256; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1256,jvj+39,jvj+40)*/
if((x[jvj+40]!=68)) goto l15;
pile[v[22]]=R; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(R,jvj+41)*/
pile[v[22]]=jvj+38; pile[WZ1]=1081; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+38,1081,jvj+41)*/
pile[v[22]]=V; pile[WZ1]=jvj+42; 
(*f[1290])( );if(v[102]) goto l15;     /*DEPEXP0(V,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+43)*/
pile[v[22]]=G; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(G,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+66,jvj+44,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+67; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+67,jvj+45)*/
pile[v[22]]=jvj+38; pile[WZ1]=1081; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+38,1081,jvj+45)*/
l15:if((x[K]!=528)) goto l16;
pile[v[22]]=365; pile[WZ1]=V; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(365,V,jvj+46)*/
for(i=x[jvj+46],V18=0;i>0;i=t[i],V18++)  ;
pile[v[22]]=V18; 
(*f[850])( );if(v[102]) goto l16;     /*LOG0(V18,V17)*/
V17=pile[WZ1]; 
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=V; pile[WZ1]=110; pile[WZ2]=W; 
(*f[177])( );     /*CHGC4(V,110,W)*/
pile[v[22]]=jvj+38; pile[WZ1]=273; 
(*f[735])( );     /*PLUSC4(jvj+38,273,W)*/
pile[WZ1]=322; pile[WZ2]=V17; 
(*f[186])( );     /*BTC0(jvj+38,322,V17)*/
l16:pile[v[22]]=R; pile[WZ1]=jvj+47; 
(*f[2123])( );     /*Z96Z0(R,jvj+47)*/
l17:if((x[jvj+47]>0)) goto l18;
pile[v[22]]=R; pile[WZ1]=jvj+51; 
(*f[2120])( );     /*Z92Z0(R,jvj+51)*/
l20:if((x[jvj+51]>0)) goto l21;
pile[v[22]]=R; pile[WZ1]=jvj+55; 
(*f[2122])( );     /*Z95Z0(R,jvj+55)*/
l23:if((x[jvj+55]>0)) goto l24;
pile[v[22]]=R; pile[WZ1]=jvj+59; 
(*f[2121])( );     /*Z94Z0(R,jvj+59)*/
l26:if((x[jvj+59]>0)) goto l27;
pile[v[22]]=258; pile[WZ1]=R; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(258,R,jvj+63)*/
V4=x[R];
l29:if((x[jvj+63]>0)) goto l30;
l31:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+68]=t[x[jvj+68]];
l1:if((x[jvj+68]<=0)) goto l22;
x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=448)) goto l2;
pile[v[22]]=436; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V30)*/
V30=pile[WZ2]; 
if((S!=V30)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=453)) goto l2;
pile[v[22]]=jvj+38; pile[WZ1]=678; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+38,678,jvj+5)*/
l22:x[jvj+51]=t[x[jvj+51]];
goto l20;
l4:x[jvj+69]=t[x[jvj+69]];
l3:if((x[jvj+69]<=0)) goto l28;
x[jvj+12]=s[x[jvj+69]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+69];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=448)) goto l4;
pile[v[22]]=436; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,jvj+12,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+14,V51)*/
V51=pile[WZ2]; 
if((V40!=V51)) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+12,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+15,jvj+16)*/
FF=x[jvj+16];
if(FF!=979&&FF!=1027) goto l4;
pile[v[22]]=jvj+38; pile[WZ1]=678; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+38,678,jvj+12)*/
l28:x[jvj+59]=t[x[jvj+59]];
goto l26;
l6:x[jvj+70]=t[x[jvj+70]];
l5:if((x[jvj+70]<=0)) goto l25;
x[jvj+19]=s[x[jvj+70]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+70];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=448)) goto l6;
pile[v[22]]=436; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,jvj+19,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+21,V70)*/
V70=pile[WZ2]; 
if((V61!=V70)) goto l6;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+19,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=531)) goto l6;
pile[v[22]]=jvj+38; pile[WZ1]=678; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+38,678,jvj+19)*/
l25:x[jvj+55]=t[x[jvj+55]];
goto l23;
l8:x[jvj+71]=t[x[jvj+71]];
l7:if((x[jvj+71]<=0)) goto l19;
x[jvj+26]=s[x[jvj+71]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+71];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=448)) goto l8;
pile[v[22]]=436; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+26,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+28,V87)*/
V87=pile[WZ2]; 
if((V80!=V87)) goto l8;
pile[v[22]]=jvj+38; pile[WZ1]=678; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+38,678,jvj+26)*/
l19:x[jvj+47]=t[x[jvj+47]];
goto l17;
l11:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=258; pile[WZ1]=jvj+36; pile[WZ2]=V15; 
(*f[134])( );     /*OTA0(258,jvj+36,V15)*/
x[jvj+35]=t[x[jvj+35]];
goto l10;
l13:pile[v[22]]=jvj+29; pile[WZ1]=728; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+29,728,jvj+32)*/
goto l14;
l18:x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]!=22)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+48,jvj+50)*/
pile[v[22]]=163; pile[WZ1]=jvj+50; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(163,jvj+50,V92)*/
V92=pile[WZ2]; 
V80=V92;
x[jvj+24]=vo[16];z[jvj+24]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(448,jvj+24,jvj+25)*/
x[jvj+71]=x[jvj+25] ;z[jvj+71]=z[jvj+25];
goto l7;
l21:x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=100; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+52,jvj+53)*/
if((x[jvj+53]!=453)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+52,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+54,V35)*/
V35=pile[WZ2]; 
S=V35;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(448,jvj+3,jvj+4)*/
x[jvj+68]=x[jvj+4] ;z[jvj+68]=z[jvj+4];
goto l1;
l24:x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+56,jvj+57)*/
if((x[jvj+57]!=531)) goto l25;
pile[v[22]]=111; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+56,jvj+58)*/
pile[v[22]]=140; pile[WZ1]=jvj+58; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+58,V75)*/
V75=pile[WZ2]; 
V61=V75;
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(448,jvj+17,jvj+18)*/
x[jvj+70]=x[jvj+18] ;z[jvj+70]=z[jvj+18];
goto l5;
l27:x[jvj+60]=s[x[jvj+59]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+59];
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=979)) goto l28;
pile[v[22]]=111; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+60,jvj+62)*/
pile[v[22]]=140; pile[WZ1]=jvj+62; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+62,V56)*/
V56=pile[WZ2]; 
V40=V56;
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(448,jvj+10,jvj+11)*/
x[jvj+69]=x[jvj+11] ;z[jvj+69]=z[jvj+11];
goto l3;
l30:x[jvj+64]=s[x[jvj+63]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+63];
z[jvj+64]=(-1);
pile[v[22]]=509; pile[WZ1]=jvj+64; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(509,jvj+64,V4)*/
x[jvj+63]=t[x[jvj+63]];
goto l29;
}
