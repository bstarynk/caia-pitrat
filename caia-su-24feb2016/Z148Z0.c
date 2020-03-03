#include "dx.h"
void Z148Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V44=0,V78=0,V117=0,V151=0,V174=0,V216=0,V250=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=267;
x[jvj+1]=15649;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1860&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(543,NNNY,jvj+38)*/
pile[v[22]]=539; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(539,jvj+38,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=22)) goto l22;
pile[v[22]]=103; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+39,jvj+41)*/
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]==485)) goto l15;
if((x[jvj+43]!=486)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+39,jvj+52)*/
pile[v[22]]=111; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+52,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=485)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+41; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(107,jvj+41,jvj+55)*/
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+39,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+56,jvj+57)*/
if(x[jvj+57]!=25&&x[jvj+57]!=26&&x[jvj+57]!=27&&x[jvj+57]!=28&&x[jvj+57]!=29&&x[jvj+57]!=30&&x[jvj+57]!=625) goto l22;
pile[v[22]]=NNNY; pile[WZ1]=jvj+58; 
(*f[2024])( );if(v[102]) goto l22;     /*CHSGN0(NNNY,jvj+58)*/
x[jvj+254]=x[jvj+55] ;z[jvj+254]=z[jvj+55];
l55:if((x[jvj+254]>0)) goto l56;
l22:pile[v[22]]=538; pile[WZ1]=jvj+38; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(538,jvj+38,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+63,jvj+64)*/
if((x[jvj+64]!=22)) goto l30;
pile[v[22]]=102; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,jvj+63,jvj+65)*/
pile[v[22]]=111; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+65,jvj+66)*/
pile[v[22]]=101; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+66,jvj+67)*/
if((x[jvj+67]==485)) goto l23;
if((x[jvj+67]!=486)) goto l30;
pile[v[22]]=103; pile[WZ1]=jvj+63; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,jvj+63,jvj+76)*/
pile[v[22]]=111; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+76,jvj+77)*/
pile[v[22]]=101; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+77,jvj+78)*/
if((x[jvj+78]!=485)) goto l30;
pile[v[22]]=107; pile[WZ1]=jvj+65; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(107,jvj+65,jvj+79)*/
pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+63,jvj+80)*/
pile[v[22]]=101; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+80,jvj+81)*/
if(x[jvj+81]!=25&&x[jvj+81]!=26&&x[jvj+81]!=27&&x[jvj+81]!=28&&x[jvj+81]!=29&&x[jvj+81]!=30&&x[jvj+81]!=625) goto l30;
pile[v[22]]=NNNY; pile[WZ1]=jvj+82; 
(*f[2024])( );if(v[102]) goto l30;     /*CHSGN0(NNNY,jvj+82)*/
x[jvj+258]=x[jvj+79] ;z[jvj+258]=z[jvj+79];
l67:if((x[jvj+258]>0)) goto l68;
l30:pile[v[22]]=543; pile[WZ1]=jvj+38; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(543,jvj+38,jvj+87)*/
pile[v[22]]=539; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(539,jvj+87,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+88,jvj+89)*/
if((x[jvj+89]!=22)) goto l36;
pile[v[22]]=103; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+88,jvj+90)*/
pile[v[22]]=111; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+90,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+91,jvj+92)*/
if((x[jvj+92]!=485)) goto l36;
pile[v[22]]=107; pile[WZ1]=jvj+90; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(107,jvj+90,jvj+93)*/
pile[v[22]]=111; pile[WZ1]=jvj+88; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+88,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+94,jvj+95)*/
if(x[jvj+95]!=25&&x[jvj+95]!=26&&x[jvj+95]!=27&&x[jvj+95]!=28&&x[jvj+95]!=29&&x[jvj+95]!=30&&x[jvj+95]!=625) goto l36;
pile[v[22]]=102; pile[WZ1]=jvj+88; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+88,jvj+96)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+97; 
(*f[2024])( );if(v[102]) goto l36;     /*CHSGN0(NNNY,jvj+97)*/
x[jvj+248]=x[jvj+93] ;z[jvj+248]=z[jvj+93];
l31:if((x[jvj+248]<=0)) goto l36;
x[jvj+98]=s[x[jvj+248]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+248];
pile[v[22]]=111; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+98,jvj+99)*/
pile[v[22]]=101; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+99,jvj+100)*/
if((x[jvj+100]!=486)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+98; pile[WZ2]=jvj+101; 
(*f[33])( );     /*FNDE0(107,jvj+98,jvj+101)*/
x[jvj+260]=x[jvj+101] ;z[jvj+260]=z[jvj+101];
l73:if((x[jvj+260]>0)) goto l74;
l32:x[jvj+248]=t[x[jvj+248]];
goto l31;
l7:x[jvj+17]=s[x[jvj+134]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+134];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+18)*/
x[jvj+134]=t[x[jvj+134]];
l6:if((x[jvj+134]>0)) goto l7;
NNNT=39;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+132; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+132,jvj+204)*/
pile[WZ3]=485; pile[WZ4]=jvj+209; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+209)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+209; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+209,jvj+208)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+208; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+19,jvj+208,107)*/
pile[v[22]]=jvj+208; pile[WZ1]=107; pile[WZ2]=jvj+133; 
(*f[36])( );     /*PLUSC0(jvj+208,107,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+206; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+206)*/
pile[v[22]]=jvj+204; pile[WZ1]=111; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,111,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=103; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+205,jvj+206,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+208; pile[WZ4]=jvj+207; pile[WZ5]=jvj+135; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+208,jvj+207,jvj+135)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+135; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+126,jvj+135,NNNX)*/
l48:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l10:x[jvj+23]=s[x[jvj+144]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+144];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+24)*/
x[jvj+144]=t[x[jvj+144]];
l9:if((x[jvj+144]>0)) goto l10;
NNNT=40;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+142; pile[WZ4]=jvj+210; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+142,jvj+210)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+214; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+214)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+215; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+215)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+215; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+215,jvj+212)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+212; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+25,jvj+212,107)*/
pile[v[22]]=jvj+212; pile[WZ1]=107; pile[WZ2]=jvj+143; 
(*f[36])( );     /*PLUSC0(jvj+212,107,jvj+143)*/
pile[v[22]]=jvj+210; pile[WZ1]=111; pile[WZ2]=jvj+211; 
(*f[54])( );     /*TRI1(jvj+210,111,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=jvj+212; pile[WZ2]=103; pile[WZ3]=jvj+213; 
(*f[58])( );     /*TRI3(jvj+211,jvj+212,103,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+214; pile[WZ4]=jvj+213; pile[WZ5]=jvj+145; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+214,jvj+213,jvj+145)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+145; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+136,jvj+145,NNNX)*/
goto l48;
l15:pile[v[22]]=107; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+41,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+39,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+45,jvj+46)*/
if(x[jvj+46]!=25&&x[jvj+46]!=26&&x[jvj+46]!=27&&x[jvj+46]!=28&&x[jvj+46]!=29&&x[jvj+46]!=30&&x[jvj+46]!=625) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+39,jvj+47)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+48; 
(*f[2024])( );if(v[102]) goto l22;     /*CHSGN0(NNNY,jvj+48)*/
x[jvj+252]=x[jvj+44] ;z[jvj+252]=z[jvj+44];
l49:if((x[jvj+252]>0)) goto l50;
goto l22;
l18:NNNT=18;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+46; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+46,jvj+146)*/
pile[WZ3]=485; pile[WZ4]=jvj+151; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+151)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+151; pile[WZ4]=jvj+150; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+151,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=107; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+150,107,jvj+47)*/
pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+150,107,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+50; pile[WZ2]=107; pile[WZ3]=jvj+154; 
(*f[301])( );     /*TRI11(jvj+153,jvj+50,107,jvj+154)*/
pile[v[22]]=jvj+154; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+148; 
(*f[58])( );     /*TRI3(jvj+154,22,100,jvj+148)*/
pile[v[22]]=jvj+146; pile[WZ1]=111; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(jvj+146,111,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+148; pile[WZ2]=103; pile[WZ3]=jvj+149; 
(*f[58])( );     /*TRI3(jvj+147,jvj+148,103,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+150; pile[WZ4]=jvj+149; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+150,jvj+149,jvj+51)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+51; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+39,jvj+51,NNNX)*/
goto l48;
l21:NNNT=102;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+57; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+57,jvj+155)*/
pile[WZ3]=485; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+160)*/
pile[WZ3]=486; pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+162)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+162; pile[WZ4]=jvj+161; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+162,jvj+161)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+161; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+60,jvj+161,107)*/
pile[v[22]]=jvj+161; pile[WZ1]=107; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+161,107,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+160; pile[WZ4]=jvj+159; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+160,jvj+159)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+159; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+31,jvj+159,107)*/
pile[v[22]]=jvj+159; pile[WZ1]=107; pile[WZ2]=jvj+161; 
(*f[36])( );     /*PLUSC0(jvj+159,107,jvj+161)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+157; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+157)*/
pile[v[22]]=jvj+155; pile[WZ1]=111; pile[WZ2]=jvj+156; 
(*f[54])( );     /*TRI1(jvj+155,111,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=jvj+157; pile[WZ2]=103; pile[WZ3]=jvj+158; 
(*f[58])( );     /*TRI3(jvj+156,jvj+157,103,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+159; pile[WZ4]=jvj+158; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+159,jvj+158,jvj+62)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+62; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+39,jvj+62,NNNX)*/
goto l48;
l23:pile[v[22]]=107; pile[WZ1]=jvj+65; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(107,jvj+65,jvj+68)*/
pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+63,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+69,jvj+70)*/
if(x[jvj+70]!=25&&x[jvj+70]!=26&&x[jvj+70]!=27&&x[jvj+70]!=28&&x[jvj+70]!=29&&x[jvj+70]!=30&&x[jvj+70]!=625) goto l30;
pile[v[22]]=103; pile[WZ1]=jvj+63; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,jvj+63,jvj+71)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+72; 
(*f[2024])( );if(v[102]) goto l30;     /*CHSGN0(NNNY,jvj+72)*/
x[jvj+256]=x[jvj+68] ;z[jvj+256]=z[jvj+68];
l61:if((x[jvj+256]>0)) goto l62;
goto l30;
l26:NNNT=19;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+70; pile[WZ4]=jvj+163; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+70,jvj+163)*/
pile[WZ3]=485; pile[WZ4]=jvj+168; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=111; pile[WZ2]=jvj+169; 
(*f[54])( );     /*TRI1(jvj+168,111,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=jvj+74; pile[WZ2]=107; pile[WZ3]=jvj+170; 
(*f[301])( );     /*TRI11(jvj+169,jvj+74,107,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+167; 
(*f[58])( );     /*TRI3(jvj+170,22,100,jvj+167)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+171; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+171)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+171; pile[WZ4]=jvj+165; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+171,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=107; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+165,107,jvj+71)*/
pile[WZ2]=jvj+72; 
(*f[36])( );     /*PLUSC0(jvj+165,107,jvj+72)*/
pile[v[22]]=jvj+163; pile[WZ1]=111; pile[WZ2]=jvj+164; 
(*f[54])( );     /*TRI1(jvj+163,111,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=jvj+165; pile[WZ2]=103; pile[WZ3]=jvj+166; 
(*f[58])( );     /*TRI3(jvj+164,jvj+165,103,jvj+166)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+167; pile[WZ4]=jvj+166; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+167,jvj+166,jvj+75)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+75; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+63,jvj+75,NNNX)*/
goto l48;
l29:NNNT=103;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+81; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+81,jvj+172)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+176; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+176)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+177; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+177)*/
pile[WZ3]=486; pile[WZ4]=jvj+179; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+179)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+179; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+179,jvj+178)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+178; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+84,jvj+178,107)*/
pile[v[22]]=jvj+178; pile[WZ1]=107; pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+178,107,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+177; pile[WZ4]=jvj+174; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+177,jvj+174)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+174; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+37,jvj+174,107)*/
pile[v[22]]=jvj+174; pile[WZ1]=107; pile[WZ2]=jvj+178; 
(*f[36])( );     /*PLUSC0(jvj+174,107,jvj+178)*/
pile[v[22]]=jvj+172; pile[WZ1]=111; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,111,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=jvj+174; pile[WZ2]=103; pile[WZ3]=jvj+175; 
(*f[58])( );     /*TRI3(jvj+173,jvj+174,103,jvj+175)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+176; pile[WZ4]=jvj+175; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+176,jvj+175,jvj+86)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+86; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+63,jvj+86,NNNX)*/
goto l48;
l35:NNNT=34;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+95; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+95,jvj+180)*/
pile[WZ3]=485; pile[WZ4]=jvj+185; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+185)*/
pile[WZ3]=486; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+187)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+187; pile[WZ4]=jvj+186; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+187,jvj+186)*/
pile[v[22]]=jvj+188; pile[WZ1]=jvj+186; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+188,jvj+186,107)*/
pile[v[22]]=jvj+186; pile[WZ1]=107; pile[WZ2]=jvj+97; 
(*f[36])( );     /*PLUSC0(jvj+186,107,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+185; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+185,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=107; pile[WZ2]=jvj+96; 
(*f[36])( );     /*PLUSC0(jvj+184,107,jvj+96)*/
pile[WZ2]=jvj+186; 
(*f[36])( );     /*PLUSC0(jvj+184,107,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=111; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,111,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+105; pile[WZ2]=107; pile[WZ3]=jvj+191; 
(*f[301])( );     /*TRI11(jvj+190,jvj+105,107,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+182; 
(*f[58])( );     /*TRI3(jvj+191,22,100,jvj+182)*/
pile[v[22]]=jvj+180; pile[WZ1]=111; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,111,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+182; pile[WZ2]=103; pile[WZ3]=jvj+183; 
(*f[58])( );     /*TRI3(jvj+181,jvj+182,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+184; pile[WZ4]=jvj+183; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+184,jvj+183,jvj+106)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+106; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+88,jvj+106,NNNX)*/
goto l48;
l36:pile[v[22]]=538; pile[WZ1]=jvj+87; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(538,jvj+87,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+107,jvj+108)*/
if((x[jvj+108]!=22)) goto l42;
pile[v[22]]=102; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+107,jvj+109)*/
pile[v[22]]=111; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+109,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+110,jvj+111)*/
if((x[jvj+111]!=485)) goto l42;
pile[v[22]]=107; pile[WZ1]=jvj+109; pile[WZ2]=jvj+112; 
(*f[33])( );     /*FNDE0(107,jvj+109,jvj+112)*/
pile[v[22]]=111; pile[WZ1]=jvj+107; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+107,jvj+113)*/
pile[v[22]]=101; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+113,jvj+114)*/
if(x[jvj+114]!=25&&x[jvj+114]!=26&&x[jvj+114]!=27&&x[jvj+114]!=28&&x[jvj+114]!=29&&x[jvj+114]!=30&&x[jvj+114]!=625) goto l42;
pile[v[22]]=103; pile[WZ1]=jvj+107; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,jvj+107,jvj+115)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+116; 
(*f[2024])( );if(v[102]) goto l42;     /*CHSGN0(NNNY,jvj+116)*/
x[jvj+250]=x[jvj+112] ;z[jvj+250]=z[jvj+112];
l37:if((x[jvj+250]<=0)) goto l42;
x[jvj+117]=s[x[jvj+250]] ;z[jvj+117]=(x[jvj+117]<=sepcte) ? x[jvj+117] : z[jvj+250];
pile[v[22]]=111; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+117,jvj+118)*/
pile[v[22]]=101; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+118,jvj+119)*/
if((x[jvj+119]!=486)) goto l38;
pile[v[22]]=107; pile[WZ1]=jvj+117; pile[WZ2]=jvj+120; 
(*f[33])( );     /*FNDE0(107,jvj+117,jvj+120)*/
x[jvj+264]=x[jvj+112] ;z[jvj+264]=z[jvj+112];
l85:if((x[jvj+264]>0)) goto l86;
l38:x[jvj+250]=t[x[jvj+250]];
goto l37;
l41:NNNT=35;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+114; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+114,jvj+192)*/
pile[WZ3]=485; pile[WZ4]=jvj+197; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=111; pile[WZ2]=jvj+198; 
(*f[54])( );     /*TRI1(jvj+197,111,jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=jvj+199; pile[WZ2]=107; pile[WZ3]=jvj+200; 
(*f[301])( );     /*TRI11(jvj+198,jvj+199,107,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+196; 
(*f[58])( );     /*TRI3(jvj+200,22,100,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+201; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+201)*/
pile[WZ3]=486; pile[WZ4]=jvj+203; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+203)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+203; pile[WZ4]=jvj+202; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+203,jvj+202)*/
pile[v[22]]=jvj+124; pile[WZ1]=jvj+202; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+124,jvj+202,107)*/
pile[v[22]]=jvj+202; pile[WZ1]=107; pile[WZ2]=jvj+116; 
(*f[36])( );     /*PLUSC0(jvj+202,107,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+201; pile[WZ4]=jvj+194; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+201,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=107; pile[WZ2]=jvj+115; 
(*f[36])( );     /*PLUSC0(jvj+194,107,jvj+115)*/
pile[WZ2]=jvj+202; 
(*f[36])( );     /*PLUSC0(jvj+194,107,jvj+202)*/
pile[v[22]]=jvj+192; pile[WZ1]=111; pile[WZ2]=jvj+193; 
(*f[54])( );     /*TRI1(jvj+192,111,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=jvj+194; pile[WZ2]=103; pile[WZ3]=jvj+195; 
(*f[58])( );     /*TRI3(jvj+193,jvj+194,103,jvj+195)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+196; pile[WZ4]=jvj+195; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+196,jvj+195,jvj+125)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+125; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+107,jvj+125,NNNX)*/
goto l48;
l42:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(539,NNNY,jvj+126)*/
pile[v[22]]=100; pile[WZ1]=jvj+126; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+126,jvj+127)*/
if((x[jvj+127]!=22)) goto l44;
pile[v[22]]=103; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+126,jvj+14)*/
if((x[NNNY]!=x[jvj+14])) goto l44;
pile[v[22]]=102; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+126,jvj+128)*/
pile[v[22]]=111; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+128,jvj+129)*/
pile[v[22]]=101; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+129,jvj+130)*/
if((x[jvj+130]!=485)) goto l44;
pile[v[22]]=111; pile[WZ1]=jvj+126; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+126,jvj+131)*/
pile[v[22]]=101; pile[WZ1]=jvj+131; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+131,jvj+132)*/
if(x[jvj+132]!=25&&x[jvj+132]!=26&&x[jvj+132]!=27&&x[jvj+132]!=28&&x[jvj+132]!=29&&x[jvj+132]!=30&&x[jvj+132]!=625) goto l44;
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+14,V151)*/
V151=pile[WZ2]; 
if((V151<0)) goto l43;
l5:pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==52)) goto l43;
l44:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(538,NNNY,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+136,jvj+137)*/
if((x[jvj+137]!=22)) goto l47;
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+136,jvj+20)*/
if((x[NNNY]!=x[jvj+20])) goto l47;
pile[v[22]]=103; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,jvj+136,jvj+138)*/
pile[v[22]]=111; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+138,jvj+139)*/
pile[v[22]]=101; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+139,jvj+140)*/
if((x[jvj+140]!=485)) goto l47;
pile[v[22]]=111; pile[WZ1]=jvj+136; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+136,jvj+141)*/
pile[v[22]]=101; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+141,jvj+142)*/
if(x[jvj+142]!=25&&x[jvj+142]!=26&&x[jvj+142]!=27&&x[jvj+142]!=28&&x[jvj+142]!=29&&x[jvj+142]!=30&&x[jvj+142]!=625) goto l47;
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+20,V174)*/
V174=pile[WZ2]; 
if((V174<0)) goto l45;
l8:pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]==52)) goto l45;
l47:x[NNNX]=NNNT=incon;
l46:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l43:pile[v[22]]=NNNY; pile[WZ1]=jvj+133; 
(*f[2024])( );if(v[102]) goto l44;     /*CHSGN0(NNNY,jvj+133)*/
pile[v[22]]=107; pile[WZ1]=jvj+128; pile[WZ2]=jvj+134; 
(*f[33])( );     /*FNDE0(107,jvj+128,jvj+134)*/
x[jvj+19]=0 ;z[jvj+19]=0;
goto l6;
l45:pile[v[22]]=NNNY; pile[WZ1]=jvj+143; 
(*f[2024])( );if(v[102]) goto l47;     /*CHSGN0(NNNY,jvj+143)*/
pile[v[22]]=107; pile[WZ1]=jvj+138; pile[WZ2]=jvj+144; 
(*f[33])( );     /*FNDE0(107,jvj+138,jvj+144)*/
x[jvj+25]=0 ;z[jvj+25]=0;
goto l9;
l50:x[jvj+216]=s[x[jvj+252]] ;z[jvj+216]=(x[jvj+216]<=sepcte) ? x[jvj+216] : z[jvj+252];
pile[v[22]]=jvj+216; pile[WZ1]=NNNY; pile[WZ2]=jvj+217; 
(*f[760])( );     /*MEMEX0(jvj+216,NNNY,jvj+217)*/
if((x[jvj+217]==135)) goto l51;
x[jvj+252]=t[x[jvj+252]];
goto l49;
l51:x[jvj+218]=0 ;z[jvj+218]=0;
x[jvj+253]=x[jvj+44] ;z[jvj+253]=z[jvj+44];
l52:if((x[jvj+253]>0)) goto l53;
x[jvj+49]=x[jvj+218] ;z[jvj+49]=z[jvj+218];
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; 
(*f[299])( );     /*COPEL0(jvj+49,jvj+50)*/
l16:if((x[jvj+44]<=0)) goto l22;
x[jvj+2]=s[x[jvj+44]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+44];
if((x[NNNY]!=x[jvj+2])) goto l17;
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+2,V16)*/
V16=pile[WZ2]; 
if((V16<0)) goto l18;
l1:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==52)) goto l18;
l17:x[jvj+44]=t[x[jvj+44]];
goto l16;
l53:x[jvj+219]=s[x[jvj+253]] ;z[jvj+219]=(x[jvj+219]<=sepcte) ? x[jvj+219] : z[jvj+253];
if((x[jvj+219]==x[jvj+216])) goto l54;
pile[v[22]]=jvj+218; pile[WZ1]=jvj+219; 
(*f[68])( );     /*PLUE0(jvj+218,jvj+219)*/
l54:x[jvj+253]=t[x[jvj+253]];
goto l52;
l56:x[jvj+220]=s[x[jvj+254]] ;z[jvj+220]=(x[jvj+220]<=sepcte) ? x[jvj+220] : z[jvj+254];
pile[v[22]]=jvj+220; pile[WZ1]=NNNY; pile[WZ2]=jvj+221; 
(*f[760])( );     /*MEMEX0(jvj+220,NNNY,jvj+221)*/
if((x[jvj+221]==135)) goto l57;
x[jvj+254]=t[x[jvj+254]];
goto l55;
l57:x[jvj+222]=0 ;z[jvj+222]=0;
x[jvj+255]=x[jvj+55] ;z[jvj+255]=z[jvj+55];
l58:if((x[jvj+255]>0)) goto l59;
x[jvj+59]=x[jvj+222] ;z[jvj+59]=z[jvj+222];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[299])( );     /*COPEL0(jvj+59,jvj+60)*/
pile[v[22]]=107; pile[WZ1]=jvj+52; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(107,jvj+52,jvj+61)*/
x[jvj+31]=0 ;z[jvj+31]=0;
l12:if((x[jvj+61]<=0)) goto l19;
x[jvj+29]=s[x[jvj+61]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+61];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+30)*/
x[jvj+61]=t[x[jvj+61]];
goto l12;
l59:x[jvj+223]=s[x[jvj+255]] ;z[jvj+223]=(x[jvj+223]<=sepcte) ? x[jvj+223] : z[jvj+255];
if((x[jvj+223]==x[jvj+220])) goto l60;
pile[v[22]]=jvj+222; pile[WZ1]=jvj+223; 
(*f[68])( );     /*PLUE0(jvj+222,jvj+223)*/
l60:x[jvj+255]=t[x[jvj+255]];
goto l58;
l62:x[jvj+224]=s[x[jvj+256]] ;z[jvj+224]=(x[jvj+224]<=sepcte) ? x[jvj+224] : z[jvj+256];
pile[v[22]]=jvj+224; pile[WZ1]=NNNY; pile[WZ2]=jvj+225; 
(*f[760])( );     /*MEMEX0(jvj+224,NNNY,jvj+225)*/
if((x[jvj+225]==135)) goto l63;
x[jvj+256]=t[x[jvj+256]];
goto l61;
l63:x[jvj+226]=0 ;z[jvj+226]=0;
x[jvj+257]=x[jvj+68] ;z[jvj+257]=z[jvj+68];
l64:if((x[jvj+257]>0)) goto l65;
x[jvj+73]=x[jvj+226] ;z[jvj+73]=z[jvj+226];
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; 
(*f[299])( );     /*COPEL0(jvj+73,jvj+74)*/
l24:if((x[jvj+68]<=0)) goto l30;
x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
if((x[NNNY]!=x[jvj+5])) goto l25;
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+5,V44)*/
V44=pile[WZ2]; 
if((V44<0)) goto l26;
l2:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==52)) goto l26;
l25:x[jvj+68]=t[x[jvj+68]];
goto l24;
l65:x[jvj+227]=s[x[jvj+257]] ;z[jvj+227]=(x[jvj+227]<=sepcte) ? x[jvj+227] : z[jvj+257];
if((x[jvj+227]==x[jvj+224])) goto l66;
pile[v[22]]=jvj+226; pile[WZ1]=jvj+227; 
(*f[68])( );     /*PLUE0(jvj+226,jvj+227)*/
l66:x[jvj+257]=t[x[jvj+257]];
goto l64;
l68:x[jvj+228]=s[x[jvj+258]] ;z[jvj+228]=(x[jvj+228]<=sepcte) ? x[jvj+228] : z[jvj+258];
pile[v[22]]=jvj+228; pile[WZ1]=NNNY; pile[WZ2]=jvj+229; 
(*f[760])( );     /*MEMEX0(jvj+228,NNNY,jvj+229)*/
if((x[jvj+229]==135)) goto l69;
x[jvj+258]=t[x[jvj+258]];
goto l67;
l69:x[jvj+230]=0 ;z[jvj+230]=0;
x[jvj+259]=x[jvj+79] ;z[jvj+259]=z[jvj+79];
l70:if((x[jvj+259]>0)) goto l71;
x[jvj+83]=x[jvj+230] ;z[jvj+83]=z[jvj+230];
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; 
(*f[299])( );     /*COPEL0(jvj+83,jvj+84)*/
pile[v[22]]=107; pile[WZ1]=jvj+76; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(107,jvj+76,jvj+85)*/
x[jvj+37]=0 ;z[jvj+37]=0;
l14:if((x[jvj+85]<=0)) goto l27;
x[jvj+35]=s[x[jvj+85]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+85];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
pile[v[22]]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+36)*/
x[jvj+85]=t[x[jvj+85]];
goto l14;
l71:x[jvj+231]=s[x[jvj+259]] ;z[jvj+231]=(x[jvj+231]<=sepcte) ? x[jvj+231] : z[jvj+259];
if((x[jvj+231]==x[jvj+228])) goto l72;
pile[v[22]]=jvj+230; pile[WZ1]=jvj+231; 
(*f[68])( );     /*PLUE0(jvj+230,jvj+231)*/
l72:x[jvj+259]=t[x[jvj+259]];
goto l70;
l74:x[jvj+232]=s[x[jvj+260]] ;z[jvj+232]=(x[jvj+232]<=sepcte) ? x[jvj+232] : z[jvj+260];
pile[v[22]]=jvj+232; pile[WZ1]=NNNY; pile[WZ2]=jvj+233; 
(*f[760])( );     /*MEMEX0(jvj+232,NNNY,jvj+233)*/
if((x[jvj+233]==135)) goto l75;
x[jvj+260]=t[x[jvj+260]];
goto l73;
l75:x[jvj+234]=0 ;z[jvj+234]=0;
x[jvj+261]=x[jvj+101] ;z[jvj+261]=z[jvj+101];
l76:if((x[jvj+261]>0)) goto l77;
x[jvj+102]=x[jvj+234] ;z[jvj+102]=z[jvj+234];
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[299])( );     /*COPEL0(jvj+102,jvj+103)*/
x[jvj+262]=x[jvj+93] ;z[jvj+262]=z[jvj+93];
l79:if((x[jvj+262]>0)) goto l80;
goto l32;
l77:x[jvj+235]=s[x[jvj+261]] ;z[jvj+235]=(x[jvj+235]<=sepcte) ? x[jvj+235] : z[jvj+261];
if((x[jvj+235]==x[jvj+232])) goto l78;
pile[v[22]]=jvj+234; pile[WZ1]=jvj+235; 
(*f[68])( );     /*PLUE0(jvj+234,jvj+235)*/
l78:x[jvj+261]=t[x[jvj+261]];
goto l76;
l80:x[jvj+236]=s[x[jvj+262]] ;z[jvj+236]=(x[jvj+236]<=sepcte) ? x[jvj+236] : z[jvj+262];
pile[v[22]]=jvj+236; pile[WZ1]=jvj+98; pile[WZ2]=jvj+237; 
(*f[760])( );     /*MEMEX0(jvj+236,jvj+98,jvj+237)*/
if((x[jvj+237]==135)) goto l81;
x[jvj+262]=t[x[jvj+262]];
goto l79;
l81:x[jvj+238]=0 ;z[jvj+238]=0;
x[jvj+263]=x[jvj+93] ;z[jvj+263]=z[jvj+93];
l82:if((x[jvj+263]>0)) goto l83;
x[jvj+104]=x[jvj+238] ;z[jvj+104]=z[jvj+238];
pile[v[22]]=jvj+104; pile[WZ1]=jvj+105; 
(*f[299])( );     /*COPEL0(jvj+104,jvj+105)*/
x[jvj+188]=x[jvj+103] ;z[jvj+188]=z[jvj+103];
x[jvj+249]=x[jvj+101] ;z[jvj+249]=z[jvj+101];
l33:if((x[jvj+249]<=0)) goto l32;
x[jvj+8]=s[x[jvj+249]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+249];
if((x[NNNY]!=x[jvj+8])) goto l34;
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+8,V78)*/
V78=pile[WZ2]; 
if((V78<0)) goto l35;
l3:pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==52)) goto l35;
l34:x[jvj+249]=t[x[jvj+249]];
goto l33;
l83:x[jvj+239]=s[x[jvj+263]] ;z[jvj+239]=(x[jvj+239]<=sepcte) ? x[jvj+239] : z[jvj+263];
if((x[jvj+239]==x[jvj+236])) goto l84;
pile[v[22]]=jvj+238; pile[WZ1]=jvj+239; 
(*f[68])( );     /*PLUE0(jvj+238,jvj+239)*/
l84:x[jvj+263]=t[x[jvj+263]];
goto l82;
l86:x[jvj+240]=s[x[jvj+264]] ;z[jvj+240]=(x[jvj+240]<=sepcte) ? x[jvj+240] : z[jvj+264];
pile[v[22]]=jvj+240; pile[WZ1]=jvj+117; pile[WZ2]=jvj+241; 
(*f[760])( );     /*MEMEX0(jvj+240,jvj+117,jvj+241)*/
if((x[jvj+241]==135)) goto l87;
x[jvj+264]=t[x[jvj+264]];
goto l85;
l87:x[jvj+242]=0 ;z[jvj+242]=0;
x[jvj+265]=x[jvj+112] ;z[jvj+265]=z[jvj+112];
l88:if((x[jvj+265]>0)) goto l89;
x[jvj+121]=x[jvj+242] ;z[jvj+121]=z[jvj+242];
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; 
(*f[299])( );     /*COPEL0(jvj+121,jvj+122)*/
x[jvj+266]=x[jvj+120] ;z[jvj+266]=z[jvj+120];
l91:if((x[jvj+266]>0)) goto l92;
goto l38;
l89:x[jvj+243]=s[x[jvj+265]] ;z[jvj+243]=(x[jvj+243]<=sepcte) ? x[jvj+243] : z[jvj+265];
if((x[jvj+243]==x[jvj+240])) goto l90;
pile[v[22]]=jvj+242; pile[WZ1]=jvj+243; 
(*f[68])( );     /*PLUE0(jvj+242,jvj+243)*/
l90:x[jvj+265]=t[x[jvj+265]];
goto l88;
l92:x[jvj+244]=s[x[jvj+266]] ;z[jvj+244]=(x[jvj+244]<=sepcte) ? x[jvj+244] : z[jvj+266];
pile[v[22]]=jvj+244; pile[WZ1]=NNNY; pile[WZ2]=jvj+245; 
(*f[760])( );     /*MEMEX0(jvj+244,NNNY,jvj+245)*/
if((x[jvj+245]==135)) goto l93;
x[jvj+266]=t[x[jvj+266]];
goto l91;
l93:x[jvj+246]=0 ;z[jvj+246]=0;
x[jvj+267]=x[jvj+120] ;z[jvj+267]=z[jvj+120];
l94:if((x[jvj+267]>0)) goto l95;
x[jvj+123]=x[jvj+246] ;z[jvj+123]=z[jvj+246];
pile[v[22]]=jvj+123; pile[WZ1]=jvj+124; 
(*f[299])( );     /*COPEL0(jvj+123,jvj+124)*/
x[jvj+199]=x[jvj+122] ;z[jvj+199]=z[jvj+122];
x[jvj+251]=x[jvj+120] ;z[jvj+251]=z[jvj+120];
l39:if((x[jvj+251]<=0)) goto l38;
x[jvj+11]=s[x[jvj+251]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+251];
if((x[NNNY]!=x[jvj+11])) goto l40;
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+11,V117)*/
V117=pile[WZ2]; 
if((V117<0)) goto l41;
l4:pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==52)) goto l41;
l40:x[jvj+251]=t[x[jvj+251]];
goto l39;
l95:x[jvj+247]=s[x[jvj+267]] ;z[jvj+247]=(x[jvj+247]<=sepcte) ? x[jvj+247] : z[jvj+267];
if((x[jvj+247]==x[jvj+244])) goto l96;
pile[v[22]]=jvj+246; pile[WZ1]=jvj+247; 
(*f[68])( );     /*PLUE0(jvj+246,jvj+247)*/
l96:x[jvj+267]=t[x[jvj+267]];
goto l94;
l11:pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]==52)) goto l21;
l20:x[jvj+55]=t[x[jvj+55]];
l19:if((x[jvj+55]<=0)) goto l22;
x[jvj+26]=s[x[jvj+55]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+55];
if((x[NNNY]!=x[jvj+26])) goto l20;
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+26,V216)*/
V216=pile[WZ2]; 
if((V216<0)) goto l21;
goto l11;
l13:pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]==52)) goto l29;
l28:x[jvj+79]=t[x[jvj+79]];
l27:if((x[jvj+79]<=0)) goto l30;
x[jvj+32]=s[x[jvj+79]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+79];
if((x[NNNY]!=x[jvj+32])) goto l28;
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+32,V250)*/
V250=pile[WZ2]; 
if((V250<0)) goto l29;
goto l13;
}
