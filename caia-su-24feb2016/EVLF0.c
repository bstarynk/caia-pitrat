#include "dx.h"
void EVLF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V117=0,V105=0,V114=0,V121=0,V40=0,V=0,V60=0,T1=0,TZZ=0,T2=0,V68=0,T3=0,V78=0,V135=0,V146=0,V92=0,V31=0,V11=0,V149=0,V150=0;
int Z,X;
int TY,RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=52;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; X=pile[v[22]+1]; TY=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[TY]=T2=RES=T1=T3=incon;
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,Z,jvj+12)*/
if((x[jvj+12]!=22)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,Z,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+1)*/
pile[v[22]]=155; pile[WZ1]=jvj+1; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(155,jvj+1,jvj+14)*/
if((x[jvj+14]!=68)) goto l10;
pile[v[22]]=277; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(277,jvj+1,jvj+15)*/
if((x[jvj+15]!=67)) goto l1;
pile[v[22]]=146; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(146,jvj+1,jvj+16)*/
pile[v[22]]=107; pile[WZ1]=Z; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,Z,jvj+17)*/
if((x[jvj+1]!=595)) goto l1;
pile[v[22]]=jvj+17; 
(*f[622])( );if(v[102]) goto l1;     /*PGCDE0(jvj+17,RES)*/
RES=pile[WZ1]; 
x[TY]=x[jvj+16] ;z[TY]=z[jvj+16];
l15:pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,Z,jvj+25)*/
if((x[jvj+25]!=22)) goto l45;
pile[v[22]]=111; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,Z,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+26,jvj+27)*/
pile[v[22]]=118; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(118,jvj+27,V60)*/
V60=pile[WZ2]; 
if((V60<1)) goto l19;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,Z,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=X; pile[WZ3]=jvj+29; 
(*f[80])( );if(v[102]) goto l16;     /*EVL1(jvj+28,X,T1,jvj+29,TZZ)*/
T1=pile[WZ2]; TZZ=pile[WZ4]; 
l16:if((V60<2)) goto l19;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,Z,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=X; pile[WZ3]=jvj+31; 
(*f[80])( );if(v[102]) goto l17;     /*EVL1(jvj+30,X,T2,jvj+31,V68)*/
T2=pile[WZ2]; V68=pile[WZ4]; 
l17:if((V60<3)) goto l19;
pile[v[22]]=160; pile[WZ1]=Z; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(160,Z,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=X; pile[WZ3]=jvj+33; 
(*f[80])( );if(v[102]) goto l19;     /*EVL1(jvj+32,X,T3,jvj+33,V78)*/
T3=pile[WZ2]; V78=pile[WZ4]; 
l19:if(x[TY]==incon) goto l20;
if(RES==incon) goto l31;
l47:v[0]=jvj; v[22]-=4; pile[v[22]+3]=RES; v[102]=0;return;
l1:pile[v[22]]=277; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(277,jvj+1,jvj+2)*/
if((x[jvj+2]==67)) goto l10;
l9:pile[v[22]]=Z; pile[WZ1]=X; pile[WZ3]=TY; 
(*f[615])( );if(v[102]) goto l10;     /*EVLV0(Z,X,RES,TY)*/
RES=pile[WZ2]; 
goto l15;
l3:x[jvj+3]=t[x[jvj+3]];
l2:if((x[jvj+3]<=0)) goto l15;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V19)*/
V19=pile[WZ2]; 
if((V19!=V)) goto l3;
pile[v[22]]=416; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(416,jvj+4,RES)*/
RES=pile[WZ2]; 
goto l15;
l5:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+8,V117)*/
V117=pile[WZ2]; 
if((V117!=V114)) goto l6;
V105=135;
l7:x[jvj+10]=incon;
if((V105!=134)) goto l8;
pile[v[22]]=205; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(205,jvj+9,jvj+10)*/
l11:V121=x[jvj+10];
RES=V121;
goto l15;
l6:x[jvj+7]=t[x[jvj+7]];
l4:if((x[jvj+7]>0)) goto l5;
V105=134;
goto l7;
l8:pile[v[22]]=205; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(205,jvj+9,jvj+11)*/
pile[v[22]]=201; pile[WZ1]=jvj+11; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(201,jvj+11,jvj+10)*/
goto l11;
l10:pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,Z,jvj+18)*/
if((x[jvj+18]!=22)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,Z,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+19,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,Z,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+20,jvj+9)*/
if(x[jvj+9]!=225&&x[jvj+9]!=178) goto l12;
V105=incon;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(128,X,jvj+7)*/
goto l4;
l12:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,Z,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+21,jvj+5)*/
pile[v[22]]=118; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(118,jvj+5,V40)*/
V40=pile[WZ2]; 
if((V40!=0)) goto l14;
pile[v[22]]=155; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(155,jvj+5,jvj+6)*/
if((x[jvj+6]!=67)) goto l14;
l13:pile[v[22]]=jvj+5; 
(*f[618])( );if(v[102]) goto l14;     /*EVLZ0(jvj+5,RES)*/
RES=pile[WZ1]; 
goto l15;
l14:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,Z,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=306)) goto l15;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,Z,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+24,V)*/
V=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,X,jvj+3)*/
goto l2;
l20:if(T2!=incon) goto l21;
l22:if(RES==incon) goto l23;
l41:if(x[TY]==incon) goto l42;
l46:if(RES!=incon) goto l47;
l44:x[TY]=RES=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l21:if((x[jvj+27]!=172)) goto l22;
x[jvj+52]=T2 ;z[jvj+52]=(T2<=sepcte) ? T2 : 0;
x[TY]=x[jvj+52] ;z[TY]=z[jvj+52];
goto l22;
l23:if(x[TY]==incon) goto l24;
l31:if(T1!=incon) goto l32;
goto l44;
l24:if(T1!=incon) goto l25;
l42:pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+26,jvj+49)*/
if((x[jvj+49]!=20)) goto l44;
x[jvj+45]=incon;
pile[v[22]]=146; pile[WZ1]=Z; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(146,Z,jvj+44)*/
x[jvj+45]=x[jvj+44] ;z[jvj+45]=z[jvj+44];
l27:pile[v[22]]=146; pile[WZ1]=Z; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(146,Z,jvj+43)*/
l29:if(x[jvj+45]==incon) goto l30;
l43:x[TY]=x[jvj+45] ;z[TY]=z[jvj+45];
goto l46;
l25:pile[v[22]]=118; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(118,jvj+27,V135)*/
V135=pile[WZ2]; 
if((V135!=1)) goto l32;
pile[v[22]]=729; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(729,jvj+27,jvj+39)*/
if((x[jvj+39]!=228)) goto l32;
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+26,jvj+40)*/
if((x[jvj+40]!=20)) goto l32;
pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(155,jvj+27,jvj+38)*/
if((x[jvj+38]!=67)) goto l32;
l26:pile[v[22]]=446; pile[WZ1]=jvj+27; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(446,jvj+27,jvj+41)*/
pile[v[22]]=101; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+27,jvj+42)*/
x[jvj+51]=T1 ;z[jvj+51]=(x[jvj+42]==20&&T1<=sepcte) ? T1 : (x[jvj+42]==41) ? (-1000) : 0;
pile[v[22]]=jvj+42; pile[WZ1]=100; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+42,100,jvj+50)*/
V149=x[jvj+51];
V150=z[jvj+51];
pile[v[22]]=jvj+50; pile[WZ1]=V149; pile[WZ2]=jvj+41; pile[WZ3]=V150; 
(*f[49])( );     /*CHP0(jvj+50,V149,jvj+41,V150)*/
V146=x[jvj+50];
RES=V146;
x[TY]=20 ;z[TY]=20;
goto l47;
l28:pile[v[22]]=146; pile[WZ1]=jvj+27; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(146,jvj+27,jvj+45)*/
goto l43;
l30:x[jvj+45]=41 ;z[jvj+45]=41;
goto l43;
l32:if(T2!=incon) goto l33;
l39:if(x[jvj+27]==306||x[jvj+27]==225||x[jvj+27]==178) goto l41;
pile[v[22]]=118; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(118,jvj+27,V11)*/
V11=pile[WZ2]; 
if((V11!=1)) goto l41;
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+26,jvj+48)*/
if((x[jvj+48]!=20)) goto l41;
pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(155,jvj+27,jvj+34)*/
if((x[jvj+34]!=67)) goto l41;
l18:pile[v[22]]=729; pile[WZ1]=jvj+27; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(729,jvj+27,jvj+35)*/
if((x[jvj+35]==228)) goto l41;
l40:pile[v[22]]=jvj+27; pile[WZ1]=T1; 
(*f[616])( );     /*EVLU0(jvj+27,T1,RES)*/
RES=pile[WZ2]; 
goto l41;
l33:if((x[jvj+27]!=512)) goto l34;
pile[v[22]]=X; pile[WZ1]=T2; pile[WZ2]=T1; 
(*f[619])( );if(v[102]) goto l34;     /*DIVE0(X,T2,T1,RES)*/
RES=pile[WZ3]; 
goto l41;
l34:if(T3!=incon) goto l35;
l37:if((x[jvj+27]==512)) goto l39;
pile[v[22]]=118; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(118,jvj+27,V31)*/
V31=pile[WZ2]; 
if((V31!=2)) goto l39;
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+26,jvj+47)*/
if((x[jvj+47]!=20)) goto l39;
pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(155,jvj+27,jvj+36)*/
if((x[jvj+36]!=67)) goto l39;
l38:pile[v[22]]=T2; pile[WZ1]=T1; pile[WZ2]=jvj+27; 
(*f[617])( );if(v[102]) goto l39;     /*EVLD0(T2,T1,jvj+27,RES)*/
RES=pile[WZ3]; 
goto l41;
l35:pile[v[22]]=118; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(118,jvj+27,V92)*/
V92=pile[WZ2]; 
if((V92!=3)) goto l37;
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+26,jvj+46)*/
if((x[jvj+46]!=20)) goto l37;
pile[v[22]]=155; pile[WZ1]=jvj+27; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(155,jvj+27,jvj+37)*/
if((x[jvj+37]!=67)) goto l37;
l36:pile[v[22]]=T2; pile[WZ1]=T1; pile[WZ2]=jvj+27; pile[WZ3]=T3; 
(*f[620])( );if(v[102]) goto l37;     /*EVLN0(T2,T1,jvj+27,T3,RES)*/
RES=pile[WZ4]; 
goto l41;
l45:if(x[TY]!=incon) goto l46;
goto l44;
}
