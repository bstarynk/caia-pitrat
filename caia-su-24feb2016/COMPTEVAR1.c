#include "dx.h"
void COMPTEVAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V20=0,T=0,V=0,RA=0,SA=0,V25=0,V43=0,V52=0,V36=0,V27=0,V28=0,F=0,V64=0,S=0,R=0,V66=0,V68=0;
int A,RR,N,B;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=11203;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1120&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; RR=pile[v[22]+1]; N=pile[v[22]+2]; B=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
T=F=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+11)*/
if((x[jvj+11]==21)) goto l6;
if((x[jvj+11]!=484)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+12,V)*/
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
l5:pile[v[22]]=RR; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RR,117,1)*/
goto l2;
l6:T=12;
l7:pile[v[22]]=RR; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RR,117,1)*/
l17:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,A,jvj+30)*/
if((x[jvj+30]!=22)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,A,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+31,jvj+32)*/
F=x[jvj+32];
l18:if(T==incon) goto l19;
l29:pile[v[22]]=117; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,RR,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(510,RR,S)*/
S=pile[WZ2]; 
R=V64;
pile[v[22]]=41; pile[WZ1]=R; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,R,0,V66)*/
V66=pile[WZ3]; 
pile[WZ1]=S; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,S,V66,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
l30:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l8:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=228)) goto l9;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=N; pile[WZ2]=B; 
(*f[1121])( );if(v[102]) goto l9;     /*COMPTEVAR2(jvj+15,N,B,RA,SA)*/
RA=pile[WZ3]; SA=pile[WZ4]; 
V25=RA+SA;
T=12;
pile[v[22]]=RR; pile[WZ1]=510; pile[WZ2]=V25; 
(*f[186])( );     /*BTC0(RR,510,V25)*/
goto l17;
l9:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,A,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=454; pile[WZ1]=N; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(454,N,jvj+16)*/
l10:if((x[jvj+16]>0)) goto l11;
x[jvj+39]=x[B] ;z[jvj+39]=z[B];
l13:if((x[jvj+39]<=0)) goto l17;
x[jvj+22]=s[x[jvj+39]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+39];
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=25)) goto l14;
x[jvj+25]=d[20];z[jvj+25]=0;
l15:if((x[jvj+25]<=0)) goto l14;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+22; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+26,jvj+22,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+27,V36)*/
V36=pile[WZ2]; 
if((V43!=V36)) goto l16;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+26,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+28,jvj+22,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=N; pile[WZ2]=B; 
(*f[1121])( );if(v[102]) goto l16;     /*COMPTEVAR2(jvj+29,N,B,V27,V28)*/
V27=pile[WZ3]; V28=pile[WZ4]; 
T=12;
pile[v[22]]=RR; pile[WZ1]=117; pile[WZ2]=V27; 
(*f[186])( );     /*BTC0(RR,117,V27)*/
pile[WZ1]=510; pile[WZ2]=V28; 
(*f[186])( );     /*BTC0(RR,510,V28)*/
goto l17;
l11:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=454)) goto l12;
pile[v[22]]=436; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+17,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+19,V52)*/
V52=pile[WZ2]; 
if((V43!=V52)) goto l12;
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+17,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=21)) goto l12;
T=12;
goto l7;
l12:x[jvj+16]=t[x[jvj+16]];
goto l10;
l14:x[jvj+39]=t[x[jvj+39]];
goto l13;
l16:x[jvj+25]=t[x[jvj+25]];
goto l15;
l19:if(F!=incon) goto l20;
l21:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,A,jvj+33)*/
x[jvj+40]=w[x[jvj+33]][9];
l22:if((x[jvj+40]>0)) goto l23;
if(F!=incon) goto l25;
goto l29;
l20:if(F!=614&&F!=1162&&F!=1284&&F!=1286) goto l21;
pile[v[22]]=RR; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RR,510,1)*/
goto l29;
l23:x[jvj+34]=s[x[jvj+40]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+40];
pile[v[22]]=jvj+34; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+34,A,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=RR; pile[WZ2]=N; pile[WZ3]=B; 
(*f[1120])( );     /*COMPTEVAR1(jvj+35,RR,N,B)*/
l24:x[jvj+40]=t[x[jvj+40]];
goto l22;
l25:if(F!=485&&F!=486&&F!=1214&&F!=1273) goto l29;
x[jvj+41]=w[x[jvj+33]][8];
l26:if((x[jvj+41]<=0)) goto l29;
x[jvj+36]=s[x[jvj+41]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+41];
pile[v[22]]=jvj+36; pile[WZ1]=A; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(jvj+36,A,jvj+37)*/
x[jvj+42]=x[jvj+37] ;z[jvj+42]=z[jvj+37];
l27:if((x[jvj+42]>0)) goto l28;
x[jvj+41]=t[x[jvj+41]];
goto l26;
l28:x[jvj+38]=s[x[jvj+42]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+42];
pile[v[22]]=jvj+38; pile[WZ1]=RR; pile[WZ2]=N; pile[WZ3]=B; 
(*f[1120])( );     /*COMPTEVAR1(jvj+38,RR,N,B)*/
x[jvj+42]=t[x[jvj+42]];
goto l27;
}
