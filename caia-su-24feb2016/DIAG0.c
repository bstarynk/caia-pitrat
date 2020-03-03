#include "dx.h"
void DIAG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V70=0,V108=0,V101=0,V16=0,V=0,V22=0,V32=0,V25=0,V38=0,V122=0,V113=0,V79=0,V41=0,V126=0,V141=0,V135=0;
int BL,X,BT,N;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=79;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; X=pile[v[22]+1]; BT=pile[v[22]+2]; N=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[BT]==184)) goto l6;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,X,jvj+14)*/
if((x[jvj+14]!=42)) goto l6;
pile[v[22]]=10175; pile[WZ1]=BL; pile[WZ2]=X; pile[WZ3]=(-4390); pile[WZ4]=BT; 
(*f[733])( );     /*FAUTE2(10175,BL,X,(-4390),BT)*/
l6:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,X,jvj+15)*/
if(x[jvj+15]==508||x[jvj+15]==854||x[jvj+15]==746||x[jvj+15]==1651||x[jvj+15]==1732) goto l7;
V108=x[X];
pile[v[22]]=BL; pile[WZ1]=V108; pile[WZ3]=X; 
(*f[1063])( );     /*DIAH0(BL,V108,jvj+15,X)*/
l7:if(x[jvj+15]==20||x[jvj+15]==89||x[jvj+15]==96||x[jvj+15]==41||x[jvj+15]==23||x[jvj+15]==21||x[jvj+15]==508||x[jvj+15]==854||x[jvj+15]==1317||x[jvj+15]==1651||x[jvj+15]==1732) goto l8;
V101=x[X];
x[jvj+16]=w[x[jvj+15]][9];
x[jvj+17]=w[x[jvj+15]][8];
pile[v[22]]=V101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; pile[WZ3]=jvj+18; 
(*f[1062])( );if(v[102]) goto l8;     /*ATR0(V101,jvj+16,jvj+17,jvj+18)*/
pile[v[22]]=10175; pile[WZ1]=X; pile[WZ2]=(-4661); 
(*f[1061])( );     /*FAUTE4(10175,X,(-4661),jvj+18)*/
l8:if((x[jvj+15]==43)) goto l9;
if((x[jvj+15]==39)) goto l11;
if((x[jvj+15]==73)) goto l25;
if((x[jvj+15]==128)) goto l27;
if((x[jvj+15]==69)) goto l1;
if((x[jvj+15]!=47)) goto l40;
pile[v[22]]=184; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(184,X,jvj+46)*/
l37:if((x[jvj+46]<=0)) goto l40;
x[jvj+3]=s[x[jvj+46]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+46];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+3,jvj+47)*/
if((x[jvj+47]==42)) goto l38;
if((x[jvj+47]!=22)) goto l39;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+4,jvj+5)*/
F=x[jvj+5];
if(F!=653&&F!=649&&F!=651) goto l38;
l39:pile[v[22]]=10175; pile[WZ1]=BL; pile[WZ2]=jvj+3; pile[WZ3]=(-740); pile[WZ4]=X; 
(*f[733])( );     /*FAUTE2(10175,BL,jvj+3,(-740),X)*/
l38:x[jvj+46]=t[x[jvj+46]];
goto l37;
l1:if((x[BT]!=102)) goto l32;
pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,N,jvj+6)*/
if((x[jvj+6]==854)) goto l40;
l32:pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(108,X,jvj+38)*/
x[jvj+75]=x[jvj+38] ;z[jvj+75]=z[jvj+38];
l33:if((x[jvj+75]<=0)) goto l40;
x[jvj+39]=s[x[jvj+75]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+75];
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+40,jvj+41)*/
x[jvj+45]=x[jvj+41] ;z[jvj+45]=z[jvj+41];
if((V79=w[x[jvj+45]][1])==incon) goto l34;
if((V79==23)) goto l34;
x[jvj+76]=x[jvj+38] ;z[jvj+76]=z[jvj+38];
l35:if((x[jvj+76]<=0)) goto l34;
x[jvj+42]=s[x[jvj+76]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+76];
if((x[jvj+39]==x[jvj+42])) goto l36;
pile[v[22]]=102; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+42,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+45]!=x[jvj+44])) goto l36;
pile[v[22]]=10175; pile[WZ1]=BL; pile[WZ2]=X; pile[WZ3]=(-4384); pile[WZ4]=jvj+45; 
(*f[733])( );     /*FAUTE2(10175,BL,X,(-4384),jvj+45)*/
l36:x[jvj+76]=t[x[jvj+76]];
goto l35;
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,X,jvj+9)*/
l50:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,X,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]==54)) goto l51;
if((x[jvj+56]==267)) goto l53;
if((x[jvj+56]!=25)) goto l58;
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(147,BL,jvj+61)*/
x[jvj+62]=d[20];z[jvj+62]=0;
l55:if((x[jvj+62]<=0)) goto l58;
x[jvj+63]=s[x[jvj+62]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+62];
pile[v[22]]=jvj+63; pile[WZ1]=X; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(jvj+63,X,jvj+64)*/
pile[v[22]]=140; pile[WZ1]=jvj+64; 
(*f[44])( );if(v[102]) goto l56;     /*FNDC1(140,jvj+64,V141)*/
V141=pile[WZ2]; 
V135=V141;
for(a=x[jvj+61];a>0;a=t[a]) if(s[a]==V135) goto l57;
l56:x[jvj+62]=t[x[jvj+62]];
goto l55;
l4:x[jvj+10]=s[x[jvj+68]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+68];
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==1674)) goto l40;
l5:x[jvj+68]=t[x[jvj+68]];
l3:if((x[jvj+68]>0)) goto l4;
x[jvj+73]=x[jvj+34] ;z[jvj+73]=z[jvj+34];
l28:if((x[jvj+73]<=0)) goto l40;
x[jvj+35]=s[x[jvj+73]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+73];
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+35,V122)*/
V122=pile[WZ2]; 
V113=V122;
x[jvj+74]=x[jvj+34] ;z[jvj+74]=z[jvj+34];
l30:if((x[jvj+74]<=0)) goto l29;
x[jvj+36]=s[x[jvj+74]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+74];
if((x[jvj+35]==x[jvj+36])) goto l31;
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+36,jvj+37)*/
if(x[jvj+37]!=96&&x[jvj+37]!=89&&x[jvj+37]!=41&&x[jvj+37]!=20&&x[jvj+37]!=128&&x[jvj+37]!=570&&x[jvj+37]!=1317) goto l31;
pile[v[22]]=10175; pile[WZ1]=(-4847); pile[WZ2]=X; pile[WZ3]=BL; pile[WZ4]=V113; 
(*f[1060])( );     /*FAUTE3(10175,(-4847),X,BL,V113)*/
l31:x[jvj+74]=t[x[jvj+74]];
goto l30;
l9:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,X,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+19,jvj+20)*/
if((V70=w[x[jvj+20]][1])==incon) goto l10;
l40:if(x[jvj+15]!=508&&x[jvj+15]!=854) goto l42;
pile[v[22]]=184; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(184,X,jvj+48)*/
l41:if((x[jvj+48]<=0)) goto l42;
x[jvj+49]=s[x[jvj+48]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+48];
pile[v[22]]=jvj+49; pile[WZ1]=(-4755); 
(*f[326])( );     /*VERC0(jvj+49,(-4755))*/
x[jvj+48]=t[x[jvj+48]];
goto l41;
l10:pile[v[22]]=10175; pile[WZ1]=BL; pile[WZ2]=jvj+20; pile[WZ3]=(-4391); pile[WZ4]=X; 
(*f[733])( );     /*FAUTE2(10175,BL,jvj+20,(-4391),X)*/
goto l40;
l11:pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(114,X,jvj+21)*/
x[jvj+69]=x[jvj+21] ;z[jvj+69]=z[jvj+21];
l12:if((x[jvj+69]>0)) goto l13;
pile[v[22]]=113; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(113,X,jvj+26)*/
x[jvj+71]=x[jvj+26] ;z[jvj+71]=z[jvj+26];
l17:if((x[jvj+71]<=0)) goto l40;
x[jvj+27]=s[x[jvj+71]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+71];
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+27,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+28,V32)*/
V32=pile[WZ2]; 
V25=V32;
x[jvj+72]=x[jvj+26] ;z[jvj+72]=z[jvj+26];
l19:if((x[jvj+72]>0)) goto l20;
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(147,BL,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==V25) goto l22;
l23:pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+27,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]==21)) goto l18;
l24:pile[v[22]]=10175; pile[WZ1]=X; pile[WZ2]=(-4527); pile[WZ3]=jvj+7; 
(*f[1061])( );     /*FAUTE4(10175,X,(-4527),jvj+7)*/
l18:x[jvj+71]=t[x[jvj+71]];
goto l17;
l13:x[jvj+22]=s[x[jvj+69]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+69];
pile[v[22]]=103; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+22,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+23,V16)*/
V16=pile[WZ2]; 
V=V16;
x[jvj+70]=x[jvj+21] ;z[jvj+70]=z[jvj+21];
l15:if((x[jvj+70]<=0)) goto l14;
x[jvj+24]=s[x[jvj+70]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+70];
if((x[jvj+22]==x[jvj+24])) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+24,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+25,V22)*/
V22=pile[WZ2]; 
if((V!=V22)) goto l16;
pile[v[22]]=10175; pile[WZ1]=(-4386); pile[WZ2]=X; pile[WZ3]=BL; pile[WZ4]=V; 
(*f[1060])( );     /*FAUTE3(10175,(-4386),X,BL,V)*/
l16:x[jvj+70]=t[x[jvj+70]];
goto l15;
l14:x[jvj+69]=t[x[jvj+69]];
goto l12;
l20:x[jvj+29]=s[x[jvj+72]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+72];
if((x[jvj+27]==x[jvj+29])) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+29,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+30,V38)*/
V38=pile[WZ2]; 
if((V25!=V38)) goto l21;
pile[v[22]]=10175; pile[WZ1]=(-4387); pile[WZ2]=X; pile[WZ3]=BL; pile[WZ4]=V25; 
(*f[1060])( );     /*FAUTE3(10175,(-4387),X,BL,V25)*/
l21:x[jvj+72]=t[x[jvj+72]];
goto l19;
l22:pile[v[22]]=10175; pile[WZ1]=(-4389); pile[WZ2]=X; pile[WZ3]=BL; pile[WZ4]=V25; 
(*f[1060])( );     /*FAUTE3(10175,(-4389),X,BL,V25)*/
goto l23;
l25:if(x[BL]==10061||x[BL]==10514) goto l40;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,X,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=1155)) goto l40;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,X,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]==41)) goto l40;
l26:pile[v[22]]=10175; pile[WZ1]=(-7772); pile[WZ2]=X; pile[WZ3]=BL; 
(*f[1064])( );     /*FAUTE5(10175,(-7772),X,BL)*/
goto l40;
l27:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(128,X,jvj+34)*/
x[jvj+68]=x[jvj+34] ;z[jvj+68]=z[jvj+34];
goto l3;
l29:x[jvj+73]=t[x[jvj+73]];
goto l28;
l34:x[jvj+75]=t[x[jvj+75]];
goto l33;
l42:x[jvj+77]=w[x[jvj+15]][8];
l43:if((x[jvj+77]>0)) goto l44;
x[jvj+79]=w[x[jvj+15]][9];
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+1,jvj+2)*/
if(x[jvj+2]==228||x[jvj+2]==278) goto l2;
l47:if((x[jvj+79]<=0)) goto l2;
x[jvj+53]=s[x[jvj+79]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+79];
pile[v[22]]=jvj+53; pile[WZ1]=X; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(jvj+53,X,jvj+54)*/
pile[v[22]]=BL; pile[WZ1]=jvj+54; pile[WZ2]=jvj+53; pile[WZ3]=X; 
(*f[672])( );     /*DIAG0(BL,jvj+54,jvj+53,X)*/
l48:x[jvj+79]=t[x[jvj+79]];
goto l47;
l44:x[jvj+50]=s[x[jvj+77]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+77];
pile[v[22]]=jvj+50; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(jvj+50,X,jvj+51)*/
x[jvj+78]=x[jvj+51] ;z[jvj+78]=z[jvj+51];
l45:if((x[jvj+78]>0)) goto l46;
x[jvj+77]=t[x[jvj+77]];
goto l43;
l46:x[jvj+52]=s[x[jvj+78]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+78];
pile[v[22]]=BL; pile[WZ1]=jvj+52; pile[WZ2]=jvj+50; pile[WZ3]=X; 
(*f[672])( );     /*DIAG0(BL,jvj+52,jvj+50,X)*/
x[jvj+78]=t[x[jvj+78]];
goto l45;
l49:pile[v[22]]=10175; pile[WZ1]=BL; pile[WZ2]=X; pile[WZ3]=(-4679); pile[WZ4]=BT; 
(*f[733])( );     /*FAUTE2(10175,BL,X,(-4679),BT)*/
goto l50;
l51:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(436,X,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+57,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(147,BL,jvj+58)*/
for(a=x[jvj+58];a>0;a=t[a]) if(s[a]==V41) goto l52;
l58:v[0]=jvj; v[22]-=4; return;
l52:pile[v[22]]=10175; pile[WZ1]=(-4388); pile[WZ2]=X; pile[WZ3]=BL; pile[WZ4]=V41; 
(*f[1060])( );     /*FAUTE3(10175,(-4388),X,BL,V41)*/
goto l58;
l53:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,X,jvj+59)*/
pile[v[22]]=140; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+59,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(147,BL,jvj+60)*/
for(a=x[jvj+60];a>0;a=t[a]) if(s[a]==V126) goto l54;
goto l58;
l54:pile[v[22]]=10175; pile[WZ1]=(-2451); pile[WZ2]=X; pile[WZ3]=BL; pile[WZ4]=V126; 
(*f[1060])( );     /*FAUTE3(10175,(-2451),X,BL,V126)*/
goto l58;
l57:pile[v[22]]=268; pile[WZ1]=jvj+63; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(268,jvj+63,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=X; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(jvj+65,X,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+66,jvj+67)*/
if((x[jvj+67]!=69)) goto l56;
pile[v[22]]=10175; pile[WZ1]=(-4878); pile[WZ2]=X; pile[WZ3]=BL; pile[WZ4]=V135; 
(*f[1060])( );     /*FAUTE3(10175,(-4878),X,BL,V135)*/
goto l56;
}
