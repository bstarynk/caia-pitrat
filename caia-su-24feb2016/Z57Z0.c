#include "dx.h"
void Z57Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V64=0,V52=0,V33=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=96;
x[jvj+1]=15558;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1871&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,NNNY,jvj+13)*/
if((x[jvj+13]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,NNNY,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+14,jvj+15)*/
if(x[jvj+15]!=48&&x[jvj+15]!=55) goto l22;
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+16)*/
x[jvj+96]=x[jvj+16] ;z[jvj+96]=z[jvj+16];
l8:if((x[jvj+96]>0)) goto l9;
for(i=x[jvj+16],V64=0;i>0;i=t[i],V64++)  ;
if((V64!=2)) goto l22;
x[jvj+75]=incon;
if((x[jvj+15]==48)) goto l7;
x[jvj+75]=26 ;z[jvj+75]=26;
l15:x[jvj+88]=x[jvj+16] ;z[jvj+88]=z[jvj+16];
l14:if((x[jvj+88]<=0)) goto l22;
x[jvj+23]=s[x[jvj+88]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+88];
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+23,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+25,jvj+26)*/
V52=x[jvj+26];
if((x[jvj+15]==48)) goto l6;
if((x[jvj+15]!=55)) goto l16;
if((V52==29)) goto l17;
l16:x[jvj+88]=t[x[jvj+88]];
goto l14;
l2:x[jvj+2]=s[x[jvj+49]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+49];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+49]=t[x[jvj+49]];
l1:if((x[jvj+49]>0)) goto l2;
NNNT=4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+42; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+42,jvj+76)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+76; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+76,jvj+50)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+50; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+4,jvj+50,107)*/
pile[v[22]]=jvj+44; 
(*f[1118])( );     /*AJE3(jvj+44,jvj+50,107)*/
pile[v[22]]=jvj+38; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+38,jvj+50,NNNX)*/
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l3:pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l34;
l4:pile[v[22]]=jvj+5; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[760])( );     /*MEMEX0(jvj+5,jvj+9,jvj+11)*/
if((x[jvj+11]==135)) goto l5;
l33:x[jvj+63]=t[x[jvj+63]];
l32:if((x[jvj+63]<=0)) goto l31;
x[jvj+64]=s[x[jvj+63]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+63];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+57; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+64,jvj+57,jvj+6)*/
pile[v[22]]=268; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+64,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+57; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+65,jvj+57,jvj+9)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(jvj+5,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l3;
goto l4;
l5:pile[v[22]]=jvj+8; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+6,jvj+12)*/
if((x[jvj+12]==135)) goto l34;
goto l33;
l6:if((V52==30)) goto l17;
goto l16;
l7:x[jvj+75]=25 ;z[jvj+75]=25;
goto l15;
l9:x[jvj+86]=s[x[jvj+96]] ;z[jvj+86]=(x[jvj+86]<=sepcte) ? x[jvj+86] : z[jvj+96];
x[jvj+19]=x[jvj+86] ;z[jvj+19]=z[jvj+86];
x[jvj+78]=x[jvj+19] ;z[jvj+78]=z[jvj+19];
x[jvj+92]=x[jvj+16] ;z[jvj+92]=z[jvj+16];
l38:if((x[jvj+92]>0)) goto l39;
l10:x[jvj+96]=t[x[jvj+96]];
goto l8;
l13:NNNT=234;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+15; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+15,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+18; pile[WZ2]=107; pile[WZ3]=jvj+69; 
(*f[301])( );     /*TRI11(jvj+68,jvj+18,107,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+69,22,100,jvj+22)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+22; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+22,NNNX)*/
goto l37;
l17:pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+23,jvj+27)*/
pile[v[22]]=103; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+23,jvj+28)*/
x[jvj+74]=x[jvj+27] ;z[jvj+74]=z[jvj+27];
x[jvj+72]=x[jvj+28] ;z[jvj+72]=z[jvj+28];
x[jvj+89]=x[jvj+16] ;z[jvj+89]=z[jvj+16];
l18:if((x[jvj+89]<=0)) goto l16;
x[jvj+29]=s[x[jvj+89]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+89];
if((x[jvj+23]==x[jvj+29])) goto l19;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=22)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+29,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+31,jvj+32)*/
if((V52!=x[jvj+32])) goto l19;
pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+29,jvj+33)*/
pile[v[22]]=102; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+29,jvj+34)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+33; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+27,jvj+33,jvj+35)*/
if((x[jvj+35]==135)) goto l20;
l19:x[jvj+89]=t[x[jvj+89]];
goto l18;
l20:pile[v[22]]=jvj+28; pile[WZ1]=jvj+34; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+34,jvj+36)*/
if((x[jvj+36]==135)) goto l21;
goto l19;
l21:NNNT=126;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+71,jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+74,jvj+73,jvj+37)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+37; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+37,NNNX)*/
goto l37;
l22:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(543,NNNY,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=22)) goto l25;
pile[v[22]]=107; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+40)*/
pile[v[22]]=111; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+38,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+41,jvj+42)*/
if(x[jvj+42]!=485&&x[jvj+42]!=486&&x[jvj+42]!=48&&x[jvj+42]!=55) goto l25;
x[jvj+94]=x[jvj+40] ;z[jvj+94]=z[jvj+40];
l44:if((x[jvj+94]>0)) goto l45;
l25:pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,NNNY,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+51,jvj+52)*/
if((x[jvj+52]!=55)) goto l36;
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+53)*/
for(i=x[jvj+53],V33=0;i>0;i=t[i],V33++)  ;
if((V33!=2)) goto l36;
x[jvj+90]=x[jvj+53] ;z[jvj+90]=z[jvj+53];
l26:if((x[jvj+90]<=0)) goto l36;
x[jvj+54]=s[x[jvj+90]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+90];
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=26)) goto l27;
x[jvj+91]=x[jvj+53] ;z[jvj+91]=z[jvj+53];
l28:if((x[jvj+91]<=0)) goto l27;
x[jvj+57]=s[x[jvj+91]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+91];
if((x[jvj+54]==x[jvj+57])) goto l29;
pile[v[22]]=111; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+57,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=25)) goto l29;
x[jvj+60]=d[20];z[jvj+60]=0;
l30:if((x[jvj+60]<=0)) goto l29;
x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+54; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+61,jvj+54,jvj+5)*/
pile[v[22]]=268; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(268,jvj+61,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+54; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+62,jvj+54,jvj+8)*/
x[jvj+63]=d[20];z[jvj+63]=0;
goto l32;
l24:x[jvj+40]=t[x[jvj+40]];
l23:if((x[jvj+40]<=0)) goto l25;
x[jvj+45]=s[x[jvj+40]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+40];
if((x[NNNY]!=x[jvj+45])) goto l24;
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=22)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+45,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+42]!=x[jvj+48])) goto l24;
pile[v[22]]=107; pile[WZ1]=jvj+45; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+45,jvj+49)*/
x[jvj+4]=0 ;z[jvj+4]=0;
goto l1;
l27:x[jvj+90]=t[x[jvj+90]];
goto l26;
l29:x[jvj+91]=t[x[jvj+91]];
goto l28;
l31:x[jvj+60]=t[x[jvj+60]];
goto l30;
l34:NNNT=124;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+66)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+66; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+66,NNNX)*/
goto l37;
l36:x[NNNX]=NNNT=incon;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l39:x[jvj+77]=s[x[jvj+92]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+92];
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[760])( );     /*MEMEX0(jvj+77,jvj+78,jvj+79)*/
if((x[jvj+79]==135)) goto l40;
x[jvj+92]=t[x[jvj+92]];
goto l38;
l40:x[jvj+80]=0 ;z[jvj+80]=0;
x[jvj+93]=x[jvj+16] ;z[jvj+93]=z[jvj+16];
l41:if((x[jvj+93]>0)) goto l42;
x[jvj+17]=x[jvj+80] ;z[jvj+17]=z[jvj+80];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+18)*/
x[jvj+87]=x[jvj+16] ;z[jvj+87]=z[jvj+16];
l11:if((x[jvj+87]<=0)) goto l10;
x[jvj+20]=s[x[jvj+87]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+87];
if((x[jvj+86]==x[jvj+20])) goto l12;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[760])( );     /*MEMEX0(jvj+19,jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l13;
l12:x[jvj+87]=t[x[jvj+87]];
goto l11;
l42:x[jvj+81]=s[x[jvj+93]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+93];
if((x[jvj+81]==x[jvj+77])) goto l43;
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; 
(*f[68])( );     /*PLUE0(jvj+80,jvj+81)*/
l43:x[jvj+93]=t[x[jvj+93]];
goto l41;
l45:x[jvj+82]=s[x[jvj+94]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+94];
pile[v[22]]=jvj+82; pile[WZ1]=NNNY; pile[WZ2]=jvj+83; 
(*f[760])( );     /*MEMEX0(jvj+82,NNNY,jvj+83)*/
if((x[jvj+83]==135)) goto l46;
x[jvj+94]=t[x[jvj+94]];
goto l44;
l46:x[jvj+84]=0 ;z[jvj+84]=0;
x[jvj+95]=x[jvj+40] ;z[jvj+95]=z[jvj+40];
l47:if((x[jvj+95]>0)) goto l48;
x[jvj+43]=x[jvj+84] ;z[jvj+43]=z[jvj+84];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[299])( );     /*COPEL0(jvj+43,jvj+44)*/
goto l23;
l48:x[jvj+85]=s[x[jvj+95]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+95];
if((x[jvj+85]==x[jvj+82])) goto l49;
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; 
(*f[68])( );     /*PLUE0(jvj+84,jvj+85)*/
l49:x[jvj+95]=t[x[jvj+95]];
goto l47;
}
