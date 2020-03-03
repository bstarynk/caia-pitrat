#include "dx.h"
void CRENSORIG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,W=0,V21=0,VV=0,V44=0,V=0,V35=0,V30=0,V28=0,V59=0,WW=0,WA=0,V60=0,WB=0,V61=0,V51=0,V53=0,V49=0,V50=0,V52=0;
int T,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=116;
x[jvj+1]=11773;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1926&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+114]=0 ;z[jvj+114]=0;
x[jvj+10]=x[jvj+114] ;z[jvj+10]=z[jvj+114];
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,T,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=69)) goto l3;
pile[v[22]]=108; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(108,jvj+2,jvj+4)*/
pile[v[22]]=1859; pile[WZ1]=T; pile[WZ2]=jvj+5; 
(*f[492])( );     /*FIGURE0(1859,T,jvj+5)*/
if((x[jvj+5]==134)) goto l1;
l3:pile[v[22]]=184; pile[WZ1]=T; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(184,T,jvj+11)*/
l4:if((x[jvj+11]>0)) goto l5;
pile[v[22]]=184; pile[WZ1]=T; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(184,T,jvj+22)*/
l9:if((x[jvj+22]<=0)) goto l20;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=105; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(105,jvj+23,jvj+24)*/
x[jvj+116]=x[jvj+24] ;z[jvj+116]=z[jvj+24];
l10:if((x[jvj+116]>0)) goto l11;
x[jvj+22]=t[x[jvj+22]];
goto l9;
l5:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+13)*/
x[jvj+115]=x[jvj+13] ;z[jvj+115]=z[jvj+13];
l6:if((x[jvj+115]>0)) goto l7;
x[jvj+11]=t[x[jvj+11]];
goto l4;
l7:x[jvj+14]=s[x[jvj+115]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+115];
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=44)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+14,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+17,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+14,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=43)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+18,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=509)) goto l8;
VV=V21;
pile[v[22]]=jvj+10; pile[WZ1]=VV; 
(*f[331])( );     /*PLUE3(jvj+10,VV)*/
l8:x[jvj+115]=t[x[jvj+115]];
goto l6;
l11:x[jvj+25]=s[x[jvj+116]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+116];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=73)) goto l12;
pile[v[22]]=102; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+25,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+27,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+25,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=576)) goto l12;
V=V44;
for(i=x[jvj+10],V30=0;i>0;i=t[i],V30++)  ;
if((V30==1)) goto l15;
if((V30!=2)) goto l13;
pile[v[22]]=N; 
(*f[1239])( );if(v[102]) goto l13;     /*NOUVAR0(N,WW)*/
WW=pile[WZ1]; 
V60=x[jvj+10];
l16:if((V60<=0)) goto l13;
WA=s[V60];
V61=x[jvj+10];
l17:if((V61>0)) goto l18;
V60=t[V60];
goto l16;
l12:x[jvj+116]=t[x[jvj+116]];
goto l10;
l13:if((x[jvj+10]==0)) goto l23;
for(i=x[jvj+10],V35=0;i>0;i=t[i],V35++)  ;
if((V35>2)) goto l23;
l21:pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(498,N,jvj+34)*/
V51=x[jvj+34];
V53=x[jvj+10];
pile[v[22]]=20; pile[WZ1]=11773; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11773,0,V49)*/
V49=pile[WZ3]; 
pile[WZ1]=V51; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(20,V51,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V53; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(23,V53,V50,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l15:V59=x[jvj+10];
l14:if((V59<=0)) goto l13;
V28=s[V59];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1006; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+41)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=424; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,424,jvj+44)*/
pile[WZ3]=1006; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+49)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V28; pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,V28,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=103; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+49,jvj+48,jvj+45)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=623; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,623,jvj+50)*/
pile[WZ3]=929; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,929,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4349); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4349),jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=103; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+55,jvj+54,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+46)*/
pile[WZ2]=111; pile[WZ3]=jvj+44; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+44,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=107; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+45)*/
pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=38; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+39)*/
pile[WZ3]=239; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=337; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,337,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=160; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,160,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=111; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+43,jvj+42,jvj+30)*/
pile[v[22]]=T; pile[WZ1]=105; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(T,105,jvj+30)*/
V59=t[V59];
goto l14;
l18:WB=s[V61];
if((WA>=WB)) goto l19;
if((WB==WA)) goto l19;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1006; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+64)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+62)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=424; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,424,jvj+65)*/
pile[WZ3]=1006; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+71)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WA; pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(100,21,140,WA,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=103; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+71,jvj+70,jvj+66)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1006; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+74)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WB; pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,WB,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=103; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+74,jvj+73,jvj+67)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=623; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,623,jvj+75)*/
pile[WZ3]=929; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,929,jvj+80)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4349); pile[WZ4]=jvj+78; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4349),jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=103; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+80,jvj+79,jvj+77)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+77,jvj+76,jvj+68)*/
pile[WZ2]=111; pile[WZ3]=jvj+65; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+65,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=107; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=38; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+60)*/
pile[WZ3]=239; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=337; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,337,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; pile[WZ2]=160; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+57,jvj+58,160,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=111; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+64,jvj+63,jvj+31)*/
pile[v[22]]=T; pile[WZ1]=105; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(T,105,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+81)*/
pile[WZ3]=74; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+86)*/
pile[WZ3]=425; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,425,jvj+89)*/
pile[WZ3]=1006; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+94)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WA; pile[WZ4]=jvj+92; 
(*f[270])( );     /*QUADRI7(100,21,140,WA,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=103; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+94,jvj+93,jvj+90)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1006; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+97)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WB; pile[WZ4]=jvj+95; 
(*f[270])( );     /*QUADRI7(100,21,140,WB,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=103; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+97; pile[WZ4]=jvj+96; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+97,jvj+96,jvj+91)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+89; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+89,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=107; pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(jvj+88,107,jvj+90)*/
pile[WZ2]=jvj+91; 
(*f[36])( );     /*PLUSC0(jvj+88,107,jvj+91)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+88; pile[WZ4]=jvj+87; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+88,jvj+87,jvj+85)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+83; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; pile[WZ2]=103; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+82,jvj+83,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+85,jvj+84,jvj+32)*/
pile[v[22]]=T; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(T,107,jvj+32)*/
l19:V61=t[V61];
goto l17;
l23:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1006; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,1006,jvj+110)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+108; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+108)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=929; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,929,jvj+113)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4349); pile[WZ4]=jvj+111; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4349),jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=103; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,103,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+113,jvj+112,jvj+104)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=36; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,20,101,36,jvj+106)*/
pile[WZ3]=239; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=337; pile[WZ2]=jvj+103; 
(*f[54])( );     /*TRI1(jvj+102,337,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=160; pile[WZ3]=jvj+105; 
(*f[58])( );     /*TRI3(jvj+103,jvj+104,160,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; pile[WZ2]=111; pile[WZ3]=jvj+107; 
(*f[58])( );     /*TRI3(jvj+105,jvj+106,111,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; pile[WZ2]=103; pile[WZ3]=jvj+109; 
(*f[58])( );     /*TRI3(jvj+107,jvj+108,103,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+109; pile[WZ5]=jvj+100; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+110,jvj+109,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+101; 
(*f[180])( );     /*TRIENS0(jvj+100,(-20),105,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+98; 
(*f[58])( );     /*TRI3(jvj+101,42,100,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=(-20); pile[WZ2]=184; pile[WZ3]=jvj+99; 
(*f[180])( );     /*TRIENS0(jvj+98,(-20),184,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+99,47,100,jvj+33)*/
pile[v[22]]=T; pile[WZ1]=105; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(T,105,jvj+33)*/
l20:if((x[jvj+10]!=0)) goto l21;
goto l22;
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=576)) goto l2;
W=V11;
pile[v[22]]=jvj+10; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+10,W)*/
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
}
