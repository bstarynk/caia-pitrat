#include "dx.h"
void COMPTEVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V20=0,T=0,V=0,RA=0,SA=0,V25=0,V43=0,V52=0,V36=0,V27=0,V28=0,F=0,V64=0,S=0,R=0,V99=0,V101=0,V90=0,VV=0,V77=0,V81=0,V68=0,V95=0;
int A,N,B;
int RS;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=66;
x[jvj+1]=11203;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==763&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; N=pile[v[22]+1]; B=pile[v[22]+2]; RS=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
T=F=incon;
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=510; pile[WZ3]=0; pile[WZ4]=jvj+11; 
(*f[391])( );     /*QUADRI10(117,0,510,0,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+12)*/
if((x[jvj+12]==21)) goto l6;
if((x[jvj+12]!=484)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+13,V)*/
V=pile[WZ2]; 
T=12;
pile[v[22]]=454; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(454,N,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l17;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=454)) goto l2;
pile[v[22]]=436; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V20)*/
V20=pile[WZ2]; 
if((V!=V20)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
x[jvj+3]=x[jvj+9] ;z[jvj+3]=z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+3,V12)*/
V12=pile[WZ2]; 
if((V12>1)) goto l2;
l3:pile[v[22]]=480; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(480,jvj+3,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==473) goto l4;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==472) goto l5;
goto l2;
l5:pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
goto l2;
l6:T=12;
l7:pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
l17:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,A,jvj+31)*/
if((x[jvj+31]!=22)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,A,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+32,jvj+33)*/
F=x[jvj+33];
l18:if(T==incon) goto l19;
l29:pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(117,jvj+11,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(510,jvj+11,S)*/
S=pile[WZ2]; 
R=V64;
pile[v[22]]=41; pile[WZ1]=R; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,R,0,V99)*/
V99=pile[WZ3]; 
pile[WZ1]=S; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(41,S,V99,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
if((R>3)) goto l31;
if((S>0)) goto l31;
if(R!=2&&R!=3) goto l39;
pile[v[22]]=448; pile[WZ1]=N; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(448,N,jvj+44)*/
pile[v[22]]=454; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(454,N,jvj+45)*/
pile[v[22]]=A; pile[WZ1]=jvj+46; 
(*f[891])( );     /*VAREXP0(A,jvj+46)*/
l32:if((x[jvj+44]<=0)) goto l39;
x[jvj+47]=s[x[jvj+44]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+47,jvj+48)*/
if((x[jvj+48]!=448)) goto l33;
pile[v[22]]=436; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(436,jvj+47,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+49,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+47,jvj+50)*/
VV=V90;
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=61)) goto l33;
pile[v[22]]=111; pile[WZ1]=jvj+47; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+47,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=128)) goto l33;
pile[v[22]]=103; pile[WZ1]=jvj+50; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+50,jvj+42)*/
pile[v[22]]=102; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+50,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]==833)) goto l35;
l30:pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]==828)) goto l35;
l33:x[jvj+44]=t[x[jvj+44]];
goto l32;
l8:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=228)) goto l9;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=N; pile[WZ2]=B; 
(*f[1121])( );if(v[102]) goto l9;     /*COMPTEVAR2(jvj+16,N,B,RA,SA)*/
RA=pile[WZ3]; SA=pile[WZ4]; 
V25=RA+SA;
T=12;
pile[v[22]]=jvj+11; pile[WZ1]=510; pile[WZ2]=V25; 
(*f[186])( );     /*BTC0(jvj+11,510,V25)*/
goto l17;
l9:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,A,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=454; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(454,N,jvj+17)*/
l10:if((x[jvj+17]>0)) goto l11;
x[jvj+61]=x[B] ;z[jvj+61]=z[B];
l13:if((x[jvj+61]<=0)) goto l17;
x[jvj+23]=s[x[jvj+61]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+61];
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=25)) goto l14;
x[jvj+26]=d[20];z[jvj+26]=0;
l15:if((x[jvj+26]<=0)) goto l14;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+27,jvj+23,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+28,V36)*/
V36=pile[WZ2]; 
if((V43!=V36)) goto l16;
pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+27,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+23; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+29,jvj+23,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=N; pile[WZ2]=B; 
(*f[1121])( );if(v[102]) goto l16;     /*COMPTEVAR2(jvj+30,N,B,V27,V28)*/
V27=pile[WZ3]; V28=pile[WZ4]; 
T=12;
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=V27; 
(*f[186])( );     /*BTC0(jvj+11,117,V27)*/
pile[WZ1]=510; pile[WZ2]=V28; 
(*f[186])( );     /*BTC0(jvj+11,510,V28)*/
goto l17;
l11:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=454)) goto l12;
pile[v[22]]=436; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+18,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+20,V52)*/
V52=pile[WZ2]; 
if((V43!=V52)) goto l12;
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+18,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=21)) goto l12;
T=12;
goto l7;
l12:x[jvj+17]=t[x[jvj+17]];
goto l10;
l14:x[jvj+61]=t[x[jvj+61]];
goto l13;
l16:x[jvj+26]=t[x[jvj+26]];
goto l15;
l19:if(F!=incon) goto l20;
l21:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,A,jvj+34)*/
x[jvj+62]=w[x[jvj+34]][9];
l22:if((x[jvj+62]>0)) goto l23;
if(F!=incon) goto l25;
goto l29;
l20:if(F!=614&&F!=1162&&F!=1284&&F!=1286) goto l21;
pile[v[22]]=jvj+11; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,510,1)*/
goto l29;
l23:x[jvj+35]=s[x[jvj+62]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+62];
pile[v[22]]=jvj+35; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+35,A,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+11; pile[WZ2]=N; pile[WZ3]=B; 
(*f[1120])( );     /*COMPTEVAR1(jvj+36,jvj+11,N,B)*/
l24:x[jvj+62]=t[x[jvj+62]];
goto l22;
l25:if(F!=485&&F!=486&&F!=1214&&F!=1273) goto l29;
x[jvj+63]=w[x[jvj+34]][8];
l26:if((x[jvj+63]<=0)) goto l29;
x[jvj+37]=s[x[jvj+63]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+63];
pile[v[22]]=jvj+37; pile[WZ1]=A; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(jvj+37,A,jvj+38)*/
x[jvj+64]=x[jvj+38] ;z[jvj+64]=z[jvj+38];
l27:if((x[jvj+64]>0)) goto l28;
x[jvj+63]=t[x[jvj+63]];
goto l26;
l28:x[jvj+39]=s[x[jvj+64]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+64];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+11; pile[WZ2]=N; pile[WZ3]=B; 
(*f[1120])( );     /*COMPTEVAR1(jvj+39,jvj+11,N,B)*/
x[jvj+64]=t[x[jvj+64]];
goto l27;
l31:x[RS]=68 ;z[RS]=68;
l40:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l35:x[jvj+65]=x[jvj+45] ;z[jvj+65]=z[jvj+45];
l34:if((x[jvj+65]<=0)) goto l33;
x[jvj+54]=s[x[jvj+65]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+65];
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+54,jvj+55)*/
if((x[jvj+55]!=454)) goto l36;
pile[v[22]]=103; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+54,jvj+56)*/
pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+56,V77)*/
V77=pile[WZ2]; 
if((VV!=V77)) goto l36;
pile[v[22]]=436; pile[WZ1]=jvj+54; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(436,jvj+54,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+57,V81)*/
V81=pile[WZ2]; 
V68=V81;
x[jvj+66]=x[jvj+46] ;z[jvj+66]=z[jvj+46];
l37:if((x[jvj+66]<=0)) goto l36;
x[jvj+58]=s[x[jvj+66]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+66];
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+58,jvj+59)*/
if((x[jvj+59]!=484)) goto l38;
pile[v[22]]=111; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+58,jvj+60)*/
pile[v[22]]=140; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+60,V95)*/
V95=pile[WZ2]; 
if((V68==V95)) goto l31;
l38:x[jvj+66]=t[x[jvj+66]];
goto l37;
l36:x[jvj+65]=t[x[jvj+65]];
goto l34;
l39:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
