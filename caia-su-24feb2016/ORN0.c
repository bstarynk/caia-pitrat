#include "dx.h"
void ORN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V51=0,V112=0,V116=0,V78=0,VB=0,V91=0,V95=0,VV=0,V106=0,V102=0;
int E,R,X,TY,NN;
int EE;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=94;
x[jvj+1]=10709;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2093&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; R=pile[v[22]+1]; X=pile[v[22]+2]; TY=pile[v[22]+3]; NN=pile[v[22]+4]; EE=pile[v[22]+5]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=218; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(R,218,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=(-20); pile[WZ2]=187; pile[WZ3]=jvj+33; 
(*f[180])( );     /*TRIENS0(jvj+83,(-20),187,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,X,jvj+23)*/
if((x[jvj+23]==39)) goto l10;
if((x[jvj+23]==22)) goto l15;
if((x[jvj+23]!=435)) goto l2;
pile[v[22]]=436; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,X,jvj+50)*/
pile[v[22]]=140; pile[WZ1]=jvj+50; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+50,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+51,jvj+52)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+15,jvj+22)*/
if((x[jvj+22]==69)) goto l2;
l21:x[jvj+90]=x[E] ;z[jvj+90]=z[E];
l20:if((x[jvj+90]<=0)) goto l2;
x[jvj+8]=s[x[jvj+90]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+90];
if((x[jvj+8]==x[R])) goto l22;
if((x[TY]!=208)) goto l5;
if(x[jvj+52]!=180&&x[jvj+52]!=353&&x[jvj+52]!=723&&x[jvj+52]!=903&&x[jvj+52]!=908&&x[jvj+52]!=911) goto l5;
if((x[NN]==68)) goto l22;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+8,jvj+17)*/
if((x[jvj+17]!=42)) goto l5;
pile[v[22]]=105; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(105,jvj+8,jvj+18)*/
x[jvj+85]=x[jvj+18] ;z[jvj+85]=z[jvj+18];
l8:if((x[jvj+85]<=0)) goto l5;
x[jvj+19]=s[x[jvj+85]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+85];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==82)) goto l22;
l9:x[jvj+85]=t[x[jvj+85]];
goto l8;
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+5)*/
if((x[jvj+5]==47)) goto l28;
l3:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,X,jvj+6)*/
if((x[jvj+6]==39)) goto l28;
l4:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,X,jvj+7)*/
if((x[jvj+7]==435)) goto l28;
l1:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,X,jvj+2)*/
if((x[jvj+2]!=22)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]==55||x[jvj+4]==48||x[jvj+4]==50||x[jvj+4]==54) goto l28;
l24:x[jvj+91]=x[E] ;z[jvj+91]=z[E];
l23:if((x[jvj+91]<=0)) goto l28;
x[jvj+54]=s[x[jvj+91]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+91];
if((x[jvj+54]==x[R])) goto l25;
pile[v[22]]=107; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(107,jvj+54,jvj+55)*/
x[jvj+92]=x[jvj+55] ;z[jvj+92]=z[jvj+55];
l26:if((x[jvj+92]<=0)) goto l25;
x[jvj+56]=s[x[jvj+92]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+92];
pile[v[22]]=X; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[760])( );     /*MEMEX0(X,jvj+56,jvj+57)*/
if((x[jvj+57]==135)) goto l46;
l27:x[jvj+92]=t[x[jvj+92]];
goto l26;
l5:pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+9)*/
x[jvj+84]=x[jvj+9] ;z[jvj+84]=z[jvj+9];
l6:if((x[jvj+84]<=0)) goto l22;
x[jvj+10]=s[x[jvj+84]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+84];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=435)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+10,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+52]!=x[jvj+13])) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+10,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+14,jvj+16)*/
if((x[jvj+16]==135)) goto l45;
l7:x[jvj+84]=t[x[jvj+84]];
goto l6;
l10:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+24,jvj+25)*/
x[jvj+86]=x[E] ;z[jvj+86]=z[E];
l11:if((x[jvj+86]<=0)) goto l2;
x[jvj+26]=s[x[jvj+86]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+86];
if((x[jvj+26]==x[R])) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+27)*/
x[jvj+87]=x[jvj+27] ;z[jvj+87]=z[jvj+27];
l13:if((x[jvj+87]<=0)) goto l12;
x[jvj+28]=s[x[jvj+87]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+87];
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=39)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+28,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+25]!=x[jvj+31])) goto l14;
pile[v[22]]=jvj+28; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[1991])( );     /*MEMEY0(jvj+28,X,jvj+32)*/
if((x[jvj+32]==135)) goto l43;
l14:x[jvj+87]=t[x[jvj+87]];
goto l13;
l12:x[jvj+86]=t[x[jvj+86]];
goto l11;
l15:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+35,jvj+36)*/
if(x[jvj+36]!=50&&x[jvj+36]!=48&&x[jvj+36]!=55) goto l2;
pile[v[22]]=428; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(428,X,jvj+37)*/
pile[v[22]]=287; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(287,jvj+37,jvj+38)*/
x[jvj+88]=x[E] ;z[jvj+88]=z[E];
l16:if((x[jvj+88]<=0)) goto l2;
x[jvj+39]=s[x[jvj+88]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+88];
if((x[jvj+39]==x[R])) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,jvj+39,jvj+40)*/
x[jvj+89]=x[jvj+40] ;z[jvj+89]=z[jvj+40];
l18:if((x[jvj+89]<=0)) goto l17;
x[jvj+41]=s[x[jvj+89]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+89];
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=22)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+41,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+36]!=x[jvj+44])) goto l19;
pile[v[22]]=428; pile[WZ1]=jvj+41; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(428,jvj+41,jvj+45)*/
pile[v[22]]=287; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(287,jvj+45,jvj+46)*/
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(250,158,jvj+47)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+46; pile[WZ3]=jvj+48; 
(*f[2172])( );if(v[102]) goto l19;     /*MEMEV0(jvj+38,jvj+46,jvj+47,jvj+48)*/
if((x[jvj+48]==135)) goto l44;
l19:x[jvj+89]=t[x[jvj+89]];
goto l18;
l17:x[jvj+88]=t[x[jvj+88]];
goto l16;
l25:x[jvj+91]=t[x[jvj+91]];
goto l23;
l28:pile[v[22]]=E; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[2173])( );     /*ORM0(E,X,jvj+33)*/
x[jvj+62]=0 ;z[jvj+62]=0;
pile[v[22]]=187; pile[WZ1]=jvj+33; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(187,jvj+33,jvj+59)*/
l29:if((x[jvj+59]>0)) goto l30;
x[EE]=x[jvj+62] ;z[EE]=z[jvj+62];
pile[v[22]]=187; pile[WZ1]=jvj+33; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(187,jvj+33,jvj+79)*/
l39:if((x[jvj+79]>0)) goto l40;
l42:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l30:x[jvj+60]=s[x[jvj+59]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+59];
pile[v[22]]=218; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(218,jvj+60,jvj+61)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+61; 
(*f[68])( );     /*PLUE0(jvj+62,jvj+61)*/
l31:x[jvj+59]=t[x[jvj+59]];
goto l29;
l34:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(436,X,jvj+68)*/
pile[v[22]]=140; pile[WZ1]=jvj+68; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+68,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+63; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(436,jvj+63,jvj+69)*/
pile[v[22]]=140; pile[WZ1]=jvj+69; 
(*f[44])( );if(v[102]) goto l41;     /*FNDC1(140,jvj+69,V116)*/
V116=pile[WZ2]; 
V78=V112;
VB=V116;
pile[v[22]]=jvj+66; pile[WZ1]=V78; pile[WZ2]=VB; 
(*f[2174])( );     /*ORO0(jvj+66,V78,VB)*/
l41:x[jvj+79]=t[x[jvj+79]];
goto l39;
l36:x[jvj+93]=t[x[jvj+93]];
l35:if((x[jvj+93]<=0)) goto l41;
x[jvj+73]=s[x[jvj+93]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+93];
pile[v[22]]=102; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+73,jvj+74)*/
pile[v[22]]=140; pile[WZ1]=jvj+74; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+74,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+73; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+73,jvj+75)*/
pile[v[22]]=140; pile[WZ1]=jvj+75; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+75,V95)*/
V95=pile[WZ2]; 
V78=V91;
VV=V95;
x[jvj+94]=x[jvj+72] ;z[jvj+94]=z[jvj+72];
l37:if((x[jvj+94]<=0)) goto l36;
x[jvj+76]=s[x[jvj+94]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+94];
pile[v[22]]=103; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+76,jvj+77)*/
pile[v[22]]=140; pile[WZ1]=jvj+77; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+77,V106)*/
V106=pile[WZ2]; 
if((VV!=V106)) goto l38;
pile[v[22]]=102; pile[WZ1]=jvj+76; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+76,jvj+78)*/
pile[v[22]]=140; pile[WZ1]=jvj+78; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+78,V102)*/
V102=pile[WZ2]; 
VB=V102;
pile[v[22]]=jvj+66; pile[WZ1]=V78; pile[WZ2]=VB; 
(*f[2174])( );     /*ORO0(jvj+66,V78,VB)*/
l38:x[jvj+94]=t[x[jvj+94]];
goto l37;
l40:x[jvj+80]=s[x[jvj+79]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+79];
pile[v[22]]=218; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(218,jvj+80,jvj+81)*/
pile[v[22]]=444; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(444,jvj+80,jvj+82)*/
x[jvj+66]=x[jvj+81] ;z[jvj+66]=z[jvj+81];
x[jvj+63]=x[jvj+82] ;z[jvj+63]=z[jvj+82];
pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+63,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]==178)) goto l33;
l32:pile[v[22]]=jvj+63; pile[WZ1]=jvj+66; 
(*f[2092])( );     /*ORR0(jvj+63,jvj+66)*/
l33:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,X,jvj+67)*/
if((x[jvj+67]==435)) goto l34;
if((x[jvj+67]!=39)) goto l41;
pile[WZ1]=jvj+63; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+63,jvj+70)*/
if((x[jvj+70]!=39)) goto l41;
pile[v[22]]=113; pile[WZ1]=X; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(113,X,jvj+71)*/
pile[WZ1]=jvj+63; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(113,jvj+63,jvj+72)*/
x[jvj+93]=x[jvj+71] ;z[jvj+93]=z[jvj+71];
goto l35;
l43:pile[v[22]]=218; pile[WZ1]=jvj+26; pile[WZ2]=444; pile[WZ3]=jvj+28; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(218,jvj+26,444,jvj+28,jvj+34)*/
pile[v[22]]=jvj+33; pile[WZ1]=187; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+33,187,jvj+34)*/
goto l14;
l44:pile[v[22]]=218; pile[WZ1]=jvj+39; pile[WZ2]=444; pile[WZ3]=jvj+41; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(218,jvj+39,444,jvj+41,jvj+49)*/
pile[v[22]]=jvj+33; pile[WZ1]=187; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+33,187,jvj+49)*/
goto l19;
l45:pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=444; pile[WZ3]=jvj+10; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(218,jvj+8,444,jvj+10,jvj+53)*/
pile[v[22]]=jvj+33; pile[WZ1]=187; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+33,187,jvj+53)*/
l22:x[jvj+90]=t[x[jvj+90]];
goto l20;
l46:pile[v[22]]=218; pile[WZ1]=jvj+54; pile[WZ2]=444; pile[WZ3]=jvj+56; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(218,jvj+54,444,jvj+56,jvj+58)*/
pile[v[22]]=jvj+33; pile[WZ1]=187; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+33,187,jvj+58)*/
goto l27;
}
