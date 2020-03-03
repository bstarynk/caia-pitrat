#include "dx.h"
void SIMPEXPA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V46=0,V123=0,V122=0,V148=0,V160=0,V179=0,V178=0,V176=0,V210=0,V224=0,V223=0,V373=0,V404=0,V379=0,V403=0,V406=0,V380=0,V405=0,V197=0,V233=0,V216=0,V203=0,V218=0,V114=0,V98=0,V117=0,V99=0,V140=0,V124=0,V143=0,V125=0,V38=0,V22=0,V41=0,V23=0,V509=0,V191=0,V180=0,V193=0,V526=0,V513=0,V531=0,V14=0,I=0,V10=0,V17=0,J=0,V11=0,V168=0,V149=0,V164=0,V171=0,V150=0,V165=0,V388=0,V358=0,V384=0,V391=0,V394=0,V359=0,V385=0,V362=0,V467=0,V470=0,V452=0,V473=0,V476=0,V430=0,V433=0,V407=0,V440=0,V443=0,V318=0,V321=0,V290=0,V331=0,V264=0,V267=0,V237=0,V275=0,V278=0,V238=0,V288=0,V54=0;
int A,P;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=517;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; P=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+48]=x[A] ;z[jvj+48]=z[A];
l34:pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+48,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V197; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V197,R)*/
l169:v[0]=jvj; v[22]-=3; return;
l1:V4=I;
l87:if((V4==(-99999998))) goto l86;
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+1]=d[29];z[jvj+1]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+2; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[196])( );     /*PLUF0(jvj+1,jvj+2,jvj+3)*/
x[jvj+450]=x[jvj+72] ;z[jvj+450]=z[jvj+72];
l175:if((x[jvj+450]>0)) goto l176;
l88:pile[v[22]]=jvj+3; pile[WZ1]=jvj+92; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+235)*/
pile[v[22]]=jvj+235; pile[WZ1]=111; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,111,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=jvj+92; pile[WZ2]=107; pile[WZ3]=jvj+237; 
(*f[301])( );     /*TRI11(jvj+236,jvj+92,107,jvj+237)*/
pile[v[22]]=jvj+237; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+237,22,100,jvj+48)*/
goto l34;
l2:V4=J;
goto l87;
l4:if((V23!=999)) goto l5;
if((V22==0)) goto l5;
l65:x[jvj+410]=t[x[jvj+410]];
l64:if((x[jvj+410]<=0)) goto l63;
x[jvj+70]=s[x[jvj+410]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+410];
if((x[jvj+69]==x[jvj+70])) goto l65;
pile[v[22]]=130; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+70,V41)*/
V41=pile[WZ2]; 
V23=V41;
if((V23<0)) goto l65;
if((V22!=999)) goto l4;
if((V23==0)) goto l5;
goto l65;
l5:x[jvj+7]=0 ;z[jvj+7]=0;
V46=V22+V23;
x[jvj+5]=d[29];z[jvj+5]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V46; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(100,41,130,V46,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+6,jvj+7)*/
x[jvj+454]=x[jvj+51] ;z[jvj+454]=z[jvj+51];
l187:if((x[jvj+454]>0)) goto l188;
l66:pile[v[22]]=jvj+7; pile[WZ1]=jvj+71; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+226; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=111; pile[WZ2]=jvj+227; 
(*f[54])( );     /*TRI1(jvj+226,111,jvj+227)*/
pile[v[22]]=jvj+227; pile[WZ1]=jvj+71; pile[WZ2]=107; pile[WZ3]=jvj+228; 
(*f[301])( );     /*TRI11(jvj+227,jvj+71,107,jvj+228)*/
pile[v[22]]=jvj+228; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+228,22,100,jvj+48)*/
goto l34;
l7:x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
x[jvj+458]=x[jvj+72] ;z[jvj+458]=z[jvj+72];
l199:if((x[jvj+458]>0)) goto l200;
l140:pile[v[22]]=jvj+9; pile[WZ1]=jvj+155; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+254; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=111; pile[WZ2]=jvj+255; 
(*f[54])( );     /*TRI1(jvj+254,111,jvj+255)*/
pile[v[22]]=jvj+255; pile[WZ1]=jvj+155; pile[WZ2]=107; pile[WZ3]=jvj+256; 
(*f[301])( );     /*TRI11(jvj+255,jvj+155,107,jvj+256)*/
pile[v[22]]=jvj+256; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+256,22,100,jvj+48)*/
goto l34;
l9:x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+13)*/
x[jvj+460]=x[jvj+51] ;z[jvj+460]=z[jvj+51];
l205:if((x[jvj+460]>0)) goto l206;
l61:pile[v[22]]=jvj+12; pile[WZ1]=jvj+68; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+223; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=111; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+223,111,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=jvj+68; pile[WZ2]=107; pile[WZ3]=jvj+225; 
(*f[301])( );     /*TRI11(jvj+224,jvj+68,107,jvj+225)*/
pile[v[22]]=jvj+225; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+225,22,100,jvj+48)*/
goto l34;
l13:if((P==2)) goto l14;
V160=999;
l16:x[jvj+23]=d[29];z[jvj+23]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V160; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,V160,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[196])( );     /*PLUF0(jvj+23,jvj+24,jvj+25)*/
x[jvj+470]=x[jvj+72] ;z[jvj+470]=z[jvj+72];
l235:if((x[jvj+470]>0)) goto l236;
l94:V165=abs(V150);
if((V164!=V165)) goto l93;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+95; 
(*f[299])( );     /*COPEL0(jvj+25,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+238)*/
pile[v[22]]=jvj+238; pile[WZ1]=111; pile[WZ2]=jvj+239; 
(*f[54])( );     /*TRI1(jvj+238,111,jvj+239)*/
pile[v[22]]=jvj+239; pile[WZ1]=jvj+95; pile[WZ2]=107; pile[WZ3]=jvj+240; 
(*f[301])( );     /*TRI11(jvj+239,jvj+95,107,jvj+240)*/
pile[v[22]]=jvj+240; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+240,22,100,jvj+48)*/
goto l34;
l14:if((V150<0)) goto l15;
V179=V149+1;
V178=(-V179);
V160=V178;
goto l16;
l18:V210=999;
l19:x[jvj+27]=d[29];z[jvj+27]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V210; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,V210,jvj+28)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[196])( );     /*PLUF0(jvj+27,jvj+28,jvj+29)*/
x[jvj+474]=x[jvj+51] ;z[jvj+474]=z[jvj+51];
l247:if((x[jvj+474]>0)) goto l248;
l45:pile[v[22]]=jvj+29; pile[WZ1]=jvj+57; 
(*f[299])( );     /*COPEL0(jvj+29,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=111; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,111,jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ1]=jvj+57; pile[WZ2]=107; pile[WZ3]=jvj+216; 
(*f[301])( );     /*TRI11(jvj+215,jvj+57,107,jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+216,22,100,jvj+48)*/
goto l34;
l24:V373=V384;
l102:if((V373==(-99999998))) goto l101;
V362=V373;
x[jvj+424]=x[jvj+100] ;z[jvj+424]=z[jvj+100];
l103:if((x[jvj+424]<=0)) goto l101;
x[jvj+102]=s[x[jvj+424]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+424];
if((x[jvj+101]==x[jvj+102])) goto l104;
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[887])( );     /*VARND0(jvj+102,jvj+103)*/
if((x[jvj+103]==0)) goto l104;
pile[WZ1]=jvj+104; 
(*f[255])( );     /*COPEXP0(jvj+102,jvj+104)*/
x[jvj+42]=0 ;z[jvj+42]=0;
V380=incon;
if((V358>0)) goto l27;
V405=V358+V362;
V380=V405;
l28:x[jvj+40]=d[29];z[jvj+40]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V380; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V380,jvj+41)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[196])( );     /*PLUF0(jvj+40,jvj+41,jvj+42)*/
V379=incon;
if((V359>0)) goto l26;
V403=V359+V362;
V379=V403;
l171:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+209; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+209)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V379; pile[WZ4]=jvj+210; 
(*f[192])( );     /*QUADRI4(100,41,130,V379,jvj+210)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+209; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+209,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=107; pile[WZ2]=jvj+210; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+210)*/
pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+104)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+43)*/
x[jvj+490]=x[jvj+72] ;z[jvj+490]=z[jvj+72];
l295:if((x[jvj+490]>0)) goto l296;
l105:pile[v[22]]=jvj+42; pile[WZ1]=jvj+105; 
(*f[299])( );     /*COPEL0(jvj+42,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+241)*/
pile[WZ3]=485; pile[WZ4]=jvj+244; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=111; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,111,jvj+245)*/
pile[v[22]]=jvj+245; pile[WZ1]=jvj+105; pile[WZ2]=107; pile[WZ3]=jvj+246; 
(*f[301])( );     /*TRI11(jvj+245,jvj+105,107,jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+242; 
(*f[58])( );     /*TRI3(jvj+246,22,100,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V362; pile[WZ4]=jvj+243; 
(*f[192])( );     /*QUADRI4(100,41,130,V362,jvj+243)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+241; pile[WZ4]=jvj+106; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+241,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=107; pile[WZ2]=jvj+242; 
(*f[36])( );     /*PLUSC0(jvj+106,107,jvj+242)*/
pile[WZ2]=jvj+243; 
(*f[36])( );     /*PLUSC0(jvj+106,107,jvj+243)*/
pile[WZ1]=P; pile[WZ2]=jvj+107; 
(*f[4026])( );     /*SIMPEXPA0(jvj+106,P,jvj+107)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[760])( );     /*MEMEX0(jvj+48,jvj+107,jvj+108)*/
if((x[jvj+108]==134)) goto l106;
l104:x[jvj+424]=t[x[jvj+424]];
goto l103;
l25:V373=V385;
goto l102;
l26:V404=V359-V362;
V379=V404;
goto l171;
l27:V406=V358-V362;
V380=V406;
goto l28;
l32:x[jvj+47]=s[x[jvj+400]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+400];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+47)*/
x[jvj+400]=t[x[jvj+400]];
l31:if((x[jvj+400]>0)) goto l32;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+199; 
(*f[299])( );     /*COPEL0(jvj+45,jvj+199)*/
pile[v[22]]=111; pile[WZ1]=jvj+196; pile[WZ2]=jvj+200; 
(*f[32])( );if(v[102]) goto l167;     /*FNDO0(111,jvj+196,jvj+200)*/
pile[v[22]]=101; pile[WZ1]=jvj+200; pile[WZ2]=jvj+201; 
(*f[32])( );if(v[102]) goto l167;     /*FNDO0(101,jvj+200,jvj+201)*/
if((x[jvj+50]!=x[jvj+201])) goto l167;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+50; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+50,jvj+269)*/
pile[v[22]]=jvj+269; pile[WZ1]=111; pile[WZ2]=jvj+270; 
(*f[54])( );     /*TRI1(jvj+269,111,jvj+270)*/
pile[v[22]]=jvj+270; pile[WZ1]=jvj+199; pile[WZ2]=107; pile[WZ3]=jvj+271; 
(*f[301])( );     /*TRI11(jvj+270,jvj+199,107,jvj+271)*/
pile[v[22]]=jvj+271; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+271,22,100,jvj+48)*/
goto l34;
l35:pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l168;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l168;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==486)) goto l36;
if((x[jvj+50]!=485)) goto l164;
pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+72)*/
x[jvj+411]=x[jvj+72] ;z[jvj+411]=z[jvj+72];
l67:if((x[jvj+411]>0)) goto l68;
x[jvj+412]=x[jvj+72] ;z[jvj+412]=z[jvj+72];
l70:if((x[jvj+412]>0)) goto l71;
x[jvj+414]=x[jvj+72] ;z[jvj+414]=z[jvj+72];
l75:if((x[jvj+414]>0)) goto l76;
x[jvj+417]=x[jvj+72] ;z[jvj+417]=z[jvj+72];
l82:if((x[jvj+417]>0)) goto l83;
x[jvj+419]=x[jvj+72] ;z[jvj+419]=z[jvj+72];
l89:if((x[jvj+419]>0)) goto l90;
x[jvj+421]=x[jvj+72] ;z[jvj+421]=z[jvj+72];
l95:if((x[jvj+421]>0)) goto l96;
for(i=x[jvj+72],V467=0;i>0;i=t[i],V467++)  ;
if((V467!=2)) goto l130;
x[jvj+425]=x[jvj+72] ;z[jvj+425]=z[jvj+72];
l107:if((x[jvj+425]>0)) goto l108;
x[jvj+429]=x[jvj+72] ;z[jvj+429]=z[jvj+72];
l117:if((x[jvj+429]<=0)) goto l130;
x[jvj+122]=s[x[jvj+429]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+429];
pile[v[22]]=111; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l118;     /*FNDO0(111,jvj+122,jvj+123)*/
pile[v[22]]=101; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l118;     /*FNDO0(101,jvj+123,jvj+124)*/
if((x[jvj+124]!=486)) goto l118;
pile[v[22]]=107; pile[WZ1]=jvj+122; pile[WZ2]=jvj+125; 
(*f[33])( );     /*FNDE0(107,jvj+122,jvj+125)*/
for(i=x[jvj+125],V430=0;i>0;i=t[i],V430++)  ;
if((V430!=2)) goto l118;
x[jvj+430]=x[jvj+125] ;z[jvj+430]=z[jvj+125];
l119:if((x[jvj+430]<=0)) goto l118;
x[jvj+126]=s[x[jvj+430]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+430];
pile[v[22]]=130; pile[WZ1]=jvj+126; 
(*f[26])( );if(v[102]) goto l120;     /*FNDC0(130,jvj+126,V433)*/
V433=pile[WZ2]; 
V407=V433;
if((V407<=0)) goto l120;
x[jvj+431]=x[jvj+125] ;z[jvj+431]=z[jvj+125];
l121:if((x[jvj+431]<=0)) goto l120;
x[jvj+127]=s[x[jvj+431]] ;z[jvj+127]=(x[jvj+127]<=sepcte) ? x[jvj+127] : z[jvj+431];
if((x[jvj+126]==x[jvj+127])) goto l122;
pile[v[22]]=jvj+127; pile[WZ1]=jvj+128; 
(*f[887])( );     /*VARND0(jvj+127,jvj+128)*/
if((x[jvj+128]==0)) goto l122;
pile[WZ1]=jvj+129; 
(*f[255])( );     /*COPEXP0(jvj+127,jvj+129)*/
x[jvj+432]=x[jvj+72] ;z[jvj+432]=z[jvj+72];
l123:if((x[jvj+432]<=0)) goto l122;
x[jvj+130]=s[x[jvj+432]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+432];
if((x[jvj+122]==x[jvj+130])) goto l124;
pile[v[22]]=111; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(111,jvj+130,jvj+131)*/
pile[v[22]]=101; pile[WZ1]=jvj+131; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(101,jvj+131,jvj+132)*/
if((x[jvj+132]!=486)) goto l124;
pile[v[22]]=107; pile[WZ1]=jvj+130; pile[WZ2]=jvj+133; 
(*f[33])( );     /*FNDE0(107,jvj+130,jvj+133)*/
for(i=x[jvj+133],V440=0;i>0;i=t[i],V440++)  ;
if((V440!=2)) goto l124;
x[jvj+433]=x[jvj+133] ;z[jvj+433]=z[jvj+133];
l125:if((x[jvj+433]<=0)) goto l124;
x[jvj+134]=s[x[jvj+433]] ;z[jvj+134]=(x[jvj+134]<=sepcte) ? x[jvj+134] : z[jvj+433];
pile[v[22]]=130; pile[WZ1]=jvj+134; 
(*f[26])( );if(v[102]) goto l126;     /*FNDC0(130,jvj+134,V443)*/
V443=pile[WZ2]; 
if((V407!=V443)) goto l126;
x[jvj+434]=x[jvj+133] ;z[jvj+434]=z[jvj+133];
l127:if((x[jvj+434]<=0)) goto l126;
x[jvj+135]=s[x[jvj+434]] ;z[jvj+135]=(x[jvj+135]<=sepcte) ? x[jvj+135] : z[jvj+434];
if((x[jvj+134]==x[jvj+135])) goto l128;
pile[v[22]]=jvj+135; pile[WZ1]=jvj+136; 
(*f[887])( );     /*VARND0(jvj+135,jvj+136)*/
if((x[jvj+136]==0)) goto l128;
pile[WZ1]=jvj+137; 
(*f[255])( );     /*COPEXP0(jvj+135,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+204)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+204; pile[WZ4]=jvj+138; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+204,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=107; pile[WZ2]=jvj+129; 
(*f[36])( );     /*PLUSC0(jvj+138,107,jvj+129)*/
pile[WZ2]=jvj+137; 
(*f[36])( );     /*PLUSC0(jvj+138,107,jvj+137)*/
pile[WZ1]=P; pile[WZ2]=jvj+139; 
(*f[4026])( );     /*SIMPEXPA0(jvj+138,P,jvj+139)*/
pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[760])( );     /*MEMEX0(jvj+138,jvj+139,jvj+140)*/
if((x[jvj+140]==134)) goto l129;
l128:x[jvj+434]=t[x[jvj+434]];
goto l127;
l36:pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+51)*/
if((x[jvj+51]==0)) goto l170;
x[jvj+401]=x[jvj+51] ;z[jvj+401]=z[jvj+51];
l37:if((x[jvj+401]>0)) goto l38;
x[jvj+402]=x[jvj+51] ;z[jvj+402]=z[jvj+51];
l40:if((x[jvj+402]>0)) goto l41;
x[jvj+404]=x[jvj+51] ;z[jvj+404]=z[jvj+51];
l46:if((x[jvj+404]>0)) goto l47;
x[jvj+406]=x[jvj+51] ;z[jvj+406]=z[jvj+51];
l52:if((x[jvj+406]>0)) goto l53;
x[jvj+408]=x[jvj+51] ;z[jvj+408]=z[jvj+51];
l58:if((x[jvj+408]>0)) goto l59;
x[jvj+409]=x[jvj+51] ;z[jvj+409]=z[jvj+51];
l62:if((x[jvj+409]<=0)) goto l164;
x[jvj+69]=s[x[jvj+409]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+409];
pile[v[22]]=130; pile[WZ1]=jvj+69; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(130,jvj+69,V38)*/
V38=pile[WZ2]; 
V22=V38;
if((V22<0)) goto l63;
x[jvj+282]=x[jvj+69] ;z[jvj+282]=z[jvj+69];
x[jvj+410]=x[jvj+51] ;z[jvj+410]=z[jvj+51];
goto l64;
l38:x[jvj+52]=s[x[jvj+401]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+401];
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,jvj+52,V233)*/
V233=pile[WZ2]; 
if((V233!=0)) goto l39;
x[jvj+496]=x[jvj+51] ;z[jvj+496]=z[jvj+51];
l313:if((x[jvj+496]>0)) goto l314;
l39:x[jvj+401]=t[x[jvj+401]];
goto l37;
l41:x[jvj+55]=s[x[jvj+402]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+402];
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+55,V216)*/
V216=pile[WZ2]; 
x[jvj+326]=x[jvj+55] ;z[jvj+326]=z[jvj+55];
V203=V216;
x[jvj+403]=x[jvj+51] ;z[jvj+403]=z[jvj+51];
l43:if((x[jvj+403]<=0)) goto l42;
x[jvj+56]=s[x[jvj+403]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+403];
if((x[jvj+55]==x[jvj+56])) goto l44;
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+56,V218)*/
V218=pile[WZ2]; 
if((V218!=999)) goto l44;
x[jvj+29]=0 ;z[jvj+29]=0;
V210=incon;
if((V203==999)) goto l18;
if((V203==0)) goto l18;
V224=abs(V203);
V223=(-V224);
V210=V223;
goto l19;
l42:x[jvj+402]=t[x[jvj+402]];
goto l40;
l44:x[jvj+403]=t[x[jvj+403]];
goto l43;
l47:x[jvj+58]=s[x[jvj+404]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+404];
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+58,V114)*/
V114=pile[WZ2]; 
V98=V114;
if((V98<0)) goto l48;
if((V98==999)) goto l48;
x[jvj+299]=x[jvj+58] ;z[jvj+299]=z[jvj+58];
x[jvj+405]=x[jvj+51] ;z[jvj+405]=z[jvj+51];
l49:if((x[jvj+405]<=0)) goto l48;
x[jvj+59]=s[x[jvj+405]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+405];
if((x[jvj+58]==x[jvj+59])) goto l50;
pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(130,jvj+59,V117)*/
V117=pile[WZ2]; 
V99=V117;
if((V99>=0)) goto l50;
x[jvj+17]=0 ;z[jvj+17]=0;
V123=(-V98);
V122=V123+V99;
x[jvj+15]=d[29];z[jvj+15]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V122; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V122,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[196])( );     /*PLUF0(jvj+15,jvj+16,jvj+17)*/
x[jvj+462]=x[jvj+51] ;z[jvj+462]=z[jvj+51];
l211:if((x[jvj+462]>0)) goto l212;
l51:pile[v[22]]=jvj+17; pile[WZ1]=jvj+60; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+217; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=111; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,111,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=jvj+60; pile[WZ2]=107; pile[WZ3]=jvj+219; 
(*f[301])( );     /*TRI11(jvj+218,jvj+60,107,jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+219,22,100,jvj+48)*/
goto l34;
l48:x[jvj+404]=t[x[jvj+404]];
goto l46;
l50:x[jvj+405]=t[x[jvj+405]];
goto l49;
l53:x[jvj+61]=s[x[jvj+406]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+406];
pile[v[22]]=130; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+61,V140)*/
V140=pile[WZ2]; 
V124=V140;
if((V124>=0)) goto l54;
x[jvj+308]=x[jvj+61] ;z[jvj+308]=z[jvj+61];
x[jvj+407]=x[jvj+51] ;z[jvj+407]=z[jvj+51];
l55:if((x[jvj+407]<=0)) goto l54;
x[jvj+62]=s[x[jvj+407]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+407];
if((x[jvj+61]==x[jvj+62])) goto l56;
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+62,V143)*/
V143=pile[WZ2]; 
V125=V143;
if((V125>=0)) goto l56;
x[jvj+21]=0 ;z[jvj+21]=0;
V148=V124+V125;
x[jvj+19]=d[29];z[jvj+19]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V148; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V148,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[196])( );     /*PLUF0(jvj+19,jvj+20,jvj+21)*/
x[jvj+466]=x[jvj+51] ;z[jvj+466]=z[jvj+51];
l223:if((x[jvj+466]>0)) goto l224;
l57:pile[v[22]]=jvj+21; pile[WZ1]=jvj+63; 
(*f[299])( );     /*COPEL0(jvj+21,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+220; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=111; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+220,111,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=jvj+63; pile[WZ2]=107; pile[WZ3]=jvj+222; 
(*f[301])( );     /*TRI11(jvj+221,jvj+63,107,jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+222,22,100,jvj+48)*/
goto l34;
l54:x[jvj+406]=t[x[jvj+406]];
goto l52;
l56:x[jvj+407]=t[x[jvj+407]];
goto l55;
l59:x[jvj+64]=s[x[jvj+408]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+408];
pile[v[22]]=111; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+64,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]!=485)) goto l60;
pile[v[22]]=jvj+64; pile[WZ1]=P; pile[WZ2]=jvj+13; 
(*f[4026])( );     /*SIMPEXPA0(jvj+64,P,jvj+13)*/
pile[WZ1]=jvj+13; pile[WZ2]=jvj+67; 
(*f[760])( );     /*MEMEX0(jvj+64,jvj+13,jvj+67)*/
if((x[jvj+67]==134)) goto l9;
l60:x[jvj+408]=t[x[jvj+408]];
goto l58;
l63:x[jvj+409]=t[x[jvj+409]];
goto l62;
l68:x[jvj+73]=s[x[jvj+411]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+411];
pile[v[22]]=130; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(130,jvj+73,V509)*/
V509=pile[WZ2]; 
if((V509!=999)) goto l69;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=999; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,999,R)*/
goto l169;
l69:x[jvj+411]=t[x[jvj+411]];
goto l67;
l71:x[jvj+74]=s[x[jvj+412]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+412];
pile[v[22]]=130; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(130,jvj+74,V191)*/
V191=pile[WZ2]; 
V180=V191;
if((V180==0)) goto l72;
if((V180==999)) goto l72;
x[jvj+378]=x[jvj+74] ;z[jvj+378]=z[jvj+74];
x[jvj+498]=x[jvj+72] ;z[jvj+498]=z[jvj+72];
l319:if((x[jvj+498]>0)) goto l320;
l72:x[jvj+412]=t[x[jvj+412]];
goto l70;
l74:x[jvj+413]=t[x[jvj+413]];
l73:if((x[jvj+413]<=0)) goto l72;
x[jvj+79]=s[x[jvj+413]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+413];
if((x[jvj+74]==x[jvj+79])) goto l74;
pile[v[22]]=130; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(130,jvj+79,V193)*/
V193=pile[WZ2]; 
if((V193!=0)) goto l74;
x[R]=x[jvj+78] ;z[R]=z[jvj+78];
goto l169;
l76:x[jvj+80]=s[x[jvj+414]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+414];
pile[v[22]]=111; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(111,jvj+80,jvj+81)*/
pile[v[22]]=101; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(101,jvj+81,jvj+82)*/
if((x[jvj+82]!=486)) goto l77;
pile[v[22]]=107; pile[WZ1]=jvj+80; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(107,jvj+80,jvj+83)*/
x[jvj+383]=x[jvj+80] ;z[jvj+383]=z[jvj+80];
x[jvj+500]=x[jvj+72] ;z[jvj+500]=z[jvj+72];
l325:if((x[jvj+500]>0)) goto l326;
l77:x[jvj+414]=t[x[jvj+414]];
goto l75;
l79:x[jvj+415]=t[x[jvj+415]];
l78:if((x[jvj+415]<=0)) goto l77;
x[jvj+88]=s[x[jvj+415]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+415];
pile[v[22]]=130; pile[WZ1]=jvj+88; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(130,jvj+88,V526)*/
V526=pile[WZ2]; 
V513=V526;
if((V513==0)) goto l79;
if((V513==999)) goto l79;
x[jvj+416]=x[jvj+72] ;z[jvj+416]=z[jvj+72];
l80:if((x[jvj+416]<=0)) goto l79;
x[jvj+89]=s[x[jvj+416]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+416];
if((x[jvj+80]==x[jvj+89])) goto l81;
pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(130,jvj+89,V531)*/
V531=pile[WZ2]; 
if((V531!=0)) goto l81;
x[R]=x[jvj+87] ;z[R]=z[jvj+87];
goto l169;
l81:x[jvj+416]=t[x[jvj+416]];
goto l80;
l83:x[jvj+90]=s[x[jvj+417]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+417];
pile[v[22]]=130; pile[WZ1]=jvj+90; 
(*f[26])( );if(v[102]) goto l84;     /*FNDC0(130,jvj+90,V14)*/
V14=pile[WZ2]; 
I=V14;
if((I==999)) goto l84;
if((I==0)) goto l84;
V10=abs(I);
x[jvj+273]=x[jvj+90] ;z[jvj+273]=z[jvj+90];
x[jvj+418]=x[jvj+72] ;z[jvj+418]=z[jvj+72];
l85:if((x[jvj+418]<=0)) goto l84;
x[jvj+91]=s[x[jvj+418]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+418];
if((x[jvj+90]==x[jvj+91])) goto l86;
pile[v[22]]=130; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l86;     /*FNDC0(130,jvj+91,V17)*/
V17=pile[WZ2]; 
J=V17;
if((J==999)) goto l86;
if((J==0)) goto l86;
V11=abs(J);
V4=incon;
if((V10<V11)) goto l1;
if((V11<V10)) goto l2;
V4=(-99999998);
l86:x[jvj+418]=t[x[jvj+418]];
goto l85;
l84:x[jvj+417]=t[x[jvj+417]];
goto l82;
l90:x[jvj+93]=s[x[jvj+419]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+419];
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(130,jvj+93,V168)*/
V168=pile[WZ2]; 
V149=V168;
if((V149==999)) goto l91;
x[jvj+317]=x[jvj+93] ;z[jvj+317]=z[jvj+93];
V164=abs(V149);
x[jvj+420]=x[jvj+72] ;z[jvj+420]=z[jvj+72];
l92:if((x[jvj+420]<=0)) goto l91;
x[jvj+94]=s[x[jvj+420]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+420];
if((x[jvj+93]==x[jvj+94])) goto l93;
pile[v[22]]=130; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l93;     /*FNDC0(130,jvj+94,V171)*/
V171=pile[WZ2]; 
V150=V171;
x[jvj+25]=0 ;z[jvj+25]=0;
V160=incon;
if((V149==0)) goto l13;
if((P!=2)) goto l15;
if((V149>=0)) goto l14;
l15:V176=(-V164);
V160=V176;
goto l16;
l91:x[jvj+419]=t[x[jvj+419]];
goto l89;
l93:x[jvj+420]=t[x[jvj+420]];
goto l92;
l96:x[jvj+96]=s[x[jvj+421]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+421];
pile[v[22]]=130; pile[WZ1]=jvj+96; 
(*f[26])( );if(v[102]) goto l97;     /*FNDC0(130,jvj+96,V388)*/
V388=pile[WZ2]; 
V358=V388;
if((V358==0)) goto l97;
if((V358==999)) goto l97;
V384=abs(V358);
x[jvj+360]=x[jvj+96] ;z[jvj+360]=z[jvj+96];
x[jvj+422]=x[jvj+72] ;z[jvj+422]=z[jvj+72];
l98:if((x[jvj+422]<=0)) goto l97;
x[jvj+97]=s[x[jvj+422]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+422];
if((x[jvj+96]==x[jvj+97])) goto l99;
pile[v[22]]=111; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(111,jvj+97,jvj+98)*/
pile[v[22]]=101; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(101,jvj+98,jvj+99)*/
if((x[jvj+99]!=486)) goto l99;
pile[v[22]]=107; pile[WZ1]=jvj+97; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(107,jvj+97,jvj+100)*/
for(i=x[jvj+100],V391=0;i>0;i=t[i],V391++)  ;
if((V391!=2)) goto l99;
x[jvj+423]=x[jvj+100] ;z[jvj+423]=z[jvj+100];
l100:if((x[jvj+423]<=0)) goto l99;
x[jvj+101]=s[x[jvj+423]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+423];
pile[v[22]]=130; pile[WZ1]=jvj+101; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(130,jvj+101,V394)*/
V394=pile[WZ2]; 
V359=V394;
if((V359==0)) goto l101;
if((V359==999)) goto l101;
V385=abs(V359);
V373=incon;
if((V384<V385)) goto l24;
if((V385<V384)) goto l25;
V373=(-99999998);
l101:x[jvj+423]=t[x[jvj+423]];
goto l100;
l97:x[jvj+421]=t[x[jvj+421]];
goto l95;
l99:x[jvj+422]=t[x[jvj+422]];
goto l98;
l106:x[R]=x[jvj+107] ;z[R]=z[jvj+107];
goto l169;
l108:x[jvj+109]=s[x[jvj+425]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+425];
pile[v[22]]=130; pile[WZ1]=jvj+109; 
(*f[26])( );if(v[102]) goto l109;     /*FNDC0(130,jvj+109,V470)*/
V470=pile[WZ2]; 
V452=V470;
if((V452<=0)) goto l109;
x[jvj+426]=x[jvj+72] ;z[jvj+426]=z[jvj+72];
l110:if((x[jvj+426]<=0)) goto l109;
x[jvj+110]=s[x[jvj+426]] ;z[jvj+110]=(x[jvj+110]<=sepcte) ? x[jvj+110] : z[jvj+426];
if((x[jvj+109]==x[jvj+110])) goto l111;
pile[v[22]]=111; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(111,jvj+110,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l111;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]!=486)) goto l111;
pile[v[22]]=107; pile[WZ1]=jvj+110; pile[WZ2]=jvj+113; 
(*f[33])( );     /*FNDE0(107,jvj+110,jvj+113)*/
for(i=x[jvj+113],V473=0;i>0;i=t[i],V473++)  ;
if((V473!=2)) goto l111;
x[jvj+427]=x[jvj+113] ;z[jvj+427]=z[jvj+113];
l112:if((x[jvj+427]<=0)) goto l111;
x[jvj+114]=s[x[jvj+427]] ;z[jvj+114]=(x[jvj+114]<=sepcte) ? x[jvj+114] : z[jvj+427];
pile[v[22]]=130; pile[WZ1]=jvj+114; 
(*f[26])( );if(v[102]) goto l113;     /*FNDC0(130,jvj+114,V476)*/
V476=pile[WZ2]; 
if((V452!=V476)) goto l113;
x[jvj+428]=x[jvj+113] ;z[jvj+428]=z[jvj+113];
l114:if((x[jvj+428]<=0)) goto l113;
x[jvj+115]=s[x[jvj+428]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+428];
if((x[jvj+114]==x[jvj+115])) goto l115;
pile[v[22]]=jvj+115; pile[WZ1]=jvj+116; 
(*f[887])( );     /*VARND0(jvj+115,jvj+116)*/
if((x[jvj+116]==0)) goto l115;
pile[WZ1]=jvj+117; 
(*f[255])( );     /*COPEXP0(jvj+115,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+202; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+202)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+203; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+203)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+202; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+202,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=107; pile[WZ2]=jvj+203; 
(*f[36])( );     /*PLUSC0(jvj+118,107,jvj+203)*/
pile[WZ2]=jvj+117; 
(*f[36])( );     /*PLUSC0(jvj+118,107,jvj+117)*/
pile[WZ1]=P; pile[WZ2]=jvj+119; 
(*f[4026])( );     /*SIMPEXPA0(jvj+118,P,jvj+119)*/
pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[760])( );     /*MEMEX0(jvj+118,jvj+119,jvj+120)*/
if((x[jvj+120]==134)) goto l116;
l115:x[jvj+428]=t[x[jvj+428]];
goto l114;
l109:x[jvj+425]=t[x[jvj+425]];
goto l107;
l111:x[jvj+426]=t[x[jvj+426]];
goto l110;
l113:x[jvj+427]=t[x[jvj+427]];
goto l112;
l116:pile[v[22]]=jvj+119; pile[WZ1]=jvj+121; 
(*f[255])( );     /*COPEXP0(jvj+119,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+247)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V452; pile[WZ4]=jvj+248; 
(*f[192])( );     /*QUADRI4(100,41,130,V452,jvj+248)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+247; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+247,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=107; pile[WZ2]=jvj+248; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+248)*/
pile[WZ2]=jvj+121; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+121)*/
goto l34;
l118:x[jvj+429]=t[x[jvj+429]];
goto l117;
l120:x[jvj+430]=t[x[jvj+430]];
goto l119;
l122:x[jvj+431]=t[x[jvj+431]];
goto l121;
l124:x[jvj+432]=t[x[jvj+432]];
goto l123;
l126:x[jvj+433]=t[x[jvj+433]];
goto l125;
l129:pile[v[22]]=jvj+139; pile[WZ1]=jvj+141; 
(*f[255])( );     /*COPEXP0(jvj+139,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+249; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+249)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V407; pile[WZ4]=jvj+250; 
(*f[192])( );     /*QUADRI4(100,41,130,V407,jvj+250)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+249; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+249,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=107; pile[WZ2]=jvj+250; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+250)*/
pile[WZ2]=jvj+141; 
(*f[36])( );     /*PLUSC0(jvj+48,107,jvj+141)*/
goto l34;
l130:if((P!=2)) goto l138;
x[jvj+435]=x[jvj+72] ;z[jvj+435]=z[jvj+72];
l131:if((x[jvj+435]<=0)) goto l138;
x[jvj+142]=s[x[jvj+435]] ;z[jvj+142]=(x[jvj+142]<=sepcte) ? x[jvj+142] : z[jvj+435];
pile[v[22]]=100; pile[WZ1]=jvj+142; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l132;     /*FNDO0(100,jvj+142,jvj+143)*/
if((x[jvj+143]!=484)) goto l132;
x[jvj+149]=x[jvj+142] ;z[jvj+149]=z[jvj+142];
x[jvj+144]=x[jvj+149] ;z[jvj+144]=z[jvj+149];
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; 
(*f[255])( );     /*COPEXP0(jvj+144,jvj+145)*/
x[jvj+436]=x[jvj+72] ;z[jvj+436]=z[jvj+72];
l133:if((x[jvj+436]<=0)) goto l132;
x[jvj+146]=s[x[jvj+436]] ;z[jvj+146]=(x[jvj+146]<=sepcte) ? x[jvj+146] : z[jvj+436];
if((x[jvj+142]==x[jvj+146])) goto l134;
pile[v[22]]=100; pile[WZ1]=jvj+146; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l134;     /*FNDO0(100,jvj+146,jvj+147)*/
if((x[jvj+147]!=484)) goto l134;
x[jvj+37]=0 ;z[jvj+37]=0;
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+207; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+207)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+208; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+208)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+207; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+207,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=107; pile[WZ2]=jvj+208; 
(*f[36])( );     /*PLUSC0(jvj+38,107,jvj+208)*/
pile[WZ2]=jvj+145; 
(*f[36])( );     /*PLUSC0(jvj+38,107,jvj+145)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
x[jvj+486]=x[jvj+72] ;z[jvj+486]=z[jvj+72];
l283:if((x[jvj+486]>0)) goto l284;
l135:pile[v[22]]=jvj+37; pile[WZ1]=jvj+148; 
(*f[299])( );     /*COPEL0(jvj+37,jvj+148)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+146; pile[WZ2]=jvj+150; 
(*f[760])( );     /*MEMEX0(jvj+149,jvj+146,jvj+150)*/
if((x[jvj+150]==135)) goto l172;
l134:x[jvj+436]=t[x[jvj+436]];
goto l133;
l132:x[jvj+435]=t[x[jvj+435]];
goto l131;
l137:x[jvj+151]=s[x[jvj+437]] ;z[jvj+151]=(x[jvj+151]<=sepcte) ? x[jvj+151] : z[jvj+437];
pile[v[22]]=111; pile[WZ1]=jvj+151; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(111,jvj+151,jvj+152)*/
pile[v[22]]=101; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(101,jvj+152,jvj+153)*/
if((x[jvj+153]!=486)) goto l139;
pile[v[22]]=jvj+151; pile[WZ1]=P; pile[WZ2]=jvj+10; 
(*f[4026])( );     /*SIMPEXPA0(jvj+151,P,jvj+10)*/
pile[WZ1]=jvj+10; pile[WZ2]=jvj+154; 
(*f[760])( );     /*MEMEX0(jvj+151,jvj+10,jvj+154)*/
if((x[jvj+154]==134)) goto l7;
l139:x[jvj+437]=t[x[jvj+437]];
l136:if((x[jvj+437]>0)) goto l137;
x[jvj+438]=x[jvj+72] ;z[jvj+438]=z[jvj+72];
l141:if((x[jvj+438]>0)) goto l142;
x[jvj+442]=x[jvj+72] ;z[jvj+442]=z[jvj+72];
l151:if((x[jvj+442]<=0)) goto l164;
x[jvj+173]=s[x[jvj+442]] ;z[jvj+173]=(x[jvj+173]<=sepcte) ? x[jvj+173] : z[jvj+442];
pile[v[22]]=111; pile[WZ1]=jvj+173; pile[WZ2]=jvj+174; 
(*f[32])( );if(v[102]) goto l152;     /*FNDO0(111,jvj+173,jvj+174)*/
pile[v[22]]=101; pile[WZ1]=jvj+174; pile[WZ2]=jvj+175; 
(*f[32])( );if(v[102]) goto l152;     /*FNDO0(101,jvj+174,jvj+175)*/
if((x[jvj+175]!=486)) goto l152;
pile[v[22]]=107; pile[WZ1]=jvj+173; pile[WZ2]=jvj+176; 
(*f[33])( );     /*FNDE0(107,jvj+173,jvj+176)*/
for(i=x[jvj+176],V264=0;i>0;i=t[i],V264++)  ;
if((V264!=2)) goto l152;
x[jvj+335]=x[jvj+173] ;z[jvj+335]=z[jvj+173];
x[jvj+443]=x[jvj+176] ;z[jvj+443]=z[jvj+176];
l153:if((x[jvj+443]<=0)) goto l152;
x[jvj+177]=s[x[jvj+443]] ;z[jvj+177]=(x[jvj+177]<=sepcte) ? x[jvj+177] : z[jvj+443];
pile[v[22]]=130; pile[WZ1]=jvj+177; 
(*f[26])( );if(v[102]) goto l154;     /*FNDC0(130,jvj+177,V267)*/
V267=pile[WZ2]; 
V237=V267;
x[jvj+444]=x[jvj+176] ;z[jvj+444]=z[jvj+176];
l155:if((x[jvj+444]<=0)) goto l154;
x[jvj+178]=s[x[jvj+444]] ;z[jvj+178]=(x[jvj+178]<=sepcte) ? x[jvj+178] : z[jvj+444];
if((x[jvj+177]==x[jvj+178])) goto l156;
pile[v[22]]=100; pile[WZ1]=jvj+178; pile[WZ2]=jvj+179; 
(*f[32])( );if(v[102]) goto l156;     /*FNDO0(100,jvj+178,jvj+179)*/
if((x[jvj+179]!=484)) goto l156;
x[jvj+180]=x[jvj+178] ;z[jvj+180]=z[jvj+178];
pile[v[22]]=jvj+180; pile[WZ1]=jvj+181; 
(*f[255])( );     /*COPEXP0(jvj+180,jvj+181)*/
x[jvj+445]=x[jvj+72] ;z[jvj+445]=z[jvj+72];
l157:if((x[jvj+445]<=0)) goto l156;
x[jvj+182]=s[x[jvj+445]] ;z[jvj+182]=(x[jvj+182]<=sepcte) ? x[jvj+182] : z[jvj+445];
if((x[jvj+173]==x[jvj+182])) goto l158;
pile[v[22]]=111; pile[WZ1]=jvj+182; pile[WZ2]=jvj+183; 
(*f[32])( );if(v[102]) goto l158;     /*FNDO0(111,jvj+182,jvj+183)*/
pile[v[22]]=101; pile[WZ1]=jvj+183; pile[WZ2]=jvj+184; 
(*f[32])( );if(v[102]) goto l158;     /*FNDO0(101,jvj+183,jvj+184)*/
if((x[jvj+184]!=486)) goto l158;
pile[v[22]]=107; pile[WZ1]=jvj+182; pile[WZ2]=jvj+185; 
(*f[33])( );     /*FNDE0(107,jvj+182,jvj+185)*/
for(i=x[jvj+185],V275=0;i>0;i=t[i],V275++)  ;
if((V275!=2)) goto l158;
x[jvj+446]=x[jvj+185] ;z[jvj+446]=z[jvj+185];
l159:if((x[jvj+446]<=0)) goto l158;
x[jvj+186]=s[x[jvj+446]] ;z[jvj+186]=(x[jvj+186]<=sepcte) ? x[jvj+186] : z[jvj+446];
pile[v[22]]=130; pile[WZ1]=jvj+186; 
(*f[26])( );if(v[102]) goto l160;     /*FNDC0(130,jvj+186,V278)*/
V278=pile[WZ2]; 
V238=V278;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+263; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+263)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V237; pile[WZ4]=jvj+264; 
(*f[192])( );     /*QUADRI4(100,41,130,V237,jvj+264)*/
pile[WZ3]=V238; pile[WZ4]=jvj+265; 
(*f[192])( );     /*QUADRI4(100,41,130,V238,jvj+265)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+263; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+263,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=107; pile[WZ2]=jvj+264; 
(*f[36])( );     /*PLUSC0(jvj+187,107,jvj+264)*/
pile[WZ2]=jvj+265; 
(*f[36])( );     /*PLUSC0(jvj+187,107,jvj+265)*/
pile[WZ1]=P; pile[WZ2]=jvj+188; 
(*f[4026])( );     /*SIMPEXPA0(jvj+187,P,jvj+188)*/
pile[v[22]]=130; pile[WZ1]=jvj+188; 
(*f[26])( );if(v[102]) goto l160;     /*FNDC0(130,jvj+188,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=jvj+188; pile[WZ1]=jvj+189; 
(*f[255])( );     /*COPEXP0(jvj+188,jvj+189)*/
x[jvj+31]=0 ;z[jvj+31]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+205; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+205)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+205; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+205,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=107; pile[WZ2]=jvj+189; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+189)*/
pile[WZ2]=jvj+181; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+181)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+32)*/
x[jvj+478]=x[jvj+72] ;z[jvj+478]=z[jvj+72];
l259:if((x[jvj+478]>0)) goto l260;
l161:pile[v[22]]=jvj+31; pile[WZ1]=jvj+190; 
(*f[299])( );     /*COPEL0(jvj+31,jvj+190)*/
x[jvj+447]=x[jvj+185] ;z[jvj+447]=z[jvj+185];
l162:if((x[jvj+447]<=0)) goto l160;
x[jvj+191]=s[x[jvj+447]] ;z[jvj+191]=(x[jvj+191]<=sepcte) ? x[jvj+191] : z[jvj+447];
if((x[jvj+186]==x[jvj+191])) goto l163;
pile[v[22]]=100; pile[WZ1]=jvj+191; pile[WZ2]=jvj+192; 
(*f[32])( );if(v[102]) goto l163;     /*FNDO0(100,jvj+191,jvj+192)*/
if((x[jvj+192]!=484)) goto l163;
pile[v[22]]=jvj+178; pile[WZ2]=jvj+193; 
(*f[760])( );     /*MEMEX0(jvj+178,jvj+191,jvj+193)*/
if((x[jvj+193]==135)) goto l174;
l163:x[jvj+447]=t[x[jvj+447]];
goto l162;
l138:x[jvj+437]=x[jvj+72] ;z[jvj+437]=z[jvj+72];
goto l136;
l142:x[jvj+156]=s[x[jvj+438]] ;z[jvj+156]=(x[jvj+156]<=sepcte) ? x[jvj+156] : z[jvj+438];
pile[v[22]]=100; pile[WZ1]=jvj+156; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l143;     /*FNDO0(100,jvj+156,jvj+157)*/
if((x[jvj+157]!=484)) goto l143;
x[jvj+171]=x[jvj+156] ;z[jvj+171]=z[jvj+156];
x[jvj+158]=x[jvj+171] ;z[jvj+158]=z[jvj+171];
pile[v[22]]=jvj+158; pile[WZ1]=jvj+159; 
(*f[255])( );     /*COPEXP0(jvj+158,jvj+159)*/
x[jvj+439]=x[jvj+72] ;z[jvj+439]=z[jvj+72];
l144:if((x[jvj+439]<=0)) goto l143;
x[jvj+160]=s[x[jvj+439]] ;z[jvj+160]=(x[jvj+160]<=sepcte) ? x[jvj+160] : z[jvj+439];
if((x[jvj+156]==x[jvj+160])) goto l145;
pile[v[22]]=111; pile[WZ1]=jvj+160; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(111,jvj+160,jvj+161)*/
pile[v[22]]=101; pile[WZ1]=jvj+161; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l145;     /*FNDO0(101,jvj+161,jvj+162)*/
if((x[jvj+162]!=486)) goto l145;
pile[v[22]]=107; pile[WZ1]=jvj+160; pile[WZ2]=jvj+163; 
(*f[33])( );     /*FNDE0(107,jvj+160,jvj+163)*/
for(i=x[jvj+163],V318=0;i>0;i=t[i],V318++)  ;
if((V318!=2)) goto l145;
x[jvj+440]=x[jvj+163] ;z[jvj+440]=z[jvj+163];
l146:if((x[jvj+440]<=0)) goto l145;
x[jvj+164]=s[x[jvj+440]] ;z[jvj+164]=(x[jvj+164]<=sepcte) ? x[jvj+164] : z[jvj+440];
pile[v[22]]=130; pile[WZ1]=jvj+164; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(130,jvj+164,V321)*/
V321=pile[WZ2]; 
V290=V321;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+257; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+257)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+258; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+258)*/
pile[WZ3]=V290; pile[WZ4]=jvj+259; 
(*f[192])( );     /*QUADRI4(100,41,130,V290,jvj+259)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+257; pile[WZ4]=jvj+165; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+257,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=107; pile[WZ2]=jvj+258; 
(*f[36])( );     /*PLUSC0(jvj+165,107,jvj+258)*/
pile[WZ2]=jvj+259; 
(*f[36])( );     /*PLUSC0(jvj+165,107,jvj+259)*/
pile[WZ1]=P; pile[WZ2]=jvj+166; 
(*f[4026])( );     /*SIMPEXPA0(jvj+165,P,jvj+166)*/
pile[v[22]]=130; pile[WZ1]=jvj+166; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(130,jvj+166,V331)*/
V331=pile[WZ2]; 
pile[v[22]]=jvj+166; pile[WZ1]=jvj+167; 
(*f[255])( );     /*COPEXP0(jvj+166,jvj+167)*/
x[jvj+34]=0 ;z[jvj+34]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+206)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+206; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+206,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=107; pile[WZ2]=jvj+167; 
(*f[36])( );     /*PLUSC0(jvj+35,107,jvj+167)*/
pile[WZ2]=jvj+159; 
(*f[36])( );     /*PLUSC0(jvj+35,107,jvj+159)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+35)*/
x[jvj+482]=x[jvj+72] ;z[jvj+482]=z[jvj+72];
l271:if((x[jvj+482]>0)) goto l272;
l148:pile[v[22]]=jvj+34; pile[WZ1]=jvj+168; 
(*f[299])( );     /*COPEL0(jvj+34,jvj+168)*/
x[jvj+441]=x[jvj+163] ;z[jvj+441]=z[jvj+163];
l149:if((x[jvj+441]<=0)) goto l147;
x[jvj+169]=s[x[jvj+441]] ;z[jvj+169]=(x[jvj+169]<=sepcte) ? x[jvj+169] : z[jvj+441];
if((x[jvj+164]==x[jvj+169])) goto l150;
pile[v[22]]=100; pile[WZ1]=jvj+169; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l150;     /*FNDO0(100,jvj+169,jvj+170)*/
if((x[jvj+170]!=484)) goto l150;
pile[v[22]]=jvj+171; pile[WZ2]=jvj+172; 
(*f[760])( );     /*MEMEX0(jvj+171,jvj+169,jvj+172)*/
if((x[jvj+172]==135)) goto l173;
l150:x[jvj+441]=t[x[jvj+441]];
goto l149;
l143:x[jvj+438]=t[x[jvj+438]];
goto l141;
l145:x[jvj+439]=t[x[jvj+439]];
goto l144;
l147:x[jvj+440]=t[x[jvj+440]];
goto l146;
l152:x[jvj+442]=t[x[jvj+442]];
goto l151;
l154:x[jvj+443]=t[x[jvj+443]];
goto l153;
l156:x[jvj+444]=t[x[jvj+444]];
goto l155;
l158:x[jvj+445]=t[x[jvj+445]];
goto l157;
l160:x[jvj+446]=t[x[jvj+446]];
goto l159;
l164:if(x[jvj+50]!=485&&x[jvj+50]!=486) goto l168;
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+194; 
(*f[32])( );if(v[102]) goto l168;     /*FNDO0(100,jvj+48,jvj+194)*/
if((x[jvj+194]!=22)) goto l168;
pile[v[22]]=107; pile[WZ2]=jvj+195; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+195)*/
for(i=x[jvj+195],V54=0;i>0;i=t[i],V54++)  ;
if((V54!=1)) goto l166;
if((x[jvj+195]<=0)) goto l166;
x[jvj+449]=s[x[jvj+195]] ;z[jvj+449]=(x[jvj+449]<=sepcte) ? x[jvj+449] : z[jvj+195];
x[jvj+48]=x[jvj+449] ;z[jvj+48]=z[jvj+449];
goto l34;
l166:x[jvj+448]=x[jvj+195] ;z[jvj+448]=z[jvj+195];
l165:if((x[jvj+448]<=0)) goto l168;
x[jvj+196]=s[x[jvj+448]] ;z[jvj+196]=(x[jvj+196]<=sepcte) ? x[jvj+196] : z[jvj+448];
pile[v[22]]=100; pile[WZ1]=jvj+196; pile[WZ2]=jvj+197; 
(*f[32])( );if(v[102]) goto l167;     /*FNDO0(100,jvj+196,jvj+197)*/
if((x[jvj+197]!=22)) goto l167;
x[jvj+369]=x[jvj+196] ;z[jvj+369]=z[jvj+196];
pile[v[22]]=107; pile[WZ2]=jvj+198; 
(*f[33])( );     /*FNDE0(107,jvj+196,jvj+198)*/
x[jvj+45]=0 ;z[jvj+45]=0;
x[jvj+494]=x[jvj+195] ;z[jvj+494]=z[jvj+195];
l307:if((x[jvj+494]>0)) goto l308;
l33:x[jvj+400]=x[jvj+198] ;z[jvj+400]=z[jvj+198];
goto l31;
l167:x[jvj+448]=t[x[jvj+448]];
goto l165;
l168:x[R]=x[jvj+48] ;z[R]=z[jvj+48];
goto l169;
l170:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,0,R)*/
goto l169;
l172:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+251; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+251)*/
pile[v[22]]=jvj+251; pile[WZ1]=111; pile[WZ2]=jvj+252; 
(*f[54])( );     /*TRI1(jvj+251,111,jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=jvj+148; pile[WZ2]=107; pile[WZ3]=jvj+253; 
(*f[301])( );     /*TRI11(jvj+252,jvj+148,107,jvj+253)*/
pile[v[22]]=jvj+253; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+253,22,100,jvj+48)*/
goto l34;
l173:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+260; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+260)*/
pile[v[22]]=jvj+260; pile[WZ1]=111; pile[WZ2]=jvj+261; 
(*f[54])( );     /*TRI1(jvj+260,111,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=jvj+168; pile[WZ2]=107; pile[WZ3]=jvj+262; 
(*f[301])( );     /*TRI11(jvj+261,jvj+168,107,jvj+262)*/
pile[v[22]]=jvj+262; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+262,22,100,jvj+48)*/
goto l34;
l174:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+266; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+266)*/
pile[v[22]]=jvj+266; pile[WZ1]=111; pile[WZ2]=jvj+267; 
(*f[54])( );     /*TRI1(jvj+266,111,jvj+267)*/
pile[v[22]]=jvj+267; pile[WZ1]=jvj+190; pile[WZ2]=107; pile[WZ3]=jvj+268; 
(*f[301])( );     /*TRI11(jvj+267,jvj+190,107,jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+268,22,100,jvj+48)*/
goto l34;
l176:x[jvj+272]=s[x[jvj+450]] ;z[jvj+272]=(x[jvj+272]<=sepcte) ? x[jvj+272] : z[jvj+450];
pile[v[22]]=jvj+272; pile[WZ1]=jvj+273; pile[WZ2]=jvj+274; 
(*f[760])( );     /*MEMEX0(jvj+272,jvj+273,jvj+274)*/
if((x[jvj+274]==135)) goto l177;
x[jvj+450]=t[x[jvj+450]];
goto l175;
l177:x[jvj+275]=0 ;z[jvj+275]=0;
x[jvj+451]=x[jvj+72] ;z[jvj+451]=z[jvj+72];
l178:if((x[jvj+451]>0)) goto l179;
x[jvj+508]=x[jvj+275] ;z[jvj+508]=z[jvj+275];
x[jvj+452]=x[jvj+508] ;z[jvj+452]=z[jvj+508];
l181:if((x[jvj+452]>0)) goto l182;
goto l88;
l179:x[jvj+276]=s[x[jvj+451]] ;z[jvj+276]=(x[jvj+276]<=sepcte) ? x[jvj+276] : z[jvj+451];
if((x[jvj+276]==x[jvj+272])) goto l180;
pile[v[22]]=jvj+275; pile[WZ1]=jvj+276; 
(*f[68])( );     /*PLUE0(jvj+275,jvj+276)*/
l180:x[jvj+451]=t[x[jvj+451]];
goto l178;
l182:x[jvj+277]=s[x[jvj+452]] ;z[jvj+277]=(x[jvj+277]<=sepcte) ? x[jvj+277] : z[jvj+452];
pile[v[22]]=jvj+277; pile[WZ1]=jvj+91; pile[WZ2]=jvj+278; 
(*f[760])( );     /*MEMEX0(jvj+277,jvj+91,jvj+278)*/
if((x[jvj+278]==135)) goto l183;
x[jvj+452]=t[x[jvj+452]];
goto l181;
l183:x[jvj+279]=0 ;z[jvj+279]=0;
x[jvj+453]=x[jvj+508] ;z[jvj+453]=z[jvj+508];
l184:if((x[jvj+453]>0)) goto l185;
x[jvj+387]=x[jvj+279] ;z[jvj+387]=z[jvj+279];
l3:if((x[jvj+387]<=0)) goto l88;
x[jvj+4]=s[x[jvj+387]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+387];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
x[jvj+387]=t[x[jvj+387]];
goto l3;
l185:x[jvj+280]=s[x[jvj+453]] ;z[jvj+280]=(x[jvj+280]<=sepcte) ? x[jvj+280] : z[jvj+453];
if((x[jvj+280]==x[jvj+277])) goto l186;
pile[v[22]]=jvj+279; pile[WZ1]=jvj+280; 
(*f[68])( );     /*PLUE0(jvj+279,jvj+280)*/
l186:x[jvj+453]=t[x[jvj+453]];
goto l184;
l188:x[jvj+281]=s[x[jvj+454]] ;z[jvj+281]=(x[jvj+281]<=sepcte) ? x[jvj+281] : z[jvj+454];
pile[v[22]]=jvj+281; pile[WZ1]=jvj+282; pile[WZ2]=jvj+283; 
(*f[760])( );     /*MEMEX0(jvj+281,jvj+282,jvj+283)*/
if((x[jvj+283]==135)) goto l189;
x[jvj+454]=t[x[jvj+454]];
goto l187;
l189:x[jvj+284]=0 ;z[jvj+284]=0;
x[jvj+455]=x[jvj+51] ;z[jvj+455]=z[jvj+51];
l190:if((x[jvj+455]>0)) goto l191;
x[jvj+509]=x[jvj+284] ;z[jvj+509]=z[jvj+284];
x[jvj+456]=x[jvj+509] ;z[jvj+456]=z[jvj+509];
l193:if((x[jvj+456]>0)) goto l194;
goto l66;
l191:x[jvj+285]=s[x[jvj+455]] ;z[jvj+285]=(x[jvj+285]<=sepcte) ? x[jvj+285] : z[jvj+455];
if((x[jvj+285]==x[jvj+281])) goto l192;
pile[v[22]]=jvj+284; pile[WZ1]=jvj+285; 
(*f[68])( );     /*PLUE0(jvj+284,jvj+285)*/
l192:x[jvj+455]=t[x[jvj+455]];
goto l190;
l194:x[jvj+286]=s[x[jvj+456]] ;z[jvj+286]=(x[jvj+286]<=sepcte) ? x[jvj+286] : z[jvj+456];
pile[v[22]]=jvj+286; pile[WZ1]=jvj+70; pile[WZ2]=jvj+287; 
(*f[760])( );     /*MEMEX0(jvj+286,jvj+70,jvj+287)*/
if((x[jvj+287]==135)) goto l195;
x[jvj+456]=t[x[jvj+456]];
goto l193;
l195:x[jvj+288]=0 ;z[jvj+288]=0;
x[jvj+457]=x[jvj+509] ;z[jvj+457]=z[jvj+509];
l196:if((x[jvj+457]>0)) goto l197;
x[jvj+388]=x[jvj+288] ;z[jvj+388]=z[jvj+288];
l6:if((x[jvj+388]<=0)) goto l66;
x[jvj+8]=s[x[jvj+388]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+388];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
x[jvj+388]=t[x[jvj+388]];
goto l6;
l197:x[jvj+289]=s[x[jvj+457]] ;z[jvj+289]=(x[jvj+289]<=sepcte) ? x[jvj+289] : z[jvj+457];
if((x[jvj+289]==x[jvj+286])) goto l198;
pile[v[22]]=jvj+288; pile[WZ1]=jvj+289; 
(*f[68])( );     /*PLUE0(jvj+288,jvj+289)*/
l198:x[jvj+457]=t[x[jvj+457]];
goto l196;
l200:x[jvj+290]=s[x[jvj+458]] ;z[jvj+290]=(x[jvj+290]<=sepcte) ? x[jvj+290] : z[jvj+458];
pile[v[22]]=jvj+290; pile[WZ1]=jvj+151; pile[WZ2]=jvj+291; 
(*f[760])( );     /*MEMEX0(jvj+290,jvj+151,jvj+291)*/
if((x[jvj+291]==135)) goto l201;
x[jvj+458]=t[x[jvj+458]];
goto l199;
l201:x[jvj+292]=0 ;z[jvj+292]=0;
x[jvj+459]=x[jvj+72] ;z[jvj+459]=z[jvj+72];
l202:if((x[jvj+459]>0)) goto l203;
x[jvj+389]=x[jvj+292] ;z[jvj+389]=z[jvj+292];
l8:if((x[jvj+389]<=0)) goto l140;
x[jvj+11]=s[x[jvj+389]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+389];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+11)*/
x[jvj+389]=t[x[jvj+389]];
goto l8;
l203:x[jvj+293]=s[x[jvj+459]] ;z[jvj+293]=(x[jvj+293]<=sepcte) ? x[jvj+293] : z[jvj+459];
if((x[jvj+293]==x[jvj+290])) goto l204;
pile[v[22]]=jvj+292; pile[WZ1]=jvj+293; 
(*f[68])( );     /*PLUE0(jvj+292,jvj+293)*/
l204:x[jvj+459]=t[x[jvj+459]];
goto l202;
l206:x[jvj+294]=s[x[jvj+460]] ;z[jvj+294]=(x[jvj+294]<=sepcte) ? x[jvj+294] : z[jvj+460];
pile[v[22]]=jvj+294; pile[WZ1]=jvj+64; pile[WZ2]=jvj+295; 
(*f[760])( );     /*MEMEX0(jvj+294,jvj+64,jvj+295)*/
if((x[jvj+295]==135)) goto l207;
x[jvj+460]=t[x[jvj+460]];
goto l205;
l207:x[jvj+296]=0 ;z[jvj+296]=0;
x[jvj+461]=x[jvj+51] ;z[jvj+461]=z[jvj+51];
l208:if((x[jvj+461]>0)) goto l209;
x[jvj+390]=x[jvj+296] ;z[jvj+390]=z[jvj+296];
l10:if((x[jvj+390]<=0)) goto l61;
x[jvj+14]=s[x[jvj+390]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+390];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+14)*/
x[jvj+390]=t[x[jvj+390]];
goto l10;
l209:x[jvj+297]=s[x[jvj+461]] ;z[jvj+297]=(x[jvj+297]<=sepcte) ? x[jvj+297] : z[jvj+461];
if((x[jvj+297]==x[jvj+294])) goto l210;
pile[v[22]]=jvj+296; pile[WZ1]=jvj+297; 
(*f[68])( );     /*PLUE0(jvj+296,jvj+297)*/
l210:x[jvj+461]=t[x[jvj+461]];
goto l208;
l212:x[jvj+298]=s[x[jvj+462]] ;z[jvj+298]=(x[jvj+298]<=sepcte) ? x[jvj+298] : z[jvj+462];
pile[v[22]]=jvj+298; pile[WZ1]=jvj+299; pile[WZ2]=jvj+300; 
(*f[760])( );     /*MEMEX0(jvj+298,jvj+299,jvj+300)*/
if((x[jvj+300]==135)) goto l213;
x[jvj+462]=t[x[jvj+462]];
goto l211;
l213:x[jvj+301]=0 ;z[jvj+301]=0;
x[jvj+463]=x[jvj+51] ;z[jvj+463]=z[jvj+51];
l214:if((x[jvj+463]>0)) goto l215;
x[jvj+510]=x[jvj+301] ;z[jvj+510]=z[jvj+301];
x[jvj+464]=x[jvj+510] ;z[jvj+464]=z[jvj+510];
l217:if((x[jvj+464]>0)) goto l218;
goto l51;
l215:x[jvj+302]=s[x[jvj+463]] ;z[jvj+302]=(x[jvj+302]<=sepcte) ? x[jvj+302] : z[jvj+463];
if((x[jvj+302]==x[jvj+298])) goto l216;
pile[v[22]]=jvj+301; pile[WZ1]=jvj+302; 
(*f[68])( );     /*PLUE0(jvj+301,jvj+302)*/
l216:x[jvj+463]=t[x[jvj+463]];
goto l214;
l218:x[jvj+303]=s[x[jvj+464]] ;z[jvj+303]=(x[jvj+303]<=sepcte) ? x[jvj+303] : z[jvj+464];
pile[v[22]]=jvj+303; pile[WZ1]=jvj+59; pile[WZ2]=jvj+304; 
(*f[760])( );     /*MEMEX0(jvj+303,jvj+59,jvj+304)*/
if((x[jvj+304]==135)) goto l219;
x[jvj+464]=t[x[jvj+464]];
goto l217;
l219:x[jvj+305]=0 ;z[jvj+305]=0;
x[jvj+465]=x[jvj+510] ;z[jvj+465]=z[jvj+510];
l220:if((x[jvj+465]>0)) goto l221;
x[jvj+391]=x[jvj+305] ;z[jvj+391]=z[jvj+305];
l11:if((x[jvj+391]<=0)) goto l51;
x[jvj+18]=s[x[jvj+391]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+391];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
x[jvj+391]=t[x[jvj+391]];
goto l11;
l221:x[jvj+306]=s[x[jvj+465]] ;z[jvj+306]=(x[jvj+306]<=sepcte) ? x[jvj+306] : z[jvj+465];
if((x[jvj+306]==x[jvj+303])) goto l222;
pile[v[22]]=jvj+305; pile[WZ1]=jvj+306; 
(*f[68])( );     /*PLUE0(jvj+305,jvj+306)*/
l222:x[jvj+465]=t[x[jvj+465]];
goto l220;
l224:x[jvj+307]=s[x[jvj+466]] ;z[jvj+307]=(x[jvj+307]<=sepcte) ? x[jvj+307] : z[jvj+466];
pile[v[22]]=jvj+307; pile[WZ1]=jvj+308; pile[WZ2]=jvj+309; 
(*f[760])( );     /*MEMEX0(jvj+307,jvj+308,jvj+309)*/
if((x[jvj+309]==135)) goto l225;
x[jvj+466]=t[x[jvj+466]];
goto l223;
l225:x[jvj+310]=0 ;z[jvj+310]=0;
x[jvj+467]=x[jvj+51] ;z[jvj+467]=z[jvj+51];
l226:if((x[jvj+467]>0)) goto l227;
x[jvj+511]=x[jvj+310] ;z[jvj+511]=z[jvj+310];
x[jvj+468]=x[jvj+511] ;z[jvj+468]=z[jvj+511];
l229:if((x[jvj+468]>0)) goto l230;
goto l57;
l227:x[jvj+311]=s[x[jvj+467]] ;z[jvj+311]=(x[jvj+311]<=sepcte) ? x[jvj+311] : z[jvj+467];
if((x[jvj+311]==x[jvj+307])) goto l228;
pile[v[22]]=jvj+310; pile[WZ1]=jvj+311; 
(*f[68])( );     /*PLUE0(jvj+310,jvj+311)*/
l228:x[jvj+467]=t[x[jvj+467]];
goto l226;
l230:x[jvj+312]=s[x[jvj+468]] ;z[jvj+312]=(x[jvj+312]<=sepcte) ? x[jvj+312] : z[jvj+468];
pile[v[22]]=jvj+312; pile[WZ1]=jvj+62; pile[WZ2]=jvj+313; 
(*f[760])( );     /*MEMEX0(jvj+312,jvj+62,jvj+313)*/
if((x[jvj+313]==135)) goto l231;
x[jvj+468]=t[x[jvj+468]];
goto l229;
l231:x[jvj+314]=0 ;z[jvj+314]=0;
x[jvj+469]=x[jvj+511] ;z[jvj+469]=z[jvj+511];
l232:if((x[jvj+469]>0)) goto l233;
x[jvj+392]=x[jvj+314] ;z[jvj+392]=z[jvj+314];
l12:if((x[jvj+392]<=0)) goto l57;
x[jvj+22]=s[x[jvj+392]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+392];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+22)*/
x[jvj+392]=t[x[jvj+392]];
goto l12;
l233:x[jvj+315]=s[x[jvj+469]] ;z[jvj+315]=(x[jvj+315]<=sepcte) ? x[jvj+315] : z[jvj+469];
if((x[jvj+315]==x[jvj+312])) goto l234;
pile[v[22]]=jvj+314; pile[WZ1]=jvj+315; 
(*f[68])( );     /*PLUE0(jvj+314,jvj+315)*/
l234:x[jvj+469]=t[x[jvj+469]];
goto l232;
l236:x[jvj+316]=s[x[jvj+470]] ;z[jvj+316]=(x[jvj+316]<=sepcte) ? x[jvj+316] : z[jvj+470];
pile[v[22]]=jvj+316; pile[WZ1]=jvj+317; pile[WZ2]=jvj+318; 
(*f[760])( );     /*MEMEX0(jvj+316,jvj+317,jvj+318)*/
if((x[jvj+318]==135)) goto l237;
x[jvj+470]=t[x[jvj+470]];
goto l235;
l237:x[jvj+319]=0 ;z[jvj+319]=0;
x[jvj+471]=x[jvj+72] ;z[jvj+471]=z[jvj+72];
l238:if((x[jvj+471]>0)) goto l239;
x[jvj+512]=x[jvj+319] ;z[jvj+512]=z[jvj+319];
x[jvj+472]=x[jvj+512] ;z[jvj+472]=z[jvj+512];
l241:if((x[jvj+472]>0)) goto l242;
goto l94;
l239:x[jvj+320]=s[x[jvj+471]] ;z[jvj+320]=(x[jvj+320]<=sepcte) ? x[jvj+320] : z[jvj+471];
if((x[jvj+320]==x[jvj+316])) goto l240;
pile[v[22]]=jvj+319; pile[WZ1]=jvj+320; 
(*f[68])( );     /*PLUE0(jvj+319,jvj+320)*/
l240:x[jvj+471]=t[x[jvj+471]];
goto l238;
l242:x[jvj+321]=s[x[jvj+472]] ;z[jvj+321]=(x[jvj+321]<=sepcte) ? x[jvj+321] : z[jvj+472];
pile[v[22]]=jvj+321; pile[WZ1]=jvj+94; pile[WZ2]=jvj+322; 
(*f[760])( );     /*MEMEX0(jvj+321,jvj+94,jvj+322)*/
if((x[jvj+322]==135)) goto l243;
x[jvj+472]=t[x[jvj+472]];
goto l241;
l243:x[jvj+323]=0 ;z[jvj+323]=0;
x[jvj+473]=x[jvj+512] ;z[jvj+473]=z[jvj+512];
l244:if((x[jvj+473]>0)) goto l245;
x[jvj+502]=x[jvj+323] ;z[jvj+502]=z[jvj+323];
x[jvj+393]=x[jvj+502] ;z[jvj+393]=z[jvj+502];
l17:if((x[jvj+393]<=0)) goto l94;
x[jvj+26]=s[x[jvj+393]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+393];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
x[jvj+393]=t[x[jvj+393]];
goto l17;
l245:x[jvj+324]=s[x[jvj+473]] ;z[jvj+324]=(x[jvj+324]<=sepcte) ? x[jvj+324] : z[jvj+473];
if((x[jvj+324]==x[jvj+321])) goto l246;
pile[v[22]]=jvj+323; pile[WZ1]=jvj+324; 
(*f[68])( );     /*PLUE0(jvj+323,jvj+324)*/
l246:x[jvj+473]=t[x[jvj+473]];
goto l244;
l248:x[jvj+325]=s[x[jvj+474]] ;z[jvj+325]=(x[jvj+325]<=sepcte) ? x[jvj+325] : z[jvj+474];
pile[v[22]]=jvj+325; pile[WZ1]=jvj+326; pile[WZ2]=jvj+327; 
(*f[760])( );     /*MEMEX0(jvj+325,jvj+326,jvj+327)*/
if((x[jvj+327]==135)) goto l249;
x[jvj+474]=t[x[jvj+474]];
goto l247;
l249:x[jvj+328]=0 ;z[jvj+328]=0;
x[jvj+475]=x[jvj+51] ;z[jvj+475]=z[jvj+51];
l250:if((x[jvj+475]>0)) goto l251;
x[jvj+513]=x[jvj+328] ;z[jvj+513]=z[jvj+328];
x[jvj+476]=x[jvj+513] ;z[jvj+476]=z[jvj+513];
l253:if((x[jvj+476]>0)) goto l254;
goto l45;
l251:x[jvj+329]=s[x[jvj+475]] ;z[jvj+329]=(x[jvj+329]<=sepcte) ? x[jvj+329] : z[jvj+475];
if((x[jvj+329]==x[jvj+325])) goto l252;
pile[v[22]]=jvj+328; pile[WZ1]=jvj+329; 
(*f[68])( );     /*PLUE0(jvj+328,jvj+329)*/
l252:x[jvj+475]=t[x[jvj+475]];
goto l250;
l254:x[jvj+330]=s[x[jvj+476]] ;z[jvj+330]=(x[jvj+330]<=sepcte) ? x[jvj+330] : z[jvj+476];
pile[v[22]]=jvj+330; pile[WZ1]=jvj+56; pile[WZ2]=jvj+331; 
(*f[760])( );     /*MEMEX0(jvj+330,jvj+56,jvj+331)*/
if((x[jvj+331]==135)) goto l255;
x[jvj+476]=t[x[jvj+476]];
goto l253;
l255:x[jvj+332]=0 ;z[jvj+332]=0;
x[jvj+477]=x[jvj+513] ;z[jvj+477]=z[jvj+513];
l256:if((x[jvj+477]>0)) goto l257;
x[jvj+394]=x[jvj+332] ;z[jvj+394]=z[jvj+332];
l20:if((x[jvj+394]<=0)) goto l45;
x[jvj+30]=s[x[jvj+394]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+394];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+30)*/
x[jvj+394]=t[x[jvj+394]];
goto l20;
l257:x[jvj+333]=s[x[jvj+477]] ;z[jvj+333]=(x[jvj+333]<=sepcte) ? x[jvj+333] : z[jvj+477];
if((x[jvj+333]==x[jvj+330])) goto l258;
pile[v[22]]=jvj+332; pile[WZ1]=jvj+333; 
(*f[68])( );     /*PLUE0(jvj+332,jvj+333)*/
l258:x[jvj+477]=t[x[jvj+477]];
goto l256;
l260:x[jvj+334]=s[x[jvj+478]] ;z[jvj+334]=(x[jvj+334]<=sepcte) ? x[jvj+334] : z[jvj+478];
pile[v[22]]=jvj+334; pile[WZ1]=jvj+335; pile[WZ2]=jvj+336; 
(*f[760])( );     /*MEMEX0(jvj+334,jvj+335,jvj+336)*/
if((x[jvj+336]==135)) goto l261;
x[jvj+478]=t[x[jvj+478]];
goto l259;
l261:x[jvj+337]=0 ;z[jvj+337]=0;
x[jvj+479]=x[jvj+72] ;z[jvj+479]=z[jvj+72];
l262:if((x[jvj+479]>0)) goto l263;
x[jvj+514]=x[jvj+337] ;z[jvj+514]=z[jvj+337];
x[jvj+480]=x[jvj+514] ;z[jvj+480]=z[jvj+514];
l265:if((x[jvj+480]>0)) goto l266;
goto l161;
l263:x[jvj+338]=s[x[jvj+479]] ;z[jvj+338]=(x[jvj+338]<=sepcte) ? x[jvj+338] : z[jvj+479];
if((x[jvj+338]==x[jvj+334])) goto l264;
pile[v[22]]=jvj+337; pile[WZ1]=jvj+338; 
(*f[68])( );     /*PLUE0(jvj+337,jvj+338)*/
l264:x[jvj+479]=t[x[jvj+479]];
goto l262;
l266:x[jvj+339]=s[x[jvj+480]] ;z[jvj+339]=(x[jvj+339]<=sepcte) ? x[jvj+339] : z[jvj+480];
pile[v[22]]=jvj+339; pile[WZ1]=jvj+182; pile[WZ2]=jvj+340; 
(*f[760])( );     /*MEMEX0(jvj+339,jvj+182,jvj+340)*/
if((x[jvj+340]==135)) goto l267;
x[jvj+480]=t[x[jvj+480]];
goto l265;
l267:x[jvj+341]=0 ;z[jvj+341]=0;
x[jvj+481]=x[jvj+514] ;z[jvj+481]=z[jvj+514];
l268:if((x[jvj+481]>0)) goto l269;
x[jvj+503]=x[jvj+341] ;z[jvj+503]=z[jvj+341];
x[jvj+395]=x[jvj+503] ;z[jvj+395]=z[jvj+503];
l21:if((x[jvj+395]<=0)) goto l161;
x[jvj+33]=s[x[jvj+395]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+395];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+33; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+33)*/
x[jvj+395]=t[x[jvj+395]];
goto l21;
l269:x[jvj+342]=s[x[jvj+481]] ;z[jvj+342]=(x[jvj+342]<=sepcte) ? x[jvj+342] : z[jvj+481];
if((x[jvj+342]==x[jvj+339])) goto l270;
pile[v[22]]=jvj+341; pile[WZ1]=jvj+342; 
(*f[68])( );     /*PLUE0(jvj+341,jvj+342)*/
l270:x[jvj+481]=t[x[jvj+481]];
goto l268;
l272:x[jvj+343]=s[x[jvj+482]] ;z[jvj+343]=(x[jvj+343]<=sepcte) ? x[jvj+343] : z[jvj+482];
pile[v[22]]=jvj+343; pile[WZ1]=jvj+171; pile[WZ2]=jvj+344; 
(*f[760])( );     /*MEMEX0(jvj+343,jvj+171,jvj+344)*/
if((x[jvj+344]==135)) goto l273;
x[jvj+482]=t[x[jvj+482]];
goto l271;
l273:x[jvj+345]=0 ;z[jvj+345]=0;
x[jvj+483]=x[jvj+72] ;z[jvj+483]=z[jvj+72];
l274:if((x[jvj+483]>0)) goto l275;
x[jvj+515]=x[jvj+345] ;z[jvj+515]=z[jvj+345];
x[jvj+484]=x[jvj+515] ;z[jvj+484]=z[jvj+515];
l277:if((x[jvj+484]>0)) goto l278;
goto l148;
l275:x[jvj+346]=s[x[jvj+483]] ;z[jvj+346]=(x[jvj+346]<=sepcte) ? x[jvj+346] : z[jvj+483];
if((x[jvj+346]==x[jvj+343])) goto l276;
pile[v[22]]=jvj+345; pile[WZ1]=jvj+346; 
(*f[68])( );     /*PLUE0(jvj+345,jvj+346)*/
l276:x[jvj+483]=t[x[jvj+483]];
goto l274;
l278:x[jvj+347]=s[x[jvj+484]] ;z[jvj+347]=(x[jvj+347]<=sepcte) ? x[jvj+347] : z[jvj+484];
pile[v[22]]=jvj+347; pile[WZ1]=jvj+160; pile[WZ2]=jvj+348; 
(*f[760])( );     /*MEMEX0(jvj+347,jvj+160,jvj+348)*/
if((x[jvj+348]==135)) goto l279;
x[jvj+484]=t[x[jvj+484]];
goto l277;
l279:x[jvj+349]=0 ;z[jvj+349]=0;
x[jvj+485]=x[jvj+515] ;z[jvj+485]=z[jvj+515];
l280:if((x[jvj+485]>0)) goto l281;
x[jvj+504]=x[jvj+349] ;z[jvj+504]=z[jvj+349];
x[jvj+396]=x[jvj+504] ;z[jvj+396]=z[jvj+504];
l22:if((x[jvj+396]<=0)) goto l148;
x[jvj+36]=s[x[jvj+396]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+396];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+36; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+36)*/
x[jvj+396]=t[x[jvj+396]];
goto l22;
l281:x[jvj+350]=s[x[jvj+485]] ;z[jvj+350]=(x[jvj+350]<=sepcte) ? x[jvj+350] : z[jvj+485];
if((x[jvj+350]==x[jvj+347])) goto l282;
pile[v[22]]=jvj+349; pile[WZ1]=jvj+350; 
(*f[68])( );     /*PLUE0(jvj+349,jvj+350)*/
l282:x[jvj+485]=t[x[jvj+485]];
goto l280;
l284:x[jvj+351]=s[x[jvj+486]] ;z[jvj+351]=(x[jvj+351]<=sepcte) ? x[jvj+351] : z[jvj+486];
pile[v[22]]=jvj+351; pile[WZ1]=jvj+149; pile[WZ2]=jvj+352; 
(*f[760])( );     /*MEMEX0(jvj+351,jvj+149,jvj+352)*/
if((x[jvj+352]==135)) goto l285;
x[jvj+486]=t[x[jvj+486]];
goto l283;
l285:x[jvj+353]=0 ;z[jvj+353]=0;
x[jvj+487]=x[jvj+72] ;z[jvj+487]=z[jvj+72];
l286:if((x[jvj+487]>0)) goto l287;
x[jvj+516]=x[jvj+353] ;z[jvj+516]=z[jvj+353];
x[jvj+488]=x[jvj+516] ;z[jvj+488]=z[jvj+516];
l289:if((x[jvj+488]>0)) goto l290;
goto l135;
l287:x[jvj+354]=s[x[jvj+487]] ;z[jvj+354]=(x[jvj+354]<=sepcte) ? x[jvj+354] : z[jvj+487];
if((x[jvj+354]==x[jvj+351])) goto l288;
pile[v[22]]=jvj+353; pile[WZ1]=jvj+354; 
(*f[68])( );     /*PLUE0(jvj+353,jvj+354)*/
l288:x[jvj+487]=t[x[jvj+487]];
goto l286;
l290:x[jvj+355]=s[x[jvj+488]] ;z[jvj+355]=(x[jvj+355]<=sepcte) ? x[jvj+355] : z[jvj+488];
pile[v[22]]=jvj+355; pile[WZ1]=jvj+146; pile[WZ2]=jvj+356; 
(*f[760])( );     /*MEMEX0(jvj+355,jvj+146,jvj+356)*/
if((x[jvj+356]==135)) goto l291;
x[jvj+488]=t[x[jvj+488]];
goto l289;
l291:x[jvj+357]=0 ;z[jvj+357]=0;
x[jvj+489]=x[jvj+516] ;z[jvj+489]=z[jvj+516];
l292:if((x[jvj+489]>0)) goto l293;
x[jvj+505]=x[jvj+357] ;z[jvj+505]=z[jvj+357];
x[jvj+397]=x[jvj+505] ;z[jvj+397]=z[jvj+505];
l23:if((x[jvj+397]<=0)) goto l135;
x[jvj+39]=s[x[jvj+397]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+397];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+39)*/
x[jvj+397]=t[x[jvj+397]];
goto l23;
l293:x[jvj+358]=s[x[jvj+489]] ;z[jvj+358]=(x[jvj+358]<=sepcte) ? x[jvj+358] : z[jvj+489];
if((x[jvj+358]==x[jvj+355])) goto l294;
pile[v[22]]=jvj+357; pile[WZ1]=jvj+358; 
(*f[68])( );     /*PLUE0(jvj+357,jvj+358)*/
l294:x[jvj+489]=t[x[jvj+489]];
goto l292;
l296:x[jvj+359]=s[x[jvj+490]] ;z[jvj+359]=(x[jvj+359]<=sepcte) ? x[jvj+359] : z[jvj+490];
pile[v[22]]=jvj+359; pile[WZ1]=jvj+360; pile[WZ2]=jvj+361; 
(*f[760])( );     /*MEMEX0(jvj+359,jvj+360,jvj+361)*/
if((x[jvj+361]==135)) goto l297;
x[jvj+490]=t[x[jvj+490]];
goto l295;
l297:x[jvj+362]=0 ;z[jvj+362]=0;
x[jvj+491]=x[jvj+72] ;z[jvj+491]=z[jvj+72];
l298:if((x[jvj+491]>0)) goto l299;
x[jvj+517]=x[jvj+362] ;z[jvj+517]=z[jvj+362];
x[jvj+492]=x[jvj+517] ;z[jvj+492]=z[jvj+517];
l301:if((x[jvj+492]>0)) goto l302;
goto l105;
l299:x[jvj+363]=s[x[jvj+491]] ;z[jvj+363]=(x[jvj+363]<=sepcte) ? x[jvj+363] : z[jvj+491];
if((x[jvj+363]==x[jvj+359])) goto l300;
pile[v[22]]=jvj+362; pile[WZ1]=jvj+363; 
(*f[68])( );     /*PLUE0(jvj+362,jvj+363)*/
l300:x[jvj+491]=t[x[jvj+491]];
goto l298;
l302:x[jvj+364]=s[x[jvj+492]] ;z[jvj+364]=(x[jvj+364]<=sepcte) ? x[jvj+364] : z[jvj+492];
pile[v[22]]=jvj+364; pile[WZ1]=jvj+97; pile[WZ2]=jvj+365; 
(*f[760])( );     /*MEMEX0(jvj+364,jvj+97,jvj+365)*/
if((x[jvj+365]==135)) goto l303;
x[jvj+492]=t[x[jvj+492]];
goto l301;
l303:x[jvj+366]=0 ;z[jvj+366]=0;
x[jvj+493]=x[jvj+517] ;z[jvj+493]=z[jvj+517];
l304:if((x[jvj+493]>0)) goto l305;
x[jvj+506]=x[jvj+366] ;z[jvj+506]=z[jvj+366];
x[jvj+398]=x[jvj+506] ;z[jvj+398]=z[jvj+506];
l29:if((x[jvj+398]<=0)) goto l105;
x[jvj+44]=s[x[jvj+398]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+398];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+44; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+44)*/
x[jvj+398]=t[x[jvj+398]];
goto l29;
l305:x[jvj+367]=s[x[jvj+493]] ;z[jvj+367]=(x[jvj+367]<=sepcte) ? x[jvj+367] : z[jvj+493];
if((x[jvj+367]==x[jvj+364])) goto l306;
pile[v[22]]=jvj+366; pile[WZ1]=jvj+367; 
(*f[68])( );     /*PLUE0(jvj+366,jvj+367)*/
l306:x[jvj+493]=t[x[jvj+493]];
goto l304;
l308:x[jvj+368]=s[x[jvj+494]] ;z[jvj+368]=(x[jvj+368]<=sepcte) ? x[jvj+368] : z[jvj+494];
pile[v[22]]=jvj+368; pile[WZ1]=jvj+369; pile[WZ2]=jvj+370; 
(*f[760])( );     /*MEMEX0(jvj+368,jvj+369,jvj+370)*/
if((x[jvj+370]==135)) goto l309;
x[jvj+494]=t[x[jvj+494]];
goto l307;
l309:x[jvj+371]=0 ;z[jvj+371]=0;
x[jvj+495]=x[jvj+195] ;z[jvj+495]=z[jvj+195];
l310:if((x[jvj+495]>0)) goto l311;
x[jvj+507]=x[jvj+371] ;z[jvj+507]=z[jvj+371];
x[jvj+399]=x[jvj+507] ;z[jvj+399]=z[jvj+507];
l30:if((x[jvj+399]<=0)) goto l33;
x[jvj+46]=s[x[jvj+399]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+399];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+46)*/
x[jvj+399]=t[x[jvj+399]];
goto l30;
l311:x[jvj+372]=s[x[jvj+495]] ;z[jvj+372]=(x[jvj+372]<=sepcte) ? x[jvj+372] : z[jvj+495];
if((x[jvj+372]==x[jvj+368])) goto l312;
pile[v[22]]=jvj+371; pile[WZ1]=jvj+372; 
(*f[68])( );     /*PLUE0(jvj+371,jvj+372)*/
l312:x[jvj+495]=t[x[jvj+495]];
goto l310;
l314:x[jvj+373]=s[x[jvj+496]] ;z[jvj+373]=(x[jvj+373]<=sepcte) ? x[jvj+373] : z[jvj+496];
pile[v[22]]=jvj+373; pile[WZ1]=jvj+52; pile[WZ2]=jvj+374; 
(*f[760])( );     /*MEMEX0(jvj+373,jvj+52,jvj+374)*/
if((x[jvj+374]==135)) goto l315;
x[jvj+496]=t[x[jvj+496]];
goto l313;
l315:x[jvj+375]=0 ;z[jvj+375]=0;
x[jvj+497]=x[jvj+51] ;z[jvj+497]=z[jvj+51];
l316:if((x[jvj+497]>0)) goto l317;
x[jvj+53]=x[jvj+375] ;z[jvj+53]=z[jvj+375];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[299])( );     /*COPEL0(jvj+53,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=111; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,111,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=jvj+54; pile[WZ2]=107; pile[WZ3]=jvj+213; 
(*f[301])( );     /*TRI11(jvj+212,jvj+54,107,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+213,22,100,jvj+48)*/
goto l34;
l317:x[jvj+376]=s[x[jvj+497]] ;z[jvj+376]=(x[jvj+376]<=sepcte) ? x[jvj+376] : z[jvj+497];
if((x[jvj+376]==x[jvj+373])) goto l318;
pile[v[22]]=jvj+375; pile[WZ1]=jvj+376; 
(*f[68])( );     /*PLUE0(jvj+375,jvj+376)*/
l318:x[jvj+497]=t[x[jvj+497]];
goto l316;
l320:x[jvj+377]=s[x[jvj+498]] ;z[jvj+377]=(x[jvj+377]<=sepcte) ? x[jvj+377] : z[jvj+498];
pile[v[22]]=jvj+377; pile[WZ1]=jvj+378; pile[WZ2]=jvj+379; 
(*f[760])( );     /*MEMEX0(jvj+377,jvj+378,jvj+379)*/
if((x[jvj+379]==135)) goto l321;
x[jvj+498]=t[x[jvj+498]];
goto l319;
l321:x[jvj+380]=0 ;z[jvj+380]=0;
x[jvj+499]=x[jvj+72] ;z[jvj+499]=z[jvj+72];
l322:if((x[jvj+499]>0)) goto l323;
x[jvj+75]=x[jvj+380] ;z[jvj+75]=z[jvj+380];
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; 
(*f[299])( );     /*COPEL0(jvj+75,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+229; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=111; pile[WZ2]=jvj+230; 
(*f[54])( );     /*TRI1(jvj+229,111,jvj+230)*/
pile[v[22]]=jvj+230; pile[WZ1]=jvj+76; pile[WZ2]=107; pile[WZ3]=jvj+231; 
(*f[301])( );     /*TRI11(jvj+230,jvj+76,107,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+231,22,100,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=P; pile[WZ2]=jvj+78; 
(*f[4026])( );     /*SIMPEXPA0(jvj+77,P,jvj+78)*/
x[jvj+413]=x[jvj+72] ;z[jvj+413]=z[jvj+72];
goto l73;
l323:x[jvj+381]=s[x[jvj+499]] ;z[jvj+381]=(x[jvj+381]<=sepcte) ? x[jvj+381] : z[jvj+499];
if((x[jvj+381]==x[jvj+377])) goto l324;
pile[v[22]]=jvj+380; pile[WZ1]=jvj+381; 
(*f[68])( );     /*PLUE0(jvj+380,jvj+381)*/
l324:x[jvj+499]=t[x[jvj+499]];
goto l322;
l326:x[jvj+382]=s[x[jvj+500]] ;z[jvj+382]=(x[jvj+382]<=sepcte) ? x[jvj+382] : z[jvj+500];
pile[v[22]]=jvj+382; pile[WZ1]=jvj+383; pile[WZ2]=jvj+384; 
(*f[760])( );     /*MEMEX0(jvj+382,jvj+383,jvj+384)*/
if((x[jvj+384]==135)) goto l327;
x[jvj+500]=t[x[jvj+500]];
goto l325;
l327:x[jvj+385]=0 ;z[jvj+385]=0;
x[jvj+501]=x[jvj+72] ;z[jvj+501]=z[jvj+72];
l328:if((x[jvj+501]>0)) goto l329;
x[jvj+84]=x[jvj+385] ;z[jvj+84]=z[jvj+385];
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; 
(*f[299])( );     /*COPEL0(jvj+84,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+232; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=111; pile[WZ2]=jvj+233; 
(*f[54])( );     /*TRI1(jvj+232,111,jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=jvj+85; pile[WZ2]=107; pile[WZ3]=jvj+234; 
(*f[301])( );     /*TRI11(jvj+233,jvj+85,107,jvj+234)*/
pile[v[22]]=jvj+234; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+234,22,100,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=P; pile[WZ2]=jvj+87; 
(*f[4026])( );     /*SIMPEXPA0(jvj+86,P,jvj+87)*/
x[jvj+415]=x[jvj+83] ;z[jvj+415]=z[jvj+83];
goto l78;
l329:x[jvj+386]=s[x[jvj+501]] ;z[jvj+386]=(x[jvj+386]<=sepcte) ? x[jvj+386] : z[jvj+501];
if((x[jvj+386]==x[jvj+382])) goto l330;
pile[v[22]]=jvj+385; pile[WZ1]=jvj+386; 
(*f[68])( );     /*PLUE0(jvj+385,jvj+386)*/
l330:x[jvj+501]=t[x[jvj+501]];
goto l328;
}
