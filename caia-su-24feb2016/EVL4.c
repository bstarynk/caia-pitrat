#include "dx.h"
void EVL4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V144=0,V27=0,V38=0,T=0,V43=0,V218=0,V46=0,RES=0,V219=0,V84=0,V83=0,V156=0,RR=0,V171=0,V221=0,V161=0,V160=0,V174=0,TZA=0,TT1=0,TZZ=0,TT2=0,V212=0,V18=0,V17=0,V62=0,F=0,V87=0,V88=0,V103=0,V96=0,V98=0,V100=0,V102=0,V104=0,V110=0,V119=0,V112=0,V114=0,V116=0,V118=0,V134=0,V127=0,V129=0,V131=0,V133=0,V135=0,V141=0,V44=0,V48=0,V50=0,V52=0,V57=0,V214=0,V23=0,V22=0,V223=0,V198=0,V197=0,V65=0,V67=0,V68=0,V=0,V36=0,V216=0,V32=0,V31=0,V142=0,V149=0,V147=0,V233=0,V234=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=103;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+34]=x[A] ;z[jvj+34]=z[A];
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
x[jvj+27]=x[jvj+23] ;z[jvj+27]=z[jvj+23];
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]==484)) goto l21;
if((x[jvj+35]!=43)) goto l29;
pile[v[22]]=102; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+34,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+24,jvj+54)*/
pile[v[22]]=1815; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1815,jvj+54,jvj+55)*/
if((x[jvj+55]!=68)) goto l13;
pile[v[22]]=103; pile[WZ1]=jvj+34; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+34,jvj+56)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+56; pile[WZ2]=jvj+27; pile[WZ3]=jvj+57; 
(*f[205])( );if(v[102]) goto l13;     /*EVLT0(jvj+54,jvj+56,jvj+27,jvj+57,RES)*/
RES=pile[WZ4]; 
l47:if((x[jvj+57]==20)) goto l48;
l50:x[jvj+98]=RES ;z[jvj+98]=(x[jvj+57]==20&&RES<=sepcte) ? RES : (x[jvj+57]==41) ? (-1000) : 0;
if((x[jvj+99]=w[x[jvj+57]][3])==incon) goto l51;
pile[v[22]]=jvj+57; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+57,100,R)*/
V233=x[jvj+98];
V234=z[jvj+98];
pile[v[22]]=R; pile[WZ1]=V233; pile[WZ2]=jvj+99; pile[WZ3]=V234; 
(*f[49])( );     /*CHP0(R,V233,jvj+99,V234)*/
l52:v[0]=jvj; v[22]-=2; v[102]=0;return;
l3:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=274; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(274,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[jvj+1])) goto l4;
pile[v[22]]=319; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(319,jvj+5,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
l23:if((x[jvj+8]==(-99999998))) goto l25;
x[jvj+10]=incon;
pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+8,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
l24:x[jvj+57]=x[jvj+10] ;z[jvj+57]=z[jvj+10];
if((x[jvj+37]=w[x[jvj+57]][3])==incon) goto l51;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+37; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l51;     /*FNDZ0(jvj+8,jvj+37,V219,jvj+38)*/
V219=pile[WZ2]; 
V84=V219;
V83=V84;
RES=V83;
goto l47;
l4:x[jvj+4]=t[x[jvj+4]];
l2:if((x[jvj+4]>0)) goto l3;
if(x[jvj+8]==incon) goto l25;
goto l23;
l5:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+8,jvj+10)*/
goto l24;
l7:x[jvj+11]=t[x[jvj+11]];
l6:if((x[jvj+11]<=0)) goto l51;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+12,V144)*/
V144=pile[WZ2]; 
if((V144!=V142)) goto l7;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(117,jvj+12,V149)*/
V149=pile[WZ2]; 
x[jvj+97]=vo[V149];z[jvj+97]=vz[V149];
V147=x[jvj+97];
RES=V147;
l30:x[jvj+57]=20 ;z[jvj+57]=20;
l48:if((RES>sepcte)) goto l49;
if((RES<=sepcte)) goto l50;
l51:v[0]=jvj; v[22]-=2; v[102]=1;return;
l10:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=274; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(274,jvj+17,jvj+18)*/
if((x[jvj+18]!=x[jvj+13])) goto l11;
pile[v[22]]=319; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(319,jvj+17,jvj+19)*/
x[jvj+20]=x[jvj+19] ;z[jvj+20]=z[jvj+19];
l42:if((x[jvj+20]==(-99999998))) goto l44;
x[jvj+22]=incon;
pile[v[22]]=158; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+20,jvj+21)*/
x[jvj+22]=x[jvj+21] ;z[jvj+22]=z[jvj+21];
l43:x[jvj+57]=x[jvj+22] ;z[jvj+57]=z[jvj+22];
if((x[jvj+90]=w[x[jvj+57]][3])==incon) goto l51;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+90; pile[WZ3]=jvj+91; 
(*f[45])( );if(v[102]) goto l51;     /*FNDZ0(jvj+20,jvj+90,V223,jvj+91)*/
V223=pile[WZ2]; 
V198=V223;
V197=V198;
RES=V197;
goto l47;
l11:x[jvj+16]=t[x[jvj+16]];
l9:if((x[jvj+16]>0)) goto l10;
if(x[jvj+20]==incon) goto l44;
goto l42;
l12:pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+20,jvj+22)*/
goto l43;
l13:pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+24,jvj+25)*/
pile[v[22]]=1815; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1815,jvj+25,jvj+26)*/
if((x[jvj+26]==68)) goto l29;
l28:pile[v[22]]=jvj+24; pile[WZ1]=jvj+27; pile[WZ3]=jvj+58; 
(*f[80])( );if(v[102]) goto l29;     /*EVL1(jvj+24,jvj+27,TT1,jvj+58,TZA)*/
TT1=pile[WZ2]; TZA=pile[WZ4]; 
x[jvj+62]=TT1 ;z[jvj+62]=(TT1<=sepcte) ? TT1 : 0;
pile[v[22]]=103; pile[WZ1]=jvj+34; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,jvj+34,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+27; pile[WZ3]=jvj+60; 
(*f[80])( );if(v[102]) goto l29;     /*EVL1(jvj+59,jvj+27,TT2,jvj+60,TZZ)*/
TT2=pile[WZ2]; TZZ=pile[WZ4]; 
x[jvj+61]=TT2 ;z[jvj+61]=(TT2<=sepcte) ? TT2 : 0;
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ3]=jvj+63; 
(*f[45])( );if(v[102]) goto l29;     /*FNDZ0(jvj+61,jvj+62,V212,jvj+63)*/
V212=pile[WZ2]; 
V18=V212;
V17=V18;
if((x[jvj+102]=w[x[jvj+62]][1])==incon) goto l29;
RES=V17;
x[jvj+57]=x[jvj+102] ;z[jvj+57]=z[jvj+102];
goto l47;
l15:x[jvj+28]=t[x[jvj+28]];
l14:if((x[jvj+28]<=0)) goto l46;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+29,V27)*/
V27=pile[WZ2]; 
if((V27!=V)) goto l15;
pile[v[22]]=416; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(416,jvj+29,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(158,jvj+29,jvj+94)*/
if((x[jvj+95]=w[x[jvj+94]][3])==incon) goto l46;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+95; pile[WZ3]=jvj+96; 
(*f[45])( );if(v[102]) goto l46;     /*FNDZ0(jvj+29,jvj+95,V216,jvj+96)*/
V216=pile[WZ2]; 
V32=V216;
V31=V32;
RES=V31;
x[jvj+57]=x[jvj+94] ;z[jvj+57]=z[jvj+94];
goto l47;
l17:x[jvj+30]=s[x[jvj+83]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+83];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+27; pile[WZ3]=jvj+31; 
(*f[80])( );if(v[102]) goto l18;     /*EVL1(jvj+30,jvj+27,T,jvj+31,V38)*/
T=pile[WZ2]; V38=pile[WZ4]; 
V43=T;
V218=V43;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+31; pile[WZ2]=V218; 
(*f[206])( );     /*PLUE1(jvj+32,jvj+31,V218)*/
l18:x[jvj+83]=t[x[jvj+83]];
l16:if((x[jvj+83]>0)) goto l17;
V44=x[jvj+32];
x[jvj+57]=23 ;z[jvj+57]=23;
RES=V44;
goto l50;
l20:pile[v[22]]=jvj+33; pile[WZ1]=V46; 
(*f[207])( );     /*PLUE2(jvj+33,V46)*/
V46++;
l19:if((V46<=V50)) goto l20;
V57=x[jvj+33];
x[jvj+57]=23 ;z[jvj+57]=23;
RES=V57;
goto l50;
l21:x[jvj+36]=vo[14];z[jvj+36]=vz[14];
pile[v[22]]=1380; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1380,jvj+36,RES)*/
RES=pile[WZ2]; 
x[jvj+57]=41 ;z[jvj+57]=41;
goto l50;
l22:pile[v[22]]=jvj+34; pile[WZ1]=jvj+1; 
(*f[200])( );if(v[102]) goto l25;     /*NDD0(jvj+34,jvj+1)*/
x[jvj+8]=incon;
pile[v[22]]=489; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(489,jvj+1,jvj+2)*/
if((x[jvj+2]<=0)) goto l1;
x[jvj+100]=s[x[jvj+2]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+2];
x[jvj+8]=x[jvj+100] ;z[jvj+8]=z[jvj+100];
l1:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+4)*/
goto l2;
l25:pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+34,jvj+39)*/
pile[v[22]]=140; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+39,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=1258; pile[WZ1]=jvj+27; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(1258,jvj+27,jvj+40)*/
if((x[jvj+40]==0)) goto l29;
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+34,jvj+41)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+41; pile[WZ3]=jvj+42; 
(*f[110])( );if(v[102]) goto l29;     /*EVL2(jvj+27,jvj+41,RR,jvj+42)*/
RR=pile[WZ2]; 
if((x[jvj+48]=w[x[jvj+42]][3])==incon) goto l29;
l26:if((x[jvj+40]<=0)) goto l29;
x[jvj+43]=s[x[jvj+40]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+40];
pile[v[22]]=436; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(436,jvj+43,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=484)) goto l27;
pile[v[22]]=111; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+44,jvj+46)*/
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+46,V171)*/
V171=pile[WZ2]; 
if((V156!=V171)) goto l27;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+44,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ3]=jvj+49; 
(*f[45])( );if(v[102]) goto l27;     /*FNDZ0(jvj+47,jvj+48,V221,jvj+49)*/
V221=pile[WZ2]; 
V161=V221;
V160=V161;
if((V160!=RR)) goto l27;
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+43,jvj+50)*/
x[jvj+51]=x[jvj+50] ;z[jvj+51]=z[jvj+50];
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+51,jvj+52)*/
x[jvj+57]=x[jvj+52] ;z[jvj+57]=z[jvj+52];
if((x[jvj+53]=w[x[jvj+57]][3])==incon) goto l27;
pile[v[22]]=jvj+53; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(jvj+53,jvj+51,V174)*/
V174=pile[WZ2]; 
RES=V174;
goto l47;
l27:x[jvj+40]=t[x[jvj+40]];
goto l26;
l29:if(x[jvj+35]!=435&&x[jvj+35]!=69&&x[jvj+35]!=73&&x[jvj+35]!=85&&x[jvj+35]!=86) goto l31;
pile[v[22]]=jvj+34; pile[WZ1]=jvj+27; pile[WZ2]=jvj+64; 
(*f[199])( );if(v[102]) goto l31;     /*EVLA0(jvj+34,jvj+27,jvj+64)*/
V62=x[jvj+64];
RES=V62;
goto l30;
l31:if((x[jvj+35]==22)) goto l32;
if((x[jvj+35]==531)) goto l33;
if((x[jvj+35]==453)) goto l35;
if((x[jvj+35]==979)) goto l37;
if((x[jvj+35]==1027)) goto l38;
if((x[jvj+35]==128)) goto l39;
if((x[jvj+35]!=61)) goto l40;
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+34,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+27; pile[WZ3]=jvj+85; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+84,jvj+27,V46,jvj+85,V48)*/
V46=pile[WZ2]; V48=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=jvj+34; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,jvj+34,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+27; pile[WZ3]=jvj+87; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+86,jvj+27,V50,jvj+87,V52)*/
V50=pile[WZ2]; V52=pile[WZ4]; 
x[jvj+33]=0 ;z[jvj+33]=0;
goto l19;
l32:pile[v[22]]=jvj+34; pile[WZ1]=jvj+27; pile[WZ2]=jvj+57; 
(*f[198])( );if(v[102]) goto l40;     /*EVLF0(jvj+34,jvj+27,jvj+57,RES)*/
RES=pile[WZ3]; 
goto l47;
l33:pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+34,jvj+65)*/
pile[v[22]]=140; pile[WZ1]=jvj+65; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+65,F)*/
F=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+34,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+27; pile[WZ3]=jvj+67; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+66,jvj+27,V88,jvj+67,V87)*/
V88=pile[WZ2]; V87=pile[WZ4]; 
pile[v[22]]=V88; pile[WZ1]=F; 
(*f[201])( );if(v[102]) goto l40;     /*FCOEFF0(V88,F,RES)*/
RES=pile[WZ2]; 
l34:x[jvj+57]=41 ;z[jvj+57]=41;
goto l50;
l35:pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+34,jvj+68)*/
pile[v[22]]=140; pile[WZ1]=jvj+68; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+68,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+34,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+27; pile[WZ3]=jvj+70; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+69,jvj+27,V98,jvj+70,V96)*/
V98=pile[WZ2]; V96=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=jvj+34; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,jvj+34,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+27; pile[WZ3]=jvj+72; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+71,jvj+27,V102,jvj+72,V100)*/
V102=pile[WZ2]; V100=pile[WZ4]; 
pile[v[22]]=V102; pile[WZ1]=V98; pile[WZ2]=V103; 
(*f[202])( );if(v[102]) goto l40;     /*FMATRICE0(V102,V98,V103,V104)*/
V104=pile[WZ3]; 
V110=V104;
RES=V110;
l36:x[jvj+57]=89 ;z[jvj+57]=89;
goto l50;
l37:pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+34,jvj+73)*/
pile[v[22]]=140; pile[WZ1]=jvj+73; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+73,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+34,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+27; pile[WZ3]=jvj+75; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+74,jvj+27,V114,jvj+75,V112)*/
V114=pile[WZ2]; V112=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=jvj+34; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,jvj+34,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+27; pile[WZ3]=jvj+77; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+76,jvj+27,V118,jvj+77,V116)*/
V118=pile[WZ2]; V116=pile[WZ4]; 
pile[v[22]]=V118; pile[WZ1]=V114; pile[WZ2]=V119; 
(*f[203])( );if(v[102]) goto l40;     /*FTAB0(V118,V114,V119,RES)*/
RES=pile[WZ3]; 
goto l34;
l38:pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+34,jvj+78)*/
pile[v[22]]=140; pile[WZ1]=jvj+78; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+78,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+34,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+27; pile[WZ3]=jvj+80; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+79,jvj+27,V129,jvj+80,V127)*/
V129=pile[WZ2]; V127=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=jvj+34; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,jvj+34,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+27; pile[WZ3]=jvj+82; 
(*f[80])( );if(v[102]) goto l40;     /*EVL1(jvj+81,jvj+27,V133,jvj+82,V131)*/
V133=pile[WZ2]; V131=pile[WZ4]; 
pile[v[22]]=V133; pile[WZ1]=V129; pile[WZ2]=V134; 
(*f[202])( );if(v[102]) goto l40;     /*FMATRICE0(V133,V129,V134,V135)*/
V135=pile[WZ3]; 
V141=V135;
RES=V141;
goto l36;
l39:pile[v[22]]=128; pile[WZ1]=jvj+34; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(128,jvj+34,jvj+83)*/
x[jvj+32]=0 ;z[jvj+32]=0;
goto l16;
l40:if(x[jvj+35]!=96&&x[jvj+35]!=89&&x[jvj+35]!=41&&x[jvj+35]!=20&&x[jvj+35]!=128&&x[jvj+35]!=570&&x[jvj+35]!=1317) goto l41;
if((x[jvj+88]=w[x[jvj+35]][3])==incon) goto l41;
pile[v[22]]=jvj+34; pile[WZ1]=jvj+88; pile[WZ3]=jvj+89; 
(*f[45])( );if(v[102]) goto l41;     /*FNDZ0(jvj+34,jvj+88,V214,jvj+89)*/
V214=pile[WZ2]; 
V23=V214;
V22=V23;
RES=V22;
x[jvj+57]=x[jvj+35] ;z[jvj+57]=z[jvj+35];
goto l47;
l41:if((x[jvj+35]!=1050)) goto l44;
pile[v[22]]=jvj+34; pile[WZ1]=jvj+13; 
(*f[204])( );     /*NDA0(jvj+34,jvj+13)*/
x[jvj+20]=incon;
pile[v[22]]=489; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(489,jvj+13,jvj+14)*/
if((x[jvj+14]<=0)) goto l8;
x[jvj+101]=s[x[jvj+14]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+14];
x[jvj+20]=x[jvj+101] ;z[jvj+20]=z[jvj+101];
l8:x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(258,jvj+15,jvj+16)*/
goto l9;
l44:V65=((-6042));
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(140,jvj+34,V67)*/
V67=pile[WZ2]; 
if((V65!=V67)) goto l45;
pile[v[22]]=372; pile[WZ1]=jvj+27; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(372,jvj+27,jvj+92)*/
pile[v[22]]=102; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+92,jvj+93)*/
V68=x[jvj+93];
RES=V68;
goto l30;
l45:pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+34,V)*/
V=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(128,jvj+27,jvj+28)*/
goto l14;
l46:pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(140,jvj+34,V142)*/
V142=pile[WZ2]; 
if(V142!=(-3629)&&V142!=(-4348)&&V142!=(-4349)&&V142!=(-6170)&&V142!=(-6470)&&V142!=(-10635)&&V142!=(-10974)) goto l51;
pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(258,21,jvj+11)*/
goto l6;
l49:x[jvj+103]=RES ;z[jvj+103]=(RES<=sepcte) ? RES : 0;
x[R]=x[jvj+103] ;z[R]=z[jvj+103];
goto l52;
}
