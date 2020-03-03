#include "dx.h"
void MENB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V15=0,V8=0,V42=0,V50=0,V34=0,V31=0,V37=0,V58=0,V68=0,V92=0,V86=0,V87=0,V88=0,V89=0,V90=0,V91=0,V93=0,V94=0,V67=0,V65=0,V74=0,V102=0,V96=0,V97=0,V98=0,V99=0,V100=0,V101=0,V61=0,V103=0,V105=0,V106=0,V73=0,V80=0;
int A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=66;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=67; pile[WZ1]=218; pile[WZ2]=A; 
(*f[54])( );     /*TRI1(67,218,A)*/
x[jvj+20]=vo[20];z[jvj+20]=vz[20];
pile[v[22]]=209; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(209,jvj+20,jvj+21)*/
x[jvj+22]=d[68];z[jvj+22]=0;
l9:if((x[jvj+21]>0)) goto l10;
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+15]=vo[20];z[jvj+15]=vz[20];
pile[v[22]]=209; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(209,jvj+15,jvj+16)*/
l6:if((x[jvj+16]>0)) goto l7;
x[jvj+66]=x[jvj+18] ;z[jvj+66]=z[jvj+18];
x[jvj+37]=d[68];z[jvj+37]=0;
x[jvj+62]=x[jvj+66] ;z[jvj+62]=z[jvj+66];
l17:if((x[jvj+62]>0)) goto l18;
pile[v[22]]=159; pile[WZ1]=A; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(159,A,jvj+52)*/
x[jvj+53]=d[68];z[jvj+53]=0;
l33:if((x[jvj+52]>0)) goto l34;
v[0]=jvj; v[22]-=1; return;
l2:x[jvj+6]=s[x[jvj+58]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+58];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+6,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+6,jvj+7)*/
x[jvj+56]=x[jvj+7] ;z[jvj+56]=z[jvj+7];
x[jvj+59]=x[jvj+2] ;z[jvj+59]=z[jvj+2];
l4:if((x[jvj+59]<=0)) goto l3;
x[jvj+8]=s[x[jvj+59]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+59];
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+8,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+9,V15)*/
V15=pile[WZ2]; 
if((V14!=V15)) goto l5;
pile[v[22]]=100; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=39)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+56]!=x[jvj+12])) goto l5;
pile[v[22]]=109; pile[WZ1]=jvj+56; pile[WZ2]=117; pile[WZ3]=V15; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(109,jvj+56,117,V15,jvj+13)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+13,jvj+14)*/
l5:x[jvj+59]=t[x[jvj+59]];
goto l4;
l3:x[jvj+58]=t[x[jvj+58]];
l1:if((x[jvj+58]>0)) goto l2;
pile[v[22]]=jvj+14; pile[WZ1]=258; pile[WZ2]=jvj+57; 
(*f[300])( );     /*TRI10(jvj+14,258,jvj+57)*/
pile[v[22]]=109; pile[WZ1]=jvj+17; pile[WZ2]=117; pile[WZ3]=V8; pile[WZ4]=jvj+57; pile[WZ5]=jvj+19; 
(*f[47])( );     /*QUADRI0(109,jvj+17,117,V8,jvj+57,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+19)*/
l8:x[jvj+16]=t[x[jvj+16]];
goto l6;
l7:x[jvj+3]=s[x[jvj+16]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+16];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+3,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+3,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=V8; pile[WZ2]=jvj+1; 
(*f[133])( );if(v[102]) goto l8;     /*TLDEBL1(jvj+17,V8,jvj+1)*/
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=302; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(302,jvj+1,jvj+2)*/
pile[v[22]]=252; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(252,jvj+3,jvj+4)*/
x[jvj+5]=d[68];z[jvj+5]=0;
x[jvj+58]=x[jvj+4] ;z[jvj+58]=z[jvj+4];
goto l1;
l10:x[jvj+23]=s[x[jvj+21]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+21];
pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+23,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,jvj+23,jvj+24)*/
pile[WZ1]=jvj+24; pile[WZ2]=117; pile[WZ3]=V42; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(109,jvj+24,117,V42,jvj+25)*/
pile[v[22]]=334; pile[WZ1]=A; pile[WZ2]=jvj+25; pile[WZ3]=jvj+22; 
(*f[663])( );     /*PLUG0(334,A,jvj+25,jvj+22)*/
l11:pile[v[22]]=252; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(252,jvj+23,jvj+26)*/
x[jvj+60]=x[jvj+26] ;z[jvj+60]=z[jvj+26];
l12:if((x[jvj+60]>0)) goto l13;
x[jvj+21]=t[x[jvj+21]];
goto l9;
l13:x[jvj+27]=s[x[jvj+60]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+60];
pile[v[22]]=117; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(117,jvj+27,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(109,jvj+27,jvj+28)*/
pile[WZ1]=jvj+28; pile[WZ2]=117; pile[WZ3]=V50; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(109,jvj+28,117,V50,jvj+29)*/
pile[v[22]]=334; pile[WZ1]=A; pile[WZ2]=jvj+29; pile[WZ3]=jvj+22; 
(*f[663])( );     /*PLUG0(334,A,jvj+29,jvj+22)*/
l14:x[jvj+60]=t[x[jvj+60]];
goto l12;
l18:x[jvj+30]=s[x[jvj+62]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+62];
pile[v[22]]=258; pile[WZ1]=jvj+30; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(258,jvj+30,jvj+38)*/
x[jvj+63]=x[jvj+38] ;z[jvj+63]=z[jvj+38];
l19:if((x[jvj+63]>0)) goto l20;
x[jvj+62]=t[x[jvj+62]];
goto l17;
l20:x[jvj+39]=s[x[jvj+63]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+63];
pile[v[22]]=117; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+39,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(109,jvj+39,jvj+40)*/
pile[WZ1]=jvj+40; pile[WZ2]=117; pile[WZ3]=V37; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(109,jvj+40,117,V37,jvj+41)*/
pile[v[22]]=159; pile[WZ1]=A; pile[WZ2]=jvj+41; pile[WZ3]=jvj+37; 
(*f[663])( );     /*PLUG0(159,A,jvj+41,jvj+37)*/
pile[v[22]]=117; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+30,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(159,A,jvj+31)*/
pile[v[22]]=109; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(109,jvj+30,jvj+32)*/
x[jvj+33]=d[68];z[jvj+33]=0;
x[jvj+61]=x[jvj+31] ;z[jvj+61]=z[jvj+31];
l15:if((x[jvj+61]<=0)) goto l21;
x[jvj+34]=s[x[jvj+61]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+61];
pile[v[22]]=117; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+34,V31)*/
V31=pile[WZ2]; 
if((V31!=V37)) goto l16;
pile[v[22]]=109; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,jvj+34,jvj+35)*/
if((x[jvj+35]!=x[jvj+40])) goto l16;
pile[WZ1]=jvj+32; pile[WZ2]=117; pile[WZ3]=V34; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(109,jvj+32,117,V34,jvj+36)*/
pile[v[22]]=258; pile[WZ1]=jvj+34; pile[WZ2]=jvj+36; pile[WZ3]=jvj+33; 
(*f[663])( );     /*PLUG0(258,jvj+34,jvj+36,jvj+33)*/
l16:x[jvj+61]=t[x[jvj+61]];
goto l15;
l21:x[jvj+63]=t[x[jvj+63]];
goto l19;
l23:x[jvj+64]=t[x[jvj+64]];
l22:if((x[jvj+64]<=0)) goto l35;
x[jvj+44]=s[x[jvj+64]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+64];
pile[v[22]]=117; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+44,V58)*/
V58=pile[WZ2]; 
if((V58!=V61)) goto l23;
pile[v[22]]=109; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(109,jvj+44,jvj+45)*/
if((x[jvj+45]!=x[jvj+46])) goto l23;
pile[v[22]]=jvj+46; pile[WZ1]=V61; pile[WZ2]=jvj+54; 
(*f[133])( );if(v[102]) goto l35;     /*TLDEBL1(jvj+46,V61,jvj+54)*/
V80=x[jvj+42];
V73=g[181];
if((V73<=0)) goto l36;
V74=vg[181];
if((V74!=0)) goto l30;
if((V73<3)) goto l32;
l30:pile[v[22]]=181; pile[WZ1]=10636; pile[WZ2]=0; pile[WZ3]=52; pile[WZ4]=jvj+42; pile[WZ5]=jvj+51; 
(*f[232])( );     /*INTERP3(181,10636,0,52,jvj+42,jvj+51)*/
if((x[jvj+51]==135)) goto l31;
l36:pile[v[22]]=720; pile[WZ1]=jvj+54; 
(*f[71])( );     /*ENLV0(720,jvj+54)*/
pile[v[22]]=159; pile[WZ1]=A; pile[WZ2]=V80; 
(*f[134])( );     /*OTA0(159,A,V80)*/
pile[v[22]]=109; pile[WZ1]=jvj+46; pile[WZ2]=117; pile[WZ3]=V61; pile[WZ4]=jvj+55; 
(*f[192])( );     /*QUADRI4(109,jvj+46,117,V61,jvj+55)*/
pile[v[22]]=334; pile[WZ1]=A; pile[WZ2]=jvj+55; pile[WZ3]=jvj+53; 
(*f[663])( );     /*PLUG0(334,A,jvj+55,jvj+53)*/
pile[v[22]]=365; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(365,jvj+46,jvj+47)*/
x[jvj+65]=x[jvj+47] ;z[jvj+65]=z[jvj+47];
l24:if((x[jvj+65]>0)) goto l25;
V65=x[jvj+46];
pile[v[22]]=363; pile[WZ1]=240; pile[WZ2]=V65; 
(*f[134])( );     /*OTA0(363,240,V65)*/
V67=g[215];
if((V67<=0)) goto l35;
V68=vg[215];
if((V68!=0)) goto l27;
if((V67<3)) goto l29;
l27:pile[v[22]]=215; pile[WZ1]=10636; pile[WZ2]=0; pile[WZ3]=52; pile[WZ4]=jvj+42; pile[WZ5]=jvj+50; 
(*f[232])( );     /*INTERP3(215,10636,0,52,jvj+42,jvj+50)*/
if((x[jvj+50]==135)) goto l28;
l35:x[jvj+52]=t[x[jvj+52]];
goto l33;
l25:x[jvj+48]=s[x[jvj+65]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+65];
pile[v[22]]=720; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(720,jvj+48,jvj+49)*/
if((x[jvj+49]==68)) goto l35;
l26:x[jvj+65]=t[x[jvj+65]];
goto l24;
l28:if((V67<4)) goto l29;
goto l35;
l29:V92=x[jvj+46];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V86; pile[WZ2]=10636; 
(*f[98])( );     /*SRA3(135,V86,10636,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(41,2,V87,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V88,125,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=(-5193); 
(*f[37])( );     /*SRA0(V89,(-5193),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V92; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(20,V92,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V91,(-1318),V93)*/
V93=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V93; pile[WZ2]=363; 
(*f[42])( );     /*SRA1(135,V93,363,V94)*/
V94=pile[WZ3]; 
pile[v[22]]=V94; 
(*f[40])( );     /*SLG0(V94)*/
if((V67!=2)) goto l35;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l35;
l31:if((V73<4)) goto l32;
goto l36;
l32:V102=x[jvj+46];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=10636; 
(*f[98])( );     /*SRA3(135,V96,10636,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,1,V97,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V98,125,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=V99; pile[WZ1]=(-5193); 
(*f[37])( );     /*SRA0(V99,(-5193),V100)*/
V100=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,V102,V100,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V61; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(41,V61,V101,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V103,(-1318),V105)*/
V105=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V105; pile[WZ2]=363; 
(*f[42])( );     /*SRA1(135,V105,363,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; 
(*f[40])( );     /*SLG0(V106)*/
if((V73!=2)) goto l36;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l36;
l34:x[jvj+42]=s[x[jvj+52]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+52];
pile[v[22]]=117; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+42,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,jvj+42,jvj+46)*/
pile[v[22]]=258; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(258,jvj+42,jvj+43)*/
x[jvj+64]=x[jvj+43] ;z[jvj+64]=z[jvj+43];
goto l22;
}
