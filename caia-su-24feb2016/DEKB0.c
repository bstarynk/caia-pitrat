#include "dx.h"
void DEKB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V15=0,V39=0,V=0,V82=0,K=0;
int R,N,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=64;
x[jvj+1]=10244;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1638&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; N=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
l8:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+2,jvj+22)*/
if((x[jvj+22]==114)) goto l9;
if((x[jvj+22]==185)) goto l10;
if((x[jvj+22]==47)) goto l11;
if((x[jvj+22]==435)) goto l13;
if((x[jvj+22]==73)) goto l14;
if((x[jvj+22]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+2,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+37,jvj+38)*/
if(x[jvj+38]!=54&&x[jvj+38]!=55&&x[jvj+38]!=50&&x[jvj+38]!=48) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+39)*/
l15:if((x[jvj+39]<=0)) goto l16;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=jvj+2; pile[WZ1]=N; pile[WZ2]=jvj+40; 
(*f[1638])( );     /*DEKB0(jvj+2,N,jvj+40)*/
x[jvj+39]=t[x[jvj+39]];
goto l15;
l4:if(V15==incon) goto l5;
l23:K=V15;
if((K==68)) goto l6;
if((K!=67)) goto l22;
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+56)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=436; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,436,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=111; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+57; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+19,jvj+57,jvj+17)*/
if((x[jvj+45]!=43)) goto l27;
if((x[jvj+22]!=43)) goto l27;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+5,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+15,jvj+16)*/
if((V39=w[x[jvj+16]][1])==incon) goto l27;
if((V39!=23)) goto l27;
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=101; pile[WZ2]=180; 
(*f[35])( );     /*CHGC1(jvj+18,101,180)*/
l27:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+21)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(jvj+2,jvj+20,jvj+21)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(R,107,jvj+17)*/
if((x[N]!=10474)) goto l7;
pile[WZ1]=jvj+2; 
(*f[1600])( );     /*DVA0(R,jvj+2)*/
pile[WZ1]=jvj+17; 
(*f[1600])( );     /*DVA0(R,jvj+17)*/
l7:pile[v[22]]=R; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[1638])( );     /*DEKB0(R,N,jvj+17)*/
l22:x[jvj+64]=t[x[jvj+64]];
l21:if((x[jvj+64]<=0)) goto l24;
x[jvj+20]=s[x[jvj+64]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+64];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+2; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+20,jvj+2,jvj+44)*/
x[jvj+5]=x[jvj+44] ;z[jvj+5]=z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+5,jvj+45)*/
if(x[jvj+45]==21||x[jvj+45]==20||x[jvj+45]==89||x[jvj+45]==96||x[jvj+45]==41||x[jvj+45]==128||x[jvj+45]==185||x[jvj+45]==1317) goto l22;
if((x[jvj+45]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+5,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+10,jvj+11)*/
V13=x[jvj+11];
if(V13==231||V13==1175) goto l22;
l1:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=24)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]==41)) goto l22;
l2:V15=incon;
if(x[jvj+45]!=61&&x[jvj+45]!=69) goto l3;
V15=68;
l3:if((x[jvj+45]!=22)) goto l4;
if((x[jvj+22]==114)) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+5,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+12,jvj+13)*/
pile[v[22]]=304; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(304,jvj+13,jvj+14)*/
if((x[jvj+14]!=68)) goto l4;
V15=68;
goto l23;
l5:V15=67;
goto l23;
l6:pile[v[22]]=R; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[1638])( );     /*DEKB0(R,N,jvj+5)*/
goto l22;
l9:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+2,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=128)) goto l16;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+25)*/
(*f[1817])( );     /*NOUV2(V82)*/
V82=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V82; pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,V82,jvj+26)*/
pile[v[22]]=jvj+2; pile[WZ1]=102; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+2,102,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=599; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,599,jvj+60)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V82; pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,V82,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=436; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,436,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=111; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,111,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+61; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+25,jvj+61,jvj+27)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(R,107,jvj+27)*/
l16:x[jvj+62]=w[x[jvj+22]][8];
l17:if((x[jvj+62]>0)) goto l18;
x[jvj+64]=w[x[jvj+22]][9];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]==179||x[jvj+4]==500) goto l24;
goto l21;
l10:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+2,jvj+28)*/
pile[v[22]]=R; pile[WZ1]=N; 
(*f[1638])( );     /*DEKB0(R,N,jvj+28)*/
goto l16;
l11:pile[v[22]]=184; pile[WZ1]=jvj+2; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(184,jvj+2,jvj+29)*/
l12:if((x[jvj+29]<=0)) goto l16;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=jvj+30; pile[WZ1]=N; pile[WZ2]=jvj+30; 
(*f[1638])( );     /*DEKB0(jvj+30,N,jvj+30)*/
x[jvj+29]=t[x[jvj+29]];
goto l12;
l13:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+2,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+31,jvj+32)*/
if(x[jvj+32]!=179&&x[jvj+32]!=500) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+2,jvj+33)*/
pile[v[22]]=R; pile[WZ1]=N; 
(*f[1638])( );     /*DEKB0(R,N,jvj+33)*/
goto l16;
l14:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+2,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+34,jvj+35)*/
if(x[jvj+35]!=33&&x[jvj+35]!=722&&x[jvj+35]!=853&&x[jvj+35]!=1479) goto l16;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+2,jvj+36)*/
pile[v[22]]=R; pile[WZ1]=N; 
(*f[1638])( );     /*DEKB0(R,N,jvj+36)*/
goto l16;
l18:x[jvj+41]=s[x[jvj+62]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+62];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+2; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(jvj+41,jvj+2,jvj+42)*/
x[jvj+63]=x[jvj+42] ;z[jvj+63]=z[jvj+42];
l19:if((x[jvj+63]>0)) goto l20;
x[jvj+62]=t[x[jvj+62]];
goto l17;
l20:x[jvj+43]=s[x[jvj+63]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+63];
pile[v[22]]=R; pile[WZ1]=N; pile[WZ2]=jvj+43; 
(*f[1638])( );     /*DEKB0(R,N,jvj+43)*/
x[jvj+63]=t[x[jvj+63]];
goto l19;
l24:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+2,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]==224)) goto l25;
if((x[jvj+47]!=44)) goto l26;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+2,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=22)) goto l26;
pile[v[22]]=111; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+49,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+51,jvj+52)*/
if(x[jvj+52]!=231&&x[jvj+52]!=1175) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+49; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+49,jvj+53)*/
x[jvj+2]=x[jvj+53] ;z[jvj+2]=z[jvj+53];
goto l8;
l25:pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+2,jvj+48)*/
x[jvj+2]=x[jvj+48] ;z[jvj+2]=z[jvj+48];
goto l8;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
