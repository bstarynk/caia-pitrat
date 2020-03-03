#include "dx.h"
void ISLAV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,V35=0,V44=0,V43=0,V48=0,V49=0,V12=0,V23=0,V15=0,V46=0,V22=0,V24=0,V47=0,V56=0,V51=0,V62=0,V63=0,W=0,V117=0,V115=0,V105=0,V108=0,V107=0,VA=0,V78=0,V81=0,V84=0,V83=0;
int X,S,V,K;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=166;
x[jvj+1]=10017;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2012&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; S=pile[v[22]+1]; V=pile[v[22]+2]; K=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+18]=x[K] ;z[jvj+18]=z[K];
l37:x[jvj+98]=x[jvj+42]=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,X,jvj+16)*/
if((x[jvj+16]!=69)) goto l22;
pile[v[22]]=108; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(108,X,jvj+17)*/
for(i=x[jvj+17],V12=0;i>0;i=t[i],V12++)  ;
if((V12!=2)) goto l22;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
x[jvj+160]=x[jvj+17] ;z[jvj+160]=z[jvj+17];
l12:if((x[jvj+160]<=0)) goto l22;
x[jvj+20]=s[x[jvj+160]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+160];
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+21,jvj+22)*/
x[jvj+71]=x[jvj+22] ;z[jvj+71]=z[jvj+22];
V23=x[jvj+71];
if((V15=w[x[jvj+71]][1])==incon) goto l13;
if((V15==23)) goto l13;
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+20,jvj+2)*/
x[jvj+161]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+2,jvj+6)*/
if(x[jvj+6]!=41&&x[jvj+6]!=20&&x[jvj+6]!=89&&x[jvj+6]!=96&&x[jvj+6]!=1317) goto l3;
x[jvj+161]=x[jvj+6] ;z[jvj+161]=z[jvj+6];
l3:if((x[jvj+6]!=21)) goto l4;
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+2,V36)*/
V36=pile[WZ2]; 
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(283,jvj+3,jvj+4)*/
x[jvj+158]=x[jvj+4] ;z[jvj+158]=z[jvj+4];
l1:if((x[jvj+158]<=0)) goto l4;
x[jvj+5]=s[x[jvj+158]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+158];
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+5,V35)*/
V35=pile[WZ2]; 
if((V35!=V36)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+5,jvj+7)*/
x[jvj+161]=x[jvj+7] ;z[jvj+161]=z[jvj+7];
l14:if((x[jvj+161]==(-99999998))) goto l13;
x[jvj+14]=x[jvj+161] ;z[jvj+14]=z[jvj+161];
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+14,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+23)*/
x[jvj+162]=x[jvj+17] ;z[jvj+162]=z[jvj+17];
l15:if((x[jvj+162]<=0)) goto l13;
x[jvj+24]=s[x[jvj+162]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+162];
if((x[jvj+20]==x[jvj+24])) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+25,jvj+26)*/
x[jvj+77]=x[jvj+26] ;z[jvj+77]=z[jvj+26];
V22=x[jvj+77];
if((V22<=V23)) goto l16;
if((V24=w[x[jvj+77]][1])==incon) goto l16;
if((V24==23)) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+24; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+24,jvj+8)*/
x[jvj+163]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+8,jvj+12)*/
if(x[jvj+12]!=41&&x[jvj+12]!=20&&x[jvj+12]!=89&&x[jvj+12]!=96&&x[jvj+12]!=1317) goto l8;
x[jvj+163]=x[jvj+12] ;z[jvj+163]=z[jvj+12];
l8:if((x[jvj+12]!=21)) goto l9;
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+8,V44)*/
V44=pile[WZ2]; 
x[jvj+9]=vo[15];z[jvj+9]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(283,jvj+9,jvj+10)*/
x[jvj+159]=x[jvj+10] ;z[jvj+159]=z[jvj+10];
l6:if((x[jvj+159]<=0)) goto l9;
x[jvj+11]=s[x[jvj+159]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+159];
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+11,V43)*/
V43=pile[WZ2]; 
if((V43!=V44)) goto l7;
pile[v[22]]=158; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(158,jvj+11,jvj+13)*/
x[jvj+163]=x[jvj+13] ;z[jvj+163]=z[jvj+13];
l17:if((x[jvj+163]==(-99999998))) goto l16;
x[jvj+15]=x[jvj+163] ;z[jvj+15]=z[jvj+163];
pile[v[22]]=110; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(110,jvj+15,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10144; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,10144,jvj+62)*/
pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+71,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=103; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+70,jvj+69,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V46; pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,V46,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=103; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+73; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+23,jvj+73,jvj+64)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+77,jvj+76)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=103; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+76,jvj+75,jvj+65)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V47; pile[WZ4]=jvj+78; 
(*f[270])( );     /*QUADRI7(100,21,140,V47,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=103; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+79; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+27,jvj+79,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2266); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2266),jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=103; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+81; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+19,jvj+81,jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+84; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+84)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=103; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+84,jvj+83,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+61; 
(*f[180])( );     /*TRIENS0(jvj+60,(-20),113,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+62,jvj+61,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=114; pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+28,114,jvj+63)*/
pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(jvj+28,114,jvj+64)*/
pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+28,114,jvj+65)*/
pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+28,114,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+28,114,jvj+67)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+28,S)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+2,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=jvj+14; 
(*f[1791])( );     /*DVF0(V48,jvj+14)*/
l11:pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+8,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=jvj+15; 
(*f[1791])( );     /*DVF0(V49,jvj+15)*/
l18:pile[v[22]]=108; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(108,X)*/
l16:x[jvj+162]=t[x[jvj+162]];
goto l15;
l2:x[jvj+158]=t[x[jvj+158]];
goto l1;
l4:if(x[jvj+161]==incon) goto l5;
goto l14;
l5:x[jvj+161]=(-99999998);
l13:x[jvj+160]=t[x[jvj+160]];
goto l12;
l7:x[jvj+159]=t[x[jvj+159]];
goto l6;
l9:if(x[jvj+163]==incon) goto l10;
goto l17;
l10:x[jvj+163]=(-99999998);
goto l16;
l20:x[jvj+29]=s[x[jvj+164]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+164];
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+30,jvj+31)*/
V51=x[jvj+31];
if((V51>V56)) goto l24;
l21:x[jvj+164]=t[x[jvj+164]];
l19:if((x[jvj+164]>0)) goto l20;
V62=x[jvj+33];
x[jvj+98]=x[jvj+166] ;z[jvj+98]=z[jvj+166];
x[jvj+42]=x[jvj+37] ;z[jvj+42]=z[jvj+37];
pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=V62; 
(*f[134])( );     /*OTA0(108,X,V62)*/
l25:if((x[jvj+32]<=0)) goto l27;
x[jvj+38]=s[x[jvj+32]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+32];
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=108)) goto l26;
pile[v[22]]=102; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+38,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+40,jvj+41)*/
V63=x[jvj+41];
if((V63==x[jvj+98])) goto l26;
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
l29:if((x[jvj+43]=w[x[jvj+98]][1])==incon) goto l35;
if((x[jvj+43]!=23)) goto l30;
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+42,jvj+47)*/
if(x[jvj+47]!=96&&x[jvj+47]!=89&&x[jvj+47]!=41&&x[jvj+47]!=20&&x[jvj+47]!=128&&x[jvj+47]!=570&&x[jvj+47]!=1317) goto l31;
pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+47,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=jvj+42; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+48)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+49)*/
V108=x[jvj+47];
V107=(-V108);
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10221; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,10221,jvj+104)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V105; pile[WZ4]=jvj+109; 
(*f[270])( );     /*QUADRI7(100,21,140,V105,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=103; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+110; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+48,jvj+110,jvj+105)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V107; pile[WZ4]=jvj+113; 
(*f[192])( );     /*QUADRI4(100,41,130,V107,jvj+113)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+111; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=103; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,103,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+113,jvj+112,jvj+106)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2266); pile[WZ4]=jvj+114; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2266),jvj+114)*/
pile[v[22]]=jvj+114; pile[WZ1]=103; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,103,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+115; pile[WZ5]=jvj+107; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+49,jvj+115,jvj+107)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+98; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+98,jvj+118)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+116; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=103; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,103,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+118; pile[WZ4]=jvj+117; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+118,jvj+117,jvj+108)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+121)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+119; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=103; pile[WZ2]=jvj+120; 
(*f[54])( );     /*TRI1(jvj+119,103,jvj+120)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+121; pile[WZ4]=jvj+120; pile[WZ5]=jvj+102; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+121,jvj+120,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+103; 
(*f[180])( );     /*TRIENS0(jvj+102,(-20),113,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+104,jvj+103,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=114; pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(jvj+50,114,jvj+105)*/
pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(jvj+50,114,jvj+106)*/
pile[WZ2]=jvj+107; 
(*f[36])( );     /*PLUSC0(jvj+50,114,jvj+107)*/
pile[WZ2]=jvj+108; 
(*f[36])( );     /*PLUSC0(jvj+50,114,jvj+108)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+50,S)*/
l31:pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+42,VA)*/
VA=pile[WZ2]; 
x[jvj+51]=vo[15];z[jvj+51]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(283,jvj+51,jvj+52)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+53)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+54)*/
l32:if((x[jvj+52]<=0)) goto l35;
x[jvj+55]=s[x[jvj+52]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+52];
pile[v[22]]=140; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+55,V78)*/
V78=pile[WZ2]; 
if((V78!=VA)) goto l33;
pile[v[22]]=158; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(158,jvj+55,jvj+56)*/
if((x[jvj+56]!=23)) goto l34;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10016; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,10016,jvj+144)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2266); pile[WZ4]=jvj+148; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2266),jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=103; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,103,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+149; pile[WZ5]=jvj+145; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+54,jvj+149,jvj+145)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2270); pile[WZ4]=jvj+150; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2270),jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=103; pile[WZ2]=jvj+151; 
(*f[54])( );     /*TRI1(jvj+150,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+151; pile[WZ5]=jvj+146; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+53,jvj+151,jvj+146)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+98; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+98,jvj+154)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=103; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,103,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+153; pile[WZ5]=jvj+147; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+154,jvj+153,jvj+147)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+157; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+157)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+155; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+155)*/
pile[v[22]]=jvj+155; pile[WZ1]=103; pile[WZ2]=jvj+156; 
(*f[54])( );     /*TRI1(jvj+155,103,jvj+156)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+157; pile[WZ4]=jvj+156; pile[WZ5]=jvj+142; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+157,jvj+156,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+143; 
(*f[180])( );     /*TRIENS0(jvj+142,(-20),113,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+144; pile[WZ4]=jvj+143; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+144,jvj+143,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=114; pile[WZ2]=jvj+145; 
(*f[36])( );     /*PLUSC0(jvj+58,114,jvj+145)*/
pile[WZ2]=jvj+146; 
(*f[36])( );     /*PLUSC0(jvj+58,114,jvj+146)*/
pile[WZ2]=jvj+147; 
(*f[36])( );     /*PLUSC0(jvj+58,114,jvj+147)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+58,S)*/
pile[v[22]]=VA; pile[WZ1]=23; 
(*f[1791])( );     /*DVF0(VA,23)*/
l33:x[jvj+52]=t[x[jvj+52]];
goto l32;
l22:pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(108,X,jvj+32)*/
x[jvj+165]=x[jvj+32] ;z[jvj+165]=z[jvj+32];
l23:if((x[jvj+165]<=0)) goto l27;
x[jvj+33]=s[x[jvj+165]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+165];
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=108)) goto l24;
pile[v[22]]=102; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+33,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+35,jvj+36)*/
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+33,jvj+37)*/
x[jvj+166]=x[jvj+36] ;z[jvj+166]=z[jvj+36];
V56=x[jvj+166];
x[jvj+164]=x[jvj+32] ;z[jvj+164]=z[jvj+32];
goto l19;
l24:x[jvj+165]=t[x[jvj+165]];
goto l23;
l26:x[jvj+32]=t[x[jvj+32]];
goto l25;
l27:W=V;
if(x[jvj+98]!=incon) goto l28;
l35:pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(108,X,jvj+59)*/
if((x[jvj+59]!=0)) goto l38;
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l28:if(x[jvj+42]!=incon) goto l29;
goto l35;
l30:pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+43,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10016; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,10016,jvj+87)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2266); pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2266),jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=103; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,103,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+92; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+44,jvj+92,jvj+88)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V115; pile[WZ4]=jvj+93; 
(*f[270])( );     /*QUADRI7(100,21,140,V115,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=103; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+94; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+45,jvj+94,jvj+89)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+98; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+98,jvj+97)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+95; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=103; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+97,jvj+96,jvj+90)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+101; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+101)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+99; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=103; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,103,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+101,jvj+100,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+86; 
(*f[180])( );     /*TRIENS0(jvj+85,(-20),113,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+87,jvj+86,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=114; pile[WZ2]=jvj+88; 
(*f[36])( );     /*PLUSC0(jvj+46,114,jvj+88)*/
pile[WZ2]=jvj+89; 
(*f[36])( );     /*PLUSC0(jvj+46,114,jvj+89)*/
pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(jvj+46,114,jvj+90)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+46,S)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+42,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=jvj+43; 
(*f[1791])( );     /*DVF0(V117,jvj+43)*/
goto l35;
l34:pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+56,V81)*/
V81=pile[WZ2]; 
V84=x[jvj+56];
V83=(-V84);
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10221; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,10221,jvj+124)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V81; pile[WZ4]=jvj+129; 
(*f[270])( );     /*QUADRI7(100,21,140,V81,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=103; pile[WZ2]=jvj+130; 
(*f[54])( );     /*TRI1(jvj+129,103,jvj+130)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+130; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+53,jvj+130,jvj+125)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V83; pile[WZ4]=jvj+133; 
(*f[192])( );     /*QUADRI4(100,41,130,V83,jvj+133)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+131; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=103; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+131,103,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+133; pile[WZ4]=jvj+132; pile[WZ5]=jvj+126; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+133,jvj+132,jvj+126)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2266); pile[WZ4]=jvj+134; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2266),jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=103; pile[WZ2]=jvj+135; 
(*f[54])( );     /*TRI1(jvj+134,103,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+135; pile[WZ5]=jvj+127; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+54,jvj+135,jvj+127)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+98; pile[WZ4]=jvj+138; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+98,jvj+138)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+136; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=103; pile[WZ2]=jvj+137; 
(*f[54])( );     /*TRI1(jvj+136,103,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+138; pile[WZ4]=jvj+137; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+138,jvj+137,jvj+128)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+141; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+141)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+139; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=103; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+139,103,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+141; pile[WZ4]=jvj+140; pile[WZ5]=jvj+122; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+141,jvj+140,jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+123; 
(*f[180])( );     /*TRIENS0(jvj+122,(-20),113,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+124,jvj+123,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=114; pile[WZ2]=jvj+125; 
(*f[36])( );     /*PLUSC0(jvj+57,114,jvj+125)*/
pile[WZ2]=jvj+126; 
(*f[36])( );     /*PLUSC0(jvj+57,114,jvj+126)*/
pile[WZ2]=jvj+127; 
(*f[36])( );     /*PLUSC0(jvj+57,114,jvj+127)*/
pile[WZ2]=jvj+128; 
(*f[36])( );     /*PLUSC0(jvj+57,114,jvj+128)*/
pile[WZ1]=S; 
(*f[2014])( );     /*RECA1(jvj+57,S)*/
goto l33;
l38:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+18)*/
goto l37;
}
