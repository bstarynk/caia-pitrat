#include "dx.h"
void ISUU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V22=0,V28=0,V74=0,V80=0,G=0,V87=0,V89=0,V167=0,V173=0,V132=0,V180=0,V182=0,V127=0,V196=0,V204=0,V134=0,V133=0,V49=0,V100=0,V105=0,V113=0,V53=0,V52=0,V152=0;
int X,TL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=116;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; TL=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,X,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+80,jvj+81)*/
if((x[jvj+81]==435)) goto l44;
if((x[jvj+81]!=39)) goto l51;
pile[v[22]]=113; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(113,jvj+80,jvj+103)*/
pile[v[22]]=223; pile[WZ1]=TL; pile[WZ2]=jvj+104; 
(*f[33])( );     /*FNDE0(223,TL,jvj+104)*/
l49:if((x[jvj+103]<=0)) goto l51;
x[jvj+105]=s[x[jvj+103]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+103];
pile[v[22]]=102; pile[WZ1]=jvj+105; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+105,jvj+79)*/
pile[v[22]]=140; pile[WZ1]=jvj+79; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+79,V152)*/
V152=pile[WZ2]; 
V127=V152;
for(a=x[jvj+104];a>0;a=t[a]) if(s[a]==V127) goto l50;
pile[v[22]]=525; pile[WZ1]=TL; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(525,TL,jvj+69)*/
pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(135,X,jvj+70)*/
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(302,TL,jvj+71)*/
pile[v[22]]=jvj+70; pile[WZ1]=V127; pile[WZ2]=jvj+43; 
(*f[1842])( );     /*ISC0(jvj+70,V127,jvj+43)*/
pile[v[22]]=128; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(128,jvj+43,jvj+44)*/
x[jvj+110]=x[jvj+44] ;z[jvj+110]=z[jvj+44];
l26:if((x[jvj+110]>0)) goto l27;
x[jvj+115]=x[jvj+71] ;z[jvj+115]=z[jvj+71];
l42:if((x[jvj+115]<=0)) goto l50;
x[jvj+67]=s[x[jvj+115]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+115];
if((x[jvj+67]==x[X])) goto l43;
pile[v[22]]=102; pile[WZ1]=jvj+67; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+67,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+72,jvj+73)*/
if((x[jvj+73]!=435)) goto l43;
pile[v[22]]=102; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+72,jvj+74)*/
pile[v[22]]=140; pile[WZ1]=jvj+74; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(140,jvj+74,V196)*/
V196=pile[WZ2]; 
if((V127!=V196)) goto l43;
pile[v[22]]=436; pile[WZ1]=jvj+72; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(436,jvj+72,jvj+75)*/
pile[v[22]]=140; pile[WZ1]=jvj+75; 
(*f[44])( );if(v[102]) goto l43;     /*FNDC1(140,jvj+75,V204)*/
V204=pile[WZ2]; 
V134=V204;
for(a=x[jvj+69];a>0;a=t[a]) if(s[a]==V134) goto l43;
pile[v[22]]=111; pile[WZ1]=jvj+72; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+72,jvj+76)*/
pile[v[22]]=101; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+76,jvj+77)*/
V133=x[jvj+77];
if(V133!=179&&V133!=82) goto l43;
pile[v[22]]=jvj+70; pile[WZ1]=jvj+67; pile[WZ2]=jvj+78; 
(*f[2008])( );if(v[102]) goto l43;     /*ISI0(jvj+70,jvj+67,jvj+78)*/
if((x[jvj+78]==135)) goto l41;
l43:x[jvj+115]=t[x[jvj+115]];
goto l42;
l2:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=TL; pile[WZ2]=X; pile[WZ3]=jvj+8; 
(*f[2006])( );     /*ISN1(jvj+7,TL,X,jvj+8)*/
if((x[jvj+8]==134)) goto l51;
x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]>0)) goto l2;
pile[v[22]]=144; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(144,jvj+4,jvj+5)*/
if((x[jvj+5]!=68)) goto l9;
pile[v[22]]=jvj+1; pile[WZ1]=V; pile[WZ2]=jvj+2; 
(*f[1842])( );     /*ISC0(jvj+1,V,jvj+2)*/
pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,jvj+2,jvj+3)*/
if((x[jvj+3]==0)) goto l9;
l51:v[0]=jvj; v[22]-=2; return;
l3:pile[v[22]]=436; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+9,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+10,V22)*/
V22=pile[WZ2]; 
if((V49!=V22)) goto l8;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==78)) goto l51;
l8:x[jvj+19]=t[x[jvj+19]];
l7:if((x[jvj+19]<=0)) goto l48;
x[jvj+16]=s[x[jvj+19]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+19];
pile[v[22]]=1157; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1157,jvj+16,jvj+17)*/
if((x[jvj+17]!=78)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+16,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+9,jvj+18)*/
if((x[jvj+18]==435)) goto l3;
if((x[jvj+18]!=39)) goto l8;
pile[v[22]]=113; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(113,jvj+9,jvj+13)*/
x[jvj+106]=x[jvj+13] ;z[jvj+106]=z[jvj+13];
l4:if((x[jvj+106]<=0)) goto l8;
x[jvj+14]=s[x[jvj+106]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+106];
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+14,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+15,V28)*/
V28=pile[WZ2]; 
if((V49==V28)) goto l51;
l5:x[jvj+106]=t[x[jvj+106]];
goto l4;
l6:pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(302,TL,jvj+19)*/
goto l7;
l9:pile[v[22]]=159; pile[WZ1]=jvj+4; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(159,jvj+4,jvj+20)*/
l10:if((x[jvj+20]>0)) goto l11;
pile[v[22]]=jvj+1; pile[WZ1]=V; pile[WZ2]=V49; pile[WZ3]=X; 
(*f[2007])( );     /*ISP0(jvj+1,V,V49,X)*/
pile[v[22]]=X; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(X,TL)*/
goto l51;
l11:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=436; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+21,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=140; pile[WZ2]=V; 
(*f[177])( );     /*CHGC4(jvj+22,140,V)*/
l12:x[jvj+20]=t[x[jvj+20]];
goto l10;
l14:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=TL; pile[WZ2]=X; pile[WZ3]=jvj+26; 
(*f[2006])( );     /*ISN1(jvj+25,TL,X,jvj+26)*/
if((x[jvj+26]==134)) goto l47;
x[jvj+24]=t[x[jvj+24]];
l13:if((x[jvj+24]>0)) goto l14;
x[jvj+116]=x[jvj+89] ;z[jvj+116]=z[jvj+89];
l45:if((x[jvj+116]<=0)) goto l47;
x[jvj+90]=s[x[jvj+116]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+116];
if((x[jvj+90]==x[X])) goto l46;
pile[v[22]]=102; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+90,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+91,jvj+92)*/
if((x[jvj+92]!=435)) goto l46;
pile[v[22]]=102; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+91,jvj+93)*/
pile[v[22]]=140; pile[WZ1]=jvj+93; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+93,V105)*/
V105=pile[WZ2]; 
if((V49!=V105)) goto l46;
pile[v[22]]=436; pile[WZ1]=jvj+91; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(436,jvj+91,jvj+94)*/
pile[v[22]]=140; pile[WZ1]=jvj+94; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+94,V113)*/
V113=pile[WZ2]; 
V53=V113;
for(a=x[jvj+86];a>0;a=t[a]) if(s[a]==V53) goto l46;
for(a=x[jvj+87];a>0;a=t[a]) if(s[a]==V53) goto l46;
pile[v[22]]=111; pile[WZ1]=jvj+91; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+91,jvj+95)*/
pile[v[22]]=101; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+95,jvj+96)*/
V52=x[jvj+96];
if(V52!=179&&V52!=82) goto l46;
pile[v[22]]=jvj+88; pile[WZ1]=jvj+90; pile[WZ2]=jvj+97; 
(*f[2008])( );if(v[102]) goto l46;     /*ISI0(jvj+88,jvj+90,jvj+97)*/
if((x[jvj+97]==135)) goto l24;
l46:x[jvj+116]=t[x[jvj+116]];
goto l45;
l15:pile[v[22]]=436; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(436,jvj+27,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+28,V74)*/
V74=pile[WZ2]; 
if((V53!=V74)) goto l25;
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+27,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]==78)) goto l46;
l25:x[jvj+109]=t[x[jvj+109]];
l22:if((x[jvj+109]>0)) goto l23;
pile[v[22]]=jvj+88; pile[WZ1]=V53; pile[WZ2]=V49; pile[WZ3]=X; 
(*f[2007])( );     /*ISP0(jvj+88,V53,V49,X)*/
pile[v[22]]=jvj+82; pile[WZ1]=140; pile[WZ2]=V53; 
(*f[177])( );     /*CHGC4(jvj+82,140,V53)*/
pile[v[22]]=jvj+90; pile[WZ1]=X; pile[WZ2]=TL; 
(*f[2009])( );     /*IST0(jvj+90,X,TL)*/
goto l46;
l18:if((x[jvj+42]==39)) goto l19;
goto l25;
l19:pile[v[22]]=114; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(114,jvj+27,jvj+36)*/
pile[v[22]]=111; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+27,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+37,jvj+38)*/
G=x[jvj+38];
if(G!=10102&&G!=10490&&G!=10672&&G!=10275&&G!=10212) goto l25;
x[jvj+108]=x[jvj+36] ;z[jvj+108]=z[jvj+36];
l20:if((x[jvj+108]<=0)) goto l25;
x[jvj+39]=s[x[jvj+108]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+108];
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+39,jvj+40)*/
pile[v[22]]=140; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+40,V87)*/
V87=pile[WZ2]; 
if((V53!=V87)) goto l21;
pile[v[22]]=103; pile[WZ1]=jvj+39; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+39,jvj+41)*/
pile[v[22]]=140; pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+41,V89)*/
V89=pile[WZ2]; 
if((V89==(-697))) goto l46;
l21:x[jvj+108]=t[x[jvj+108]];
goto l20;
l23:x[jvj+34]=s[x[jvj+109]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+109];
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+34,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+27,jvj+42)*/
pile[v[22]]=1157; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1157,jvj+34,jvj+35)*/
if((x[jvj+35]!=78)) goto l18;
if((x[jvj+42]==435)) goto l15;
if((x[jvj+42]!=39)) goto l18;
pile[v[22]]=113; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(113,jvj+27,jvj+31)*/
x[jvj+107]=x[jvj+31] ;z[jvj+107]=z[jvj+31];
l16:if((x[jvj+107]<=0)) goto l19;
x[jvj+32]=s[x[jvj+107]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+107];
pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+32,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+33,V80)*/
V80=pile[WZ2]; 
if((V53==V80)) goto l46;
l17:x[jvj+107]=t[x[jvj+107]];
goto l16;
l24:x[jvj+109]=x[jvj+89] ;z[jvj+109]=z[jvj+89];
goto l22;
l27:x[jvj+45]=s[x[jvj+110]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+110];
pile[v[22]]=jvj+45; pile[WZ1]=TL; pile[WZ2]=X; pile[WZ3]=jvj+46; 
(*f[2006])( );     /*ISN1(jvj+45,TL,X,jvj+46)*/
if((x[jvj+46]==134)) goto l50;
x[jvj+110]=t[x[jvj+110]];
goto l26;
l28:pile[v[22]]=436; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(436,jvj+47,jvj+48)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+48,V167)*/
V167=pile[WZ2]; 
if((V134!=V167)) goto l38;
pile[v[22]]=111; pile[WZ1]=jvj+47; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+47,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==78)) goto l40;
l38:x[jvj+113]=t[x[jvj+113]];
l36:if((x[jvj+113]>0)) goto l37;
pile[v[22]]=jvj+70; pile[WZ1]=V134; pile[WZ2]=V127; pile[WZ3]=X; 
(*f[2007])( );     /*ISP0(jvj+70,V134,V127,X)*/
pile[v[22]]=jvj+79; pile[WZ1]=140; pile[WZ2]=V134; 
(*f[177])( );     /*CHGC4(jvj+79,140,V134)*/
pile[v[22]]=jvj+67; pile[WZ1]=X; pile[WZ2]=TL; 
(*f[2009])( );     /*IST0(jvj+67,X,TL)*/
goto l43;
l31:if((x[jvj+63]==39)) goto l32;
goto l38;
l32:pile[v[22]]=114; pile[WZ1]=jvj+47; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(114,jvj+47,jvj+56)*/
pile[v[22]]=111; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+47,jvj+57)*/
pile[v[22]]=101; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+57,jvj+58)*/
V132=x[jvj+58];
if(V132!=10102&&V132!=10490&&V132!=10672&&V132!=10275&&V132!=10212) goto l38;
x[jvj+112]=x[jvj+56] ;z[jvj+112]=z[jvj+56];
l33:if((x[jvj+112]<=0)) goto l38;
x[jvj+59]=s[x[jvj+112]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+112];
pile[v[22]]=102; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+59,jvj+60)*/
pile[v[22]]=140; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+60,V180)*/
V180=pile[WZ2]; 
if((V134!=V180)) goto l34;
pile[v[22]]=103; pile[WZ1]=jvj+59; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+59,jvj+61)*/
pile[v[22]]=140; pile[WZ1]=jvj+61; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+61,V182)*/
V182=pile[WZ2]; 
if((V182==(-697))) goto l40;
l34:x[jvj+112]=t[x[jvj+112]];
goto l33;
l37:x[jvj+54]=s[x[jvj+113]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+113];
pile[v[22]]=102; pile[WZ1]=jvj+54; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+54,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+47,jvj+63)*/
pile[v[22]]=1157; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1157,jvj+54,jvj+55)*/
if((x[jvj+55]!=78)) goto l31;
if((x[jvj+63]==435)) goto l28;
if((x[jvj+63]!=39)) goto l31;
pile[v[22]]=113; pile[WZ1]=jvj+47; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(113,jvj+47,jvj+51)*/
x[jvj+111]=x[jvj+51] ;z[jvj+111]=z[jvj+51];
l29:if((x[jvj+111]<=0)) goto l32;
x[jvj+52]=s[x[jvj+111]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+111];
pile[v[22]]=102; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,jvj+52,jvj+53)*/
pile[v[22]]=140; pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+53,V173)*/
V173=pile[WZ2]; 
if((V134==V173)) goto l40;
l30:x[jvj+111]=t[x[jvj+111]];
goto l29;
l40:x[jvj+114]=x[jvj+62] ;z[jvj+114]=z[jvj+62];
l39:if((x[jvj+114]<=0)) goto l38;
x[jvj+64]=s[x[jvj+114]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+114];
pile[v[22]]=jvj+54; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[2001])( );     /*ISN0(jvj+54,jvj+64,jvj+65)*/
if((x[jvj+65]==134)) goto l43;
x[jvj+114]=t[x[jvj+114]];
goto l39;
l41:pile[v[22]]=134; pile[WZ1]=X; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(134,X,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[2001])( );     /*ISN0(jvj+66,jvj+67,jvj+68)*/
if((x[jvj+68]==134)) goto l43;
l35:pile[v[22]]=128; pile[WZ1]=jvj+43; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(128,jvj+43,jvj+62)*/
x[jvj+113]=x[jvj+71] ;z[jvj+113]=z[jvj+71];
goto l36;
l44:pile[v[22]]=436; pile[WZ1]=jvj+80; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(436,jvj+80,jvj+82)*/
pile[v[22]]=140; pile[WZ1]=jvj+82; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(140,jvj+82,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+80; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+80,jvj+83)*/
pile[v[22]]=101; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+83,jvj+84)*/
if(x[jvj+84]!=179&&x[jvj+84]!=82) goto l51;
pile[v[22]]=117; pile[WZ1]=20; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(117,20,V100)*/
V100=pile[WZ2]; 
if((V100>=0)) goto l47;
pile[v[22]]=223; pile[WZ1]=TL; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(223,TL,jvj+85)*/
for(a=x[jvj+85];a>0;a=t[a]) if(s[a]==V49) goto l47;
pile[v[22]]=222; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(222,TL,jvj+86)*/
pile[v[22]]=525; pile[WZ2]=jvj+87; 
(*f[33])( );     /*FNDE0(525,TL,jvj+87)*/
pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(135,X,jvj+88)*/
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(302,TL,jvj+89)*/
pile[v[22]]=jvj+88; pile[WZ1]=V49; pile[WZ2]=jvj+23; 
(*f[1842])( );     /*ISC0(jvj+88,V49,jvj+23)*/
pile[v[22]]=128; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(128,jvj+23,jvj+24)*/
goto l13;
l47:pile[v[22]]=102; pile[WZ1]=jvj+80; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+80,jvj+98)*/
pile[v[22]]=140; pile[WZ1]=jvj+98; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(140,jvj+98,V)*/
V=pile[WZ2]; 
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+99; 
(*f[33])( );     /*FNDE0(222,TL,jvj+99)*/
for(a=x[jvj+99];a>0;a=t[a]) if(s[a]==V) goto l51;
pile[v[22]]=525; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(525,TL,jvj+100)*/
for(a=x[jvj+100];a>0;a=t[a]) if(s[a]==V) goto l51;
pile[v[22]]=297; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(297,TL,jvj+101)*/
pile[v[22]]=147; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[33])( );     /*FNDE0(147,jvj+101,jvj+102)*/
for(a=x[jvj+102];a>0;a=t[a]) if(s[a]==V49) goto l51;
for(a=x[jvj+102];a>0;a=t[a]) if(s[a]==V) goto l6;
l48:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(135,X,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=V49; pile[WZ2]=jvj+4; 
(*f[1842])( );     /*ISC0(jvj+1,V49,jvj+4)*/
pile[v[22]]=128; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(128,jvj+4,jvj+6)*/
goto l1;
l50:x[jvj+103]=t[x[jvj+103]];
goto l49;
}
