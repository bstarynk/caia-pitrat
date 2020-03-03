#include "dx.h"
void DVP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V29=0,V41=0,V46=0,V98=0,V107=0,V115=0,V124=0,V63=0,V51=0,V52=0,V71=0,V77=0,VV=0,V88=0,V67=0,I=0;
int V,X,R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=10478;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1789&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; X=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=vo[15];z[jvj+6]=vz[15];
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,X,jvj+24)*/
if((x[jvj+24]==20)) goto l30;
if((x[jvj+24]==69)) goto l31;
if((x[jvj+24]==61)) goto l34;
if((x[jvj+24]==89)) goto l36;
if((x[jvj+24]==96)) goto l37;
if((x[jvj+24]==41)) goto l38;
if((x[jvj+24]==43)) goto l39;
if((x[jvj+24]==453)) goto l41;
if((x[jvj+24]!=22)) goto l42;
pile[v[22]]=111; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,X,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+40,jvj+2)*/
pile[v[22]]=146; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(146,jvj+2,jvj+4)*/
x[jvj+3]=incon;
if((x[jvj+4]!=23)) goto l1;
pile[v[22]]=931; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(931,jvj+2,jvj+3)*/
l2:if((x[jvj+3]==250)) goto l3;
pile[v[22]]=V; pile[WZ1]=jvj+4; pile[WZ2]=jvj+3; 
(*f[1794])( );     /*DVF3(V,jvj+4,jvj+3)*/
l42:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,X,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=172)) goto l43;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,X,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+43,jvj+44)*/
pile[v[22]]=V; pile[WZ1]=jvj+44; 
(*f[1791])( );     /*DVF0(V,jvj+44)*/
l43:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,X,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V67; 
(*f[1977])( );     /*DVF6(V,V67)*/
pile[v[22]]=V67; pile[WZ1]=V; 
(*f[1977])( );     /*DVF6(V67,V)*/
pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+10)*/
l7:if((x[jvj+10]>0)) goto l8;
pile[v[22]]=V; pile[WZ1]=(-96); pile[WZ2]=305; pile[WZ3]=jvj+49; 
(*f[1979])( );     /*TRIENS3(V,(-96),305,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=V67; pile[WZ2]=140; pile[WZ3]=jvj+45; 
(*f[631])( );     /*TRI16(jvj+49,V67,140,jvj+45)*/
pile[v[22]]=jvj+7; pile[WZ1]=283; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+7,283,jvj+45)*/
l13:pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+14)*/
l14:if((x[jvj+14]>0)) goto l15;
pile[v[22]]=V67; pile[WZ1]=(-96); pile[WZ2]=305; pile[WZ3]=jvj+50; 
(*f[1979])( );     /*TRIENS3(V67,(-96),305,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=V; pile[WZ2]=140; pile[WZ3]=jvj+46; 
(*f[631])( );     /*TRI16(jvj+50,V,140,jvj+46)*/
pile[v[22]]=jvj+7; pile[WZ1]=283; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+7,283,jvj+46)*/
l4:pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+8)*/
l5:if((x[jvj+8]<=0)) goto l10;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+9,V24)*/
V24=pile[WZ2]; 
if((V24!=V67)) goto l6;
pile[v[22]]=jvj+9; pile[WZ1]=305; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(jvj+9,305,V)*/
l10:pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+12)*/
l11:if((x[jvj+12]<=0)) goto l44;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+13,V41)*/
V41=pile[WZ2]; 
if((V41!=V)) goto l12;
pile[v[22]]=jvj+13; pile[WZ1]=305; pile[WZ2]=V67; 
(*f[735])( );     /*PLUSC4(jvj+13,305,V67)*/
l44:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,X,I)*/
I=pile[WZ2]; 
if((I==(-99999998))) goto l46;
pile[v[22]]=176; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(176,X,jvj+5)*/
l46:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+3]=250 ;z[jvj+3]=250;
goto l2;
l3:pile[v[22]]=V; pile[WZ1]=jvj+4; 
(*f[1791])( );     /*DVF0(V,jvj+4)*/
goto l42;
l6:x[jvj+8]=t[x[jvj+8]];
goto l5;
l8:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+11,V29)*/
V29=pile[WZ2]; 
if((V29==V67)) goto l13;
l9:x[jvj+10]=t[x[jvj+10]];
goto l7;
l12:x[jvj+12]=t[x[jvj+12]];
goto l11;
l15:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+15,V46)*/
V46=pile[WZ2]; 
if((V46==V)) goto l4;
l16:x[jvj+14]=t[x[jvj+14]];
goto l14;
l19:x[jvj+16]=t[x[jvj+16]];
l18:if((x[jvj+16]<=0)) goto l20;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+17,V98)*/
V98=pile[WZ2]; 
if((V98!=V88)) goto l19;
pile[v[22]]=jvj+17; pile[WZ1]=305; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(jvj+17,305,V)*/
l20:pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+18)*/
l21:if((x[jvj+18]<=0)) goto l42;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+19,V107)*/
V107=pile[WZ2]; 
if((V107!=V)) goto l22;
pile[v[22]]=jvj+19; pile[WZ1]=305; pile[WZ2]=V88; 
(*f[735])( );     /*PLUSC4(jvj+19,305,V88)*/
goto l42;
l22:x[jvj+18]=t[x[jvj+18]];
goto l21;
l24:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+21,V115)*/
V115=pile[WZ2]; 
if((V115==V)) goto l26;
l25:x[jvj+20]=t[x[jvj+20]];
l23:if((x[jvj+20]>0)) goto l24;
pile[v[22]]=V88; pile[WZ1]=(-96); pile[WZ2]=305; pile[WZ3]=jvj+47; 
(*f[1979])( );     /*TRIENS3(V88,(-96),305,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=V; pile[WZ2]=140; pile[WZ3]=jvj+38; 
(*f[631])( );     /*TRI16(jvj+47,V,140,jvj+38)*/
pile[v[22]]=jvj+7; pile[WZ1]=283; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+7,283,jvj+38)*/
l26:pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+22)*/
l27:if((x[jvj+22]>0)) goto l28;
pile[v[22]]=V; pile[WZ1]=(-96); pile[WZ2]=305; pile[WZ3]=jvj+48; 
(*f[1979])( );     /*TRIENS3(V,(-96),305,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=V88; pile[WZ2]=140; pile[WZ3]=jvj+39; 
(*f[631])( );     /*TRI16(jvj+48,V88,140,jvj+39)*/
pile[v[22]]=jvj+7; pile[WZ1]=283; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+7,283,jvj+39)*/
l17:pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+16)*/
goto l18;
l28:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+23,V124)*/
V124=pile[WZ2]; 
if((V124==V88)) goto l17;
l29:x[jvj+22]=t[x[jvj+22]];
goto l27;
l30:pile[v[22]]=V; pile[WZ1]=20; 
(*f[1791])( );     /*DVF0(V,20)*/
goto l42;
l31:pile[v[22]]=V; pile[WZ1]=20; 
(*f[1791])( );     /*DVF0(V,20)*/
pile[v[22]]=108; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(108,X,jvj+25)*/
l32:if((x[jvj+25]<=0)) goto l42;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=103; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+26,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+27,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+26,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+28,jvj+29)*/
V51=x[jvj+29];
if((x[jvj+30]=w[V51][1])==incon) goto l33;
if((x[jvj+30]==23)) goto l33;
V52=V63;
pile[v[22]]=V52; pile[WZ1]=jvj+30; 
(*f[1791])( );     /*DVF0(V52,jvj+30)*/
l33:x[jvj+25]=t[x[jvj+25]];
goto l32;
l34:pile[v[22]]=V; pile[WZ1]=23; pile[WZ2]=41; 
(*f[1794])( );     /*DVF3(V,23,41)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,X,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+31,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=41; 
(*f[1791])( );     /*DVF0(V71,41)*/
l35:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,X,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+32,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=41; 
(*f[1791])( );     /*DVF0(V77,41)*/
goto l42;
l36:pile[v[22]]=V; pile[WZ1]=89; 
(*f[1791])( );     /*DVF0(V,89)*/
goto l42;
l37:pile[v[22]]=V; pile[WZ1]=96; 
(*f[1791])( );     /*DVF0(V,96)*/
goto l42;
l38:pile[v[22]]=176; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(176,X,jvj+33)*/
pile[v[22]]=V; pile[WZ1]=jvj+33; 
(*f[1791])( );     /*DVF0(V,jvj+33)*/
goto l42;
l39:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,X,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+34,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=V; 
(*f[1793])( );     /*DVF2(jvj+35,V)*/
l40:pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+34,VV)*/
VV=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=VV; pile[WZ2]=R; pile[WZ3]=250; pile[WZ4]=jvj+36; 
(*f[1978])( );if(v[102]) goto l42;     /*DVY0(R,VV,R,250,jvj+36)*/
pile[v[22]]=V; pile[WZ1]=jvj+36; 
(*f[1791])( );     /*DVF0(V,jvj+36)*/
goto l42;
l41:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,X,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+37,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V88; 
(*f[1977])( );     /*DVF6(V,V88)*/
pile[v[22]]=V88; pile[WZ1]=V; 
(*f[1977])( );     /*DVF6(V88,V)*/
pile[v[22]]=283; pile[WZ1]=jvj+7; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(283,jvj+7,jvj+20)*/
goto l23;
l45:pile[v[22]]=V; pile[WZ1]=41; 
(*f[1791])( );     /*DVF0(V,41)*/
goto l46;
}
