#include "dx.h"
void RSNANOU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V76=0,V85=0,V103=0,V107=0;
int R,ANA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=216;
x[jvj+1]=10034;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1560&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; ANA=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l115;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l115;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=55)) goto l115;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,R,jvj+8)*/
x[jvj+4]=0 ;z[jvj+4]=0;
l1:if((x[jvj+8]>0)) goto l2;
x[jvj+161]=x[jvj+4] ;z[jvj+161]=z[jvj+4];
pile[v[22]]=jvj+161; pile[WZ1]=763; pile[WZ2]=jvj+162; 
(*f[300])( );     /*TRI10(jvj+161,763,jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=R; pile[WZ2]=576; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+162,R,576,jvj+9)*/
pile[v[22]]=ANA; pile[WZ1]=1212; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(ANA,1212,jvj+9)*/
if((x[jvj+161]<=0)) goto l75;
x[jvj+93]=s[x[jvj+161]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+161];
pile[v[22]]=1260; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[33])( );     /*FNDE0(1260,jvj+93,jvj+94)*/
l46:if((x[jvj+94]<=0)) goto l75;
x[jvj+10]=s[x[jvj+94]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+94];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+10,jvj+78)*/
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]==1280)) goto l48;
if((x[jvj+79]==625)) goto l18;
if((x[jvj+79]!=25)) goto l47;
pile[v[22]]=191; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(191,jvj+10,jvj+11)*/
if((x[jvj+11]==68)) goto l47;
l53:x[jvj+86]=d[20];z[jvj+86]=0;
l52:if((x[jvj+86]<=0)) goto l47;
x[jvj+87]=s[x[jvj+86]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+86];
pile[v[22]]=jvj+87; pile[WZ1]=jvj+10; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(jvj+87,jvj+10,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+23,jvj+88)*/
if((x[jvj+88]!=484)) goto l54;
pile[v[22]]=268; pile[WZ1]=jvj+87; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(268,jvj+87,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+10; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(jvj+89,jvj+10,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+90,jvj+91)*/
if(x[jvj+91]!=96&&x[jvj+91]!=89&&x[jvj+91]!=41&&x[jvj+91]!=20&&x[jvj+91]!=128&&x[jvj+91]!=570&&x[jvj+91]!=1317) goto l54;
x[jvj+192]=x[jvj+161] ;z[jvj+192]=z[jvj+161];
l7:if((x[jvj+192]>0)) goto l8;
pile[v[22]]=158; pile[WZ1]=25; pile[WZ2]=218; pile[WZ3]=jvj+23; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(158,25,218,jvj+23,jvj+92)*/
x[jvj+25]=d[20];z[jvj+25]=0;
l10:if((x[jvj+25]>0)) goto l11;
pile[v[22]]=jvj+9; pile[WZ1]=1260; pile[WZ2]=jvj+92; 
(*f[36])( );     /*PLUSC0(jvj+9,1260,jvj+92)*/
l54:x[jvj+86]=t[x[jvj+86]];
goto l52;
l2:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1755])( );     /*EXTRET0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=1260; pile[WZ2]=jvj+5; 
(*f[300])( );     /*TRI10(jvj+3,1260,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+8]=t[x[jvj+8]];
goto l1;
l4:x[jvj+191]=t[x[jvj+191]];
l3:if((x[jvj+191]<=0)) goto l54;
x[jvj+14]=s[x[jvj+191]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+191];
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=25)) goto l4;
x[jvj+17]=d[20];z[jvj+17]=0;
l5:if((x[jvj+17]<=0)) goto l4;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+18,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+14; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+19,jvj+14,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+20,jvj+21)*/
if(x[jvj+21]!=96&&x[jvj+21]!=89&&x[jvj+21]!=41&&x[jvj+21]!=20&&x[jvj+21]!=128&&x[jvj+21]!=570&&x[jvj+21]!=1317) goto l6;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+14; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+18,jvj+14,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+22,jvj+24)*/
if((x[jvj+24]==135)) goto l9;
l6:x[jvj+17]=t[x[jvj+17]];
goto l5;
l8:x[jvj+12]=s[x[jvj+192]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+192];
pile[v[22]]=1260; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1260,jvj+12,jvj+13)*/
x[jvj+191]=x[jvj+13] ;z[jvj+191]=z[jvj+13];
goto l3;
l9:x[jvj+192]=t[x[jvj+192]];
goto l7;
l11:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+26,jvj+27)*/
x[jvj+193]=x[jvj+161] ;z[jvj+193]=z[jvj+161];
l13:if((x[jvj+193]<=0)) goto l12;
x[jvj+28]=s[x[jvj+193]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+193];
pile[v[22]]=1260; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1260,jvj+28,jvj+29)*/
x[jvj+194]=x[jvj+29] ;z[jvj+194]=z[jvj+29];
l14:if((x[jvj+194]>0)) goto l15;
x[jvj+193]=t[x[jvj+193]];
goto l13;
l12:x[jvj+25]=t[x[jvj+25]];
goto l10;
l15:x[jvj+30]=s[x[jvj+194]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+194];
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=25)) goto l16;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+27,jvj+30,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+33,jvj+34)*/
if(x[jvj+34]!=96&&x[jvj+34]!=89&&x[jvj+34]!=41&&x[jvj+34]!=20&&x[jvj+34]!=128&&x[jvj+34]!=570&&x[jvj+34]!=1317) goto l16;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+30; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+26,jvj+30,jvj+35)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+35,jvj+36)*/
if((x[jvj+36]==135)) goto l17;
l16:x[jvj+194]=t[x[jvj+194]];
goto l14;
l17:pile[v[22]]=jvj+30; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+30,191,68)*/
x[jvj+163]=1260 ;z[jvj+163]=1260;
pile[v[22]]=jvj+163; pile[WZ1]=jvj+92; pile[WZ2]=jvj+164; 
(*f[33])( );     /*FNDE0(jvj+163,jvj+92,jvj+164)*/
l116:if((x[jvj+164]>0)) goto l117;
pile[v[22]]=jvj+92; pile[WZ1]=jvj+163; pile[WZ2]=jvj+33; 
(*f[774])( );     /*TJPLUS0(jvj+92,jvj+163,jvj+33)*/
goto l16;
l18:pile[v[22]]=191; pile[WZ1]=jvj+10; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(191,jvj+10,jvj+37)*/
if((x[jvj+37]==68)) goto l47;
l50:x[jvj+82]=d[20];z[jvj+82]=0;
l49:if((x[jvj+82]<=0)) goto l47;
x[jvj+83]=s[x[jvj+82]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+82];
pile[v[22]]=jvj+83; pile[WZ1]=jvj+10; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+83,jvj+10,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+46,jvj+84)*/
if((x[jvj+84]!=484)) goto l51;
x[jvj+196]=x[jvj+161] ;z[jvj+196]=z[jvj+161];
l23:if((x[jvj+196]>0)) goto l24;
pile[v[22]]=158; pile[WZ1]=625; pile[WZ2]=218; pile[WZ3]=jvj+46; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(158,625,218,jvj+46,jvj+85)*/
x[jvj+48]=d[20];z[jvj+48]=0;
l26:if((x[jvj+48]>0)) goto l27;
pile[v[22]]=jvj+9; pile[WZ1]=1260; pile[WZ2]=jvj+85; 
(*f[36])( );     /*PLUSC0(jvj+9,1260,jvj+85)*/
l51:x[jvj+82]=t[x[jvj+82]];
goto l49;
l20:x[jvj+195]=t[x[jvj+195]];
l19:if((x[jvj+195]<=0)) goto l51;
x[jvj+40]=s[x[jvj+195]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+195];
pile[v[22]]=111; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+40,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=625)) goto l20;
x[jvj+43]=d[20];z[jvj+43]=0;
l21:if((x[jvj+43]<=0)) goto l20;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+40; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+44,jvj+40,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+45; pile[WZ2]=jvj+47; 
(*f[760])( );     /*MEMEX0(jvj+46,jvj+45,jvj+47)*/
if((x[jvj+47]==135)) goto l25;
l22:x[jvj+43]=t[x[jvj+43]];
goto l21;
l24:x[jvj+38]=s[x[jvj+196]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+196];
pile[v[22]]=1260; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1260,jvj+38,jvj+39)*/
x[jvj+195]=x[jvj+39] ;z[jvj+195]=z[jvj+39];
goto l19;
l25:x[jvj+196]=t[x[jvj+196]];
goto l23;
l27:x[jvj+49]=s[x[jvj+48]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+48];
pile[v[22]]=268; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(268,jvj+49,jvj+50)*/
x[jvj+197]=x[jvj+161] ;z[jvj+197]=z[jvj+161];
l29:if((x[jvj+197]<=0)) goto l28;
x[jvj+51]=s[x[jvj+197]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+197];
pile[v[22]]=1260; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(1260,jvj+51,jvj+52)*/
x[jvj+198]=x[jvj+52] ;z[jvj+198]=z[jvj+52];
l30:if((x[jvj+198]>0)) goto l31;
x[jvj+197]=t[x[jvj+197]];
goto l29;
l28:x[jvj+48]=t[x[jvj+48]];
goto l26;
l31:x[jvj+53]=s[x[jvj+198]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+198];
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=625)) goto l32;
pile[v[22]]=jvj+50; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+50,jvj+53,jvj+56)*/
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+56,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(160,jvj+53,jvj+57)*/
pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+57,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=jvj+49; pile[WZ1]=jvj+53; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+49,jvj+53,jvj+58)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[760])( );     /*MEMEX0(jvj+46,jvj+58,jvj+59)*/
if((x[jvj+59]==135)) goto l33;
l32:x[jvj+198]=t[x[jvj+198]];
goto l30;
l33:pile[v[22]]=jvj+53; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+53,191,68)*/
x[jvj+167]=1260 ;z[jvj+167]=1260;
pile[v[22]]=jvj+167; pile[WZ1]=jvj+85; pile[WZ2]=jvj+168; 
(*f[33])( );     /*FNDE0(jvj+167,jvj+85,jvj+168)*/
l118:if((x[jvj+168]>0)) goto l119;
pile[v[22]]=jvj+85; pile[WZ1]=jvj+167; pile[WZ2]=jvj+53; 
(*f[774])( );     /*TJPLUS0(jvj+85,jvj+167,jvj+53)*/
goto l32;
l37:x[jvj+61]=s[x[jvj+200]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+200];
pile[v[22]]=1260; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(1260,jvj+61,jvj+62)*/
x[jvj+199]=x[jvj+62] ;z[jvj+199]=z[jvj+62];
l34:if((x[jvj+199]<=0)) goto l47;
x[jvj+63]=s[x[jvj+199]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+199];
pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+63,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]!=1280)) goto l35;
pile[v[22]]=102; pile[WZ1]=jvj+63; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+63,jvj+66)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+66; pile[WZ2]=jvj+68; 
(*f[760])( );     /*MEMEX0(jvj+67,jvj+66,jvj+68)*/
if((x[jvj+68]==135)) goto l39;
l35:x[jvj+199]=t[x[jvj+199]];
goto l34;
l39:x[jvj+200]=t[x[jvj+200]];
l36:if((x[jvj+200]>0)) goto l37;
pile[v[22]]=158; pile[WZ1]=1280; pile[WZ2]=218; pile[WZ3]=jvj+67; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(158,1280,218,jvj+67,jvj+81)*/
x[jvj+201]=x[jvj+161] ;z[jvj+201]=z[jvj+161];
l40:if((x[jvj+201]>0)) goto l41;
pile[v[22]]=jvj+9; pile[WZ1]=1260; pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(jvj+9,1260,jvj+81)*/
l47:x[jvj+94]=t[x[jvj+94]];
goto l46;
l41:x[jvj+69]=s[x[jvj+201]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+201];
pile[v[22]]=1260; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(1260,jvj+69,jvj+70)*/
x[jvj+202]=x[jvj+70] ;z[jvj+202]=z[jvj+70];
l42:if((x[jvj+202]>0)) goto l43;
x[jvj+201]=t[x[jvj+201]];
goto l40;
l43:x[jvj+71]=s[x[jvj+202]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+202];
pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+71,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]!=1280)) goto l44;
pile[v[22]]=103; pile[WZ1]=jvj+71; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+71,jvj+74)*/
pile[v[22]]=130; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+74,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+71; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,jvj+71,jvj+75)*/
pile[v[22]]=130; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+75,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+71; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+71,jvj+76)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[760])( );     /*MEMEX0(jvj+67,jvj+76,jvj+77)*/
if((x[jvj+77]==135)) goto l45;
l44:x[jvj+202]=t[x[jvj+202]];
goto l42;
l45:pile[v[22]]=jvj+71; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+71,191,68)*/
x[jvj+171]=1260 ;z[jvj+171]=1260;
pile[v[22]]=jvj+171; pile[WZ1]=jvj+81; pile[WZ2]=jvj+172; 
(*f[33])( );     /*FNDE0(jvj+171,jvj+81,jvj+172)*/
l120:if((x[jvj+172]>0)) goto l121;
pile[v[22]]=jvj+81; pile[WZ1]=jvj+171; pile[WZ2]=jvj+71; 
(*f[774])( );     /*TJPLUS0(jvj+81,jvj+171,jvj+71)*/
goto l44;
l48:pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+10,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+67,jvj+80)*/
if((x[jvj+80]!=484)) goto l47;
pile[v[22]]=191; pile[WZ1]=jvj+10; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(191,jvj+10,jvj+60)*/
if((x[jvj+60]==68)) goto l47;
l38:x[jvj+200]=x[jvj+161] ;z[jvj+200]=z[jvj+161];
goto l36;
l55:if((x[jvj+161]<=0)) goto l112;
x[jvj+135]=s[x[jvj+161]] ;z[jvj+135]=(x[jvj+135]<=sepcte) ? x[jvj+135] : z[jvj+161];
pile[v[22]]=1260; pile[WZ1]=jvj+135; pile[WZ2]=jvj+136; 
(*f[33])( );     /*FNDE0(1260,jvj+135,jvj+136)*/
x[jvj+137]=d[198];z[jvj+137]=0;
l93:if((x[jvj+137]<=0)) goto l112;
x[jvj+112]=s[x[jvj+137]] ;z[jvj+112]=(x[jvj+112]<=sepcte) ? x[jvj+112] : z[jvj+137];
pile[v[22]]=jvj+112; pile[WZ1]=1566; pile[WZ2]=jvj+113; 
(*f[33])( );     /*FNDE0(jvj+112,1566,jvj+113)*/
pile[v[22]]=218; pile[WZ1]=jvj+112; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(218,jvj+112,jvj+114)*/
x[jvj+207]=x[jvj+136] ;z[jvj+207]=z[jvj+136];
l72:if((x[jvj+207]<=0)) goto l94;
x[jvj+95]=s[x[jvj+207]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+207];
pile[v[22]]=191; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(191,jvj+95,jvj+96)*/
if((x[jvj+96]==68)) goto l73;
l74:pile[v[22]]=jvj+95; pile[WZ1]=jvj+115; pile[WZ2]=jvj+103; 
(*f[1756])( );if(v[102]) goto l73;     /*AIDETVAR0(jvj+95,jvj+115,jvj+103)*/
for(a=x[jvj+113];a>0;a=t[a]) if(s[a]==x[jvj+115]) goto l62;
l73:x[jvj+207]=t[x[jvj+207]];
goto l72;
l59:pile[v[22]]=jvj+103; pile[WZ1]=jvj+102; pile[WZ2]=jvj+104; 
(*f[760])( );     /*MEMEX0(jvj+103,jvj+102,jvj+104)*/
if((x[jvj+104]==135)) goto l63;
l57:x[jvj+203]=t[x[jvj+203]];
l56:if((x[jvj+203]<=0)) goto l73;
x[jvj+97]=s[x[jvj+203]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+203];
pile[v[22]]=191; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(191,jvj+97,jvj+98)*/
if((x[jvj+98]==68)) goto l57;
l58:pile[v[22]]=jvj+97; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[1756])( );if(v[102]) goto l57;     /*AIDETVAR0(jvj+97,jvj+101,jvj+102)*/
for(a=x[jvj+113];a>0;a=t[a]) if(s[a]==x[jvj+101]) goto l59;
goto l57;
l61:x[jvj+99]=s[x[jvj+204]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+204];
if((x[jvj+99]==x[jvj+135])) goto l63;
pile[v[22]]=1260; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(1260,jvj+99,jvj+100)*/
x[jvj+203]=x[jvj+100] ;z[jvj+203]=z[jvj+100];
goto l56;
l62:x[jvj+204]=x[jvj+161] ;z[jvj+204]=z[jvj+161];
l60:if((x[jvj+204]>0)) goto l61;
pile[v[22]]=158; pile[WZ1]=jvj+114; pile[WZ2]=218; pile[WZ3]=jvj+103; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(158,jvj+114,218,jvj+103,jvj+116)*/
x[jvj+205]=x[jvj+161] ;z[jvj+205]=z[jvj+161];
l64:if((x[jvj+205]>0)) goto l65;
pile[v[22]]=jvj+9; pile[WZ1]=1260; pile[WZ2]=jvj+116; 
(*f[36])( );     /*PLUSC0(jvj+9,1260,jvj+116)*/
goto l73;
l63:x[jvj+204]=t[x[jvj+204]];
goto l60;
l65:x[jvj+107]=s[x[jvj+205]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+205];
pile[v[22]]=1260; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[33])( );     /*FNDE0(1260,jvj+107,jvj+108)*/
x[jvj+206]=x[jvj+108] ;z[jvj+206]=z[jvj+108];
l66:if((x[jvj+206]>0)) goto l67;
x[jvj+205]=t[x[jvj+205]];
goto l64;
l67:x[jvj+105]=s[x[jvj+206]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+206];
pile[v[22]]=191; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(191,jvj+105,jvj+106)*/
if((x[jvj+106]==68)) goto l68;
l69:pile[v[22]]=jvj+105; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[1756])( );if(v[102]) goto l68;     /*AIDETVAR0(jvj+105,jvj+109,jvj+110)*/
for(a=x[jvj+113];a>0;a=t[a]) if(s[a]==x[jvj+109]) goto l70;
l68:x[jvj+206]=t[x[jvj+206]];
goto l66;
l70:pile[v[22]]=jvj+103; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[760])( );     /*MEMEX0(jvj+103,jvj+110,jvj+111)*/
if((x[jvj+111]==135)) goto l71;
goto l68;
l71:pile[v[22]]=jvj+105; pile[WZ1]=191; pile[WZ2]=365; 
(*f[35])( );     /*CHGC1(jvj+105,191,365)*/
x[jvj+175]=1260 ;z[jvj+175]=1260;
pile[v[22]]=jvj+175; pile[WZ1]=jvj+116; pile[WZ2]=jvj+176; 
(*f[33])( );     /*FNDE0(jvj+175,jvj+116,jvj+176)*/
l122:if((x[jvj+176]>0)) goto l123;
pile[v[22]]=jvj+116; pile[WZ1]=jvj+175; pile[WZ2]=jvj+105; 
(*f[774])( );     /*TJPLUS0(jvj+116,jvj+175,jvj+105)*/
goto l68;
l75:if((x[jvj+161]<=0)) goto l55;
x[jvj+130]=s[x[jvj+161]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+161];
pile[v[22]]=1260; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[33])( );     /*FNDE0(1260,jvj+130,jvj+131)*/
x[jvj+209]=x[jvj+161] ;z[jvj+209]=z[jvj+161];
l79:if((x[jvj+209]>0)) goto l80;
pile[v[22]]=1571; pile[WZ1]=158; pile[WZ2]=jvj+134; 
(*f[54])( );     /*TRI1(1571,158,jvj+134)*/
l90:if((x[jvj+131]<=0)) goto l55;
x[jvj+117]=s[x[jvj+131]] ;z[jvj+117]=(x[jvj+117]<=sepcte) ? x[jvj+117] : z[jvj+131];
pile[v[22]]=191; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(191,jvj+117,jvj+118)*/
if((x[jvj+118]==68)) goto l91;
l92:pile[v[22]]=jvj+117; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[1756])( );if(v[102]) goto l91;     /*AIDETVAR0(jvj+117,jvj+132,jvj+133)*/
if((x[jvj+132]==25)) goto l84;
l91:x[jvj+131]=t[x[jvj+131]];
goto l90;
l80:x[jvj+121]=s[x[jvj+209]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+209];
if((x[jvj+121]==x[jvj+130])) goto l81;
pile[v[22]]=1260; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[33])( );     /*FNDE0(1260,jvj+121,jvj+122)*/
x[jvj+208]=x[jvj+122] ;z[jvj+208]=z[jvj+122];
l76:if((x[jvj+208]<=0)) goto l55;
x[jvj+119]=s[x[jvj+208]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+208];
pile[v[22]]=191; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(191,jvj+119,jvj+120)*/
if((x[jvj+120]==68)) goto l77;
l78:pile[v[22]]=jvj+119; pile[WZ1]=jvj+123; 
(*f[1757])( );if(v[102]) goto l77;     /*AIDETVAR1(jvj+119,jvj+123)*/
if((x[jvj+123]==25)) goto l81;
l77:x[jvj+208]=t[x[jvj+208]];
goto l76;
l81:x[jvj+209]=t[x[jvj+209]];
goto l79;
l83:x[jvj+126]=s[x[jvj+210]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+210];
pile[v[22]]=1260; pile[WZ1]=jvj+126; pile[WZ2]=jvj+127; 
(*f[33])( );     /*FNDE0(1260,jvj+126,jvj+127)*/
x[jvj+211]=x[jvj+127] ;z[jvj+211]=z[jvj+127];
l85:if((x[jvj+211]>0)) goto l86;
x[jvj+210]=t[x[jvj+210]];
l82:if((x[jvj+210]>0)) goto l83;
pile[v[22]]=jvj+9; pile[WZ1]=1260; pile[WZ2]=jvj+134; 
(*f[36])( );     /*PLUSC0(jvj+9,1260,jvj+134)*/
goto l91;
l84:x[jvj+210]=x[jvj+161] ;z[jvj+210]=z[jvj+161];
goto l82;
l86:x[jvj+124]=s[x[jvj+211]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+211];
pile[v[22]]=191; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(191,jvj+124,jvj+125)*/
if((x[jvj+125]==68)) goto l87;
l88:pile[v[22]]=jvj+124; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[1756])( );if(v[102]) goto l87;     /*AIDETVAR0(jvj+124,jvj+128,jvj+129)*/
if((x[jvj+128]==25)) goto l89;
l87:x[jvj+211]=t[x[jvj+211]];
goto l85;
l89:pile[v[22]]=jvj+124; pile[WZ1]=191; pile[WZ2]=365; 
(*f[35])( );     /*CHGC1(jvj+124,191,365)*/
x[jvj+179]=1260 ;z[jvj+179]=1260;
pile[v[22]]=jvj+179; pile[WZ1]=jvj+134; pile[WZ2]=jvj+180; 
(*f[33])( );     /*FNDE0(jvj+179,jvj+134,jvj+180)*/
l124:if((x[jvj+180]>0)) goto l125;
pile[v[22]]=jvj+134; pile[WZ1]=jvj+179; pile[WZ2]=jvj+129; 
(*f[774])( );     /*TJPLUS0(jvj+134,jvj+179,jvj+129)*/
goto l87;
l94:x[jvj+137]=t[x[jvj+137]];
goto l93;
l99:x[jvj+142]=s[x[jvj+213]] ;z[jvj+142]=(x[jvj+142]<=sepcte) ? x[jvj+142] : z[jvj+213];
if((x[jvj+142]==x[jvj+158])) goto l100;
pile[v[22]]=1260; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[33])( );     /*FNDE0(1260,jvj+142,jvj+143)*/
x[jvj+212]=x[jvj+143] ;z[jvj+212]=z[jvj+143];
l95:if((x[jvj+212]<=0)) goto l114;
x[jvj+140]=s[x[jvj+212]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+212];
pile[v[22]]=191; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l97;     /*FNDO0(191,jvj+140,jvj+141)*/
if((x[jvj+141]==68)) goto l96;
l97:pile[v[22]]=jvj+140; pile[WZ1]=jvj+144; 
(*f[1757])( );if(v[102]) goto l96;     /*AIDETVAR1(jvj+140,jvj+144)*/
for(a=x[jvj+152];a>0;a=t[a]) if(s[a]==x[jvj+144]) goto l100;
l96:x[jvj+212]=t[x[jvj+212]];
goto l95;
l100:x[jvj+213]=t[x[jvj+213]];
l98:if((x[jvj+213]>0)) goto l99;
pile[v[22]]=jvj+153; pile[WZ1]=158; pile[WZ2]=jvj+156; 
(*f[54])( );     /*TRI1(jvj+153,158,jvj+156)*/
x[jvj+216]=x[jvj+159] ;z[jvj+216]=z[jvj+159];
l109:if((x[jvj+216]<=0)) goto l114;
x[jvj+138]=s[x[jvj+216]] ;z[jvj+138]=(x[jvj+138]<=sepcte) ? x[jvj+138] : z[jvj+216];
pile[v[22]]=191; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(191,jvj+138,jvj+139)*/
if((x[jvj+139]==68)) goto l110;
l111:pile[v[22]]=jvj+138; pile[WZ1]=jvj+154; pile[WZ2]=jvj+155; 
(*f[1756])( );if(v[102]) goto l110;     /*AIDETVAR0(jvj+138,jvj+154,jvj+155)*/
for(a=x[jvj+152];a>0;a=t[a]) if(s[a]==x[jvj+154]) goto l103;
l110:x[jvj+216]=t[x[jvj+216]];
goto l109;
l102:x[jvj+147]=s[x[jvj+214]] ;z[jvj+147]=(x[jvj+147]<=sepcte) ? x[jvj+147] : z[jvj+214];
pile[v[22]]=1260; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[33])( );     /*FNDE0(1260,jvj+147,jvj+148)*/
x[jvj+215]=x[jvj+148] ;z[jvj+215]=z[jvj+148];
l104:if((x[jvj+215]>0)) goto l105;
x[jvj+214]=t[x[jvj+214]];
l101:if((x[jvj+214]>0)) goto l102;
pile[v[22]]=jvj+9; pile[WZ1]=1260; pile[WZ2]=jvj+156; 
(*f[36])( );     /*PLUSC0(jvj+9,1260,jvj+156)*/
goto l110;
l103:x[jvj+214]=x[jvj+161] ;z[jvj+214]=z[jvj+161];
goto l101;
l105:x[jvj+145]=s[x[jvj+215]] ;z[jvj+145]=(x[jvj+145]<=sepcte) ? x[jvj+145] : z[jvj+215];
pile[v[22]]=191; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l107;     /*FNDO0(191,jvj+145,jvj+146)*/
if((x[jvj+146]==68)) goto l106;
l107:pile[v[22]]=jvj+145; pile[WZ1]=jvj+149; pile[WZ2]=jvj+150; 
(*f[1756])( );if(v[102]) goto l106;     /*AIDETVAR0(jvj+145,jvj+149,jvj+150)*/
for(a=x[jvj+152];a>0;a=t[a]) if(s[a]==x[jvj+149]) goto l108;
l106:x[jvj+215]=t[x[jvj+215]];
goto l104;
l108:pile[v[22]]=jvj+145; pile[WZ1]=191; pile[WZ2]=365; 
(*f[35])( );     /*CHGC1(jvj+145,191,365)*/
x[jvj+183]=1260 ;z[jvj+183]=1260;
pile[v[22]]=jvj+183; pile[WZ1]=jvj+156; pile[WZ2]=jvj+184; 
(*f[33])( );     /*FNDE0(jvj+183,jvj+156,jvj+184)*/
l126:if((x[jvj+184]>0)) goto l127;
pile[v[22]]=jvj+156; pile[WZ1]=jvj+183; pile[WZ2]=jvj+145; 
(*f[774])( );     /*TJPLUS0(jvj+156,jvj+183,jvj+145)*/
l128:x[jvj+187]=1261 ;z[jvj+187]=1261;
pile[v[22]]=jvj+187; pile[WZ1]=jvj+156; pile[WZ2]=jvj+188; 
(*f[33])( );     /*FNDE0(jvj+187,jvj+156,jvj+188)*/
l129:if((x[jvj+188]>0)) goto l130;
pile[v[22]]=jvj+156; pile[WZ1]=jvj+187; pile[WZ2]=jvj+150; 
(*f[774])( );     /*TJPLUS0(jvj+156,jvj+187,jvj+150)*/
goto l106;
l112:pile[v[22]]=1260; pile[WZ1]=jvj+9; pile[WZ2]=jvj+157; 
(*f[33])( );     /*FNDE0(1260,jvj+9,jvj+157)*/
if((x[jvj+157]!=0)) goto l115;
if((x[jvj+161]<=0)) goto l115;
x[jvj+158]=s[x[jvj+161]] ;z[jvj+158]=(x[jvj+158]<=sepcte) ? x[jvj+158] : z[jvj+161];
pile[WZ1]=jvj+158; pile[WZ2]=jvj+159; 
(*f[33])( );     /*FNDE0(1260,jvj+158,jvj+159)*/
x[jvj+160]=d[198];z[jvj+160]=0;
l113:if((x[jvj+160]<=0)) goto l115;
x[jvj+151]=s[x[jvj+160]] ;z[jvj+151]=(x[jvj+151]<=sepcte) ? x[jvj+151] : z[jvj+160];
pile[v[22]]=jvj+151; pile[WZ1]=1566; pile[WZ2]=jvj+152; 
(*f[33])( );     /*FNDE0(jvj+151,1566,jvj+152)*/
pile[v[22]]=218; pile[WZ1]=jvj+151; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(218,jvj+151,jvj+153)*/
x[jvj+213]=x[jvj+161] ;z[jvj+213]=z[jvj+161];
goto l98;
l114:x[jvj+160]=t[x[jvj+160]];
goto l113;
l115:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l117:x[jvj+165]=s[x[jvj+164]] ;z[jvj+165]=(x[jvj+165]<=sepcte) ? x[jvj+165] : z[jvj+164];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+165; pile[WZ2]=jvj+166; 
(*f[760])( );     /*MEMEX0(jvj+33,jvj+165,jvj+166)*/
if((x[jvj+166]==135)) goto l16;
x[jvj+164]=t[x[jvj+164]];
goto l116;
l119:x[jvj+169]=s[x[jvj+168]] ;z[jvj+169]=(x[jvj+169]<=sepcte) ? x[jvj+169] : z[jvj+168];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+169; pile[WZ2]=jvj+170; 
(*f[760])( );     /*MEMEX0(jvj+53,jvj+169,jvj+170)*/
if((x[jvj+170]==135)) goto l32;
x[jvj+168]=t[x[jvj+168]];
goto l118;
l121:x[jvj+173]=s[x[jvj+172]] ;z[jvj+173]=(x[jvj+173]<=sepcte) ? x[jvj+173] : z[jvj+172];
pile[v[22]]=jvj+71; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[760])( );     /*MEMEX0(jvj+71,jvj+173,jvj+174)*/
if((x[jvj+174]==135)) goto l44;
x[jvj+172]=t[x[jvj+172]];
goto l120;
l123:x[jvj+177]=s[x[jvj+176]] ;z[jvj+177]=(x[jvj+177]<=sepcte) ? x[jvj+177] : z[jvj+176];
pile[v[22]]=jvj+105; pile[WZ1]=jvj+177; pile[WZ2]=jvj+178; 
(*f[760])( );     /*MEMEX0(jvj+105,jvj+177,jvj+178)*/
if((x[jvj+178]==135)) goto l68;
x[jvj+176]=t[x[jvj+176]];
goto l122;
l125:x[jvj+181]=s[x[jvj+180]] ;z[jvj+181]=(x[jvj+181]<=sepcte) ? x[jvj+181] : z[jvj+180];
pile[v[22]]=jvj+129; pile[WZ1]=jvj+181; pile[WZ2]=jvj+182; 
(*f[760])( );     /*MEMEX0(jvj+129,jvj+181,jvj+182)*/
if((x[jvj+182]==135)) goto l87;
x[jvj+180]=t[x[jvj+180]];
goto l124;
l127:x[jvj+185]=s[x[jvj+184]] ;z[jvj+185]=(x[jvj+185]<=sepcte) ? x[jvj+185] : z[jvj+184];
pile[v[22]]=jvj+145; pile[WZ1]=jvj+185; pile[WZ2]=jvj+186; 
(*f[760])( );     /*MEMEX0(jvj+145,jvj+185,jvj+186)*/
if((x[jvj+186]==135)) goto l128;
x[jvj+184]=t[x[jvj+184]];
goto l126;
l130:x[jvj+189]=s[x[jvj+188]] ;z[jvj+189]=(x[jvj+189]<=sepcte) ? x[jvj+189] : z[jvj+188];
pile[v[22]]=jvj+150; pile[WZ1]=jvj+189; pile[WZ2]=jvj+190; 
(*f[760])( );     /*MEMEX0(jvj+150,jvj+189,jvj+190)*/
if((x[jvj+190]==135)) goto l106;
x[jvj+188]=t[x[jvj+188]];
goto l129;
}
