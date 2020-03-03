#include "dx.h"
void ANASIMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V26=0,V=0,V24=0,V49=0,V39=0,V38=0,V35=0,V47=0,V46=0,V43=0,V45=0,V54=0,V50=0,V52=0,V53=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=82;
x[jvj+1]=11378;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==546&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=565; pile[WZ1]=28013; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(565,28013,jvj+10)*/
l3:if((x[jvj+10]>0)) goto l4;
pile[v[22]]=565; pile[WZ1]=28001; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(565,28001,jvj+36)*/
l16:if((x[jvj+36]>0)) goto l17;
pile[v[22]]=1281; pile[WZ1]=28013; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1281,28013,jvj+37)*/
l18:if((x[jvj+37]>0)) goto l19;
l22:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+4]=s[x[jvj+80]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+80];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+5)*/
x[jvj+80]=t[x[jvj+80]];
l1:if((x[jvj+80]>0)) goto l2;
pile[v[22]]=28001; pile[WZ1]=565; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(28001,565,jvj+21)*/
l8:x[jvj+81]=t[x[jvj+81]];
l6:if((x[jvj+81]>0)) goto l7;
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+13,V32)*/
V32=pile[WZ2]; 
x[jvj+22]=d[20];z[jvj+22]=0;
l9:if((x[jvj+22]<=0)) goto l5;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+23,jvj+24)*/
x[jvj+82]=x[jvj+12] ;z[jvj+82]=z[jvj+12];
l11:if((x[jvj+82]<=0)) goto l10;
x[jvj+7]=s[x[jvj+82]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+82];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+7; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+23,jvj+7,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+25,V26)*/
V26=pile[WZ2]; 
V=V26;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+7; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+24,jvj+7,jvj+26)*/
x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=22)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+27,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+23]!=103)) goto l13;
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==1147)) goto l12;
l13:pile[v[22]]=jvj+27; pile[WZ1]=jvj+31; 
(*f[703])( );     /*USW0(jvj+27,jvj+31)*/
for(i=x[jvj+31],V24=0;i>0;i=t[i],V24++)  ;
if((V24!=1)) goto l12;
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==V) goto l14;
l12:x[jvj+82]=t[x[jvj+82]];
goto l11;
l4:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=1145; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1145,jvj+11,jvj+12)*/
pile[v[22]]=102; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+11,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
x[jvj+81]=x[jvj+12] ;z[jvj+81]=z[jvj+12];
goto l6;
l5:x[jvj+10]=t[x[jvj+10]];
goto l3;
l7:x[jvj+2]=s[x[jvj+81]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+81];
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+2,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=225)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+2,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[908])( );if(v[102]) goto l8;     /*TRACONNU0(jvj+17,jvj+18,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+49)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+52)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+50,jvj+20,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+57)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=295; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,295,jvj+58)*/
pile[WZ3]=409; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,409,jvj+61)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+63)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+62,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+60,jvj+59,jvj+55)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=633; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,633,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+57,jvj+56,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+41; 
(*f[180])( );     /*TRIENS0(jvj+40,(-20),107,jvj+41)*/
pile[v[22]]=jvj+42; pile[WZ2]=jvj+41; pile[WZ3]=105; pile[WZ4]=jvj+43; 
(*f[298])( );     /*TRIENS1(jvj+42,(-20),jvj+41,105,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+43,42,100,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+66)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=774; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,774,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=111; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,111,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+66,jvj+65,jvj+44)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+71)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-664); pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,(-664),jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=103; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+74,jvj+73,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+68,jvj+69,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+71,jvj+70,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=160; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,160,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+47; 
(*f[298])( );     /*TRIENS1(jvj+46,(-20),jvj+45,107,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+47,jvj+6,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=537; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+48; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,537,102,jvj+14,jvj+48,jvj+21)*/
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+3)*/
x[jvj+80]=x[jvj+3] ;z[jvj+80]=z[jvj+3];
goto l1;
l10:x[jvj+22]=t[x[jvj+22]];
goto l9;
l14:pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+32)*/
x[jvj+75]=x[jvj+30] ;z[jvj+75]=z[jvj+30];
pile[v[22]]=jvj+75; pile[WZ1]=218; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,218,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=V; pile[WZ2]=140; pile[WZ3]=jvj+77; 
(*f[631])( );     /*TRI16(jvj+76,V,140,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=V32; pile[WZ2]=117; pile[WZ3]=jvj+78; 
(*f[189])( );     /*TRI4(jvj+77,V32,117,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+32; pile[WZ2]=107; pile[WZ3]=jvj+79; 
(*f[301])( );     /*TRI11(jvj+78,jvj+32,107,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+27; pile[WZ2]=102; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+79,jvj+27,102,jvj+33)*/
pile[v[22]]=28013; pile[WZ1]=1281; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(28013,1281,jvj+33)*/
goto l12;
l15:V49=x[jvj+35];
pile[v[22]]=23; pile[WZ1]=V49; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(23,V49,V39,V38)*/
V38=pile[WZ3]; 
l21:pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
l20:x[jvj+37]=t[x[jvj+37]];
goto l18;
l17:V35=s[x[jvj+36]];
V47=V35;
pile[v[22]]=20; pile[WZ1]=V47; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V47,0,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
x[jvj+36]=t[x[jvj+36]];
goto l16;
l19:x[jvj+34]=s[x[jvj+37]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+37];
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+34,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+34,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(218,jvj+34,jvj+38)*/
pile[v[22]]=102; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+34,jvj+39)*/
V54=x[jvj+39];
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V45,0,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V50; pile[WZ2]=jvj+38; 
(*f[42])( );     /*SRA1(135,V50,jvj+38,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=V43; 
(*f[37])( );     /*SRA0(V52,V43,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,V54,V53,V39)*/
V39=pile[WZ3]; 
V38=incon;
pile[v[22]]=107; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+35)*/
if((x[jvj+35]!=0)) goto l15;
V38=V39;
goto l21;
}
