#include "dx.h"
void ANARES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V53=0,V52=0,V61=0,V58=0,V75=0,V76=0,V97=0,V98=0,V99=0,V101=0,V112=0,V102=0,V92=0,V88=0,V85=0,V86=0,V87=0,V90=0,V105=0,V91=0,V110=0,V94=0,V93=0,V108=0,V107=0,V73=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=62;
x[jvj+1]=10860;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==141&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1022; pile[WZ1]=1021; 
(*f[71])( );     /*ENLV0(1022,1021)*/
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(457,324,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=1022; pile[WZ1]=1021; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(1022,1021,jvj+38)*/
l26:if((x[jvj+38]>0)) goto l27;
l8:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=983; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(983,jvj+3,jvj+4)*/
pile[v[22]]=878; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(878,jvj+4,jvj+5)*/
x[jvj+57]=x[jvj+5] ;z[jvj+57]=z[jvj+5];
l4:if((x[jvj+57]<=0)) goto l3;
x[jvj+6]=s[x[jvj+57]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+57];
pile[v[22]]=1017; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1017,jvj+6,jvj+7)*/
x[jvj+58]=x[jvj+7] ;z[jvj+58]=z[jvj+7];
l5:if((x[jvj+58]>0)) goto l6;
x[jvj+57]=t[x[jvj+57]];
goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l6:x[jvj+8]=s[x[jvj+58]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+58];
pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(218,jvj+8,jvj+9)*/
pile[v[22]]=1018; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1018,jvj+8,jvj+10)*/
pile[v[22]]=361; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(361,jvj+8,jvj+11)*/
pile[v[22]]=1022; pile[WZ1]=1021; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1022,1021,jvj+12)*/
l9:if((x[jvj+12]<=0)) goto l18;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=218; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,jvj+13,jvj+14)*/
if((x[jvj+14]!=x[jvj+9])) goto l25;
pile[v[22]]=1018; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1018,jvj+13,jvj+15)*/
if((x[jvj+15]!=x[jvj+10])) goto l25;
pile[v[22]]=361; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(361,jvj+13,jvj+16)*/
if((x[jvj+16]!=x[jvj+11])) goto l25;
x[jvj+18]=x[jvj+13] ;z[jvj+18]=z[jvj+13];
l10:pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(447,jvj+8,jvj+17)*/
pile[v[22]]=1022; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1022,jvj+18,jvj+19)*/
l11:if((x[jvj+19]<=0)) goto l19;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=447; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(447,jvj+20,jvj+21)*/
if((x[jvj+21]!=x[jvj+17])) goto l24;
x[jvj+23]=x[jvj+20] ;z[jvj+23]=z[jvj+20];
l12:pile[v[22]]=288; pile[WZ1]=jvj+8; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(288,jvj+8,jvj+22)*/
pile[v[22]]=1022; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1022,jvj+23,jvj+24)*/
l13:if((x[jvj+24]<=0)) goto l20;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=288; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(288,jvj+25,jvj+26)*/
if((x[jvj+26]!=x[jvj+22])) goto l23;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+25,V53)*/
V53=pile[WZ2]; 
pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+8,V52)*/
V52=pile[WZ2]; 
if((V53!=V52)) goto l23;
l14:pile[v[22]]=867; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(867,jvj+25,jvj+27)*/
pile[WZ1]=jvj+8; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(867,jvj+8,jvj+28)*/
if((x[jvj+27]!=x[jvj+28])) goto l23;
l15:x[jvj+30]=x[jvj+25] ;z[jvj+30]=z[jvj+25];
l16:pile[v[22]]=jvj+3; pile[WZ1]=109; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+3,109,jvj+29)*/
pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+6,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=163; pile[WZ2]=V61; 
(*f[177])( );     /*CHGC4(jvj+29,163,V61)*/
l17:pile[v[22]]=jvj+30; pile[WZ1]=1022; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+30,1022,jvj+29)*/
l7:x[jvj+58]=t[x[jvj+58]];
goto l5;
l18:pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+8,jvj+31)*/
pile[v[22]]=1018; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1018,jvj+8,jvj+32)*/
pile[v[22]]=361; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(361,jvj+8,jvj+33)*/
pile[v[22]]=jvj+32; pile[WZ1]=1018; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+32,1018,jvj+34)*/
pile[v[22]]=218; pile[WZ1]=jvj+31; pile[WZ2]=361; pile[WZ3]=jvj+33; pile[WZ4]=jvj+34; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(218,jvj+31,361,jvj+33,jvj+34,jvj+18)*/
pile[v[22]]=1021; pile[WZ1]=1022; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(1021,1022,jvj+18)*/
goto l10;
l19:pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+8,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=447; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+35,447,jvj+23)*/
pile[v[22]]=jvj+18; pile[WZ1]=1022; 
(*f[36])( );     /*PLUSC0(jvj+18,1022,jvj+23)*/
goto l12;
l20:pile[v[22]]=288; pile[WZ1]=jvj+8; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(288,jvj+8,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=288; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+36,288,jvj+30)*/
pile[v[22]]=867; pile[WZ1]=jvj+8; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(867,jvj+8,jvj+37)*/
pile[v[22]]=jvj+30; pile[WZ1]=867; 
(*f[35])( );     /*CHGC1(jvj+30,867,jvj+37)*/
l21:pile[v[22]]=510; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+8,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=jvj+30; pile[WZ1]=510; pile[WZ2]=V58; 
(*f[43])( );     /*CHGC2(jvj+30,510,V58)*/
l22:pile[v[22]]=jvj+23; pile[WZ1]=1022; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+23,1022,jvj+30)*/
goto l16;
l23:x[jvj+24]=t[x[jvj+24]];
goto l13;
l24:x[jvj+19]=t[x[jvj+19]];
goto l11;
l25:x[jvj+12]=t[x[jvj+12]];
goto l9;
l27:x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=361; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(361,jvj+39,jvj+40)*/
pile[v[22]]=218; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(218,jvj+39,jvj+41)*/
pile[v[22]]=1018; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(1018,jvj+39,jvj+42)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(0,117,jvj+43)*/
pile[v[22]]=1022; pile[WZ1]=jvj+39; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1022,jvj+39,jvj+44)*/
x[jvj+61]=x[jvj+44] ;z[jvj+61]=z[jvj+44];
l28:if((x[jvj+61]>0)) goto l41;
pile[v[22]]=117; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,jvj+43,V75)*/
V75=pile[WZ2]; 
V76=V75;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+42; 
(*f[42])( );     /*SRA1(135,0,jvj+42,V97)*/
V97=pile[WZ3]; 
pile[WZ1]=V97; pile[WZ2]=jvj+41; 
(*f[42])( );     /*SRA1(135,V97,jvj+41,V98)*/
V98=pile[WZ3]; 
pile[WZ1]=V98; pile[WZ2]=jvj+40; 
(*f[42])( );     /*SRA1(135,V98,jvj+40,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V76; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(41,V76,V99,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
pile[v[22]]=1022; pile[WZ1]=jvj+39; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1022,jvj+39,jvj+45)*/
x[jvj+59]=x[jvj+45] ;z[jvj+59]=z[jvj+45];
l29:if((x[jvj+59]>0)) goto l31;
pile[v[22]]=75; pile[WZ1]=0; pile[WZ2]=45; 
(*f[41])( );     /*SRB0(75,0,45,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; 
(*f[40])( );     /*SLG0(V112)*/
l30:x[jvj+38]=t[x[jvj+38]];
goto l26;
l31:x[jvj+46]=s[x[jvj+59]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+59];
pile[v[22]]=447; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(447,jvj+46,jvj+47)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+47,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; 
(*f[40])( );     /*SLG0(V102)*/
pile[v[22]]=1022; pile[WZ1]=jvj+46; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(1022,jvj+46,jvj+48)*/
x[jvj+60]=x[jvj+48] ;z[jvj+60]=z[jvj+48];
l32:if((x[jvj+60]<=0)) goto l40;
x[jvj+49]=s[x[jvj+60]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+60];
pile[v[22]]=288; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(288,jvj+49,jvj+50)*/
pile[v[22]]=1022; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(1022,jvj+49,jvj+51)*/
for(i=x[jvj+51],V92=0;i>0;i=t[i],V92++)  ;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+50; 
(*f[42])( );     /*SRA1(135,0,jvj+50,V88)*/
V88=pile[WZ3]; 
V87=incon;
pile[v[22]]=510; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(510,jvj+49,V85)*/
V85=pile[WZ2]; 
V86=V85;
pile[v[22]]=41; pile[WZ1]=V86; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(41,V86,V88,V87)*/
V87=pile[WZ3]; 
l33:V91=incon;
pile[v[22]]=867; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(867,jvj+49,jvj+52)*/
V90=x[jvj+52];
V105=V90;
pile[v[22]]=20; pile[WZ1]=V105; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V105,V87,V91)*/
V91=pile[WZ3]; 
l34:pile[v[22]]=V91; pile[WZ1]=61; 
(*f[249])( );     /*SPC1(V91,61,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V92; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(41,V92,V110,V94)*/
V94=pile[WZ3]; 
V93=incon;
if((V92<=6)) goto l37;
V93=V94;
l35:pile[v[22]]=V93; 
(*f[40])( );     /*SLG0(V93)*/
l36:x[jvj+60]=t[x[jvj+60]];
goto l32;
l37:pile[v[22]]=V94; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V94,91,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=jvj+51; pile[WZ2]=44; 
(*f[437])( );     /*XP0(V107,jvj+51,44,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V108,93,V93)*/
V93=pile[WZ2]; 
goto l35;
l38:V91=V87;
goto l34;
l39:V87=V88;
goto l33;
l40:x[jvj+59]=t[x[jvj+59]];
goto l29;
l41:x[jvj+53]=s[x[jvj+61]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+61];
pile[v[22]]=1022; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(1022,jvj+53,jvj+54)*/
x[jvj+62]=x[jvj+54] ;z[jvj+62]=z[jvj+54];
l42:if((x[jvj+62]>0)) goto l43;
x[jvj+61]=t[x[jvj+61]];
goto l28;
l43:x[jvj+55]=s[x[jvj+62]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+62];
pile[v[22]]=1022; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1022,jvj+55,jvj+56)*/
for(i=x[jvj+56],V73=0;i>0;i=t[i],V73++)  ;
pile[v[22]]=jvj+43; pile[WZ1]=117; pile[WZ2]=V73; 
(*f[186])( );     /*BTC0(jvj+43,117,V73)*/
x[jvj+62]=t[x[jvj+62]];
goto l42;
}
