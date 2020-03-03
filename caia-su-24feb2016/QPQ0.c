#include "dx.h"
void QPQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V15=0,V18=0,V33=0,V32=0,V20=0,V22=0,V23=0,V21=0,V24=0,V40=0,V67=0,V51=0,V78=0,V105=0,V89=0;
int F,A,B,N,RA;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=11455;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2218&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
F=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; N=pile[v[22]+3]; RA=pile[v[22]+4]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=514; pile[WZ1]=F; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(514,F,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,A,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=485)) goto l24;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,A,jvj+22)*/
l10:x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+63]=x[jvj+22] ;z[jvj+63]=z[jvj+22];
l11:if((x[jvj+63]>0)) goto l19;
x[jvj+67]=x[jvj+40] ;z[jvj+67]=z[jvj+40];
x[jvj+23]=0 ;z[jvj+23]=0;
x[jvj+62]=x[jvj+22] ;z[jvj+62]=z[jvj+22];
l12:if((x[jvj+62]>0)) goto l17;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[299])( );     /*COPEL0(jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+24; pile[WZ2]=107; pile[WZ3]=jvj+27; 
(*f[301])( );     /*TRI11(jvj+26,jvj+24,107,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,22,100,jvj+28)*/
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+61]=x[jvj+67] ;z[jvj+61]=z[jvj+67];
l13:if((x[jvj+61]>0)) goto l16;
V40=incon;
if(x[F]!=29&&x[F]!=30) goto l15;
pile[v[22]]=jvj+28; 
(*f[1161])( );if(v[102]) goto l15;     /*INF0(jvj+28,V40)*/
V40=pile[WZ1]; 
l14:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V40; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,V40,jvj+30)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+31; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+32,jvj+31,107)*/
pile[v[22]]=jvj+31; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+30)*/
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,B,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=485)) goto l39;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,B,jvj+43)*/
l25:x[jvj+60]=0 ;z[jvj+60]=0;
x[jvj+66]=x[jvj+43] ;z[jvj+66]=z[jvj+43];
l26:if((x[jvj+66]>0)) goto l34;
x[jvj+68]=x[jvj+60] ;z[jvj+68]=z[jvj+60];
x[jvj+44]=0 ;z[jvj+44]=0;
x[jvj+65]=x[jvj+43] ;z[jvj+65]=z[jvj+43];
l27:if((x[jvj+65]>0)) goto l32;
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[299])( );     /*COPEL0(jvj+44,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+45; pile[WZ2]=107; pile[WZ3]=jvj+48; 
(*f[301])( );     /*TRI11(jvj+47,jvj+45,107,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+48,22,100,jvj+49)*/
x[jvj+52]=0 ;z[jvj+52]=0;
x[jvj+64]=x[jvj+68] ;z[jvj+64]=z[jvj+68];
l28:if((x[jvj+64]>0)) goto l31;
V78=incon;
if(x[jvj+2]!=29&&x[jvj+2]!=30) goto l30;
pile[v[22]]=jvj+49; 
(*f[1161])( );if(v[102]) goto l30;     /*INF0(jvj+49,V78)*/
V78=pile[WZ1]; 
l29:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+50)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V78; pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(100,41,130,V78,jvj+51)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+50; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+50,jvj+13)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+13; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+52,jvj+13,107)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+51)*/
x[jvj+11]=x[jvj+31] ;z[jvj+11]=z[jvj+31];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
V18=0;
V33=vv[7];
V32=V33+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=F; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,F,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,jvj+14,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+19; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+19,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+3; 
(*f[799])( );if(v[102]) goto l8;     /*NORME0(jvj+15,jvj+3)*/
pile[v[22]]=101; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l8;
l1:pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+3,jvj+5)*/
if((x[jvj+5]==134)) goto l8;
l5:pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+3,jvj+8)*/
if((x[jvj+8]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+3,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+9,jvj+10)*/
if(x[jvj+10]!=29&&x[jvj+10]!=30&&x[jvj+10]!=27&&x[jvj+10]!=28) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=103; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+3,jvj+7)*/
if((x[jvj+10]==29)) goto l2;
if((x[jvj+10]==30)) goto l3;
if((x[jvj+10]==27)) goto l4;
if((x[jvj+10]!=28)) goto l6;
pile[v[22]]=jvj+6; 
(*f[1161])( );if(v[102]) goto l6;     /*INF0(jvj+6,V14)*/
V14=pile[WZ1]; 
pile[v[22]]=jvj+7; 
(*f[1160])( );if(v[102]) goto l6;     /*SUP0(jvj+7,V15)*/
V15=pile[WZ1]; 
if((V14>=V15)) goto l8;
l6:pile[v[22]]=jvj+3; pile[WZ1]=RA; pile[WZ2]=jvj+16; 
(*f[760])( );     /*MEMEX0(jvj+3,RA,jvj+16)*/
if((x[jvj+16]==134)) goto l7;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l2:pile[v[22]]=jvj+6; 
(*f[1160])( );if(v[102]) goto l6;     /*SUP0(jvj+6,V8)*/
V8=pile[WZ1]; 
pile[v[22]]=jvj+7; 
(*f[1161])( );if(v[102]) goto l6;     /*INF0(jvj+7,V9)*/
V9=pile[WZ1]; 
if((V8<V9)) goto l8;
goto l6;
l3:pile[v[22]]=jvj+6; 
(*f[1160])( );if(v[102]) goto l6;     /*SUP0(jvj+6,V10)*/
V10=pile[WZ1]; 
pile[v[22]]=jvj+7; 
(*f[1161])( );if(v[102]) goto l6;     /*INF0(jvj+7,V11)*/
V11=pile[WZ1]; 
if((V10<=V11)) goto l8;
goto l6;
l4:pile[v[22]]=jvj+6; 
(*f[1161])( );if(v[102]) goto l6;     /*INF0(jvj+6,V12)*/
V12=pile[WZ1]; 
pile[v[22]]=jvj+7; 
(*f[1160])( );if(v[102]) goto l6;     /*SUP0(jvj+7,V13)*/
V13=pile[WZ1]; 
if((V12>V13)) goto l8;
goto l6;
l7:vv[7]=V32;
pile[v[22]]=(-2577); pile[WZ1]=V18; 
(*f[64])( );     /*SRA2((-2577),V18,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V20,40,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=jvj+3; pile[WZ2]=201; 
(*f[2138])( );     /*QL0(V22,jvj+3,201,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V23,41,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V21,32,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=N; 
(*f[2140])( );if(v[102]) goto l8;     /*QU0(V24,N,J)*/
J=pile[WZ2]; 
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; pile[v[22]+5]=J; v[102]=0;return;
l15:pile[v[22]]=jvj+28; 
(*f[1160])( );if(v[102]) goto l8;     /*SUP0(jvj+28,V40)*/
V40=pile[WZ1]; 
goto l14;
l16:x[jvj+33]=s[x[jvj+61]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+61];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+34)*/
pile[v[22]]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+34)*/
x[jvj+61]=t[x[jvj+61]];
goto l13;
l17:x[jvj+35]=s[x[jvj+62]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+62];
for(a=x[jvj+67];a>0;a=t[a]) if(s[a]==x[jvj+35]) goto l18;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+35)*/
l18:x[jvj+62]=t[x[jvj+62]];
goto l12;
l19:x[jvj+38]=s[x[jvj+63]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+63];
x[jvj+36]=vo[14];z[jvj+36]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1304,jvj+36,jvj+37)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[887])( );     /*VARND0(jvj+38,jvj+39)*/
V67=x[jvj+39];
l20:if((V67>0)) goto l23;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+38)*/
l21:x[jvj+63]=t[x[jvj+63]];
goto l11;
l22:V67=t[V67];
goto l20;
l23:V51=s[V67];
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==V51) goto l22;
goto l21;
l24:pile[v[22]]=20; pile[WZ1]=A; pile[WZ2]=jvj+22; 
(*f[409])( );     /*TRI14(20,A,jvj+22)*/
goto l10;
l30:pile[v[22]]=jvj+49; 
(*f[1160])( );if(v[102]) goto l8;     /*SUP0(jvj+49,V78)*/
V78=pile[WZ1]; 
goto l29;
l31:x[jvj+53]=s[x[jvj+64]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+64];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+54)*/
pile[v[22]]=jvj+52; 
(*f[68])( );     /*PLUE0(jvj+52,jvj+54)*/
x[jvj+64]=t[x[jvj+64]];
goto l28;
l32:x[jvj+55]=s[x[jvj+65]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+65];
for(a=x[jvj+68];a>0;a=t[a]) if(s[a]==x[jvj+55]) goto l33;
pile[v[22]]=jvj+44; pile[WZ1]=jvj+55; 
(*f[68])( );     /*PLUE0(jvj+44,jvj+55)*/
l33:x[jvj+65]=t[x[jvj+65]];
goto l27;
l34:x[jvj+58]=s[x[jvj+66]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+66];
x[jvj+56]=vo[14];z[jvj+56]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(1304,jvj+56,jvj+57)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; 
(*f[887])( );     /*VARND0(jvj+58,jvj+59)*/
V105=x[jvj+59];
l35:if((V105>0)) goto l38;
pile[v[22]]=jvj+60; pile[WZ1]=jvj+58; 
(*f[68])( );     /*PLUE0(jvj+60,jvj+58)*/
l36:x[jvj+66]=t[x[jvj+66]];
goto l26;
l37:V105=t[V105];
goto l35;
l38:V89=s[V105];
for(a=x[jvj+57];a>0;a=t[a]) if(s[a]==V89) goto l37;
goto l36;
l39:pile[v[22]]=20; pile[WZ1]=B; pile[WZ2]=jvj+43; 
(*f[409])( );     /*TRI14(20,B,jvj+43)*/
goto l25;
}
