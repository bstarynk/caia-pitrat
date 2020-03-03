#include "dx.h"
void AJUSTECAL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V20=0,V71=0,V=0,XA=0,EE=0,V58=0;
int A,BA,XP,NF,XD;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=80;
x[jvj+1]=11782;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1712&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; BA=pile[v[22]+1]; XP=pile[v[22]+2]; NF=pile[v[22]+3]; XD=pile[v[22]+4]; R=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
XA=x[R]=x[jvj+48]=x[jvj+55]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,A,jvj+23)*/
if(x[jvj+23]==96||x[jvj+23]==89||x[jvj+23]==41||x[jvj+23]==20||x[jvj+23]==128||x[jvj+23]==570||x[jvj+23]==1317) goto l26;
if((x[jvj+23]==73)) goto l27;
if((x[jvj+23]!=22)) goto l29;
pile[v[22]]=111; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,A,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==1698)) goto l29;
pile[v[22]]=1656; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1656,jvj+27,jvj+28)*/
if((x[jvj+28]!=68)) goto l29;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,A,jvj+29)*/
pile[v[22]]=103; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,A,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=BA; pile[WZ2]=jvj+32; pile[WZ3]=jvj+31; 
(*f[1496])( );     /*TYPEXPR0(jvj+29,BA,jvj+32,jvj+31)*/
pile[v[22]]=jvj+30; pile[WZ2]=jvj+34; pile[WZ3]=jvj+33; 
(*f[1496])( );     /*TYPEXPR0(jvj+30,BA,jvj+34,jvj+33)*/
x[jvj+19]=incon;
if((x[jvj+31]==1881)) goto l16;
if((x[jvj+33]==1881)) goto l16;
l15:if((x[jvj+31]==1917)) goto l17;
if((x[jvj+33]==1917)) goto l17;
l18:if((x[jvj+31]!=129)) goto l21;
if((x[jvj+33]!=129)) goto l21;
pile[v[22]]=1481; pile[WZ1]=100; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1481,100,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l19;
l21:if(x[jvj+19]==incon) goto l22;
l52:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+57)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+57; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+57,R)*/
x[jvj+76]=w[43][9];
l23:if((x[jvj+76]<=0)) goto l30;
x[jvj+16]=s[x[jvj+76]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+76];
pile[v[22]]=jvj+16; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+16,A,jvj+17)*/
x[jvj+18]=x[jvj+17] ;z[jvj+18]=z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=BA; pile[WZ2]=jvj+19; pile[WZ3]=jvj+20; 
(*f[1497])( );if(v[102]) goto l24;     /*AJUSTECAL0(jvj+18,BA,jvj+19,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[35])( );     /*CHGC1(R,jvj+16,jvj+20)*/
l24:x[jvj+76]=t[x[jvj+76]];
goto l23;
l2:x[jvj+3]=1745 ;z[jvj+3]=1745;
l1:pile[v[22]]=1656; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1656,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l34;
l3:V5=incon;
pile[v[22]]=1834; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1834,jvj+3,jvj+7)*/
V5=x[jvj+7];
l5:x[jvj+78]=incon;
pile[v[22]]=1876; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1876,jvj+3,jvj+8)*/
x[jvj+78]=x[jvj+8] ;z[jvj+78]=z[jvj+8];
l33:pile[v[22]]=jvj+5; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+47; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+47,jvj+48)*/
pile[v[22]]=A; pile[WZ1]=jvj+48; pile[WZ2]=BA; pile[WZ3]=jvj+3; pile[WZ4]=XD; 
(*f[1706])( );     /*AJUSTECALA0(A,jvj+48,BA,jvj+3,XD)*/
XA=V5;
x[jvj+55]=x[jvj+78] ;z[jvj+55]=z[jvj+78];
l36:V58=0;
EE=V58;
if(XA==incon) goto l37;
l38:if(x[R]==incon) goto l39;
l43:if(x[jvj+55]==incon) goto l44;
l45:if(x[R]==incon) goto l46;
l51:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; v[102]=0;return;
l4:V5=x[XP];
goto l5;
l6:x[jvj+78]=250 ;z[jvj+78]=250;
goto l33;
l7:x[jvj+11]=250 ;z[jvj+11]=250;
l10:V20=incon;
pile[v[22]]=1834; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1834,jvj+11,jvj+13)*/
V20=x[jvj+13];
l8:x[jvj+52]=incon;
pile[v[22]]=1835; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1835,jvj+11,jvj+12)*/
x[jvj+52]=x[jvj+12] ;z[jvj+52]=z[jvj+12];
l35:pile[v[22]]=jvj+9; pile[WZ1]=jvj+50; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+50)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,A,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=BA; pile[WZ2]=jvj+52; pile[WZ3]=jvj+53; 
(*f[1497])( );if(v[102]) goto l36;     /*AJUSTECAL0(jvj+51,BA,jvj+52,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=103; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+54,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+62; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+50,jvj+62,jvj+48)*/
XA=V20;
goto l36;
l9:x[jvj+52]=250 ;z[jvj+52]=250;
goto l35;
l11:V20=250;
goto l8;
l13:x[jvj+79]=s[x[jvj+80]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+80];
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[jvj+79]) goto l14;
x[jvj+80]=t[x[jvj+80]];
l12:if((x[jvj+80]>0)) goto l13;
x[jvj+77]=250 ;z[jvj+77]=250;
l31:x[jvj+48]=x[A] ;z[jvj+48]=z[A];
x[jvj+55]=x[jvj+77] ;z[jvj+55]=z[jvj+77];
XA=x[jvj+44];
EE=x[jvj+45];
goto l38;
l14:x[jvj+77]=x[jvj+79] ;z[jvj+77]=z[jvj+79];
goto l31;
l16:x[jvj+19]=1881 ;z[jvj+19]=1881;
goto l15;
l17:x[jvj+19]=1917 ;z[jvj+19]=1917;
goto l18;
l19:for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[jvj+34]) goto l20;
goto l21;
l20:x[jvj+19]=1881 ;z[jvj+19]=1881;
goto l52;
l22:x[jvj+19]=129 ;z[jvj+19]=129;
goto l52;
l25:x[jvj+25]=1745 ;z[jvj+25]=1745;
l28:pile[v[22]]=jvj+21; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,73,111,jvj+24,R)*/
pile[v[22]]=A; pile[WZ1]=R; pile[WZ2]=BA; pile[WZ3]=jvj+25; 
(*f[1707])( );     /*AJUSTECALA1(A,R,BA,jvj+25)*/
l30:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=V; pile[WZ2]=jvj+43; 
(*f[1491])( );     /*VDSBA0(BA,V,jvj+43)*/
pile[v[22]]=129; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(129,jvj+43,jvj+44)*/
pile[v[22]]=1261; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1261,jvj+43,jvj+45)*/
x[jvj+77]=incon;
pile[v[22]]=159; pile[WZ1]=100; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,100,jvj+14)*/
x[jvj+80]=x[jvj+45] ;z[jvj+80]=z[jvj+45];
goto l12;
l26:x[R]=x[A] ;z[R]=z[A];
goto l30;
l27:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,A,jvj+21)*/
x[jvj+25]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+21,jvj+22)*/
x[jvj+25]=x[jvj+22] ;z[jvj+25]=z[jvj+22];
goto l28;
l29:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,A,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=1698)) goto l30;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,A,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+37,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,A,jvj+38)*/
pile[v[22]]=BA; pile[WZ1]=V71; pile[WZ2]=jvj+39; 
(*f[1491])( );     /*VDSBA0(BA,V71,jvj+39)*/
pile[v[22]]=129; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(129,jvj+39,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=BA; pile[WZ3]=jvj+41; 
(*f[1497])( );if(v[102]) goto l30;     /*AJUSTECAL0(jvj+38,BA,jvj+40,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1698; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,1698,jvj+58)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V71; pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(100,21,140,V71,jvj+61)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+59,jvj+42,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+61,jvj+60,R)*/
goto l30;
l32:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,A,jvj+46)*/
if((x[jvj+46]!=22)) goto l34;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,A,jvj+5)*/
x[jvj+3]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
x[jvj+3]=x[jvj+6] ;z[jvj+3]=z[jvj+6];
goto l1;
l34:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,A,jvj+49)*/
if((x[jvj+49]!=43)) goto l36;
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,A,jvj+9)*/
x[jvj+11]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
goto l10;
l37:XA=250;
goto l38;
l39:if(x[jvj+48]!=incon) goto l40;
goto l43;
l40:if((XA==1917)) goto l41;
if((XA!=129)) goto l43;
if((x[XP]!=1917)) goto l43;
for(a=EE;a>0;a=t[a]) if(s[a]==1814) goto l56;
goto l43;
l41:if((x[XP]==1881)) goto l42;
if((x[XP]!=129)) goto l43;
for(a=EE;a>0;a=t[a]) if(s[a]==1814) goto l54;
for(a=EE;a>0;a=t[a]) if(s[a]==1050) goto l55;
goto l43;
l42:for(a=EE;a>0;a=t[a]) if(s[a]==1050) goto l53;
goto l43;
l44:x[jvj+55]=250 ;z[jvj+55]=250;
goto l45;
l46:if(x[jvj+48]!=incon) goto l47;
l50:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l47:if((XA==129)) goto l48;
if((XA!=1881)) goto l49;
if((x[XP]!=129)) goto l49;
pile[v[22]]=530; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(530,jvj+55,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+56; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+56,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+74; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+74,R)*/
goto l51;
l48:if((x[XP]!=1881)) goto l49;
if((x[jvj+75]=w[x[jvj+55]][3])==incon) goto l49;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+72)*/
pile[v[22]]=jvj+48; pile[WZ1]=103; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+48,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+72,jvj+71,R)*/
goto l51;
l49:x[R]=x[jvj+48] ;z[R]=z[jvj+48];
goto l51;
l53:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=130; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+64)*/
pile[v[22]]=jvj+48; pile[WZ1]=103; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+48,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+64,jvj+63,R)*/
goto l43;
l54:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=438; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,438,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+66; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+66,R)*/
goto l43;
l55:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1788; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,1788,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+68; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+68,R)*/
goto l43;
l56:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=170; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,170,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+70; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+48,jvj+70,R)*/
goto l43;
}
