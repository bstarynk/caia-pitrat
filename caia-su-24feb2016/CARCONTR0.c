#include "dx.h"
void CARCONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V33=0,V63=0,V173=0,V110=0,I=0,V169=0,V128=0,V141=0,V289=0,V283=0,V341=0,V37=0,V10=0,V=0,V353=0,V346=0,V251=0,V196=0,V191=0,V380=0,V398=0,V374=0,V437=0,V408=0,V411=0;
int K,N,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=121;
x[jvj+1]=11090;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==487&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; N=pile[v[22]+1]; BL=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,N,jvj+6)*/
if((x[jvj+6]==73)) goto l5;
if((x[jvj+6]==43)) goto l15;
if((x[jvj+6]==22)) goto l16;
if((x[jvj+6]!=69)) goto l30;
pile[v[22]]=108; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(108,N,jvj+68)*/
l28:if((x[jvj+68]<=0)) goto l30;
x[jvj+69]=s[x[jvj+68]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+68];
pile[v[22]]=103; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,jvj+69,jvj+70)*/
pile[v[22]]=140; pile[WZ1]=jvj+70; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+70,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+69; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+69,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+71,jvj+72)*/
x[jvj+73]=x[jvj+72] ;z[jvj+73]=z[jvj+72];
if(x[jvj+73]!=576&&x[jvj+73]!=749) goto l29;
V=V10;
pile[v[22]]=K; pile[WZ1]=V; pile[WZ2]=jvj+73; 
(*f[829])( );     /*AJA1(K,V,jvj+73)*/
l29:x[jvj+68]=t[x[jvj+68]];
goto l28;
l1:x[jvj+57]=1276 ;z[jvj+57]=1276;
l2:x[jvj+58]=incon;
if((x[jvj+26]==44)) goto l3;
x[jvj+58]=273 ;z[jvj+58]=273;
l24:pile[v[22]]=V33; pile[WZ1]=V37; pile[WZ2]=K; pile[WZ3]=jvj+57; 
(*f[830])( );     /*AJB0(V33,V37,K,jvj+57)*/
pile[v[22]]=V37; pile[WZ1]=V33; pile[WZ3]=jvj+58; 
(*f[830])( );     /*AJB0(V37,V33,K,jvj+58)*/
l25:pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+56,jvj+59)*/
if((x[jvj+59]!=22)) goto l27;
pile[v[22]]=102; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+56,jvj+60)*/
pile[v[22]]=140; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+60,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+56; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+56,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+61,jvj+62)*/
if(x[jvj+62]!=267&&x[jvj+62]!=156&&x[jvj+62]!=1272) goto l27;
x[jvj+63]=incon;
if((x[jvj+26]==44)) goto l4;
x[jvj+63]=1275 ;z[jvj+63]=1275;
l26:pile[v[22]]=V33; pile[WZ1]=V63; pile[WZ2]=K; pile[WZ3]=jvj+63; 
(*f[830])( );     /*AJB0(V33,V63,K,jvj+63)*/
if((x[jvj+26]!=25)) goto l27;
pile[v[22]]=V63; pile[WZ1]=V33; pile[WZ3]=1276; 
(*f[830])( );     /*AJB0(V63,V33,K,1276)*/
l27:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,N,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+64,jvj+65)*/
if((x[jvj+65]!=43)) goto l30;
pile[v[22]]=102; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,jvj+64,jvj+66)*/
pile[v[22]]=101; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+66,jvj+67)*/
if(x[jvj+67]!=1070&&x[jvj+67]!=1035) goto l30;
pile[v[22]]=K; pile[WZ1]=1184; pile[WZ2]=1070; 
(*f[36])( );     /*PLUSC0(K,1184,1070)*/
l30:x[jvj+119]=w[x[jvj+6]][9];
if((x[jvj+6]!=22)) goto l31;
pile[v[22]]=111; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,N,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+4,jvj+5)*/
if(x[jvj+5]==278||x[jvj+5]==910||x[jvj+5]==228) goto l34;
l31:if((x[jvj+119]<=0)) goto l34;
x[jvj+74]=s[x[jvj+119]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+119];
if((x[jvj+74]!=103)) goto l33;
if(x[jvj+6]==114||x[jvj+6]==113) goto l32;
l33:pile[v[22]]=jvj+74; pile[WZ1]=N; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+74,N,jvj+75)*/
pile[v[22]]=K; pile[WZ1]=jvj+75; pile[WZ2]=BL; 
(*f[487])( );     /*CARCONTR0(K,jvj+75,BL)*/
l32:x[jvj+119]=t[x[jvj+119]];
goto l31;
l3:x[jvj+58]=1275 ;z[jvj+58]=1275;
goto l24;
l4:x[jvj+63]=273 ;z[jvj+63]=273;
goto l26;
l5:pile[v[22]]=111; pile[WZ1]=N; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,N,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==576)) goto l6;
if((x[jvj+8]==634)) goto l8;
if((x[jvj+8]==1178)) goto l9;
if((x[jvj+8]==580)) goto l10;
if((x[jvj+8]!=1086)) goto l12;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,N,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+15,jvj+16)*/
pile[v[22]]=K; pile[WZ1]=(-7416); pile[WZ2]=1086; pile[WZ3]=jvj+16; 
(*f[833])( );     /*AJA3(K,(-7416),1086,jvj+16)*/
l12:if(x[jvj+8]!=902&&x[jvj+8]!=904) goto l13;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,N,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+17,jvj+18)*/
pile[v[22]]=K; pile[WZ1]=(-7416); pile[WZ2]=jvj+8; pile[WZ3]=jvj+18; 
(*f[833])( );     /*AJA3(K,(-7416),jvj+8,jvj+18)*/
l13:if(x[jvj+8]!=262&&x[jvj+8]!=906&&x[jvj+8]!=1341) goto l14;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,N,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+19,jvj+20)*/
pile[v[22]]=K; pile[WZ1]=(-7416); pile[WZ2]=jvj+8; pile[WZ3]=jvj+20; 
(*f[833])( );     /*AJA3(K,(-7416),jvj+8,jvj+20)*/
l14:if((x[jvj+8]!=38)) goto l30;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,N,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+21,jvj+22)*/
if(x[jvj+22]!=843&&x[jvj+22]!=921&&x[jvj+22]!=1070) goto l30;
pile[v[22]]=K; pile[WZ1]=1183; 
(*f[36])( );     /*PLUSC0(K,1183,jvj+22)*/
goto l30;
l6:pile[v[22]]=K; pile[WZ1]=(-7416); pile[WZ2]=576; 
(*f[829])( );     /*AJA1(K,(-7416),576)*/
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,N,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+9,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=V173; pile[WZ1]=(-7416); pile[WZ2]=K; pile[WZ3]=273; 
(*f[830])( );     /*AJB0(V173,(-7416),K,273)*/
pile[v[22]]=(-7416); pile[WZ1]=V173; 
(*f[830])( );     /*AJB0((-7416),V173,K,273)*/
pile[v[22]]=K; pile[WZ2]=576; 
(*f[829])( );     /*AJA1(K,V173,576)*/
l7:pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=228)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+9,jvj+12)*/
pile[v[22]]=K; pile[WZ1]=jvj+12; pile[WZ2]=(-7416); pile[WZ3]=BL; 
(*f[832])( );     /*ANAPAT0(K,jvj+12,(-7416),BL)*/
goto l12;
l8:pile[v[22]]=K; pile[WZ1]=(-7416); pile[WZ2]=634; 
(*f[829])( );     /*AJA1(K,(-7416),634)*/
goto l12;
l9:pile[v[22]]=K; pile[WZ1]=(-7416); pile[WZ2]=1178; 
(*f[829])( );     /*AJA1(K,(-7416),1178)*/
goto l12;
l10:pile[v[22]]=109; pile[WZ1]=K; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,K,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[834])( );     /*RAPIDE0(jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l11;
goto l12;
l11:pile[v[22]]=K; pile[WZ1]=(-7416); pile[WZ2]=580; 
(*f[829])( );     /*AJA1(K,(-7416),580)*/
goto l12;
l15:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,N,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+23,jvj+24)*/
if(x[jvj+24]!=843&&x[jvj+24]!=921) goto l30;
pile[v[22]]=K; pile[WZ1]=1184; 
(*f[36])( );     /*PLUSC0(K,1184,jvj+24)*/
goto l30;
l16:pile[v[22]]=111; pile[WZ1]=N; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,N,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+25,jvj+26)*/
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,N,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=43)) goto l18;
pile[v[22]]=103; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+27,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+29,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+27,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+30,jvj+31)*/
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,N,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+32,jvj+33)*/
pile[v[22]]=K; pile[WZ1]=V110; pile[WZ2]=jvj+26; pile[WZ3]=jvj+33; pile[WZ4]=jvj+31; 
(*f[489])( );     /*AJA0(K,V110,jvj+26,jvj+33,jvj+31)*/
l17:if((x[jvj+26]==26)) goto l18;
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+32,I)*/
I=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=V110; pile[WZ2]=I; pile[WZ3]=jvj+31; pile[WZ4]=jvj+26; 
(*f[831])( );     /*AJA2(K,V110,I,jvj+31,jvj+26)*/
l18:pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+27,jvj+34)*/
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,N,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=43)) goto l20;
pile[v[22]]=103; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,jvj+35,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+37,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+35,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+38,jvj+39)*/
pile[v[22]]=514; pile[WZ1]=jvj+26; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(514,jvj+26,jvj+40)*/
pile[v[22]]=K; pile[WZ1]=V169; pile[WZ3]=jvj+34; pile[WZ4]=jvj+39; 
(*f[489])( );     /*AJA0(K,V169,jvj+40,jvj+34,jvj+39)*/
l19:if(x[jvj+26]!=44&&x[jvj+26]!=45) goto l20;
pile[v[22]]=K; pile[WZ1]=V169; pile[WZ2]=jvj+26; pile[WZ3]=jvj+34; pile[WZ4]=jvj+39; 
(*f[489])( );     /*AJA0(K,V169,jvj+26,jvj+34,jvj+39)*/
l20:if((x[jvj+26]==26)) goto l22;
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+27,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,N,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=43)) goto l21;
pile[v[22]]=103; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+41,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+43,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+41,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+44,jvj+45)*/
pile[v[22]]=514; pile[WZ1]=jvj+26; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(514,jvj+26,jvj+46)*/
pile[v[22]]=K; pile[WZ1]=V141; pile[WZ2]=V128; pile[WZ3]=jvj+45; pile[WZ4]=jvj+46; 
(*f[831])( );     /*AJA2(K,V141,V128,jvj+45,jvj+46)*/
l21:pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+27,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]!=74)) goto l22;
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,N,jvj+49)*/
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+49,V289)*/
V289=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+27,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=43)) goto l22;
pile[v[22]]=103; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+50,jvj+52)*/
pile[v[22]]=140; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+52,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+50; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+50,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+53,jvj+54)*/
if(x[jvj+54]!=365&&x[jvj+54]!=489) goto l22;
pile[v[22]]=K; pile[WZ1]=V283; pile[WZ2]=V289; pile[WZ3]=jvj+54; pile[WZ4]=jvj+26; 
(*f[831])( );     /*AJA2(K,V283,V289,jvj+54,jvj+26)*/
l22:if(x[jvj+26]!=278&&x[jvj+26]!=910) goto l23;
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+27,V341)*/
V341=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,N,jvj+55)*/
pile[v[22]]=K; pile[WZ1]=jvj+55; pile[WZ2]=V341; pile[WZ3]=BL; 
(*f[832])( );     /*ANAPAT0(K,jvj+55,V341,BL)*/
l23:if(x[jvj+26]!=25&&x[jvj+26]!=44) goto l27;
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+27,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,N,jvj+56)*/
pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+56,V37)*/
V37=pile[WZ2]; 
x[jvj+57]=incon;
if((x[jvj+26]==44)) goto l1;
x[jvj+57]=273 ;z[jvj+57]=273;
goto l2;
l34:x[jvj+120]=w[x[jvj+6]][8];
if((x[jvj+6]!=22)) goto l35;
pile[v[22]]=111; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,N,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]==55||x[jvj+3]==50) goto l38;
l35:if((x[jvj+120]<=0)) goto l38;
x[jvj+76]=s[x[jvj+120]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+120];
pile[v[22]]=jvj+76; pile[WZ1]=N; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(jvj+76,N,jvj+77)*/
x[jvj+121]=x[jvj+77] ;z[jvj+121]=z[jvj+77];
l36:if((x[jvj+121]>0)) goto l37;
x[jvj+120]=t[x[jvj+120]];
goto l35;
l37:x[jvj+78]=s[x[jvj+121]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+121];
pile[v[22]]=K; pile[WZ1]=jvj+78; pile[WZ2]=BL; 
(*f[487])( );     /*CARCONTR0(K,jvj+78,BL)*/
x[jvj+121]=t[x[jvj+121]];
goto l36;
l38:pile[v[22]]=111; pile[WZ1]=N; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,N,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]==228)) goto l39;
if((x[jvj+80]==44)) goto l40;
if((x[jvj+80]==25)) goto l43;
if((x[jvj+80]!=50)) goto l48;
pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(107,N,jvj+100)*/
for(i=x[jvj+100],V380=0;i>0;i=t[i],V380++)  ;
if((V380==1)) goto l45;
l48:pile[v[22]]=101; pile[WZ1]=N; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,N,jvj+117)*/
if(x[jvj+117]!=164&&x[jvj+117]!=280&&x[jvj+117]!=586&&x[jvj+117]!=281&&x[jvj+117]!=1091&&x[jvj+117]!=1090&&x[jvj+117]!=596) goto l49;
pile[v[22]]=274; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(274,jvj+117,jvj+118)*/
pile[v[22]]=K; pile[WZ1]=(-3629); pile[WZ3]=68; 
(*f[835])( );     /*AJA4(K,(-3629),jvj+118,68)*/
l49:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l39:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,N,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=K; pile[WZ2]=BL; 
(*f[838])( );     /*VADANSCREE0(jvj+81,K,BL)*/
goto l48;
l40:pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,N,jvj+82)*/
pile[v[22]]=140; pile[WZ1]=jvj+82; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+82,V353)*/
V353=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,N,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+83,jvj+84)*/
if((x[jvj+84]!=43)) goto l41;
pile[v[22]]=103; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,jvj+83,jvj+85)*/
pile[v[22]]=140; pile[WZ1]=jvj+85; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+85,V346)*/
V346=pile[WZ2]; 
pile[v[22]]=V353; pile[WZ1]=V346; pile[WZ2]=K; pile[WZ3]=1276; 
(*f[830])( );     /*AJB0(V353,V346,K,1276)*/
pile[v[22]]=V346; pile[WZ1]=V353; pile[WZ3]=1275; 
(*f[830])( );     /*AJB0(V346,V353,K,1275)*/
l41:pile[v[22]]=101; pile[WZ1]=jvj+82; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+82,jvj+86)*/
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,N,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+87,jvj+88)*/
if((x[jvj+88]!=43)) goto l48;
pile[v[22]]=103; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+87,jvj+89)*/
pile[v[22]]=140; pile[WZ1]=jvj+89; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+89,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+87; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+87,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+90,jvj+91)*/
if((x[jvj+91]!=971)) goto l48;
pile[v[22]]=K; pile[WZ1]=V251; pile[WZ2]=44; pile[WZ3]=jvj+86; pile[WZ4]=971; 
(*f[489])( );     /*AJA0(K,V251,44,jvj+86,971)*/
goto l48;
l43:x[jvj+92]=d[20];z[jvj+92]=0;
l42:if((x[jvj+92]<=0)) goto l48;
x[jvj+93]=s[x[jvj+92]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+92];
pile[v[22]]=268; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(268,jvj+93,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=N; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(jvj+94,N,jvj+95)*/
pile[v[22]]=111; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+95,jvj+96)*/
pile[v[22]]=101; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+96,jvj+97)*/
if((x[jvj+97]!=228)) goto l44;
pile[v[22]]=jvj+93; pile[WZ1]=N; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(jvj+93,N,jvj+98)*/
pile[v[22]]=140; pile[WZ1]=jvj+98; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+98,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+95; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+95,jvj+99)*/
V191=V196;
pile[v[22]]=K; pile[WZ1]=jvj+99; pile[WZ2]=V191; pile[WZ3]=BL; 
(*f[832])( );     /*ANAPAT0(K,jvj+99,V191,BL)*/
l44:x[jvj+92]=t[x[jvj+92]];
goto l42;
l45:if((x[jvj+100]<=0)) goto l48;
x[jvj+101]=s[x[jvj+100]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+100];
pile[v[22]]=100; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+101,jvj+102)*/
if((x[jvj+102]!=22)) goto l46;
pile[v[22]]=111; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+101,jvj+103)*/
pile[v[22]]=101; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+103,jvj+104)*/
pile[v[22]]=102; pile[WZ1]=jvj+101; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+101,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+105,jvj+106)*/
if((x[jvj+106]!=43)) goto l46;
pile[v[22]]=103; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+105,jvj+107)*/
pile[v[22]]=140; pile[WZ1]=jvj+107; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+107,V398)*/
V398=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+105; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+105,jvj+108)*/
pile[v[22]]=101; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+108,jvj+109)*/
pile[v[22]]=103; pile[WZ1]=jvj+101; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+101,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+110,jvj+111)*/
x[jvj+113]=x[jvj+104] ;z[jvj+113]=z[jvj+104];
V374=V398;
x[jvj+112]=x[jvj+109] ;z[jvj+112]=z[jvj+109];
x[jvj+114]=x[jvj+111] ;z[jvj+114]=z[jvj+111];
pile[v[22]]=K; pile[WZ1]=V374; pile[WZ2]=jvj+112; pile[WZ3]=jvj+113; pile[WZ4]=jvj+114; pile[WZ5]=68; 
(*f[836])( );     /*AJA5(K,V374,jvj+112,jvj+113,jvj+114,68)*/
l47:pile[v[22]]=130; pile[WZ1]=jvj+110; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+110,V437)*/
V437=pile[WZ2]; 
x[jvj+116]=x[jvj+104] ;z[jvj+116]=z[jvj+104];
V408=V398;
x[jvj+115]=x[jvj+109] ;z[jvj+115]=z[jvj+109];
V411=V437;
pile[v[22]]=K; pile[WZ1]=V408; pile[WZ2]=jvj+115; pile[WZ3]=jvj+116; pile[WZ4]=V411; pile[WZ5]=68; 
(*f[837])( );     /*AJA6(K,V408,jvj+115,jvj+116,V411,68)*/
l46:x[jvj+100]=t[x[jvj+100]];
goto l45;
}
