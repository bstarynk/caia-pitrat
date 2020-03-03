#include "dx.h"
void Z15Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V275=0,V277=0,V474=0,V476=0,A=0,B=0,V91=0,C=0,V100=0,V99=0,V98=0,V97=0,V96=0,V104=0,V318=0,V320=0,V300=0,V302=0,V287=0,V317=0,V319=0,V354=0,V144=0,V226=0,V40=0,V54=0,V415=0,V92=0,V744=0,V745=0;
int MMMI;
int MMMT,MMMX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=424;
if(v[0]>99700) (*f[6])( );

MMMI=pile[v[22]]; MMMT=pile[v[22]+1]; MMMX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+108]=x[MMMI] ;z[jvj+108]=z[MMMI];
pile[v[22]]=111; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l95;     /*FNDO0(111,jvj+108,jvj+109)*/
pile[v[22]]=101; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l95;     /*FNDO0(101,jvj+109,jvj+110)*/
if((x[jvj+110]!=25)) goto l95;
pile[v[22]]=2; pile[WZ1]=jvj+108; 
(*f[1963])( );     /*COEFFDEG0(2,jvj+108,A)*/
A=pile[WZ2]; 
pile[v[22]]=1; 
(*f[1963])( );     /*COEFFDEG0(1,jvj+108,B)*/
B=pile[WZ2]; 
pile[v[22]]=2; pile[WZ1]=B; 
(*f[1006])( );if(v[102]) goto l95;     /*POWER0(2,B,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=jvj+108; 
(*f[1963])( );     /*COEFFDEG0(0,jvj+108,C)*/
C=pile[WZ2]; 
V100=A*C;
V99=4*V100;
V98=(-V99);
V97=V91+V98;
pile[v[22]]=28; pile[WZ1]=2; pile[WZ2]=V97; 
(*f[1005])( );if(v[102]) goto l95;     /*RACN0(28,2,V97,V744)*/
V744=pile[WZ3]; 
pile[v[22]]=2; pile[WZ1]=V744; 
(*f[1006])( );if(v[102]) goto l95;     /*POWER0(2,V744,V745)*/
V745=pile[WZ2]; 
if((V745!=V97)) goto l95;
V92=V744;
pile[v[22]]=jvj+108; pile[WZ1]=jvj+111; 
(*f[1945])( );if(v[102]) goto l95;     /*DEGREE0(jvj+108,jvj+111)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(130,jvj+111,V96)*/
V96=pile[WZ2]; 
if((V96!=2)) goto l95;
pile[v[22]]=jvj+108; pile[WZ1]=jvj+112; 
(*f[891])( );     /*VAREXP0(jvj+108,jvj+112)*/
for(i=x[jvj+112],V104=0;i>0;i=t[i],V104++)  ;
if((V104!=1)) goto l95;
if((x[jvj+112]<=0)) goto l95;
x[jvj+113]=s[x[jvj+112]] ;z[jvj+113]=(x[jvj+113]<=sepcte) ? x[jvj+113] : z[jvj+112];
pile[v[22]]=jvj+113; pile[WZ1]=jvj+114; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+113,jvj+114)*/
x[MMMT]=16685 ;z[MMMT]=16685;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+227)*/
pile[WZ3]=25; pile[WZ4]=jvj+281; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+281)*/
pile[WZ3]=486; pile[WZ4]=jvj+286; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+286)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+287; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+287)*/
pile[WZ3]=A; pile[WZ4]=jvj+288; 
(*f[192])( );     /*QUADRI4(100,41,130,A,jvj+288)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+286; pile[WZ4]=jvj+285; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+286,jvj+285)*/
pile[v[22]]=jvj+285; pile[WZ1]=107; pile[WZ2]=jvj+287; 
(*f[36])( );     /*PLUSC0(jvj+285,107,jvj+287)*/
pile[WZ2]=jvj+288; 
(*f[36])( );     /*PLUSC0(jvj+285,107,jvj+288)*/
pile[WZ2]=jvj+114; 
(*f[36])( );     /*PLUSC0(jvj+285,107,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+289; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+289)*/
pile[WZ3]=52; pile[WZ4]=jvj+292; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+292)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+294; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+294)*/
pile[v[22]]=jvj+292; pile[WZ1]=111; pile[WZ2]=jvj+293; 
(*f[54])( );     /*TRI1(jvj+292,111,jvj+293)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+294; pile[WZ4]=jvj+293; pile[WZ5]=jvj+290; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+294,jvj+293,jvj+290)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V92; pile[WZ4]=jvj+291; 
(*f[192])( );     /*QUADRI4(100,41,130,V92,jvj+291)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+289; pile[WZ4]=jvj+283; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+289,jvj+283)*/
pile[v[22]]=jvj+283; pile[WZ1]=107; pile[WZ2]=jvj+290; 
(*f[36])( );     /*PLUSC0(jvj+283,107,jvj+290)*/
pile[WZ2]=jvj+291; 
(*f[36])( );     /*PLUSC0(jvj+283,107,jvj+291)*/
pile[v[22]]=jvj+281; pile[WZ1]=111; pile[WZ2]=jvj+282; 
(*f[54])( );     /*TRI1(jvj+281,111,jvj+282)*/
pile[v[22]]=jvj+282; pile[WZ1]=jvj+283; pile[WZ2]=103; pile[WZ3]=jvj+284; 
(*f[58])( );     /*TRI3(jvj+282,jvj+283,103,jvj+284)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+285; pile[WZ4]=jvj+284; pile[WZ5]=jvj+228; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+285,jvj+284,jvj+228)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+295; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+295)*/
pile[WZ3]=486; pile[WZ4]=jvj+300; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+300)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+301; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+301)*/
pile[WZ3]=A; pile[WZ4]=jvj+302; 
(*f[192])( );     /*QUADRI4(100,41,130,A,jvj+302)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+300; pile[WZ4]=jvj+299; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+300,jvj+299)*/
pile[v[22]]=jvj+299; pile[WZ1]=107; pile[WZ2]=jvj+301; 
(*f[36])( );     /*PLUSC0(jvj+299,107,jvj+301)*/
pile[WZ2]=jvj+302; 
(*f[36])( );     /*PLUSC0(jvj+299,107,jvj+302)*/
pile[WZ2]=jvj+114; 
(*f[36])( );     /*PLUSC0(jvj+299,107,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+303; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+303)*/
pile[WZ3]=485; pile[WZ4]=jvj+306; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+306)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+307; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+307)*/
pile[WZ3]=V92; pile[WZ4]=jvj+308; 
(*f[192])( );     /*QUADRI4(100,41,130,V92,jvj+308)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+306; pile[WZ4]=jvj+305; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+306,jvj+305)*/
pile[v[22]]=jvj+305; pile[WZ1]=107; pile[WZ2]=jvj+307; 
(*f[36])( );     /*PLUSC0(jvj+305,107,jvj+307)*/
pile[WZ2]=jvj+308; 
(*f[36])( );     /*PLUSC0(jvj+305,107,jvj+308)*/
pile[v[22]]=jvj+303; pile[WZ1]=111; pile[WZ2]=jvj+304; 
(*f[54])( );     /*TRI1(jvj+303,111,jvj+304)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+305; pile[WZ4]=jvj+304; pile[WZ5]=jvj+297; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+305,jvj+304,jvj+297)*/
pile[v[22]]=jvj+295; pile[WZ1]=111; pile[WZ2]=jvj+296; 
(*f[54])( );     /*TRI1(jvj+295,111,jvj+296)*/
pile[v[22]]=jvj+296; pile[WZ1]=jvj+297; pile[WZ2]=103; pile[WZ3]=jvj+298; 
(*f[58])( );     /*TRI3(jvj+296,jvj+297,103,jvj+298)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+299; pile[WZ4]=jvj+298; pile[WZ5]=jvj+229; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+299,jvj+298,jvj+229)*/
pile[WZ2]=111; pile[WZ3]=jvj+227; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+227,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+228; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+228)*/
pile[WZ2]=jvj+229; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+229)*/
l150:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+382]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+382];
if((x[jvj+1]==x[jvj+165])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==649)) goto l3;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
l3:x[jvj+382]=t[x[jvj+382]];
l1:if((x[jvj+382]>0)) goto l2;
x[jvj+11]=0 ;z[jvj+11]=0;
l9:if((x[jvj+4]>0)) goto l10;
x[jvj+408]=x[jvj+140] ;z[jvj+408]=z[jvj+140];
l124:if((x[jvj+408]<=0)) goto l123;
x[jvj+169]=s[x[jvj+408]] ;z[jvj+169]=(x[jvj+169]<=sepcte) ? x[jvj+169] : z[jvj+408];
pile[v[22]]=111; pile[WZ1]=jvj+169; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(111,jvj+169,jvj+170)*/
pile[v[22]]=101; pile[WZ1]=jvj+170; pile[WZ2]=jvj+171; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(101,jvj+170,jvj+171)*/
if((x[jvj+171]!=486)) goto l125;
pile[v[22]]=107; pile[WZ1]=jvj+169; pile[WZ2]=jvj+172; 
(*f[33])( );     /*FNDE0(107,jvj+169,jvj+172)*/
for(i=x[jvj+172],V54=0;i>0;i=t[i],V54++)  ;
if((V54!=2)) goto l125;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+383]=x[jvj+140] ;z[jvj+383]=z[jvj+140];
l5:if((x[jvj+383]>0)) goto l6;
x[jvj+14]=0 ;z[jvj+14]=0;
l11:if((x[jvj+8]>0)) goto l12;
x[jvj+422]=x[jvj+168] ;z[jvj+422]=z[jvj+168];
l126:if((x[jvj+422]<=0)) goto l125;
x[jvj+409]=s[x[jvj+422]] ;z[jvj+409]=(x[jvj+409]<=sepcte) ? x[jvj+409] : z[jvj+422];
x[jvj+173]=x[jvj+409] ;z[jvj+173]=z[jvj+409];
pile[v[22]]=100; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l127;     /*FNDO0(100,jvj+173,jvj+174)*/
if((x[jvj+174]!=41)) goto l127;
pile[v[22]]=jvj+173; pile[WZ1]=jvj+175; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+173,jvj+175)*/
x[jvj+410]=x[jvj+168] ;z[jvj+410]=z[jvj+168];
l128:if((x[jvj+410]<=0)) goto l127;
x[jvj+181]=s[x[jvj+410]] ;z[jvj+181]=(x[jvj+181]<=sepcte) ? x[jvj+181] : z[jvj+410];
if((x[jvj+409]==x[jvj+181])) goto l129;
x[jvj+176]=x[jvj+181] ;z[jvj+176]=z[jvj+181];
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+176,jvj+177)*/
x[jvj+423]=x[jvj+172] ;z[jvj+423]=z[jvj+172];
l130:if((x[jvj+423]<=0)) goto l129;
x[jvj+411]=s[x[jvj+423]] ;z[jvj+411]=(x[jvj+411]<=sepcte) ? x[jvj+411] : z[jvj+423];
x[jvj+178]=x[jvj+411] ;z[jvj+178]=z[jvj+411];
pile[v[22]]=100; pile[WZ1]=jvj+178; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l131;     /*FNDO0(100,jvj+178,jvj+179)*/
if((x[jvj+179]!=41)) goto l131;
pile[v[22]]=jvj+178; pile[WZ1]=jvj+180; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+178,jvj+180)*/
x[jvj+412]=x[jvj+172] ;z[jvj+412]=z[jvj+172];
l132:if((x[jvj+412]<=0)) goto l131;
x[jvj+182]=s[x[jvj+412]] ;z[jvj+182]=(x[jvj+182]<=sepcte) ? x[jvj+182] : z[jvj+412];
if((x[jvj+411]==x[jvj+182])) goto l133;
pile[v[22]]=jvj+181; pile[WZ1]=jvj+182; pile[WZ2]=jvj+183; 
(*f[760])( );     /*MEMEX0(jvj+181,jvj+182,jvj+183)*/
if((x[jvj+183]==135)) goto l134;
l133:x[jvj+412]=t[x[jvj+412]];
goto l132;
l6:x[jvj+5]=s[x[jvj+383]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+383];
if((x[jvj+5]==x[jvj+169])) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==649)) goto l7;
l8:pile[v[22]]=jvj+8; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+5)*/
l7:x[jvj+383]=t[x[jvj+383]];
goto l5;
l10:x[jvj+9]=s[x[jvj+4]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+4];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+10)*/
x[jvj+4]=t[x[jvj+4]];
goto l9;
l12:x[jvj+12]=s[x[jvj+8]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+8];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+12,jvj+13)*/
pile[v[22]]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+13)*/
x[jvj+8]=t[x[jvj+8]];
goto l11;
l14:x[jvj+15]=s[x[jvj+384]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+384];
if((x[jvj+15]==x[jvj+141])) goto l15;
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==649)) goto l15;
l16:pile[v[22]]=jvj+18; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+15)*/
l15:x[jvj+384]=t[x[jvj+384]];
l13:if((x[jvj+384]>0)) goto l14;
x[jvj+25]=0 ;z[jvj+25]=0;
l21:if((x[jvj+18]>0)) goto l22;
x[jvj+418]=x[jvj+144] ;z[jvj+418]=z[jvj+144];
l107:if((x[jvj+418]<=0)) goto l106;
x[jvj+400]=s[x[jvj+418]] ;z[jvj+400]=(x[jvj+400]<=sepcte) ? x[jvj+400] : z[jvj+418];
x[jvj+145]=x[jvj+400] ;z[jvj+145]=z[jvj+400];
pile[v[22]]=100; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(100,jvj+145,jvj+146)*/
if((x[jvj+146]!=41)) goto l108;
pile[v[22]]=jvj+145; pile[WZ1]=jvj+147; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+145,jvj+147)*/
x[jvj+401]=x[jvj+144] ;z[jvj+401]=z[jvj+144];
l109:if((x[jvj+401]<=0)) goto l108;
x[jvj+150]=s[x[jvj+401]] ;z[jvj+150]=(x[jvj+150]<=sepcte) ? x[jvj+150] : z[jvj+401];
if((x[jvj+400]==x[jvj+150])) goto l110;
x[jvj+148]=x[jvj+150] ;z[jvj+148]=z[jvj+150];
pile[v[22]]=jvj+148; pile[WZ1]=jvj+149; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+148,jvj+149)*/
x[jvj+419]=x[jvj+140] ;z[jvj+419]=z[jvj+140];
l111:if((x[jvj+419]<=0)) goto l110;
x[jvj+402]=s[x[jvj+419]] ;z[jvj+402]=(x[jvj+402]<=sepcte) ? x[jvj+402] : z[jvj+419];
x[jvj+151]=x[jvj+402] ;z[jvj+151]=z[jvj+402];
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+385]=x[jvj+140] ;z[jvj+385]=z[jvj+140];
l17:if((x[jvj+385]>0)) goto l18;
x[jvj+28]=0 ;z[jvj+28]=0;
l23:if((x[jvj+22]>0)) goto l24;
pile[v[22]]=jvj+150; pile[WZ1]=jvj+151; pile[WZ2]=jvj+152; 
(*f[760])( );     /*MEMEX0(jvj+150,jvj+151,jvj+152)*/
if((x[jvj+152]==135)) goto l112;
x[jvj+419]=t[x[jvj+419]];
goto l111;
l18:x[jvj+19]=s[x[jvj+385]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+385];
if((x[jvj+19]==x[jvj+402])) goto l19;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==649)) goto l19;
l20:pile[v[22]]=jvj+22; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+19)*/
l19:x[jvj+385]=t[x[jvj+385]];
goto l17;
l22:x[jvj+23]=s[x[jvj+18]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+18];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+23,jvj+24)*/
pile[v[22]]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+24)*/
x[jvj+18]=t[x[jvj+18]];
goto l21;
l24:x[jvj+26]=s[x[jvj+22]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+22];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+26,jvj+27)*/
pile[v[22]]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+27)*/
x[jvj+22]=t[x[jvj+22]];
goto l23;
l26:x[jvj+29]=s[x[jvj+386]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+386];
if((x[jvj+29]==x[jvj+406])) goto l27;
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]==649)) goto l27;
l28:pile[v[22]]=jvj+32; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+29)*/
l27:x[jvj+386]=t[x[jvj+386]];
l25:if((x[jvj+386]>0)) goto l26;
x[jvj+39]=0 ;z[jvj+39]=0;
l33:if((x[jvj+32]>0)) goto l34;
pile[v[22]]=jvj+162; pile[WZ1]=jvj+163; pile[WZ2]=jvj+164; 
(*f[760])( );     /*MEMEX0(jvj+162,jvj+163,jvj+164)*/
if((x[jvj+164]==135)) goto l121;
x[jvj+421]=t[x[jvj+421]];
l120:if((x[jvj+421]<=0)) goto l119;
x[jvj+406]=s[x[jvj+421]] ;z[jvj+406]=(x[jvj+406]<=sepcte) ? x[jvj+406] : z[jvj+421];
x[jvj+163]=x[jvj+406] ;z[jvj+163]=z[jvj+406];
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+386]=x[jvj+130] ;z[jvj+386]=z[jvj+130];
goto l25;
l30:x[jvj+33]=s[x[jvj+387]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+387];
if((x[jvj+33]==x[jvj+153])) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]==649)) goto l31;
l32:pile[v[22]]=jvj+36; pile[WZ1]=jvj+33; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+33)*/
l31:x[jvj+387]=t[x[jvj+387]];
l29:if((x[jvj+387]>0)) goto l30;
x[jvj+42]=0 ;z[jvj+42]=0;
l35:if((x[jvj+36]>0)) goto l36;
x[jvj+420]=x[jvj+156] ;z[jvj+420]=z[jvj+156];
l116:if((x[jvj+420]<=0)) goto l115;
x[jvj+404]=s[x[jvj+420]] ;z[jvj+404]=(x[jvj+404]<=sepcte) ? x[jvj+404] : z[jvj+420];
x[jvj+157]=x[jvj+404] ;z[jvj+157]=z[jvj+404];
pile[v[22]]=100; pile[WZ1]=jvj+157; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l117;     /*FNDO0(100,jvj+157,jvj+158)*/
if((x[jvj+158]!=41)) goto l117;
pile[v[22]]=jvj+157; pile[WZ1]=jvj+159; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+157,jvj+159)*/
x[jvj+405]=x[jvj+156] ;z[jvj+405]=z[jvj+156];
l118:if((x[jvj+405]<=0)) goto l117;
x[jvj+162]=s[x[jvj+405]] ;z[jvj+162]=(x[jvj+162]<=sepcte) ? x[jvj+162] : z[jvj+405];
if((x[jvj+404]==x[jvj+162])) goto l119;
x[jvj+160]=x[jvj+162] ;z[jvj+160]=z[jvj+162];
pile[v[22]]=jvj+160; pile[WZ1]=jvj+161; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+160,jvj+161)*/
x[jvj+421]=x[jvj+130] ;z[jvj+421]=z[jvj+130];
goto l120;
l34:x[jvj+37]=s[x[jvj+32]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+32];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+37,jvj+38)*/
pile[v[22]]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+39,jvj+38)*/
x[jvj+32]=t[x[jvj+32]];
goto l33;
l36:x[jvj+40]=s[x[jvj+36]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+36];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+40,jvj+41)*/
pile[v[22]]=jvj+42; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+41)*/
x[jvj+36]=t[x[jvj+36]];
goto l35;
l38:x[jvj+388]=t[x[jvj+388]];
l37:if((x[jvj+388]<=0)) goto l98;
x[jvj+43]=s[x[jvj+388]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+388];
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+43,V275)*/
V275=pile[WZ2]; 
if((V275==0)) goto l38;
x[jvj+45]=0 ;z[jvj+45]=0;
l41:if((x[jvj+119]>0)) goto l42;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+124; 
(*f[1965])( );     /*COPELFAIT0(jvj+45,jvj+124)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+125; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+43,jvj+125)*/
x[jvj+389]=x[jvj+123] ;z[jvj+389]=z[jvj+123];
l39:if((x[jvj+389]<=0)) goto l98;
x[jvj+44]=s[x[jvj+389]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+389];
pile[v[22]]=130; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+44,V277)*/
V277=pile[WZ2]; 
if((V277==0)) goto l40;
x[jvj+47]=0 ;z[jvj+47]=0;
l44:if((x[jvj+123]>0)) goto l45;
pile[v[22]]=jvj+47; pile[WZ1]=jvj+126; 
(*f[1965])( );     /*COPELFAIT0(jvj+47,jvj+126)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+127; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+44,jvj+127)*/
x[MMMT]=16679 ;z[MMMT]=16679;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+117; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+117,jvj+235)*/
pile[WZ3]=485; pile[WZ4]=jvj+315; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+315)*/
pile[v[22]]=jvj+315; pile[WZ1]=111; pile[WZ2]=jvj+316; 
(*f[54])( );     /*TRI1(jvj+315,111,jvj+316)*/
pile[v[22]]=jvj+316; pile[WZ1]=jvj+124; pile[WZ2]=107; pile[WZ3]=jvj+317; 
(*f[301])( );     /*TRI11(jvj+316,jvj+124,107,jvj+317)*/
pile[v[22]]=jvj+317; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+239; 
(*f[58])( );     /*TRI3(jvj+317,22,100,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+318; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+318)*/
pile[WZ3]=64; pile[WZ4]=jvj+320; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+320)*/
pile[v[22]]=jvj+320; pile[WZ1]=111; pile[WZ2]=jvj+321; 
(*f[54])( );     /*TRI1(jvj+320,111,jvj+321)*/
pile[v[22]]=jvj+321; pile[WZ1]=jvj+125; pile[WZ2]=103; pile[WZ3]=jvj+322; 
(*f[58])( );     /*TRI3(jvj+321,jvj+125,103,jvj+322)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+127; pile[WZ4]=jvj+322; pile[WZ5]=jvj+319; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+127,jvj+322,jvj+319)*/
pile[WZ2]=111; pile[WZ3]=jvj+318; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+318,jvj+237)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+237; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+126,jvj+237,107)*/
pile[v[22]]=jvj+237; pile[WZ1]=107; pile[WZ2]=jvj+319; 
(*f[36])( );     /*PLUSC0(jvj+237,107,jvj+319)*/
pile[v[22]]=jvj+235; pile[WZ1]=111; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,111,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=jvj+237; pile[WZ2]=103; pile[WZ3]=jvj+238; 
(*f[58])( );     /*TRI3(jvj+236,jvj+237,103,jvj+238)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+239; pile[WZ4]=jvj+238; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+239,jvj+238,MMMX)*/
goto l150;
l40:x[jvj+389]=t[x[jvj+389]];
goto l39;
l42:x[jvj+46]=s[x[jvj+119]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+119];
if((x[jvj+46]==x[jvj+43])) goto l43;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+46)*/
l43:x[jvj+119]=t[x[jvj+119]];
goto l41;
l45:x[jvj+48]=s[x[jvj+123]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+123];
if((x[jvj+48]==x[jvj+44])) goto l46;
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[68])( );     /*PLUE0(jvj+47,jvj+48)*/
l46:x[jvj+123]=t[x[jvj+123]];
goto l44;
l48:x[jvj+51]=s[x[jvj+50]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+50];
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+51,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1911; pile[WZ4]=jvj+273; 
(*f[181])( );     /*QUADRI2(100,20,101,1911,jvj+273)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V287; pile[WZ4]=jvj+275; 
(*f[192])( );     /*QUADRI4(100,41,130,V287,jvj+275)*/
pile[v[22]]=jvj+273; pile[WZ1]=111; pile[WZ2]=jvj+274; 
(*f[54])( );     /*TRI1(jvj+273,111,jvj+274)*/
pile[v[22]]=jvj+274; pile[WZ1]=jvj+275; pile[WZ2]=103; pile[WZ3]=jvj+276; 
(*f[58])( );     /*TRI3(jvj+274,jvj+275,103,jvj+276)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+276; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+276,jvj+54)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[522])( );     /*PLUB2(jvj+53,jvj+54)*/
x[jvj+50]=t[x[jvj+50]];
l47:if((x[jvj+50]>0)) goto l48;
for(i=x[jvj+53],V317=0;i>0;i=t[i],V317++)  ;
if((V317!=V318)) goto l97;
x[jvj+59]=0 ;z[jvj+59]=0;
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[1964])( );     /*SETERM0(jvj+55,jvj+56)*/
l49:if((x[jvj+56]>0)) goto l50;
for(i=x[jvj+59],V319=0;i>0;i=t[i],V319++)  ;
if((V319!=V320)) goto l97;
x[jvj+63]=0 ;z[jvj+63]=0;
l51:if((x[jvj+53]>0)) goto l52;
x[jvj+66]=0 ;z[jvj+66]=0;
l53:if((x[jvj+59]>0)) goto l54;
x[MMMT]=16683 ;z[MMMT]=16683;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+117; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+117,jvj+230)*/
pile[WZ3]=485; pile[WZ4]=jvj+309; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+309)*/
pile[v[22]]=jvj+309; pile[WZ1]=111; pile[WZ2]=jvj+310; 
(*f[54])( );     /*TRI1(jvj+309,111,jvj+310)*/
pile[v[22]]=jvj+310; pile[WZ1]=jvj+63; pile[WZ2]=107; pile[WZ3]=jvj+311; 
(*f[301])( );     /*TRI11(jvj+310,jvj+63,107,jvj+311)*/
pile[v[22]]=jvj+311; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+234; 
(*f[58])( );     /*TRI3(jvj+311,22,100,jvj+234)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+312; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+312)*/
pile[v[22]]=jvj+312; pile[WZ1]=111; pile[WZ2]=jvj+313; 
(*f[54])( );     /*TRI1(jvj+312,111,jvj+313)*/
pile[v[22]]=jvj+313; pile[WZ1]=jvj+66; pile[WZ2]=107; pile[WZ3]=jvj+314; 
(*f[301])( );     /*TRI11(jvj+313,jvj+66,107,jvj+314)*/
pile[v[22]]=jvj+314; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+232; 
(*f[58])( );     /*TRI3(jvj+314,22,100,jvj+232)*/
pile[v[22]]=jvj+230; pile[WZ1]=111; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,111,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=jvj+232; pile[WZ2]=103; pile[WZ3]=jvj+233; 
(*f[58])( );     /*TRI3(jvj+231,jvj+232,103,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+234; pile[WZ4]=jvj+233; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+234,jvj+233,MMMX)*/
goto l150;
l50:x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+57,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1911; pile[WZ4]=jvj+277; 
(*f[181])( );     /*QUADRI2(100,20,101,1911,jvj+277)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V287; pile[WZ4]=jvj+279; 
(*f[192])( );     /*QUADRI4(100,41,130,V287,jvj+279)*/
pile[v[22]]=jvj+277; pile[WZ1]=111; pile[WZ2]=jvj+278; 
(*f[54])( );     /*TRI1(jvj+277,111,jvj+278)*/
pile[v[22]]=jvj+278; pile[WZ1]=jvj+279; pile[WZ2]=103; pile[WZ3]=jvj+280; 
(*f[58])( );     /*TRI3(jvj+278,jvj+279,103,jvj+280)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+280; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+280,jvj+60)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[522])( );     /*PLUB2(jvj+59,jvj+60)*/
x[jvj+56]=t[x[jvj+56]];
goto l49;
l52:x[jvj+61]=s[x[jvj+53]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+53];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+61,jvj+62)*/
pile[v[22]]=jvj+63; 
(*f[68])( );     /*PLUE0(jvj+63,jvj+62)*/
x[jvj+53]=t[x[jvj+53]];
goto l51;
l54:x[jvj+64]=s[x[jvj+59]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+59];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+64,jvj+65)*/
pile[v[22]]=jvj+66; 
(*f[68])( );     /*PLUE0(jvj+66,jvj+65)*/
x[jvj+59]=t[x[jvj+59]];
goto l53;
l56:x[jvj+67]=s[x[jvj+135]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+135];
if((x[jvj+67]==x[jvj+398])) goto l57;
pile[v[22]]=111; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+67,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]==649)) goto l57;
l58:pile[v[22]]=jvj+70; pile[WZ1]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+70,jvj+67)*/
l57:x[jvj+135]=t[x[jvj+135]];
l55:if((x[jvj+135]>0)) goto l56;
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+136,jvj+137)*/
x[jvj+80]=0 ;z[jvj+80]=0;
l65:if((x[jvj+70]>0)) goto l66;
x[MMMT]=16795 ;z[MMMT]=16795;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+117; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+117,jvj+240)*/
pile[WZ3]=485; pile[WZ4]=jvj+323; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+323)*/
pile[v[22]]=jvj+323; pile[WZ1]=111; pile[WZ2]=jvj+324; 
(*f[54])( );     /*TRI1(jvj+323,111,jvj+324)*/
pile[v[22]]=jvj+324; pile[WZ1]=jvj+77; pile[WZ2]=107; pile[WZ3]=jvj+325; 
(*f[301])( );     /*TRI11(jvj+324,jvj+77,107,jvj+325)*/
pile[v[22]]=jvj+325; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+244; 
(*f[58])( );     /*TRI3(jvj+325,22,100,jvj+244)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+326; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+326)*/
pile[WZ3]=486; pile[WZ4]=jvj+328; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+328)*/
pile[WZ3]=52; pile[WZ4]=jvj+330; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+330)*/
pile[v[22]]=jvj+330; pile[WZ1]=111; pile[WZ2]=jvj+331; 
(*f[54])( );     /*TRI1(jvj+330,111,jvj+331)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+331; pile[WZ5]=jvj+329; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+137,jvj+331,jvj+329)*/
pile[WZ2]=111; pile[WZ3]=jvj+328; pile[WZ4]=jvj+327; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+328,jvj+327)*/
pile[v[22]]=jvj+327; pile[WZ1]=107; pile[WZ2]=jvj+329; 
(*f[36])( );     /*PLUSC0(jvj+327,107,jvj+329)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+327; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+80,jvj+327,107)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+326; pile[WZ4]=jvj+242; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+326,jvj+242)*/
pile[v[22]]=jvj+242; pile[WZ1]=107; pile[WZ2]=jvj+131; 
(*f[36])( );     /*PLUSC0(jvj+242,107,jvj+131)*/
pile[WZ2]=jvj+327; 
(*f[36])( );     /*PLUSC0(jvj+242,107,jvj+327)*/
pile[v[22]]=jvj+240; pile[WZ1]=111; pile[WZ2]=jvj+241; 
(*f[54])( );     /*TRI1(jvj+240,111,jvj+241)*/
pile[v[22]]=jvj+241; pile[WZ1]=jvj+242; pile[WZ2]=103; pile[WZ3]=jvj+243; 
(*f[58])( );     /*TRI3(jvj+241,jvj+242,103,jvj+243)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+244; pile[WZ4]=jvj+243; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+244,jvj+243,MMMX)*/
goto l150;
l60:x[jvj+71]=s[x[jvj+390]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+390];
if((x[jvj+71]==x[jvj+132])) goto l61;
pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(111,jvj+71,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]==649)) goto l61;
l62:pile[v[22]]=jvj+74; pile[WZ1]=jvj+71; 
(*f[68])( );     /*PLUE0(jvj+74,jvj+71)*/
l61:x[jvj+390]=t[x[jvj+390]];
l59:if((x[jvj+390]>0)) goto l60;
x[jvj+77]=0 ;z[jvj+77]=0;
l63:if((x[jvj+74]>0)) goto l64;
x[jvj+417]=x[jvj+135] ;z[jvj+417]=z[jvj+135];
l102:if((x[jvj+417]<=0)) goto l101;
x[jvj+398]=s[x[jvj+417]] ;z[jvj+398]=(x[jvj+398]<=sepcte) ? x[jvj+398] : z[jvj+417];
x[jvj+136]=x[jvj+398] ;z[jvj+136]=z[jvj+398];
pile[v[22]]=130; pile[WZ1]=jvj+136; 
(*f[26])( );if(v[102]) goto l103;     /*FNDC0(130,jvj+136,V354)*/
V354=pile[WZ2]; 
if((V354>=0)) goto l103;
x[jvj+70]=0 ;z[jvj+70]=0;
goto l55;
l64:x[jvj+75]=s[x[jvj+74]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+74];
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+75,jvj+76)*/
pile[v[22]]=jvj+77; 
(*f[68])( );     /*PLUE0(jvj+77,jvj+76)*/
x[jvj+74]=t[x[jvj+74]];
goto l63;
l66:x[jvj+78]=s[x[jvj+70]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+70];
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+78,jvj+79)*/
pile[v[22]]=jvj+80; 
(*f[68])( );     /*PLUE0(jvj+80,jvj+79)*/
x[jvj+70]=t[x[jvj+70]];
goto l65;
l68:x[jvj+81]=s[x[jvj+191]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+191];
if((x[jvj+81]==x[jvj+414])) goto l69;
pile[v[22]]=111; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,jvj+81,jvj+82)*/
pile[v[22]]=101; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+82,jvj+83)*/
if((x[jvj+83]==649)) goto l69;
l70:pile[v[22]]=jvj+84; pile[WZ1]=jvj+81; 
(*f[68])( );     /*PLUE0(jvj+84,jvj+81)*/
l69:x[jvj+191]=t[x[jvj+191]];
l67:if((x[jvj+191]>0)) goto l68;
pile[v[22]]=jvj+192; pile[WZ1]=jvj+193; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+192,jvj+193)*/
x[jvj+91]=0 ;z[jvj+91]=0;
l75:if((x[jvj+84]>0)) goto l76;
x[MMMT]=16796 ;z[MMMT]=16796;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+117; pile[WZ4]=jvj+260; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+117,jvj+260)*/
pile[WZ3]=485; pile[WZ4]=jvj+360; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+360)*/
pile[WZ3]=486; pile[WZ4]=jvj+362; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+362)*/
pile[WZ3]=52; pile[WZ4]=jvj+364; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+364)*/
pile[v[22]]=jvj+364; pile[WZ1]=111; pile[WZ2]=jvj+365; 
(*f[54])( );     /*TRI1(jvj+364,111,jvj+365)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+193; pile[WZ4]=jvj+365; pile[WZ5]=jvj+363; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+193,jvj+365,jvj+363)*/
pile[WZ2]=111; pile[WZ3]=jvj+362; pile[WZ4]=jvj+361; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+362,jvj+361)*/
pile[v[22]]=jvj+361; pile[WZ1]=107; pile[WZ2]=jvj+363; 
(*f[36])( );     /*PLUSC0(jvj+361,107,jvj+363)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+361; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+91,jvj+361,107)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+360; pile[WZ4]=jvj+264; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+360,jvj+264)*/
pile[v[22]]=jvj+264; pile[WZ1]=107; pile[WZ2]=jvj+187; 
(*f[36])( );     /*PLUSC0(jvj+264,107,jvj+187)*/
pile[WZ2]=jvj+361; 
(*f[36])( );     /*PLUSC0(jvj+264,107,jvj+361)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+366; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+366)*/
pile[v[22]]=jvj+366; pile[WZ1]=111; pile[WZ2]=jvj+367; 
(*f[54])( );     /*TRI1(jvj+366,111,jvj+367)*/
pile[v[22]]=jvj+367; pile[WZ1]=jvj+94; pile[WZ2]=107; pile[WZ3]=jvj+368; 
(*f[301])( );     /*TRI11(jvj+367,jvj+94,107,jvj+368)*/
pile[v[22]]=jvj+368; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+262; 
(*f[58])( );     /*TRI3(jvj+368,22,100,jvj+262)*/
pile[v[22]]=jvj+260; pile[WZ1]=111; pile[WZ2]=jvj+261; 
(*f[54])( );     /*TRI1(jvj+260,111,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=jvj+262; pile[WZ2]=103; pile[WZ3]=jvj+263; 
(*f[58])( );     /*TRI3(jvj+261,jvj+262,103,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+264; pile[WZ4]=jvj+263; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+264,jvj+263,MMMX)*/
goto l150;
l72:x[jvj+85]=s[x[jvj+391]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+391];
if((x[jvj+85]==x[jvj+188])) goto l73;
pile[v[22]]=111; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(111,jvj+85,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(101,jvj+86,jvj+87)*/
if((x[jvj+87]==649)) goto l73;
l74:pile[v[22]]=jvj+88; pile[WZ1]=jvj+85; 
(*f[68])( );     /*PLUE0(jvj+88,jvj+85)*/
l73:x[jvj+391]=t[x[jvj+391]];
l71:if((x[jvj+391]>0)) goto l72;
x[jvj+94]=0 ;z[jvj+94]=0;
l77:if((x[jvj+88]>0)) goto l78;
x[jvj+424]=x[jvj+191] ;z[jvj+424]=z[jvj+191];
l138:if((x[jvj+424]<=0)) goto l137;
x[jvj+414]=s[x[jvj+424]] ;z[jvj+414]=(x[jvj+414]<=sepcte) ? x[jvj+414] : z[jvj+424];
x[jvj+192]=x[jvj+414] ;z[jvj+192]=z[jvj+414];
pile[v[22]]=130; pile[WZ1]=jvj+192; 
(*f[26])( );if(v[102]) goto l139;     /*FNDC0(130,jvj+192,V415)*/
V415=pile[WZ2]; 
if((V415>=0)) goto l139;
x[jvj+84]=0 ;z[jvj+84]=0;
goto l67;
l76:x[jvj+89]=s[x[jvj+84]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+84];
pile[v[22]]=jvj+89; pile[WZ1]=jvj+90; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+89,jvj+90)*/
pile[v[22]]=jvj+91; 
(*f[68])( );     /*PLUE0(jvj+91,jvj+90)*/
x[jvj+84]=t[x[jvj+84]];
goto l75;
l78:x[jvj+92]=s[x[jvj+88]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+88];
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+92,jvj+93)*/
pile[v[22]]=jvj+94; 
(*f[68])( );     /*PLUE0(jvj+94,jvj+93)*/
x[jvj+88]=t[x[jvj+88]];
goto l77;
l80:x[jvj+392]=t[x[jvj+392]];
l79:if((x[jvj+392]<=0)) goto l148;
x[jvj+95]=s[x[jvj+392]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+392];
pile[v[22]]=130; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(130,jvj+95,V474)*/
V474=pile[WZ2]; 
if((V474==0)) goto l80;
x[jvj+97]=0 ;z[jvj+97]=0;
l83:if((x[jvj+394]>0)) goto l84;
pile[v[22]]=jvj+97; pile[WZ1]=jvj+223; 
(*f[1965])( );     /*COPELFAIT0(jvj+97,jvj+223)*/
pile[v[22]]=jvj+95; pile[WZ1]=jvj+224; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+95,jvj+224)*/
x[jvj+395]=x[jvj+222] ;z[jvj+395]=z[jvj+222];
x[jvj+393]=x[jvj+395] ;z[jvj+393]=z[jvj+395];
l81:if((x[jvj+393]<=0)) goto l148;
x[jvj+96]=s[x[jvj+393]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+393];
pile[v[22]]=130; pile[WZ1]=jvj+96; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+96,V476)*/
V476=pile[WZ2]; 
if((V476==0)) goto l82;
x[jvj+99]=0 ;z[jvj+99]=0;
l86:if((x[jvj+395]>0)) goto l87;
pile[v[22]]=jvj+99; pile[WZ1]=jvj+225; 
(*f[1965])( );     /*COPELFAIT0(jvj+99,jvj+225)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+226; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+96,jvj+226)*/
x[MMMT]=16734 ;z[MMMT]=16734;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+268; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+268)*/
pile[WZ3]=485; pile[WZ4]=jvj+374; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+374)*/
pile[v[22]]=jvj+374; pile[WZ1]=111; pile[WZ2]=jvj+375; 
(*f[54])( );     /*TRI1(jvj+374,111,jvj+375)*/
pile[v[22]]=jvj+375; pile[WZ1]=jvj+223; pile[WZ2]=107; pile[WZ3]=jvj+376; 
(*f[301])( );     /*TRI11(jvj+375,jvj+223,107,jvj+376)*/
pile[v[22]]=jvj+376; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+272; 
(*f[58])( );     /*TRI3(jvj+376,22,100,jvj+272)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+377; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+377)*/
pile[WZ3]=64; pile[WZ4]=jvj+379; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+379)*/
pile[v[22]]=jvj+379; pile[WZ1]=111; pile[WZ2]=jvj+380; 
(*f[54])( );     /*TRI1(jvj+379,111,jvj+380)*/
pile[v[22]]=jvj+380; pile[WZ1]=jvj+224; pile[WZ2]=103; pile[WZ3]=jvj+381; 
(*f[58])( );     /*TRI3(jvj+380,jvj+224,103,jvj+381)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+226; pile[WZ4]=jvj+381; pile[WZ5]=jvj+378; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+226,jvj+381,jvj+378)*/
pile[WZ2]=111; pile[WZ3]=jvj+377; pile[WZ4]=jvj+270; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+377,jvj+270)*/
pile[v[22]]=jvj+225; pile[WZ1]=jvj+270; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+225,jvj+270,107)*/
pile[v[22]]=jvj+270; pile[WZ1]=107; pile[WZ2]=jvj+378; 
(*f[36])( );     /*PLUSC0(jvj+270,107,jvj+378)*/
pile[v[22]]=jvj+215; pile[WZ1]=160; pile[WZ2]=jvj+267; 
(*f[54])( );     /*TRI1(jvj+215,160,jvj+267)*/
pile[v[22]]=jvj+267; pile[WZ1]=jvj+268; pile[WZ2]=111; pile[WZ3]=jvj+269; 
(*f[58])( );     /*TRI3(jvj+267,jvj+268,111,jvj+269)*/
pile[v[22]]=jvj+269; pile[WZ1]=jvj+270; pile[WZ2]=103; pile[WZ3]=jvj+271; 
(*f[58])( );     /*TRI3(jvj+269,jvj+270,103,jvj+271)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+272; pile[WZ4]=jvj+271; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+272,jvj+271,MMMX)*/
goto l150;
l82:x[jvj+393]=t[x[jvj+393]];
goto l81;
l84:x[jvj+98]=s[x[jvj+394]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+394];
if((x[jvj+98]==x[jvj+95])) goto l85;
pile[v[22]]=jvj+97; pile[WZ1]=jvj+98; 
(*f[68])( );     /*PLUE0(jvj+97,jvj+98)*/
l85:x[jvj+394]=t[x[jvj+394]];
goto l83;
l87:x[jvj+100]=s[x[jvj+395]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+395];
if((x[jvj+100]==x[jvj+96])) goto l88;
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; 
(*f[68])( );     /*PLUE0(jvj+99,jvj+100)*/
l88:x[jvj+395]=t[x[jvj+395]];
goto l86;
l90:x[jvj+101]=s[x[jvj+396]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+396];
if((x[jvj+101]==x[jvj+197])) goto l91;
if((x[jvj+101]==x[jvj+206])) goto l91;
pile[v[22]]=111; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(111,jvj+101,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(101,jvj+102,jvj+103)*/
if((x[jvj+103]==649)) goto l91;
l92:pile[v[22]]=jvj+104; pile[WZ1]=jvj+101; 
(*f[68])( );     /*PLUE0(jvj+104,jvj+101)*/
l91:x[jvj+396]=t[x[jvj+396]];
l89:if((x[jvj+396]>0)) goto l90;
pile[v[22]]=jvj+209; pile[WZ1]=jvj+211; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+209,jvj+211)*/
x[jvj+107]=0 ;z[jvj+107]=0;
l93:if((x[jvj+104]>0)) goto l94;
pile[v[22]]=102; pile[WZ1]=jvj+206; pile[WZ2]=jvj+212; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(102,jvj+206,jvj+212)*/
pile[v[22]]=jvj+202; pile[WZ1]=jvj+212; pile[WZ2]=jvj+213; 
(*f[760])( );     /*MEMEX0(jvj+202,jvj+212,jvj+213)*/
if((x[jvj+213]==135)) goto l146;
l145:x[jvj+416]=t[x[jvj+416]];
l144:if((x[jvj+416]<=0)) goto l143;
x[jvj+206]=s[x[jvj+416]] ;z[jvj+206]=(x[jvj+206]<=sepcte) ? x[jvj+206] : z[jvj+416];
if((x[jvj+197]==x[jvj+206])) goto l145;
pile[v[22]]=111; pile[WZ1]=jvj+206; pile[WZ2]=jvj+207; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(111,jvj+206,jvj+207)*/
pile[v[22]]=101; pile[WZ1]=jvj+207; pile[WZ2]=jvj+208; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(101,jvj+207,jvj+208)*/
if((x[jvj+208]!=596)) goto l145;
pile[v[22]]=103; pile[WZ1]=jvj+206; pile[WZ2]=jvj+209; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(103,jvj+206,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=jvj+209; pile[WZ2]=jvj+210; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(100,jvj+209,jvj+210)*/
if((x[jvj+210]!=41)) goto l145;
x[jvj+104]=0 ;z[jvj+104]=0;
x[jvj+396]=x[jvj+196] ;z[jvj+396]=z[jvj+196];
goto l89;
l94:x[jvj+105]=s[x[jvj+104]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+104];
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+105,jvj+106)*/
pile[v[22]]=jvj+107; 
(*f[68])( );     /*PLUE0(jvj+107,jvj+106)*/
x[jvj+104]=t[x[jvj+104]];
goto l93;
l95:pile[v[22]]=100; pile[WZ1]=MMMI; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(100,MMMI,jvj+115)*/
if((x[jvj+115]!=22)) goto l140;
pile[v[22]]=111; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(111,MMMI,jvj+116)*/
pile[v[22]]=101; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(101,jvj+116,jvj+117)*/
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(1564,145,jvj+118)*/
for(a=x[jvj+118];a>0;a=t[a]) if(s[a]==x[jvj+117]) goto l96;
l140:pile[v[22]]=111; pile[WZ1]=MMMI; pile[WZ2]=jvj+194; 
(*f[32])( );if(v[102]) goto l149;     /*FNDO0(111,MMMI,jvj+194)*/
pile[v[22]]=101; pile[WZ1]=jvj+194; pile[WZ2]=jvj+195; 
(*f[32])( );if(v[102]) goto l149;     /*FNDO0(101,jvj+194,jvj+195)*/
if((x[jvj+195]==486)) goto l141;
if((x[jvj+195]!=625)) goto l149;
pile[v[22]]=160; pile[WZ1]=MMMI; pile[WZ2]=jvj+214; 
(*f[32])( );if(v[102]) goto l149;     /*FNDO0(160,MMMI,jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=jvj+215; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+214,jvj+215)*/
x[jvj+216]=d[20];z[jvj+216]=0;
l147:if((x[jvj+216]<=0)) goto l149;
x[jvj+217]=s[x[jvj+216]] ;z[jvj+217]=(x[jvj+217]<=sepcte) ? x[jvj+217] : z[jvj+216];
pile[v[22]]=268; pile[WZ1]=jvj+217; pile[WZ2]=jvj+218; 
(*f[32])( );if(v[102]) goto l148;     /*FNDO0(268,jvj+217,jvj+218)*/
pile[v[22]]=jvj+217; pile[WZ1]=MMMI; pile[WZ2]=jvj+219; 
(*f[32])( );if(v[102]) goto l148;     /*FNDO0(jvj+217,MMMI,jvj+219)*/
pile[v[22]]=jvj+218; pile[WZ2]=jvj+220; 
(*f[32])( );if(v[102]) goto l148;     /*FNDO0(jvj+218,MMMI,jvj+220)*/
pile[v[22]]=jvj+219; pile[WZ1]=jvj+221; 
(*f[1964])( );     /*SETERM0(jvj+219,jvj+221)*/
pile[v[22]]=jvj+220; pile[WZ1]=jvj+222; 
(*f[1964])( );     /*SETERM0(jvj+220,jvj+222)*/
x[jvj+394]=x[jvj+221] ;z[jvj+394]=z[jvj+221];
x[jvj+392]=x[jvj+394] ;z[jvj+392]=z[jvj+394];
goto l79;
l96:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(102,MMMI,jvj+49)*/
pile[v[22]]=103; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(103,MMMI,jvj+55)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+119; 
(*f[1964])( );     /*SETERM0(jvj+49,jvj+119)*/
for(i=x[jvj+119],V318=0;i>0;i=t[i],V318++)  ;
pile[v[22]]=jvj+55; pile[WZ1]=jvj+120; 
(*f[1964])( );     /*SETERM0(jvj+55,jvj+120)*/
for(i=x[jvj+120],V320=0;i>0;i=t[i],V320++)  ;
pile[WZ1]=jvj+121; 
(*f[1966])( );     /*SETCOEFFS0(jvj+55,jvj+121)*/
pile[v[22]]=jvj+121; 
(*f[1000])( );     /*PGCDEN0(jvj+121,V300)*/
V300=pile[WZ1]; 
pile[v[22]]=jvj+49; pile[WZ1]=jvj+122; 
(*f[1966])( );     /*SETCOEFFS0(jvj+49,jvj+122)*/
pile[v[22]]=jvj+122; 
(*f[1000])( );     /*PGCDEN0(jvj+122,V302)*/
V302=pile[WZ1]; 
pile[v[22]]=V300; pile[WZ1]=V302; 
(*f[1011])( );     /*PGCD0(V300,V302,V287)*/
V287=pile[WZ2]; 
if((V287==1)) goto l97;
x[jvj+53]=0 ;z[jvj+53]=0;
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; 
(*f[1964])( );     /*SETERM0(jvj+49,jvj+50)*/
goto l47;
l97:pile[v[22]]=jvj+55; pile[WZ1]=jvj+123; 
(*f[1964])( );     /*SETERM0(jvj+55,jvj+123)*/
x[jvj+388]=x[jvj+119] ;z[jvj+388]=z[jvj+119];
goto l37;
l98:pile[v[22]]=111; pile[WZ1]=jvj+49; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+49,jvj+128)*/
pile[v[22]]=101; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+128,jvj+129)*/
if((x[jvj+129]!=485)) goto l135;
pile[v[22]]=107; pile[WZ1]=jvj+49; pile[WZ2]=jvj+130; 
(*f[33])( );     /*FNDE0(107,jvj+49,jvj+130)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+131; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+55,jvj+131)*/
x[jvj+397]=x[jvj+130] ;z[jvj+397]=z[jvj+130];
l99:if((x[jvj+397]>0)) goto l100;
pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+55,jvj+138)*/
pile[v[22]]=101; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+138,jvj+139)*/
if((x[jvj+139]!=485)) goto l135;
pile[v[22]]=107; pile[WZ1]=jvj+55; pile[WZ2]=jvj+140; 
(*f[33])( );     /*FNDE0(107,jvj+55,jvj+140)*/
x[jvj+399]=x[jvj+130] ;z[jvj+399]=z[jvj+130];
l104:if((x[jvj+399]>0)) goto l105;
x[jvj+403]=x[jvj+140] ;z[jvj+403]=z[jvj+140];
l113:if((x[jvj+403]>0)) goto l114;
x[jvj+407]=x[jvj+130] ;z[jvj+407]=z[jvj+130];
l122:if((x[jvj+407]<=0)) goto l135;
x[jvj+165]=s[x[jvj+407]] ;z[jvj+165]=(x[jvj+165]<=sepcte) ? x[jvj+165] : z[jvj+407];
pile[v[22]]=111; pile[WZ1]=jvj+165; pile[WZ2]=jvj+166; 
(*f[32])( );if(v[102]) goto l123;     /*FNDO0(111,jvj+165,jvj+166)*/
pile[v[22]]=101; pile[WZ1]=jvj+166; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l123;     /*FNDO0(101,jvj+166,jvj+167)*/
if((x[jvj+167]!=486)) goto l123;
pile[v[22]]=107; pile[WZ1]=jvj+165; pile[WZ2]=jvj+168; 
(*f[33])( );     /*FNDE0(107,jvj+165,jvj+168)*/
for(i=x[jvj+168],V40=0;i>0;i=t[i],V40++)  ;
if((V40!=2)) goto l123;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+382]=x[jvj+130] ;z[jvj+382]=z[jvj+130];
goto l1;
l100:x[jvj+132]=s[x[jvj+397]] ;z[jvj+132]=(x[jvj+132]<=sepcte) ? x[jvj+132] : z[jvj+397];
pile[v[22]]=111; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l101;     /*FNDO0(111,jvj+132,jvj+133)*/
pile[v[22]]=101; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l101;     /*FNDO0(101,jvj+133,jvj+134)*/
if((x[jvj+134]!=486)) goto l101;
pile[v[22]]=107; pile[WZ1]=jvj+132; pile[WZ2]=jvj+135; 
(*f[33])( );     /*FNDE0(107,jvj+132,jvj+135)*/
x[jvj+74]=0 ;z[jvj+74]=0;
x[jvj+390]=x[jvj+130] ;z[jvj+390]=z[jvj+130];
goto l59;
l101:x[jvj+397]=t[x[jvj+397]];
goto l99;
l103:x[jvj+417]=t[x[jvj+417]];
goto l102;
l105:x[jvj+141]=s[x[jvj+399]] ;z[jvj+141]=(x[jvj+141]<=sepcte) ? x[jvj+141] : z[jvj+399];
pile[v[22]]=111; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(111,jvj+141,jvj+142)*/
pile[v[22]]=101; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(101,jvj+142,jvj+143)*/
if((x[jvj+143]!=486)) goto l106;
pile[v[22]]=107; pile[WZ1]=jvj+141; pile[WZ2]=jvj+144; 
(*f[33])( );     /*FNDE0(107,jvj+141,jvj+144)*/
for(i=x[jvj+144],V144=0;i>0;i=t[i],V144++)  ;
if((V144!=2)) goto l106;
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+384]=x[jvj+130] ;z[jvj+384]=z[jvj+130];
goto l13;
l106:x[jvj+399]=t[x[jvj+399]];
goto l104;
l108:x[jvj+418]=t[x[jvj+418]];
goto l107;
l110:x[jvj+401]=t[x[jvj+401]];
goto l109;
l112:x[MMMT]=16705 ;z[MMMT]=16705;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+117; pile[WZ4]=jvj+245; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+117,jvj+245)*/
pile[WZ3]=485; pile[WZ4]=jvj+332; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+332)*/
pile[WZ3]=486; pile[WZ4]=jvj+334; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+334)*/
pile[WZ3]=88; pile[WZ4]=jvj+336; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+336)*/
pile[v[22]]=jvj+336; pile[WZ1]=111; pile[WZ2]=jvj+337; 
(*f[54])( );     /*TRI1(jvj+336,111,jvj+337)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+337; pile[WZ5]=jvj+335; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+147,jvj+337,jvj+335)*/
pile[WZ2]=111; pile[WZ3]=jvj+334; pile[WZ4]=jvj+333; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+334,jvj+333)*/
pile[v[22]]=jvj+333; pile[WZ1]=107; pile[WZ2]=jvj+335; 
(*f[36])( );     /*PLUSC0(jvj+333,107,jvj+335)*/
pile[WZ2]=jvj+149; 
(*f[36])( );     /*PLUSC0(jvj+333,107,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+332; pile[WZ4]=jvj+249; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+332,jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=107; pile[WZ2]=jvj+333; 
(*f[36])( );     /*PLUSC0(jvj+249,107,jvj+333)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+249; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+25,jvj+249,107)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+338; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+338)*/
pile[v[22]]=jvj+338; pile[WZ1]=111; pile[WZ2]=jvj+339; 
(*f[54])( );     /*TRI1(jvj+338,111,jvj+339)*/
pile[v[22]]=jvj+339; pile[WZ1]=jvj+28; pile[WZ2]=107; pile[WZ3]=jvj+340; 
(*f[301])( );     /*TRI11(jvj+339,jvj+28,107,jvj+340)*/
pile[v[22]]=jvj+340; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+247; 
(*f[58])( );     /*TRI3(jvj+340,22,100,jvj+247)*/
pile[v[22]]=jvj+245; pile[WZ1]=111; pile[WZ2]=jvj+246; 
(*f[54])( );     /*TRI1(jvj+245,111,jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=jvj+247; pile[WZ2]=103; pile[WZ3]=jvj+248; 
(*f[58])( );     /*TRI3(jvj+246,jvj+247,103,jvj+248)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+249; pile[WZ4]=jvj+248; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+249,jvj+248,MMMX)*/
goto l150;
l114:x[jvj+153]=s[x[jvj+403]] ;z[jvj+153]=(x[jvj+153]<=sepcte) ? x[jvj+153] : z[jvj+403];
pile[v[22]]=111; pile[WZ1]=jvj+153; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l115;     /*FNDO0(111,jvj+153,jvj+154)*/
pile[v[22]]=101; pile[WZ1]=jvj+154; pile[WZ2]=jvj+155; 
(*f[32])( );if(v[102]) goto l115;     /*FNDO0(101,jvj+154,jvj+155)*/
if((x[jvj+155]!=486)) goto l115;
pile[v[22]]=107; pile[WZ1]=jvj+153; pile[WZ2]=jvj+156; 
(*f[33])( );     /*FNDE0(107,jvj+153,jvj+156)*/
for(i=x[jvj+156],V226=0;i>0;i=t[i],V226++)  ;
if((V226!=2)) goto l115;
x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+387]=x[jvj+140] ;z[jvj+387]=z[jvj+140];
goto l29;
l115:x[jvj+403]=t[x[jvj+403]];
goto l113;
l117:x[jvj+420]=t[x[jvj+420]];
goto l116;
l119:x[jvj+405]=t[x[jvj+405]];
goto l118;
l121:x[MMMT]=16729 ;z[MMMT]=16729;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+117; pile[WZ4]=jvj+250; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+117,jvj+250)*/
pile[WZ3]=485; pile[WZ4]=jvj+341; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+341)*/
pile[v[22]]=jvj+341; pile[WZ1]=111; pile[WZ2]=jvj+342; 
(*f[54])( );     /*TRI1(jvj+341,111,jvj+342)*/
pile[v[22]]=jvj+342; pile[WZ1]=jvj+39; pile[WZ2]=107; pile[WZ3]=jvj+343; 
(*f[301])( );     /*TRI11(jvj+342,jvj+39,107,jvj+343)*/
pile[v[22]]=jvj+343; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+254; 
(*f[58])( );     /*TRI3(jvj+343,22,100,jvj+254)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+344; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+344)*/
pile[WZ3]=486; pile[WZ4]=jvj+346; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+346)*/
pile[WZ3]=88; pile[WZ4]=jvj+348; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+348)*/
pile[v[22]]=jvj+348; pile[WZ1]=111; pile[WZ2]=jvj+349; 
(*f[54])( );     /*TRI1(jvj+348,111,jvj+349)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+159; pile[WZ4]=jvj+349; pile[WZ5]=jvj+347; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+159,jvj+349,jvj+347)*/
pile[WZ2]=111; pile[WZ3]=jvj+346; pile[WZ4]=jvj+345; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+346,jvj+345)*/
pile[v[22]]=jvj+345; pile[WZ1]=107; pile[WZ2]=jvj+347; 
(*f[36])( );     /*PLUSC0(jvj+345,107,jvj+347)*/
pile[WZ2]=jvj+161; 
(*f[36])( );     /*PLUSC0(jvj+345,107,jvj+161)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+344; pile[WZ4]=jvj+252; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+344,jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=107; pile[WZ2]=jvj+345; 
(*f[36])( );     /*PLUSC0(jvj+252,107,jvj+345)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+252; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+42,jvj+252,107)*/
pile[v[22]]=jvj+250; pile[WZ1]=111; pile[WZ2]=jvj+251; 
(*f[54])( );     /*TRI1(jvj+250,111,jvj+251)*/
pile[v[22]]=jvj+251; pile[WZ1]=jvj+252; pile[WZ2]=103; pile[WZ3]=jvj+253; 
(*f[58])( );     /*TRI3(jvj+251,jvj+252,103,jvj+253)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+254; pile[WZ4]=jvj+253; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+254,jvj+253,MMMX)*/
goto l150;
l123:x[jvj+407]=t[x[jvj+407]];
goto l122;
l125:x[jvj+408]=t[x[jvj+408]];
goto l124;
l127:x[jvj+422]=t[x[jvj+422]];
goto l126;
l129:x[jvj+410]=t[x[jvj+410]];
goto l128;
l131:x[jvj+423]=t[x[jvj+423]];
goto l130;
l134:x[MMMT]=16730 ;z[MMMT]=16730;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+117; pile[WZ4]=jvj+255; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+117,jvj+255)*/
pile[WZ3]=485; pile[WZ4]=jvj+350; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+350)*/
pile[WZ3]=486; pile[WZ4]=jvj+352; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+352)*/
pile[WZ3]=64; pile[WZ4]=jvj+354; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+354)*/
pile[v[22]]=jvj+354; pile[WZ1]=111; pile[WZ2]=jvj+355; 
(*f[54])( );     /*TRI1(jvj+354,111,jvj+355)*/
pile[v[22]]=jvj+355; pile[WZ1]=jvj+180; pile[WZ2]=103; pile[WZ3]=jvj+356; 
(*f[58])( );     /*TRI3(jvj+355,jvj+180,103,jvj+356)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+175; pile[WZ4]=jvj+356; pile[WZ5]=jvj+353; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+175,jvj+356,jvj+353)*/
pile[WZ2]=111; pile[WZ3]=jvj+352; pile[WZ4]=jvj+351; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+352,jvj+351)*/
pile[v[22]]=jvj+351; pile[WZ1]=107; pile[WZ2]=jvj+353; 
(*f[36])( );     /*PLUSC0(jvj+351,107,jvj+353)*/
pile[WZ2]=jvj+177; 
(*f[36])( );     /*PLUSC0(jvj+351,107,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+350; pile[WZ4]=jvj+259; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+350,jvj+259)*/
pile[v[22]]=jvj+259; pile[WZ1]=107; pile[WZ2]=jvj+351; 
(*f[36])( );     /*PLUSC0(jvj+259,107,jvj+351)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+259; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+11,jvj+259,107)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+357; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+357)*/
pile[v[22]]=jvj+357; pile[WZ1]=111; pile[WZ2]=jvj+358; 
(*f[54])( );     /*TRI1(jvj+357,111,jvj+358)*/
pile[v[22]]=jvj+358; pile[WZ1]=jvj+14; pile[WZ2]=107; pile[WZ3]=jvj+359; 
(*f[301])( );     /*TRI11(jvj+358,jvj+14,107,jvj+359)*/
pile[v[22]]=jvj+359; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+257; 
(*f[58])( );     /*TRI3(jvj+359,22,100,jvj+257)*/
pile[v[22]]=jvj+255; pile[WZ1]=111; pile[WZ2]=jvj+256; 
(*f[54])( );     /*TRI1(jvj+255,111,jvj+256)*/
pile[v[22]]=jvj+256; pile[WZ1]=jvj+257; pile[WZ2]=103; pile[WZ3]=jvj+258; 
(*f[58])( );     /*TRI3(jvj+256,jvj+257,103,jvj+258)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+259; pile[WZ4]=jvj+258; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+259,jvj+258,MMMX)*/
goto l150;
l135:pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+184; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(111,jvj+55,jvj+184)*/
pile[v[22]]=101; pile[WZ1]=jvj+184; pile[WZ2]=jvj+185; 
(*f[32])( );if(v[102]) goto l140;     /*FNDO0(101,jvj+184,jvj+185)*/
if((x[jvj+185]!=485)) goto l140;
pile[v[22]]=107; pile[WZ1]=jvj+55; pile[WZ2]=jvj+186; 
(*f[33])( );     /*FNDE0(107,jvj+55,jvj+186)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+187; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+49,jvj+187)*/
x[jvj+413]=x[jvj+186] ;z[jvj+413]=z[jvj+186];
l136:if((x[jvj+413]<=0)) goto l140;
x[jvj+188]=s[x[jvj+413]] ;z[jvj+188]=(x[jvj+188]<=sepcte) ? x[jvj+188] : z[jvj+413];
pile[v[22]]=111; pile[WZ1]=jvj+188; pile[WZ2]=jvj+189; 
(*f[32])( );if(v[102]) goto l137;     /*FNDO0(111,jvj+188,jvj+189)*/
pile[v[22]]=101; pile[WZ1]=jvj+189; pile[WZ2]=jvj+190; 
(*f[32])( );if(v[102]) goto l137;     /*FNDO0(101,jvj+189,jvj+190)*/
if((x[jvj+190]!=486)) goto l137;
pile[v[22]]=107; pile[WZ1]=jvj+188; pile[WZ2]=jvj+191; 
(*f[33])( );     /*FNDE0(107,jvj+188,jvj+191)*/
x[jvj+88]=0 ;z[jvj+88]=0;
x[jvj+391]=x[jvj+186] ;z[jvj+391]=z[jvj+186];
goto l71;
l137:x[jvj+413]=t[x[jvj+413]];
goto l136;
l139:x[jvj+424]=t[x[jvj+424]];
goto l138;
l141:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+196; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+196)*/
x[jvj+415]=x[jvj+196] ;z[jvj+415]=z[jvj+196];
l142:if((x[jvj+415]<=0)) goto l149;
x[jvj+197]=s[x[jvj+415]] ;z[jvj+197]=(x[jvj+197]<=sepcte) ? x[jvj+197] : z[jvj+415];
pile[v[22]]=111; pile[WZ1]=jvj+197; pile[WZ2]=jvj+198; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(111,jvj+197,jvj+198)*/
pile[v[22]]=101; pile[WZ1]=jvj+198; pile[WZ2]=jvj+199; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(101,jvj+198,jvj+199)*/
if((x[jvj+199]!=596)) goto l143;
pile[v[22]]=103; pile[WZ1]=jvj+197; pile[WZ2]=jvj+200; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(103,jvj+197,jvj+200)*/
pile[v[22]]=100; pile[WZ1]=jvj+200; pile[WZ2]=jvj+201; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(100,jvj+200,jvj+201)*/
if((x[jvj+201]!=41)) goto l143;
pile[v[22]]=102; pile[WZ1]=jvj+197; pile[WZ2]=jvj+202; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(102,jvj+197,jvj+202)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+203; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+200,jvj+203)*/
x[jvj+204]=x[jvj+202] ;z[jvj+204]=z[jvj+202];
pile[v[22]]=jvj+204; pile[WZ1]=jvj+205; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+204,jvj+205)*/
x[jvj+416]=x[jvj+196] ;z[jvj+416]=z[jvj+196];
goto l144;
l143:x[jvj+415]=t[x[jvj+415]];
goto l142;
l146:x[MMMT]=16634 ;z[MMMT]=16634;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+265; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+265)*/
pile[WZ3]=596; pile[WZ4]=jvj+369; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+369)*/
pile[WZ3]=485; pile[WZ4]=jvj+373; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+373)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+373; pile[WZ4]=jvj+371; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+373,jvj+371)*/
pile[v[22]]=jvj+371; pile[WZ1]=107; pile[WZ2]=jvj+203; 
(*f[36])( );     /*PLUSC0(jvj+371,107,jvj+203)*/
pile[WZ2]=jvj+211; 
(*f[36])( );     /*PLUSC0(jvj+371,107,jvj+211)*/
pile[v[22]]=jvj+369; pile[WZ1]=111; pile[WZ2]=jvj+370; 
(*f[54])( );     /*TRI1(jvj+369,111,jvj+370)*/
pile[v[22]]=jvj+370; pile[WZ1]=jvj+371; pile[WZ2]=103; pile[WZ3]=jvj+372; 
(*f[58])( );     /*TRI3(jvj+370,jvj+371,103,jvj+372)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+205; pile[WZ4]=jvj+372; pile[WZ5]=jvj+266; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+205,jvj+372,jvj+266)*/
pile[WZ2]=111; pile[WZ3]=jvj+265; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+265,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+266; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+266)*/
pile[v[22]]=jvj+107; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+107,MMMX,107)*/
goto l150;
l148:x[jvj+216]=t[x[jvj+216]];
goto l147;
l149:x[MMMT]=x[MMMX]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
