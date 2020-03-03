#include "dx.h"
void NATFNA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V54=0,V77=0,V117=0,V99=0,V130=0,V186=0,V165=0,V201=0,V232=0,V245=0,V282=0,V276=0,V290=0,V291=0,V302=0,V322=0,V63=0,V252=0,RT=0,V103=0,V95=0,V211=0,V145=0,V150=0,W=0,V192=0,V328=0,V=0,V37=0,V51=0,V20=0,V352=0;
int A,BA,M;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=179;
x[jvj+1]=11854;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1493&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; BA=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
RT=incon;
if((x[M]!=278)) goto l38;
pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,A,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=1339; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V63,1339,BA)*/
l38:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(100,A,jvj+73)*/
if((x[jvj+73]==22)) goto l39;
if((x[jvj+73]==43)) goto l55;
if((x[jvj+73]!=73)) goto l59;
x[jvj+174]=w[1659][9];
pile[v[22]]=111; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,A,jvj+95)*/
pile[v[22]]=101; pile[WZ1]=jvj+95; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+95,jvj+40)*/
l57:if((x[jvj+174]<=0)) goto l59;
x[jvj+42]=s[x[jvj+174]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+174];
pile[v[22]]=jvj+42; pile[WZ1]=A; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(jvj+42,A,jvj+96)*/
pile[v[22]]=140; pile[WZ1]=jvj+96; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+96,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=319; pile[WZ1]=jvj+42; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(319,jvj+42,jvj+39)*/
V201=V211;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+39,jvj+40,jvj+41)*/
if((x[jvj+41]!=23)) goto l21;
pile[v[22]]=V201; pile[WZ1]=23; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V201,23,BA)*/
l21:pile[v[22]]=1877; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1877,jvj+42,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+40; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+43,jvj+40,jvj+44)*/
pile[v[22]]=V201; pile[WZ1]=jvj+44; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V201,jvj+44,BA)*/
l22:pile[v[22]]=1878; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(1878,jvj+42,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+40; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(jvj+45,jvj+40,jvj+46)*/
pile[v[22]]=V201; pile[WZ1]=jvj+46; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V201,jvj+46,BA)*/
l58:x[jvj+174]=t[x[jvj+174]];
goto l57;
l1:pile[v[22]]=V77; pile[WZ1]=1339; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V77,1339,BA)*/
l3:if((x[jvj+76]!=250)) goto l41;
if((x[jvj+20]!=1698)) goto l41;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=22)) goto l41;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+7,jvj+8)*/
pile[v[22]]=146; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(146,jvj+8,jvj+9)*/
pile[v[22]]=V77; pile[WZ1]=jvj+9; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V77,jvj+9,BA)*/
l41:if(x[jvj+20]!=44&&x[jvj+20]!=45&&x[jvj+20]!=1725&&x[jvj+20]!=1686&&x[jvj+20]!=1741&&x[jvj+20]!=1715) goto l44;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,A,jvj+78)*/
pile[v[22]]=140; pile[WZ1]=jvj+78; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+78,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,A,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=43)) goto l44;
pile[v[22]]=103; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+79,jvj+81)*/
pile[v[22]]=140; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+81,V245)*/
V245=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+79; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+79,jvj+82)*/
pile[v[22]]=101; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+82,jvj+83)*/
if(x[jvj+83]!=365&&x[jvj+83]!=489) goto l44;
x[jvj+84]=d[223];z[jvj+84]=0;
l42:if((x[jvj+84]<=0)) goto l44;
x[jvj+47]=s[x[jvj+84]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+84];
pile[v[22]]=268; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(268,jvj+47,jvj+48)*/
pile[v[22]]=BA; pile[WZ1]=V232; pile[WZ2]=jvj+49; 
(*f[1491])( );     /*VDSBA0(BA,V232,jvj+49)*/
pile[v[22]]=1261; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1261,jvj+49,jvj+50)*/
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==x[jvj+47]) goto l23;
l24:pile[v[22]]=BA; pile[WZ1]=V245; pile[WZ2]=jvj+51; 
(*f[1491])( );     /*VDSBA0(BA,V245,jvj+51)*/
pile[v[22]]=1261; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(1261,jvj+51,jvj+52)*/
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==x[jvj+47]) goto l25;
l43:x[jvj+84]=t[x[jvj+84]];
goto l42;
l2:pile[v[22]]=V77; pile[WZ1]=1430; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V77,1430,BA)*/
goto l3;
l4:x[jvj+94]=1917 ;z[jvj+94]=1917;
l56:pile[v[22]]=V95; pile[WZ1]=jvj+94; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V95,jvj+94,BA)*/
l59:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(111,A,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(101,jvj+97,jvj+98)*/
if((x[jvj+98]==1607)) goto l60;
if((x[jvj+98]!=1604)) goto l78;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(102,A,jvj+139)*/
pile[v[22]]=140; pile[WZ1]=jvj+139; 
(*f[44])( );if(v[102]) goto l78;     /*FNDC1(140,jvj+139,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(103,A,jvj+140)*/
pile[v[22]]=101; pile[WZ1]=jvj+140; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(101,jvj+140,jvj+23)*/
x[jvj+141]=incon;
pile[v[22]]=1775; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1775,jvj+23,jvj+24)*/
x[jvj+141]=x[jvj+24] ;z[jvj+141]=z[jvj+24];
l77:pile[v[22]]=V130; pile[WZ1]=jvj+141; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V130,jvj+141,BA)*/
if(x[jvj+141]!=1814&&x[jvj+141]!=1050) goto l10;
pile[WZ1]=1917; 
(*f[1506])( );     /*NATFNS0(V130,1917,BA)*/
l10:pile[v[22]]=1481; pile[WZ1]=100; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1481,100,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[jvj+141]) goto l11;
l78:if(RT==incon) goto l79;
l96:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(100,A,jvj+160)*/
if((x[jvj+160]!=22)) goto l98;
pile[v[22]]=102; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(102,A,jvj+161)*/
pile[v[22]]=140; pile[WZ1]=jvj+161; 
(*f[44])( );if(v[102]) goto l98;     /*FNDC1(140,jvj+161,V352)*/
V352=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(111,A,jvj+162)*/
pile[v[22]]=101; pile[WZ1]=jvj+162; pile[WZ2]=jvj+163; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(101,jvj+162,jvj+163)*/
pile[v[22]]=1656; pile[WZ1]=jvj+163; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(1656,jvj+163,jvj+164)*/
if((x[jvj+164]!=68)) goto l98;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+165; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(103,A,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=jvj+165; pile[WZ2]=jvj+166; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(100,jvj+165,jvj+166)*/
if((x[jvj+166]!=22)) goto l98;
pile[v[22]]=111; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(111,jvj+165,jvj+167)*/
pile[v[22]]=101; pile[WZ1]=jvj+167; pile[WZ2]=jvj+168; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(101,jvj+167,jvj+168)*/
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+169; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+169)*/
for(a=x[jvj+169];a>0;a=t[a]) if(s[a]==x[jvj+168]) goto l97;
l98:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l8:pile[v[22]]=V99; pile[WZ1]=jvj+22; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V99,jvj+22,BA)*/
l54:x[jvj+90]=t[x[jvj+90]];
l53:if((x[jvj+90]<=0)) goto l59;
x[jvj+91]=s[x[jvj+90]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+90];
pile[v[22]]=140; pile[WZ1]=jvj+91; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(140,jvj+91,V103)*/
V103=pile[WZ2]; 
V99=V103;
pile[v[22]]=1883; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1883,jvj+20,jvj+21)*/
pile[v[22]]=V99; pile[WZ1]=jvj+21; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V99,jvj+21,BA)*/
l7:pile[v[22]]=1882; pile[WZ1]=jvj+20; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(1882,jvj+20,jvj+22)*/
pile[v[22]]=218; pile[WZ1]=BA; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,BA,jvj+12)*/
pile[v[22]]=1688; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1688,jvj+12,jvj+13)*/
x[jvj+173]=x[jvj+13] ;z[jvj+173]=z[jvj+13];
l5:if((x[jvj+173]<=0)) goto l8;
x[jvj+14]=s[x[jvj+173]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+173];
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=1604)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+14,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+17,V117)*/
V117=pile[WZ2]; 
if((V99!=V117)) goto l6;
pile[v[22]]=103; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+14,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]==1709)) goto l54;
l6:x[jvj+173]=t[x[jvj+173]];
goto l5;
l9:x[jvj+141]=x[jvj+23] ;z[jvj+141]=z[jvj+23];
goto l77;
l11:pile[v[22]]=V130; pile[WZ1]=1881; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V130,1881,BA)*/
goto l78;
l13:x[jvj+28]=s[x[jvj+88]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+88];
pile[v[22]]=jvj+28; pile[WZ1]=BA; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(jvj+28,BA,865)*/
x[jvj+88]=t[x[jvj+88]];
l12:if((x[jvj+88]>0)) goto l13;
RT=68;
l51:if((x[M]==228)) goto l59;
if((x[M]!=278)) goto l52;
goto l59;
l15:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l17;
l16:x[jvj+31]=t[x[jvj+31]];
l14:if((x[jvj+31]>0)) goto l15;
pile[v[22]]=BA; pile[WZ1]=V165; pile[WZ2]=jvj+34; 
(*f[1491])( );     /*VDSBA0(BA,V165,jvj+34)*/
pile[v[22]]=1261; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1261,jvj+34,jvj+35)*/
x[jvj+36]=d[223];z[jvj+36]=0;
l18:if((x[jvj+36]<=0)) goto l70;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[jvj+37]) goto l20;
l19:x[jvj+36]=t[x[jvj+36]];
goto l18;
l17:pile[v[22]]=268; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+32,jvj+33)*/
pile[v[22]]=V165; pile[WZ1]=jvj+33; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V165,jvj+33,BA)*/
goto l16;
l20:pile[v[22]]=268; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+37,jvj+38)*/
pile[v[22]]=V186; pile[WZ1]=jvj+38; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V186,jvj+38,BA)*/
goto l19;
l23:pile[v[22]]=V245; pile[WZ1]=jvj+48; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V245,jvj+48,BA)*/
goto l24;
l25:pile[v[22]]=V232; pile[WZ1]=jvj+48; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V232,jvj+48,BA)*/
goto l43;
l28:pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+56,jvj+58)*/
if((x[jvj+58]==21)) goto l48;
l29:pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+57,jvj+59)*/
if((x[jvj+59]==21)) goto l48;
l49:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,A,jvj+87)*/
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l50;
pile[v[22]]=1916; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1916,1714,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l50;
goto l51;
l32:x[jvj+66]=s[x[jvj+65]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+65];
for(a=x[jvj+64];a>0;a=t[a]) if(s[a]==x[jvj+66]) goto l34;
l33:x[jvj+65]=t[x[jvj+65]];
l31:if((x[jvj+65]>0)) goto l32;
pile[v[22]]=BA; pile[WZ1]=V302; pile[WZ2]=jvj+68; 
(*f[1491])( );     /*VDSBA0(BA,V302,jvj+68)*/
pile[v[22]]=1261; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(1261,jvj+68,jvj+69)*/
x[jvj+70]=d[223];z[jvj+70]=0;
l35:if((x[jvj+70]<=0)) goto l72;
x[jvj+71]=s[x[jvj+70]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+70];
for(a=x[jvj+69];a>0;a=t[a]) if(s[a]==x[jvj+71]) goto l37;
l36:x[jvj+70]=t[x[jvj+70]];
goto l35;
l34:pile[v[22]]=268; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+66,jvj+67)*/
pile[v[22]]=V302; pile[WZ1]=jvj+67; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V302,jvj+67,BA)*/
goto l33;
l37:pile[v[22]]=268; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(268,jvj+71,jvj+72)*/
pile[v[22]]=V322; pile[WZ1]=jvj+72; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V322,jvj+72,BA)*/
goto l36;
l39:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,A,jvj+74)*/
pile[v[22]]=140; pile[WZ1]=jvj+74; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+74,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; pile[WZ1]=20; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V252,20,BA)*/
pile[WZ1]=1881; 
(*f[1506])( );     /*NATFNS0(V252,1881,BA)*/
l40:pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+74,jvj+20)*/
if(x[jvj+20]!=44&&x[jvj+20]!=45&&x[jvj+20]!=1725&&x[jvj+20]!=1686&&x[jvj+20]!=1741&&x[jvj+20]!=1715&&x[jvj+20]!=1698) goto l41;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,A,jvj+75)*/
pile[v[22]]=140; pile[WZ1]=jvj+75; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+75,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=BA; pile[WZ2]=jvj+76; pile[WZ3]=jvj+77; 
(*f[1496])( );     /*TYPEXPR0(jvj+5,BA,jvj+76,jvj+77)*/
pile[v[22]]=V77; pile[WZ1]=jvj+76; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V77,jvj+76,BA)*/
pile[WZ1]=jvj+77; 
(*f[1506])( );     /*NATFNS0(V77,jvj+77,BA)*/
if((x[jvj+77]==129)) goto l1;
if((x[jvj+77]==1881)) goto l2;
if((x[jvj+77]!=1917)) goto l3;
pile[WZ1]=1680; 
(*f[1506])( );     /*NATFNS0(V77,1680,BA)*/
goto l3;
l44:if((x[jvj+20]==1607)) goto l46;
pile[v[22]]=1045; pile[WZ1]=jvj+20; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(1045,jvj+20,jvj+85)*/
if((x[jvj+85]!=68)) goto l46;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,A,jvj+2)*/
pile[v[22]]=103; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,A,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(140,jvj+2,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1703])( );     /*TYPEXPR1(jvj+3,jvj+4)*/
pile[v[22]]=V54; pile[WZ1]=129; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V54,129,BA)*/
pile[WZ1]=jvj+4; 
(*f[1506])( );     /*NATFNS0(V54,jvj+4,BA)*/
pile[WZ1]=1339; 
(*f[1506])( );     /*NATFNS0(V54,1339,BA)*/
l45:RT=68;
pile[v[22]]=jvj+3; pile[WZ1]=BA; pile[WZ2]=278; 
(*f[1493])( );     /*NATFNA0(jvj+3,BA,278)*/
goto l51;
l46:if((x[M]!=865)) goto l49;
pile[v[22]]=1820; pile[WZ1]=145; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(1820,145,jvj+86)*/
for(a=x[jvj+86];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l47;
goto l49;
l47:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,A,jvj+56)*/
pile[v[22]]=103; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,A,jvj+57)*/
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+56,V290)*/
V290=pile[WZ2]; 
if((V290==0)) goto l28;
l27:pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+57,V291)*/
V291=pile[WZ2]; 
if((V291==0)) goto l28;
goto l49;
l48:RT=68;
l52:pile[v[22]]=155; pile[WZ1]=jvj+20; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(155,jvj+20,jvj+89)*/
if((x[jvj+89]!=68)) goto l59;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(107,A,jvj+90)*/
goto l53;
l50:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(107,A,jvj+88)*/
goto l12;
l55:if((x[M]==278)) goto l59;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(103,A,jvj+92)*/
pile[v[22]]=140; pile[WZ1]=jvj+92; 
(*f[44])( );if(v[102]) goto l59;     /*FNDC1(140,jvj+92,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(102,A,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+93,jvj+10)*/
x[jvj+94]=incon;
pile[v[22]]=129; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(129,jvj+10,jvj+11)*/
if((x[jvj+11]!=68)) goto l4;
x[jvj+94]=129 ;z[jvj+94]=129;
goto l56;
l60:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(102,A,jvj+99)*/
pile[v[22]]=140; pile[WZ1]=jvj+99; 
(*f[44])( );if(v[102]) goto l63;     /*FNDC1(140,jvj+99,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(103,A,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(100,jvj+100,jvj+101)*/
if((x[jvj+101]!=128)) goto l63;
pile[v[22]]=128; pile[WZ2]=jvj+102; 
(*f[33])( );     /*FNDE0(128,jvj+100,jvj+102)*/
l61:if((x[jvj+102]<=0)) goto l63;
x[jvj+103]=s[x[jvj+102]] ;z[jvj+103]=(x[jvj+103]<=sepcte) ? x[jvj+103] : z[jvj+102];
pile[v[22]]=140; pile[WZ1]=jvj+103; 
(*f[44])( );if(v[102]) goto l62;     /*FNDC1(140,jvj+103,V150)*/
V150=pile[WZ2]; 
W=V150;
pile[v[22]]=V145; pile[WZ1]=W; pile[WZ2]=BA; 
(*f[1704])( );     /*MEMEXPR0(V145,W,BA)*/
pile[WZ1]=23; 
(*f[1506])( );     /*NATFNS0(V145,23,BA)*/
l62:x[jvj+102]=t[x[jvj+102]];
goto l61;
l63:if(RT==incon) goto l64;
l67:pile[v[22]]=100; pile[WZ1]=jvj+99; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(100,jvj+99,jvj+111)*/
if((x[jvj+111]==43)) goto l68;
if((x[jvj+111]!=22)) goto l78;
pile[v[22]]=102; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(102,jvj+99,jvj+120)*/
pile[v[22]]=140; pile[WZ1]=jvj+120; 
(*f[44])( );if(v[102]) goto l78;     /*FNDC1(140,jvj+120,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+99; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(111,jvj+99,jvj+121)*/
pile[v[22]]=101; pile[WZ1]=jvj+121; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(101,jvj+121,jvj+60)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(103,A,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(100,jvj+122,jvj+123)*/
if((x[jvj+123]!=128)) goto l78;
pile[v[22]]=128; pile[WZ2]=jvj+124; 
(*f[33])( );     /*FNDE0(128,jvj+122,jvj+124)*/
pile[v[22]]=1835; pile[WZ1]=jvj+60; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(1835,jvj+60,jvj+125)*/
pile[v[22]]=1834; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(1834,jvj+60,jvj+126)*/
l71:if((x[jvj+124]<=0)) goto l78;
x[jvj+127]=s[x[jvj+124]] ;z[jvj+127]=(x[jvj+127]<=sepcte) ? x[jvj+127] : z[jvj+124];
pile[v[22]]=140; pile[WZ1]=jvj+127; 
(*f[44])( );if(v[102]) goto l72;     /*FNDC1(140,jvj+127,V328)*/
V328=pile[WZ2]; 
V302=V328;
pile[v[22]]=V322; pile[WZ1]=jvj+125; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V322,jvj+125,BA)*/
pile[v[22]]=V302; pile[WZ1]=jvj+126; 
(*f[1506])( );     /*NATFNS0(V302,jvj+126,BA)*/
pile[v[22]]=1876; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(1876,jvj+60,jvj+61)*/
x[jvj+62]=x[jvj+61] ;z[jvj+62]=z[jvj+61];
if(x[jvj+62]!=1814&&x[jvj+62]!=1050) goto l30;
pile[v[22]]=V302; pile[WZ1]=jvj+62; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V302,jvj+62,BA)*/
l30:pile[v[22]]=BA; pile[WZ1]=V322; pile[WZ2]=jvj+63; 
(*f[1491])( );     /*VDSBA0(BA,V322,jvj+63)*/
pile[v[22]]=1261; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(1261,jvj+63,jvj+64)*/
x[jvj+65]=d[223];z[jvj+65]=0;
goto l31;
l64:pile[v[22]]=100; pile[WZ1]=jvj+99; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(100,jvj+99,jvj+104)*/
if((x[jvj+104]!=22)) goto l67;
pile[v[22]]=102; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(102,jvj+99,jvj+105)*/
pile[v[22]]=140; pile[WZ1]=jvj+105; 
(*f[44])( );if(v[102]) goto l67;     /*FNDC1(140,jvj+105,V276)*/
V276=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+99; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(111,jvj+99,jvj+106)*/
pile[v[22]]=101; pile[WZ1]=jvj+106; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(101,jvj+106,jvj+53)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(103,A,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(100,jvj+107,jvj+108)*/
if((x[jvj+108]!=128)) goto l67;
pile[v[22]]=128; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(128,jvj+107,jvj+109)*/
l65:if((x[jvj+109]<=0)) goto l67;
x[jvj+110]=s[x[jvj+109]] ;z[jvj+110]=(x[jvj+110]<=sepcte) ? x[jvj+110] : z[jvj+109];
pile[v[22]]=140; pile[WZ1]=jvj+110; 
(*f[44])( );if(v[102]) goto l66;     /*FNDC1(140,jvj+110,V282)*/
V282=pile[WZ2]; 
RT=68;
pile[v[22]]=1834; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1834,jvj+53,jvj+54)*/
pile[v[22]]=V282; pile[WZ1]=jvj+54; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V282,jvj+54,BA)*/
l26:pile[v[22]]=1835; pile[WZ1]=jvj+53; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(1835,jvj+53,jvj+55)*/
pile[v[22]]=V276; pile[WZ1]=jvj+55; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V276,jvj+55,BA)*/
goto l67;
l66:x[jvj+109]=t[x[jvj+109]];
goto l65;
l68:pile[v[22]]=103; pile[WZ1]=jvj+99; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(103,jvj+99,jvj+112)*/
pile[v[22]]=140; pile[WZ1]=jvj+112; 
(*f[44])( );if(v[102]) goto l78;     /*FNDC1(140,jvj+112,V186)*/
V186=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+99; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(102,jvj+99,jvj+113)*/
pile[v[22]]=101; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(101,jvj+113,jvj+114)*/
pile[v[22]]=447; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(447,jvj+114,jvj+115)*/
if((x[jvj+115]!=482)) goto l78;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(103,A,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(100,jvj+116,jvj+117)*/
if((x[jvj+117]!=128)) goto l78;
pile[v[22]]=128; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(128,jvj+116,jvj+118)*/
l69:if((x[jvj+118]<=0)) goto l78;
x[jvj+119]=s[x[jvj+118]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+118];
pile[v[22]]=140; pile[WZ1]=jvj+119; 
(*f[44])( );if(v[102]) goto l70;     /*FNDC1(140,jvj+119,V192)*/
V192=pile[WZ2]; 
V165=V192;
pile[v[22]]=V186; pile[WZ1]=1917; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V186,1917,BA)*/
pile[v[22]]=V165; 
(*f[1506])( );     /*NATFNS0(V165,1917,BA)*/
pile[v[22]]=BA; pile[WZ1]=V186; pile[WZ2]=jvj+29; 
(*f[1491])( );     /*VDSBA0(BA,V186,jvj+29)*/
pile[v[22]]=1261; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+30)*/
x[jvj+31]=d[223];z[jvj+31]=0;
goto l14;
l70:x[jvj+118]=t[x[jvj+118]];
goto l69;
l72:x[jvj+124]=t[x[jvj+124]];
goto l71;
l76:pile[v[22]]=100; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,jvj+137,jvj+138)*/
if((x[jvj+138]==21)) goto l84;
l83:pile[v[22]]=V51; pile[WZ1]=jvj+137; pile[WZ2]=BA; pile[WZ3]=jvj+98; 
(*f[1702])( );     /*ANEXP0(V51,jvj+137,BA,jvj+98)*/
l84:if((x[jvj+98]==1604)) goto l89;
x[jvj+176]=w[1659][9];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(100,A,jvj+148)*/
if((x[jvj+148]!=22)) goto l89;
pile[WZ1]=jvj+97; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(100,jvj+97,jvj+149)*/
if((x[jvj+149]!=20)) goto l89;
pile[v[22]]=1045; pile[WZ1]=jvj+98; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(1045,jvj+98,jvj+128)*/
if((x[jvj+128]==68)) goto l89;
l85:pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+150; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+150)*/
for(a=x[jvj+150];a>0;a=t[a]) if(s[a]==x[jvj+98]) goto l89;
pile[v[22]]=1916; pile[WZ2]=jvj+151; 
(*f[33])( );     /*FNDE0(1916,1714,jvj+151)*/
for(a=x[jvj+151];a>0;a=t[a]) if(s[a]==x[jvj+98]) goto l89;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+152; 
(*f[33])( );     /*FNDE0(107,A,jvj+152)*/
l86:if((x[jvj+176]<=0)) goto l89;
x[jvj+129]=s[x[jvj+176]] ;z[jvj+129]=(x[jvj+129]<=sepcte) ? x[jvj+129] : z[jvj+176];
pile[v[22]]=jvj+129; pile[WZ1]=A; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(jvj+129,A,jvj+153)*/
pile[v[22]]=140; pile[WZ1]=jvj+153; 
(*f[44])( );if(v[102]) goto l87;     /*FNDC1(140,jvj+153,V20)*/
V20=pile[WZ2]; 
V=V20;
pile[v[22]]=319; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(319,jvj+129,jvj+130)*/
pile[v[22]]=jvj+130; pile[WZ1]=jvj+98; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+130,jvj+98,jvj+131)*/
if((x[jvj+131]!=23)) goto l73;
pile[v[22]]=V; pile[WZ1]=23; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V,23,BA)*/
l73:if((x[M]!=865)) goto l75;
pile[v[22]]=1877; pile[WZ1]=jvj+129; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(1877,jvj+129,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=jvj+98; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(jvj+132,jvj+98,jvj+133)*/
pile[v[22]]=1878; pile[WZ1]=jvj+129; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(1878,jvj+129,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+98; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(jvj+134,jvj+98,jvj+135)*/
pile[v[22]]=V; pile[WZ1]=jvj+133; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V,jvj+133,BA)*/
pile[WZ1]=jvj+135; 
(*f[1506])( );     /*NATFNS0(V,jvj+135,BA)*/
l75:x[jvj+175]=x[jvj+152] ;z[jvj+175]=z[jvj+152];
l74:if((x[jvj+175]<=0)) goto l87;
x[jvj+136]=s[x[jvj+175]] ;z[jvj+136]=(x[jvj+136]<=sepcte) ? x[jvj+136] : z[jvj+175];
pile[v[22]]=jvj+136; pile[WZ1]=BA; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(jvj+136,BA,865)*/
x[jvj+175]=t[x[jvj+175]];
goto l74;
l79:if((x[M]==865)) goto l80;
if((x[M]!=278)) goto l84;
l89:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(100,A,jvj+154)*/
x[jvj+177]=w[x[jvj+154]][9];
l90:if((x[jvj+177]>0)) goto l91;
x[jvj+178]=w[x[jvj+154]][8];
l93:if((x[jvj+178]<=0)) goto l96;
x[jvj+157]=s[x[jvj+178]] ;z[jvj+157]=(x[jvj+157]<=sepcte) ? x[jvj+157] : z[jvj+178];
pile[v[22]]=jvj+157; pile[WZ1]=A; pile[WZ2]=jvj+158; 
(*f[33])( );     /*FNDE0(jvj+157,A,jvj+158)*/
x[jvj+179]=x[jvj+158] ;z[jvj+179]=z[jvj+158];
l94:if((x[jvj+179]>0)) goto l95;
x[jvj+178]=t[x[jvj+178]];
goto l93;
l80:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(100,A,jvj+142)*/
if((x[jvj+142]!=22)) goto l84;
pile[WZ1]=jvj+97; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(100,jvj+97,jvj+143)*/
if((x[jvj+143]!=20)) goto l84;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(102,A,jvj+137)*/
pile[v[22]]=140; pile[WZ1]=jvj+137; 
(*f[44])( );if(v[102]) goto l82;     /*FNDC1(140,jvj+137,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=1760; pile[WZ1]=145; pile[WZ2]=jvj+144; 
(*f[33])( );     /*FNDE0(1760,145,jvj+144)*/
for(a=x[jvj+144];a>0;a=t[a]) if(s[a]==x[jvj+98]) goto l81;
l82:pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(103,A,jvj+146)*/
pile[v[22]]=140; pile[WZ1]=jvj+146; 
(*f[44])( );if(v[102]) goto l84;     /*FNDC1(140,jvj+146,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=1760; pile[WZ1]=145; pile[WZ2]=jvj+147; 
(*f[33])( );     /*FNDE0(1760,145,jvj+147)*/
for(a=x[jvj+147];a>0;a=t[a]) if(s[a]==x[jvj+98]) goto l76;
goto l84;
l81:pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,A,jvj+145)*/
pile[v[22]]=V37; pile[WZ1]=jvj+145; pile[WZ2]=BA; pile[WZ3]=jvj+98; 
(*f[1702])( );     /*ANEXP0(V37,jvj+145,BA,jvj+98)*/
goto l82;
l87:x[jvj+176]=t[x[jvj+176]];
goto l86;
l88:if(RT==incon) goto l89;
goto l96;
l91:x[jvj+155]=s[x[jvj+177]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+177];
pile[v[22]]=jvj+155; pile[WZ1]=A; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(jvj+155,A,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=BA; pile[WZ2]=M; 
(*f[1493])( );     /*NATFNA0(jvj+156,BA,M)*/
l92:x[jvj+177]=t[x[jvj+177]];
goto l90;
l95:x[jvj+159]=s[x[jvj+179]] ;z[jvj+159]=(x[jvj+159]<=sepcte) ? x[jvj+159] : z[jvj+179];
pile[v[22]]=jvj+159; pile[WZ1]=BA; pile[WZ2]=M; 
(*f[1493])( );     /*NATFNA0(jvj+159,BA,M)*/
x[jvj+179]=t[x[jvj+179]];
goto l94;
l97:pile[v[22]]=102; pile[WZ1]=jvj+165; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(102,jvj+165,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=BA; pile[WZ2]=jvj+171; pile[WZ3]=jvj+172; 
(*f[1496])( );     /*TYPEXPR0(jvj+170,BA,jvj+171,jvj+172)*/
pile[v[22]]=V352; pile[WZ1]=jvj+172; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V352,jvj+172,BA)*/
pile[WZ1]=jvj+171; 
(*f[1506])( );     /*NATFNS0(V352,jvj+171,BA)*/
goto l98;
}
