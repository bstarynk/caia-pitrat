#include "dx.h"
void CRATOMY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,V166=0,WW=0,V168=0,V61=0,V105=0,EZ=0,V103=0,V119=0,V172=0,V122=0,V174=0,V8=0,V=0,V49=0,V37=0,V39=0,V79=0,V52=0,RA=0,V85=0,V54=0,V138=0,VV=0,V135=0,V134=0,K=0,V156=0,V136=0,V162=0,V160=0,V161=0,V165=0,V163=0,V164=0,V158=0,V159=0,V157=0;
int N;
int EA;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=134;
x[jvj+1]=10407;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==941&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; EA=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+123]=0 ;z[jvj+123]=0;
x[EA]=x[jvj+123] ;z[EA]=z[jvj+123];
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(1688,N,jvj+48)*/
pile[v[22]]=N; pile[WZ1]=jvj+49; 
(*f[1242])( );     /*CRATOMETRAD1(N,jvj+49)*/
x[jvj+50]=d[232];z[jvj+50]=0;
x[jvj+128]=x[jvj+48] ;z[jvj+128]=z[jvj+48];
l31:if((x[jvj+128]>0)) goto l32;
x[jvj+58]=d[234];z[jvj+58]=0;
x[jvj+129]=x[jvj+48] ;z[jvj+129]=z[jvj+48];
l34:if((x[jvj+129]>0)) goto l35;
x[jvj+67]=d[233];z[jvj+67]=0;
x[jvj+130]=x[jvj+48] ;z[jvj+130]=z[jvj+48];
l37:if((x[jvj+130]>0)) goto l38;
x[jvj+71]=d[233];z[jvj+71]=0;
x[jvj+132]=x[jvj+48] ;z[jvj+132]=z[jvj+48];
l41:if((x[jvj+132]<=0)) goto l45;
x[jvj+3]=s[x[jvj+132]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+132];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+3,jvj+72)*/
if((x[jvj+72]==43)) goto l43;
if((x[jvj+72]!=22)) goto l42;
pile[v[22]]=111; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+3,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=21)) goto l44;
pile[v[22]]=292; pile[WZ1]=21; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(292,21,jvj+46)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+47; 
(*f[938])( );     /*USE0(jvj+3,jvj+47)*/
V174=x[jvj+46];
l29:if((V174>0)) goto l30;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+45; 
(*f[414])( );     /*FNDFONC0(jvj+3,jvj+45)*/
x[jvj+127]=x[jvj+45] ;z[jvj+127]=z[jvj+45];
l26:if((x[jvj+127]>0)) goto l27;
pile[v[22]]=1626; pile[WZ1]=145; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(1626,145,jvj+40)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+41; 
(*f[1002])( );     /*FNDOBJ0(jvj+3,jvj+41)*/
V172=x[jvj+40];
l23:if((V172>0)) goto l24;
pile[v[22]]=N; pile[WZ1]=jvj+3; pile[WZ2]=jvj+81; 
(*f[1243])( );     /*CRATOMETRAD2(N,jvj+3,jvj+81)*/
pile[v[22]]=576; pile[WZ1]=860; pile[WZ2]=jvj+121; 
(*f[54])( );     /*TRI1(576,860,jvj+121)*/
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=447; pile[WZ3]=jvj+81; pile[WZ4]=jvj+121; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(218,jvj+3,447,jvj+81,jvj+121,jvj+82)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+82; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+71,jvj+82,EA)*/
l44:pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+79,jvj+83)*/
x[jvj+14]=x[jvj+83] ;z[jvj+14]=z[jvj+83];
pile[v[22]]=1045; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1045,jvj+14,jvj+15)*/
if((x[jvj+15]==68)) goto l42;
l7:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+3,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=21)) goto l9;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1564,145,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l8;
l9:pile[v[22]]=292; pile[WZ1]=21; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(292,21,jvj+16)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+17; 
(*f[938])( );     /*USE0(jvj+3,jvj+17)*/
V168=x[jvj+16];
l10:if((V168>0)) goto l11;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+8; 
(*f[414])( );     /*FNDFONC0(jvj+3,jvj+8)*/
x[jvj+124]=x[jvj+8] ;z[jvj+124]=z[jvj+8];
l4:if((x[jvj+124]>0)) goto l5;
pile[v[22]]=1626; pile[WZ1]=145; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1626,145,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1002])( );     /*FNDOBJ0(jvj+3,jvj+4)*/
V166=x[jvj+2];
l1:if((V166>0)) goto l2;
pile[v[22]]=N; pile[WZ1]=jvj+3; pile[WZ2]=jvj+84; 
(*f[1243])( );     /*CRATOMETRAD2(N,jvj+3,jvj+84)*/
pile[v[22]]=576; pile[WZ1]=860; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(576,860,jvj+122)*/
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=447; pile[WZ3]=jvj+84; pile[WZ4]=jvj+122; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(218,jvj+3,447,jvj+84,jvj+122,jvj+85)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+85; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+71,jvj+85,EA)*/
l42:x[jvj+132]=t[x[jvj+132]];
goto l41;
l2:X=s[V166];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==X) goto l42;
V166=t[V166];
goto l1;
l3:pile[v[22]]=1815; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1815,jvj+5,jvj+7)*/
if((x[jvj+7]==67)) goto l42;
l6:x[jvj+124]=t[x[jvj+124]];
goto l4;
l5:x[jvj+5]=s[x[jvj+124]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+124];
pile[v[22]]=1854; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1854,jvj+5,jvj+6)*/
goto l42;
l8:pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+3,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+12,jvj+13)*/
if(x[jvj+13]==96||x[jvj+13]==89||x[jvj+13]==41||x[jvj+13]==20||x[jvj+13]==128||x[jvj+13]==570||x[jvj+13]==1317) goto l42;
goto l9;
l11:WW=s[V168];
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==WW) goto l42;
V168=t[V168];
goto l10;
l13:x[jvj+19]=s[x[jvj+125]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+125];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=73)) goto l14;
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+19,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+21,V61)*/
V61=pile[WZ2]; 
if((V54!=V61)) goto l14;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+19,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==904)) goto l49;
l14:x[jvj+125]=t[x[jvj+125]];
l12:if((x[jvj+125]>0)) goto l13;
pile[v[22]]=N; pile[WZ1]=jvj+24; 
(*f[1242])( );     /*CRATOMETRAD1(N,jvj+24)*/
x[jvj+25]=d[232];z[jvj+25]=0;
pile[v[22]]=1814; pile[WZ1]=860; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(1814,860,jvj+106)*/
pile[v[22]]=110; pile[WZ1]=V54; pile[WZ2]=447; pile[WZ3]=jvj+24; pile[WZ4]=jvj+106; pile[WZ5]=jvj+26; 
(*f[48])( );     /*QUADRI1(110,V54,447,jvj+24,jvj+106,jvj+26)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+25,jvj+26,EA)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+107)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=RA; pile[WZ4]=jvj+111; 
(*f[270])( );     /*QUADRI7(100,21,140,RA,jvj+111)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=509; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,509,jvj+114)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V54; pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,V54,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=103; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+114; pile[WZ4]=jvj+113; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+114,jvj+113,jvj+109)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+108,jvj+109,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+111,jvj+110,jvj+27)*/
pile[v[22]]=jvj+24; pile[WZ1]=1688; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+24,1688,jvj+27)*/
l49:x[jvj+133]=t[x[jvj+133]];
l48:if((x[jvj+133]<=0)) goto l47;
x[jvj+97]=s[x[jvj+133]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+133];
pile[v[22]]=140; pile[WZ1]=jvj+97; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(140,jvj+97,V85)*/
V85=pile[WZ2]; 
V54=V85;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1689,N,jvj+18)*/
x[jvj+125]=x[jvj+18] ;z[jvj+125]=z[jvj+18];
goto l12;
l15:pile[v[22]]=1815; pile[WZ1]=jvj+28; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1815,jvj+28,jvj+30)*/
if((x[jvj+30]==67)) goto l42;
l18:x[jvj+126]=t[x[jvj+126]];
l16:if((x[jvj+126]>0)) goto l17;
pile[v[22]]=N; pile[WZ1]=jvj+3; pile[WZ2]=jvj+77; 
(*f[1243])( );     /*CRATOMETRAD2(N,jvj+3,jvj+77)*/
pile[v[22]]=576; pile[WZ1]=860; pile[WZ2]=jvj+120; 
(*f[54])( );     /*TRI1(576,860,jvj+120)*/
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=447; pile[WZ3]=jvj+77; pile[WZ4]=jvj+120; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(218,jvj+3,447,jvj+77,jvj+120,jvj+78)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+78; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+71,jvj+78,EA)*/
goto l42;
l17:x[jvj+28]=s[x[jvj+126]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+126];
pile[v[22]]=1854; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1854,jvj+28,jvj+29)*/
goto l42;
l20:V105=s[EZ];
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==V105) goto l21;
l39:x[jvj+130]=t[x[jvj+130]];
goto l37;
l21:EZ=t[EZ];
l19:if((EZ>0)) goto l20;
pile[v[22]]=66; pile[WZ1]=860; pile[WZ2]=jvj+119; 
(*f[54])( );     /*TRI1(66,860,jvj+119)*/
pile[v[22]]=218; pile[WZ1]=jvj+33; pile[WZ2]=447; pile[WZ3]=jvj+49; pile[WZ4]=jvj+119; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(218,jvj+33,447,jvj+49,jvj+119,jvj+70)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+70; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+67,jvj+70,EA)*/
goto l39;
l22:x[jvj+131]=x[jvj+33] ;z[jvj+131]=z[jvj+33];
l40:x[jvj+68]=x[jvj+131] ;z[jvj+68]=z[jvj+131];
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[938])( );     /*USE0(jvj+68,jvj+69)*/
EZ=x[jvj+69];
if((EZ==0)) goto l39;
pile[v[22]]=292; pile[WZ1]=21; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(292,21,jvj+32)*/
goto l19;
l24:V119=s[V172];
for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==V119) goto l44;
V172=t[V172];
goto l23;
l25:pile[v[22]]=1815; pile[WZ1]=jvj+42; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1815,jvj+42,jvj+44)*/
if((x[jvj+44]==67)) goto l44;
l28:x[jvj+127]=t[x[jvj+127]];
goto l26;
l27:x[jvj+42]=s[x[jvj+127]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+127];
pile[v[22]]=1854; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1854,jvj+42,jvj+43)*/
goto l44;
l30:V122=s[V174];
for(a=x[jvj+47];a>0;a=t[a]) if(s[a]==V122) goto l44;
V174=t[V174];
goto l29;
l32:x[jvj+51]=s[x[jvj+128]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+128];
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=1604)) goto l33;
pile[v[22]]=102; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+51,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+54,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+51; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+51,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+55,jvj+56)*/
x[jvj+115]=x[jvj+56] ;z[jvj+115]=z[jvj+56];
if(x[jvj+115]!=1814&&x[jvj+115]!=1050&&x[jvj+115]!=758&&x[jvj+115]!=576) goto l33;
V=V8;
pile[v[22]]=jvj+115; pile[WZ1]=860; pile[WZ2]=jvj+116; 
(*f[54])( );     /*TRI1(jvj+115,860,jvj+116)*/
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=447; pile[WZ3]=jvj+49; pile[WZ4]=jvj+116; pile[WZ5]=jvj+57; 
(*f[48])( );     /*QUADRI1(110,V,447,jvj+49,jvj+116,jvj+57)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+57; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+50,jvj+57,EA)*/
l33:x[jvj+128]=t[x[jvj+128]];
goto l31;
l35:x[jvj+59]=s[x[jvj+129]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+129];
pile[v[22]]=100; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+59,jvj+60)*/
if((x[jvj+60]!=22)) goto l36;
pile[v[22]]=102; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+59,jvj+61)*/
pile[v[22]]=140; pile[WZ1]=jvj+61; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+61,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+59; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+59,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+62,jvj+63)*/
V37=x[jvj+63];
if(V37!=278&&V37!=910) goto l36;
pile[v[22]]=103; pile[WZ1]=jvj+59; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+59,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+64,jvj+65)*/
if((x[jvj+65]==454)) goto l36;
V39=V49;
pile[v[22]]=576; pile[WZ1]=860; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(576,860,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+49; pile[WZ2]=447; pile[WZ3]=jvj+118; 
(*f[58])( );     /*TRI3(jvj+117,jvj+49,447,jvj+118)*/
pile[v[22]]=110; pile[WZ1]=V39; pile[WZ2]=218; pile[WZ3]=jvj+64; pile[WZ4]=jvj+118; pile[WZ5]=jvj+66; 
(*f[48])( );     /*QUADRI1(110,V39,218,jvj+64,jvj+118,jvj+66)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+66; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+58,jvj+66,EA)*/
l36:x[jvj+129]=t[x[jvj+129]];
goto l34;
l38:x[jvj+33]=s[x[jvj+130]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+130];
x[jvj+131]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+33,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+35,jvj+36)*/
V103=x[jvj+36];
if(V103!=1698&&V103!=1725) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+33,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=21)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+33,jvj+39)*/
x[jvj+131]=x[jvj+39] ;z[jvj+131]=z[jvj+39];
goto l40;
l43:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+3,jvj+73)*/
pile[v[22]]=101; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+73,jvj+74)*/
x[jvj+75]=x[jvj+74] ;z[jvj+75]=z[jvj+74];
pile[v[22]]=1815; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1815,jvj+75,jvj+76)*/
if((x[jvj+76]!=68)) goto l42;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+31; 
(*f[414])( );     /*FNDFONC0(jvj+3,jvj+31)*/
x[jvj+126]=x[jvj+31] ;z[jvj+126]=z[jvj+31];
goto l16;
l46:x[jvj+86]=s[x[jvj+48]] ;z[jvj+86]=(x[jvj+86]<=sepcte) ? x[jvj+86] : z[jvj+48];
pile[v[22]]=111; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+86,jvj+87)*/
pile[v[22]]=101; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+87,jvj+88)*/
if((x[jvj+88]!=1607)) goto l47;
pile[v[22]]=102; pile[WZ1]=jvj+86; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+86,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+89,jvj+90)*/
if((x[jvj+90]!=22)) goto l47;
pile[v[22]]=102; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+89,jvj+91)*/
pile[v[22]]=140; pile[WZ1]=jvj+91; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(140,jvj+91,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+89; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+89,jvj+92)*/
pile[v[22]]=101; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+92,jvj+93)*/
V52=x[jvj+93];
if(V52!=1633&&V52!=871) goto l47;
pile[v[22]]=103; pile[WZ1]=jvj+86; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,jvj+86,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+94,jvj+95)*/
if((x[jvj+95]!=128)) goto l47;
pile[v[22]]=128; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(128,jvj+94,jvj+96)*/
RA=V79;
x[jvj+133]=x[jvj+96] ;z[jvj+133]=z[jvj+96];
goto l48;
l47:x[jvj+48]=t[x[jvj+48]];
l45:if((x[jvj+48]>0)) goto l46;
if((x[EA]!=0)) goto l53;
if((v[243]!=2)) goto l53;
pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(498,N,jvj+100)*/
pile[v[22]]=1363; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[33])( );     /*FNDE0(1363,jvj+100,jvj+101)*/
if((x[jvj+101]==0)) goto l53;
V162=x[jvj+100];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,0,300,V160)*/
V160=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V162; pile[WZ2]=V160; 
(*f[39])( );     /*SDX0(20,V162,V160,V161)*/
V161=pile[WZ3]; 
pile[v[22]]=V161; 
(*f[40])( );     /*SLG0(V161)*/
l53:if((v[243]!=2)) goto l58;
if((x[EA]==0)) goto l54;
pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(498,N,jvj+102)*/
pile[v[22]]=1363; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(1363,jvj+102,jvj+103)*/
if((x[jvj+103]!=0)) goto l54;
V165=x[jvj+102];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=397; 
(*f[42])( );     /*SRA1(135,0,397,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V165; pile[WZ2]=V163; 
(*f[39])( );     /*SDX0(20,V165,V163,V164)*/
V164=pile[WZ3]; 
pile[v[22]]=V164; 
(*f[40])( );     /*SLG0(V164)*/
l54:pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(498,N,jvj+104)*/
V158=x[jvj+104];
x[jvj+134]=x[EA] ;z[jvj+134]=z[EA];
l55:if((x[jvj+134]<=0)) goto l58;
x[jvj+98]=s[x[jvj+134]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+134];
pile[v[22]]=860; pile[WZ1]=jvj+98; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(860,jvj+98,jvj+105)*/
V159=x[jvj+105];
pile[v[22]]=20; pile[WZ1]=V158; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V158,0,V157)*/
V157=pile[WZ3]; 
pile[WZ1]=V159; pile[WZ2]=V157; 
(*f[39])( );     /*SDX0(20,V159,V157,V135)*/
V135=pile[WZ3]; 
V134=incon;
pile[v[22]]=110; pile[WZ1]=jvj+98; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(110,jvj+98,V138)*/
V138=pile[WZ2]; 
VV=V138;
pile[v[22]]=V135; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V135,VV,V134)*/
V134=pile[WZ2]; 
l51:V136=incon;
pile[v[22]]=218; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(218,jvj+98,jvj+99)*/
K=x[jvj+99];
V156=K;
pile[v[22]]=20; pile[WZ1]=V156; pile[WZ2]=V134; 
(*f[39])( );     /*SDX0(20,V156,V134,V136)*/
V136=pile[WZ3]; 
l57:pile[v[22]]=V136; 
(*f[40])( );     /*SLG0(V136)*/
l56:x[jvj+134]=t[x[jvj+134]];
goto l55;
l50:V134=V135;
goto l51;
l52:V136=V134;
goto l57;
l58:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
