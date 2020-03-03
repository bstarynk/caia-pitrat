#include "dx.h"
void Z55Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=122;
x[jvj+1]=15556;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1869&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(538,NNNY,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=22)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+5,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+5,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=486)) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+5,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+13,jvj+14)*/
if(x[jvj+14]!=25&&x[jvj+14]!=26) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+15)*/
pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+16)*/
x[jvj+109]=x[jvj+15] ;z[jvj+109]=z[jvj+15];
l3:if((x[jvj+109]<=0)) goto l7;
x[jvj+17]=s[x[jvj+109]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+109];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l4;
x[jvj+19]=x[jvj+17] ;z[jvj+19]=z[jvj+17];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1446])( );     /*NONUL0(jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l18;
l4:x[jvj+109]=t[x[jvj+109]];
goto l3;
l2:x[jvj+2]=s[x[jvj+62]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+62];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+62]=t[x[jvj+62]];
l1:if((x[jvj+62]>0)) goto l2;
NNNT=4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+55; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+55,jvj+88)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+88; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+88,jvj+63)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+63; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+4,jvj+63,107)*/
pile[v[22]]=jvj+57; 
(*f[1118])( );     /*AJE3(jvj+57,jvj+63,107)*/
pile[v[22]]=jvj+51; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+51,jvj+63,NNNX)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l6:NNNT=204;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+14; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+64)*/
pile[WZ3]=486; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=107; pile[WZ3]=jvj+72; 
(*f[301])( );     /*TRI11(jvj+70,jvj+71,107,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+68; 
(*f[58])( );     /*TRI3(jvj+72,22,100,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+24; pile[WZ2]=107; pile[WZ3]=jvj+75; 
(*f[301])( );     /*TRI11(jvj+74,jvj+24,107,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+75,22,100,jvj+66)*/
pile[v[22]]=jvj+64; pile[WZ1]=111; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,111,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+65,jvj+66,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+68,jvj+67,jvj+27)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+27; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+5,jvj+27,NNNX)*/
goto l17;
l7:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(539,NNNY,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=22)) goto l12;
pile[v[22]]=102; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+28,jvj+30)*/
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=486)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+28; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+28,jvj+33)*/
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=486)) goto l12;
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+28,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+36,jvj+37)*/
if(x[jvj+37]!=25&&x[jvj+37]!=26) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+38)*/
pile[WZ1]=jvj+33; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+39)*/
x[jvj+111]=x[jvj+38] ;z[jvj+111]=z[jvj+38];
l8:if((x[jvj+111]<=0)) goto l12;
x[jvj+40]=s[x[jvj+111]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+111];
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=484)) goto l9;
x[jvj+42]=x[jvj+40] ;z[jvj+42]=z[jvj+40];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[1446])( );     /*NONUL0(jvj+42,jvj+43)*/
if((x[jvj+43]==135)) goto l31;
l9:x[jvj+111]=t[x[jvj+111]];
goto l8;
l11:NNNT=204;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+76)*/
pile[WZ3]=486; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; pile[WZ2]=107; pile[WZ3]=jvj+84; 
(*f[301])( );     /*TRI11(jvj+82,jvj+83,107,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+80; 
(*f[58])( );     /*TRI3(jvj+84,22,100,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+47; pile[WZ2]=107; pile[WZ3]=jvj+87; 
(*f[301])( );     /*TRI11(jvj+86,jvj+47,107,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+87,22,100,jvj+78)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; pile[WZ2]=103; pile[WZ3]=jvj+79; 
(*f[58])( );     /*TRI3(jvj+77,jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+79,jvj+50)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+50; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+50,NNNX)*/
goto l17;
l12:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(543,NNNY,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+51,jvj+52)*/
if((x[jvj+52]!=22)) goto l16;
pile[v[22]]=107; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(107,jvj+51,jvj+53)*/
pile[v[22]]=111; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+51,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+54,jvj+55)*/
if(x[jvj+55]!=485&&x[jvj+55]!=486&&x[jvj+55]!=48&&x[jvj+55]!=55) goto l16;
x[jvj+121]=x[jvj+53] ;z[jvj+121]=z[jvj+53];
l44:if((x[jvj+121]>0)) goto l45;
l16:x[NNNX]=NNNT=incon;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l14:x[jvj+53]=t[x[jvj+53]];
l13:if((x[jvj+53]<=0)) goto l16;
x[jvj+58]=s[x[jvj+53]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+53];
if((x[NNNY]!=x[jvj+58])) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+58,jvj+59)*/
if((x[jvj+59]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+58,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+60,jvj+61)*/
if((x[jvj+55]!=x[jvj+61])) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+58; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(107,jvj+58,jvj+62)*/
x[jvj+4]=0 ;z[jvj+4]=0;
goto l1;
l18:x[jvj+113]=x[jvj+15] ;z[jvj+113]=z[jvj+15];
l19:if((x[jvj+113]>0)) goto l20;
goto l4;
l20:x[jvj+89]=s[x[jvj+113]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+113];
pile[v[22]]=jvj+89; pile[WZ1]=jvj+19; pile[WZ2]=jvj+90; 
(*f[760])( );     /*MEMEX0(jvj+89,jvj+19,jvj+90)*/
if((x[jvj+90]==135)) goto l21;
x[jvj+113]=t[x[jvj+113]];
goto l19;
l21:x[jvj+91]=0 ;z[jvj+91]=0;
x[jvj+114]=x[jvj+15] ;z[jvj+114]=z[jvj+15];
l22:if((x[jvj+114]>0)) goto l23;
x[jvj+21]=x[jvj+91] ;z[jvj+21]=z[jvj+91];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[299])( );     /*COPEL0(jvj+21,jvj+22)*/
x[jvj+115]=x[jvj+16] ;z[jvj+115]=z[jvj+16];
l25:if((x[jvj+115]>0)) goto l26;
goto l4;
l23:x[jvj+92]=s[x[jvj+114]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+114];
if((x[jvj+92]==x[jvj+89])) goto l24;
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[68])( );     /*PLUE0(jvj+91,jvj+92)*/
l24:x[jvj+114]=t[x[jvj+114]];
goto l22;
l26:x[jvj+93]=s[x[jvj+115]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+115];
pile[v[22]]=jvj+93; pile[WZ1]=jvj+19; pile[WZ2]=jvj+94; 
(*f[760])( );     /*MEMEX0(jvj+93,jvj+19,jvj+94)*/
if((x[jvj+94]==135)) goto l27;
x[jvj+115]=t[x[jvj+115]];
goto l25;
l27:x[jvj+95]=0 ;z[jvj+95]=0;
x[jvj+116]=x[jvj+16] ;z[jvj+116]=z[jvj+16];
l28:if((x[jvj+116]>0)) goto l29;
x[jvj+23]=x[jvj+95] ;z[jvj+23]=z[jvj+95];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[299])( );     /*COPEL0(jvj+23,jvj+24)*/
x[jvj+71]=x[jvj+22] ;z[jvj+71]=z[jvj+22];
x[jvj+110]=x[jvj+16] ;z[jvj+110]=z[jvj+16];
l5:if((x[jvj+110]<=0)) goto l4;
x[jvj+25]=s[x[jvj+110]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+110];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l6;
x[jvj+110]=t[x[jvj+110]];
goto l5;
l29:x[jvj+96]=s[x[jvj+116]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+116];
if((x[jvj+96]==x[jvj+93])) goto l30;
pile[v[22]]=jvj+95; pile[WZ1]=jvj+96; 
(*f[68])( );     /*PLUE0(jvj+95,jvj+96)*/
l30:x[jvj+116]=t[x[jvj+116]];
goto l28;
l31:x[jvj+117]=x[jvj+38] ;z[jvj+117]=z[jvj+38];
l32:if((x[jvj+117]>0)) goto l33;
goto l9;
l33:x[jvj+97]=s[x[jvj+117]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+117];
pile[v[22]]=jvj+97; pile[WZ1]=jvj+42; pile[WZ2]=jvj+98; 
(*f[760])( );     /*MEMEX0(jvj+97,jvj+42,jvj+98)*/
if((x[jvj+98]==135)) goto l34;
x[jvj+117]=t[x[jvj+117]];
goto l32;
l34:x[jvj+99]=0 ;z[jvj+99]=0;
x[jvj+118]=x[jvj+38] ;z[jvj+118]=z[jvj+38];
l35:if((x[jvj+118]>0)) goto l36;
x[jvj+44]=x[jvj+99] ;z[jvj+44]=z[jvj+99];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[299])( );     /*COPEL0(jvj+44,jvj+45)*/
x[jvj+119]=x[jvj+39] ;z[jvj+119]=z[jvj+39];
l38:if((x[jvj+119]>0)) goto l39;
goto l9;
l36:x[jvj+100]=s[x[jvj+118]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+118];
if((x[jvj+100]==x[jvj+97])) goto l37;
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; 
(*f[68])( );     /*PLUE0(jvj+99,jvj+100)*/
l37:x[jvj+118]=t[x[jvj+118]];
goto l35;
l39:x[jvj+101]=s[x[jvj+119]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+119];
pile[v[22]]=jvj+101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+102; 
(*f[760])( );     /*MEMEX0(jvj+101,jvj+42,jvj+102)*/
if((x[jvj+102]==135)) goto l40;
x[jvj+119]=t[x[jvj+119]];
goto l38;
l40:x[jvj+103]=0 ;z[jvj+103]=0;
x[jvj+120]=x[jvj+39] ;z[jvj+120]=z[jvj+39];
l41:if((x[jvj+120]>0)) goto l42;
x[jvj+46]=x[jvj+103] ;z[jvj+46]=z[jvj+103];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[299])( );     /*COPEL0(jvj+46,jvj+47)*/
x[jvj+83]=x[jvj+45] ;z[jvj+83]=z[jvj+45];
x[jvj+112]=x[jvj+39] ;z[jvj+112]=z[jvj+39];
l10:if((x[jvj+112]<=0)) goto l9;
x[jvj+48]=s[x[jvj+112]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+112];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[760])( );     /*MEMEX0(jvj+40,jvj+48,jvj+49)*/
if((x[jvj+49]==135)) goto l11;
x[jvj+112]=t[x[jvj+112]];
goto l10;
l42:x[jvj+104]=s[x[jvj+120]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+120];
if((x[jvj+104]==x[jvj+101])) goto l43;
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; 
(*f[68])( );     /*PLUE0(jvj+103,jvj+104)*/
l43:x[jvj+120]=t[x[jvj+120]];
goto l41;
l45:x[jvj+105]=s[x[jvj+121]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+121];
pile[v[22]]=jvj+105; pile[WZ1]=NNNY; pile[WZ2]=jvj+106; 
(*f[760])( );     /*MEMEX0(jvj+105,NNNY,jvj+106)*/
if((x[jvj+106]==135)) goto l46;
x[jvj+121]=t[x[jvj+121]];
goto l44;
l46:x[jvj+107]=0 ;z[jvj+107]=0;
x[jvj+122]=x[jvj+53] ;z[jvj+122]=z[jvj+53];
l47:if((x[jvj+122]>0)) goto l48;
x[jvj+56]=x[jvj+107] ;z[jvj+56]=z[jvj+107];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[299])( );     /*COPEL0(jvj+56,jvj+57)*/
goto l13;
l48:x[jvj+108]=s[x[jvj+122]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+122];
if((x[jvj+108]==x[jvj+105])) goto l49;
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; 
(*f[68])( );     /*PLUE0(jvj+107,jvj+108)*/
l49:x[jvj+122]=t[x[jvj+122]];
goto l47;
}
