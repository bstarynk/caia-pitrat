#include "dx.h"
void CONCOM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V56=0,V37=0,V53=0;
int A,R;
int RR,F,E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=71;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; RR=pile[v[22]+2]; F=pile[v[22]+3]; E=pile[v[22]+4]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+68]=x[A] ;z[jvj+68]=z[A];
l32:if((x[jvj+68]>0)) goto l33;
x[jvj+63]=x[A] ;z[jvj+63]=z[A];
if((x[jvj+63]<=0)) goto l41;
x[jvj+48]=s[x[jvj+63]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+63];
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=48)) goto l41;
pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+51)*/
l37:if((x[jvj+51]<=0)) goto l41;
x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=111; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+52,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=25)) goto l38;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+55; 
(*f[887])( );     /*VARND0(jvj+52,jvj+55)*/
for(i=x[jvj+55],V53=0;i>0;i=t[i],V53++)  ;
if((V53!=1)) goto l38;
x[jvj+70]=x[jvj+55] ;z[jvj+70]=z[jvj+55];
l39:if((x[jvj+70]<=0)) goto l38;
x[jvj+56]=s[x[jvj+70]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+70];
pile[v[22]]=498; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(498,jvj+56,jvj+57)*/
x[jvj+66]=x[A] ;z[jvj+66]=z[A];
l23:if((x[jvj+66]>0)) goto l24;
x[RR]=x[jvj+57] ;z[RR]=z[jvj+57];
l25:x[jvj+42]=0 ;z[jvj+42]=0;
pile[v[22]]=R; pile[WZ1]=jvj+41; 
(*f[887])( );     /*VARND0(R,jvj+41)*/
l29:if((x[jvj+41]>0)) goto l30;
x[E]=x[jvj+42] ;z[E]=z[jvj+42];
x[jvj+58]=x[A] ;z[jvj+58]=z[A];
if((x[jvj+58]<=0)) goto l43;
x[jvj+18]=s[x[jvj+58]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+58];
x[jvj+23]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=48)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
x[jvj+16]=0 ;z[jvj+16]=0;
l9:if((x[jvj+21]>0)) goto l10;
x[jvj+23]=x[jvj+16] ;z[jvj+23]=z[jvj+16];
l12:if((x[jvj+20]==48)) goto l13;
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+18,jvj+22)*/
if((x[jvj+22]!=22)) goto l13;
pile[v[22]]=20; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[409])( );     /*TRI14(20,jvj+20,jvj+23)*/
l42:if((x[jvj+23]!=(-99999998))) goto l7;
l43:x[RR]=x[F]=x[E]=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
l5:x[jvj+1]=s[x[jvj+60]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+60];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+1,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+71]==x[jvj+4])) goto l6;
l1:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+1,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=48)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+7)*/
x[jvj+59]=x[jvj+7] ;z[jvj+59]=z[jvj+7];
l2:if((x[jvj+59]<=0)) goto l8;
x[jvj+8]=s[x[jvj+59]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+59];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=22)) goto l3;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+71]==x[jvj+11])) goto l6;
l3:x[jvj+59]=t[x[jvj+59]];
goto l2;
l6:x[jvj+60]=t[x[jvj+60]];
l4:if((x[jvj+60]>0)) goto l5;
x[F]=x[jvj+71] ;z[F]=z[jvj+71];
v[0]=jvj; v[22]-=5; v[102]=0;return;
l8:x[jvj+23]=t[x[jvj+23]];
l7:if((x[jvj+23]<=0)) goto l43;
x[jvj+71]=s[x[jvj+23]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+23];
x[jvj+60]=x[A] ;z[jvj+60]=z[A];
goto l4;
l10:x[jvj+12]=s[x[jvj+21]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+21];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=22)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+12,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+14,jvj+15)*/
x[jvj+17]=x[jvj+15] ;z[jvj+17]=z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+17)*/
l11:x[jvj+21]=t[x[jvj+21]];
goto l9;
l13:if(x[jvj+23]==incon) goto l43;
goto l42;
l17:x[jvj+24]=s[x[jvj+62]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+62];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+28; 
(*f[887])( );     /*VARND0(jvj+24,jvj+28)*/
for(i=x[jvj+28],V38=0;i>0;i=t[i],V38++)  ;
if((V38<=1)) goto l18;
pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+24,jvj+25)*/
x[jvj+61]=x[jvj+25] ;z[jvj+61]=z[jvj+25];
l14:if((x[jvj+61]<=0)) goto l36;
x[jvj+26]=s[x[jvj+61]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+61];
pile[v[22]]=498; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(498,jvj+26,jvj+27)*/
if((x[jvj+27]==x[jvj+47])) goto l18;
l15:x[jvj+61]=t[x[jvj+61]];
goto l14;
l18:x[jvj+62]=t[x[jvj+62]];
l16:if((x[jvj+62]>0)) goto l17;
x[RR]=x[jvj+47] ;z[RR]=z[jvj+47];
goto l25;
l20:x[jvj+64]=t[x[jvj+64]];
l19:if((x[jvj+64]<=0)) goto l40;
x[jvj+33]=s[x[jvj+64]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+64];
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=25)) goto l20;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+36; 
(*f[887])( );     /*VARND0(jvj+33,jvj+36)*/
for(i=x[jvj+36],V56=0;i>0;i=t[i],V56++)  ;
if((V56!=1)) goto l20;
x[jvj+65]=x[jvj+36] ;z[jvj+65]=z[jvj+36];
l21:if((x[jvj+65]<=0)) goto l20;
x[jvj+37]=s[x[jvj+65]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+65];
pile[v[22]]=498; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(498,jvj+37,jvj+38)*/
if((x[jvj+38]!=x[jvj+57])) goto l22;
x[jvj+66]=t[x[jvj+66]];
goto l23;
l22:x[jvj+65]=t[x[jvj+65]];
goto l21;
l24:x[jvj+29]=s[x[jvj+66]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+66];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=48)) goto l40;
pile[v[22]]=107; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+29,jvj+32)*/
x[jvj+64]=x[jvj+32] ;z[jvj+64]=z[jvj+32];
goto l19;
l27:x[jvj+39]=s[x[jvj+67]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+67];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[887])( );     /*VARND0(jvj+39,jvj+40)*/
for(a=x[jvj+40];a>0;a=t[a]) if(s[a]==x[jvj+43]) goto l28;
l31:x[jvj+41]=t[x[jvj+41]];
goto l29;
l28:x[jvj+67]=t[x[jvj+67]];
l26:if((x[jvj+67]>0)) goto l27;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+43)*/
goto l31;
l30:x[jvj+43]=s[x[jvj+41]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+41];
x[jvj+67]=x[A] ;z[jvj+67]=z[A];
goto l26;
l33:x[jvj+44]=s[x[jvj+68]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+68];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[887])( );     /*VARND0(jvj+44,jvj+45)*/
for(i=x[jvj+45],V37=0;i>0;i=t[i],V37++)  ;
if((V37!=1)) goto l34;
x[jvj+69]=x[jvj+45] ;z[jvj+69]=z[jvj+45];
l35:if((x[jvj+69]<=0)) goto l34;
x[jvj+46]=s[x[jvj+69]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+69];
pile[v[22]]=498; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(498,jvj+46,jvj+47)*/
x[jvj+62]=x[A] ;z[jvj+62]=z[A];
goto l16;
l34:x[jvj+68]=t[x[jvj+68]];
goto l32;
l36:x[jvj+69]=t[x[jvj+69]];
goto l35;
l38:x[jvj+51]=t[x[jvj+51]];
goto l37;
l40:x[jvj+70]=t[x[jvj+70]];
goto l39;
l41:x[RR]=250 ;z[RR]=250;
goto l25;
}
