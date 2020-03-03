#include "dx.h"
void Z56Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V49=0,V48=0,V109=0,V99=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=163;
x[jvj+1]=15557;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1870&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(543,NNNY,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+13,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=55)) goto l33;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+58)*/
x[jvj+157]=x[jvj+58] ;z[jvj+157]=z[jvj+58];
l63:if((x[jvj+157]>0)) goto l64;
l33:if(x[jvj+57]!=485&&x[jvj+57]!=486&&x[jvj+57]!=48&&x[jvj+57]!=55) goto l10;
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+13,jvj+69)*/
if((x[jvj+69]!=22)) goto l10;
pile[v[22]]=107; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+70)*/
x[jvj+159]=x[jvj+70] ;z[jvj+159]=z[jvj+70];
l69:if((x[jvj+159]>0)) goto l70;
l10:pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=22)) goto l38;
pile[v[22]]=107; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+15)*/
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+13,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=55)) goto l38;
x[jvj+145]=x[jvj+15] ;z[jvj+145]=z[jvj+15];
l11:if((x[jvj+145]<=0)) goto l38;
x[jvj+18]=s[x[jvj+145]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+145];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=48)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
for(i=x[jvj+21],V49=0;i>0;i=t[i],V49++)  ;
x[jvj+144]=x[jvj+15] ;z[jvj+144]=z[jvj+15];
l7:if((x[jvj+144]>0)) goto l8;
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+18,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=48)) goto l38;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+36)*/
l18:if((x[jvj+36]<=0)) goto l38;
x[jvj+26]=s[x[jvj+36]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+36];
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+13,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=55)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+32)*/
x[jvj+147]=x[jvj+32] ;z[jvj+147]=z[jvj+32];
l15:if((x[jvj+147]<=0)) goto l20;
x[jvj+22]=s[x[jvj+147]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+147];
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+22,jvj+29)*/
if((x[jvj+29]==134)) goto l16;
l13:pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=48)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+25)*/
x[jvj+146]=x[jvj+25] ;z[jvj+146]=z[jvj+25];
l14:if((x[jvj+146]<=0)) goto l17;
x[jvj+27]=s[x[jvj+146]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+146];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[760])( );     /*MEMEX0(jvj+26,jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l16;
x[jvj+146]=t[x[jvj+146]];
goto l14;
l2:x[jvj+2]=s[x[jvj+77]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+77];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+77]=t[x[jvj+77]];
l1:if((x[jvj+77]>0)) goto l2;
NNNT=4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+57; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+57,jvj+113)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+113; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+113,jvj+78)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+78; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+4,jvj+78,107)*/
pile[v[22]]=jvj+72; 
(*f[1118])( );     /*AJE3(jvj+72,jvj+78,107)*/
pile[v[22]]=jvj+13; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+13,jvj+78,NNNX)*/
l55:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l4:x[jvj+5]=s[x[jvj+143]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+143];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==649)) goto l5;
l6:pile[v[22]]=jvj+10; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+5)*/
l5:x[jvj+143]=t[x[jvj+143]];
l3:if((x[jvj+143]>0)) goto l4;
for(i=x[jvj+10],V48=0;i>0;i=t[i],V48++)  ;
if((V48<V49)) goto l12;
l9:x[jvj+144]=t[x[jvj+144]];
goto l7;
l8:x[jvj+8]=s[x[jvj+144]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+144];
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+8,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=48)) goto l9;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+9)*/
x[jvj+143]=x[jvj+9] ;z[jvj+143]=z[jvj+9];
goto l3;
l12:x[jvj+145]=t[x[jvj+145]];
goto l11;
l17:pile[v[22]]=jvj+26; pile[WZ1]=jvj+22; pile[WZ2]=jvj+33; 
(*f[760])( );     /*MEMEX0(jvj+26,jvj+22,jvj+33)*/
if((x[jvj+33]==134)) goto l19;
l16:x[jvj+147]=t[x[jvj+147]];
goto l15;
l19:x[jvj+36]=t[x[jvj+36]];
goto l18;
l20:x[jvj+46]=0 ;z[jvj+46]=0;
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+13,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=55)) goto l36;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+39)*/
l21:if((x[jvj+39]<=0)) goto l36;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=111; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+40,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=48)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+40; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,jvj+40,jvj+43)*/
x[jvj+155]=x[jvj+43] ;z[jvj+155]=z[jvj+43];
l57:if((x[jvj+155]>0)) goto l58;
l22:x[jvj+39]=t[x[jvj+39]];
goto l21;
l25:if((V99==30)) goto l48;
l47:x[jvj+153]=t[x[jvj+153]];
l45:if((x[jvj+153]<=0)) goto l54;
x[jvj+92]=s[x[jvj+153]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+153];
pile[v[22]]=100; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+92,jvj+93)*/
if((x[jvj+93]!=22)) goto l47;
pile[v[22]]=111; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+92,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+94,jvj+95)*/
V99=x[jvj+95];
if((x[jvj+84]==48)) goto l25;
if((x[jvj+84]!=55)) goto l47;
if((V99==29)) goto l48;
goto l47;
l26:x[jvj+125]=25 ;z[jvj+125]=25;
l46:x[jvj+153]=x[jvj+85] ;z[jvj+153]=z[jvj+85];
goto l45;
l28:x[jvj+148]=t[x[jvj+148]];
l27:if((x[jvj+148]<=0)) goto l33;
x[jvj+61]=s[x[jvj+148]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+148];
if((x[NNNY]!=x[jvj+61])) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+61,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+62,jvj+63)*/
if((x[jvj+63]!=48)) goto l28;
pile[v[22]]=107; pile[WZ1]=jvj+61; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(107,jvj+61,jvj+64)*/
x[jvj+149]=x[jvj+58] ;z[jvj+149]=z[jvj+58];
l29:if((x[jvj+149]<=0)) goto l28;
x[jvj+65]=s[x[jvj+149]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+149];
if((x[jvj+61]==x[jvj+65])) goto l30;
x[jvj+150]=x[jvj+64] ;z[jvj+150]=z[jvj+64];
l31:if((x[jvj+150]<=0)) goto l30;
x[jvj+66]=s[x[jvj+150]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+150];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[760])( );     /*MEMEX0(jvj+65,jvj+66,jvj+67)*/
if((x[jvj+67]==135)) goto l32;
x[jvj+150]=t[x[jvj+150]];
goto l31;
l30:x[jvj+149]=t[x[jvj+149]];
goto l29;
l32:NNNT=129;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+110; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=111; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,111,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=jvj+60; pile[WZ2]=107; pile[WZ3]=jvj+112; 
(*f[301])( );     /*TRI11(jvj+111,jvj+60,107,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+68; 
(*f[58])( );     /*TRI3(jvj+112,22,100,jvj+68)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+68; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+13,jvj+68,NNNX)*/
goto l55;
l35:x[jvj+70]=t[x[jvj+70]];
l34:if((x[jvj+70]<=0)) goto l10;
x[jvj+73]=s[x[jvj+70]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+70];
if((x[NNNY]!=x[jvj+73])) goto l35;
pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=22)) goto l35;
pile[v[22]]=111; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+73,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+57]!=x[jvj+76])) goto l35;
pile[v[22]]=107; pile[WZ1]=jvj+73; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,jvj+73,jvj+77)*/
x[jvj+4]=0 ;z[jvj+4]=0;
goto l1;
l36:pile[v[22]]=jvj+46; pile[WZ1]=jvj+79; 
(*f[299])( );     /*COPEL0(jvj+46,jvj+79)*/
x[jvj+55]=0 ;z[jvj+55]=0;
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+13,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=55)) goto l37;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+50)*/
x[jvj+51]=d[27];z[jvj+51]=0;
l23:if((x[jvj+50]<=0)) goto l37;
x[jvj+52]=s[x[jvj+50]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+50];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[760])( );     /*MEMEX0(jvj+26,jvj+52,jvj+53)*/
if((x[jvj+53]==135)) goto l56;
l24:x[jvj+50]=t[x[jvj+50]];
goto l23;
l37:pile[v[22]]=jvj+55; pile[WZ1]=jvj+80; 
(*f[299])( );     /*COPEL0(jvj+55,jvj+80)*/
NNNT=125;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+114)*/
pile[WZ3]=55; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+116)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+116; pile[WZ4]=jvj+115; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+116,jvj+115)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+115; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+79,jvj+115,107)*/
pile[v[22]]=jvj+80; 
(*f[1118])( );     /*AJE3(jvj+80,jvj+115,107)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+114; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+114,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=107; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+81,107,jvj+26)*/
pile[WZ2]=jvj+115; 
(*f[36])( );     /*PLUSC0(jvj+81,107,jvj+115)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+81; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+13,jvj+81,NNNX)*/
goto l55;
l38:pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,NNNY,jvj+82)*/
if((x[jvj+82]!=22)) goto l54;
pile[v[22]]=111; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,NNNY,jvj+83)*/
pile[v[22]]=101; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+83,jvj+84)*/
if(x[jvj+84]!=48&&x[jvj+84]!=55) goto l54;
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+85)*/
x[jvj+163]=x[jvj+85] ;z[jvj+163]=z[jvj+85];
l39:if((x[jvj+163]>0)) goto l40;
for(i=x[jvj+85],V109=0;i>0;i=t[i],V109++)  ;
if((V109!=2)) goto l54;
x[jvj+125]=incon;
if((x[jvj+84]==48)) goto l26;
x[jvj+125]=26 ;z[jvj+125]=26;
goto l46;
l40:x[jvj+151]=s[x[jvj+163]] ;z[jvj+151]=(x[jvj+151]<=sepcte) ? x[jvj+151] : z[jvj+163];
x[jvj+88]=x[jvj+151] ;z[jvj+88]=z[jvj+151];
x[jvj+139]=x[jvj+88] ;z[jvj+139]=z[jvj+88];
x[jvj+161]=x[jvj+85] ;z[jvj+161]=z[jvj+85];
l75:if((x[jvj+161]>0)) goto l76;
l41:x[jvj+163]=t[x[jvj+163]];
goto l39;
l44:NNNT=234;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+84; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+84,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=111; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(jvj+117,111,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+87; pile[WZ2]=107; pile[WZ3]=jvj+119; 
(*f[301])( );     /*TRI11(jvj+118,jvj+87,107,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+91; 
(*f[58])( );     /*TRI3(jvj+119,22,100,jvj+91)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+91; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+91,NNNX)*/
goto l55;
l48:pile[v[22]]=102; pile[WZ1]=jvj+92; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+92,jvj+96)*/
pile[v[22]]=103; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,jvj+92,jvj+97)*/
x[jvj+124]=x[jvj+96] ;z[jvj+124]=z[jvj+96];
x[jvj+122]=x[jvj+97] ;z[jvj+122]=z[jvj+97];
x[jvj+154]=x[jvj+85] ;z[jvj+154]=z[jvj+85];
l49:if((x[jvj+154]<=0)) goto l47;
x[jvj+98]=s[x[jvj+154]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+154];
if((x[jvj+92]==x[jvj+98])) goto l50;
pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+98,jvj+99)*/
if((x[jvj+99]!=22)) goto l50;
pile[v[22]]=111; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+98,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+100,jvj+101)*/
if((V99!=x[jvj+101])) goto l50;
pile[v[22]]=103; pile[WZ1]=jvj+98; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+98,jvj+102)*/
pile[v[22]]=102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+98,jvj+103)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+102; pile[WZ2]=jvj+104; 
(*f[760])( );     /*MEMEX0(jvj+96,jvj+102,jvj+104)*/
if((x[jvj+104]==135)) goto l51;
l50:x[jvj+154]=t[x[jvj+154]];
goto l49;
l51:pile[v[22]]=jvj+97; pile[WZ1]=jvj+103; pile[WZ2]=jvj+105; 
(*f[760])( );     /*MEMEX0(jvj+97,jvj+103,jvj+105)*/
if((x[jvj+105]==135)) goto l52;
goto l50;
l52:NNNT=126;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+125; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+125,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=111; pile[WZ2]=jvj+121; 
(*f[54])( );     /*TRI1(jvj+120,111,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; pile[WZ2]=103; pile[WZ3]=jvj+123; 
(*f[58])( );     /*TRI3(jvj+121,jvj+122,103,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+124,jvj+123,jvj+106)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+106; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+106,NNNX)*/
goto l55;
l54:x[NNNX]=NNNT=incon;
l53:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l56:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+54)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[196])( );     /*PLUF0(jvj+51,jvj+54,jvj+55)*/
goto l24;
l58:x[jvj+126]=s[x[jvj+155]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+155];
pile[v[22]]=jvj+126; pile[WZ1]=jvj+26; pile[WZ2]=jvj+127; 
(*f[760])( );     /*MEMEX0(jvj+126,jvj+26,jvj+127)*/
if((x[jvj+127]==135)) goto l59;
x[jvj+155]=t[x[jvj+155]];
goto l57;
l59:x[jvj+128]=0 ;z[jvj+128]=0;
x[jvj+156]=x[jvj+43] ;z[jvj+156]=z[jvj+43];
l60:if((x[jvj+156]>0)) goto l61;
x[jvj+44]=x[jvj+128] ;z[jvj+44]=z[jvj+128];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[299])( );     /*COPEL0(jvj+44,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+45; pile[WZ2]=107; pile[WZ3]=jvj+109; 
(*f[301])( );     /*TRI11(jvj+108,jvj+45,107,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+109,22,100,jvj+47)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+46,jvj+47)*/
goto l22;
l61:x[jvj+129]=s[x[jvj+156]] ;z[jvj+129]=(x[jvj+129]<=sepcte) ? x[jvj+129] : z[jvj+156];
if((x[jvj+129]==x[jvj+126])) goto l62;
pile[v[22]]=jvj+128; pile[WZ1]=jvj+129; 
(*f[68])( );     /*PLUE0(jvj+128,jvj+129)*/
l62:x[jvj+156]=t[x[jvj+156]];
goto l60;
l64:x[jvj+130]=s[x[jvj+157]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+157];
pile[v[22]]=jvj+130; pile[WZ1]=NNNY; pile[WZ2]=jvj+131; 
(*f[760])( );     /*MEMEX0(jvj+130,NNNY,jvj+131)*/
if((x[jvj+131]==135)) goto l65;
x[jvj+157]=t[x[jvj+157]];
goto l63;
l65:x[jvj+132]=0 ;z[jvj+132]=0;
x[jvj+158]=x[jvj+58] ;z[jvj+158]=z[jvj+58];
l66:if((x[jvj+158]>0)) goto l67;
x[jvj+59]=x[jvj+132] ;z[jvj+59]=z[jvj+132];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[299])( );     /*COPEL0(jvj+59,jvj+60)*/
x[jvj+148]=x[jvj+58] ;z[jvj+148]=z[jvj+58];
goto l27;
l67:x[jvj+133]=s[x[jvj+158]] ;z[jvj+133]=(x[jvj+133]<=sepcte) ? x[jvj+133] : z[jvj+158];
if((x[jvj+133]==x[jvj+130])) goto l68;
pile[v[22]]=jvj+132; pile[WZ1]=jvj+133; 
(*f[68])( );     /*PLUE0(jvj+132,jvj+133)*/
l68:x[jvj+158]=t[x[jvj+158]];
goto l66;
l70:x[jvj+134]=s[x[jvj+159]] ;z[jvj+134]=(x[jvj+134]<=sepcte) ? x[jvj+134] : z[jvj+159];
pile[v[22]]=jvj+134; pile[WZ1]=NNNY; pile[WZ2]=jvj+135; 
(*f[760])( );     /*MEMEX0(jvj+134,NNNY,jvj+135)*/
if((x[jvj+135]==135)) goto l71;
x[jvj+159]=t[x[jvj+159]];
goto l69;
l71:x[jvj+136]=0 ;z[jvj+136]=0;
x[jvj+160]=x[jvj+70] ;z[jvj+160]=z[jvj+70];
l72:if((x[jvj+160]>0)) goto l73;
x[jvj+71]=x[jvj+136] ;z[jvj+71]=z[jvj+136];
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; 
(*f[299])( );     /*COPEL0(jvj+71,jvj+72)*/
goto l34;
l73:x[jvj+137]=s[x[jvj+160]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+160];
if((x[jvj+137]==x[jvj+134])) goto l74;
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; 
(*f[68])( );     /*PLUE0(jvj+136,jvj+137)*/
l74:x[jvj+160]=t[x[jvj+160]];
goto l72;
l76:x[jvj+138]=s[x[jvj+161]] ;z[jvj+138]=(x[jvj+138]<=sepcte) ? x[jvj+138] : z[jvj+161];
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[760])( );     /*MEMEX0(jvj+138,jvj+139,jvj+140)*/
if((x[jvj+140]==135)) goto l77;
x[jvj+161]=t[x[jvj+161]];
goto l75;
l77:x[jvj+141]=0 ;z[jvj+141]=0;
x[jvj+162]=x[jvj+85] ;z[jvj+162]=z[jvj+85];
l78:if((x[jvj+162]>0)) goto l79;
x[jvj+86]=x[jvj+141] ;z[jvj+86]=z[jvj+141];
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; 
(*f[299])( );     /*COPEL0(jvj+86,jvj+87)*/
x[jvj+152]=x[jvj+85] ;z[jvj+152]=z[jvj+85];
l42:if((x[jvj+152]<=0)) goto l41;
x[jvj+89]=s[x[jvj+152]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+152];
if((x[jvj+151]==x[jvj+89])) goto l43;
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[760])( );     /*MEMEX0(jvj+88,jvj+89,jvj+90)*/
if((x[jvj+90]==135)) goto l44;
l43:x[jvj+152]=t[x[jvj+152]];
goto l42;
l79:x[jvj+142]=s[x[jvj+162]] ;z[jvj+142]=(x[jvj+142]<=sepcte) ? x[jvj+142] : z[jvj+162];
if((x[jvj+142]==x[jvj+138])) goto l80;
pile[v[22]]=jvj+141; pile[WZ1]=jvj+142; 
(*f[68])( );     /*PLUE0(jvj+141,jvj+142)*/
l80:x[jvj+162]=t[x[jvj+162]];
goto l78;
}
