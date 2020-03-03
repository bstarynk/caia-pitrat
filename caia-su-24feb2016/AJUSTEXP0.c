#include "dx.h"
void AJUSTEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V48=0,V49=0,V83=0,V=0;
int A,BA,XP,XD;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=95;
x[jvj+1]=11783;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1499&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; BA=pile[v[22]+1]; XP=pile[v[22]+2]; XD=pile[v[22]+3]; R=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]!=22)) goto l37;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=729; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(729,jvj+4,jvj+5)*/
if((x[jvj+5]==228)) goto l1;
l37:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,A,jvj+45)*/
if(x[jvj+45]==96||x[jvj+45]==89||x[jvj+45]==41||x[jvj+45]==20||x[jvj+45]==128||x[jvj+45]==570||x[jvj+45]==1317) goto l1;
if((x[jvj+45]==43)) goto l38;
if((x[jvj+45]!=22)) goto l43;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,A,jvj+6)*/
x[jvj+11]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
x[jvj+11]=x[jvj+7] ;z[jvj+11]=z[jvj+7];
l41:if((x[jvj+11]==1698)) goto l43;
x[jvj+8]=incon;
if((x[jvj+11]!=1745)) goto l48;
pile[v[22]]=jvj+6; pile[WZ1]=BA; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+8; 
(*f[1711])( );if(v[102]) goto l48;     /*AJUSTFIN0(jvj+6,BA,1881,XD,jvj+8)*/
l42:pile[v[22]]=jvj+8; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+52; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+52,R)*/
pile[v[22]]=436; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(436,A,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=436; 
(*f[35])( );     /*CHGC1(R,436,jvj+14)*/
l7:x[jvj+94]=w[1659][9];
l8:if((x[jvj+94]>0)) goto l9;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,A,jvj+19)*/
x[jvj+21]=incon;
if((x[XP]==228)) goto l5;
pile[v[22]]=1883; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1883,jvj+11,jvj+13)*/
x[jvj+21]=x[jvj+13] ;z[jvj+21]=z[jvj+13];
l12:if((x[jvj+19]<=0)) goto l47;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=BA; pile[WZ2]=jvj+21; pile[WZ3]=XD; pile[WZ4]=jvj+22; 
(*f[1711])( );if(v[102]) goto l13;     /*AJUSTFIN0(jvj+20,BA,jvj+21,XD,jvj+22)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(R,107,jvj+22)*/
l13:x[jvj+19]=t[x[jvj+19]];
goto l12;
l1:x[R]=x[A] ;z[R]=z[A];
l47:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l2:x[jvj+11]=1745 ;z[jvj+11]=1745;
goto l41;
l3:x[jvj+17]=228 ;z[jvj+17]=228;
l11:x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=BA; pile[WZ2]=jvj+17; pile[WZ3]=XD; pile[WZ4]=jvj+18; 
(*f[1711])( );if(v[102]) goto l10;     /*AJUSTFIN0(jvj+16,BA,jvj+17,XD,jvj+18)*/
pile[v[22]]=R; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[35])( );     /*CHGC1(R,jvj+9,jvj+18)*/
l10:x[jvj+94]=t[x[jvj+94]];
goto l8;
l4:x[jvj+17]=250 ;z[jvj+17]=250;
goto l11;
l5:x[jvj+21]=228 ;z[jvj+21]=228;
goto l12;
l6:x[jvj+21]=250 ;z[jvj+21]=250;
goto l12;
l9:x[jvj+9]=s[x[jvj+94]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+94];
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+9,A,jvj+15)*/
x[jvj+17]=incon;
if((x[XP]==228)) goto l3;
pile[v[22]]=1877; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1877,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+10,jvj+11,jvj+12)*/
x[jvj+93]=x[jvj+12] ;z[jvj+93]=z[jvj+12];
x[jvj+17]=x[jvj+93] ;z[jvj+17]=z[jvj+93];
goto l11;
l14:x[jvj+25]=250 ;z[jvj+25]=250;
l39:pile[v[22]]=jvj+23; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+46)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,A,jvj+47)*/
x[jvj+48]=incon;
pile[v[22]]=1835; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1835,jvj+25,jvj+26)*/
x[jvj+48]=x[jvj+26] ;z[jvj+48]=z[jvj+26];
l16:x[jvj+49]=incon;
pile[v[22]]=1873; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1873,jvj+25,jvj+27)*/
x[jvj+49]=x[jvj+27] ;z[jvj+49]=z[jvj+27];
l40:pile[v[22]]=jvj+47; pile[WZ1]=BA; pile[WZ2]=jvj+48; pile[WZ3]=jvj+49; pile[WZ4]=XD; pile[WZ5]=jvj+50; 
(*f[1712])( );if(v[102]) goto l43;     /*AJUSTECAL1(jvj+47,BA,jvj+48,jvj+49,XD,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=103; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+51,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+83; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+46,jvj+83,R)*/
goto l47;
l15:x[jvj+48]=250 ;z[jvj+48]=250;
goto l16;
l17:x[jvj+49]=250 ;z[jvj+49]=250;
goto l40;
l20:x[jvj+95]=s[x[jvj+28]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+28];
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[jvj+95]) goto l21;
x[jvj+28]=t[x[jvj+28]];
l19:if((x[jvj+28]>0)) goto l20;
x[jvj+42]=250 ;z[jvj+42]=250;
l25:x[jvj+64]=incon;
if((x[jvj+61]!=129)) goto l30;
if((V49==1881)) goto l26;
if((V49!=1917)) goto l28;
pile[v[22]]=A; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(A,jvj+34)*/
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==1814) goto l49;
l28:if((V48==67)) goto l29;
l30:if((V48!=68)) goto l31;
pile[v[22]]=A; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(A,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=585; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,585,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+72; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+72,jvj+64)*/
l31:if((x[jvj+61]==1917)) goto l32;
if((x[jvj+61]!=1881)) goto l35;
if((V48!=67)) goto l35;
if(V49!=1881&&V49!=228) goto l35;
pile[v[22]]=530; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(530,jvj+42,jvj+43)*/
pile[v[22]]=A; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(A,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+43; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+43,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+82; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+82,jvj+64)*/
l45:x[R]=x[jvj+64] ;z[R]=z[jvj+64];
goto l47;
l21:x[jvj+42]=x[jvj+95] ;z[jvj+42]=z[jvj+95];
goto l25;
l23:V48=68;
l18:x[jvj+42]=incon;
pile[v[22]]=159; pile[WZ1]=100; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(159,100,jvj+28)*/
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+30)*/
goto l19;
l24:V49=x[jvj+61];
l22:V48=incon;
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==23) goto l23;
V48=67;
goto l18;
l26:if((V48!=67)) goto l30;
if((x[jvj+42]!=250)) goto l27;
pile[v[22]]=A; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(A,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=295; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,295,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+66; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+66,jvj+64)*/
l29:if(V49!=250&&V49!=228) goto l35;
pile[v[22]]=A; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(A,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=295; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,295,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+70; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+70,jvj+64)*/
goto l45;
l27:pile[v[22]]=A; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(A,jvj+32)*/
if((x[jvj+88]=w[x[jvj+42]][3])==incon) goto l29;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+88; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+88,jvj+63)*/
pile[v[22]]=jvj+32; pile[WZ1]=103; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+32,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+63,jvj+62,jvj+64)*/
goto l29;
l32:if((V49!=1881)) goto l33;
pile[v[22]]=A; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(A,jvj+38)*/
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==1050) goto l50;
l33:if(V49!=129&&V49!=228) goto l35;
pile[v[22]]=A; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(A,jvj+40)*/
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+41)*/
for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==1814) goto l51;
l34:for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==1050) goto l52;
l35:if(x[jvj+64]==incon) goto l36;
goto l45;
l36:x[jvj+64]=x[A] ;z[jvj+64]=z[A];
goto l45;
l38:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,A,jvj+23)*/
x[jvj+25]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+23,jvj+24)*/
x[jvj+25]=x[jvj+24] ;z[jvj+25]=z[jvj+24];
goto l39;
l43:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,A,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=1698)) goto l44;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,A,jvj+55)*/
pile[v[22]]=140; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+55,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,A,jvj+56)*/
pile[v[22]]=BA; pile[WZ1]=V83; pile[WZ2]=jvj+57; 
(*f[1491])( );     /*VDSBA0(BA,V83,jvj+57)*/
pile[v[22]]=129; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(129,jvj+57,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=BA; pile[WZ3]=jvj+59; 
(*f[1233])( );if(v[102]) goto l44;     /*MISENFORME0(jvj+56,BA,jvj+58,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[255])( );     /*COPEXP0(jvj+59,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1698; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,1698,jvj+84)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V83; pile[WZ4]=jvj+87; 
(*f[270])( );     /*QUADRI7(100,21,140,V83,jvj+87)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+85,jvj+60,103,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+87,jvj+86,R)*/
goto l47;
l44:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=V; pile[WZ2]=jvj+29; 
(*f[1491])( );     /*VDSBA0(BA,V,jvj+29)*/
pile[v[22]]=129; pile[WZ1]=jvj+29; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(129,jvj+29,jvj+61)*/
V49=incon;
if((x[XP]==250)) goto l24;
V49=x[XP];
goto l22;
l46:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l48:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+11; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+11,jvj+8)*/
goto l42;
l49:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=170; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,170,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+68; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+68,jvj+64)*/
goto l28;
l50:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=130; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+74)*/
pile[v[22]]=jvj+38; pile[WZ1]=103; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+38,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+74,jvj+73,jvj+64)*/
goto l33;
l51:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=295; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,295,jvj+75)*/
pile[WZ3]=438; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,438,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=111; pile[WZ2]=jvj+90; 
(*f[54])( );     /*TRI1(jvj+89,111,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+90; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+90,jvj+77)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+77,jvj+76,jvj+64)*/
goto l34;
l52:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=295; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,295,jvj+78)*/
pile[WZ3]=648; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,648,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+92; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+92,jvj+80)*/
pile[v[22]]=jvj+78; pile[WZ1]=111; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,111,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+79,jvj+64)*/
goto l45;
}
