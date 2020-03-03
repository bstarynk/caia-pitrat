#include "dx.h"
void Z143Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V61=0,V62=0,V42=0,V92=0,V93=0,V73=0,V157=0,V180=0,V226=0,V198=0,V203=0,V230=0,V201=0,V233=0,JJ=0,V207=0,V237=0,V205=0,V274=0,V243=0,V251=0,V278=0,V249=0,V281=0,V246=0,V255=0,V285=0,V253=0,V95=0,V98=0,V112=0,V82=0,V63=0,V74=0,V187=0,V172=0,V123=0,V126=0,V140=0,J=0,V55=0,I=0,V43=0,V161=0,V166=0,V150=0,V18=0,K=0,V28=0,L=0,V34=0,V200=0,V248=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=157;
x[jvj+1]=15644;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1881&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,NNNY,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=30)) goto l60;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(103,NNNY,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(130,jvj+34,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,NNNY,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=484)) goto l46;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+37; 
(*f[200])( );if(v[102]) goto l46;     /*NDD0(jvj+35,jvj+37)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(280,jvj+37,V98)*/
V98=pile[WZ2]; 
if((V98<=V95)) goto l45;
NNNT=53;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+38)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+38; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+38,NNNX)*/
l71:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:V42=V43;
l79:x[jvj+152]=x[jvj+62] ;z[jvj+152]=z[jvj+62];
l80:if((x[jvj+152]>0)) goto l81;
l57:x[jvj+147]=t[x[jvj+147]];
l56:if((x[jvj+147]<=0)) goto l60;
x[jvj+63]=s[x[jvj+147]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+147];
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(130,jvj+63,V55)*/
V55=pile[WZ2]; 
I=V55;
if((I<=0)) goto l57;
V43=J/I;
V42=incon;
if((J<=0)) goto l1;
V61=J%I;
if((V61==0)) goto l1;
V62=V43+1;
V42=V62;
goto l79;
l2:V73=V74;
l72:x[jvj+150]=x[jvj+42] ;z[jvj+150]=z[jvj+42];
l73:if((x[jvj+150]>0)) goto l74;
l48:x[jvj+146]=t[x[jvj+146]];
l47:if((x[jvj+146]<=0)) goto l49;
x[jvj+43]=s[x[jvj+146]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+146];
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+43,V82)*/
V82=pile[WZ2]; 
V63=V82;
if((V63<=0)) goto l48;
V74=V95/V63;
V73=incon;
if((V95>=0)) goto l2;
V92=V95%V63;
if((V92==0)) goto l2;
V93=V74-1;
V73=V93;
goto l72;
l4:x[jvj+3]=s[x[jvj+4]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+4];
pile[v[22]]=280; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(280,jvj+3,V157)*/
V157=pile[WZ2]; 
if((V157<0)) goto l60;
x[jvj+4]=t[x[jvj+4]];
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=52; pile[WZ1]=NNNY; pile[WZ2]=jvj+69; 
(*f[492])( );     /*FIGURE0(52,NNNY,jvj+69)*/
if((x[jvj+69]==134)) goto l58;
l60:if(x[jvj+33]!=25&&x[jvj+33]!=26&&x[jvj+33]!=27&&x[jvj+33]!=28&&x[jvj+33]!=29&&x[jvj+33]!=30) goto l65;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(100,NNNY,jvj+72)*/
if((x[jvj+72]!=22)) goto l65;
pile[v[22]]=102; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(102,NNNY,jvj+73)*/
pile[v[22]]=111; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+73,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]!=485)) goto l65;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(103,NNNY,jvj+76)*/
pile[v[22]]=111; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+76,jvj+77)*/
pile[v[22]]=101; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+77,jvj+78)*/
if((x[jvj+78]!=485)) goto l65;
pile[v[22]]=107; pile[WZ1]=jvj+73; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(107,jvj+73,jvj+79)*/
pile[WZ1]=jvj+76; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(107,jvj+76,jvj+80)*/
x[jvj+148]=x[jvj+79] ;z[jvj+148]=z[jvj+79];
l61:if((x[jvj+148]<=0)) goto l65;
x[jvj+81]=s[x[jvj+148]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+148];
pile[v[22]]=130; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(130,jvj+81,V18)*/
V18=pile[WZ2]; 
K=V18;
if((K==0)) goto l62;
x[jvj+154]=x[jvj+79] ;z[jvj+154]=z[jvj+79];
l86:if((x[jvj+154]>0)) goto l87;
l62:x[jvj+148]=t[x[jvj+148]];
goto l61;
l6:x[jvj+6]=s[x[jvj+7]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+7];
pile[v[22]]=280; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(280,jvj+6,V180)*/
V180=pile[WZ2]; 
if((V180<0)) goto l52;
x[jvj+7]=t[x[jvj+7]];
l5:if((x[jvj+7]>0)) goto l6;
pile[v[22]]=52; pile[WZ1]=NNNY; pile[WZ2]=jvj+51; 
(*f[492])( );     /*FIGURE0(52,NNNY,jvj+51)*/
if((x[jvj+51]==134)) goto l50;
l52:pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+34,jvj+54)*/
if((x[jvj+54]!=484)) goto l54;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,NNNY,jvj+55)*/
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+55,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=jvj+34; pile[WZ1]=jvj+56; 
(*f[200])( );if(v[102]) goto l54;     /*NDD0(jvj+34,jvj+56)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(164,jvj+56,V126)*/
V126=pile[WZ2]; 
if((V126>=V123)) goto l53;
NNNT=55;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+57)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+57; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+57,NNNX)*/
goto l71;
l8:if(V203==incon) goto l9;
l12:pile[v[22]]=jvj+13; pile[WZ1]=117; pile[WZ2]=V203; 
(*f[186])( );     /*BTC0(jvj+13,117,V203)*/
x[jvj+144]=t[x[jvj+144]];
l10:if((x[jvj+144]>0)) goto l11;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(117,jvj+13,V201)*/
V201=pile[WZ2]; 
if((V201<(-900000))) goto l67;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(0,117,jvj+19)*/
l16:if((x[jvj+93]>0)) goto l17;
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(117,jvj+19,V205)*/
V205=pile[WZ2]; 
if((V205>=900000)) goto l67;
x[jvj+126]=incon;
if((x[jvj+33]==29)) goto l19;
if((x[jvj+33]!=30)) goto l21;
if((V201>=V200)) goto l23;
l22:if((V205<V200)) goto l24;
l25:if(x[jvj+126]==incon) goto l67;
if((x[jvj+126]!=(-99999998))) goto l66;
l67:pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(130,jvj+89,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(102,NNNY,jvj+95)*/
pile[v[22]]=111; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,jvj+95,jvj+96)*/
pile[v[22]]=101; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+96,jvj+97)*/
if((x[jvj+97]!=485)) goto l70;
pile[v[22]]=107; pile[WZ1]=jvj+95; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(107,jvj+95,jvj+98)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(0,117,jvj+25)*/
x[jvj+145]=x[jvj+98] ;z[jvj+145]=z[jvj+98];
l29:if((x[jvj+145]>0)) goto l30;
pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(117,jvj+25,V249)*/
V249=pile[WZ2]; 
if((V249<(-900000))) goto l70;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(0,117,jvj+31)*/
l35:if((x[jvj+98]>0)) goto l36;
pile[v[22]]=117; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(117,jvj+31,V253)*/
V253=pile[WZ2]; 
if((V253>=900000)) goto l70;
x[jvj+127]=incon;
if((x[jvj+33]==29)) goto l38;
if((x[jvj+33]!=30)) goto l40;
if((V249>V248)) goto l42;
l41:if((V253<=V248)) goto l43;
l44:if(x[jvj+127]==incon) goto l70;
if((x[jvj+127]!=(-99999998))) goto l68;
l70:x[NNNX]=NNNT=incon;
l69:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l9:V203=(-999999);
goto l12;
l11:x[jvj+8]=s[x[jvj+144]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+144];
V203=incon;
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+8,V226)*/
V226=pile[WZ2]; 
V198=V226;
V203=V198;
l7:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+8,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+10,jvj+11)*/
if(x[jvj+11]!=96&&x[jvj+11]!=89&&x[jvj+11]!=41&&x[jvj+11]!=20&&x[jvj+11]!=128&&x[jvj+11]!=570&&x[jvj+11]!=1317) goto l8;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l8;     /*NDD0(jvj+8,jvj+12)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(280,jvj+12,V230)*/
V230=pile[WZ2]; 
V203=V230;
goto l12;
l14:if(V207==incon) goto l15;
l18:pile[v[22]]=jvj+19; pile[WZ1]=117; pile[WZ2]=V207; 
(*f[186])( );     /*BTC0(jvj+19,117,V207)*/
x[jvj+93]=t[x[jvj+93]];
goto l16;
l15:V207=999999;
goto l18;
l17:x[jvj+14]=s[x[jvj+93]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+93];
V207=incon;
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+14,V233)*/
V233=pile[WZ2]; 
JJ=V233;
V207=JJ;
l13:pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+14,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+16,jvj+17)*/
if(x[jvj+17]!=96&&x[jvj+17]!=89&&x[jvj+17]!=41&&x[jvj+17]!=20&&x[jvj+17]!=128&&x[jvj+17]!=570&&x[jvj+17]!=1317) goto l14;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+14,jvj+18)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(164,jvj+18,V237)*/
V237=pile[WZ2]; 
V207=V237;
goto l18;
l19:if((V201>V200)) goto l23;
l20:if((V205<=V200)) goto l24;
goto l25;
l23:x[jvj+126]=135 ;z[jvj+126]=135;
if((x[jvj+33]==29)) goto l20;
l21:if((x[jvj+33]==30)) goto l22;
goto l25;
l24:x[jvj+126]=134 ;z[jvj+126]=134;
l66:NNNT=127;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+126; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+126,jvj+94)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+94; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+94,NNNX)*/
goto l71;
l27:if(V251==incon) goto l28;
l31:pile[v[22]]=jvj+25; pile[WZ1]=117; pile[WZ2]=V251; 
(*f[186])( );     /*BTC0(jvj+25,117,V251)*/
x[jvj+145]=t[x[jvj+145]];
goto l29;
l28:V251=(-999999);
goto l31;
l30:x[jvj+20]=s[x[jvj+145]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+145];
V251=incon;
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+20,V274)*/
V274=pile[WZ2]; 
V243=V274;
V251=V243;
l26:pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=484)) goto l27;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+22,jvj+23)*/
if(x[jvj+23]!=96&&x[jvj+23]!=89&&x[jvj+23]!=41&&x[jvj+23]!=20&&x[jvj+23]!=128&&x[jvj+23]!=570&&x[jvj+23]!=1317) goto l27;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l27;     /*NDD0(jvj+20,jvj+24)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(280,jvj+24,V278)*/
V278=pile[WZ2]; 
V251=V278;
goto l31;
l33:if(V255==incon) goto l34;
l37:pile[v[22]]=jvj+31; pile[WZ1]=117; pile[WZ2]=V255; 
(*f[186])( );     /*BTC0(jvj+31,117,V255)*/
x[jvj+98]=t[x[jvj+98]];
goto l35;
l34:V255=999999;
goto l37;
l36:x[jvj+26]=s[x[jvj+98]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+98];
V255=incon;
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+26,V281)*/
V281=pile[WZ2]; 
V246=V281;
V255=V246;
l32:pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l33;
pile[v[22]]=102; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+26,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+28,jvj+29)*/
if(x[jvj+29]!=96&&x[jvj+29]!=89&&x[jvj+29]!=41&&x[jvj+29]!=20&&x[jvj+29]!=128&&x[jvj+29]!=570&&x[jvj+29]!=1317) goto l33;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+30; 
(*f[200])( );if(v[102]) goto l33;     /*NDD0(jvj+26,jvj+30)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(164,jvj+30,V285)*/
V285=pile[WZ2]; 
V255=V285;
goto l37;
l38:if((V249>=V248)) goto l42;
l39:if((V253<V248)) goto l43;
goto l44;
l42:x[jvj+127]=134 ;z[jvj+127]=134;
if((x[jvj+33]==29)) goto l39;
l40:if((x[jvj+33]==30)) goto l41;
goto l44;
l43:x[jvj+127]=135 ;z[jvj+127]=135;
l68:NNNT=128;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+127; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+127,jvj+99)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+99; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+99,NNNX)*/
goto l71;
l45:pile[v[22]]=164; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(164,jvj+37,V112)*/
V112=pile[WZ2]; 
if((V112>V95)) goto l46;
NNNT=54;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+39)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+39; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+39,NNNX)*/
goto l71;
l46:pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+35,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=486)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+42)*/
x[jvj+146]=x[jvj+42] ;z[jvj+146]=z[jvj+42];
goto l47;
l49:if((V95!=0)) goto l52;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(102,NNNY,jvj+47)*/
pile[v[22]]=111; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,jvj+47,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=485)) goto l52;
pile[v[22]]=107; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+47,jvj+50)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+5; 
(*f[2030])( );     /*Z224Z0(NNNY,jvj+5)*/
if((x[jvj+5]==135)) goto l52;
pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(NNNY,jvj+7)*/
goto l5;
l51:x[jvj+50]=t[x[jvj+50]];
l50:if((x[jvj+50]<=0)) goto l52;
x[jvj+52]=s[x[jvj+50]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+50];
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+52,V187)*/
V187=pile[WZ2]; 
V172=V187;
if((V172<=0)) goto l51;
NNNT=105;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+53)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+53; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+53,NNNX)*/
goto l71;
l53:pile[v[22]]=280; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(280,jvj+56,V140)*/
V140=pile[WZ2]; 
if((V140<V123)) goto l54;
NNNT=56;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+58)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+58; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+58,NNNX)*/
goto l71;
l54:pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+34,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]==486)) goto l55;
if((x[jvj+60]!=485)) goto l60;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(102,NNNY,jvj+67)*/
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(130,jvj+67,V161)*/
V161=pile[WZ2]; 
if((V161!=0)) goto l60;
pile[v[22]]=107; pile[WZ1]=jvj+34; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+68)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+2; 
(*f[2029])( );     /*Z223Z0(NNNY,jvj+2)*/
if((x[jvj+2]==135)) goto l60;
pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(NNNY,jvj+4)*/
goto l3;
l55:pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(102,NNNY,jvj+61)*/
pile[v[22]]=130; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(130,jvj+61,J)*/
J=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+34; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+62)*/
x[jvj+147]=x[jvj+62] ;z[jvj+147]=z[jvj+62];
goto l56;
l59:x[jvj+68]=t[x[jvj+68]];
l58:if((x[jvj+68]<=0)) goto l60;
x[jvj+70]=s[x[jvj+68]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+68];
pile[v[22]]=130; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(130,jvj+70,V166)*/
V166=pile[WZ2]; 
V150=V166;
if((V150<0)) goto l59;
NNNT=104;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+71)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+71; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+71,NNNX)*/
goto l71;
l65:if(x[jvj+33]!=29&&x[jvj+33]!=30) goto l70;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(100,NNNY,jvj+88)*/
if((x[jvj+88]!=22)) goto l70;
pile[v[22]]=103; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(103,NNNY,jvj+89)*/
pile[v[22]]=111; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(111,jvj+89,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(101,jvj+90,jvj+91)*/
if((x[jvj+91]!=485)) goto l67;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(102,NNNY,jvj+92)*/
pile[v[22]]=130; pile[WZ1]=jvj+92; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(130,jvj+92,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+89; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(107,jvj+89,jvj+93)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(0,117,jvj+13)*/
x[jvj+144]=x[jvj+93] ;z[jvj+144]=z[jvj+93];
goto l10;
l74:x[jvj+128]=s[x[jvj+150]] ;z[jvj+128]=(x[jvj+128]<=sepcte) ? x[jvj+128] : z[jvj+150];
pile[v[22]]=jvj+128; pile[WZ1]=jvj+43; pile[WZ2]=jvj+129; 
(*f[760])( );     /*MEMEX0(jvj+128,jvj+43,jvj+129)*/
if((x[jvj+129]==135)) goto l75;
x[jvj+150]=t[x[jvj+150]];
goto l73;
l75:x[jvj+130]=0 ;z[jvj+130]=0;
x[jvj+151]=x[jvj+42] ;z[jvj+151]=z[jvj+42];
l76:if((x[jvj+151]>0)) goto l77;
x[jvj+44]=x[jvj+130] ;z[jvj+44]=z[jvj+130];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[299])( );     /*COPEL0(jvj+44,jvj+45)*/
NNNT=52;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+100)*/
pile[WZ3]=486; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+45; pile[WZ2]=107; pile[WZ3]=jvj+107; 
(*f[301])( );     /*TRI11(jvj+106,jvj+45,107,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+104; 
(*f[58])( );     /*TRI3(jvj+107,22,100,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V73; pile[WZ4]=jvj+102; 
(*f[192])( );     /*QUADRI4(100,41,130,V73,jvj+102)*/
pile[v[22]]=jvj+100; pile[WZ1]=111; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,111,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; pile[WZ2]=103; pile[WZ3]=jvj+103; 
(*f[58])( );     /*TRI3(jvj+101,jvj+102,103,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+104,jvj+103,jvj+46)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+46; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+46,NNNX)*/
goto l71;
l77:x[jvj+131]=s[x[jvj+151]] ;z[jvj+131]=(x[jvj+131]<=sepcte) ? x[jvj+131] : z[jvj+151];
if((x[jvj+131]==x[jvj+128])) goto l78;
pile[v[22]]=jvj+130; pile[WZ1]=jvj+131; 
(*f[68])( );     /*PLUE0(jvj+130,jvj+131)*/
l78:x[jvj+151]=t[x[jvj+151]];
goto l76;
l81:x[jvj+132]=s[x[jvj+152]] ;z[jvj+132]=(x[jvj+132]<=sepcte) ? x[jvj+132] : z[jvj+152];
pile[v[22]]=jvj+132; pile[WZ1]=jvj+63; pile[WZ2]=jvj+133; 
(*f[760])( );     /*MEMEX0(jvj+132,jvj+63,jvj+133)*/
if((x[jvj+133]==135)) goto l82;
x[jvj+152]=t[x[jvj+152]];
goto l80;
l82:x[jvj+134]=0 ;z[jvj+134]=0;
x[jvj+153]=x[jvj+62] ;z[jvj+153]=z[jvj+62];
l83:if((x[jvj+153]>0)) goto l84;
x[jvj+64]=x[jvj+134] ;z[jvj+64]=z[jvj+134];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[299])( );     /*COPEL0(jvj+64,jvj+65)*/
NNNT=51;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+108)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V42; pile[WZ4]=jvj+112; 
(*f[192])( );     /*QUADRI4(100,41,130,V42,jvj+112)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=111; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,111,jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=jvj+65; pile[WZ2]=107; pile[WZ3]=jvj+115; 
(*f[301])( );     /*TRI11(jvj+114,jvj+65,107,jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+115,22,100,jvj+110)*/
pile[v[22]]=jvj+108; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+110; pile[WZ2]=103; pile[WZ3]=jvj+111; 
(*f[58])( );     /*TRI3(jvj+109,jvj+110,103,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+112,jvj+111,jvj+66)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+66; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+66,NNNX)*/
goto l71;
l84:x[jvj+135]=s[x[jvj+153]] ;z[jvj+135]=(x[jvj+135]<=sepcte) ? x[jvj+135] : z[jvj+153];
if((x[jvj+135]==x[jvj+132])) goto l85;
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; 
(*f[68])( );     /*PLUE0(jvj+134,jvj+135)*/
l85:x[jvj+153]=t[x[jvj+153]];
goto l83;
l87:x[jvj+136]=s[x[jvj+154]] ;z[jvj+136]=(x[jvj+136]<=sepcte) ? x[jvj+136] : z[jvj+154];
pile[v[22]]=jvj+136; pile[WZ1]=jvj+81; pile[WZ2]=jvj+137; 
(*f[760])( );     /*MEMEX0(jvj+136,jvj+81,jvj+137)*/
if((x[jvj+137]==135)) goto l88;
x[jvj+154]=t[x[jvj+154]];
goto l86;
l88:x[jvj+138]=0 ;z[jvj+138]=0;
x[jvj+155]=x[jvj+79] ;z[jvj+155]=z[jvj+79];
l89:if((x[jvj+155]>0)) goto l90;
x[jvj+82]=x[jvj+138] ;z[jvj+82]=z[jvj+138];
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; 
(*f[299])( );     /*COPEL0(jvj+82,jvj+83)*/
x[jvj+149]=x[jvj+80] ;z[jvj+149]=z[jvj+80];
l63:if((x[jvj+149]<=0)) goto l62;
x[jvj+84]=s[x[jvj+149]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+149];
pile[v[22]]=130; pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(130,jvj+84,V28)*/
V28=pile[WZ2]; 
L=V28;
if((L==0)) goto l64;
x[jvj+156]=x[jvj+80] ;z[jvj+156]=z[jvj+80];
l92:if((x[jvj+156]>0)) goto l93;
l64:x[jvj+149]=t[x[jvj+149]];
goto l63;
l90:x[jvj+139]=s[x[jvj+155]] ;z[jvj+139]=(x[jvj+139]<=sepcte) ? x[jvj+139] : z[jvj+155];
if((x[jvj+139]==x[jvj+136])) goto l91;
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; 
(*f[68])( );     /*PLUE0(jvj+138,jvj+139)*/
l91:x[jvj+155]=t[x[jvj+155]];
goto l89;
l93:x[jvj+140]=s[x[jvj+156]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+156];
pile[v[22]]=jvj+140; pile[WZ1]=jvj+84; pile[WZ2]=jvj+141; 
(*f[760])( );     /*MEMEX0(jvj+140,jvj+84,jvj+141)*/
if((x[jvj+141]==135)) goto l94;
x[jvj+156]=t[x[jvj+156]];
goto l92;
l94:x[jvj+142]=0 ;z[jvj+142]=0;
x[jvj+157]=x[jvj+80] ;z[jvj+157]=z[jvj+80];
l95:if((x[jvj+157]>0)) goto l96;
x[jvj+85]=x[jvj+142] ;z[jvj+85]=z[jvj+142];
pile[v[22]]=jvj+85; pile[WZ1]=jvj+86; 
(*f[299])( );     /*COPEL0(jvj+85,jvj+86)*/
V34=K-L;
NNNT=28;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+33; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+33,jvj+116)*/
pile[WZ3]=485; pile[WZ4]=jvj+121; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+121)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V34; pile[WZ4]=jvj+122; 
(*f[192])( );     /*QUADRI4(100,41,130,V34,jvj+122)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+121; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+121,jvj+120)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+120; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+83,jvj+120,107)*/
pile[v[22]]=jvj+120; pile[WZ1]=107; pile[WZ2]=jvj+122; 
(*f[36])( );     /*PLUSC0(jvj+120,107,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+123; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=111; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(jvj+123,111,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+86; pile[WZ2]=107; pile[WZ3]=jvj+125; 
(*f[301])( );     /*TRI11(jvj+124,jvj+86,107,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+118; 
(*f[58])( );     /*TRI3(jvj+125,22,100,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,111,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+87)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+87; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+87,NNNX)*/
goto l71;
l96:x[jvj+143]=s[x[jvj+157]] ;z[jvj+143]=(x[jvj+143]<=sepcte) ? x[jvj+143] : z[jvj+157];
if((x[jvj+143]==x[jvj+140])) goto l97;
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; 
(*f[68])( );     /*PLUE0(jvj+142,jvj+143)*/
l97:x[jvj+157]=t[x[jvj+157]];
goto l95;
}
