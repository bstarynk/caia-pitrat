#include "dx.h"
void QTTBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V26=0,V30=0,V34=0,V110=0,V113=0,V116=0,V109=0,V111=0,V112=0,V114=0,V115=0,V33=0,V53=0,V119=0,V122=0,V125=0,V118=0,V120=0,V121=0,V123=0,V124=0,V52=0,V48=0,I=0,V38=0,V79=0,W=0,V143=0,V98=0,V60=0,V104=0,V128=0,V131=0,V134=0,V127=0,V129=0,V130=0,V132=0,V133=0,V103=0,V74=0,P=0,V70=0,V14=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=90;
x[jvj+1]=11186;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1954&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[2063])( );     /*QTTER0()*/
x[jvj+68]=vo[16];z[jvj+68]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(509,jvj+68,jvj+69)*/
x[jvj+53]=vo[14];z[jvj+53]=vz[14];
l46:if((x[jvj+69]>0)) goto l47;
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=221; pile[WZ1]=jvj+13; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(221,jvj+13,jvj+76)*/
l52:if((x[jvj+76]>0)) goto l53;
l55:x[jvj+1]=incon; v[0]=jvj; return;
l1:pile[v[22]]=1214; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[492])( );     /*FIGURE0(1214,jvj+5,jvj+7)*/
if((x[jvj+7]==134)) goto l2;
l13:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,jvj+5,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]==625)) goto l14;
if((x[jvj+19]!=25)) goto l54;
x[jvj+30]=d[20];z[jvj+30]=0;
l19:if((x[jvj+30]<=0)) goto l54;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+5; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+31,jvj+5,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+32,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l21;
l20:x[jvj+30]=t[x[jvj+30]];
goto l19;
l2:pile[v[22]]=1273; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[492])( );     /*FIGURE0(1273,jvj+5,jvj+8)*/
if((x[jvj+8]==134)) goto l4;
goto l13;
l4:x[jvj+82]=t[x[jvj+82]];
l3:if((x[jvj+82]<=0)) goto l54;
x[jvj+2]=s[x[jvj+82]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+82];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(498,jvj+2,jvj+3)*/
pile[v[22]]=436; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(436,jvj+3,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+4,V17)*/
V17=pile[WZ2]; 
if((V17!=(-8106))) goto l13;
pile[v[22]]=1215; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[492])( );     /*FIGURE0(1215,jvj+5,jvj+6)*/
if((x[jvj+6]==134)) goto l1;
goto l13;
l8:if((V33<4)) goto l9;
l22:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; pile[WZ2]=221; pile[WZ3]=jvj+14; pile[WZ4]=jvj+37; 
(*f[2065])( );     /*QRR1(jvj+5,jvj+2,221,jvj+14,jvj+37)*/
pile[v[22]]=498; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(498,jvj+2,jvj+11)*/
pile[v[22]]=436; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,jvj+11,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+12,V30)*/
V30=pile[WZ2]; 
if((V30!=(-8106))) goto l5;
(*f[2063])( );     /*QTTER0()*/
l5:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,jvj+2,jvj+9)*/
pile[v[22]]=436; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,jvj+9,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+10,V26)*/
V26=pile[WZ2]; 
if((V26==(-8106))) goto l20;
l6:pile[v[22]]=jvj+13; pile[WZ1]=334; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+13,334,jvj+2)*/
goto l20;
l9:V110=x[jvj+2];
V113=x[jvj+14];
V116=x[jvj+5];
pile[v[22]]=20; pile[WZ1]=V110; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V110,0,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=V109; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V109,(-2941),V111)*/
V111=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V113; pile[WZ2]=V111; 
(*f[39])( );     /*SDX0(20,V113,V111,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V112,(-740),V114)*/
V114=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V116; pile[WZ2]=V114; 
(*f[39])( );     /*SDX0(20,V116,V114,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=V115; 
(*f[40])( );     /*SLG0(V115)*/
if((V33!=2)) goto l22;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l22;
l11:if((V52<4)) goto l12;
l18:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; pile[WZ2]=221; pile[WZ3]=jvj+16; pile[WZ4]=68; 
(*f[2065])( );     /*QRR1(jvj+5,jvj+2,221,jvj+16,68)*/
pile[v[22]]=jvj+13; pile[WZ1]=334; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+13,334,jvj+2)*/
l16:x[jvj+21]=t[x[jvj+21]];
l15:if((x[jvj+21]<=0)) goto l54;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+5; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+22,jvj+5,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l16;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+23,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l17;
goto l16;
l12:V119=x[jvj+2];
V122=x[jvj+16];
V125=x[jvj+5];
pile[v[22]]=20; pile[WZ1]=V119; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V119,0,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V118,(-2941),V120)*/
V120=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V122; pile[WZ2]=V120; 
(*f[39])( );     /*SDX0(20,V122,V120,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=V121; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V121,(-740),V123)*/
V123=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V125; pile[WZ2]=V123; 
(*f[39])( );     /*SDX0(20,V125,V123,V124)*/
V124=pile[WZ3]; 
pile[v[22]]=V124; 
(*f[40])( );     /*SLG0(V124)*/
if((V52!=2)) goto l18;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l18;
l14:pile[v[22]]=160; pile[WZ1]=jvj+5; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(160,jvj+5,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+20,V48)*/
V48=pile[WZ2]; 
I=V48;
pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(164,jvj+2,V38)*/
V38=pile[WZ2]; 
if((V38>=I)) goto l54;
x[jvj+21]=d[20];z[jvj+21]=0;
goto l15;
l17:pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+22,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+5; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+26,jvj+5,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[887])( );     /*VARND0(jvj+27,jvj+28)*/
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l16;
pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=326; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,326,jvj+78)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+80; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+80)*/
pile[v[22]]=jvj+78; pile[WZ1]=111; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,111,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; pile[WZ2]=103; pile[WZ3]=jvj+81; 
(*f[58])( );     /*TRI3(jvj+79,jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+81; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+81,jvj+16)*/
V52=g[532];
if((V52<=0)) goto l18;
V53=vg[532];
if((V53!=0)) goto l10;
if((V52<3)) goto l12;
l10:pile[v[22]]=532; pile[WZ1]=11186; pile[WZ2]=0; pile[WZ3]=(-657); pile[WZ4]=jvj+2; pile[WZ5]=(-719); pile[v[22]+6]=jvj+16; pile[v[22]+7]=(-601); pile[v[22]+8]=jvj+5; pile[v[22]+9]=jvj+17; 
(*f[188])( );     /*INTERP1(532,11186,0,(-657),jvj+2,(-719),jvj+16,(-601),jvj+5,jvj+17)*/
if((x[jvj+17]==135)) goto l11;
goto l18;
l21:pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(268,jvj+31,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+5; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+34,jvj+5,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[887])( );     /*VARND0(jvj+35,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l20;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+35; pile[WZ2]=jvj+2; pile[WZ3]=jvj+14; pile[WZ4]=jvj+37; 
(*f[2064])( );if(v[102]) goto l20;     /*QV0(jvj+32,jvj+35,jvj+2,jvj+14,jvj+37)*/
V33=g[531];
if((V33<=0)) goto l22;
V34=vg[531];
if((V34!=0)) goto l7;
if((V33<3)) goto l9;
l7:pile[v[22]]=531; pile[WZ1]=11186; pile[WZ2]=0; pile[WZ3]=(-657); pile[WZ4]=jvj+2; pile[WZ5]=(-591); pile[v[22]+6]=jvj+14; pile[v[22]+7]=(-601); pile[v[22]+8]=jvj+5; pile[v[22]+9]=jvj+15; 
(*f[188])( );     /*INTERP1(531,11186,0,(-657),jvj+2,(-591),jvj+14,(-601),jvj+5,jvj+15)*/
if((x[jvj+15]==135)) goto l8;
goto l22;
l24:x[jvj+83]=t[x[jvj+83]];
l23:if((x[jvj+83]<=0)) goto l50;
x[jvj+42]=s[x[jvj+83]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+83];
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=41)) goto l24;
x[jvj+84]=x[jvj+39] ;z[jvj+84]=z[jvj+39];
l25:if((x[jvj+84]<=0)) goto l24;
x[jvj+44]=s[x[jvj+84]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+84];
if((x[jvj+42]==x[jvj+44])) goto l26;
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]==484)) goto l37;
l26:x[jvj+84]=t[x[jvj+84]];
goto l25;
l30:x[jvj+46]=s[x[jvj+86]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+86];
if((x[jvj+46]==x[jvj+38])) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+46,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]!=486)) goto l50;
pile[v[22]]=107; pile[WZ1]=jvj+46; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+46,jvj+49)*/
x[jvj+85]=x[jvj+49] ;z[jvj+85]=z[jvj+49];
l27:if((x[jvj+85]<=0)) goto l50;
x[jvj+50]=s[x[jvj+85]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+85];
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]==41)) goto l31;
l28:x[jvj+85]=t[x[jvj+85]];
goto l27;
l31:x[jvj+86]=t[x[jvj+86]];
l29:if((x[jvj+86]>0)) goto l30;
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+38,jvj+73)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+52; 
(*f[887])( );     /*VARND0(jvj+38,jvj+52)*/
if((x[jvj+52]<=0)) goto l50;
x[jvj+64]=s[x[jvj+52]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+52];
if((x[jvj+73]==484)) goto l37;
if((x[jvj+73]!=22)) goto l50;
pile[v[22]]=107; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+39)*/
for(i=x[jvj+39],V79=0;i>0;i=t[i],V79++)  ;
if((V79!=2)) goto l50;
pile[v[22]]=111; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+38,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=486)) goto l50;
x[jvj+83]=x[jvj+39] ;z[jvj+83]=z[jvj+39];
goto l23;
l33:V143=t[V143];
l32:if((V143<=0)) goto l36;
W=s[V143];
for(a=x[jvj+54];a>0;a=t[a]) if(s[a]==W) goto l33;
pile[v[22]]=jvj+57; pile[WZ1]=jvj+55; 
(*f[68])( );     /*PLUE0(jvj+57,jvj+55)*/
l36:x[jvj+87]=t[x[jvj+87]];
l34:if((x[jvj+87]>0)) goto l35;
x[jvj+90]=x[jvj+57] ;z[jvj+90]=z[jvj+57];
l49:if((x[jvj+90]<=0)) goto l48;
x[jvj+38]=s[x[jvj+90]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+90];
x[jvj+86]=x[jvj+57] ;z[jvj+86]=z[jvj+57];
goto l29;
l35:x[jvj+55]=s[x[jvj+87]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+87];
pile[v[22]]=1232; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(1232,jvj+53,jvj+54)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[887])( );     /*VARND0(jvj+55,jvj+56)*/
V143=x[jvj+56];
goto l32;
l37:x[jvj+63]=0 ;z[jvj+63]=0;
x[jvj+88]=x[jvj+57] ;z[jvj+88]=z[jvj+57];
l38:if((x[jvj+88]>0)) goto l39;
pile[v[22]]=jvj+63; 
(*f[2027])( );if(v[102]) goto l50;     /*PGCDENS0(jvj+63,P)*/
P=pile[WZ1]; 
if((P<=1)) goto l50;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+66; pile[WZ2]=jvj+57; pile[WZ3]=P; pile[WZ4]=jvj+65; pile[WZ5]=jvj+74; pile[v[22]+6]=jvj+75; 
(*f[2067])( );if(v[102]) goto l50;     /*QVV0(jvj+38,jvj+66,jvj+57,P,jvj+65,jvj+74,jvj+75)*/
(*f[1160])( );if(v[102]) goto l50;     /*SUP0(jvj+38,V70)*/
V70=pile[WZ1]; 
if((V70>=P)) goto l50;
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; pile[WZ2]=326; pile[WZ3]=jvj+74; pile[WZ4]=jvj+75; 
(*f[2068])( );     /*QRR2(jvj+64,jvj+65,326,jvj+74,jvj+75)*/
V103=g[533];
if((V103<=0)) goto l51;
V104=vg[533];
if((V104!=0)) goto l43;
if((V103<3)) goto l45;
l43:pile[v[22]]=533; pile[WZ1]=11186; pile[WZ2]=0; pile[WZ3]=61; pile[WZ4]=jvj+64; pile[WZ5]=62; pile[v[22]+6]=jvj+65; pile[v[22]+7]=57; pile[v[22]+8]=jvj+66; pile[v[22]+9]=jvj+67; 
(*f[188])( );     /*INTERP1(533,11186,0,61,jvj+64,62,jvj+65,57,jvj+66,jvj+67)*/
if((x[jvj+67]==135)) goto l44;
l51:pile[v[22]]=jvj+53; pile[WZ1]=334; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(jvj+53,334,jvj+64)*/
l50:x[jvj+90]=t[x[jvj+90]];
goto l49;
l39:x[jvj+58]=s[x[jvj+88]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+88];
if((x[jvj+58]==x[jvj+38])) goto l40;
pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+58,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]!=486)) goto l40;
pile[v[22]]=107; pile[WZ1]=jvj+58; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(107,jvj+58,jvj+61)*/
x[jvj+89]=x[jvj+61] ;z[jvj+89]=z[jvj+61];
l41:if((x[jvj+89]<=0)) goto l40;
x[jvj+62]=s[x[jvj+89]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+89];
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+62,V98)*/
V98=pile[WZ2]; 
V60=V98;
pile[v[22]]=jvj+63; pile[WZ1]=V60; 
(*f[207])( );     /*PLUE2(jvj+63,V60)*/
l42:x[jvj+89]=t[x[jvj+89]];
goto l41;
l40:x[jvj+88]=t[x[jvj+88]];
goto l38;
l44:if((V103<4)) goto l45;
goto l51;
l45:V128=x[jvj+64];
V131=x[jvj+65];
V134=x[jvj+66];
pile[v[22]]=20; pile[WZ1]=V128; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V128,0,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=V127; pile[WZ1]=(-2941); 
(*f[37])( );     /*SRA0(V127,(-2941),V129)*/
V129=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V131; pile[WZ2]=V129; 
(*f[39])( );     /*SDX0(20,V131,V129,V130)*/
V130=pile[WZ3]; 
pile[v[22]]=V130; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V130,(-740),V132)*/
V132=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V134; pile[WZ2]=V132; 
(*f[39])( );     /*SDX0(20,V134,V132,V133)*/
V133=pile[WZ3]; 
pile[v[22]]=V133; 
(*f[40])( );     /*SLG0(V133)*/
if((V103!=2)) goto l51;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l51;
l47:x[jvj+66]=s[x[jvj+69]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+69];
pile[v[22]]=868; pile[WZ1]=jvj+66; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(868,jvj+66,jvj+70)*/
if((x[jvj+70]!=25)) goto l48;
pile[v[22]]=258; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(258,jvj+66,jvj+71)*/
for(i=x[jvj+71],V74=0;i>0;i=t[i],V74++)  ;
if((V74<=1)) goto l48;
pile[v[22]]=jvj+66; pile[WZ1]=jvj+72; 
(*f[2066])( );     /*LISTERMES0(jvj+66,jvj+72)*/
x[jvj+57]=0 ;z[jvj+57]=0;
x[jvj+87]=x[jvj+72] ;z[jvj+87]=z[jvj+72];
goto l34;
l48:x[jvj+69]=t[x[jvj+69]];
goto l46;
l53:x[jvj+5]=s[x[jvj+76]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+76];
pile[v[22]]=258; pile[WZ1]=jvj+5; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(258,jvj+5,jvj+77)*/
for(i=x[jvj+77],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=1)) goto l54;
x[jvj+82]=x[jvj+77] ;z[jvj+82]=z[jvj+77];
goto l3;
l54:x[jvj+76]=t[x[jvj+76]];
goto l52;
}
