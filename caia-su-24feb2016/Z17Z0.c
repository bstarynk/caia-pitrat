#include "dx.h"
void Z17Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V174=0,V216=0,V217=0,V240=0,V183=0,V194=0,V190=0,V193=0,V198=0,V266=0,V258=0,V295=0,V287=0,V72=0,V62=0,V138=0,V98=0,V176=0,V26=0,V34=0;
int MMMI;
int MMMT,MMMX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=381;
if(v[0]>99700) (*f[6])( );

MMMI=pile[v[22]]; MMMT=pile[v[22]+1]; MMMX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+67]=x[MMMI] ;z[jvj+67]=z[MMMI];
pile[v[22]]=111; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,jvj+67,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]!=25)) goto l66;
pile[v[22]]=1; pile[WZ1]=jvj+67; 
(*f[1963])( );     /*COEFFDEG0(1,jvj+67,V183)*/
V183=pile[WZ2]; 
V194=abs(V183);
if((V194<=1)) goto l66;
pile[v[22]]=0; 
(*f[1963])( );     /*COEFFDEG0(0,jvj+67,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=jvj+67; pile[WZ1]=jvj+70; 
(*f[1945])( );if(v[102]) goto l66;     /*DEGREE0(jvj+67,jvj+70)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+70,V193)*/
V193=pile[WZ2]; 
if((V193!=1)) goto l66;
pile[v[22]]=jvj+67; pile[WZ1]=jvj+71; 
(*f[891])( );     /*VAREXP0(jvj+67,jvj+71)*/
for(i=x[jvj+71],V198=0;i>0;i=t[i],V198++)  ;
if((V198!=1)) goto l66;
if((x[jvj+71]<=0)) goto l66;
x[jvj+72]=s[x[jvj+71]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+71];
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+72,jvj+73)*/
x[MMMT]=16526 ;z[MMMT]=16526;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+188)*/
pile[WZ3]=48; pile[WZ4]=jvj+255; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+255)*/
pile[WZ3]=625; pile[WZ4]=jvj+260; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+260)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V190; pile[WZ4]=jvj+264; 
(*f[192])( );     /*QUADRI4(100,41,130,V190,jvj+264)*/
pile[WZ3]=0; pile[WZ4]=jvj+262; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+262)*/
pile[WZ3]=V194; pile[WZ4]=jvj+258; 
(*f[192])( );     /*QUADRI4(100,41,130,V194,jvj+258)*/
pile[v[22]]=jvj+258; pile[WZ1]=160; pile[WZ2]=jvj+259; 
(*f[54])( );     /*TRI1(jvj+258,160,jvj+259)*/
pile[v[22]]=jvj+259; pile[WZ1]=jvj+260; pile[WZ2]=111; pile[WZ3]=jvj+261; 
(*f[58])( );     /*TRI3(jvj+259,jvj+260,111,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=jvj+262; pile[WZ2]=103; pile[WZ3]=jvj+263; 
(*f[58])( );     /*TRI3(jvj+261,jvj+262,103,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+264; pile[WZ4]=jvj+263; pile[WZ5]=jvj+256; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+264,jvj+263,jvj+256)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+265; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+265)*/
pile[WZ3]=52; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+269)*/
pile[WZ3]=63; pile[WZ4]=jvj+272; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+272)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V190; pile[WZ4]=jvj+276; 
(*f[192])( );     /*QUADRI4(100,41,130,V190,jvj+276)*/
pile[WZ3]=V183; pile[WZ4]=jvj+274; 
(*f[192])( );     /*QUADRI4(100,41,130,V183,jvj+274)*/
pile[v[22]]=jvj+272; pile[WZ1]=111; pile[WZ2]=jvj+273; 
(*f[54])( );     /*TRI1(jvj+272,111,jvj+273)*/
pile[v[22]]=jvj+273; pile[WZ1]=jvj+274; pile[WZ2]=103; pile[WZ3]=jvj+275; 
(*f[58])( );     /*TRI3(jvj+273,jvj+274,103,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+276; pile[WZ4]=jvj+275; pile[WZ5]=jvj+271; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+276,jvj+275,jvj+271)*/
pile[v[22]]=jvj+269; pile[WZ1]=111; pile[WZ2]=jvj+270; 
(*f[54])( );     /*TRI1(jvj+269,111,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+271; pile[WZ4]=jvj+270; pile[WZ5]=jvj+267; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+271,jvj+270,jvj+267)*/
pile[v[22]]=jvj+265; pile[WZ1]=111; pile[WZ2]=jvj+266; 
(*f[54])( );     /*TRI1(jvj+265,111,jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=jvj+267; pile[WZ2]=103; pile[WZ3]=jvj+268; 
(*f[58])( );     /*TRI3(jvj+266,jvj+267,103,jvj+268)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+268; pile[WZ5]=jvj+257; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+268,jvj+257)*/
pile[WZ2]=111; pile[WZ3]=jvj+255; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+255,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=107; pile[WZ2]=jvj+256; 
(*f[36])( );     /*PLUSC0(jvj+189,107,jvj+256)*/
pile[WZ2]=jvj+257; 
(*f[36])( );     /*PLUSC0(jvj+189,107,jvj+257)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+190; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+190)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+188; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+188,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+189; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+189)*/
pile[WZ2]=jvj+190; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+190)*/
l121:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+346]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+346];
if((x[jvj+1]==x[jvj+169])) goto l3;
if((x[jvj+1]==x[jvj+178])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==649)) goto l3;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
l3:x[jvj+346]=t[x[jvj+346]];
l1:if((x[jvj+346]>0)) goto l2;
x[jvj+7]=0 ;z[jvj+7]=0;
l5:if((x[jvj+4]>0)) goto l6;
x[jvj+381]=x[jvj+181] ;z[jvj+381]=z[jvj+181];
l115:if((x[jvj+381]<=0)) goto l114;
x[jvj+371]=s[x[jvj+381]] ;z[jvj+371]=(x[jvj+371]<=sepcte) ? x[jvj+371] : z[jvj+381];
x[jvj+182]=x[jvj+371] ;z[jvj+182]=z[jvj+371];
pile[v[22]]=100; pile[WZ1]=jvj+182; pile[WZ2]=jvj+183; 
(*f[32])( );if(v[102]) goto l116;     /*FNDO0(100,jvj+182,jvj+183)*/
if((x[jvj+183]!=41)) goto l116;
pile[v[22]]=jvj+182; pile[WZ1]=jvj+184; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+182,jvj+184)*/
x[jvj+372]=x[jvj+181] ;z[jvj+372]=z[jvj+181];
l117:if((x[jvj+372]<=0)) goto l116;
x[jvj+186]=s[x[jvj+372]] ;z[jvj+186]=(x[jvj+186]<=sepcte) ? x[jvj+186] : z[jvj+372];
if((x[jvj+371]==x[jvj+186])) goto l118;
pile[v[22]]=jvj+185; pile[WZ1]=jvj+186; pile[WZ2]=jvj+187; 
(*f[760])( );     /*MEMEX0(jvj+185,jvj+186,jvj+187)*/
if((x[jvj+187]==135)) goto l119;
l118:x[jvj+372]=t[x[jvj+372]];
goto l117;
l6:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
l8:x[jvj+8]=s[x[jvj+147]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+147];
if((x[jvj+8]==x[jvj+366])) goto l9;
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==649)) goto l9;
l10:pile[v[22]]=jvj+11; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+8)*/
l9:x[jvj+147]=t[x[jvj+147]];
l7:if((x[jvj+147]>0)) goto l8;
pile[v[22]]=jvj+150; pile[WZ1]=jvj+151; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+150,jvj+151)*/
x[jvj+14]=0 ;z[jvj+14]=0;
l11:if((x[jvj+11]>0)) goto l12;
x[MMMT]=16567 ;z[MMMT]=16567;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+223; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+223)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+227; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+227)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+309; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+309)*/
pile[WZ3]=486; pile[WZ4]=jvj+311; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+311)*/
pile[WZ3]=52; pile[WZ4]=jvj+313; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+313)*/
pile[v[22]]=jvj+313; pile[WZ1]=111; pile[WZ2]=jvj+314; 
(*f[54])( );     /*TRI1(jvj+313,111,jvj+314)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+151; pile[WZ4]=jvj+314; pile[WZ5]=jvj+312; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+151,jvj+314,jvj+312)*/
pile[WZ2]=111; pile[WZ3]=jvj+311; pile[WZ4]=jvj+310; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+311,jvj+310)*/
pile[v[22]]=jvj+310; pile[WZ1]=107; pile[WZ2]=jvj+312; 
(*f[36])( );     /*PLUSC0(jvj+310,107,jvj+312)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+310; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+14,jvj+310,107)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+309; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+309,jvj+225)*/
pile[v[22]]=jvj+225; pile[WZ1]=107; pile[WZ2]=jvj+149; 
(*f[36])( );     /*PLUSC0(jvj+225,107,jvj+149)*/
pile[WZ2]=jvj+310; 
(*f[36])( );     /*PLUSC0(jvj+225,107,jvj+310)*/
pile[v[22]]=jvj+223; pile[WZ1]=111; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+223,111,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=jvj+225; pile[WZ2]=103; pile[WZ3]=jvj+226; 
(*f[58])( );     /*TRI3(jvj+224,jvj+225,103,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+227; pile[WZ4]=jvj+226; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+227,jvj+226,MMMX)*/
goto l121;
l12:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+12,jvj+13)*/
pile[v[22]]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+13)*/
x[jvj+11]=t[x[jvj+11]];
goto l11;
l14:x[jvj+15]=s[x[jvj+127]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+127];
if((x[jvj+15]==x[jvj+365])) goto l15;
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==649)) goto l15;
l16:pile[v[22]]=jvj+18; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+15)*/
l15:x[jvj+127]=t[x[jvj+127]];
l13:if((x[jvj+127]>0)) goto l14;
pile[v[22]]=jvj+131; pile[WZ1]=jvj+132; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+131,jvj+132)*/
x[jvj+21]=0 ;z[jvj+21]=0;
l17:if((x[jvj+18]>0)) goto l18;
x[MMMT]=16803 ;z[MMMT]=16803;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+214)*/
pile[WZ3]=485; pile[WZ4]=jvj+301; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+301)*/
pile[WZ3]=486; pile[WZ4]=jvj+303; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+303)*/
pile[WZ3]=52; pile[WZ4]=jvj+305; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+305)*/
pile[v[22]]=jvj+305; pile[WZ1]=111; pile[WZ2]=jvj+306; 
(*f[54])( );     /*TRI1(jvj+305,111,jvj+306)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+132; pile[WZ4]=jvj+306; pile[WZ5]=jvj+304; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+132,jvj+306,jvj+304)*/
pile[WZ2]=111; pile[WZ3]=jvj+303; pile[WZ4]=jvj+302; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+303,jvj+302)*/
pile[v[22]]=jvj+302; pile[WZ1]=107; pile[WZ2]=jvj+304; 
(*f[36])( );     /*PLUSC0(jvj+302,107,jvj+304)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+302; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+21,jvj+302,107)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+301; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+301,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=107; pile[WZ2]=jvj+130; 
(*f[36])( );     /*PLUSC0(jvj+218,107,jvj+130)*/
pile[WZ2]=jvj+302; 
(*f[36])( );     /*PLUSC0(jvj+218,107,jvj+302)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+216; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+216)*/
pile[v[22]]=jvj+214; pile[WZ1]=111; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,111,jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ1]=jvj+216; pile[WZ2]=103; pile[WZ3]=jvj+217; 
(*f[58])( );     /*TRI3(jvj+215,jvj+216,103,jvj+217)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+218; pile[WZ4]=jvj+217; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+218,jvj+217,MMMX)*/
goto l121;
l18:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+20)*/
x[jvj+18]=t[x[jvj+18]];
goto l17;
l20:x[jvj+347]=t[x[jvj+347]];
l19:if((x[jvj+347]<=0)) goto l104;
x[jvj+22]=s[x[jvj+347]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+347];
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+22,V174)*/
V174=pile[WZ2]; 
if((V174>=0)) goto l20;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+155; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+22,jvj+155)*/
x[jvj+23]=0 ;z[jvj+23]=0;
l21:if((x[jvj+348]>0)) goto l22;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+156; 
(*f[1965])( );     /*COPELFAIT0(jvj+23,jvj+156)*/
x[MMMT]=16805 ;z[MMMT]=16805;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+228; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+228)*/
pile[WZ3]=485; pile[WZ4]=jvj+315; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+315)*/
pile[WZ3]=52; pile[WZ4]=jvj+317; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+317)*/
pile[v[22]]=jvj+317; pile[WZ1]=111; pile[WZ2]=jvj+318; 
(*f[54])( );     /*TRI1(jvj+317,111,jvj+318)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+155; pile[WZ4]=jvj+318; pile[WZ5]=jvj+316; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+155,jvj+318,jvj+316)*/
pile[WZ2]=111; pile[WZ3]=jvj+315; pile[WZ4]=jvj+232; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+315,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=107; pile[WZ2]=jvj+316; 
(*f[36])( );     /*PLUSC0(jvj+232,107,jvj+316)*/
pile[WZ2]=jvj+154; 
(*f[36])( );     /*PLUSC0(jvj+232,107,jvj+154)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+319; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+319)*/
pile[v[22]]=jvj+319; pile[WZ1]=111; pile[WZ2]=jvj+320; 
(*f[54])( );     /*TRI1(jvj+319,111,jvj+320)*/
pile[v[22]]=jvj+320; pile[WZ1]=jvj+156; pile[WZ2]=107; pile[WZ3]=jvj+321; 
(*f[301])( );     /*TRI11(jvj+320,jvj+156,107,jvj+321)*/
pile[v[22]]=jvj+321; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+230; 
(*f[58])( );     /*TRI3(jvj+321,22,100,jvj+230)*/
pile[v[22]]=jvj+228; pile[WZ1]=111; pile[WZ2]=jvj+229; 
(*f[54])( );     /*TRI1(jvj+228,111,jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=jvj+230; pile[WZ2]=103; pile[WZ3]=jvj+231; 
(*f[58])( );     /*TRI3(jvj+229,jvj+230,103,jvj+231)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+232; pile[WZ4]=jvj+231; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+232,jvj+231,MMMX)*/
goto l121;
l22:x[jvj+24]=s[x[jvj+348]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+348];
if((x[jvj+24]==x[jvj+22])) goto l23;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+24)*/
l23:x[jvj+348]=t[x[jvj+348]];
goto l21;
l24:if((x[jvj+157]<=0)) goto l105;
x[jvj+25]=s[x[jvj+157]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+157];
x[jvj+349]=x[jvj+153] ;z[jvj+349]=z[jvj+153];
l25:if((x[jvj+349]<=0)) goto l105;
x[jvj+26]=s[x[jvj+349]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+349];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[760])( );     /*MEMEX0(jvj+25,jvj+26,jvj+27)*/
if((x[jvj+27]==135)) goto l26;
x[jvj+349]=t[x[jvj+349]];
goto l25;
l26:x[jvj+28]=0 ;z[jvj+28]=0;
l27:if((x[jvj+157]>0)) goto l28;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+162; 
(*f[1965])( );     /*COPELFAIT0(jvj+28,jvj+162)*/
x[jvj+30]=0 ;z[jvj+30]=0;
l30:if((x[jvj+153]>0)) goto l31;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+163; 
(*f[1965])( );     /*COPELFAIT0(jvj+30,jvj+163)*/
x[MMMT]=16738 ;z[MMMT]=16738;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+243; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+243)*/
pile[WZ3]=485; pile[WZ4]=jvj+330; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+330)*/
pile[v[22]]=jvj+330; pile[WZ1]=111; pile[WZ2]=jvj+331; 
(*f[54])( );     /*TRI1(jvj+330,111,jvj+331)*/
pile[v[22]]=jvj+331; pile[WZ1]=jvj+162; pile[WZ2]=107; pile[WZ3]=jvj+332; 
(*f[301])( );     /*TRI11(jvj+331,jvj+162,107,jvj+332)*/
pile[v[22]]=jvj+332; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+247; 
(*f[58])( );     /*TRI3(jvj+332,22,100,jvj+247)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+333; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+333)*/
pile[v[22]]=jvj+333; pile[WZ1]=111; pile[WZ2]=jvj+334; 
(*f[54])( );     /*TRI1(jvj+333,111,jvj+334)*/
pile[v[22]]=jvj+334; pile[WZ1]=jvj+163; pile[WZ2]=107; pile[WZ3]=jvj+335; 
(*f[301])( );     /*TRI11(jvj+334,jvj+163,107,jvj+335)*/
pile[v[22]]=jvj+335; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+245; 
(*f[58])( );     /*TRI3(jvj+335,22,100,jvj+245)*/
pile[v[22]]=jvj+243; pile[WZ1]=111; pile[WZ2]=jvj+244; 
(*f[54])( );     /*TRI1(jvj+243,111,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=jvj+245; pile[WZ2]=103; pile[WZ3]=jvj+246; 
(*f[58])( );     /*TRI3(jvj+244,jvj+245,103,jvj+246)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+247; pile[WZ4]=jvj+246; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+247,jvj+246,MMMX)*/
goto l121;
l28:x[jvj+29]=s[x[jvj+157]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+157];
if((x[jvj+29]==x[jvj+25])) goto l29;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+29)*/
l29:x[jvj+157]=t[x[jvj+157]];
goto l27;
l31:x[jvj+31]=s[x[jvj+153]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+153];
if((x[jvj+31]==x[jvj+26])) goto l32;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+30,jvj+31)*/
l32:x[jvj+153]=t[x[jvj+153]];
goto l30;
l34:x[jvj+350]=t[x[jvj+350]];
l33:if((x[jvj+350]<=0)) goto l106;
x[jvj+32]=s[x[jvj+350]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+350];
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+32,V240)*/
V240=pile[WZ2]; 
if((V240>=0)) goto l34;
x[jvj+33]=0 ;z[jvj+33]=0;
l35:if((x[jvj+164]>0)) goto l36;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+166; 
(*f[1965])( );     /*COPELFAIT0(jvj+33,jvj+166)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+167; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+32,jvj+167)*/
x[MMMT]=16804 ;z[MMMT]=16804;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+248; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+248)*/
pile[WZ3]=485; pile[WZ4]=jvj+336; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+336)*/
pile[v[22]]=jvj+336; pile[WZ1]=111; pile[WZ2]=jvj+337; 
(*f[54])( );     /*TRI1(jvj+336,111,jvj+337)*/
pile[v[22]]=jvj+337; pile[WZ1]=jvj+166; pile[WZ2]=107; pile[WZ3]=jvj+338; 
(*f[301])( );     /*TRI11(jvj+337,jvj+166,107,jvj+338)*/
pile[v[22]]=jvj+338; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+252; 
(*f[58])( );     /*TRI3(jvj+338,22,100,jvj+252)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+339; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+339)*/
pile[WZ3]=52; pile[WZ4]=jvj+341; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+341)*/
pile[v[22]]=jvj+341; pile[WZ1]=111; pile[WZ2]=jvj+342; 
(*f[54])( );     /*TRI1(jvj+341,111,jvj+342)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+167; pile[WZ4]=jvj+342; pile[WZ5]=jvj+340; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+167,jvj+342,jvj+340)*/
pile[WZ2]=111; pile[WZ3]=jvj+339; pile[WZ4]=jvj+250; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+339,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=107; pile[WZ2]=jvj+165; 
(*f[36])( );     /*PLUSC0(jvj+250,107,jvj+165)*/
pile[WZ2]=jvj+340; 
(*f[36])( );     /*PLUSC0(jvj+250,107,jvj+340)*/
pile[v[22]]=jvj+248; pile[WZ1]=111; pile[WZ2]=jvj+249; 
(*f[54])( );     /*TRI1(jvj+248,111,jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=jvj+250; pile[WZ2]=103; pile[WZ3]=jvj+251; 
(*f[58])( );     /*TRI3(jvj+249,jvj+250,103,jvj+251)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+252; pile[WZ4]=jvj+251; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+252,jvj+251,MMMX)*/
goto l121;
l36:x[jvj+34]=s[x[jvj+164]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+164];
if((x[jvj+34]==x[jvj+32])) goto l37;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+34)*/
l37:x[jvj+164]=t[x[jvj+164]];
goto l35;
l39:x[jvj+35]=s[x[jvj+351]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+351];
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=52)) goto l40;
pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+35,jvj+38)*/
x[jvj+39]=0 ;z[jvj+39]=0;
l41:if((x[jvj+352]>0)) goto l42;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+158; 
(*f[1965])( );     /*COPELFAIT0(jvj+39,jvj+158)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+159; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+38,jvj+159)*/
x[MMMT]=16707 ;z[MMMT]=16707;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+233)*/
pile[WZ3]=485; pile[WZ4]=jvj+322; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+322)*/
pile[v[22]]=jvj+322; pile[WZ1]=111; pile[WZ2]=jvj+323; 
(*f[54])( );     /*TRI1(jvj+322,111,jvj+323)*/
pile[v[22]]=jvj+323; pile[WZ1]=jvj+158; pile[WZ2]=107; pile[WZ3]=jvj+324; 
(*f[301])( );     /*TRI11(jvj+323,jvj+158,107,jvj+324)*/
pile[v[22]]=jvj+324; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+237; 
(*f[58])( );     /*TRI3(jvj+324,22,100,jvj+237)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+325; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+325)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+325; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+325,jvj+235)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+235; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+43,jvj+235,107)*/
pile[v[22]]=jvj+235; pile[WZ1]=107; pile[WZ2]=jvj+159; 
(*f[36])( );     /*PLUSC0(jvj+235,107,jvj+159)*/
pile[v[22]]=jvj+233; pile[WZ1]=111; pile[WZ2]=jvj+234; 
(*f[54])( );     /*TRI1(jvj+233,111,jvj+234)*/
pile[v[22]]=jvj+234; pile[WZ1]=jvj+235; pile[WZ2]=103; pile[WZ3]=jvj+236; 
(*f[58])( );     /*TRI3(jvj+234,jvj+235,103,jvj+236)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+237; pile[WZ4]=jvj+236; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+237,jvj+236,MMMX)*/
goto l121;
l40:x[jvj+351]=t[x[jvj+351]];
l38:if((x[jvj+351]>0)) goto l39;
x[jvj+354]=x[jvj+153] ;z[jvj+354]=z[jvj+153];
l46:if((x[jvj+354]>0)) goto l47;
for(i=x[jvj+157],V216=0;i>0;i=t[i],V216++)  ;
if((V216>1)) goto l24;
for(i=x[jvj+153],V217=0;i>0;i=t[i],V217++)  ;
if((V217>1)) goto l24;
l105:pile[v[22]]=jvj+144; pile[WZ1]=jvj+164; 
(*f[1964])( );     /*SETERM0(jvj+144,jvj+164)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+165; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+98,jvj+165)*/
x[jvj+350]=x[jvj+164] ;z[jvj+350]=z[jvj+164];
goto l33;
l42:x[jvj+40]=s[x[jvj+352]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+352];
if((x[jvj+40]==x[jvj+35])) goto l43;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+39,jvj+40)*/
l43:x[jvj+352]=t[x[jvj+352]];
goto l41;
l45:x[jvj+41]=s[x[jvj+353]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+353];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+41,jvj+42)*/
pile[v[22]]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+43,jvj+42)*/
x[jvj+353]=t[x[jvj+353]];
l44:if((x[jvj+353]>0)) goto l45;
x[jvj+352]=x[jvj+157] ;z[jvj+352]=z[jvj+157];
x[jvj+351]=x[jvj+352] ;z[jvj+351]=z[jvj+352];
goto l38;
l47:x[jvj+44]=s[x[jvj+354]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+354];
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=52)) goto l48;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+44,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+160; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+47,jvj+160)*/
x[jvj+51]=0 ;z[jvj+51]=0;
l51:if((x[jvj+153]>0)) goto l52;
pile[v[22]]=jvj+51; pile[WZ1]=jvj+161; 
(*f[1965])( );     /*COPELFAIT0(jvj+51,jvj+161)*/
x[jvj+50]=0 ;z[jvj+50]=0;
l49:if((x[jvj+157]>0)) goto l50;
x[MMMT]=16708 ;z[MMMT]=16708;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+238)*/
pile[WZ3]=485; pile[WZ4]=jvj+326; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+326)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+326; pile[WZ4]=jvj+242; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+326,jvj+242)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+242; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+50,jvj+242,107)*/
pile[v[22]]=jvj+242; pile[WZ1]=107; pile[WZ2]=jvj+160; 
(*f[36])( );     /*PLUSC0(jvj+242,107,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+327; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+327)*/
pile[v[22]]=jvj+327; pile[WZ1]=111; pile[WZ2]=jvj+328; 
(*f[54])( );     /*TRI1(jvj+327,111,jvj+328)*/
pile[v[22]]=jvj+328; pile[WZ1]=jvj+161; pile[WZ2]=107; pile[WZ3]=jvj+329; 
(*f[301])( );     /*TRI11(jvj+328,jvj+161,107,jvj+329)*/
pile[v[22]]=jvj+329; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+240; 
(*f[58])( );     /*TRI3(jvj+329,22,100,jvj+240)*/
pile[v[22]]=jvj+238; pile[WZ1]=111; pile[WZ2]=jvj+239; 
(*f[54])( );     /*TRI1(jvj+238,111,jvj+239)*/
pile[v[22]]=jvj+239; pile[WZ1]=jvj+240; pile[WZ2]=103; pile[WZ3]=jvj+241; 
(*f[58])( );     /*TRI3(jvj+239,jvj+240,103,jvj+241)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+242; pile[WZ4]=jvj+241; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+242,jvj+241,MMMX)*/
goto l121;
l48:x[jvj+354]=t[x[jvj+354]];
goto l46;
l50:x[jvj+48]=s[x[jvj+157]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+157];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+48,jvj+49)*/
pile[v[22]]=jvj+50; 
(*f[68])( );     /*PLUE0(jvj+50,jvj+49)*/
x[jvj+157]=t[x[jvj+157]];
goto l49;
l52:x[jvj+52]=s[x[jvj+153]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+153];
if((x[jvj+52]==x[jvj+44])) goto l53;
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[68])( );     /*PLUE0(jvj+51,jvj+52)*/
l53:x[jvj+153]=t[x[jvj+153]];
goto l51;
l55:x[jvj+53]=s[x[jvj+355]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+355];
if((x[jvj+53]==x[jvj+363])) goto l56;
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]==649)) goto l56;
l57:pile[v[22]]=jvj+56; pile[WZ1]=jvj+53; 
(*f[68])( );     /*PLUE0(jvj+56,jvj+53)*/
l56:x[jvj+355]=t[x[jvj+355]];
l54:if((x[jvj+355]>0)) goto l55;
x[jvj+63]=0 ;z[jvj+63]=0;
l62:if((x[jvj+56]>0)) goto l63;
x[jvj+377]=x[jvj+101] ;z[jvj+377]=z[jvj+101];
l85:if((x[jvj+377]>0)) goto l86;
x[jvj+376]=t[x[jvj+376]];
l84:if((x[jvj+376]<=0)) goto l88;
x[jvj+363]=s[x[jvj+376]] ;z[jvj+363]=(x[jvj+363]<=sepcte) ? x[jvj+363] : z[jvj+376];
x[jvj+115]=x[jvj+363] ;z[jvj+115]=z[jvj+363];
x[jvj+56]=0 ;z[jvj+56]=0;
x[jvj+355]=x[jvj+114] ;z[jvj+355]=z[jvj+114];
goto l54;
l59:x[jvj+57]=s[x[jvj+356]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+356];
if((x[jvj+57]==x[jvj+364])) goto l60;
pile[v[22]]=111; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+57,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]==649)) goto l60;
l61:pile[v[22]]=jvj+60; pile[WZ1]=jvj+57; 
(*f[68])( );     /*PLUE0(jvj+60,jvj+57)*/
l60:x[jvj+356]=t[x[jvj+356]];
l58:if((x[jvj+356]>0)) goto l59;
x[jvj+66]=0 ;z[jvj+66]=0;
l64:if((x[jvj+60]>0)) goto l65;
pile[v[22]]=jvj+115; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[760])( );     /*MEMEX0(jvj+115,jvj+116,jvj+117)*/
if((x[jvj+117]==135)) goto l87;
x[jvj+377]=t[x[jvj+377]];
goto l85;
l63:x[jvj+61]=s[x[jvj+56]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+56];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+61,jvj+62)*/
pile[v[22]]=jvj+63; 
(*f[68])( );     /*PLUE0(jvj+63,jvj+62)*/
x[jvj+56]=t[x[jvj+56]];
goto l62;
l65:x[jvj+64]=s[x[jvj+60]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+60];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+64,jvj+65)*/
pile[v[22]]=jvj+66; 
(*f[68])( );     /*PLUE0(jvj+66,jvj+65)*/
x[jvj+60]=t[x[jvj+60]];
goto l64;
l66:pile[v[22]]=111; pile[WZ1]=MMMI; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(111,MMMI,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]!=30)) goto l76;
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(103,MMMI,jvj+76)*/
pile[v[22]]=111; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(111,jvj+76,jvj+77)*/
pile[v[22]]=101; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(101,jvj+77,jvj+78)*/
if((x[jvj+78]!=486)) goto l71;
pile[v[22]]=107; pile[WZ1]=jvj+76; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(107,jvj+76,jvj+79)*/
for(i=x[jvj+79],V266=0;i>0;i=t[i],V266++)  ;
if((V266!=2)) goto l71;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(102,MMMI,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(100,jvj+80,jvj+81)*/
if((x[jvj+81]!=41)) goto l71;
pile[v[22]]=jvj+80; pile[WZ1]=jvj+82; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+80,jvj+82)*/
x[jvj+373]=x[jvj+79] ;z[jvj+373]=z[jvj+79];
l67:if((x[jvj+373]<=0)) goto l71;
x[jvj+357]=s[x[jvj+373]] ;z[jvj+357]=(x[jvj+357]<=sepcte) ? x[jvj+357] : z[jvj+373];
x[jvj+83]=x[jvj+357] ;z[jvj+83]=z[jvj+357];
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(130,jvj+83,V258)*/
V258=pile[WZ2]; 
if((V258>=0)) goto l68;
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+83,jvj+84)*/
x[jvj+358]=x[jvj+79] ;z[jvj+358]=z[jvj+79];
l69:if((x[jvj+358]<=0)) goto l68;
x[jvj+85]=s[x[jvj+358]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+358];
if((x[jvj+357]!=x[jvj+85])) goto l70;
x[jvj+358]=t[x[jvj+358]];
goto l69;
l68:x[jvj+373]=t[x[jvj+373]];
goto l67;
l70:pile[v[22]]=jvj+85; pile[WZ1]=jvj+86; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+85,jvj+86)*/
x[MMMT]=16505 ;z[MMMT]=16505;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+191; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+191)*/
pile[WZ3]=486; pile[WZ4]=jvj+277; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+277)*/
pile[WZ3]=52; pile[WZ4]=jvj+279; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+279)*/
pile[v[22]]=jvj+279; pile[WZ1]=111; pile[WZ2]=jvj+280; 
(*f[54])( );     /*TRI1(jvj+279,111,jvj+280)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+280; pile[WZ5]=jvj+278; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+280,jvj+278)*/
pile[WZ2]=111; pile[WZ3]=jvj+277; pile[WZ4]=jvj+195; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+277,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=107; pile[WZ2]=jvj+278; 
(*f[36])( );     /*PLUSC0(jvj+195,107,jvj+278)*/
pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+195,107,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+281; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+281)*/
pile[v[22]]=jvj+281; pile[WZ1]=111; pile[WZ2]=jvj+282; 
(*f[54])( );     /*TRI1(jvj+281,111,jvj+282)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+282; pile[WZ5]=jvj+193; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+82,jvj+282,jvj+193)*/
pile[v[22]]=jvj+191; pile[WZ1]=111; pile[WZ2]=jvj+192; 
(*f[54])( );     /*TRI1(jvj+191,111,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=jvj+193; pile[WZ2]=103; pile[WZ3]=jvj+194; 
(*f[58])( );     /*TRI3(jvj+192,jvj+193,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+195,jvj+194,MMMX)*/
goto l121;
l71:pile[v[22]]=100; pile[WZ1]=jvj+76; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(100,jvj+76,jvj+87)*/
if((x[jvj+87]!=41)) goto l76;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(102,MMMI,jvj+88)*/
pile[v[22]]=111; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(111,jvj+88,jvj+89)*/
pile[v[22]]=101; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(101,jvj+89,jvj+90)*/
if((x[jvj+90]!=486)) goto l76;
pile[v[22]]=107; pile[WZ1]=jvj+88; pile[WZ2]=jvj+91; 
(*f[33])( );     /*FNDE0(107,jvj+88,jvj+91)*/
for(i=x[jvj+91],V295=0;i>0;i=t[i],V295++)  ;
if((V295!=2)) goto l76;
pile[v[22]]=jvj+76; pile[WZ1]=jvj+92; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+76,jvj+92)*/
x[jvj+374]=x[jvj+91] ;z[jvj+374]=z[jvj+91];
l72:if((x[jvj+374]<=0)) goto l76;
x[jvj+359]=s[x[jvj+374]] ;z[jvj+359]=(x[jvj+359]<=sepcte) ? x[jvj+359] : z[jvj+374];
x[jvj+93]=x[jvj+359] ;z[jvj+93]=z[jvj+359];
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(130,jvj+93,V287)*/
V287=pile[WZ2]; 
if((V287>=0)) goto l73;
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+93,jvj+94)*/
x[jvj+360]=x[jvj+91] ;z[jvj+360]=z[jvj+91];
l74:if((x[jvj+360]<=0)) goto l73;
x[jvj+95]=s[x[jvj+360]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+360];
if((x[jvj+359]!=x[jvj+95])) goto l75;
x[jvj+360]=t[x[jvj+360]];
goto l74;
l73:x[jvj+374]=t[x[jvj+374]];
goto l72;
l75:pile[v[22]]=jvj+95; pile[WZ1]=jvj+96; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+95,jvj+96)*/
x[MMMT]=16794 ;z[MMMT]=16794;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+196)*/
pile[WZ3]=52; pile[WZ4]=jvj+283; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+283)*/
pile[v[22]]=jvj+283; pile[WZ1]=111; pile[WZ2]=jvj+284; 
(*f[54])( );     /*TRI1(jvj+283,111,jvj+284)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+92; pile[WZ4]=jvj+284; pile[WZ5]=jvj+200; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+92,jvj+284,jvj+200)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+285; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+285)*/
pile[WZ3]=52; pile[WZ4]=jvj+287; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+287)*/
pile[v[22]]=jvj+287; pile[WZ1]=111; pile[WZ2]=jvj+288; 
(*f[54])( );     /*TRI1(jvj+287,111,jvj+288)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+288; pile[WZ5]=jvj+286; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+288,jvj+286)*/
pile[WZ2]=111; pile[WZ3]=jvj+285; pile[WZ4]=jvj+198; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+285,jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=107; pile[WZ2]=jvj+286; 
(*f[36])( );     /*PLUSC0(jvj+198,107,jvj+286)*/
pile[WZ2]=jvj+96; 
(*f[36])( );     /*PLUSC0(jvj+198,107,jvj+96)*/
pile[v[22]]=jvj+196; pile[WZ1]=111; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,111,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=jvj+198; pile[WZ2]=103; pile[WZ3]=jvj+199; 
(*f[58])( );     /*TRI3(jvj+197,jvj+198,103,jvj+199)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+200; pile[WZ4]=jvj+199; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+200,jvj+199,MMMX)*/
goto l121;
l76:pile[v[22]]=100; pile[WZ1]=MMMI; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(100,MMMI,jvj+97)*/
if((x[jvj+97]!=22)) goto l106;
pile[v[22]]=103; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(103,MMMI,jvj+98)*/
pile[v[22]]=111; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l95;     /*FNDO0(111,jvj+98,jvj+99)*/
pile[v[22]]=101; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l95;     /*FNDO0(101,jvj+99,jvj+100)*/
if((x[jvj+100]!=485)) goto l88;
pile[v[22]]=107; pile[WZ1]=jvj+98; pile[WZ2]=jvj+101; 
(*f[33])( );     /*FNDE0(107,jvj+98,jvj+101)*/
for(i=x[jvj+101],V72=0;i>0;i=t[i],V72++)  ;
if((V72!=2)) goto l82;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(102,MMMI,jvj+102)*/
pile[v[22]]=130; pile[WZ1]=jvj+102; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+102,V62)*/
V62=pile[WZ2]; 
if((V62==0)) goto l82;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(1564,145,jvj+103)*/
for(a=x[jvj+103];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l77;
l82:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(102,MMMI,jvj+110)*/
pile[v[22]]=111; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(111,jvj+110,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]!=485)) goto l88;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+113; 
(*f[33])( );     /*FNDE0(1564,145,jvj+113)*/
for(a=x[jvj+113];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l83;
l88:pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(100,jvj+98,jvj+118)*/
if((x[jvj+118]!=22)) goto l91;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(102,MMMI,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(100,jvj+119,jvj+120)*/
if((x[jvj+120]!=41)) goto l91;
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+121; 
(*f[33])( );     /*FNDE0(1564,145,jvj+121)*/
for(a=x[jvj+121];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l89;
l91:if((x[jvj+100]!=486)) goto l95;
pile[v[22]]=107; pile[WZ1]=jvj+98; pile[WZ2]=jvj+127; 
(*f[33])( );     /*FNDE0(107,jvj+98,jvj+127)*/
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+128; 
(*f[33])( );     /*FNDE0(1564,145,jvj+128)*/
for(a=x[jvj+128];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l92;
l95:pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(100,jvj+98,jvj+133)*/
if((x[jvj+133]!=41)) goto l98;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(102,MMMI,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(100,jvj+134,jvj+135)*/
if((x[jvj+135]!=22)) goto l98;
pile[v[22]]=111; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(111,jvj+134,jvj+136)*/
pile[v[22]]=101; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(101,jvj+136,jvj+137)*/
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+138; 
(*f[33])( );     /*FNDE0(1564,145,jvj+138)*/
for(a=x[jvj+138];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l96;
l98:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(102,MMMI,jvj+144)*/
pile[v[22]]=111; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(111,jvj+144,jvj+145)*/
pile[v[22]]=101; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l102;     /*FNDO0(101,jvj+145,jvj+146)*/
if((x[jvj+146]!=486)) goto l102;
pile[v[22]]=107; pile[WZ1]=jvj+144; pile[WZ2]=jvj+147; 
(*f[33])( );     /*FNDE0(107,jvj+144,jvj+147)*/
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+148; 
(*f[33])( );     /*FNDE0(1564,145,jvj+148)*/
for(a=x[jvj+148];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l99;
l102:pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+152; 
(*f[33])( );     /*FNDE0(1564,145,jvj+152)*/
for(a=x[jvj+152];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l103;
l106:if((x[jvj+75]!=485)) goto l120;
pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+168; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+168)*/
x[jvj+367]=x[jvj+168] ;z[jvj+367]=z[jvj+168];
l107:if((x[jvj+367]<=0)) goto l120;
x[jvj+169]=s[x[jvj+367]] ;z[jvj+169]=(x[jvj+169]<=sepcte) ? x[jvj+169] : z[jvj+367];
pile[v[22]]=111; pile[WZ1]=jvj+169; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(111,jvj+169,jvj+170)*/
pile[v[22]]=101; pile[WZ1]=jvj+170; pile[WZ2]=jvj+171; 
(*f[32])( );if(v[102]) goto l108;     /*FNDO0(101,jvj+170,jvj+171)*/
if((x[jvj+171]!=486)) goto l108;
pile[v[22]]=107; pile[WZ1]=jvj+169; pile[WZ2]=jvj+172; 
(*f[33])( );     /*FNDE0(107,jvj+169,jvj+172)*/
for(i=x[jvj+172],V26=0;i>0;i=t[i],V26++)  ;
if((V26!=2)) goto l108;
x[jvj+380]=x[jvj+172] ;z[jvj+380]=z[jvj+172];
l109:if((x[jvj+380]<=0)) goto l108;
x[jvj+368]=s[x[jvj+380]] ;z[jvj+368]=(x[jvj+368]<=sepcte) ? x[jvj+368] : z[jvj+380];
x[jvj+173]=x[jvj+368] ;z[jvj+173]=z[jvj+368];
pile[v[22]]=100; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(100,jvj+173,jvj+174)*/
if((x[jvj+174]!=41)) goto l110;
pile[v[22]]=jvj+173; pile[WZ1]=jvj+175; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+173,jvj+175)*/
x[jvj+369]=x[jvj+172] ;z[jvj+369]=z[jvj+172];
l111:if((x[jvj+369]<=0)) goto l110;
x[jvj+185]=s[x[jvj+369]] ;z[jvj+185]=(x[jvj+185]<=sepcte) ? x[jvj+185] : z[jvj+369];
if((x[jvj+368]==x[jvj+185])) goto l112;
x[jvj+176]=x[jvj+185] ;z[jvj+176]=z[jvj+185];
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+176,jvj+177)*/
x[jvj+370]=x[jvj+168] ;z[jvj+370]=z[jvj+168];
l113:if((x[jvj+370]<=0)) goto l112;
x[jvj+178]=s[x[jvj+370]] ;z[jvj+178]=(x[jvj+178]<=sepcte) ? x[jvj+178] : z[jvj+370];
if((x[jvj+169]==x[jvj+178])) goto l114;
pile[v[22]]=111; pile[WZ1]=jvj+178; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(111,jvj+178,jvj+179)*/
pile[v[22]]=101; pile[WZ1]=jvj+179; pile[WZ2]=jvj+180; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(101,jvj+179,jvj+180)*/
if((x[jvj+180]!=486)) goto l114;
pile[v[22]]=107; pile[WZ1]=jvj+178; pile[WZ2]=jvj+181; 
(*f[33])( );     /*FNDE0(107,jvj+178,jvj+181)*/
for(i=x[jvj+181],V34=0;i>0;i=t[i],V34++)  ;
if((V34!=2)) goto l114;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+346]=x[jvj+168] ;z[jvj+346]=z[jvj+168];
goto l1;
l77:pile[v[22]]=jvj+102; pile[WZ1]=jvj+104; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+102,jvj+104)*/
x[jvj+375]=x[jvj+101] ;z[jvj+375]=z[jvj+101];
l78:if((x[jvj+375]<=0)) goto l82;
x[jvj+361]=s[x[jvj+375]] ;z[jvj+361]=(x[jvj+361]<=sepcte) ? x[jvj+361] : z[jvj+375];
x[jvj+105]=x[jvj+361] ;z[jvj+105]=z[jvj+361];
pile[v[22]]=100; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+105,jvj+106)*/
if((x[jvj+106]!=41)) goto l79;
pile[v[22]]=jvj+105; pile[WZ1]=jvj+107; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+105,jvj+107)*/
x[jvj+362]=x[jvj+101] ;z[jvj+362]=z[jvj+101];
l80:if((x[jvj+362]<=0)) goto l79;
x[jvj+108]=s[x[jvj+362]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+362];
if((x[jvj+361]!=x[jvj+108])) goto l81;
x[jvj+362]=t[x[jvj+362]];
goto l80;
l79:x[jvj+375]=t[x[jvj+375]];
goto l78;
l81:pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+108,jvj+109)*/
x[MMMT]=16792 ;z[MMMT]=16792;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+201; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+201)*/
pile[WZ3]=485; pile[WZ4]=jvj+289; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+289)*/
pile[WZ3]=52; pile[WZ4]=jvj+291; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+291)*/
pile[v[22]]=jvj+291; pile[WZ1]=111; pile[WZ2]=jvj+292; 
(*f[54])( );     /*TRI1(jvj+291,111,jvj+292)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+292; pile[WZ5]=jvj+290; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+107,jvj+292,jvj+290)*/
pile[WZ2]=111; pile[WZ3]=jvj+289; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+289,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=107; pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+204,107,jvj+104)*/
pile[WZ2]=jvj+290; 
(*f[36])( );     /*PLUSC0(jvj+204,107,jvj+290)*/
pile[v[22]]=jvj+201; pile[WZ1]=111; pile[WZ2]=jvj+202; 
(*f[54])( );     /*TRI1(jvj+201,111,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=jvj+109; pile[WZ2]=103; pile[WZ3]=jvj+203; 
(*f[58])( );     /*TRI3(jvj+202,jvj+109,103,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+204; pile[WZ4]=jvj+203; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+204,jvj+203,MMMX)*/
goto l121;
l83:pile[v[22]]=107; pile[WZ1]=jvj+110; pile[WZ2]=jvj+114; 
(*f[33])( );     /*FNDE0(107,jvj+110,jvj+114)*/
x[jvj+376]=x[jvj+114] ;z[jvj+376]=z[jvj+114];
goto l84;
l86:x[jvj+364]=s[x[jvj+377]] ;z[jvj+364]=(x[jvj+364]<=sepcte) ? x[jvj+364] : z[jvj+377];
x[jvj+116]=x[jvj+364] ;z[jvj+116]=z[jvj+364];
x[jvj+60]=0 ;z[jvj+60]=0;
x[jvj+356]=x[jvj+101] ;z[jvj+356]=z[jvj+101];
goto l58;
l87:x[MMMT]=16728 ;z[MMMT]=16728;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+205; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+205)*/
pile[WZ3]=485; pile[WZ4]=jvj+293; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+293)*/
pile[v[22]]=jvj+293; pile[WZ1]=111; pile[WZ2]=jvj+294; 
(*f[54])( );     /*TRI1(jvj+293,111,jvj+294)*/
pile[v[22]]=jvj+294; pile[WZ1]=jvj+63; pile[WZ2]=107; pile[WZ3]=jvj+295; 
(*f[301])( );     /*TRI11(jvj+294,jvj+63,107,jvj+295)*/
pile[v[22]]=jvj+295; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+209; 
(*f[58])( );     /*TRI3(jvj+295,22,100,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+296; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+296)*/
pile[v[22]]=jvj+296; pile[WZ1]=111; pile[WZ2]=jvj+297; 
(*f[54])( );     /*TRI1(jvj+296,111,jvj+297)*/
pile[v[22]]=jvj+297; pile[WZ1]=jvj+66; pile[WZ2]=107; pile[WZ3]=jvj+298; 
(*f[301])( );     /*TRI11(jvj+297,jvj+66,107,jvj+298)*/
pile[v[22]]=jvj+298; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+298,22,100,jvj+207)*/
pile[v[22]]=jvj+205; pile[WZ1]=111; pile[WZ2]=jvj+206; 
(*f[54])( );     /*TRI1(jvj+205,111,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=jvj+207; pile[WZ2]=103; pile[WZ3]=jvj+208; 
(*f[58])( );     /*TRI3(jvj+206,jvj+207,103,jvj+208)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+209; pile[WZ4]=jvj+208; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+209,jvj+208,MMMX)*/
goto l121;
l89:pile[v[22]]=1921; pile[WZ1]=1714; pile[WZ2]=jvj+122; 
(*f[33])( );     /*FNDE0(1921,1714,jvj+122)*/
for(a=x[jvj+122];a>0;a=t[a]) if(s[a]==x[jvj+100]) goto l90;
goto l91;
l90:pile[v[22]]=268; pile[WZ1]=jvj+100; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(268,jvj+100,jvj+123)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+124; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+119,jvj+124)*/
pile[v[22]]=102; pile[WZ1]=jvj+98; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(102,jvj+98,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+125,jvj+126)*/
x[MMMT]=16737 ;z[MMMT]=16737;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+210; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+210)*/
pile[WZ3]=jvj+123; pile[WZ4]=jvj+299; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+123,jvj+299)*/
pile[v[22]]=jvj+299; pile[WZ1]=111; pile[WZ2]=jvj+300; 
(*f[54])( );     /*TRI1(jvj+299,111,jvj+300)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+124; pile[WZ4]=jvj+300; pile[WZ5]=jvj+213; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+124,jvj+300,jvj+213)*/
pile[v[22]]=jvj+210; pile[WZ1]=111; pile[WZ2]=jvj+211; 
(*f[54])( );     /*TRI1(jvj+210,111,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=jvj+126; pile[WZ2]=103; pile[WZ3]=jvj+212; 
(*f[58])( );     /*TRI3(jvj+211,jvj+126,103,jvj+212)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+213; pile[WZ4]=jvj+212; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+213,jvj+212,MMMX)*/
goto l121;
l92:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l95;     /*FNDO0(102,MMMI,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=jvj+130; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+129,jvj+130)*/
x[jvj+378]=x[jvj+127] ;z[jvj+378]=z[jvj+127];
l93:if((x[jvj+378]<=0)) goto l95;
x[jvj+365]=s[x[jvj+378]] ;z[jvj+365]=(x[jvj+365]<=sepcte) ? x[jvj+365] : z[jvj+378];
x[jvj+131]=x[jvj+365] ;z[jvj+131]=z[jvj+365];
pile[v[22]]=130; pile[WZ1]=jvj+131; 
(*f[26])( );if(v[102]) goto l94;     /*FNDC0(130,jvj+131,V138)*/
V138=pile[WZ2]; 
if((V138>=0)) goto l94;
x[jvj+18]=0 ;z[jvj+18]=0;
goto l13;
l94:x[jvj+378]=t[x[jvj+378]];
goto l93;
l96:pile[v[22]]=1921; pile[WZ1]=1714; pile[WZ2]=jvj+139; 
(*f[33])( );     /*FNDE0(1921,1714,jvj+139)*/
for(a=x[jvj+139];a>0;a=t[a]) if(s[a]==x[jvj+137]) goto l97;
goto l98;
l97:pile[v[22]]=268; pile[WZ1]=jvj+137; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(268,jvj+137,jvj+140)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+141; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+98,jvj+141)*/
pile[v[22]]=102; pile[WZ1]=jvj+134; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(102,jvj+134,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+142,jvj+143)*/
x[MMMT]=16617 ;z[MMMT]=16617;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=jvj+219; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,jvj+219)*/
pile[WZ3]=jvj+140; pile[WZ4]=jvj+307; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+140,jvj+307)*/
pile[v[22]]=jvj+307; pile[WZ1]=111; pile[WZ2]=jvj+308; 
(*f[54])( );     /*TRI1(jvj+307,111,jvj+308)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+141; pile[WZ4]=jvj+308; pile[WZ5]=jvj+221; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+141,jvj+308,jvj+221)*/
pile[v[22]]=jvj+219; pile[WZ1]=111; pile[WZ2]=jvj+220; 
(*f[54])( );     /*TRI1(jvj+219,111,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=jvj+221; pile[WZ2]=103; pile[WZ3]=jvj+222; 
(*f[58])( );     /*TRI3(jvj+220,jvj+221,103,jvj+222)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+222; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+143,jvj+222,MMMX)*/
goto l121;
l99:pile[v[22]]=jvj+98; pile[WZ1]=jvj+149; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+98,jvj+149)*/
x[jvj+379]=x[jvj+147] ;z[jvj+379]=z[jvj+147];
l100:if((x[jvj+379]<=0)) goto l102;
x[jvj+366]=s[x[jvj+379]] ;z[jvj+366]=(x[jvj+366]<=sepcte) ? x[jvj+366] : z[jvj+379];
x[jvj+150]=x[jvj+366] ;z[jvj+150]=z[jvj+366];
pile[v[22]]=130; pile[WZ1]=jvj+150; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(130,jvj+150,V98)*/
V98=pile[WZ2]; 
if((V98>=0)) goto l101;
x[jvj+11]=0 ;z[jvj+11]=0;
goto l7;
l101:x[jvj+379]=t[x[jvj+379]];
goto l100;
l103:pile[v[22]]=jvj+98; pile[WZ1]=jvj+153; 
(*f[1964])( );     /*SETERM0(jvj+98,jvj+153)*/
for(i=x[jvj+153],V176=0;i>0;i=t[i],V176++)  ;
if((V176<=1)) goto l104;
pile[v[22]]=jvj+144; pile[WZ1]=jvj+154; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+144,jvj+154)*/
x[jvj+348]=x[jvj+153] ;z[jvj+348]=z[jvj+153];
x[jvj+347]=x[jvj+348] ;z[jvj+347]=z[jvj+348];
goto l19;
l104:pile[v[22]]=jvj+144; pile[WZ1]=jvj+157; 
(*f[1964])( );     /*SETERM0(jvj+144,jvj+157)*/
x[jvj+43]=0 ;z[jvj+43]=0;
x[jvj+353]=x[jvj+153] ;z[jvj+353]=z[jvj+153];
goto l44;
l108:x[jvj+367]=t[x[jvj+367]];
goto l107;
l110:x[jvj+380]=t[x[jvj+380]];
goto l109;
l112:x[jvj+369]=t[x[jvj+369]];
goto l111;
l114:x[jvj+370]=t[x[jvj+370]];
goto l113;
l116:x[jvj+381]=t[x[jvj+381]];
goto l115;
l119:x[MMMT]=16727 ;z[MMMT]=16727;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+253; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+253)*/
pile[WZ3]=486; pile[WZ4]=jvj+343; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+343)*/
pile[WZ3]=485; pile[WZ4]=jvj+345; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+345)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+345; pile[WZ4]=jvj+344; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+345,jvj+344)*/
pile[v[22]]=jvj+344; pile[WZ1]=107; pile[WZ2]=jvj+175; 
(*f[36])( );     /*PLUSC0(jvj+344,107,jvj+175)*/
pile[WZ2]=jvj+184; 
(*f[36])( );     /*PLUSC0(jvj+344,107,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+343; pile[WZ4]=jvj+254; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+343,jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=107; pile[WZ2]=jvj+344; 
(*f[36])( );     /*PLUSC0(jvj+254,107,jvj+344)*/
pile[WZ2]=jvj+177; 
(*f[36])( );     /*PLUSC0(jvj+254,107,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+253; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+253,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+254; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+254)*/
pile[v[22]]=jvj+7; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+7,MMMX,107)*/
goto l121;
l120:x[MMMT]=x[MMMX]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
}
