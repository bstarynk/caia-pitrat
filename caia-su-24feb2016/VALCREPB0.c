#include "dx.h"
void VALCREPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V4=0,V22=0,V23=0,V18=0,V1=0,V14=0,V16=0,V20=0,V31=0,V24=0;
int H,Q;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10851;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1724&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; Q=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=H; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(H,274,Z)*/
pile[v[22]]=610; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(610,H,V18)*/
V18=pile[WZ2]; 
x[jvj+15]=incon;
if((V18<0)) goto l44;
if((V18<=1)) goto l25;
if((V18<=3)) goto l26;
if((V18<=6)) goto l27;
if((V18<=9)) goto l28;
x[jvj+15]=606 ;z[jvj+15]=606;
l43:pile[v[22]]=jvj+15; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+15,602,Z,5,36)*/
l44:pile[v[22]]=117; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(117,H,V1)*/
V1=pile[WZ2]; 
x[jvj+16]=incon;
if((V1<0)) goto l46;
if((V1<=1)) goto l1;
if((V1<=4)) goto l2;
if((V1<=8)) goto l3;
if((V1<=14)) goto l4;
if((V1<=23)) goto l5;
x[jvj+16]=606 ;z[jvj+16]=606;
l45:pile[v[22]]=jvj+16; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+16,607,Z,1,36)*/
l46:pile[v[22]]=515; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(515,H,V14)*/
V14=pile[WZ2]; 
x[jvj+17]=incon;
if((V14<0)) goto l48;
if((V14<=1)) goto l15;
if((V14<=4)) goto l16;
if((V14<=7)) goto l17;
if((V14<=11)) goto l18;
if((V14<=18)) goto l19;
x[jvj+17]=606 ;z[jvj+17]=606;
l47:pile[v[22]]=jvj+17; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+17,607,Z,3,36)*/
l48:pile[v[22]]=510; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(510,H,V16)*/
V16=pile[WZ2]; 
x[jvj+18]=incon;
if((V16<0)) goto l50;
if((V16<=1)) goto l20;
if((V16<=3)) goto l21;
if((V16<=5)) goto l22;
if((V16<=8)) goto l23;
if((V16<=12)) goto l24;
x[jvj+18]=606 ;z[jvj+18]=606;
l49:pile[v[22]]=jvj+18; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+18,206,Z,4,36)*/
l50:pile[v[22]]=876; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(876,H,V20)*/
V20=pile[WZ2]; 
x[jvj+19]=incon;
if((V20<0)) goto l52;
if((V20<=3)) goto l29;
if((V20<=10)) goto l30;
if((V20<=31)) goto l31;
if((V20<=95)) goto l32;
if((V20<=296)) goto l33;
if((V20<=934)) goto l34;
x[jvj+19]=606 ;z[jvj+19]=606;
l51:pile[v[22]]=jvj+19; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=6; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+19,602,Z,6,36)*/
l52:V31=100*V20;
V22=(-999999);
pile[v[22]]=109; pile[WZ1]=H; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(109,H,jvj+9)*/
pile[v[22]]=449; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(449,H,jvj+10)*/
pile[v[22]]=159; pile[WZ1]=Q; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(159,Q,jvj+11)*/
l35:if((x[jvj+11]<=0)) goto l53;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(109,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[jvj+9])) goto l36;
pile[v[22]]=449; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(449,jvj+12,jvj+14)*/
if((x[jvj+14]!=x[jvj+10])) goto l36;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(876,jvj+12,V23)*/
V23=pile[WZ2]; 
if(V23>V22) V22=V23;
l36:x[jvj+11]=t[x[jvj+11]];
goto l35;
l1:x[jvj+16]=607 ;z[jvj+16]=607;
goto l45;
l2:x[jvj+16]=603 ;z[jvj+16]=603;
goto l45;
l3:x[jvj+16]=206 ;z[jvj+16]=206;
goto l45;
l4:x[jvj+16]=604 ;z[jvj+16]=604;
goto l45;
l5:x[jvj+16]=605 ;z[jvj+16]=605;
goto l45;
l8:pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(117,jvj+8,V4)*/
V4=pile[WZ2]; 
x[jvj+21]=incon;
if((V4<0)) goto l56;
if((V4<=2)) goto l9;
if((V4<=4)) goto l10;
if((V4<=9)) goto l11;
if((V4<=20)) goto l12;
if((V4<=40)) goto l13;
if((V4<=86)) goto l14;
x[jvj+21]=606 ;z[jvj+21]=606;
l55:pile[v[22]]=jvj+21; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+21,607,Z,2,36)*/
l56:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l9:x[jvj+21]=607 ;z[jvj+21]=607;
goto l55;
l10:x[jvj+21]=602 ;z[jvj+21]=602;
goto l55;
l11:x[jvj+21]=603 ;z[jvj+21]=603;
goto l55;
l12:x[jvj+21]=206 ;z[jvj+21]=206;
goto l55;
l13:x[jvj+21]=604 ;z[jvj+21]=604;
goto l55;
l14:x[jvj+21]=605 ;z[jvj+21]=605;
goto l55;
l15:x[jvj+17]=607 ;z[jvj+17]=607;
goto l47;
l16:x[jvj+17]=603 ;z[jvj+17]=603;
goto l47;
l17:x[jvj+17]=206 ;z[jvj+17]=206;
goto l47;
l18:x[jvj+17]=604 ;z[jvj+17]=604;
goto l47;
l19:x[jvj+17]=605 ;z[jvj+17]=605;
goto l47;
l20:x[jvj+18]=607 ;z[jvj+18]=607;
goto l49;
l21:x[jvj+18]=603 ;z[jvj+18]=603;
goto l49;
l22:x[jvj+18]=206 ;z[jvj+18]=206;
goto l49;
l23:x[jvj+18]=604 ;z[jvj+18]=604;
goto l49;
l24:x[jvj+18]=605 ;z[jvj+18]=605;
goto l49;
l25:x[jvj+15]=607 ;z[jvj+15]=607;
goto l43;
l26:x[jvj+15]=603 ;z[jvj+15]=603;
goto l43;
l27:x[jvj+15]=604 ;z[jvj+15]=604;
goto l43;
l28:x[jvj+15]=605 ;z[jvj+15]=605;
goto l43;
l29:x[jvj+19]=607 ;z[jvj+19]=607;
goto l51;
l30:x[jvj+19]=602 ;z[jvj+19]=602;
goto l51;
l31:x[jvj+19]=603 ;z[jvj+19]=603;
goto l51;
l32:x[jvj+19]=206 ;z[jvj+19]=206;
goto l51;
l33:x[jvj+19]=604 ;z[jvj+19]=604;
goto l51;
l34:x[jvj+19]=605 ;z[jvj+19]=605;
goto l51;
l37:x[jvj+20]=607 ;z[jvj+20]=607;
l54:pile[v[22]]=jvj+20; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=7; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+20,602,Z,7,36)*/
l57:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(0,117,jvj+8)*/
pile[v[22]]=109; pile[WZ1]=H; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,H,jvj+2)*/
pile[v[22]]=449; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(449,H,jvj+3)*/
pile[v[22]]=159; pile[WZ1]=Q; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,Q,jvj+4)*/
l6:if((x[jvj+4]<=0)) goto l8;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[jvj+2])) goto l7;
pile[v[22]]=449; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(449,jvj+5,jvj+7)*/
if((x[jvj+7]!=x[jvj+3])) goto l7;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+5,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=V12; 
(*f[186])( );     /*BTC0(jvj+8,117,V12)*/
l7:x[jvj+4]=t[x[jvj+4]];
goto l6;
l38:x[jvj+20]=602 ;z[jvj+20]=602;
goto l54;
l39:x[jvj+20]=603 ;z[jvj+20]=603;
goto l54;
l40:x[jvj+20]=206 ;z[jvj+20]=206;
goto l54;
l41:x[jvj+20]=604 ;z[jvj+20]=604;
goto l54;
l42:x[jvj+20]=605 ;z[jvj+20]=605;
goto l54;
l53:if((V22<=0)) goto l57;
if((V22==(-999999))) goto l57;
V24=V31/V22;
x[jvj+20]=incon;
if((V24<0)) goto l57;
if((V24<=2)) goto l37;
if((V24<=4)) goto l38;
if((V24<=9)) goto l39;
if((V24<=20)) goto l40;
if((V24<=40)) goto l41;
if((V24<=86)) goto l42;
x[jvj+20]=606 ;z[jvj+20]=606;
goto l54;
}
