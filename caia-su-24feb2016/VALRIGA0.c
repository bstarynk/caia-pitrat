#include "dx.h"
void VALRIGA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V12=0,V13=0,V11=0,V3=0,V8=0,N=0,D=0,V24=0,V52=0,V33=0,V38=0,V39=0,V37=0,V44=0,V40=0,V30=0,V200=0,V217=0,V247=0,V248=0,V314=0,V313=0,V316=0,V263=0,V211=0,V209=0,V210=0,V206=0,V284=0,V282=0,V291=0,V301=0,V287=0,V341=0,V343=0,V331=0,V339=0,V335=0,V336=0,V337=0,V286=0,V327=0,V329=0,V317=0,V325=0,V321=0,V322=0,V323=0,V276=0,V277=0,V278=0,V279=0,V268=0,V269=0,V270=0,V271=0,V315=0,V261=0,V260=0,V262=0,V254=0,V253=0,V255=0,V241=0,V233=0,V245=0,V243=0,V194=0,V195=0,V237=0,V238=0,V239=0;
int EE;
int RS;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=115;
if(v[0]>99700) (*f[6])( );

EE=pile[v[22]]; RS=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RS]=x[jvj+13]=incon;
if((x[EE]!=0)) goto l16;
pile[v[22]]=1557; pile[WZ1]=1219; pile[WZ2]=RS; 
(*f[54])( );     /*TRI1(1557,1219,RS)*/
l16:x[jvj+101]=x[EE] ;z[jvj+101]=z[EE];
if((x[jvj+101]>0)) goto l17;
l11:if(x[RS]==incon) goto l12;
l15:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+98]=t[x[jvj+98]];
l1:if((x[jvj+98]<=0)) goto l3;
x[jvj+3]=s[x[jvj+98]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+98];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10!=N)) goto l2;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+3,V13)*/
V13=pile[WZ2]; 
V11=V12-V13;
V3=V11;
l7:D=V3;
if((D<=0)) goto l6;
pile[v[22]]=510; pile[WZ1]=N; pile[WZ2]=515; pile[WZ3]=D; pile[WZ4]=jvj+8; 
(*f[391])( );     /*QUADRI10(510,N,515,D,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,jvj+9)*/
l6:x[jvj+99]=t[x[jvj+99]];
l4:if((x[jvj+99]>0)) goto l5;
pile[v[22]]=jvj+10; pile[WZ1]=1219; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+10,1219,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+9; pile[WZ2]=763; pile[WZ3]=jvj+12; 
(*f[301])( );     /*TRI11(jvj+15,jvj+9,763,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
l10:x[jvj+100]=t[x[jvj+100]];
l8:if((x[jvj+100]>0)) goto l9;
x[jvj+115]=x[jvj+11] ;z[jvj+115]=z[jvj+11];
x[jvj+106]=0 ;z[jvj+106]=0;
x[jvj+30]=x[jvj+106] ;z[jvj+30]=z[jvj+106];
x[jvj+96]=x[jvj+106] ;z[jvj+96]=z[jvj+106];
x[jvj+113]=x[jvj+115] ;z[jvj+113]=z[jvj+115];
l33:if((x[jvj+113]>0)) goto l84;
pile[v[22]]=jvj+30; pile[WZ2]=jvj+31; 
(*f[2038])( );if(v[102]) goto l51;     /*CMLPOS0(jvj+30,V200,jvj+31)*/
V200=pile[WZ1]; 
if((x[jvj+96]==0)) goto l50;
if((x[jvj+31]!=135)) goto l51;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V200; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,V200,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1677])( );     /*VALRIG0(jvj+32,jvj+33)*/
x[jvj+34]=0 ;z[jvj+34]=0;
pile[v[22]]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+33)*/
x[jvj+112]=x[jvj+96] ;z[jvj+112]=z[jvj+96];
l34:if((x[jvj+112]>0)) goto l83;
pile[v[22]]=485; pile[WZ1]=1219; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(485,1219,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+34; pile[WZ2]=159; pile[WZ3]=jvj+36; 
(*f[301])( );     /*TRI11(jvj+35,jvj+34,159,jvj+36)*/
if((x[jvj+2]==0)) goto l35;
pile[v[22]]=jvj+36; pile[WZ1]=763; pile[WZ2]=jvj+2; 
(*f[34])( );     /*CHGC0(jvj+36,763,jvj+2)*/
l35:pile[v[22]]=159; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(159,jvj+36,jvj+37)*/
for(i=x[jvj+37],V217=0;i>0;i=t[i],V217++)  ;
if((V217!=2)) goto l43;
x[jvj+107]=x[jvj+37] ;z[jvj+107]=z[jvj+37];
l36:if((x[jvj+107]<=0)) goto l43;
x[jvj+38]=s[x[jvj+107]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+107];
pile[v[22]]=1219; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(1219,jvj+38,jvj+39)*/
if((x[jvj+39]==36)) goto l38;
l37:x[jvj+107]=t[x[jvj+107]];
goto l36;
l3:V3=V12;
goto l7;
l5:x[jvj+4]=s[x[jvj+99]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+99];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+4,V8)*/
V8=pile[WZ2]; 
N=V8;
V3=incon;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+4,V12)*/
V12=pile[WZ2]; 
x[jvj+98]=x[jvj+2] ;z[jvj+98]=z[jvj+2];
goto l1;
l9:x[jvj+5]=s[x[jvj+100]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+100];
pile[v[22]]=1219; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1219,jvj+5,jvj+10)*/
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=763; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(763,jvj+5,jvj+6)*/
x[jvj+7]=d[64];z[jvj+7]=0;
x[jvj+99]=x[jvj+6] ;z[jvj+99]=z[jvj+6];
goto l4;
l12:if(x[jvj+13]!=incon) goto l13;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l13:pile[v[22]]=1219; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1219,jvj+13,jvj+14)*/
if((x[jvj+14]!=485)) goto l14;
pile[v[22]]=178; pile[WZ1]=1219; pile[WZ2]=RS; 
(*f[54])( );     /*TRI1(178,1219,RS)*/
goto l15;
l14:x[RS]=x[jvj+13] ;z[RS]=z[jvj+13];
goto l15;
l17:x[jvj+16]=s[x[jvj+101]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+101];
x[jvj+29]=0 ;z[jvj+29]=0;
pile[v[22]]=763; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(763,jvj+16,jvj+17)*/
l18:if((x[jvj+17]>0)) goto l31;
V24=x[jvj+29];
x[jvj+20]=0 ;z[jvj+20]=0;
x[jvj+18]=d[64];z[jvj+18]=0;
V52=V24;
l19:if((V52>0)) goto l20;
pile[v[22]]=36; pile[WZ1]=1219; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(36,1219,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=763; pile[WZ3]=jvj+1; 
(*f[301])( );     /*TRI11(jvj+19,jvj+20,763,jvj+1)*/
pile[v[22]]=763; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,jvj+1,jvj+2)*/
if((x[EE]==0)) goto l11;
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+100]=x[EE] ;z[jvj+100]=z[EE];
goto l8;
l20:V33=s[V52];
x[jvj+103]=x[EE] ;z[jvj+103]=z[EE];
l21:if((x[jvj+103]>0)) goto l26;
V38=999999;
x[jvj+104]=x[EE] ;z[jvj+104]=z[EE];
l22:if((x[jvj+104]>0)) goto l27;
V39=V38;
if((V39<=0)) goto l23;
if((V38==999999)) goto l23;
pile[v[22]]=510; pile[WZ1]=V33; pile[WZ2]=515; pile[WZ3]=V39; pile[WZ4]=jvj+21; 
(*f[391])( );     /*QUADRI10(510,V33,515,V39,jvj+21)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+21; pile[WZ2]=jvj+20; 
(*f[196])( );     /*PLUF0(jvj+18,jvj+21,jvj+20)*/
l23:V52=t[V52];
goto l19;
l25:x[jvj+102]=t[x[jvj+102]];
l24:if((x[jvj+102]<=0)) goto l23;
x[jvj+22]=s[x[jvj+102]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+102];
pile[v[22]]=510; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(510,jvj+22,V37)*/
V37=pile[WZ2]; 
if((V37!=V33)) goto l25;
x[jvj+103]=t[x[jvj+103]];
goto l21;
l26:x[jvj+23]=s[x[jvj+103]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+103];
pile[v[22]]=763; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(763,jvj+23,jvj+24)*/
x[jvj+102]=x[jvj+24] ;z[jvj+102]=z[jvj+24];
goto l24;
l27:x[jvj+25]=s[x[jvj+104]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+104];
pile[v[22]]=763; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(763,jvj+25,jvj+26)*/
x[jvj+105]=x[jvj+26] ;z[jvj+105]=z[jvj+26];
l28:if((x[jvj+105]>0)) goto l29;
x[jvj+104]=t[x[jvj+104]];
goto l22;
l29:x[jvj+27]=s[x[jvj+105]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+105];
pile[v[22]]=510; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(510,jvj+27,V44)*/
V44=pile[WZ2]; 
if((V44!=V33)) goto l30;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(515,jvj+27,V40)*/
V40=pile[WZ2]; 
if(V40<V38) V38=V40;
l30:x[jvj+105]=t[x[jvj+105]];
goto l28;
l31:x[jvj+28]=s[x[jvj+17]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+17];
pile[v[22]]=510; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,jvj+28,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=V30; 
(*f[207])( );     /*PLUE2(jvj+29,V30)*/
l32:x[jvj+17]=t[x[jvj+17]];
goto l18;
l48:pile[v[22]]=510; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(510,jvj+44,V206)*/
V206=pile[WZ2]; 
pile[v[22]]=V206; pile[WZ1]=510; pile[WZ2]=jvj+48; 
(*f[46])( );     /*TRI0(V206,510,jvj+48)*/
l46:x[jvj+47]=x[jvj+48] ;z[jvj+47]=z[jvj+48];
pile[v[22]]=jvj+13; pile[WZ1]=763; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+13,763,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=515; pile[WZ2]=V211; 
(*f[186])( );     /*BTC0(jvj+47,515,V211)*/
l47:x[jvj+108]=t[x[jvj+108]];
l44:if((x[jvj+108]<=0)) goto l11;
x[jvj+44]=s[x[jvj+108]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+108];
pile[v[22]]=515; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(515,jvj+44,V211)*/
V211=pile[WZ2]; 
x[jvj+48]=incon;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(510,jvj+44,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=jvj+13; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(763,jvj+13,jvj+45)*/
x[jvj+109]=x[jvj+45] ;z[jvj+109]=z[jvj+45];
l45:if((x[jvj+109]<=0)) goto l48;
x[jvj+46]=s[x[jvj+109]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+109];
pile[v[22]]=510; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(510,jvj+46,V210)*/
V210=pile[WZ2]; 
if((V210!=V209)) goto l49;
x[jvj+48]=x[jvj+46] ;z[jvj+48]=z[jvj+46];
goto l46;
l49:x[jvj+109]=t[x[jvj+109]];
goto l45;
l50:if((x[jvj+31]!=135)) goto l51;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V200; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V200,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+13; 
(*f[1677])( );     /*VALRIG0(jvj+49,jvj+13)*/
x[jvj+108]=x[jvj+2] ;z[jvj+108]=z[jvj+2];
goto l44;
l51:v[0]=jvj; v[22]-=2; v[102]=1;return;
l53:V291=s[V301];
pile[v[22]]=510; pile[WZ1]=V291; pile[WZ2]=515; pile[WZ3]=1; pile[WZ4]=jvj+59; 
(*f[391])( );     /*QUADRI10(510,V291,515,1,jvj+59)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+59; pile[WZ2]=jvj+56; 
(*f[196])( );     /*PLUF0(jvj+60,jvj+59,jvj+56)*/
V301=t[V301];
l52:if((V301>0)) goto l53;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V282; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,V282,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+52; 
(*f[1677])( );     /*VALRIG0(jvj+58,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V284; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,V284,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+51; 
(*f[1677])( );     /*VALRIG0(jvj+57,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+54)*/
pile[v[22]]=36; pile[WZ1]=1219; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(36,1219,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=763; pile[WZ3]=jvj+53; 
(*f[301])( );     /*TRI11(jvj+55,jvj+56,763,jvj+53)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+53)*/
pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+52)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+51)*/
pile[WZ1]=jvj+13; 
(*f[1677])( );     /*VALRIG0(jvj+50,jvj+13)*/
goto l11;
l55:V341=V331;
l54:V287=V341;
V282=V286+V287;
V284=V286-V287;
x[jvj+56]=0 ;z[jvj+56]=0;
x[jvj+60]=d[64];z[jvj+60]=0;
V301=V247;
goto l52;
l57:V331=1;
l56:if((v[45]!=0)) goto l43;
V341=incon;
pile[v[22]]=1219; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(1219,jvj+61,jvj+62)*/
if((x[jvj+62]!=52)) goto l55;
V343=(-V331);
V341=V343;
goto l54;
l59:x[jvj+64]=s[x[jvj+110]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+110];
pile[v[22]]=515; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(515,jvj+64,V335)*/
V335=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(510,jvj+64,V336)*/
V336=pile[WZ2]; 
pile[v[22]]=V335; pile[WZ1]=V336; 
(*f[1006])( );if(v[102]) goto l60;     /*POWER0(V335,V336,V337)*/
V337=pile[WZ2]; 
pile[v[22]]=jvj+63; pile[WZ1]=117; pile[WZ2]=V337; 
(*f[818])( );     /*MTC0(jvj+63,117,V337)*/
l60:x[jvj+110]=t[x[jvj+110]];
l58:if((x[jvj+110]>0)) goto l59;
pile[v[22]]=117; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+63,V339)*/
V339=pile[WZ2]; 
V331=V339;
goto l56;
l62:V327=V317;
l61:V286=V327;
v[45]=0;
pile[v[22]]=763; pile[WZ1]=jvj+61; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(763,jvj+61,jvj+65)*/
if((x[jvj+65]==0)) goto l57;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+63; 
(*f[46])( );     /*TRI0(1,117,jvj+63)*/
x[jvj+110]=x[jvj+65] ;z[jvj+110]=z[jvj+65];
goto l58;
l64:V317=1;
l63:if((v[45]!=0)) goto l43;
V327=incon;
pile[v[22]]=1219; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(1219,jvj+66,jvj+67)*/
if((x[jvj+67]!=52)) goto l62;
V329=(-V317);
V327=V329;
goto l61;
l66:x[jvj+69]=s[x[jvj+111]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+111];
pile[v[22]]=515; pile[WZ1]=jvj+69; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(515,jvj+69,V321)*/
V321=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(510,jvj+69,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=V321; pile[WZ1]=V322; 
(*f[1006])( );if(v[102]) goto l67;     /*POWER0(V321,V322,V323)*/
V323=pile[WZ2]; 
pile[v[22]]=jvj+68; pile[WZ1]=117; pile[WZ2]=V323; 
(*f[818])( );     /*MTC0(jvj+68,117,V323)*/
l67:x[jvj+111]=t[x[jvj+111]];
l65:if((x[jvj+111]>0)) goto l66;
pile[v[22]]=117; pile[WZ1]=jvj+68; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(117,jvj+68,V325)*/
V325=pile[WZ2]; 
V317=V325;
goto l63;
l69:x[jvj+75]=s[x[jvj+78]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+78];
pile[v[22]]=515; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(515,jvj+75,V276)*/
V276=pile[WZ2]; 
V277=V276;
if((V277<=1)) goto l70;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(510,jvj+75,V278)*/
V278=pile[WZ2]; 
V279=V277/2;
pile[WZ1]=V278; pile[WZ2]=515; pile[WZ3]=V279; pile[WZ4]=jvj+76; 
(*f[391])( );     /*QUADRI10(510,V278,515,V279,jvj+76)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+76; pile[WZ2]=jvj+72; 
(*f[196])( );     /*PLUF0(jvj+77,jvj+76,jvj+72)*/
l70:x[jvj+78]=t[x[jvj+78]];
l68:if((x[jvj+78]>0)) goto l69;
pile[v[22]]=36; pile[WZ1]=1219; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(36,1219,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; pile[WZ2]=763; pile[WZ3]=jvj+66; 
(*f[301])( );     /*TRI11(jvj+73,jvj+74,763,jvj+66)*/
pile[v[22]]=36; pile[WZ1]=1219; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(36,1219,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; pile[WZ2]=763; pile[WZ3]=jvj+61; 
(*f[301])( );     /*TRI11(jvj+71,jvj+72,763,jvj+61)*/
v[45]=0;
pile[v[22]]=763; pile[WZ1]=jvj+66; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(763,jvj+66,jvj+70)*/
if((x[jvj+70]==0)) goto l64;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+68; 
(*f[46])( );     /*TRI0(1,117,jvj+68)*/
x[jvj+111]=x[jvj+70] ;z[jvj+111]=z[jvj+70];
goto l65;
l72:x[jvj+79]=s[x[jvj+82]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+82];
pile[v[22]]=515; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(515,jvj+79,V268)*/
V268=pile[WZ2]; 
V269=V268;
if((V269<=1)) goto l73;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(510,jvj+79,V270)*/
V270=pile[WZ2]; 
V271=V269/2;
pile[WZ1]=V270; pile[WZ2]=515; pile[WZ3]=V271; pile[WZ4]=jvj+80; 
(*f[391])( );     /*QUADRI10(510,V270,515,V271,jvj+80)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+80; pile[WZ2]=jvj+74; 
(*f[196])( );     /*PLUF0(jvj+81,jvj+80,jvj+74)*/
l73:x[jvj+82]=t[x[jvj+82]];
l71:if((x[jvj+82]>0)) goto l72;
x[jvj+72]=0 ;z[jvj+72]=0;
pile[v[22]]=763; pile[WZ1]=jvj+40; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(763,jvj+40,jvj+78)*/
x[jvj+77]=d[64];z[jvj+77]=0;
goto l68;
l74:x[jvj+74]=0 ;z[jvj+74]=0;
pile[v[22]]=763; pile[WZ1]=jvj+38; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(763,jvj+38,jvj+82)*/
x[jvj+81]=d[64];z[jvj+81]=0;
goto l71;
l76:V316=t[V316];
l41:if((V316>0)) goto l77;
V263=135;
l42:if((V263==135)) goto l74;
l43:x[jvj+13]=x[jvj+36] ;z[jvj+13]=z[jvj+36];
goto l11;
l77:V315=s[V316];
for(a=V248;a>0;a=t[a]) if(s[a]==V315) goto l76;
l75:V263=134;
goto l42;
l78:x[jvj+83]=s[x[jvj+43]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+43];
pile[v[22]]=515; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(515,jvj+83,V261)*/
V261=pile[WZ2]; 
V260=V261%2;
if((V260==0)) goto l79;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(510,jvj+83,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=jvj+84; pile[WZ1]=V262; 
(*f[207])( );     /*PLUE2(jvj+84,V262)*/
l79:x[jvj+43]=t[x[jvj+43]];
l40:if((x[jvj+43]>0)) goto l78;
V248=x[jvj+84];
for(i=V247,V314=0;i>0;i=t[i],V314++)  ;
for(i=V248,V313=0;i>0;i=t[i],V313++)  ;
if((V314!=V313)) goto l75;
V316=V247;
goto l41;
l80:x[jvj+85]=s[x[jvj+42]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+42];
pile[v[22]]=515; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(515,jvj+85,V254)*/
V254=pile[WZ2]; 
V253=V254%2;
if((V253==0)) goto l81;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(510,jvj+85,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=jvj+86; pile[WZ1]=V255; 
(*f[207])( );     /*PLUE2(jvj+86,V255)*/
l81:x[jvj+42]=t[x[jvj+42]];
l39:if((x[jvj+42]>0)) goto l80;
V247=x[jvj+86];
x[jvj+84]=0 ;z[jvj+84]=0;
pile[v[22]]=763; pile[WZ1]=jvj+40; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(763,jvj+40,jvj+43)*/
goto l40;
l82:x[jvj+37]=t[x[jvj+37]];
l38:if((x[jvj+37]<=0)) goto l43;
x[jvj+40]=s[x[jvj+37]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+37];
pile[v[22]]=1219; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(1219,jvj+40,jvj+41)*/
if((x[jvj+41]!=52)) goto l82;
x[jvj+86]=0 ;z[jvj+86]=0;
pile[v[22]]=763; pile[WZ1]=jvj+38; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(763,jvj+38,jvj+42)*/
goto l39;
l83:x[jvj+87]=s[x[jvj+112]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+112];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+87; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+87)*/
x[jvj+112]=t[x[jvj+112]];
goto l34;
l84:x[jvj+88]=s[x[jvj+113]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+113];
x[jvj+92]=incon;
v[45]=0;
pile[v[22]]=763; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(763,jvj+88,jvj+89)*/
if((x[jvj+89]==0)) goto l93;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+90; 
(*f[46])( );     /*TRI0(1,117,jvj+90)*/
x[jvj+114]=x[jvj+89] ;z[jvj+114]=z[jvj+89];
l85:if((x[jvj+114]>0)) goto l94;
pile[v[22]]=117; pile[WZ1]=jvj+90; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(117,jvj+90,V241)*/
V241=pile[WZ2]; 
V233=V241;
l86:if((v[45]!=0)) goto l91;
V243=incon;
pile[v[22]]=1219; pile[WZ1]=jvj+88; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(1219,jvj+88,jvj+91)*/
if((x[jvj+91]!=52)) goto l92;
V245=(-V233);
V243=V245;
l87:V194=V243;
V195=V194;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V195; pile[WZ4]=jvj+92; 
(*f[192])( );     /*QUADRI4(100,41,130,V195,jvj+92)*/
l88:x[jvj+93]=x[jvj+92] ;z[jvj+93]=z[jvj+92];
pile[v[22]]=100; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(100,jvj+93,jvj+94)*/
if((x[jvj+94]!=41)) goto l89;
pile[v[22]]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+30,jvj+93)*/
l89:pile[v[22]]=1219; pile[WZ1]=jvj+93; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l90;     /*FNDO0(1219,jvj+93,jvj+95)*/
pile[v[22]]=jvj+96; 
(*f[68])( );     /*PLUE0(jvj+96,jvj+93)*/
l90:x[jvj+113]=t[x[jvj+113]];
goto l33;
l91:x[jvj+92]=x[jvj+88] ;z[jvj+92]=z[jvj+88];
goto l88;
l92:V243=V233;
goto l87;
l93:V233=1;
goto l86;
l94:x[jvj+97]=s[x[jvj+114]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+114];
pile[v[22]]=515; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(515,jvj+97,V237)*/
V237=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(510,jvj+97,V238)*/
V238=pile[WZ2]; 
pile[v[22]]=V237; pile[WZ1]=V238; 
(*f[1006])( );if(v[102]) goto l95;     /*POWER0(V237,V238,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=jvj+90; pile[WZ1]=117; pile[WZ2]=V239; 
(*f[818])( );     /*MTC0(jvj+90,117,V239)*/
l95:x[jvj+114]=t[x[jvj+114]];
goto l85;
}
