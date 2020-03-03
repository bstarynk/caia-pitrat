#include "dx.h"
void Z43Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V134=0,V137=0,V139=0,V136=0,D=0,V355=0,V485=0,V476=0,V475=0,V477=0,V9=0,V516=0,V507=0,V506=0,V508=0,V39=0,V371=0,V370=0,V113=0,V112=0,V259=0,V264=0,V265=0,V262=0,V240=0,V319=0,V320=0;
int MMMI;
int MMMT,MMMX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=414;
if(v[0]>99700) (*f[6])( );

MMMI=pile[v[22]]; MMMT=pile[v[22]+1]; MMMX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=MMMI; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(111,MMMI,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(101,jvj+90,jvj+91)*/
if((x[jvj+91]==625)) goto l68;
if((x[jvj+91]==30)) goto l75;
if((x[jvj+91]==1911)) goto l95;
if((x[jvj+91]==596)) goto l96;
if((x[jvj+91]==25)) goto l97;
if((x[jvj+91]==486)) goto l110;
if((x[jvj+91]==485)) goto l115;
if((x[jvj+91]!=1273)) goto l135;
pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+215; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+215)*/
pile[v[22]]=102; pile[WZ2]=jvj+216; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=jvj+217; 
(*f[1291])( );if(v[102]) goto l132;     /*CONVEXP0(jvj+216,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=jvj+218; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+217,jvj+218)*/
x[jvj+413]=x[jvj+215] ;z[jvj+413]=z[jvj+215];
l130:if((x[jvj+413]<=0)) goto l132;
x[jvj+399]=s[x[jvj+413]] ;z[jvj+399]=(x[jvj+399]<=sepcte) ? x[jvj+399] : z[jvj+413];
x[jvj+219]=x[jvj+399] ;z[jvj+219]=z[jvj+399];
pile[v[22]]=100; pile[WZ1]=jvj+219; pile[WZ2]=jvj+220; 
(*f[32])( );if(v[102]) goto l131;     /*FNDO0(100,jvj+219,jvj+220)*/
if((x[jvj+220]!=484)) goto l131;
pile[v[22]]=jvj+219; pile[WZ1]=jvj+221; 
(*f[200])( );if(v[102]) goto l131;     /*NDD0(jvj+219,jvj+221)*/
pile[v[22]]=202; pile[WZ2]=jvj+222; 
(*f[1948])( );if(v[102]) goto l131;     /*FNDOND0(202,jvj+221,jvj+222)*/
if((x[jvj+222]!=68)) goto l131;
pile[v[22]]=365; pile[WZ2]=jvj+223; 
(*f[1969])( );     /*FNDEND0(365,jvj+221,jvj+223)*/
pile[v[22]]=jvj+216; pile[WZ1]=jvj+223; pile[WZ2]=jvj+224; 
(*f[1029])( );     /*DIFFAPP0(jvj+216,jvj+223,jvj+224)*/
if((x[jvj+224]==135)) goto l61;
l131:x[jvj+413]=t[x[jvj+413]];
goto l130;
l2:x[jvj+1]=s[x[jvj+375]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+375];
if((x[jvj+1]==x[jvj+166])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==649)) goto l3;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
l3:x[jvj+375]=t[x[jvj+375]];
l1:if((x[jvj+375]>0)) goto l2;
x[jvj+7]=0 ;z[jvj+7]=0;
l5:if((x[jvj+4]>0)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+166; pile[WZ2]=jvj+169; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(102,jvj+166,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=jvj+170; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+169,jvj+170)*/
pile[v[22]]=103; pile[WZ1]=jvj+166; pile[WZ2]=jvj+171; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(103,jvj+166,jvj+171)*/
pile[v[22]]=jvj+171; pile[WZ1]=jvj+172; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+171,jvj+172)*/
x[MMMT]=16723 ;z[MMMT]=16723;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+278; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+278)*/
pile[WZ3]=485; pile[WZ4]=jvj+350; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+350)*/
pile[WZ3]=486; pile[WZ4]=jvj+352; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+352)*/
pile[WZ3]=485; pile[WZ4]=jvj+354; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+354)*/
pile[v[22]]=jvj+354; pile[WZ1]=111; pile[WZ2]=jvj+355; 
(*f[54])( );     /*TRI1(jvj+354,111,jvj+355)*/
pile[v[22]]=jvj+355; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+356; 
(*f[301])( );     /*TRI11(jvj+355,jvj+7,107,jvj+356)*/
pile[v[22]]=jvj+356; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+353; 
(*f[58])( );     /*TRI3(jvj+356,22,100,jvj+353)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+352; pile[WZ4]=jvj+351; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+352,jvj+351)*/
pile[v[22]]=jvj+351; pile[WZ1]=107; pile[WZ2]=jvj+172; 
(*f[36])( );     /*PLUSC0(jvj+351,107,jvj+172)*/
pile[WZ2]=jvj+353; 
(*f[36])( );     /*PLUSC0(jvj+351,107,jvj+353)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+350; pile[WZ4]=jvj+282; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+350,jvj+282)*/
pile[v[22]]=jvj+282; pile[WZ1]=107; pile[WZ2]=jvj+351; 
(*f[36])( );     /*PLUSC0(jvj+282,107,jvj+351)*/
pile[WZ2]=jvj+170; 
(*f[36])( );     /*PLUSC0(jvj+282,107,jvj+170)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+357; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+357)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+357; pile[WZ4]=jvj+280; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+357,jvj+280)*/
pile[v[22]]=jvj+280; pile[WZ1]=107; pile[WZ2]=jvj+172; 
(*f[36])( );     /*PLUSC0(jvj+280,107,jvj+172)*/
pile[WZ2]=jvj+165; 
(*f[36])( );     /*PLUSC0(jvj+280,107,jvj+165)*/
pile[v[22]]=jvj+278; pile[WZ1]=111; pile[WZ2]=jvj+279; 
(*f[54])( );     /*TRI1(jvj+278,111,jvj+279)*/
pile[v[22]]=jvj+279; pile[WZ1]=jvj+280; pile[WZ2]=103; pile[WZ3]=jvj+281; 
(*f[58])( );     /*TRI3(jvj+279,jvj+280,103,jvj+281)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+282; pile[WZ4]=jvj+281; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+282,jvj+281,MMMX)*/
l144:v[0]=jvj; v[22]-=3; v[102]=0;return;
l6:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
l8:x[jvj+8]=s[x[jvj+376]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+376];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+9)*/
x[jvj+376]=t[x[jvj+376]];
l7:if((x[jvj+376]>0)) goto l8;
x[jvj+13]=0 ;z[jvj+13]=0;
l9:if((x[jvj+150]>0)) goto l10;
x[MMMT]=16887 ;z[MMMT]=16887;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+275; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+275)*/
pile[WZ3]=485; pile[WZ4]=jvj+339; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+339)*/
pile[v[22]]=jvj+339; pile[WZ1]=111; pile[WZ2]=jvj+340; 
(*f[54])( );     /*TRI1(jvj+339,111,jvj+340)*/
pile[v[22]]=jvj+340; pile[WZ1]=jvj+10; pile[WZ2]=107; pile[WZ3]=jvj+341; 
(*f[301])( );     /*TRI11(jvj+340,jvj+10,107,jvj+341)*/
pile[v[22]]=jvj+341; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+276; 
(*f[58])( );     /*TRI3(jvj+341,22,100,jvj+276)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+342; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+342)*/
pile[WZ3]=485; pile[WZ4]=jvj+347; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+347)*/
pile[v[22]]=jvj+347; pile[WZ1]=111; pile[WZ2]=jvj+348; 
(*f[54])( );     /*TRI1(jvj+347,111,jvj+348)*/
pile[v[22]]=jvj+348; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+349; 
(*f[301])( );     /*TRI11(jvj+348,jvj+13,107,jvj+349)*/
pile[v[22]]=jvj+349; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+346; 
(*f[58])( );     /*TRI3(jvj+349,22,100,jvj+346)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V112; pile[WZ4]=jvj+344; 
(*f[192])( );     /*QUADRI4(100,41,130,V112,jvj+344)*/
pile[v[22]]=jvj+342; pile[WZ1]=111; pile[WZ2]=jvj+343; 
(*f[54])( );     /*TRI1(jvj+342,111,jvj+343)*/
pile[v[22]]=jvj+343; pile[WZ1]=jvj+344; pile[WZ2]=103; pile[WZ3]=jvj+345; 
(*f[58])( );     /*TRI3(jvj+343,jvj+344,103,jvj+345)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+346; pile[WZ4]=jvj+345; pile[WZ5]=jvj+277; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+346,jvj+345,jvj+277)*/
pile[WZ2]=111; pile[WZ3]=jvj+275; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+275,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+276; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+276)*/
pile[WZ2]=jvj+277; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+277)*/
goto l144;
l10:x[jvj+11]=s[x[jvj+150]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+150];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
x[jvj+150]=t[x[jvj+150]];
goto l9;
l12:x[jvj+14]=s[x[jvj+377]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+377];
if((x[jvj+14]==x[jvj+391])) goto l13;
if((x[jvj+14]==x[jvj+392])) goto l13;
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==649)) goto l13;
l14:pile[v[22]]=jvj+17; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+14)*/
l13:x[jvj+377]=t[x[jvj+377]];
l11:if((x[jvj+377]>0)) goto l12;
if((x[jvj+17]==0)) goto l114;
pile[v[22]]=jvj+193; pile[WZ1]=jvj+195; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+193,jvj+195)*/
x[jvj+20]=0 ;z[jvj+20]=0;
l15:if((x[jvj+17]>0)) goto l16;
x[MMMT]=16642 ;z[MMMT]=16642;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+288; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+288)*/
pile[WZ3]=53; pile[WZ4]=jvj+360; 
(*f[181])( );     /*QUADRI2(100,20,101,53,jvj+360)*/
pile[v[22]]=jvj+360; pile[WZ1]=111; pile[WZ2]=jvj+361; 
(*f[54])( );     /*TRI1(jvj+360,111,jvj+361)*/
pile[v[22]]=jvj+361; pile[WZ1]=jvj+195; pile[WZ2]=103; pile[WZ3]=jvj+362; 
(*f[58])( );     /*TRI3(jvj+361,jvj+195,103,jvj+362)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+192; pile[WZ4]=jvj+362; pile[WZ5]=jvj+289; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+192,jvj+362,jvj+289)*/
pile[WZ2]=111; pile[WZ3]=jvj+288; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+288,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+289; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+289)*/
pile[v[22]]=jvj+20; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+20,MMMX,107)*/
goto l144;
l16:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+19)*/
x[jvj+17]=t[x[jvj+17]];
goto l15;
l18:x[jvj+21]=s[x[jvj+233]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+233];
if((x[jvj+21]==x[jvj+236])) goto l19;
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==649)) goto l19;
l20:pile[v[22]]=jvj+24; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+21)*/
l19:x[jvj+233]=t[x[jvj+233]];
l17:if((x[jvj+233]>0)) goto l18;
x[jvj+27]=0 ;z[jvj+27]=0;
l21:if((x[jvj+24]>0)) goto l22;
x[MMMT]=16812 ;z[MMMT]=16812;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+91; pile[WZ4]=jvj+300; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+91,jvj+300)*/
pile[WZ3]=88; pile[WZ4]=jvj+370; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+370)*/
pile[v[22]]=jvj+370; pile[WZ1]=111; pile[WZ2]=jvj+371; 
(*f[54])( );     /*TRI1(jvj+370,111,jvj+371)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+235; pile[WZ4]=jvj+371; pile[WZ5]=jvj+304; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+235,jvj+371,jvj+304)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+372; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+372)*/
pile[v[22]]=jvj+372; pile[WZ1]=111; pile[WZ2]=jvj+373; 
(*f[54])( );     /*TRI1(jvj+372,111,jvj+373)*/
pile[v[22]]=jvj+373; pile[WZ1]=jvj+27; pile[WZ2]=107; pile[WZ3]=jvj+374; 
(*f[301])( );     /*TRI11(jvj+373,jvj+27,107,jvj+374)*/
pile[v[22]]=jvj+374; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+302; 
(*f[58])( );     /*TRI3(jvj+374,22,100,jvj+302)*/
pile[v[22]]=jvj+300; pile[WZ1]=111; pile[WZ2]=jvj+301; 
(*f[54])( );     /*TRI1(jvj+300,111,jvj+301)*/
pile[v[22]]=jvj+301; pile[WZ1]=jvj+302; pile[WZ2]=103; pile[WZ3]=jvj+303; 
(*f[58])( );     /*TRI3(jvj+301,jvj+302,103,jvj+303)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+304; pile[WZ4]=jvj+303; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+304,jvj+303,MMMX)*/
goto l144;
l22:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+25,jvj+26)*/
pile[v[22]]=jvj+27; 
(*f[68])( );     /*PLUE0(jvj+27,jvj+26)*/
x[jvj+24]=t[x[jvj+24]];
goto l21;
l24:x[jvj+28]=s[x[jvj+378]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+378];
if((x[jvj+28]==x[jvj+395])) goto l25;
if((x[jvj+28]==x[jvj+205])) goto l25;
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]==649)) goto l25;
l26:pile[v[22]]=jvj+31; pile[WZ1]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+28)*/
l25:x[jvj+378]=t[x[jvj+378]];
l23:if((x[jvj+378]>0)) goto l24;
x[jvj+34]=0 ;z[jvj+34]=0;
l27:if((x[jvj+31]>0)) goto l28;
x[jvj+412]=x[jvj+208] ;z[jvj+412]=z[jvj+208];
l125:if((x[jvj+412]<=0)) goto l124;
x[jvj+397]=s[x[jvj+412]] ;z[jvj+397]=(x[jvj+397]<=sepcte) ? x[jvj+397] : z[jvj+412];
x[jvj+209]=x[jvj+397] ;z[jvj+209]=z[jvj+397];
pile[v[22]]=100; pile[WZ1]=jvj+209; pile[WZ2]=jvj+210; 
(*f[32])( );if(v[102]) goto l126;     /*FNDO0(100,jvj+209,jvj+210)*/
if((x[jvj+210]!=41)) goto l126;
pile[v[22]]=jvj+209; pile[WZ1]=jvj+211; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+209,jvj+211)*/
x[jvj+398]=x[jvj+208] ;z[jvj+398]=z[jvj+208];
l127:if((x[jvj+398]<=0)) goto l126;
x[jvj+213]=s[x[jvj+398]] ;z[jvj+213]=(x[jvj+213]<=sepcte) ? x[jvj+213] : z[jvj+398];
if((x[jvj+397]==x[jvj+213])) goto l128;
pile[v[22]]=jvj+212; pile[WZ1]=jvj+213; pile[WZ2]=jvj+214; 
(*f[760])( );     /*MEMEX0(jvj+212,jvj+213,jvj+214)*/
if((x[jvj+214]==135)) goto l129;
l128:x[jvj+398]=t[x[jvj+398]];
goto l127;
l28:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+32,jvj+33)*/
pile[v[22]]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+33)*/
x[jvj+31]=t[x[jvj+31]];
goto l27;
l30:x[jvj+379]=t[x[jvj+379]];
l29:if((x[jvj+379]<=0)) goto l100;
x[jvj+35]=s[x[jvj+379]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+379];
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=41)) goto l30;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l100;     /*FNDC0(130,jvj+35,V265)*/
V265=pile[WZ2]; 
if((V265==1)) goto l100;
pile[v[22]]=V264; pile[WZ1]=V265; 
(*f[1011])( );     /*PGCD0(V264,V265,V262)*/
V262=pile[WZ2]; 
if((V259!=V262)) goto l100;
x[MMMT]=16700 ;z[MMMT]=16700;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,134,MMMX)*/
goto l144;
l32:x[jvj+37]=s[x[jvj+196]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+196];
if((x[jvj+37]==x[jvj+393])) goto l33;
if((x[jvj+37]==x[jvj+394])) goto l33;
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]==649)) goto l33;
l34:pile[v[22]]=jvj+40; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+37)*/
l33:x[jvj+196]=t[x[jvj+196]];
l31:if((x[jvj+196]>0)) goto l32;
pile[v[22]]=jvj+200; pile[WZ1]=jvj+202; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+200,jvj+202)*/
x[jvj+43]=0 ;z[jvj+43]=0;
l35:if((x[jvj+40]>0)) goto l36;
x[MMMT]=16636 ;z[MMMT]=16636;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+290; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+290)*/
pile[WZ3]=51; pile[WZ4]=jvj+363; 
(*f[181])( );     /*QUADRI2(100,20,101,51,jvj+363)*/
pile[v[22]]=jvj+363; pile[WZ1]=111; pile[WZ2]=jvj+364; 
(*f[54])( );     /*TRI1(jvj+363,111,jvj+364)*/
pile[v[22]]=jvj+364; pile[WZ1]=jvj+202; pile[WZ2]=103; pile[WZ3]=jvj+365; 
(*f[58])( );     /*TRI3(jvj+364,jvj+202,103,jvj+365)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+199; pile[WZ4]=jvj+365; pile[WZ5]=jvj+291; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+199,jvj+365,jvj+291)*/
pile[WZ2]=111; pile[WZ3]=jvj+290; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+290,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+291; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+291)*/
pile[v[22]]=jvj+43; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+43,MMMX,107)*/
goto l144;
l36:x[jvj+41]=s[x[jvj+40]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+40];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+41,jvj+42)*/
pile[v[22]]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+43,jvj+42)*/
x[jvj+40]=t[x[jvj+40]];
goto l35;
l38:x[jvj+44]=s[x[jvj+215]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+215];
if((x[jvj+44]==x[jvj+400])) goto l39;
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]==649)) goto l39;
l40:pile[v[22]]=jvj+47; pile[WZ1]=jvj+44; 
(*f[68])( );     /*PLUE0(jvj+47,jvj+44)*/
l39:x[jvj+215]=t[x[jvj+215]];
l37:if((x[jvj+215]>0)) goto l38;
x[jvj+50]=0 ;z[jvj+50]=0;
l41:if((x[jvj+47]>0)) goto l42;
x[MMMT]=16816 ;z[MMMT]=16816;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1273; pile[WZ4]=jvj+297; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+297)*/
pile[v[22]]=jvj+297; pile[WZ1]=111; pile[WZ2]=jvj+298; 
(*f[54])( );     /*TRI1(jvj+297,111,jvj+298)*/
pile[v[22]]=jvj+298; pile[WZ1]=jvj+50; pile[WZ2]=107; pile[WZ3]=jvj+299; 
(*f[301])( );     /*TRI11(jvj+298,jvj+50,107,jvj+299)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+225; pile[WZ4]=jvj+299; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+225,jvj+299,MMMX)*/
goto l144;
l42:x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+48,jvj+49)*/
pile[v[22]]=jvj+50; 
(*f[68])( );     /*PLUE0(jvj+50,jvj+49)*/
x[jvj+47]=t[x[jvj+47]];
goto l41;
l44:x[jvj+59]=s[x[jvj+145]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+145];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+59,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1911; pile[WZ4]=jvj+306; 
(*f[181])( );     /*QUADRI2(100,20,101,1911,jvj+306)*/
pile[v[22]]=jvj+306; pile[WZ1]=111; pile[WZ2]=jvj+307; 
(*f[54])( );     /*TRI1(jvj+306,111,jvj+307)*/
pile[v[22]]=jvj+307; pile[WZ1]=jvj+58; pile[WZ2]=103; pile[WZ3]=jvj+308; 
(*f[58])( );     /*TRI3(jvj+307,jvj+58,103,jvj+308)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+308; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+60,jvj+308,jvj+62)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[522])( );     /*PLUB2(jvj+61,jvj+62)*/
x[jvj+145]=t[x[jvj+145]];
l43:if((x[jvj+145]>0)) goto l44;
for(i=x[jvj+61],V370=0;i>0;i=t[i],V370++)  ;
if((V370!=V371)) goto l135;
x[jvj+65]=0 ;z[jvj+65]=0;
l45:if((x[jvj+61]>0)) goto l46;
x[MMMT]=16831 ;z[MMMT]=16831;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+272; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+272)*/
pile[v[22]]=jvj+272; pile[WZ1]=111; pile[WZ2]=jvj+273; 
(*f[54])( );     /*TRI1(jvj+272,111,jvj+273)*/
pile[v[22]]=jvj+273; pile[WZ1]=jvj+65; pile[WZ2]=107; pile[WZ3]=jvj+274; 
(*f[301])( );     /*TRI11(jvj+273,jvj+65,107,jvj+274)*/
pile[v[22]]=jvj+274; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=MMMX; 
(*f[58])( );     /*TRI3(jvj+274,22,100,MMMX)*/
goto l144;
l46:x[jvj+63]=s[x[jvj+61]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+61];
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+63,jvj+64)*/
pile[v[22]]=jvj+65; 
(*f[68])( );     /*PLUE0(jvj+65,jvj+64)*/
x[jvj+61]=t[x[jvj+61]];
goto l45;
l48:x[jvj+66]=s[x[jvj+380]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+380];
if((x[jvj+66]==x[jvj+182])) goto l49;
pile[v[22]]=111; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+66,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+67,jvj+68)*/
if((x[jvj+68]==649)) goto l49;
l50:pile[v[22]]=jvj+69; pile[WZ1]=jvj+66; 
(*f[68])( );     /*PLUE0(jvj+69,jvj+66)*/
l49:x[jvj+380]=t[x[jvj+380]];
l47:if((x[jvj+380]>0)) goto l48;
x[jvj+72]=0 ;z[jvj+72]=0;
l51:if((x[jvj+69]>0)) goto l52;
pile[v[22]]=102; pile[WZ1]=jvj+182; pile[WZ2]=jvj+185; 
(*f[32])( );if(v[102]) goto l109;     /*FNDO0(102,jvj+182,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=jvj+186; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+185,jvj+186)*/
pile[v[22]]=103; pile[WZ1]=jvj+182; pile[WZ2]=jvj+187; 
(*f[32])( );if(v[102]) goto l109;     /*FNDO0(103,jvj+182,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=jvj+188; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+187,jvj+188)*/
x[MMMT]=16732 ;z[MMMT]=16732;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+283; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+283)*/
pile[WZ3]=486; pile[WZ4]=jvj+358; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+358)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+358; pile[WZ4]=jvj+287; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+358,jvj+287)*/
pile[v[22]]=jvj+287; pile[WZ1]=107; pile[WZ2]=jvj+186; 
(*f[36])( );     /*PLUSC0(jvj+287,107,jvj+186)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+287; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+72,jvj+287,107)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+359; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+359)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+359; pile[WZ4]=jvj+285; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+359,jvj+285)*/
pile[v[22]]=jvj+285; pile[WZ1]=107; pile[WZ2]=jvj+188; 
(*f[36])( );     /*PLUSC0(jvj+285,107,jvj+188)*/
pile[WZ2]=jvj+181; 
(*f[36])( );     /*PLUSC0(jvj+285,107,jvj+181)*/
pile[v[22]]=jvj+283; pile[WZ1]=111; pile[WZ2]=jvj+284; 
(*f[54])( );     /*TRI1(jvj+283,111,jvj+284)*/
pile[v[22]]=jvj+284; pile[WZ1]=jvj+285; pile[WZ2]=103; pile[WZ3]=jvj+286; 
(*f[58])( );     /*TRI3(jvj+284,jvj+285,103,jvj+286)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+287; pile[WZ4]=jvj+286; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+287,jvj+286,MMMX)*/
goto l144;
l52:x[jvj+70]=s[x[jvj+69]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+69];
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+70,jvj+71)*/
pile[v[22]]=jvj+72; 
(*f[68])( );     /*PLUE0(jvj+72,jvj+71)*/
x[jvj+69]=t[x[jvj+69]];
goto l51;
l54:x[jvj+73]=s[x[jvj+238]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+238];
if((x[jvj+73]==x[jvj+240])) goto l55;
pile[v[22]]=111; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+73,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]==649)) goto l55;
l56:pile[v[22]]=jvj+76; pile[WZ1]=jvj+73; 
(*f[68])( );     /*PLUE0(jvj+76,jvj+73)*/
l55:x[jvj+238]=t[x[jvj+238]];
l53:if((x[jvj+238]>0)) goto l54;
x[jvj+82]=0 ;z[jvj+82]=0;
l59:if((x[jvj+76]>0)) goto l60;
pile[v[22]]=107; pile[WZ1]=jvj+240; pile[WZ2]=jvj+244; 
(*f[33])( );     /*FNDE0(107,jvj+240,jvj+244)*/
x[jvj+79]=0 ;z[jvj+79]=0;
l57:if((x[jvj+244]>0)) goto l58;
x[MMMT]=16635 ;z[MMMT]=16635;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+91; pile[WZ4]=jvj+305; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+91,jvj+305)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+305; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+305,MMMX)*/
pile[v[22]]=jvj+79; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+79,MMMX,107)*/
pile[v[22]]=jvj+82; 
(*f[1118])( );     /*AJE3(jvj+82,MMMX,107)*/
goto l144;
l58:x[jvj+77]=s[x[jvj+244]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+244];
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+77,jvj+78)*/
pile[v[22]]=jvj+79; 
(*f[68])( );     /*PLUE0(jvj+79,jvj+78)*/
x[jvj+244]=t[x[jvj+244]];
goto l57;
l60:x[jvj+80]=s[x[jvj+76]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+76];
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+80,jvj+81)*/
pile[v[22]]=jvj+82; 
(*f[68])( );     /*PLUE0(jvj+82,jvj+81)*/
x[jvj+76]=t[x[jvj+76]];
goto l59;
l61:x[jvj+86]=0 ;z[jvj+86]=0;
l62:if((x[jvj+215]>0)) goto l63;
x[jvj+89]=0 ;z[jvj+89]=0;
l66:if((x[jvj+86]>0)) goto l67;
x[MMMT]=16817 ;z[MMMT]=16817;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1273; pile[WZ4]=jvj+294; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+294)*/
pile[v[22]]=jvj+294; pile[WZ1]=111; pile[WZ2]=jvj+295; 
(*f[54])( );     /*TRI1(jvj+294,111,jvj+295)*/
pile[v[22]]=jvj+295; pile[WZ1]=jvj+89; pile[WZ2]=107; pile[WZ3]=jvj+296; 
(*f[301])( );     /*TRI11(jvj+295,jvj+89,107,jvj+296)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+218; pile[WZ4]=jvj+296; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+218,jvj+296,MMMX)*/
goto l144;
l63:x[jvj+83]=s[x[jvj+215]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+215];
if((x[jvj+83]==x[jvj+399])) goto l64;
pile[v[22]]=111; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+83,jvj+84)*/
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+84,jvj+85)*/
if((x[jvj+85]==649)) goto l64;
l65:pile[v[22]]=jvj+86; pile[WZ1]=jvj+83; 
(*f[68])( );     /*PLUE0(jvj+86,jvj+83)*/
l64:x[jvj+215]=t[x[jvj+215]];
goto l62;
l67:x[jvj+87]=s[x[jvj+86]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+86];
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+87,jvj+88)*/
pile[v[22]]=jvj+89; 
(*f[68])( );     /*PLUE0(jvj+89,jvj+88)*/
x[jvj+86]=t[x[jvj+86]];
goto l66;
l68:pile[v[22]]=160; pile[WZ1]=MMMI; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(160,MMMI,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; 
(*f[1966])( );     /*SETCOEFFS0(jvj+92,jvj+93)*/
pile[v[22]]=jvj+93; 
(*f[1000])( );     /*PGCDEN0(jvj+93,V134)*/
V134=pile[WZ1]; 
pile[v[22]]=jvj+92; pile[WZ1]=jvj+94; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+92,jvj+94)*/
x[jvj+95]=d[20];z[jvj+95]=0;
l69:if((x[jvj+95]>0)) goto l70;
pile[v[22]]=jvj+92; pile[WZ1]=jvj+104; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+92,jvj+104)*/
pile[v[22]]=130; pile[WZ1]=jvj+92; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+92,V355)*/
V355=pile[WZ2]; 
x[jvj+105]=d[20];z[jvj+105]=0;
l72:if((x[jvj+105]<=0)) goto l135;
x[jvj+106]=s[x[jvj+105]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+105];
pile[v[22]]=jvj+106; pile[WZ1]=MMMI; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+106,MMMI,jvj+51)*/
pile[v[22]]=V355; pile[WZ1]=jvj+51; pile[WZ2]=jvj+107; 
(*f[1968])( );if(v[102]) goto l73;     /*NORMEQM0(V355,jvj+51,jvj+107)*/
pile[v[22]]=268; pile[WZ1]=jvj+106; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(268,jvj+106,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=MMMI; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(jvj+108,MMMI,jvj+54)*/
pile[v[22]]=V355; pile[WZ1]=jvj+54; pile[WZ2]=jvj+109; 
(*f[1968])( );if(v[102]) goto l73;     /*NORMEQM0(V355,jvj+54,jvj+109)*/
x[jvj+52]=x[jvj+107] ;z[jvj+52]=z[jvj+107];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+110; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+52,jvj+110)*/
x[jvj+55]=x[jvj+109] ;z[jvj+55]=z[jvj+109];
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[760])( );     /*MEMEX0(jvj+51,jvj+52,jvj+53)*/
if((x[jvj+53]==134)) goto l74;
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[760])( );     /*MEMEX0(jvj+54,jvj+55,jvj+56)*/
if((x[jvj+56]==134)) goto l74;
l73:x[jvj+105]=t[x[jvj+105]];
goto l72;
l70:x[jvj+96]=s[x[jvj+95]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+95];
pile[v[22]]=268; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(268,jvj+96,jvj+97)*/
pile[v[22]]=jvj+96; pile[WZ1]=MMMI; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(jvj+96,MMMI,jvj+98)*/
pile[v[22]]=jvj+97; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(jvj+97,MMMI,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; 
(*f[1966])( );     /*SETCOEFFS0(jvj+99,jvj+100)*/
pile[v[22]]=jvj+100; 
(*f[1000])( );     /*PGCDEN0(jvj+100,V137)*/
V137=pile[WZ1]; 
pile[v[22]]=jvj+98; pile[WZ1]=jvj+101; 
(*f[1966])( );     /*SETCOEFFS0(jvj+98,jvj+101)*/
pile[v[22]]=jvj+101; 
(*f[1000])( );     /*PGCDEN0(jvj+101,V139)*/
V139=pile[WZ1]; 
pile[v[22]]=V137; pile[WZ1]=V139; 
(*f[1011])( );     /*PGCD0(V137,V139,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=V136; 
(*f[1011])( );     /*PGCD0(V134,V136,D)*/
D=pile[WZ2]; 
if((D==1)) goto l71;
pile[v[22]]=jvj+98; pile[WZ1]=jvj+102; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+98,jvj+102)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+103; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+99,jvj+103)*/
x[MMMT]=16527 ;z[MMMT]=16527;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+247)*/
pile[WZ3]=1911; pile[WZ4]=jvj+309; 
(*f[181])( );     /*QUADRI2(100,20,101,1911,jvj+309)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=D; pile[WZ4]=jvj+311; 
(*f[192])( );     /*QUADRI4(100,41,130,D,jvj+311)*/
pile[v[22]]=jvj+309; pile[WZ1]=111; pile[WZ2]=jvj+310; 
(*f[54])( );     /*TRI1(jvj+309,111,jvj+310)*/
pile[v[22]]=jvj+310; pile[WZ1]=jvj+311; pile[WZ2]=103; pile[WZ3]=jvj+312; 
(*f[58])( );     /*TRI3(jvj+310,jvj+311,103,jvj+312)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+312; pile[WZ5]=jvj+251; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+102,jvj+312,jvj+251)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1911; pile[WZ4]=jvj+313; 
(*f[181])( );     /*QUADRI2(100,20,101,1911,jvj+313)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=D; pile[WZ4]=jvj+315; 
(*f[192])( );     /*QUADRI4(100,41,130,D,jvj+315)*/
pile[v[22]]=jvj+313; pile[WZ1]=111; pile[WZ2]=jvj+314; 
(*f[54])( );     /*TRI1(jvj+313,111,jvj+314)*/
pile[v[22]]=jvj+314; pile[WZ1]=jvj+315; pile[WZ2]=103; pile[WZ3]=jvj+316; 
(*f[58])( );     /*TRI3(jvj+314,jvj+315,103,jvj+316)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+316; pile[WZ5]=jvj+249; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+316,jvj+249)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1911; pile[WZ4]=jvj+317; 
(*f[181])( );     /*QUADRI2(100,20,101,1911,jvj+317)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=D; pile[WZ4]=jvj+319; 
(*f[192])( );     /*QUADRI4(100,41,130,D,jvj+319)*/
pile[v[22]]=jvj+317; pile[WZ1]=111; pile[WZ2]=jvj+318; 
(*f[54])( );     /*TRI1(jvj+317,111,jvj+318)*/
pile[v[22]]=jvj+318; pile[WZ1]=jvj+319; pile[WZ2]=103; pile[WZ3]=jvj+320; 
(*f[58])( );     /*TRI3(jvj+318,jvj+319,103,jvj+320)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+320; pile[WZ5]=jvj+245; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+320,jvj+245)*/
pile[v[22]]=jvj+245; pile[WZ1]=160; pile[WZ2]=jvj+246; 
(*f[54])( );     /*TRI1(jvj+245,160,jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=jvj+247; pile[WZ2]=111; pile[WZ3]=jvj+248; 
(*f[58])( );     /*TRI3(jvj+246,jvj+247,111,jvj+248)*/
pile[v[22]]=jvj+248; pile[WZ1]=jvj+249; pile[WZ2]=103; pile[WZ3]=jvj+250; 
(*f[58])( );     /*TRI3(jvj+248,jvj+249,103,jvj+250)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+251; pile[WZ4]=jvj+250; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+251,jvj+250,MMMX)*/
goto l144;
l71:x[jvj+95]=t[x[jvj+95]];
goto l69;
l74:pile[v[22]]=jvj+55; pile[WZ1]=jvj+111; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+55,jvj+111)*/
x[MMMT]=16877 ;z[MMMT]=16877;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+253; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+253)*/
pile[v[22]]=jvj+104; pile[WZ1]=160; pile[WZ2]=jvj+252; 
(*f[54])( );     /*TRI1(jvj+104,160,jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=jvj+253; pile[WZ2]=111; pile[WZ3]=jvj+254; 
(*f[58])( );     /*TRI3(jvj+252,jvj+253,111,jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=jvj+111; pile[WZ2]=103; pile[WZ3]=jvj+255; 
(*f[58])( );     /*TRI3(jvj+254,jvj+111,103,jvj+255)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+255; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+110,jvj+255,MMMX)*/
goto l144;
l75:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+112)*/
pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(111,jvj+112,jvj+113)*/
pile[v[22]]=101; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(101,jvj+113,jvj+114)*/
if((x[jvj+114]!=486)) goto l85;
pile[v[22]]=107; pile[WZ1]=jvj+112; pile[WZ2]=jvj+115; 
(*f[33])( );     /*FNDE0(107,jvj+112,jvj+115)*/
for(i=x[jvj+115],V485=0;i>0;i=t[i],V485++)  ;
if((V485!=2)) goto l85;
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(103,MMMI,jvj+116)*/
pile[v[22]]=130; pile[WZ1]=jvj+116; 
(*f[26])( );if(v[102]) goto l85;     /*FNDC0(130,jvj+116,V476)*/
V476=pile[WZ2]; 
if((V476<0)) goto l76;
pile[v[22]]=jvj+116; pile[WZ1]=jvj+122; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+116,jvj+122)*/
x[jvj+404]=x[jvj+115] ;z[jvj+404]=z[jvj+115];
l81:if((x[jvj+404]<=0)) goto l85;
x[jvj+383]=s[x[jvj+404]] ;z[jvj+383]=(x[jvj+383]<=sepcte) ? x[jvj+383] : z[jvj+404];
x[jvj+123]=x[jvj+383] ;z[jvj+123]=z[jvj+383];
pile[v[22]]=130; pile[WZ1]=jvj+123; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(130,jvj+123,V9)*/
V9=pile[WZ2]; 
if((V9<=0)) goto l82;
pile[v[22]]=jvj+123; pile[WZ1]=jvj+124; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+123,jvj+124)*/
x[jvj+384]=x[jvj+115] ;z[jvj+384]=z[jvj+115];
l83:if((x[jvj+384]<=0)) goto l82;
x[jvj+125]=s[x[jvj+384]] ;z[jvj+125]=(x[jvj+125]<=sepcte) ? x[jvj+125] : z[jvj+384];
if((x[jvj+383]!=x[jvj+125])) goto l84;
x[jvj+384]=t[x[jvj+384]];
goto l83;
l76:pile[v[22]]=jvj+116; pile[WZ1]=jvj+117; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+116,jvj+117)*/
x[jvj+403]=x[jvj+115] ;z[jvj+403]=z[jvj+115];
l77:if((x[jvj+403]<=0)) goto l85;
x[jvj+381]=s[x[jvj+403]] ;z[jvj+381]=(x[jvj+381]<=sepcte) ? x[jvj+381] : z[jvj+403];
x[jvj+118]=x[jvj+381] ;z[jvj+118]=z[jvj+381];
pile[v[22]]=130; pile[WZ1]=jvj+118; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(130,jvj+118,V475)*/
V475=pile[WZ2]; 
if((V475<=0)) goto l78;
V477=V476%V475;
if((V477==0)) goto l78;
pile[v[22]]=jvj+118; pile[WZ1]=jvj+119; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+118,jvj+119)*/
x[jvj+382]=x[jvj+115] ;z[jvj+382]=z[jvj+115];
l79:if((x[jvj+382]<=0)) goto l78;
x[jvj+120]=s[x[jvj+382]] ;z[jvj+120]=(x[jvj+120]<=sepcte) ? x[jvj+120] : z[jvj+382];
if((x[jvj+381]!=x[jvj+120])) goto l80;
x[jvj+382]=t[x[jvj+382]];
goto l79;
l78:x[jvj+403]=t[x[jvj+403]];
goto l77;
l80:pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+120,jvj+121)*/
x[MMMT]=16703 ;z[MMMT]=16703;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+256; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+256)*/
pile[WZ3]=88; pile[WZ4]=jvj+321; 
(*f[181])( );     /*QUADRI2(100,20,101,88,jvj+321)*/
pile[WZ3]=63; pile[WZ4]=jvj+324; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+324)*/
pile[v[22]]=jvj+324; pile[WZ1]=111; pile[WZ2]=jvj+325; 
(*f[54])( );     /*TRI1(jvj+324,111,jvj+325)*/
pile[v[22]]=jvj+325; pile[WZ1]=jvj+119; pile[WZ2]=103; pile[WZ3]=jvj+326; 
(*f[58])( );     /*TRI3(jvj+325,jvj+119,103,jvj+326)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+326; pile[WZ5]=jvj+323; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+117,jvj+326,jvj+323)*/
pile[v[22]]=jvj+321; pile[WZ1]=111; pile[WZ2]=jvj+322; 
(*f[54])( );     /*TRI1(jvj+321,111,jvj+322)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+323; pile[WZ4]=jvj+322; pile[WZ5]=jvj+258; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+323,jvj+322,jvj+258)*/
pile[v[22]]=jvj+256; pile[WZ1]=111; pile[WZ2]=jvj+257; 
(*f[54])( );     /*TRI1(jvj+256,111,jvj+257)*/
pile[v[22]]=jvj+257; pile[WZ1]=jvj+258; pile[WZ2]=103; pile[WZ3]=jvj+259; 
(*f[58])( );     /*TRI3(jvj+257,jvj+258,103,jvj+259)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+121; pile[WZ4]=jvj+259; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+121,jvj+259,MMMX)*/
goto l144;
l82:x[jvj+404]=t[x[jvj+404]];
goto l81;
l84:pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+125,jvj+126)*/
x[MMMT]=16701 ;z[MMMT]=16701;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+260; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+260)*/
pile[WZ3]=63; pile[WZ4]=jvj+327; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+327)*/
pile[v[22]]=jvj+327; pile[WZ1]=111; pile[WZ2]=jvj+328; 
(*f[54])( );     /*TRI1(jvj+327,111,jvj+328)*/
pile[v[22]]=jvj+328; pile[WZ1]=jvj+124; pile[WZ2]=103; pile[WZ3]=jvj+329; 
(*f[58])( );     /*TRI3(jvj+328,jvj+124,103,jvj+329)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+122; pile[WZ4]=jvj+329; pile[WZ5]=jvj+262; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+122,jvj+329,jvj+262)*/
pile[v[22]]=jvj+260; pile[WZ1]=111; pile[WZ2]=jvj+261; 
(*f[54])( );     /*TRI1(jvj+260,111,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=jvj+262; pile[WZ2]=103; pile[WZ3]=jvj+263; 
(*f[58])( );     /*TRI3(jvj+261,jvj+262,103,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+126; pile[WZ4]=jvj+263; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+126,jvj+263,MMMX)*/
goto l144;
l85:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+127)*/
pile[v[22]]=111; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+127,jvj+128)*/
pile[v[22]]=101; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+128,jvj+129)*/
if((x[jvj+129]!=486)) goto l135;
pile[v[22]]=107; pile[WZ1]=jvj+127; pile[WZ2]=jvj+130; 
(*f[33])( );     /*FNDE0(107,jvj+127,jvj+130)*/
for(i=x[jvj+130],V516=0;i>0;i=t[i],V516++)  ;
if((V516!=2)) goto l135;
pile[v[22]]=130; pile[WZ1]=jvj+112; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+112,V507)*/
V507=pile[WZ2]; 
if((V507>=0)) goto l86;
pile[v[22]]=jvj+112; pile[WZ1]=jvj+136; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+112,jvj+136)*/
x[jvj+406]=x[jvj+130] ;z[jvj+406]=z[jvj+130];
l91:if((x[jvj+406]<=0)) goto l135;
x[jvj+387]=s[x[jvj+406]] ;z[jvj+387]=(x[jvj+387]<=sepcte) ? x[jvj+387] : z[jvj+406];
x[jvj+137]=x[jvj+387] ;z[jvj+137]=z[jvj+387];
pile[v[22]]=130; pile[WZ1]=jvj+137; 
(*f[26])( );if(v[102]) goto l92;     /*FNDC0(130,jvj+137,V39)*/
V39=pile[WZ2]; 
if((V39<=0)) goto l92;
pile[v[22]]=jvj+137; pile[WZ1]=jvj+138; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+137,jvj+138)*/
x[jvj+388]=x[jvj+130] ;z[jvj+388]=z[jvj+130];
l93:if((x[jvj+388]<=0)) goto l92;
x[jvj+139]=s[x[jvj+388]] ;z[jvj+139]=(x[jvj+139]<=sepcte) ? x[jvj+139] : z[jvj+388];
if((x[jvj+387]!=x[jvj+139])) goto l94;
x[jvj+388]=t[x[jvj+388]];
goto l93;
l86:pile[v[22]]=jvj+112; pile[WZ1]=jvj+131; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+112,jvj+131)*/
x[jvj+405]=x[jvj+130] ;z[jvj+405]=z[jvj+130];
l87:if((x[jvj+405]<=0)) goto l135;
x[jvj+385]=s[x[jvj+405]] ;z[jvj+385]=(x[jvj+385]<=sepcte) ? x[jvj+385] : z[jvj+405];
x[jvj+132]=x[jvj+385] ;z[jvj+132]=z[jvj+385];
pile[v[22]]=130; pile[WZ1]=jvj+132; 
(*f[26])( );if(v[102]) goto l88;     /*FNDC0(130,jvj+132,V506)*/
V506=pile[WZ2]; 
if((V506<=0)) goto l88;
V508=V507%V506;
if((V508==0)) goto l88;
pile[v[22]]=jvj+132; pile[WZ1]=jvj+133; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+132,jvj+133)*/
x[jvj+386]=x[jvj+130] ;z[jvj+386]=z[jvj+130];
l89:if((x[jvj+386]<=0)) goto l88;
x[jvj+134]=s[x[jvj+386]] ;z[jvj+134]=(x[jvj+134]<=sepcte) ? x[jvj+134] : z[jvj+386];
if((x[jvj+385]!=x[jvj+134])) goto l90;
x[jvj+386]=t[x[jvj+386]];
goto l89;
l88:x[jvj+405]=t[x[jvj+405]];
goto l87;
l90:pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+134,jvj+135)*/
x[MMMT]=16704 ;z[MMMT]=16704;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+264; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+264)*/
pile[WZ3]=87; pile[WZ4]=jvj+330; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+330)*/
pile[WZ3]=63; pile[WZ4]=jvj+333; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+333)*/
pile[v[22]]=jvj+333; pile[WZ1]=111; pile[WZ2]=jvj+334; 
(*f[54])( );     /*TRI1(jvj+333,111,jvj+334)*/
pile[v[22]]=jvj+334; pile[WZ1]=jvj+133; pile[WZ2]=103; pile[WZ3]=jvj+335; 
(*f[58])( );     /*TRI3(jvj+334,jvj+133,103,jvj+335)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+131; pile[WZ4]=jvj+335; pile[WZ5]=jvj+332; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+131,jvj+335,jvj+332)*/
pile[v[22]]=jvj+330; pile[WZ1]=111; pile[WZ2]=jvj+331; 
(*f[54])( );     /*TRI1(jvj+330,111,jvj+331)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+332; pile[WZ4]=jvj+331; pile[WZ5]=jvj+267; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+332,jvj+331,jvj+267)*/
pile[v[22]]=jvj+264; pile[WZ1]=111; pile[WZ2]=jvj+265; 
(*f[54])( );     /*TRI1(jvj+264,111,jvj+265)*/
pile[v[22]]=jvj+265; pile[WZ1]=jvj+135; pile[WZ2]=103; pile[WZ3]=jvj+266; 
(*f[58])( );     /*TRI3(jvj+265,jvj+135,103,jvj+266)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+267; pile[WZ4]=jvj+266; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+267,jvj+266,MMMX)*/
goto l144;
l92:x[jvj+406]=t[x[jvj+406]];
goto l91;
l94:pile[v[22]]=jvj+139; pile[WZ1]=jvj+140; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+139,jvj+140)*/
x[MMMT]=16702 ;z[MMMT]=16702;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+268; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+268)*/
pile[WZ3]=63; pile[WZ4]=jvj+336; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+336)*/
pile[v[22]]=jvj+336; pile[WZ1]=111; pile[WZ2]=jvj+337; 
(*f[54])( );     /*TRI1(jvj+336,111,jvj+337)*/
pile[v[22]]=jvj+337; pile[WZ1]=jvj+138; pile[WZ2]=103; pile[WZ3]=jvj+338; 
(*f[58])( );     /*TRI3(jvj+337,jvj+138,103,jvj+338)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+136; pile[WZ4]=jvj+338; pile[WZ5]=jvj+271; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+136,jvj+338,jvj+271)*/
pile[v[22]]=jvj+268; pile[WZ1]=111; pile[WZ2]=jvj+269; 
(*f[54])( );     /*TRI1(jvj+268,111,jvj+269)*/
pile[v[22]]=jvj+269; pile[WZ1]=jvj+140; pile[WZ2]=103; pile[WZ3]=jvj+270; 
(*f[58])( );     /*TRI3(jvj+269,jvj+140,103,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+271; pile[WZ4]=jvj+270; pile[WZ5]=MMMX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+271,jvj+270,MMMX)*/
goto l144;
l95:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+141)*/
pile[v[22]]=111; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+141,jvj+142)*/
pile[v[22]]=101; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+142,jvj+143)*/
if((x[jvj+143]!=485)) goto l135;
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(100,jvj+57,jvj+144)*/
if((x[jvj+144]!=41)) goto l135;
pile[v[22]]=107; pile[WZ1]=jvj+141; pile[WZ2]=jvj+145; 
(*f[33])( );     /*FNDE0(107,jvj+141,jvj+145)*/
for(i=x[jvj+145],V371=0;i>0;i=t[i],V371++)  ;
x[jvj+61]=0 ;z[jvj+61]=0;
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+57,jvj+58)*/
goto l43;
l96:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(102,MMMI,jvj+146)*/
pile[v[22]]=111; pile[WZ1]=jvj+146; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(111,jvj+146,jvj+147)*/
pile[v[22]]=101; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(101,jvj+147,jvj+148)*/
if((x[jvj+148]!=485)) goto l135;
pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(103,MMMI,jvj+149)*/
pile[v[22]]=130; pile[WZ1]=jvj+149; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+149,V113)*/
V113=pile[WZ2]; 
if((V113>4)) goto l135;
V112=V113-1;
if((V112<=0)) goto l135;
pile[v[22]]=107; pile[WZ1]=jvj+146; pile[WZ2]=jvj+150; 
(*f[33])( );     /*FNDE0(107,jvj+146,jvj+150)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+376]=x[jvj+150] ;z[jvj+376]=z[jvj+150];
goto l7;
l97:V259=1;
x[jvj+151]=d[20];z[jvj+151]=0;
l98:if((x[jvj+151]>0)) goto l99;
x[jvj+157]=d[20];z[jvj+157]=0;
l101:if((x[jvj+157]>0)) goto l102;
x[jvj+173]=d[20];z[jvj+173]=0;
l106:if((x[jvj+173]<=0)) goto l135;
x[jvj+174]=s[x[jvj+173]] ;z[jvj+174]=(x[jvj+174]<=sepcte) ? x[jvj+174] : z[jvj+173];
pile[v[22]]=jvj+174; pile[WZ1]=MMMI; pile[WZ2]=jvj+175; 
(*f[32])( );if(v[102]) goto l107;     /*FNDO0(jvj+174,MMMI,jvj+175)*/
pile[v[22]]=111; pile[WZ1]=jvj+175; pile[WZ2]=jvj+176; 
(*f[32])( );if(v[102]) goto l107;     /*FNDO0(111,jvj+175,jvj+176)*/
pile[v[22]]=101; pile[WZ1]=jvj+176; pile[WZ2]=jvj+177; 
(*f[32])( );if(v[102]) goto l107;     /*FNDO0(101,jvj+176,jvj+177)*/
if((x[jvj+177]!=486)) goto l107;
pile[v[22]]=107; pile[WZ1]=jvj+175; pile[WZ2]=jvj+178; 
(*f[33])( );     /*FNDE0(107,jvj+175,jvj+178)*/
pile[v[22]]=268; pile[WZ1]=jvj+174; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l107;     /*FNDO0(268,jvj+174,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=MMMI; pile[WZ2]=jvj+180; 
(*f[32])( );if(v[102]) goto l107;     /*FNDO0(jvj+179,MMMI,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=jvj+181; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+180,jvj+181)*/
x[jvj+390]=x[jvj+178] ;z[jvj+390]=z[jvj+178];
l108:if((x[jvj+390]<=0)) goto l107;
x[jvj+182]=s[x[jvj+390]] ;z[jvj+182]=(x[jvj+182]<=sepcte) ? x[jvj+182] : z[jvj+390];
pile[v[22]]=111; pile[WZ1]=jvj+182; pile[WZ2]=jvj+183; 
(*f[32])( );if(v[102]) goto l109;     /*FNDO0(111,jvj+182,jvj+183)*/
pile[v[22]]=101; pile[WZ1]=jvj+183; pile[WZ2]=jvj+184; 
(*f[32])( );if(v[102]) goto l109;     /*FNDO0(101,jvj+183,jvj+184)*/
if((x[jvj+184]!=990)) goto l109;
x[jvj+69]=0 ;z[jvj+69]=0;
x[jvj+380]=x[jvj+178] ;z[jvj+380]=z[jvj+178];
goto l47;
l99:x[jvj+152]=s[x[jvj+151]] ;z[jvj+152]=(x[jvj+152]<=sepcte) ? x[jvj+152] : z[jvj+151];
pile[v[22]]=268; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(268,jvj+152,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=MMMI; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(jvj+153,MMMI,jvj+154)*/
pile[v[22]]=130; pile[WZ1]=jvj+154; 
(*f[26])( );if(v[102]) goto l100;     /*FNDC0(130,jvj+154,V264)*/
V264=pile[WZ2]; 
if((V264==0)) goto l100;
pile[v[22]]=jvj+152; pile[WZ1]=MMMI; pile[WZ2]=jvj+155; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(jvj+152,MMMI,jvj+155)*/
pile[v[22]]=jvj+155; pile[WZ1]=jvj+156; 
(*f[1967])( );     /*SETFACTORS0(jvj+155,jvj+156)*/
x[jvj+379]=x[jvj+156] ;z[jvj+379]=z[jvj+156];
goto l29;
l100:x[jvj+151]=t[x[jvj+151]];
goto l98;
l102:x[jvj+158]=s[x[jvj+157]] ;z[jvj+158]=(x[jvj+158]<=sepcte) ? x[jvj+158] : z[jvj+157];
pile[v[22]]=jvj+158; pile[WZ1]=MMMI; pile[WZ2]=jvj+159; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(jvj+158,MMMI,jvj+159)*/
pile[v[22]]=111; pile[WZ1]=jvj+159; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(111,jvj+159,jvj+160)*/
pile[v[22]]=101; pile[WZ1]=jvj+160; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(101,jvj+160,jvj+161)*/
if((x[jvj+161]!=485)) goto l103;
pile[v[22]]=107; pile[WZ1]=jvj+159; pile[WZ2]=jvj+162; 
(*f[33])( );     /*FNDE0(107,jvj+159,jvj+162)*/
pile[v[22]]=268; pile[WZ1]=jvj+158; pile[WZ2]=jvj+163; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(268,jvj+158,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=MMMI; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(jvj+163,MMMI,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=jvj+165; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+164,jvj+165)*/
x[jvj+389]=x[jvj+162] ;z[jvj+389]=z[jvj+162];
l104:if((x[jvj+389]<=0)) goto l103;
x[jvj+166]=s[x[jvj+389]] ;z[jvj+166]=(x[jvj+166]<=sepcte) ? x[jvj+166] : z[jvj+389];
pile[v[22]]=111; pile[WZ1]=jvj+166; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(111,jvj+166,jvj+167)*/
pile[v[22]]=101; pile[WZ1]=jvj+167; pile[WZ2]=jvj+168; 
(*f[32])( );if(v[102]) goto l105;     /*FNDO0(101,jvj+167,jvj+168)*/
if((x[jvj+168]!=990)) goto l105;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+375]=x[jvj+162] ;z[jvj+375]=z[jvj+162];
goto l1;
l103:x[jvj+157]=t[x[jvj+157]];
goto l101;
l105:x[jvj+389]=t[x[jvj+389]];
goto l104;
l107:x[jvj+173]=t[x[jvj+173]];
goto l106;
l109:x[jvj+390]=t[x[jvj+390]];
goto l108;
l110:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+189; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+189)*/
x[jvj+407]=x[jvj+189] ;z[jvj+407]=z[jvj+189];
l111:if((x[jvj+407]<=0)) goto l135;
x[jvj+391]=s[x[jvj+407]] ;z[jvj+391]=(x[jvj+391]<=sepcte) ? x[jvj+391] : z[jvj+407];
x[jvj+190]=x[jvj+391] ;z[jvj+190]=z[jvj+391];
pile[v[22]]=100; pile[WZ1]=jvj+190; pile[WZ2]=jvj+191; 
(*f[32])( );if(v[102]) goto l112;     /*FNDO0(100,jvj+190,jvj+191)*/
if((x[jvj+191]!=41)) goto l112;
pile[v[22]]=jvj+190; pile[WZ1]=jvj+192; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+190,jvj+192)*/
x[jvj+408]=x[jvj+189] ;z[jvj+408]=z[jvj+189];
l113:if((x[jvj+408]<=0)) goto l112;
x[jvj+392]=s[x[jvj+408]] ;z[jvj+392]=(x[jvj+392]<=sepcte) ? x[jvj+392] : z[jvj+408];
if((x[jvj+391]==x[jvj+392])) goto l114;
x[jvj+193]=x[jvj+392] ;z[jvj+193]=z[jvj+392];
pile[v[22]]=100; pile[WZ1]=jvj+193; pile[WZ2]=jvj+194; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(100,jvj+193,jvj+194)*/
if((x[jvj+194]!=41)) goto l114;
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+377]=x[jvj+189] ;z[jvj+377]=z[jvj+189];
goto l11;
l112:x[jvj+407]=t[x[jvj+407]];
goto l111;
l114:x[jvj+408]=t[x[jvj+408]];
goto l113;
l115:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+196; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+196)*/
x[jvj+409]=x[jvj+196] ;z[jvj+409]=z[jvj+196];
l116:if((x[jvj+409]>0)) goto l117;
x[jvj+411]=x[jvj+196] ;z[jvj+411]=z[jvj+196];
l121:if((x[jvj+411]<=0)) goto l135;
x[jvj+395]=s[x[jvj+411]] ;z[jvj+395]=(x[jvj+395]<=sepcte) ? x[jvj+395] : z[jvj+411];
x[jvj+212]=x[jvj+395] ;z[jvj+212]=z[jvj+395];
x[jvj+203]=x[jvj+212] ;z[jvj+203]=z[jvj+212];
pile[v[22]]=jvj+203; pile[WZ1]=jvj+204; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+203,jvj+204)*/
x[jvj+396]=x[jvj+196] ;z[jvj+396]=z[jvj+196];
l122:if((x[jvj+396]>0)) goto l123;
x[jvj+411]=t[x[jvj+411]];
goto l121;
l117:x[jvj+393]=s[x[jvj+409]] ;z[jvj+393]=(x[jvj+393]<=sepcte) ? x[jvj+393] : z[jvj+409];
x[jvj+197]=x[jvj+393] ;z[jvj+197]=z[jvj+393];
pile[v[22]]=100; pile[WZ1]=jvj+197; pile[WZ2]=jvj+198; 
(*f[32])( );if(v[102]) goto l118;     /*FNDO0(100,jvj+197,jvj+198)*/
if((x[jvj+198]!=41)) goto l118;
pile[v[22]]=jvj+197; pile[WZ1]=jvj+199; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+197,jvj+199)*/
x[jvj+410]=x[jvj+196] ;z[jvj+410]=z[jvj+196];
l119:if((x[jvj+410]<=0)) goto l118;
x[jvj+394]=s[x[jvj+410]] ;z[jvj+394]=(x[jvj+394]<=sepcte) ? x[jvj+394] : z[jvj+410];
if((x[jvj+393]==x[jvj+394])) goto l120;
x[jvj+200]=x[jvj+394] ;z[jvj+200]=z[jvj+394];
pile[v[22]]=100; pile[WZ1]=jvj+200; pile[WZ2]=jvj+201; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(100,jvj+200,jvj+201)*/
if((x[jvj+201]!=41)) goto l120;
x[jvj+40]=0 ;z[jvj+40]=0;
goto l31;
l118:x[jvj+409]=t[x[jvj+409]];
goto l116;
l120:x[jvj+410]=t[x[jvj+410]];
goto l119;
l123:x[jvj+205]=s[x[jvj+396]] ;z[jvj+205]=(x[jvj+205]<=sepcte) ? x[jvj+205] : z[jvj+396];
if((x[jvj+395]==x[jvj+205])) goto l124;
pile[v[22]]=111; pile[WZ1]=jvj+205; pile[WZ2]=jvj+206; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(111,jvj+205,jvj+206)*/
pile[v[22]]=101; pile[WZ1]=jvj+206; pile[WZ2]=jvj+207; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(101,jvj+206,jvj+207)*/
if((x[jvj+207]!=486)) goto l124;
pile[v[22]]=107; pile[WZ1]=jvj+205; pile[WZ2]=jvj+208; 
(*f[33])( );     /*FNDE0(107,jvj+205,jvj+208)*/
for(i=x[jvj+208],V240=0;i>0;i=t[i],V240++)  ;
if((V240!=2)) goto l124;
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+378]=x[jvj+196] ;z[jvj+378]=z[jvj+196];
goto l23;
l124:x[jvj+396]=t[x[jvj+396]];
goto l122;
l126:x[jvj+412]=t[x[jvj+412]];
goto l125;
l129:x[MMMT]=16726 ;z[MMMT]=16726;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+292; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+292)*/
pile[WZ3]=486; pile[WZ4]=jvj+366; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+366)*/
pile[WZ3]=87; pile[WZ4]=jvj+368; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+368)*/
pile[v[22]]=jvj+368; pile[WZ1]=111; pile[WZ2]=jvj+369; 
(*f[54])( );     /*TRI1(jvj+368,111,jvj+369)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+211; pile[WZ4]=jvj+369; pile[WZ5]=jvj+367; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+211,jvj+369,jvj+367)*/
pile[WZ2]=111; pile[WZ3]=jvj+366; pile[WZ4]=jvj+293; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+366,jvj+293)*/
pile[v[22]]=jvj+293; pile[WZ1]=107; pile[WZ2]=jvj+367; 
(*f[36])( );     /*PLUSC0(jvj+293,107,jvj+367)*/
pile[WZ2]=jvj+204; 
(*f[36])( );     /*PLUSC0(jvj+293,107,jvj+204)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+292; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+292,MMMX)*/
pile[v[22]]=MMMX; pile[WZ1]=107; pile[WZ2]=jvj+293; 
(*f[36])( );     /*PLUSC0(MMMX,107,jvj+293)*/
pile[v[22]]=jvj+34; pile[WZ1]=MMMX; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+34,MMMX,107)*/
goto l144;
l132:pile[v[22]]=130; pile[WZ1]=jvj+216; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(130,jvj+216,V319)*/
V319=pile[WZ2]; 
pile[v[22]]=jvj+216; pile[WZ1]=jvj+225; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+216,jvj+225)*/
x[jvj+414]=x[jvj+215] ;z[jvj+414]=z[jvj+215];
l133:if((x[jvj+414]<=0)) goto l135;
x[jvj+400]=s[x[jvj+414]] ;z[jvj+400]=(x[jvj+400]<=sepcte) ? x[jvj+400] : z[jvj+414];
x[jvj+226]=x[jvj+400] ;z[jvj+226]=z[jvj+400];
pile[v[22]]=130; pile[WZ1]=jvj+226; 
(*f[26])( );if(v[102]) goto l134;     /*FNDC0(130,jvj+226,V320)*/
V320=pile[WZ2]; 
if((V319==V320)) goto l134;
x[jvj+47]=0 ;z[jvj+47]=0;
goto l37;
l134:x[jvj+414]=t[x[jvj+414]];
goto l133;
l135:pile[v[22]]=100; pile[WZ1]=MMMI; pile[WZ2]=jvj+227; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(100,MMMI,jvj+227)*/
if((x[jvj+227]!=22)) goto l143;
pile[v[22]]=103; pile[WZ2]=jvj+228; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(103,MMMI,jvj+228)*/
pile[v[22]]=111; pile[WZ1]=jvj+228; pile[WZ2]=jvj+229; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(111,jvj+228,jvj+229)*/
pile[v[22]]=101; pile[WZ1]=jvj+229; pile[WZ2]=jvj+230; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(101,jvj+229,jvj+230)*/
if((x[jvj+230]!=1215)) goto l139;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+231; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(102,MMMI,jvj+231)*/
pile[v[22]]=100; pile[WZ1]=jvj+231; pile[WZ2]=jvj+232; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(100,jvj+231,jvj+232)*/
if((x[jvj+232]!=41)) goto l139;
pile[v[22]]=107; pile[WZ1]=jvj+228; pile[WZ2]=jvj+233; 
(*f[33])( );     /*FNDE0(107,jvj+228,jvj+233)*/
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+234; 
(*f[33])( );     /*FNDE0(1564,145,jvj+234)*/
for(a=x[jvj+234];a>0;a=t[a]) if(s[a]==x[jvj+91]) goto l136;
l139:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+238; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+238)*/
pile[v[22]]=1675; pile[WZ1]=1714; pile[WZ2]=jvj+239; 
(*f[33])( );     /*FNDE0(1675,1714,jvj+239)*/
for(a=x[jvj+239];a>0;a=t[a]) if(s[a]==x[jvj+91]) goto l141;
l143:x[MMMT]=x[MMMX]=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l136:pile[v[22]]=jvj+231; pile[WZ1]=jvj+235; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+231,jvj+235)*/
x[jvj+401]=x[jvj+233] ;z[jvj+401]=z[jvj+233];
l137:if((x[jvj+401]<=0)) goto l139;
x[jvj+236]=s[x[jvj+401]] ;z[jvj+236]=(x[jvj+236]<=sepcte) ? x[jvj+236] : z[jvj+401];
pile[v[22]]=101; pile[WZ1]=jvj+236; pile[WZ2]=jvj+237; 
(*f[32])( );if(v[102]) goto l138;     /*FNDO0(101,jvj+236,jvj+237)*/
if((x[jvj+237]!=135)) goto l138;
x[jvj+24]=0 ;z[jvj+24]=0;
goto l17;
l138:x[jvj+401]=t[x[jvj+401]];
goto l137;
l141:x[jvj+402]=x[jvj+238] ;z[jvj+402]=z[jvj+238];
l140:if((x[jvj+402]<=0)) goto l143;
x[jvj+240]=s[x[jvj+402]] ;z[jvj+240]=(x[jvj+240]<=sepcte) ? x[jvj+240] : z[jvj+402];
pile[v[22]]=100; pile[WZ1]=jvj+240; pile[WZ2]=jvj+241; 
(*f[32])( );if(v[102]) goto l142;     /*FNDO0(100,jvj+240,jvj+241)*/
if((x[jvj+241]!=22)) goto l142;
pile[v[22]]=111; pile[WZ2]=jvj+242; 
(*f[32])( );if(v[102]) goto l142;     /*FNDO0(111,jvj+240,jvj+242)*/
pile[v[22]]=101; pile[WZ1]=jvj+242; pile[WZ2]=jvj+243; 
(*f[32])( );if(v[102]) goto l142;     /*FNDO0(101,jvj+242,jvj+243)*/
if((x[jvj+91]!=x[jvj+243])) goto l142;
x[jvj+76]=0 ;z[jvj+76]=0;
goto l53;
l142:x[jvj+402]=t[x[jvj+402]];
goto l140;
}
