#include "dx.h"
void ANATOMEBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V26=0,F=0,V59=0,V46=0,V43=0,D=0;
int N,FM,ND;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=70;
x[jvj+1]=11575;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==698&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; FM=pile[v[22]+1]; ND=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=incon;
V11=x[N];
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=V11; pile[WZ3]=857; 
(*f[285])( );     /*ENLY0(N,0,V11,857,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=1033; 
(*f[285])( );     /*ENLY0(N,V2,V1,1033,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=1183; 
(*f[285])( );     /*ENLY0(N,V4,V3,1183,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=1184; 
(*f[285])( );     /*ENLY0(N,V6,V5,1184,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[WZ1]=V8; pile[WZ2]=V7; pile[WZ3]=1548; 
(*f[285])( );     /*ENLY0(N,V8,V7,1548,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(184,N,jvj+2)*/
if((x[jvj+2]<=0)) goto l1;
x[jvj+69]=s[x[jvj+2]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+2];
x[jvj+7]=x[jvj+69] ;z[jvj+7]=z[jvj+69];
l1:pile[v[22]]=159; pile[WZ1]=857; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,857,jvj+3)*/
l2:if((x[jvj+2]>0)) goto l3;
if(x[jvj+7]!=incon) goto l12;
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+5]=s[x[jvj+2]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+2];
x[jvj+70]=x[jvj+3] ;z[jvj+70]=z[jvj+3];
l4:if((x[jvj+70]>0)) goto l5;
x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:x[jvj+4]=s[x[jvj+70]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+70];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[491])( );     /*FIGURETOTAL0(jvj+4,jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l7;
l6:x[jvj+70]=t[x[jvj+70]];
goto l4;
l7:pile[v[22]]=N; pile[WZ1]=857; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,857,68)*/
goto l6;
l12:pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+22)*/
l13:if((x[jvj+22]>0)) goto l14;
if((FM!=(-9009))) goto l22;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,N,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+32,V46)*/
V46=pile[WZ2]; 
if((V46!=0)) goto l22;
pile[v[22]]=100; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=69)) goto l22;
pile[v[22]]=108; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(108,jvj+32,jvj+34)*/
pile[v[22]]=365; pile[WZ1]=jvj+7; pile[WZ2]=jvj+35; 
(*f[492])( );     /*FIGURE0(365,jvj+7,jvj+35)*/
if((x[jvj+35]==135)) goto l20;
l22:pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+7,jvj+41)*/
if((x[jvj+41]!=73)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+7,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+42,jvj+43)*/
if(x[jvj+43]!=843&&x[jvj+43]!=921&&x[jvj+43]!=1070) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+7,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=38)) goto l10;
pile[v[22]]=N; pile[WZ1]=1183; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(N,1183,jvj+43)*/
l10:pile[v[22]]=763; pile[WZ1]=280; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(763,280,jvj+19)*/
l11:if((x[jvj+19]<=0)) goto l23;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+7; pile[WZ2]=jvj+21; 
(*f[492])( );     /*FIGURE0(jvj+20,jvj+7,jvj+21)*/
if((x[jvj+21]==135)) goto l28;
x[jvj+19]=t[x[jvj+19]];
goto l11;
l14:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=843; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[492])( );     /*FIGURE0(843,jvj+23,jvj+24)*/
if((x[jvj+24]==135)) goto l16;
l17:pile[v[22]]=921; pile[WZ1]=jvj+23; pile[WZ2]=jvj+25; 
(*f[492])( );     /*FIGURE0(921,jvj+23,jvj+25)*/
if((x[jvj+25]==135)) goto l18;
l19:pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+7,jvj+26)*/
if((x[jvj+26]!=42)) goto l15;
pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+23,jvj+27)*/
if((x[jvj+27]!=22)) goto l15;
pile[v[22]]=102; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+23,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=43)) goto l15;
pile[v[22]]=102; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+28,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+30,jvj+31)*/
V59=x[jvj+31];
if(V59!=1070&&V59!=1035) goto l15;
pile[v[22]]=N; pile[WZ1]=1184; pile[WZ2]=1070; 
(*f[36])( );     /*PLUSC0(N,1184,1070)*/
l15:x[jvj+22]=t[x[jvj+22]];
goto l13;
l16:pile[v[22]]=N; pile[WZ1]=1184; pile[WZ2]=843; 
(*f[36])( );     /*PLUSC0(N,1184,843)*/
goto l17;
l18:pile[v[22]]=N; pile[WZ1]=1184; pile[WZ2]=921; 
(*f[36])( );     /*PLUSC0(N,1184,921)*/
goto l19;
l26:pile[v[22]]=N; pile[WZ1]=1033; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,1033,68)*/
l25:x[jvj+47]=t[x[jvj+47]];
l24:if((x[jvj+47]<=0)) goto l27;
x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+7; pile[WZ2]=jvj+49; 
(*f[491])( );     /*FIGURETOTAL0(jvj+48,jvj+7,jvj+49)*/
if((x[jvj+49]==135)) goto l26;
goto l25;
l28:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+58)*/
pile[WZ3]=68; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+62)*/
pile[WZ3]=1182; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,1182,jvj+65)*/
pile[WZ3]=498; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,498,jvj+68)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=103; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+68,jvj+67,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=103; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+65,jvj+64,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+46)*/
pile[v[22]]=N; pile[WZ1]=1548; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(N,1548,jvj+46)*/
l23:pile[v[22]]=159; pile[WZ1]=1033; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(159,1033,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=42)) goto l24;
pile[v[22]]=107; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+9)*/
l8:if((x[jvj+9]<=0)) goto l24;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=22)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+10,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+12,V26)*/
V26=pile[WZ2]; 
if((V26!=1)) goto l9;
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+10,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+13,jvj+14)*/
F=x[jvj+14];
if(F!=25&&F!=30) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+10,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=43)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+15,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]==870)) goto l27;
l9:x[jvj+9]=t[x[jvj+9]];
goto l8;
l20:if((x[jvj+34]<=0)) goto l22;
x[jvj+36]=s[x[jvj+34]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+34];
pile[v[22]]=103; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+36,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+37,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+36; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+36,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=749)) goto l21;
D=V43;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+50)*/
pile[WZ3]=202; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,202,jvj+57)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=D; pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,D,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=103; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+57,jvj+56,jvj+54)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+40)*/
pile[v[22]]=N; pile[WZ1]=1548; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(N,1548,jvj+40)*/
l21:x[jvj+34]=t[x[jvj+34]];
goto l20;
}
