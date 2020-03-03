#include "dx.h"
void Z137Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V498=0,V442=0,V439=0,V327=0,V326=0,V165=0,V166=0,V143=0,V134=0,V133=0,V135=0,V236=0,V228=0,V227=0,V355=0,V354=0,V290=0,V289=0,V288=0,V375=0,V376=0,V374=0,V27=0,A=0,B=0,V112=0,C=0,V119=0,V118=0,V117=0,V116=0,V115=0,V123=0,V106=0,V518=0,V756=0,V757=0,V113=0;
int MMMI;
int MMMT,MMMX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=411;
if(v[0]>99700) (*f[6])( );

MMMI=pile[v[22]]; MMMT=pile[v[22]+1]; MMMX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=MMMI; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l157;     /*FNDO0(111,MMMI,jvj+122)*/
pile[v[22]]=101; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l157;     /*FNDO0(101,jvj+122,jvj+123)*/
if((x[jvj+123]==408)) goto l81;
if((x[jvj+123]==486)) goto l84;
if((x[jvj+123]==1437)) goto l110;
if((x[jvj+123]==30)) goto l111;
if((x[jvj+123]==25)) goto l118;
if((x[jvj+123]==596)) goto l123;
if((x[jvj+123]==485)) goto l124;
if((x[jvj+123]==1273)) goto l130;
if((x[jvj+123]!=1911)) goto l135;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+214; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+214)*/
pile[v[22]]=111; pile[WZ1]=jvj+214; pile[WZ2]=jvj+215; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+214,jvj+215)*/
pile[v[22]]=101; pile[WZ1]=jvj+215; pile[WZ2]=jvj+216; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+215,jvj+216)*/
if((x[jvj+216]!=486)) goto l135;
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+217; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+217)*/
pile[v[22]]=130; pile[WZ1]=jvj+217; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+217,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+214; pile[WZ2]=jvj+218; 
(*f[33])( );     /*FNDE0(107,jvj+214,jvj+218)*/
pile[v[22]]=jvj+217; pile[WZ1]=jvj+219; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+217,jvj+219)*/
x[jvj+406]=x[jvj+218] ;z[jvj+406]=z[jvj+218];
l133:if((x[jvj+406]<=0)) goto l135;
x[jvj+389]=s[x[jvj+406]] ;z[jvj+389]=(x[jvj+389]<=sepcte) ? x[jvj+389] : z[jvj+406];
x[jvj+220]=x[jvj+389] ;z[jvj+220]=z[jvj+389];
pile[v[22]]=130; pile[WZ1]=jvj+220; 
(*f[26])( );if(v[102]) goto l134;     /*FNDC0(130,jvj+220,V289)*/
V289=pile[WZ2]; 
V288=V289%V290;
if((V288!=0)) goto l134;
x[jvj+51]=0 ;z[jvj+51]=0;
l35:if((x[jvj+218]>0)) goto l36;
pile[v[22]]=jvj+220; pile[WZ1]=jvj+221; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+220,jvj+221)*/
x[jvj+54]=0 ;z[jvj+54]=0;
l39:if((x[jvj+51]>0)) goto l40;
x[MMMT]=16790 ;z[MMMT]=16790;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+303; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+303)*/
pile[WZ3]=63; pile[WZ4]=jvj+350; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+350)*/
pile[v[22]]=jvj+350; pile[WZ1]=111; pile[WZ2]=jvj+351; 
(*f[54])( );     /*TRI1(jvj+350,111,jvj+351)*/
pile[v[22]]=jvj+351; pile[WZ1]=jvj+219; pile[WZ2]=103; pile[WZ3]=jvj+352; 
(*f[58])( );     /*TRI3(jvj+351,jvj+219,103,jvj+352)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+221; pile[WZ4]=jvj+352; pile[WZ5]=jvj+304; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+221,jvj+352,jvj+304)*/
pile[WZ2]=111; pile[WZ3]=jvj+303; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+303,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+304; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+304)*/
pile[v[22]]=jvj+54; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+54,MMMX,107)*/
l165:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+362]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+362];
if((x[jvj+1]==x[jvj+236])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==649)) goto l3;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
l3:x[jvj+362]=t[x[jvj+362]];
l1:if((x[jvj+362]>0)) goto l2;
x[jvj+7]=0 ;z[jvj+7]=0;
l5:if((x[jvj+4]>0)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+236; pile[WZ2]=jvj+239; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(102,jvj+236,jvj+239)*/
pile[v[22]]=jvj+239; pile[WZ1]=jvj+240; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+239,jvj+240)*/
x[MMMT]=16618 ;z[MMMT]=16618;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+123; pile[WZ4]=jvj+310; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+123,jvj+310)*/
pile[WZ3]=485; pile[WZ4]=jvj+356; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+356)*/
pile[v[22]]=jvj+356; pile[WZ1]=111; pile[WZ2]=jvj+357; 
(*f[54])( );     /*TRI1(jvj+356,111,jvj+357)*/
pile[v[22]]=jvj+357; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+358; 
(*f[301])( );     /*TRI11(jvj+357,jvj+7,107,jvj+358)*/
pile[v[22]]=jvj+358; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+313; 
(*f[58])( );     /*TRI3(jvj+358,22,100,jvj+313)*/
pile[v[22]]=jvj+310; pile[WZ1]=111; pile[WZ2]=jvj+311; 
(*f[54])( );     /*TRI1(jvj+310,111,jvj+311)*/
pile[v[22]]=jvj+311; pile[WZ1]=jvj+240; pile[WZ2]=103; pile[WZ3]=jvj+312; 
(*f[58])( );     /*TRI3(jvj+311,jvj+240,103,jvj+312)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+313; pile[WZ4]=jvj+312; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+313,jvj+312,MMMX)*/
goto l165;
l6:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
l8:x[jvj+8]=s[x[jvj+363]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+363];
if((x[jvj+8]==x[jvj+393])) goto l9;
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==649)) goto l9;
l10:pile[v[22]]=jvj+11; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+8)*/
l9:x[jvj+363]=t[x[jvj+363]];
l7:if((x[jvj+363]>0)) goto l8;
x[jvj+14]=0 ;z[jvj+14]=0;
l11:if((x[jvj+11]>0)) goto l12;
pile[v[22]]=jvj+223; pile[WZ1]=jvj+246; pile[WZ2]=jvj+247; 
(*f[760])( );     /*MEMEX0(jvj+223,jvj+246,jvj+247)*/
if((x[jvj+247]==135)) goto l149;
x[jvj+409]=t[x[jvj+409]];
l148:if((x[jvj+409]<=0)) goto l150;
x[jvj+393]=s[x[jvj+409]] ;z[jvj+393]=(x[jvj+393]<=sepcte) ? x[jvj+393] : z[jvj+409];
x[jvj+246]=x[jvj+393] ;z[jvj+246]=z[jvj+393];
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+363]=x[jvj+245] ;z[jvj+363]=z[jvj+245];
goto l7;
l12:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+12,jvj+13)*/
pile[v[22]]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+13)*/
x[jvj+11]=t[x[jvj+11]];
goto l11;
l14:x[jvj+15]=s[x[jvj+364]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+364];
if((x[jvj+15]==x[jvj+391])) goto l15;
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==649)) goto l15;
l16:pile[v[22]]=jvj+18; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+15)*/
l15:x[jvj+364]=t[x[jvj+364]];
l13:if((x[jvj+364]>0)) goto l14;
x[jvj+21]=0 ;z[jvj+21]=0;
l17:if((x[jvj+18]>0)) goto l18;
pile[v[22]]=jvj+232; pile[WZ1]=jvj+234; pile[WZ2]=jvj+235; 
(*f[760])( );     /*MEMEX0(jvj+232,jvj+234,jvj+235)*/
if((x[jvj+235]==135)) goto l143;
x[jvj+408]=t[x[jvj+408]];
l141:if((x[jvj+408]>0)) goto l142;
pile[v[22]]=130; pile[WZ1]=jvj+232; 
(*f[26])( );if(v[102]) goto l146;     /*FNDC0(130,jvj+232,V27)*/
V27=pile[WZ2]; 
if((V27!=0)) goto l146;
x[jvj+392]=x[jvj+233] ;z[jvj+392]=z[jvj+233];
l144:if((x[jvj+392]<=0)) goto l146;
x[jvj+236]=s[x[jvj+392]] ;z[jvj+236]=(x[jvj+236]<=sepcte) ? x[jvj+236] : z[jvj+392];
pile[v[22]]=111; pile[WZ1]=jvj+236; pile[WZ2]=jvj+237; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(111,jvj+236,jvj+237)*/
pile[v[22]]=101; pile[WZ1]=jvj+237; pile[WZ2]=jvj+238; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(101,jvj+237,jvj+238)*/
if((x[jvj+238]!=52)) goto l145;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+362]=x[jvj+233] ;z[jvj+362]=z[jvj+233];
goto l1;
l18:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+20)*/
x[jvj+18]=t[x[jvj+18]];
goto l17;
l20:x[jvj+22]=s[x[jvj+365]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+365];
if((x[jvj+22]==x[jvj+149])) goto l21;
if((x[jvj+22]==x[jvj+382])) goto l21;
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]==649)) goto l21;
l22:pile[v[22]]=jvj+25; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+22)*/
l21:x[jvj+365]=t[x[jvj+365]];
l19:if((x[jvj+365]>0)) goto l20;
x[jvj+28]=0 ;z[jvj+28]=0;
l23:if((x[jvj+25]>0)) goto l24;
pile[v[22]]=jvj+152; pile[WZ1]=jvj+157; pile[WZ2]=jvj+158; 
(*f[760])( );     /*MEMEX0(jvj+152,jvj+157,jvj+158)*/
if((x[jvj+158]==135)) goto l106;
l105:x[jvj+401]=t[x[jvj+401]];
l104:if((x[jvj+401]<=0)) goto l103;
x[jvj+382]=s[x[jvj+401]] ;z[jvj+382]=(x[jvj+382]<=sepcte) ? x[jvj+382] : z[jvj+401];
if((x[jvj+149]==x[jvj+382])) goto l105;
x[jvj+157]=x[jvj+382] ;z[jvj+157]=z[jvj+382];
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+365]=x[jvj+135] ;z[jvj+365]=z[jvj+135];
goto l19;
l24:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+26,jvj+27)*/
pile[v[22]]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+27)*/
x[jvj+25]=t[x[jvj+25]];
goto l23;
l26:x[jvj+34]=s[x[jvj+366]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+366];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+34,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+320; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+320)*/
pile[v[22]]=jvj+320; pile[WZ1]=111; pile[WZ2]=jvj+321; 
(*f[54])( );     /*TRI1(jvj+320,111,jvj+321)*/
pile[v[22]]=jvj+321; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+322; 
(*f[58])( );     /*TRI3(jvj+321,jvj+35,103,jvj+322)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+322; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+322,jvj+37)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[522])( );     /*PLUB2(jvj+36,jvj+37)*/
x[jvj+366]=t[x[jvj+366]];
l25:if((x[jvj+366]>0)) goto l26;
for(i=x[jvj+36],V227=0;i>0;i=t[i],V227++)  ;
if((V227!=V228)) goto l122;
x[jvj+40]=0 ;z[jvj+40]=0;
l27:if((x[jvj+36]>0)) goto l28;
x[MMMT]=16818 ;z[MMMT]=16818;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+292; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+292)*/
pile[v[22]]=jvj+292; pile[WZ1]=111; pile[WZ2]=jvj+293; 
(*f[54])( );     /*TRI1(jvj+292,111,jvj+293)*/
pile[v[22]]=jvj+293; pile[WZ1]=jvj+40; pile[WZ2]=107; pile[WZ3]=jvj+294; 
(*f[301])( );     /*TRI11(jvj+293,jvj+40,107,jvj+294)*/
pile[v[22]]=jvj+294; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+294,22,100,MMMX)*/
goto l165;
l28:x[jvj+38]=s[x[jvj+36]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+36];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+38,jvj+39)*/
pile[v[22]]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+39)*/
x[jvj+36]=t[x[jvj+36]];
goto l27;
l30:x[jvj+41]=s[x[jvj+367]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+367];
if((x[jvj+41]==x[jvj+388])) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]==649)) goto l31;
l32:pile[v[22]]=jvj+44; pile[WZ1]=jvj+41; 
(*f[68])( );     /*PLUE0(jvj+44,jvj+41)*/
l31:x[jvj+367]=t[x[jvj+367]];
l29:if((x[jvj+367]>0)) goto l30;
x[jvj+47]=0 ;z[jvj+47]=0;
l33:if((x[jvj+44]>0)) goto l34;
pile[v[22]]=jvj+208; pile[WZ1]=jvj+212; pile[WZ2]=jvj+213; 
(*f[760])( );     /*MEMEX0(jvj+208,jvj+212,jvj+213)*/
if((x[jvj+213]==135)) goto l132;
x[jvj+405]=t[x[jvj+405]];
l131:if((x[jvj+405]<=0)) goto l135;
x[jvj+388]=s[x[jvj+405]] ;z[jvj+388]=(x[jvj+388]<=sepcte) ? x[jvj+388] : z[jvj+405];
x[jvj+212]=x[jvj+388] ;z[jvj+212]=z[jvj+388];
x[jvj+44]=0 ;z[jvj+44]=0;
x[jvj+367]=x[jvj+211] ;z[jvj+367]=z[jvj+211];
goto l29;
l34:x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+45,jvj+46)*/
pile[v[22]]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+47,jvj+46)*/
x[jvj+44]=t[x[jvj+44]];
goto l33;
l36:x[jvj+48]=s[x[jvj+218]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+218];
if((x[jvj+48]==x[jvj+389])) goto l37;
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==649)) goto l37;
l38:pile[v[22]]=jvj+51; pile[WZ1]=jvj+48; 
(*f[68])( );     /*PLUE0(jvj+51,jvj+48)*/
l37:x[jvj+218]=t[x[jvj+218]];
goto l35;
l40:x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+52,jvj+53)*/
pile[v[22]]=jvj+54; 
(*f[68])( );     /*PLUE0(jvj+54,jvj+53)*/
x[jvj+51]=t[x[jvj+51]];
goto l39;
l42:x[jvj+57]=s[x[jvj+368]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+368];
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+57,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+323; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+323)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+323; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+323,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=107; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+60,107,jvj+56)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+60,107,jvj+58)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[522])( );     /*PLUB2(jvj+59,jvj+60)*/
x[jvj+368]=t[x[jvj+368]];
l41:if((x[jvj+368]>0)) goto l42;
for(i=x[jvj+59],V326=0;i>0;i=t[i],V326++)  ;
if((V326!=V327)) goto l93;
x[jvj+63]=0 ;z[jvj+63]=0;
l43:if((x[jvj+59]>0)) goto l44;
x[MMMT]=16678 ;z[MMMT]=16678;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+277; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+277)*/
pile[v[22]]=jvj+277; pile[WZ1]=111; pile[WZ2]=jvj+278; 
(*f[54])( );     /*TRI1(jvj+277,111,jvj+278)*/
pile[v[22]]=jvj+278; pile[WZ1]=jvj+63; pile[WZ2]=107; pile[WZ3]=jvj+279; 
(*f[301])( );     /*TRI11(jvj+278,jvj+63,107,jvj+279)*/
pile[v[22]]=jvj+279; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+279,22,100,MMMX)*/
goto l165;
l44:x[jvj+61]=s[x[jvj+59]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+59];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+61,jvj+62)*/
pile[v[22]]=jvj+63; 
(*f[68])( );     /*PLUE0(jvj+63,jvj+62)*/
x[jvj+59]=t[x[jvj+59]];
goto l43;
l46:x[jvj+66]=s[x[jvj+201]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+201];
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+66,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+324; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+324)*/
pile[v[22]]=jvj+324; pile[WZ1]=111; pile[WZ2]=jvj+325; 
(*f[54])( );     /*TRI1(jvj+324,111,jvj+325)*/
pile[v[22]]=jvj+325; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+326; 
(*f[58])( );     /*TRI3(jvj+325,jvj+65,103,jvj+326)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+326; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+326,jvj+69)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[522])( );     /*PLUB2(jvj+68,jvj+69)*/
x[jvj+201]=t[x[jvj+201]];
l45:if((x[jvj+201]>0)) goto l46;
for(i=x[jvj+68],V354=0;i>0;i=t[i],V354++)  ;
if((V354!=V355)) goto l135;
x[jvj+72]=0 ;z[jvj+72]=0;
l47:if((x[jvj+68]>0)) goto l48;
x[MMMT]=16681 ;z[MMMT]=16681;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+295; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+295)*/
pile[v[22]]=jvj+295; pile[WZ1]=111; pile[WZ2]=jvj+296; 
(*f[54])( );     /*TRI1(jvj+295,111,jvj+296)*/
pile[v[22]]=jvj+296; pile[WZ1]=jvj+72; pile[WZ2]=107; pile[WZ3]=jvj+297; 
(*f[301])( );     /*TRI11(jvj+296,jvj+72,107,jvj+297)*/
pile[v[22]]=jvj+297; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+297,22,100,MMMX)*/
goto l165;
l48:x[jvj+70]=s[x[jvj+68]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+68];
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+70,jvj+71)*/
pile[v[22]]=jvj+72; 
(*f[68])( );     /*PLUE0(jvj+72,jvj+71)*/
x[jvj+68]=t[x[jvj+68]];
goto l47;
l50:x[jvj+73]=s[x[jvj+229]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+229];
if((x[jvj+73]==x[jvj+390])) goto l51;
pile[v[22]]=111; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,jvj+73,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]==649)) goto l51;
l52:pile[v[22]]=jvj+76; pile[WZ1]=jvj+73; 
(*f[68])( );     /*PLUE0(jvj+76,jvj+73)*/
l51:x[jvj+229]=t[x[jvj+229]];
l49:if((x[jvj+229]>0)) goto l50;
x[MMMT]=16646 ;z[MMMT]=16646;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+228; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+228,MMMX)*/
goto l165;
l54:x[jvj+77]=s[x[jvj+369]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+369];
if((x[jvj+77]==x[jvj+394])) goto l55;
if((x[jvj+77]==x[jvj+395])) goto l55;
pile[v[22]]=111; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+77,jvj+78)*/
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]==649)) goto l55;
l56:pile[v[22]]=jvj+80; pile[WZ1]=jvj+77; 
(*f[68])( );     /*PLUE0(jvj+80,jvj+77)*/
l55:x[jvj+369]=t[x[jvj+369]];
l53:if((x[jvj+369]>0)) goto l54;
x[jvj+83]=0 ;z[jvj+83]=0;
l57:if((x[jvj+80]>0)) goto l58;
pile[v[22]]=jvj+252; pile[WZ1]=jvj+253; pile[WZ2]=jvj+254; 
(*f[760])( );     /*MEMEX0(jvj+252,jvj+253,jvj+254)*/
if((x[jvj+254]==135)) goto l156;
l155:x[jvj+411]=t[x[jvj+411]];
l153:if((x[jvj+411]>0)) goto l154;
x[jvj+410]=t[x[jvj+410]];
l152:if((x[jvj+410]<=0)) goto l157;
x[jvj+394]=s[x[jvj+410]] ;z[jvj+394]=(x[jvj+394]<=sepcte) ? x[jvj+394] : z[jvj+410];
x[jvj+252]=x[jvj+394] ;z[jvj+252]=z[jvj+394];
x[jvj+250]=x[jvj+252] ;z[jvj+250]=z[jvj+252];
pile[v[22]]=jvj+250; pile[WZ1]=jvj+251; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+250,jvj+251)*/
x[jvj+411]=x[jvj+249] ;z[jvj+411]=z[jvj+249];
goto l153;
l58:x[jvj+81]=s[x[jvj+80]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+80];
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+81,jvj+82)*/
pile[v[22]]=jvj+83; 
(*f[68])( );     /*PLUE0(jvj+83,jvj+82)*/
x[jvj+80]=t[x[jvj+80]];
goto l57;
l60:x[jvj+84]=s[x[jvj+370]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+370];
if((x[jvj+84]==x[jvj+159])) goto l61;
pile[v[22]]=111; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,jvj+84,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+85,jvj+86)*/
if((x[jvj+86]==649)) goto l61;
l62:pile[v[22]]=jvj+87; pile[WZ1]=jvj+84; 
(*f[68])( );     /*PLUE0(jvj+87,jvj+84)*/
l61:x[jvj+370]=t[x[jvj+370]];
l59:if((x[jvj+370]>0)) goto l60;
x[jvj+90]=0 ;z[jvj+90]=0;
l63:if((x[jvj+87]>0)) goto l64;
pile[v[22]]=102; pile[WZ1]=jvj+159; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(102,jvj+159,jvj+162)*/
pile[v[22]]=jvj+162; pile[WZ1]=jvj+163; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+162,jvj+163)*/
pile[v[22]]=103; pile[WZ1]=jvj+159; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(103,jvj+159,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=jvj+165; 
(*f[1352])( );     /*POSITIF0(jvj+164,jvj+165)*/
if((x[jvj+165]==135)) goto l109;
l108:x[jvj+383]=t[x[jvj+383]];
l107:if((x[jvj+383]<=0)) goto l135;
x[jvj+159]=s[x[jvj+383]] ;z[jvj+159]=(x[jvj+159]<=sepcte) ? x[jvj+159] : z[jvj+383];
pile[v[22]]=111; pile[WZ1]=jvj+159; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(111,jvj+159,jvj+160)*/
pile[v[22]]=101; pile[WZ1]=jvj+160; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(101,jvj+160,jvj+161)*/
if((x[jvj+161]!=990)) goto l108;
x[jvj+87]=0 ;z[jvj+87]=0;
x[jvj+370]=x[jvj+135] ;z[jvj+370]=z[jvj+135];
goto l59;
l64:x[jvj+88]=s[x[jvj+87]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+87];
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+88,jvj+89)*/
pile[v[22]]=jvj+90; 
(*f[68])( );     /*PLUE0(jvj+90,jvj+89)*/
x[jvj+87]=t[x[jvj+87]];
goto l63;
l66:x[jvj+91]=s[x[jvj+371]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+371];
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[1972])( );if(v[102]) goto l161;     /*INVEXP0(jvj+91,jvj+92)*/
pile[v[22]]=jvj+94; pile[WZ2]=jvj+93; pile[WZ3]=jvj+95; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+94,jvj+92,jvj+93,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=jvj+96; 
(*f[965])( );if(v[102]) goto l161;     /*NORM0(jvj+95,jvj+96)*/
x[jvj+97]=x[jvj+96] ;z[jvj+97]=z[jvj+96];
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l161;     /*FNDO0(101,jvj+97,jvj+98)*/
if((x[jvj+98]!=135)) goto l161;
x[jvj+371]=t[x[jvj+371]];
l65:if((x[jvj+371]>0)) goto l66;
x[MMMT]=16740 ;z[MMMT]=16740;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,135,MMMX)*/
goto l165;
l68:x[jvj+100]=s[x[jvj+372]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+372];
pile[v[22]]=jvj+100; pile[WZ1]=jvj+101; 
(*f[1972])( );if(v[102]) goto l163;     /*INVEXP0(jvj+100,jvj+101)*/
pile[v[22]]=jvj+102; pile[WZ2]=jvj+93; pile[WZ3]=jvj+103; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+102,jvj+101,jvj+93,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; 
(*f[965])( );if(v[102]) goto l163;     /*NORM0(jvj+103,jvj+104)*/
x[jvj+105]=x[jvj+104] ;z[jvj+105]=z[jvj+104];
pile[v[22]]=101; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l163;     /*FNDO0(101,jvj+105,jvj+106)*/
if((x[jvj+106]!=134)) goto l163;
x[jvj+372]=t[x[jvj+372]];
l67:if((x[jvj+372]>0)) goto l68;
x[MMMT]=16741 ;z[MMMT]=16741;
l166:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,134,MMMX)*/
goto l165;
l70:x[jvj+108]=s[x[jvj+373]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+373];
if((x[jvj+108]==x[jvj+379])) goto l71;
if((x[jvj+108]==x[jvj+380])) goto l71;
pile[v[22]]=111; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(111,jvj+108,jvj+109)*/
pile[v[22]]=101; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(101,jvj+109,jvj+110)*/
if((x[jvj+110]==649)) goto l71;
l72:pile[v[22]]=jvj+111; pile[WZ1]=jvj+108; 
(*f[68])( );     /*PLUE0(jvj+111,jvj+108)*/
l71:x[jvj+373]=t[x[jvj+373]];
l69:if((x[jvj+373]>0)) goto l70;
x[jvj+114]=0 ;z[jvj+114]=0;
l73:if((x[jvj+111]>0)) goto l74;
pile[v[22]]=jvj+146; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[760])( );     /*MEMEX0(jvj+146,jvj+147,jvj+148)*/
if((x[jvj+148]==135)) goto l100;
l99:x[jvj+400]=t[x[jvj+400]];
l97:if((x[jvj+400]>0)) goto l98;
x[jvj+399]=t[x[jvj+399]];
l94:if((x[jvj+399]>0)) goto l95;
x[jvj+381]=x[jvj+135] ;z[jvj+381]=z[jvj+135];
l101:if((x[jvj+381]>0)) goto l102;
x[jvj+383]=x[jvj+135] ;z[jvj+383]=z[jvj+135];
goto l107;
l74:x[jvj+112]=s[x[jvj+111]] ;z[jvj+112]=(x[jvj+112]<=sepcte) ? x[jvj+112] : z[jvj+111];
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+112,jvj+113)*/
pile[v[22]]=jvj+114; 
(*f[68])( );     /*PLUE0(jvj+114,jvj+113)*/
x[jvj+111]=t[x[jvj+111]];
goto l73;
l76:x[jvj+115]=s[x[jvj+374]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+374];
if((x[jvj+115]==x[jvj+386])) goto l77;
if((x[jvj+115]==x[jvj+387])) goto l77;
pile[v[22]]=111; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(111,jvj+115,jvj+116)*/
pile[v[22]]=101; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(101,jvj+116,jvj+117)*/
if((x[jvj+117]==649)) goto l77;
l78:pile[v[22]]=jvj+118; pile[WZ1]=jvj+115; 
(*f[68])( );     /*PLUE0(jvj+118,jvj+115)*/
l77:x[jvj+374]=t[x[jvj+374]];
l75:if((x[jvj+374]>0)) goto l76;
x[jvj+121]=0 ;z[jvj+121]=0;
l79:if((x[jvj+118]>0)) goto l80;
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=jvj+207; 
(*f[760])( );     /*MEMEX0(jvj+205,jvj+206,jvj+207)*/
if((x[jvj+207]==135)) goto l129;
l128:x[jvj+404]=t[x[jvj+404]];
l126:if((x[jvj+404]>0)) goto l127;
x[jvj+403]=t[x[jvj+403]];
l125:if((x[jvj+403]<=0)) goto l135;
x[jvj+386]=s[x[jvj+403]] ;z[jvj+386]=(x[jvj+386]<=sepcte) ? x[jvj+386] : z[jvj+403];
x[jvj+205]=x[jvj+386] ;z[jvj+205]=z[jvj+386];
x[jvj+203]=x[jvj+205] ;z[jvj+203]=z[jvj+205];
pile[v[22]]=jvj+203; pile[WZ1]=jvj+204; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+203,jvj+204)*/
x[jvj+404]=x[jvj+202] ;z[jvj+404]=z[jvj+202];
goto l126;
l80:x[jvj+119]=s[x[jvj+118]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+118];
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+119,jvj+120)*/
pile[v[22]]=jvj+121; 
(*f[68])( );     /*PLUE0(jvj+121,jvj+120)*/
x[jvj+118]=t[x[jvj+118]];
goto l79;
l81:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+124)*/
pile[v[22]]=130; pile[WZ1]=jvj+124; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+124,V498)*/
V498=pile[WZ2]; 
if((V498<=1)) goto l82;
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+124,jvj+125)*/
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(103,MMMI,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+126,jvj+127)*/
x[MMMT]=16561 ;z[MMMT]=16561;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+267; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+267)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+269; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+269)*/
pile[v[22]]=jvj+125; pile[WZ1]=160; pile[WZ2]=jvj+266; 
(*f[54])( );     /*TRI1(jvj+125,160,jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=jvj+267; pile[WZ2]=111; pile[WZ3]=jvj+268; 
(*f[58])( );     /*TRI3(jvj+266,jvj+267,111,jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=jvj+269; pile[WZ2]=103; pile[WZ3]=jvj+270; 
(*f[58])( );     /*TRI3(jvj+268,jvj+269,103,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+127; pile[WZ4]=jvj+270; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+127,jvj+270,MMMX)*/
goto l165;
l82:pile[v[22]]=100; pile[WZ1]=jvj+124; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(100,jvj+124,jvj+128)*/
if((x[jvj+128]!=484)) goto l135;
pile[v[22]]=jvj+124; pile[WZ1]=jvj+129; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+124,jvj+129)*/
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+130)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[1971])( );if(v[102]) goto l135;     /*NORMDIV0(jvj+124,jvj+130,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ2]=jvj+132; 
(*f[760])( );     /*MEMEX0(jvj+131,jvj+130,jvj+132)*/
if((x[jvj+132]==134)) goto l83;
l135:pile[v[22]]=100; pile[WZ1]=MMMI; pile[WZ2]=jvj+222; 
(*f[32])( );if(v[102]) goto l157;     /*FNDO0(100,MMMI,jvj+222)*/
if((x[jvj+222]!=22)) goto l157;
pile[v[22]]=102; pile[WZ2]=jvj+223; 
(*f[32])( );if(v[102]) goto l150;     /*FNDO0(102,MMMI,jvj+223)*/
pile[v[22]]=111; pile[WZ1]=jvj+223; pile[WZ2]=jvj+224; 
(*f[32])( );if(v[102]) goto l146;     /*FNDO0(111,jvj+223,jvj+224)*/
pile[v[22]]=101; pile[WZ1]=jvj+224; pile[WZ2]=jvj+225; 
(*f[32])( );if(v[102]) goto l146;     /*FNDO0(101,jvj+224,jvj+225)*/
if((x[jvj+225]==486)) goto l136;
if((x[jvj+225]!=485)) goto l146;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+231; 
(*f[33])( );     /*FNDE0(1564,145,jvj+231)*/
for(a=x[jvj+231];a>0;a=t[a]) if(s[a]==x[jvj+123]) goto l140;
l146:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+241; 
(*f[32])( );if(v[102]) goto l150;     /*FNDO0(103,MMMI,jvj+241)*/
pile[v[22]]=111; pile[WZ1]=jvj+241; pile[WZ2]=jvj+242; 
(*f[32])( );if(v[102]) goto l150;     /*FNDO0(111,jvj+241,jvj+242)*/
pile[v[22]]=101; pile[WZ1]=jvj+242; pile[WZ2]=jvj+243; 
(*f[32])( );if(v[102]) goto l150;     /*FNDO0(101,jvj+242,jvj+243)*/
if((x[jvj+243]!=485)) goto l150;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+244; 
(*f[33])( );     /*FNDE0(1564,145,jvj+244)*/
for(a=x[jvj+244];a>0;a=t[a]) if(s[a]==x[jvj+123]) goto l147;
l150:pile[v[22]]=1808; pile[WZ1]=1714; pile[WZ2]=jvj+248; 
(*f[33])( );     /*FNDE0(1808,1714,jvj+248)*/
for(a=x[jvj+248];a>0;a=t[a]) if(s[a]==x[jvj+123]) goto l151;
l157:x[jvj+93]=x[MMMI] ;z[jvj+93]=z[MMMI];
pile[v[22]]=111; pile[WZ1]=jvj+93; pile[WZ2]=jvj+255; 
(*f[32])( );if(v[102]) goto l164;     /*FNDO0(111,jvj+93,jvj+255)*/
pile[v[22]]=101; pile[WZ1]=jvj+255; pile[WZ2]=jvj+256; 
(*f[32])( );if(v[102]) goto l164;     /*FNDO0(101,jvj+255,jvj+256)*/
if((x[jvj+256]!=25)) goto l159;
pile[v[22]]=2; pile[WZ1]=jvj+93; 
(*f[1963])( );     /*COEFFDEG0(2,jvj+93,A)*/
A=pile[WZ2]; 
pile[v[22]]=1; 
(*f[1963])( );     /*COEFFDEG0(1,jvj+93,B)*/
B=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=B; 
(*f[1006])( );if(v[102]) goto l159;     /*POWER0(2,B,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=jvj+93; 
(*f[1963])( );     /*COEFFDEG0(0,jvj+93,C)*/
C=pile[WZ2]; 
V119=A*C;
V118=4*V119;
V117=(-V118);
V116=V112+V117;
pile[v[22]]=28; pile[WZ1]=2; pile[WZ2]=V116; 
(*f[1005])( );if(v[102]) goto l158;     /*RACN0(28,2,V116,V756)*/
V756=pile[WZ3]; 
pile[v[22]]=2; pile[WZ1]=V756; 
(*f[1006])( );if(v[102]) goto l158;     /*POWER0(2,V756,V757)*/
V757=pile[WZ2]; 
if((V757!=V116)) goto l158;
V113=V756;
if((V113>=0)) goto l159;
l158:pile[v[22]]=jvj+93; pile[WZ1]=jvj+257; 
(*f[1945])( );if(v[102]) goto l159;     /*DEGREE0(jvj+93,jvj+257)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l159;     /*FNDC0(130,jvj+257,V115)*/
V115=pile[WZ2]; 
if((V115!=2)) goto l159;
pile[v[22]]=jvj+93; pile[WZ1]=jvj+258; 
(*f[891])( );     /*VAREXP0(jvj+93,jvj+258)*/
for(i=x[jvj+258],V123=0;i>0;i=t[i],V123++)  ;
if((V123!=1)) goto l159;
if((x[jvj+258]<=0)) goto l159;
V106=s[x[jvj+258]];
x[MMMT]=16535 ;z[MMMT]=16535;
goto l166;
l83:pile[v[22]]=jvj+131; pile[WZ1]=jvj+133; 
(*f[965])( );if(v[102]) goto l135;     /*NORM0(jvj+131,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+134; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+133,jvj+134)*/
x[MMMT]=16903 ;z[MMMT]=16903;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+271)*/
pile[v[22]]=jvj+271; pile[WZ1]=111; pile[WZ2]=jvj+272; 
(*f[54])( );     /*TRI1(jvj+271,111,jvj+272)*/
pile[v[22]]=jvj+272; pile[WZ1]=jvj+134; pile[WZ2]=103; pile[WZ3]=jvj+273; 
(*f[58])( );     /*TRI3(jvj+272,jvj+134,103,jvj+273)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+273; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+129,jvj+273,MMMX)*/
goto l165;
l84:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+135; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+135)*/
for(i=x[jvj+135],V442=0;i>0;i=t[i],V442++)  ;
if((V442!=2)) goto l96;
x[jvj+397]=x[jvj+135] ;z[jvj+397]=z[jvj+135];
l85:if((x[jvj+397]>0)) goto l86;
x[jvj+398]=x[jvj+135] ;z[jvj+398]=z[jvj+135];
l90:if((x[jvj+398]<=0)) goto l96;
x[jvj+377]=s[x[jvj+398]] ;z[jvj+377]=(x[jvj+377]<=sepcte) ? x[jvj+377] : z[jvj+398];
x[jvj+55]=x[jvj+377] ;z[jvj+55]=z[jvj+377];
x[jvj+378]=x[jvj+135] ;z[jvj+378]=z[jvj+135];
l91:if((x[jvj+378]>0)) goto l92;
x[jvj+398]=t[x[jvj+398]];
goto l90;
l86:x[jvj+375]=s[x[jvj+397]] ;z[jvj+375]=(x[jvj+375]<=sepcte) ? x[jvj+375] : z[jvj+397];
x[jvj+136]=x[jvj+375] ;z[jvj+136]=z[jvj+375];
pile[v[22]]=130; pile[WZ1]=jvj+136; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(130,jvj+136,V439)*/
V439=pile[WZ2]; 
if((V439>=0)) goto l87;
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+136,jvj+137)*/
x[jvj+376]=x[jvj+135] ;z[jvj+376]=z[jvj+135];
l88:if((x[jvj+376]<=0)) goto l87;
x[jvj+138]=s[x[jvj+376]] ;z[jvj+138]=(x[jvj+138]<=sepcte) ? x[jvj+138] : z[jvj+376];
if((x[jvj+375]!=x[jvj+138])) goto l89;
x[jvj+376]=t[x[jvj+376]];
goto l88;
l87:x[jvj+397]=t[x[jvj+397]];
goto l85;
l89:pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+138,jvj+139)*/
x[MMMT]=16706 ;z[MMMT]=16706;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+274; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+274)*/
pile[WZ3]=486; pile[WZ4]=jvj+327; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+327)*/
pile[WZ3]=52; pile[WZ4]=jvj+329; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+329)*/
pile[v[22]]=jvj+329; pile[WZ1]=111; pile[WZ2]=jvj+330; 
(*f[54])( );     /*TRI1(jvj+329,111,jvj+330)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+330; pile[WZ5]=jvj+328; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+137,jvj+330,jvj+328)*/
pile[WZ2]=111; pile[WZ3]=jvj+327; pile[WZ4]=jvj+276; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+327,jvj+276)*/
pile[v[22]]=jvj+276; pile[WZ1]=107; pile[WZ2]=jvj+328; 
(*f[36])( );     /*PLUSC0(jvj+276,107,jvj+328)*/
pile[WZ2]=jvj+139; 
(*f[36])( );     /*PLUSC0(jvj+276,107,jvj+139)*/
pile[v[22]]=jvj+274; pile[WZ1]=111; pile[WZ2]=jvj+275; 
(*f[54])( );     /*TRI1(jvj+274,111,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+276; pile[WZ4]=jvj+275; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+276,jvj+275,MMMX)*/
goto l165;
l92:x[jvj+140]=s[x[jvj+378]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+378];
if((x[jvj+377]==x[jvj+140])) goto l93;
pile[v[22]]=111; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(111,jvj+140,jvj+141)*/
pile[v[22]]=101; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(101,jvj+141,jvj+142)*/
if((x[jvj+142]!=485)) goto l93;
pile[v[22]]=107; pile[WZ1]=jvj+140; pile[WZ2]=jvj+143; 
(*f[33])( );     /*FNDE0(107,jvj+140,jvj+143)*/
for(i=x[jvj+143],V327=0;i>0;i=t[i],V327++)  ;
x[jvj+59]=0 ;z[jvj+59]=0;
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+55,jvj+56)*/
x[jvj+368]=x[jvj+143] ;z[jvj+368]=z[jvj+143];
goto l41;
l93:x[jvj+378]=t[x[jvj+378]];
goto l91;
l95:x[jvj+379]=s[x[jvj+399]] ;z[jvj+379]=(x[jvj+379]<=sepcte) ? x[jvj+379] : z[jvj+399];
x[jvj+146]=x[jvj+379] ;z[jvj+146]=z[jvj+379];
x[jvj+144]=x[jvj+146] ;z[jvj+144]=z[jvj+146];
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+144,jvj+145)*/
x[jvj+400]=x[jvj+135] ;z[jvj+400]=z[jvj+135];
goto l97;
l96:x[jvj+399]=x[jvj+135] ;z[jvj+399]=z[jvj+135];
goto l94;
l98:x[jvj+380]=s[x[jvj+400]] ;z[jvj+380]=(x[jvj+380]<=sepcte) ? x[jvj+380] : z[jvj+400];
if((x[jvj+379]==x[jvj+380])) goto l99;
x[jvj+147]=x[jvj+380] ;z[jvj+147]=z[jvj+380];
x[jvj+111]=0 ;z[jvj+111]=0;
x[jvj+373]=x[jvj+135] ;z[jvj+373]=z[jvj+135];
goto l69;
l100:x[MMMT]=16632 ;z[MMMT]=16632;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+280; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+280)*/
pile[WZ3]=596; pile[WZ4]=jvj+331; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+331)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+333; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+333)*/
pile[v[22]]=jvj+331; pile[WZ1]=111; pile[WZ2]=jvj+332; 
(*f[54])( );     /*TRI1(jvj+331,111,jvj+332)*/
pile[v[22]]=jvj+332; pile[WZ1]=jvj+333; pile[WZ2]=103; pile[WZ3]=jvj+334; 
(*f[58])( );     /*TRI3(jvj+332,jvj+333,103,jvj+334)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+145; pile[WZ4]=jvj+334; pile[WZ5]=jvj+281; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+145,jvj+334,jvj+281)*/
pile[WZ2]=111; pile[WZ3]=jvj+280; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+280,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+281; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+281)*/
pile[v[22]]=jvj+114; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+114,MMMX,107)*/
goto l165;
l102:x[jvj+149]=s[x[jvj+381]] ;z[jvj+149]=(x[jvj+149]<=sepcte) ? x[jvj+149] : z[jvj+381];
pile[v[22]]=111; pile[WZ1]=jvj+149; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(111,jvj+149,jvj+150)*/
pile[v[22]]=101; pile[WZ1]=jvj+150; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(101,jvj+150,jvj+151)*/
if((x[jvj+151]!=596)) goto l103;
pile[v[22]]=102; pile[WZ1]=jvj+149; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(102,jvj+149,jvj+152)*/
pile[v[22]]=103; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(103,jvj+149,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+154; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+153,jvj+154)*/
x[jvj+155]=x[jvj+152] ;z[jvj+155]=z[jvj+152];
pile[v[22]]=jvj+155; pile[WZ1]=jvj+156; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+155,jvj+156)*/
x[jvj+401]=x[jvj+135] ;z[jvj+401]=z[jvj+135];
goto l104;
l103:x[jvj+381]=t[x[jvj+381]];
goto l101;
l106:x[MMMT]=16633 ;z[MMMT]=16633;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+282; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+282)*/
pile[WZ3]=596; pile[WZ4]=jvj+335; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+335)*/
pile[WZ3]=87; pile[WZ4]=jvj+339; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+339)*/
pile[v[22]]=jvj+339; pile[WZ1]=111; pile[WZ2]=jvj+340; 
(*f[54])( );     /*TRI1(jvj+339,111,jvj+340)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+340; pile[WZ5]=jvj+337; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+154,jvj+340,jvj+337)*/
pile[v[22]]=jvj+335; pile[WZ1]=111; pile[WZ2]=jvj+336; 
(*f[54])( );     /*TRI1(jvj+335,111,jvj+336)*/
pile[v[22]]=jvj+336; pile[WZ1]=jvj+337; pile[WZ2]=103; pile[WZ3]=jvj+338; 
(*f[58])( );     /*TRI3(jvj+336,jvj+337,103,jvj+338)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+156; pile[WZ4]=jvj+338; pile[WZ5]=jvj+283; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+156,jvj+338,jvj+283)*/
pile[WZ2]=111; pile[WZ3]=jvj+282; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+282,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+283; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+283)*/
pile[v[22]]=jvj+28; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+28,MMMX,107)*/
goto l165;
l109:pile[v[22]]=jvj+164; pile[WZ1]=jvj+166; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+164,jvj+166)*/
x[MMMT]=16736 ;z[MMMT]=16736;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=990; pile[WZ4]=jvj+284; 
(*f[181])( );     /*QUADRI2(100,20,101,990,jvj+284)*/
pile[WZ3]=486; pile[WZ4]=jvj+341; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+341)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+341; pile[WZ4]=jvj+287; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+341,jvj+287)*/
pile[v[22]]=jvj+287; pile[WZ1]=107; pile[WZ2]=jvj+163; 
(*f[36])( );     /*PLUSC0(jvj+287,107,jvj+163)*/
pile[v[22]]=jvj+90; pile[WZ1]=jvj+287; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+90,jvj+287,107)*/
pile[v[22]]=jvj+284; pile[WZ1]=111; pile[WZ2]=jvj+285; 
(*f[54])( );     /*TRI1(jvj+284,111,jvj+285)*/
pile[v[22]]=jvj+285; pile[WZ1]=jvj+166; pile[WZ2]=103; pile[WZ3]=jvj+286; 
(*f[58])( );     /*TRI3(jvj+285,jvj+166,103,jvj+286)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+287; pile[WZ4]=jvj+286; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+287,jvj+286,MMMX)*/
goto l165;
l110:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+167)*/
pile[v[22]]=103; pile[WZ2]=jvj+168; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+168)*/
pile[v[22]]=160; pile[WZ2]=jvj+169; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(160,MMMI,jvj+169)*/
pile[v[22]]=130; pile[WZ1]=jvj+169; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+169,V165)*/
V165=pile[WZ2]; 
pile[WZ1]=jvj+168; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+168,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V165; pile[WZ1]=V166; pile[WZ2]=jvj+167; pile[WZ3]=jvj+170; 
(*f[1970])( );if(v[102]) goto l135;     /*ISPRIME0(V165,V166,jvj+167,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=jvj+171; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+170,jvj+171)*/
x[MMMT]=16835 ;z[MMMT]=16835;
x[MMMX]=x[jvj+171] ;z[MMMX]=z[jvj+171];
goto l165;
l111:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+172; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+172)*/
pile[v[22]]=111; pile[WZ1]=jvj+172; pile[WZ2]=jvj+173; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+172,jvj+173)*/
pile[v[22]]=101; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+173,jvj+174)*/
if((x[jvj+174]!=486)) goto l135;
pile[v[22]]=107; pile[WZ1]=jvj+172; pile[WZ2]=jvj+175; 
(*f[33])( );     /*FNDE0(107,jvj+172,jvj+175)*/
for(i=x[jvj+175],V143=0;i>0;i=t[i],V143++)  ;
if((V143!=2)) goto l135;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+176; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+176)*/
pile[v[22]]=130; pile[WZ1]=jvj+176; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+176,V134)*/
V134=pile[WZ2]; 
if((V134<0)) goto l135;
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+176,jvj+177)*/
x[jvj+402]=x[jvj+175] ;z[jvj+402]=z[jvj+175];
l112:if((x[jvj+402]<=0)) goto l135;
x[jvj+384]=s[x[jvj+402]] ;z[jvj+384]=(x[jvj+384]<=sepcte) ? x[jvj+384] : z[jvj+402];
x[jvj+178]=x[jvj+384] ;z[jvj+178]=z[jvj+384];
pile[v[22]]=130; pile[WZ1]=jvj+178; 
(*f[26])( );if(v[102]) goto l113;     /*FNDC0(130,jvj+178,V133)*/
V133=pile[WZ2]; 
if((V133<=0)) goto l113;
V135=V134%V133;
if((V135==0)) goto l113;
pile[v[22]]=jvj+178; pile[WZ1]=jvj+179; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+178,jvj+179)*/
x[jvj+385]=x[jvj+175] ;z[jvj+385]=z[jvj+175];
l114:if((x[jvj+385]<=0)) goto l113;
x[jvj+180]=s[x[jvj+385]] ;z[jvj+180]=(x[jvj+180]<=sepcte) ? x[jvj+180] : z[jvj+385];
if((x[jvj+384]!=x[jvj+180])) goto l115;
x[jvj+385]=t[x[jvj+385]];
goto l114;
l113:x[jvj+402]=t[x[jvj+402]];
goto l112;
l115:pile[v[22]]=jvj+180; pile[WZ1]=jvj+181; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+180,jvj+181)*/
x[MMMT]=16731 ;z[MMMT]=16731;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+288; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+288)*/
pile[WZ3]=63; pile[WZ4]=jvj+342; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+342)*/
pile[v[22]]=jvj+342; pile[WZ1]=111; pile[WZ2]=jvj+343; 
(*f[54])( );     /*TRI1(jvj+342,111,jvj+343)*/
pile[v[22]]=jvj+343; pile[WZ1]=jvj+179; pile[WZ2]=103; pile[WZ3]=jvj+344; 
(*f[58])( );     /*TRI3(jvj+343,jvj+179,103,jvj+344)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+177; pile[WZ4]=jvj+344; pile[WZ5]=jvj+291; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+177,jvj+344,jvj+291)*/
pile[v[22]]=jvj+288; pile[WZ1]=111; pile[WZ2]=jvj+289; 
(*f[54])( );     /*TRI1(jvj+288,111,jvj+289)*/
pile[v[22]]=jvj+289; pile[WZ1]=jvj+181; pile[WZ2]=103; pile[WZ3]=jvj+290; 
(*f[58])( );     /*TRI3(jvj+289,jvj+181,103,jvj+290)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+291; pile[WZ4]=jvj+290; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+291,jvj+290,MMMX)*/
goto l165;
l117:x[jvj+183]=s[x[jvj+182]] ;z[jvj+183]=(x[jvj+183]<=sepcte) ? x[jvj+183] : z[jvj+182];
pile[v[22]]=jvj+183; pile[WZ1]=MMMI; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(jvj+183,MMMI,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+184; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(100,jvj+29,jvj+184)*/
if((x[jvj+184]!=484)) goto l119;
pile[v[22]]=268; pile[WZ1]=jvj+183; pile[WZ2]=jvj+185; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(268,jvj+183,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=MMMI; pile[WZ2]=jvj+186; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(jvj+185,MMMI,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=jvj+186; pile[WZ2]=jvj+187; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(100,jvj+186,jvj+187)*/
if((x[jvj+187]!=1894)) goto l119;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+188; 
(*f[200])( );if(v[102]) goto l119;     /*NDD0(jvj+29,jvj+188)*/
pile[v[22]]=202; pile[WZ2]=jvj+189; 
(*f[1948])( );if(v[102]) goto l119;     /*FNDOND0(202,jvj+188,jvj+189)*/
if((x[jvj+189]!=68)) goto l119;
J=x[jvj+186];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[200])( );if(v[102]) goto l120;     /*NDD0(jvj+29,jvj+30)*/
pile[v[22]]=365; pile[WZ2]=jvj+31; 
(*f[1969])( );     /*FNDEND0(365,jvj+30,jvj+31)*/
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==J) goto l119;
l120:x[MMMT]=16680 ;z[MMMT]=16680;
goto l166;
l118:x[jvj+182]=d[20];z[jvj+182]=0;
l116:if((x[jvj+182]>0)) goto l117;
x[jvj+190]=d[20];z[jvj+190]=0;
l121:if((x[jvj+190]<=0)) goto l135;
x[jvj+191]=s[x[jvj+190]] ;z[jvj+191]=(x[jvj+191]<=sepcte) ? x[jvj+191] : z[jvj+190];
pile[v[22]]=jvj+191; pile[WZ1]=MMMI; pile[WZ2]=jvj+192; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(jvj+191,MMMI,jvj+192)*/
pile[v[22]]=111; pile[WZ1]=jvj+192; pile[WZ2]=jvj+193; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(111,jvj+192,jvj+193)*/
pile[v[22]]=101; pile[WZ1]=jvj+193; pile[WZ2]=jvj+194; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(101,jvj+193,jvj+194)*/
if((x[jvj+194]!=1273)) goto l122;
pile[v[22]]=268; pile[WZ1]=jvj+191; pile[WZ2]=jvj+195; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(268,jvj+191,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=MMMI; pile[WZ2]=jvj+196; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(jvj+195,MMMI,jvj+196)*/
pile[v[22]]=130; pile[WZ1]=jvj+196; 
(*f[26])( );if(v[102]) goto l122;     /*FNDC0(130,jvj+196,V236)*/
V236=pile[WZ2]; 
if((V236!=0)) goto l122;
pile[v[22]]=107; pile[WZ1]=jvj+192; pile[WZ2]=jvj+197; 
(*f[33])( );     /*FNDE0(107,jvj+192,jvj+197)*/
for(i=x[jvj+197],V228=0;i>0;i=t[i],V228++)  ;
pile[v[22]]=102; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(102,jvj+192,jvj+32)*/
x[jvj+36]=0 ;z[jvj+36]=0;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+32,jvj+33)*/
x[jvj+366]=x[jvj+197] ;z[jvj+366]=z[jvj+197];
goto l25;
l119:x[jvj+182]=t[x[jvj+182]];
goto l116;
l122:x[jvj+190]=t[x[jvj+190]];
goto l121;
l123:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+198; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+198)*/
pile[v[22]]=111; pile[WZ1]=jvj+198; pile[WZ2]=jvj+199; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+198,jvj+199)*/
pile[v[22]]=101; pile[WZ1]=jvj+199; pile[WZ2]=jvj+200; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+199,jvj+200)*/
if((x[jvj+200]!=486)) goto l135;
pile[v[22]]=107; pile[WZ1]=jvj+198; pile[WZ2]=jvj+201; 
(*f[33])( );     /*FNDE0(107,jvj+198,jvj+201)*/
for(i=x[jvj+201],V355=0;i>0;i=t[i],V355++)  ;
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+64)*/
x[jvj+68]=0 ;z[jvj+68]=0;
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+64,jvj+65)*/
goto l45;
l124:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+202; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+202)*/
x[jvj+403]=x[jvj+202] ;z[jvj+403]=z[jvj+202];
goto l125;
l127:x[jvj+387]=s[x[jvj+404]] ;z[jvj+387]=(x[jvj+387]<=sepcte) ? x[jvj+387] : z[jvj+404];
if((x[jvj+386]==x[jvj+387])) goto l128;
x[jvj+206]=x[jvj+387] ;z[jvj+206]=z[jvj+387];
x[jvj+118]=0 ;z[jvj+118]=0;
x[jvj+374]=x[jvj+202] ;z[jvj+374]=z[jvj+202];
goto l75;
l129:x[MMMT]=16725 ;z[MMMT]=16725;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+298; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+298)*/
pile[WZ3]=486; pile[WZ4]=jvj+345; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+345)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+346; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+346)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+345; pile[WZ4]=jvj+299; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+345,jvj+299)*/
pile[v[22]]=jvj+299; pile[WZ1]=107; pile[WZ2]=jvj+346; 
(*f[36])( );     /*PLUSC0(jvj+299,107,jvj+346)*/
pile[WZ2]=jvj+204; 
(*f[36])( );     /*PLUSC0(jvj+299,107,jvj+204)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+298; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+298,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+299; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+299)*/
pile[v[22]]=jvj+121; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+121,MMMX,107)*/
goto l165;
l130:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+208; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+208)*/
pile[v[22]]=100; pile[WZ1]=jvj+208; pile[WZ2]=jvj+209; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(100,jvj+208,jvj+209)*/
if((x[jvj+209]!=41)) goto l135;
pile[v[22]]=jvj+208; pile[WZ1]=jvj+210; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+208,jvj+210)*/
pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+211; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+211)*/
x[jvj+405]=x[jvj+211] ;z[jvj+405]=z[jvj+211];
goto l131;
l132:x[MMMT]=16821 ;z[MMMT]=16821;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+300; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+300)*/
pile[WZ3]=1273; pile[WZ4]=jvj+347; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+347)*/
pile[v[22]]=jvj+347; pile[WZ1]=111; pile[WZ2]=jvj+348; 
(*f[54])( );     /*TRI1(jvj+347,111,jvj+348)*/
pile[v[22]]=jvj+348; pile[WZ1]=jvj+47; pile[WZ2]=107; pile[WZ3]=jvj+349; 
(*f[301])( );     /*TRI11(jvj+348,jvj+47,107,jvj+349)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+210; pile[WZ4]=jvj+349; pile[WZ5]=jvj+301; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+210,jvj+349,jvj+301)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+302; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+302)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+300; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+300,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+301; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+301)*/
pile[WZ2]=jvj+302; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+302)*/
goto l165;
l134:x[jvj+406]=t[x[jvj+406]];
goto l133;
l136:pile[v[22]]=1898; pile[WZ1]=145; pile[WZ2]=jvj+226; 
(*f[33])( );     /*FNDE0(1898,145,jvj+226)*/
for(a=x[jvj+226];a>0;a=t[a]) if(s[a]==x[jvj+123]) goto l137;
goto l146;
l137:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+227; 
(*f[32])( );if(v[102]) goto l146;     /*FNDO0(103,MMMI,jvj+227)*/
pile[v[22]]=130; pile[WZ1]=jvj+227; 
(*f[26])( );if(v[102]) goto l146;     /*FNDC0(130,jvj+227,V375)*/
V375=pile[WZ2]; 
pile[v[22]]=1142; pile[WZ1]=jvj+123; pile[WZ2]=jvj+228; 
(*f[32])( );if(v[102]) goto l146;     /*FNDO0(1142,jvj+123,jvj+228)*/
pile[v[22]]=107; pile[WZ1]=jvj+223; pile[WZ2]=jvj+229; 
(*f[33])( );     /*FNDE0(107,jvj+223,jvj+229)*/
x[jvj+407]=x[jvj+229] ;z[jvj+407]=z[jvj+229];
l138:if((x[jvj+407]<=0)) goto l146;
x[jvj+390]=s[x[jvj+407]] ;z[jvj+390]=(x[jvj+390]<=sepcte) ? x[jvj+390] : z[jvj+407];
x[jvj+230]=x[jvj+390] ;z[jvj+230]=z[jvj+390];
pile[v[22]]=130; pile[WZ1]=jvj+230; 
(*f[26])( );if(v[102]) goto l139;     /*FNDC0(130,jvj+230,V376)*/
V376=pile[WZ2]; 
V374=V375%V376;
if((V374==0)) goto l139;
x[jvj+76]=0 ;z[jvj+76]=0;
goto l49;
l139:x[jvj+407]=t[x[jvj+407]];
goto l138;
l140:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+232; 
(*f[32])( );if(v[102]) goto l146;     /*FNDO0(103,MMMI,jvj+232)*/
pile[v[22]]=107; pile[WZ1]=jvj+223; pile[WZ2]=jvj+233; 
(*f[33])( );     /*FNDE0(107,jvj+223,jvj+233)*/
x[jvj+408]=x[jvj+233] ;z[jvj+408]=z[jvj+233];
goto l141;
l142:x[jvj+391]=s[x[jvj+408]] ;z[jvj+391]=(x[jvj+391]<=sepcte) ? x[jvj+391] : z[jvj+408];
x[jvj+234]=x[jvj+391] ;z[jvj+234]=z[jvj+391];
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+364]=x[jvj+233] ;z[jvj+364]=z[jvj+233];
goto l13;
l143:x[MMMT]=16753 ;z[MMMT]=16753;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+123; pile[WZ4]=jvj+305; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+123,jvj+305)*/
pile[WZ3]=485; pile[WZ4]=jvj+353; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+353)*/
pile[v[22]]=jvj+353; pile[WZ1]=111; pile[WZ2]=jvj+354; 
(*f[54])( );     /*TRI1(jvj+353,111,jvj+354)*/
pile[v[22]]=jvj+354; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+355; 
(*f[301])( );     /*TRI11(jvj+354,jvj+21,107,jvj+355)*/
pile[v[22]]=jvj+355; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+309; 
(*f[58])( );     /*TRI3(jvj+355,22,100,jvj+309)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+307; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+307)*/
pile[v[22]]=jvj+305; pile[WZ1]=111; pile[WZ2]=jvj+306; 
(*f[54])( );     /*TRI1(jvj+305,111,jvj+306)*/
pile[v[22]]=jvj+306; pile[WZ1]=jvj+307; pile[WZ2]=103; pile[WZ3]=jvj+308; 
(*f[58])( );     /*TRI3(jvj+306,jvj+307,103,jvj+308)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+309; pile[WZ4]=jvj+308; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+309,jvj+308,MMMX)*/
goto l165;
l145:x[jvj+392]=t[x[jvj+392]];
goto l144;
l147:pile[v[22]]=107; pile[WZ1]=jvj+241; pile[WZ2]=jvj+245; 
(*f[33])( );     /*FNDE0(107,jvj+241,jvj+245)*/
x[jvj+409]=x[jvj+245] ;z[jvj+409]=z[jvj+245];
goto l148;
l149:x[MMMT]=16752 ;z[MMMT]=16752;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+123; pile[WZ4]=jvj+314; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+123,jvj+314)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+318; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+318)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+359; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+359)*/
pile[v[22]]=jvj+359; pile[WZ1]=111; pile[WZ2]=jvj+360; 
(*f[54])( );     /*TRI1(jvj+359,111,jvj+360)*/
pile[v[22]]=jvj+360; pile[WZ1]=jvj+14; pile[WZ2]=107; pile[WZ3]=jvj+361; 
(*f[301])( );     /*TRI11(jvj+360,jvj+14,107,jvj+361)*/
pile[v[22]]=jvj+361; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+316; 
(*f[58])( );     /*TRI3(jvj+361,22,100,jvj+316)*/
pile[v[22]]=jvj+314; pile[WZ1]=111; pile[WZ2]=jvj+315; 
(*f[54])( );     /*TRI1(jvj+314,111,jvj+315)*/
pile[v[22]]=jvj+315; pile[WZ1]=jvj+316; pile[WZ2]=103; pile[WZ3]=jvj+317; 
(*f[58])( );     /*TRI3(jvj+315,jvj+316,103,jvj+317)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+318; pile[WZ4]=jvj+317; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+318,jvj+317,MMMX)*/
goto l165;
l151:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+249; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+249)*/
x[jvj+410]=x[jvj+249] ;z[jvj+410]=z[jvj+249];
goto l152;
l154:x[jvj+395]=s[x[jvj+411]] ;z[jvj+395]=(x[jvj+395]<=sepcte) ? x[jvj+395] : z[jvj+411];
if((x[jvj+394]==x[jvj+395])) goto l155;
x[jvj+253]=x[jvj+395] ;z[jvj+253]=z[jvj+395];
x[jvj+80]=0 ;z[jvj+80]=0;
x[jvj+369]=x[jvj+249] ;z[jvj+369]=z[jvj+249];
goto l53;
l156:x[MMMT]=16682 ;z[MMMT]=16682;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+123; pile[WZ4]=jvj+319; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+123,jvj+319)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+319; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+319,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+251; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+251)*/
pile[v[22]]=jvj+83; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+83,MMMX,107)*/
goto l165;
l159:pile[v[22]]=11; pile[WZ1]=jvj+256; pile[WZ2]=jvj+259; 
(*f[32])( );if(v[102]) goto l164;     /*FNDO0(11,jvj+256,jvj+259)*/
if((x[jvj+259]!=135)) goto l164;
pile[v[22]]=100; pile[WZ1]=jvj+93; pile[WZ2]=jvj+260; 
(*f[32])( );if(v[102]) goto l164;     /*FNDO0(100,jvj+93,jvj+260)*/
if((x[jvj+260]!=22)) goto l164;
pile[v[22]]=jvj+93; pile[WZ1]=jvj+261; 
(*f[1361])( );     /*VAROBJ0(jvj+93,jvj+261)*/
for(i=x[jvj+261],V518=0;i>0;i=t[i],V518++)  ;
if((V518!=1)) goto l164;
x[jvj+396]=x[jvj+261] ;z[jvj+396]=z[jvj+261];
l160:if((x[jvj+396]<=0)) goto l162;
x[jvj+94]=s[x[jvj+396]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+396];
pile[v[22]]=jvj+94; pile[WZ1]=jvj+262; 
(*f[200])( );if(v[102]) goto l161;     /*NDD0(jvj+94,jvj+262)*/
pile[v[22]]=202; pile[WZ2]=jvj+263; 
(*f[1948])( );if(v[102]) goto l161;     /*FNDOND0(202,jvj+262,jvj+263)*/
if((x[jvj+263]!=68)) goto l161;
pile[v[22]]=365; pile[WZ1]=jvj+94; pile[WZ2]=jvj+99; 
(*f[1969])( );     /*FNDEND0(365,jvj+94,jvj+99)*/
x[jvj+371]=x[jvj+99] ;z[jvj+371]=z[jvj+99];
goto l65;
l161:x[jvj+396]=t[x[jvj+396]];
goto l160;
l163:x[jvj+261]=t[x[jvj+261]];
l162:if((x[jvj+261]<=0)) goto l164;
x[jvj+102]=s[x[jvj+261]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+261];
pile[v[22]]=jvj+102; pile[WZ1]=jvj+264; 
(*f[200])( );if(v[102]) goto l163;     /*NDD0(jvj+102,jvj+264)*/
pile[v[22]]=202; pile[WZ2]=jvj+265; 
(*f[1948])( );if(v[102]) goto l163;     /*FNDOND0(202,jvj+264,jvj+265)*/
if((x[jvj+265]!=68)) goto l163;
pile[v[22]]=365; pile[WZ1]=jvj+102; pile[WZ2]=jvj+107; 
(*f[1969])( );     /*FNDEND0(365,jvj+102,jvj+107)*/
x[jvj+372]=x[jvj+107] ;z[jvj+372]=z[jvj+107];
goto l67;
l164:x[MMMT]=x[MMMX]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
