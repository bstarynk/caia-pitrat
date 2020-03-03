#include "dx.h"
void CMPL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V14=0,V=0,V29=0,VV=0,V49=0,V44=0,LL=0,V31=0,V35=0,V34=0,SS=0,V78=0,V68=0,V88=0,V62=0,S=0,V89=0;
int H,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=100;
x[jvj+1]=10125;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==693&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=x[jvj+50]=incon;
pile[v[22]]=100; pile[WZ1]=H; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,H,jvj+8)*/
if((x[jvj+8]==477)) goto l5;
if((x[jvj+8]==455)) goto l6;
if((x[jvj+8]!=448)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,H,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=128)) goto l19;
pile[v[22]]=102; pile[WZ1]=H; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,H,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==61)) goto l19;
l1:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+2,jvj+4)*/
if((x[jvj+4]==128)) goto l19;
l7:pile[v[22]]=67; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[1078])( );if(v[102]) goto l19;     /*TRAD0(67,jvj+2,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+93)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4780); pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4780),jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=436; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,436,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; pile[WZ2]=111; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+92,jvj+93,111,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+94; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+20,jvj+94,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+71; 
(*f[180])( );     /*TRIENS0(jvj+70,(-20),105,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+71,42,100,jvj+29)*/
l19:x[jvj+43]=vo[16];z[jvj+43]=vz[16];
pile[v[22]]=100; pile[WZ1]=508; pile[WZ2]=218; pile[WZ3]=jvj+43; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,508,218,jvj+43,jvj+44)*/
pile[v[22]]=H; pile[WZ1]=N; 
(*f[1077])( );     /*CRENUM0(H,N)*/
pile[WZ1]=345; pile[WZ2]=jvj+44; 
(*f[35])( );     /*CHGC1(H,345,jvj+44)*/
pile[v[22]]=jvj+43; pile[WZ1]=367; 
(*f[36])( );     /*PLUSC0(jvj+43,367,jvj+44)*/
pile[v[22]]=96; pile[WZ1]=(-4780); pile[WZ2]=jvj+49; 
(*f[328])( );     /*TRI12(96,(-4780),jvj+49)*/
V44=0;
l20:pile[v[22]]=367; pile[WZ1]=jvj+43; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(367,jvj+43,jvj+45)*/
x[jvj+97]=x[jvj+45] ;z[jvj+97]=z[jvj+45];
l21:if((x[jvj+97]>0)) goto l22;
pile[v[22]]=jvj+43; pile[WZ1]=V44; 
(*f[744])( );if(v[102]) goto l26;     /*VE0(jvj+43,V44,LL)*/
LL=pile[WZ2]; 
pile[WZ1]=583; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+43,583,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+44; pile[WZ2]=297; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+72,jvj+44,297,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=LL; pile[WZ2]=246; pile[WZ3]=jvj+74; 
(*f[189])( );     /*TRI4(jvj+73,LL,246,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+49; pile[WZ2]=223; pile[WZ3]=jvj+75; 
(*f[301])( );     /*TRI11(jvj+74,jvj+49,223,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=V44; pile[WZ2]=130; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+75,V44,130,jvj+50)*/
pile[v[22]]=jvj+44; pile[WZ1]=365; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+44,365,jvj+50)*/
l27:if(x[jvj+29]!=incon) goto l28;
if(x[jvj+50]!=incon) goto l42;
l43:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+5]=s[x[jvj+12]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+12];
pile[v[22]]=67; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1078])( );if(v[102]) goto l4;     /*TRAD0(67,jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
l4:x[jvj+12]=t[x[jvj+12]];
l2:if((x[jvj+12]>0)) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+13)*/
pile[v[22]]=102; pile[WZ1]=H; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,H,jvj+14)*/
pile[v[22]]=68; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1078])( );if(v[102]) goto l19;     /*TRAD0(68,jvj+14,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=156; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,156,jvj+85)*/
pile[WZ3]=228; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+90; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+90,jvj+88)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+87; 
(*f[301])( );     /*TRI11(jvj+86,jvj+13,107,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+88; pile[WZ4]=jvj+87; pile[WZ5]=jvj+84; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+88,jvj+87,jvj+84)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+82)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4780); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4780),jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=436; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,436,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=111; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+81,jvj+82,111,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+84,jvj+83,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+69; 
(*f[180])( );     /*TRIENS0(jvj+68,(-20),105,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+69,42,100,jvj+29)*/
goto l19;
l5:pile[v[22]]=102; pile[WZ1]=H; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,H,jvj+9)*/
pile[v[22]]=67; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1078])( );if(v[102]) goto l19;     /*TRAD0(67,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+78)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4780); pile[WZ4]=jvj+76; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4780),jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=436; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,436,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; pile[WZ2]=111; pile[WZ3]=jvj+79; 
(*f[58])( );     /*TRI3(jvj+77,jvj+78,111,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+79; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+11,jvj+79,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+67; 
(*f[180])( );     /*TRIENS0(jvj+66,(-20),105,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+67,42,100,jvj+29)*/
goto l19;
l6:pile[v[22]]=107; pile[WZ1]=H; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,H,jvj+12)*/
x[jvj+7]=0 ;z[jvj+7]=0;
goto l2;
l11:x[jvj+31]=s[x[jvj+28]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+28];
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=448)) goto l12;
pile[v[22]]=436; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+31,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+33,V14)*/
V14=pile[WZ2]; 
V=V14;
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==V) goto l13;
l12:x[jvj+28]=t[x[jvj+28]];
l10:if((x[jvj+28]>0)) goto l11;
pile[v[22]]=448; pile[WZ1]=N; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(448,N,jvj+36)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+37; 
(*f[938])( );     /*USE0(jvj+29,jvj+37)*/
l14:if((x[jvj+36]>0)) goto l15;
x[jvj+64]=x[jvj+26] ;z[jvj+64]=z[jvj+26];
if(x[jvj+50]!=incon) goto l39;
goto l43;
l13:pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+31,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=451)) goto l12;
pile[v[22]]=jvj+26; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+26,V)*/
goto l12;
l15:x[jvj+38]=s[x[jvj+36]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+36];
if((x[jvj+38]==x[H])) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=448)) goto l16;
pile[v[22]]=436; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(436,jvj+38,jvj+40)*/
pile[v[22]]=140; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+40,V29)*/
V29=pile[WZ2]; 
VV=V29;
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==VV) goto l17;
l16:x[jvj+36]=t[x[jvj+36]];
goto l14;
l17:pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+38,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=128)) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+38,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]==61)) goto l16;
l8:pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+21,jvj+23)*/
if((x[jvj+23]==128)) goto l16;
l18:pile[v[22]]=jvj+26; pile[WZ1]=VV; 
(*f[331])( );     /*PLUE3(jvj+26,VV)*/
goto l16;
l22:x[jvj+46]=s[x[jvj+97]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+97];
pile[v[22]]=365; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(365,jvj+46,jvj+47)*/
x[jvj+98]=x[jvj+47] ;z[jvj+98]=z[jvj+47];
l23:if((x[jvj+98]>0)) goto l24;
x[jvj+97]=t[x[jvj+97]];
goto l21;
l24:x[jvj+48]=s[x[jvj+98]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+98];
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+48,V49)*/
V49=pile[WZ2]; 
if((V49==V44)) goto l26;
l25:x[jvj+98]=t[x[jvj+98]];
goto l23;
l26:V44++;
if((V44<=50)) goto l20;
goto l27;
l28:pile[v[22]]=jvj+44; pile[WZ1]=184; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+44,184,jvj+29)*/
x[jvj+26]=0 ;z[jvj+26]=0;
pile[v[22]]=100; pile[WZ1]=H; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,H,jvj+24)*/
if((x[jvj+24]!=477)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,H,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+25,W)*/
W=pile[WZ2]; 
pile[v[22]]=jvj+26; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+26,W)*/
l9:x[jvj+27]=vo[16];z[jvj+27]=vz[16];
pile[v[22]]=448; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(448,jvj+27,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[938])( );     /*USE0(jvj+29,jvj+30)*/
goto l10;
l30:x[jvj+52]=s[x[jvj+99]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+99];
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+52,V31)*/
V31=pile[WZ2]; 
if((V31!=SS)) goto l31;
SS++;
l32:if((SS>V34)) goto l41;
pile[v[22]]=213; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(213,jvj+50,jvj+51)*/
x[jvj+99]=x[jvj+51] ;z[jvj+99]=z[jvj+51];
l29:if((x[jvj+99]>0)) goto l30;
pile[v[22]]=S; pile[WZ1]=140; pile[WZ2]=jvj+95; 
(*f[329])( );     /*TRI13(S,140,jvj+95)*/
pile[v[22]]=122; pile[WZ1]=114; pile[WZ2]=130; pile[WZ3]=SS; pile[WZ4]=jvj+95; pile[WZ5]=jvj+53; 
(*f[47])( );     /*QUADRI0(122,114,130,SS,jvj+95,jvj+53)*/
pile[v[22]]=jvj+50; pile[WZ1]=213; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+50,213,jvj+53)*/
l41:V89=t[V89];
l40:if((V89<=0)) goto l42;
S=s[V89];
for(i=x[jvj+64],V35=0;i>0;i=t[i],V35++)  ;
V34=V35-1;
SS=0;
goto l32;
l31:x[jvj+99]=t[x[jvj+99]];
goto l29;
l34:x[jvj+55]=s[x[jvj+100]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+100];
pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+55,jvj+56)*/
if((x[jvj+56]!=448)) goto l35;
pile[v[22]]=436; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(436,jvj+55,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+57,V78)*/
V78=pile[WZ2]; 
if((V68!=V78)) goto l35;
pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+55,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=128)) goto l35;
pile[v[22]]=140; pile[WZ1]=V68; pile[WZ2]=158; pile[WZ3]=23; pile[WZ4]=jvj+63; 
(*f[692])( );     /*QUADRI13(140,V68,158,23,jvj+63)*/
l38:pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[68])( );     /*PLUE0(jvj+62,jvj+63)*/
V88=t[V88];
l36:if((V88>0)) goto l37;
pile[v[22]]=jvj+50; pile[WZ1]=283; pile[WZ2]=jvj+62; 
(*f[34])( );     /*CHGC0(jvj+50,283,jvj+62)*/
V89=x[jvj+64];
goto l40;
l35:x[jvj+100]=t[x[jvj+100]];
l33:if((x[jvj+100]>0)) goto l34;
pile[v[22]]=140; pile[WZ1]=V68; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+63; 
(*f[692])( );     /*QUADRI13(140,V68,158,41,jvj+63)*/
goto l38;
l37:V68=s[V88];
x[jvj+63]=incon;
pile[v[22]]=448; pile[WZ1]=N; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(448,N,jvj+54)*/
x[jvj+100]=x[jvj+54] ;z[jvj+100]=z[jvj+54];
goto l33;
l39:pile[v[22]]=jvj+50; pile[WZ1]=222; pile[WZ2]=jvj+64; 
(*f[34])( );     /*CHGC0(jvj+50,222,jvj+64)*/
for(i=x[jvj+64],V62=0;i>0;i=t[i],V62++)  ;
pile[v[22]]=(-4780); pile[WZ1]=140; pile[WZ2]=jvj+96; 
(*f[329])( );     /*TRI13((-4780),140,jvj+96)*/
pile[v[22]]=122; pile[WZ1]=113; pile[WZ2]=130; pile[WZ3]=V62; pile[WZ4]=jvj+96; pile[WZ5]=jvj+65; 
(*f[47])( );     /*QUADRI0(122,113,130,V62,jvj+96,jvj+65)*/
pile[v[22]]=jvj+50; pile[WZ1]=213; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+50,213,jvj+65)*/
x[jvj+62]=0 ;z[jvj+62]=0;
x[jvj+60]=d[38];z[jvj+60]=0;
pile[v[22]]=140; pile[WZ1]=(-4780); pile[WZ2]=158; pile[WZ3]=23; pile[WZ4]=jvj+61; 
(*f[692])( );     /*QUADRI13(140,(-4780),158,23,jvj+61)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[196])( );     /*PLUF0(jvj+60,jvj+61,jvj+62)*/
V88=x[jvj+64];
goto l36;
l42:pile[v[22]]=jvj+50; 
(*f[745])( );     /*CREKNDR0(jvj+50)*/
pile[WZ1]=10125; 
(*f[273])( );     /*PLUK1(jvj+50,10125)*/
goto l43;
}
