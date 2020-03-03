#include "dx.h"
void STOCKECHOIX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V49=0,I=0,V56=0,J=0,V58=0,V73=0,V63=0,V80=0,V64=0,V82=0,F=0,V36=0;
int N;
int T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=10924;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1292&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[T]=incon;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=T; 
(*f[54])( );     /*TRI1(250,158,T)*/
x[jvj+20]=x[N] ;z[jvj+20]=z[N];
l5:pile[v[22]]=498; pile[WZ1]=jvj+20; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(498,jvj+20,jvj+5)*/
pile[WZ1]=jvj+5; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,jvj+5,jvj+21)*/
pile[v[22]]=226; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(226,jvj+21,jvj+22)*/
for(i=x[jvj+22],V10=0;i>0;i=t[i],V10++)  ;
if((V10<=1)) goto l6;
pile[v[22]]=287; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(287,jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[1290])( );if(v[102]) goto l1;     /*DEPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=80; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(80,jvj+5,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1291])( );if(v[102]) goto l1;     /*CONVEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
x[jvj+55]=x[jvj+8] ;z[jvj+55]=z[jvj+8];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+53,jvj+11,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+12)*/
pile[v[22]]=T; pile[WZ1]=1081; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(T,1081,jvj+12)*/
l1:pile[v[22]]=576; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(576,jvj+5,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=48)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
x[jvj+56]=x[jvj+16] ;z[jvj+56]=z[jvj+16];
l2:if((x[jvj+56]<=0)) goto l3;
x[jvj+17]=s[x[jvj+56]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+56];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=T; pile[WZ1]=1081; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(T,1081,jvj+18)*/
x[jvj+56]=t[x[jvj+56]];
goto l2;
l3:x[jvj+2]=x[jvj+13] ;z[jvj+2]=z[jvj+13];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==48)) goto l6;
l4:pile[v[22]]=jvj+2; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+19)*/
pile[v[22]]=T; pile[WZ1]=1081; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(T,1081,jvj+19)*/
l6:x[jvj+20]=x[jvj+5] ;z[jvj+20]=z[jvj+5];
goto l5;
l7:if(x[T]!=incon) goto l8;
l25:if(x[T]!=incon) goto l26;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l8:pile[v[22]]=1081; pile[WZ1]=T; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1081,T,jvj+23)*/
x[jvj+57]=x[jvj+23] ;z[jvj+57]=z[jvj+23];
l9:if((x[jvj+57]<=0)) goto l25;
x[jvj+24]=s[x[jvj+57]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+57];
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=27)) goto l14;
pile[v[22]]=103; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+24,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+27,V49)*/
V49=pile[WZ2]; 
I=V49;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+24,jvj+28)*/
x[jvj+58]=x[jvj+23] ;z[jvj+58]=z[jvj+23];
l11:if((x[jvj+58]<=0)) goto l14;
x[jvj+29]=s[x[jvj+58]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+58];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=27)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+29,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+32,V56)*/
V56=pile[WZ2]; 
J=V56;
if((I<=J)) goto l12;
V58=x[jvj+29];
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+29,jvj+33)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+33,jvj+34)*/
if((x[jvj+34]==135)) goto l13;
l12:x[jvj+58]=t[x[jvj+58]];
goto l11;
l10:x[jvj+57]=t[x[jvj+57]];
goto l9;
l13:pile[v[22]]=1081; pile[WZ1]=T; pile[WZ2]=V58; 
(*f[134])( );     /*OTA0(1081,T,V58)*/
goto l12;
l14:if((x[jvj+26]!=30)) goto l18;
pile[v[22]]=103; pile[WZ1]=jvj+24; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+24,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+35,V73)*/
V73=pile[WZ2]; 
V63=V73;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+24,jvj+36)*/
x[jvj+59]=x[jvj+23] ;z[jvj+59]=z[jvj+23];
l15:if((x[jvj+59]<=0)) goto l18;
x[jvj+37]=s[x[jvj+59]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+59];
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=30)) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+37,jvj+40)*/
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+40,V80)*/
V80=pile[WZ2]; 
V64=V80;
if((V63>=V64)) goto l16;
V82=x[jvj+37];
pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+37,jvj+41)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[760])( );     /*MEMEX0(jvj+36,jvj+41,jvj+42)*/
if((x[jvj+42]==135)) goto l17;
l16:x[jvj+59]=t[x[jvj+59]];
goto l15;
l17:pile[v[22]]=1081; pile[WZ1]=T; pile[WZ2]=V82; 
(*f[134])( );     /*OTA0(1081,T,V82)*/
goto l16;
l18:if((x[jvj+26]!=25)) goto l10;
x[jvj+60]=x[jvj+23] ;z[jvj+60]=z[jvj+23];
l19:if((x[jvj+60]<=0)) goto l10;
x[jvj+43]=s[x[jvj+60]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+60];
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+43,jvj+44)*/
if((x[jvj+44]!=22)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+43,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+45,jvj+46)*/
F=x[jvj+46];
if(F!=27&&F!=28&&F!=29&&F!=30) goto l20;
V36=x[jvj+43];
pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+43,jvj+47)*/
x[jvj+48]=d[20];z[jvj+48]=0;
l21:if((x[jvj+48]<=0)) goto l20;
x[jvj+49]=s[x[jvj+48]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+48];
pile[v[22]]=jvj+49; pile[WZ1]=jvj+24; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+49,jvj+24,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+47; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+50,jvj+47,jvj+51)*/
if((x[jvj+51]==135)) goto l23;
l22:x[jvj+48]=t[x[jvj+48]];
goto l21;
l20:x[jvj+60]=t[x[jvj+60]];
goto l19;
l23:pile[v[22]]=1081; pile[WZ1]=T; pile[WZ2]=V36; 
(*f[134])( );     /*OTA0(1081,T,V36)*/
goto l22;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
}
