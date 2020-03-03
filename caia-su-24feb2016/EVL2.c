#include "dx.h"
void EVL2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V205=0,V10=0,V9=0,V27=0,V38=0,T=0,V43=0,V213=0,V46=0,V142=0,V214=0,V82=0,V81=0,V153=0,RR=0,V168=0,V216=0,V158=0,V157=0,V171=0,TZA=0,TT1=0,TZZ=0,TT2=0,V207=0,V18=0,V17=0,V209=0,V23=0,V22=0,V218=0,V193=0,V192=0,V44=0,V48=0,V50=0,V52=0,V57=0,V62=0,F=0,V85=0,V86=0,V101=0,V94=0,V96=0,V98=0,V100=0,V102=0,V108=0,V117=0,V110=0,V112=0,V114=0,V116=0,V132=0,V125=0,V127=0,V129=0,V131=0,V133=0,V139=0,V63=0,V65=0,V66=0,V140=0,V147=0,V145=0,V36=0,V211=0,V32=0,V31=0;
int X,Z;
int RES,TY;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=102;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Z=pile[v[22]+1]; TY=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(277,Z,jvj+1)*/
if((x[jvj+1]==480)) goto l1;
if((x[jvj+1]!=481)) goto l24;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+4)*/
if((x[jvj+4]!=0)) goto l24;
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=TY; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,Z,TY)*/
if((x[jvj+5]=w[x[TY]][3])==incon) goto l49;
pile[v[22]]=Z; pile[WZ1]=jvj+5; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l49;     /*FNDZ0(Z,jvj+5,V205,jvj+6)*/
V205=pile[WZ2]; 
V10=V205;
V9=V10;
RES=V9;
l50:v[0]=jvj; v[22]-=4; pile[v[22]+2]=RES; v[102]=0;return;
l1:pile[v[22]]=489; pile[WZ1]=Z; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(489,Z,jvj+2)*/
for(i=x[jvj+2],V2=0;i>0;i=t[i],V2++)  ;
if((V2==1)) goto l24;
V4=x[Z];
RES=V4;
l2:x[TY]=20 ;z[TY]=20;
goto l50;
l3:pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+7,jvj+8)*/
pile[v[22]]=1815; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1815,jvj+8,jvj+9)*/
if((x[jvj+9]==68)) goto l33;
l32:pile[v[22]]=jvj+7; pile[WZ1]=X; pile[WZ3]=jvj+60; 
(*f[80])( );if(v[102]) goto l33;     /*EVL1(jvj+7,X,TT1,jvj+60,TZA)*/
TT1=pile[WZ2]; TZA=pile[WZ4]; 
x[jvj+64]=TT1 ;z[jvj+64]=(TT1<=sepcte) ? TT1 : 0;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,Z,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=X; pile[WZ3]=jvj+62; 
(*f[80])( );if(v[102]) goto l33;     /*EVL1(jvj+61,X,TT2,jvj+62,TZZ)*/
TT2=pile[WZ2]; TZZ=pile[WZ4]; 
x[jvj+63]=TT2 ;z[jvj+63]=(TT2<=sepcte) ? TT2 : 0;
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ3]=jvj+65; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+63,jvj+64,V207,jvj+65)*/
V207=pile[WZ2]; 
V18=V207;
V17=V18;
if((x[jvj+102]=w[x[jvj+64]][1])==incon) goto l33;
RES=V17;
x[TY]=x[jvj+102] ;z[TY]=z[jvj+102];
goto l50;
l4:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(128,X,jvj+10)*/
l5:if((x[jvj+10]<=0)) goto l49;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+11,V27)*/
V27=pile[WZ2]; 
if((V27!=V140)) goto l6;
pile[v[22]]=416; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(416,jvj+11,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(158,jvj+11,jvj+97)*/
if((x[jvj+98]=w[x[jvj+97]][3])==incon) goto l49;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+98; pile[WZ3]=jvj+99; 
(*f[45])( );if(v[102]) goto l49;     /*FNDZ0(jvj+11,jvj+98,V211,jvj+99)*/
V211=pile[WZ2]; 
V32=V211;
V31=V32;
RES=V31;
x[TY]=x[jvj+97] ;z[TY]=z[jvj+97];
goto l50;
l6:x[jvj+10]=t[x[jvj+10]];
goto l5;
l8:x[jvj+12]=s[x[jvj+70]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+70];
pile[v[22]]=jvj+12; pile[WZ1]=X; pile[WZ3]=jvj+13; 
(*f[80])( );if(v[102]) goto l9;     /*EVL1(jvj+12,X,T,jvj+13,V38)*/
T=pile[WZ2]; V38=pile[WZ4]; 
V43=T;
V213=V43;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; pile[WZ2]=V213; 
(*f[206])( );     /*PLUE1(jvj+14,jvj+13,V213)*/
l9:x[jvj+70]=t[x[jvj+70]];
l7:if((x[jvj+70]>0)) goto l8;
V44=x[jvj+14];
x[TY]=23 ;z[TY]=23;
RES=V44;
goto l50;
l11:pile[v[22]]=jvj+15; pile[WZ1]=V46; 
(*f[207])( );     /*PLUE2(jvj+15,V46)*/
V46++;
l10:if((V46<=V50)) goto l11;
V57=x[jvj+15];
x[TY]=23 ;z[TY]=23;
RES=V57;
goto l50;
l14:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=274; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(274,jvj+20,jvj+21)*/
if((x[jvj+21]!=x[jvj+16])) goto l15;
pile[v[22]]=319; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(319,jvj+20,jvj+22)*/
x[jvj+23]=x[jvj+22] ;z[jvj+23]=z[jvj+22];
l27:if((x[jvj+23]==(-99999998))) goto l29;
x[jvj+25]=incon;
pile[v[22]]=158; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+23,jvj+24)*/
x[jvj+25]=x[jvj+24] ;z[jvj+25]=z[jvj+24];
l28:x[TY]=x[jvj+25] ;z[TY]=z[jvj+25];
if((x[jvj+40]=w[x[TY]][3])==incon) goto l49;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+40; pile[WZ3]=jvj+41; 
(*f[45])( );if(v[102]) goto l49;     /*FNDZ0(jvj+23,jvj+40,V214,jvj+41)*/
V214=pile[WZ2]; 
V82=V214;
V81=V82;
RES=V81;
goto l50;
l15:x[jvj+19]=t[x[jvj+19]];
l13:if((x[jvj+19]>0)) goto l14;
if(x[jvj+23]==incon) goto l29;
goto l27;
l16:pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+23,jvj+25)*/
goto l28;
l18:x[jvj+26]=t[x[jvj+26]];
l17:if((x[jvj+26]<=0)) goto l4;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+27,V142)*/
V142=pile[WZ2]; 
if((V142!=V140)) goto l18;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+27,V147)*/
V147=pile[WZ2]; 
x[jvj+96]=vo[V147];z[jvj+96]=vz[V147];
V145=x[jvj+96];
RES=V145;
goto l2;
l21:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=274; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(274,jvj+32,jvj+33)*/
if((x[jvj+33]!=x[jvj+28])) goto l22;
pile[v[22]]=319; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(319,jvj+32,jvj+34)*/
x[jvj+35]=x[jvj+34] ;z[jvj+35]=z[jvj+34];
l36:if((x[jvj+35]==(-99999998))) goto l39;
x[jvj+37]=incon;
pile[v[22]]=158; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(158,jvj+35,jvj+36)*/
x[jvj+37]=x[jvj+36] ;z[jvj+37]=z[jvj+36];
l37:x[TY]=x[jvj+37] ;z[TY]=z[jvj+37];
if((x[jvj+68]=w[x[TY]][3])==incon) goto l49;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+68; pile[WZ3]=jvj+69; 
(*f[45])( );if(v[102]) goto l49;     /*FNDZ0(jvj+35,jvj+68,V218,jvj+69)*/
V218=pile[WZ2]; 
V193=V218;
V192=V193;
RES=V192;
goto l50;
l22:x[jvj+31]=t[x[jvj+31]];
l20:if((x[jvj+31]>0)) goto l21;
if(x[jvj+35]==incon) goto l39;
goto l36;
l23:pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+35,jvj+37)*/
goto l37;
l24:pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,Z,jvj+38)*/
if((x[jvj+38]==484)) goto l25;
if((x[jvj+38]!=43)) goto l33;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,Z,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+57)*/
pile[v[22]]=1815; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1815,jvj+57,jvj+58)*/
if((x[jvj+58]!=68)) goto l3;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,Z,jvj+59)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+59; pile[WZ2]=X; pile[WZ3]=TY; 
(*f[205])( );if(v[102]) goto l3;     /*EVLT0(jvj+57,jvj+59,X,TY,RES)*/
RES=pile[WZ4]; 
goto l50;
l25:x[jvj+39]=vo[14];z[jvj+39]=vz[14];
pile[v[22]]=1380; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(1380,jvj+39,RES)*/
RES=pile[WZ2]; 
x[TY]=41 ;z[TY]=41;
goto l50;
l26:pile[v[22]]=Z; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l29;     /*NDD0(Z,jvj+16)*/
x[jvj+23]=incon;
pile[v[22]]=489; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(489,jvj+16,jvj+17)*/
if((x[jvj+17]<=0)) goto l12;
x[jvj+100]=s[x[jvj+17]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+17];
x[jvj+23]=x[jvj+100] ;z[jvj+23]=z[jvj+100];
l12:x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(258,jvj+18,jvj+19)*/
goto l13;
l29:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,Z,jvj+42)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+42,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=1258; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1258,X,jvj+43)*/
if((x[jvj+43]==0)) goto l33;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,Z,jvj+44)*/
pile[v[22]]=X; pile[WZ1]=jvj+44; pile[WZ3]=jvj+45; 
(*f[110])( );if(v[102]) goto l33;     /*EVL2(X,jvj+44,RR,jvj+45)*/
RR=pile[WZ2]; 
if((x[jvj+51]=w[x[jvj+45]][3])==incon) goto l33;
l30:if((x[jvj+43]<=0)) goto l33;
x[jvj+46]=s[x[jvj+43]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+43];
pile[v[22]]=436; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(436,jvj+46,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+47,jvj+48)*/
if((x[jvj+48]!=484)) goto l31;
pile[v[22]]=111; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+47,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+49,V168)*/
V168=pile[WZ2]; 
if((V153!=V168)) goto l31;
pile[v[22]]=102; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+47,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ3]=jvj+52; 
(*f[45])( );if(v[102]) goto l31;     /*FNDZ0(jvj+50,jvj+51,V216,jvj+52)*/
V216=pile[WZ2]; 
V158=V216;
V157=V158;
if((V157!=RR)) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+46,jvj+53)*/
x[jvj+54]=x[jvj+53] ;z[jvj+54]=z[jvj+53];
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+54,jvj+55)*/
x[TY]=x[jvj+55] ;z[TY]=z[jvj+55];
if((x[jvj+56]=w[x[TY]][3])==incon) goto l31;
pile[v[22]]=jvj+56; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(jvj+56,jvj+54,V171)*/
V171=pile[WZ2]; 
RES=V171;
goto l50;
l31:x[jvj+43]=t[x[jvj+43]];
goto l30;
l33:if(x[jvj+38]!=96&&x[jvj+38]!=89&&x[jvj+38]!=41&&x[jvj+38]!=20&&x[jvj+38]!=128&&x[jvj+38]!=570&&x[jvj+38]!=1317) goto l34;
if((x[jvj+66]=w[x[jvj+38]][3])==incon) goto l34;
pile[v[22]]=Z; pile[WZ1]=jvj+66; pile[WZ3]=jvj+67; 
(*f[45])( );if(v[102]) goto l34;     /*FNDZ0(Z,jvj+66,V209,jvj+67)*/
V209=pile[WZ2]; 
V23=V209;
V22=V23;
RES=V22;
x[TY]=x[jvj+38] ;z[TY]=z[jvj+38];
goto l50;
l34:if((x[jvj+38]==1050)) goto l35;
if((x[jvj+38]==128)) goto l38;
if((x[jvj+38]!=61)) goto l39;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,Z,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=X; pile[WZ3]=jvj+72; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+71,X,V46,jvj+72,V48)*/
V46=pile[WZ2]; V48=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,Z,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=X; pile[WZ3]=jvj+74; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+73,X,V50,jvj+74,V52)*/
V50=pile[WZ2]; V52=pile[WZ4]; 
x[jvj+15]=0 ;z[jvj+15]=0;
goto l10;
l35:pile[v[22]]=Z; pile[WZ1]=jvj+28; 
(*f[204])( );     /*NDA0(Z,jvj+28)*/
x[jvj+35]=incon;
pile[v[22]]=489; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(489,jvj+28,jvj+29)*/
if((x[jvj+29]<=0)) goto l19;
x[jvj+101]=s[x[jvj+29]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+29];
x[jvj+35]=x[jvj+101] ;z[jvj+35]=z[jvj+101];
l19:x[jvj+30]=vo[14];z[jvj+30]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(258,jvj+30,jvj+31)*/
goto l20;
l38:pile[v[22]]=128; pile[WZ1]=Z; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(128,Z,jvj+70)*/
x[jvj+14]=0 ;z[jvj+14]=0;
goto l7;
l39:if(x[jvj+38]!=435&&x[jvj+38]!=69&&x[jvj+38]!=73&&x[jvj+38]!=85&&x[jvj+38]!=86) goto l40;
pile[v[22]]=Z; pile[WZ1]=X; pile[WZ2]=jvj+75; 
(*f[199])( );if(v[102]) goto l40;     /*EVLA0(Z,X,jvj+75)*/
V62=x[jvj+75];
RES=V62;
goto l2;
l40:if((x[jvj+38]==22)) goto l41;
if((x[jvj+38]==531)) goto l42;
if((x[jvj+38]==453)) goto l44;
if((x[jvj+38]==979)) goto l46;
if((x[jvj+38]!=1027)) goto l47;
pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,Z,jvj+89)*/
pile[v[22]]=140; pile[WZ1]=jvj+89; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+89,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,Z,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=X; pile[WZ3]=jvj+91; 
(*f[80])( );if(v[102]) goto l47;     /*EVL1(jvj+90,X,V127,jvj+91,V125)*/
V127=pile[WZ2]; V125=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,Z,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=X; pile[WZ3]=jvj+93; 
(*f[80])( );if(v[102]) goto l47;     /*EVL1(jvj+92,X,V131,jvj+93,V129)*/
V131=pile[WZ2]; V129=pile[WZ4]; 
pile[v[22]]=V131; pile[WZ1]=V127; pile[WZ2]=V132; 
(*f[202])( );if(v[102]) goto l47;     /*FMATRICE0(V131,V127,V132,V133)*/
V133=pile[WZ3]; 
V139=V133;
RES=V139;
l45:x[TY]=89 ;z[TY]=89;
goto l50;
l41:pile[v[22]]=Z; pile[WZ1]=X; pile[WZ2]=TY; 
(*f[198])( );if(v[102]) goto l47;     /*EVLF0(Z,X,TY,RES)*/
RES=pile[WZ3]; 
goto l50;
l42:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,Z,jvj+76)*/
pile[v[22]]=140; pile[WZ1]=jvj+76; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+76,F)*/
F=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,Z,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=X; pile[WZ3]=jvj+78; 
(*f[80])( );if(v[102]) goto l47;     /*EVL1(jvj+77,X,V86,jvj+78,V85)*/
V86=pile[WZ2]; V85=pile[WZ4]; 
pile[v[22]]=V86; pile[WZ1]=F; 
(*f[201])( );if(v[102]) goto l47;     /*FCOEFF0(V86,F,RES)*/
RES=pile[WZ2]; 
l43:x[TY]=41 ;z[TY]=41;
goto l50;
l44:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,Z,jvj+79)*/
pile[v[22]]=140; pile[WZ1]=jvj+79; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+79,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,Z,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=X; pile[WZ3]=jvj+81; 
(*f[80])( );if(v[102]) goto l47;     /*EVL1(jvj+80,X,V96,jvj+81,V94)*/
V96=pile[WZ2]; V94=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,Z,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=X; pile[WZ3]=jvj+83; 
(*f[80])( );if(v[102]) goto l47;     /*EVL1(jvj+82,X,V100,jvj+83,V98)*/
V100=pile[WZ2]; V98=pile[WZ4]; 
pile[v[22]]=V100; pile[WZ1]=V96; pile[WZ2]=V101; 
(*f[202])( );if(v[102]) goto l47;     /*FMATRICE0(V100,V96,V101,V102)*/
V102=pile[WZ3]; 
V108=V102;
RES=V108;
goto l45;
l46:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,Z,jvj+84)*/
pile[v[22]]=140; pile[WZ1]=jvj+84; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+84,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,Z,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=X; pile[WZ3]=jvj+86; 
(*f[80])( );if(v[102]) goto l47;     /*EVL1(jvj+85,X,V112,jvj+86,V110)*/
V112=pile[WZ2]; V110=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,Z,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=X; pile[WZ3]=jvj+88; 
(*f[80])( );if(v[102]) goto l47;     /*EVL1(jvj+87,X,V116,jvj+88,V114)*/
V116=pile[WZ2]; V114=pile[WZ4]; 
pile[v[22]]=V116; pile[WZ1]=V112; pile[WZ2]=V117; 
(*f[203])( );if(v[102]) goto l47;     /*FTAB0(V116,V112,V117,RES)*/
RES=pile[WZ3]; 
goto l43;
l47:V63=((-6042));
pile[v[22]]=140; pile[WZ1]=Z; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,Z,V65)*/
V65=pile[WZ2]; 
if((V63!=V65)) goto l48;
pile[v[22]]=372; pile[WZ1]=X; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(372,X,jvj+94)*/
pile[v[22]]=102; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+94,jvj+95)*/
V66=x[jvj+95];
RES=V66;
goto l2;
l48:pile[v[22]]=140; pile[WZ1]=Z; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(140,Z,V140)*/
V140=pile[WZ2]; 
if(V140!=(-3629)&&V140!=(-4348)&&V140!=(-4349)&&V140!=(-6170)&&V140!=(-6470)&&V140!=(-10635)&&V140!=(-10974)) goto l4;
pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(258,21,jvj+26)*/
goto l17;
l49:RES=x[TY]=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
}
