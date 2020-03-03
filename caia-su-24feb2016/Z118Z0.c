#include "dx.h"
void Z118Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V162=0,V150=0,V151=0,V157=0,N=0,V161=0,V159=0,V454=0,V441=0,V310=0,V292=0,V298=0,V317=0,V324=0,V318=0,V224=0,V243=0,V223=0,V396=0,V377=0,V190=0,V209=0,V189=0,V173=0,V179=0,V152=0,V368=0,V349=0,I=0,V136=0,J=0,V112=0,V257=0,V281=0,V256=0,V264=0,P=0,V17=0,K=0,V91=0,V71=0,V35=0,V54=0,V34=0,L=0,V33=0,V70=0,V188=0,V222=0,V323=0,V111=0,V263=0,V533=0,V534=0,V535=0,V536=0,V539=0,V538=0,V537=0,V540=0,V541=0,V542=0,V543=0,V546=0,V545=0,V544=0,V547=0,V548=0,V549=0,V550=0,V553=0,V552=0,V551=0,V554=0,V555=0,V556=0,V557=0,V560=0,V559=0,V558=0,V561=0,V562=0,V563=0,V564=0,V567=0,V566=0,V565=0,V568=0,V569=0,V570=0,V571=0,V574=0,V573=0,V572=0,V575=0,V576=0,V577=0,V578=0,V581=0,V580=0,V579=0,V582=0,V583=0,V584=0,V585=0,V588=0,V587=0,V586=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=233;
if(v[0]>99700) (*f[6])( );

NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,NNNY,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=596)) goto l13;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,NNNY,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+18,V454)*/
V454=pile[WZ2]; 
if((V454==1)) goto l5;
if((V454!=0)) goto l7;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,NNNY,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[1352])( );     /*POSITIF0(jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l6;
l7:if((V454>=0)) goto l9;
V441=(-V454);
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,NNNY,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[996])( );if(v[102]) goto l9;     /*PAIR0(jvj+23,jvj+24)*/
if((x[jvj+24]==135)) goto l8;
l9:pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,NNNY,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]==486)) goto l10;
if((x[jvj+29]!=485)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+35)*/
x[jvj+15]=0 ;z[jvj+15]=0;
x[jvj+11]=d[76];z[jvj+11]=0;
l3:if((x[jvj+35]>0)) goto l4;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+36; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+36)*/
NNNT=174;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+221; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=111; pile[WZ2]=jvj+222; 
(*f[54])( );     /*TRI1(jvj+221,111,jvj+222)*/
pile[v[22]]=jvj+222; pile[WZ1]=jvj+36; pile[WZ2]=107; pile[WZ3]=jvj+223; 
(*f[301])( );     /*TRI11(jvj+222,jvj+36,107,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+223,22,100,jvj+37)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+37; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+37,NNNX)*/
l69:v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:V150++;
if((V150<=29)) goto l2;
l33:x[jvj+82]=t[x[jvj+82]];
l31:if((x[jvj+82]>0)) goto l32;
x[jvj+91]=d[20];z[jvj+91]=0;
l35:if((x[jvj+91]<=0)) goto l39;
x[jvj+92]=s[x[jvj+91]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+91];
pile[v[22]]=jvj+92; pile[WZ1]=jvj+69; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(jvj+92,jvj+69,jvj+93)*/
pile[v[22]]=111; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+93,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+94,jvj+95)*/
if((x[jvj+95]!=596)) goto l36;
pile[v[22]]=268; pile[WZ1]=jvj+92; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(268,jvj+92,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+69; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(jvj+96,jvj+69,jvj+97)*/
pile[v[22]]=130; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+97,V368)*/
V368=pile[WZ2]; 
V349=V368;
if((V349>0)) goto l36;
pile[v[22]]=102; pile[WZ1]=jvj+93; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+93,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+98; 
(*f[1446])( );     /*NONUL0(jvj+3,jvj+98)*/
if((x[jvj+98]==135)) goto l37;
l36:x[jvj+91]=t[x[jvj+91]];
goto l35;
l4:x[jvj+12]=s[x[jvj+35]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+35];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+205; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+205)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V454; pile[WZ4]=jvj+208; 
(*f[192])( );     /*QUADRI4(100,41,130,V454,jvj+208)*/
pile[v[22]]=jvj+205; pile[WZ1]=111; pile[WZ2]=jvj+206; 
(*f[54])( );     /*TRI1(jvj+205,111,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+206,jvj+13,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+208; pile[WZ4]=jvj+207; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+208,jvj+207,jvj+14)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+14,jvj+15)*/
x[jvj+35]=t[x[jvj+35]];
goto l3;
l5:NNNT=162;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+19)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+19; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+19,NNNX)*/
goto l69;
l6:NNNT=163;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+22)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+22; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+22,NNNX)*/
goto l69;
l8:pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+25)*/
NNNT=172;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+209; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+209)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V441; pile[WZ4]=jvj+212; 
(*f[192])( );     /*QUADRI4(100,41,130,V441,jvj+212)*/
pile[v[22]]=jvj+209; pile[WZ1]=111; pile[WZ2]=jvj+210; 
(*f[54])( );     /*TRI1(jvj+209,111,jvj+210)*/
pile[v[22]]=jvj+210; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+211; 
(*f[58])( );     /*TRI3(jvj+210,jvj+25,103,jvj+211)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+212; pile[WZ4]=jvj+211; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+212,jvj+211,jvj+26)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+26; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+26,NNNX)*/
goto l69;
l10:pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+30)*/
x[jvj+228]=x[jvj+30] ;z[jvj+228]=z[jvj+30];
l11:if((x[jvj+228]<=0)) goto l13;
x[jvj+31]=s[x[jvj+228]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+228];
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+31,V310)*/
V310=pile[WZ2]; 
V292=V310;
pile[v[22]]=V292; pile[WZ1]=V454; 
(*f[1006])( );if(v[102]) goto l12;     /*POWER0(V292,V454,V298)*/
V298=pile[WZ2]; 
x[jvj+232]=x[jvj+30] ;z[jvj+232]=z[jvj+30];
l76:if((x[jvj+232]>0)) goto l77;
l12:x[jvj+228]=t[x[jvj+228]];
goto l11;
l13:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(539,NNNY,jvj+38)*/
pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+38,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]==408)) goto l14;
if((x[jvj+40]==625)) goto l16;
if((x[jvj+40]!=25)) goto l25;
x[jvj+60]=d[20];z[jvj+60]=0;
l21:if((x[jvj+60]<=0)) goto l25;
x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+38; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+61,jvj+38,jvj+62)*/
pile[v[22]]=111; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+62,jvj+63)*/
pile[v[22]]=101; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+63,jvj+64)*/
if((x[jvj+64]!=596)) goto l22;
pile[v[22]]=268; pile[WZ1]=jvj+61; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+61,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+38; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+65,jvj+38,jvj+66)*/
pile[v[22]]=130; pile[WZ1]=jvj+66; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+66,V396)*/
V396=pile[WZ2]; 
V377=V396;
if((V377>0)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+62; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+62,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+67; 
(*f[1446])( );     /*NONUL0(jvj+7,jvj+67)*/
if((x[jvj+67]==135)) goto l23;
l22:x[jvj+60]=t[x[jvj+60]];
goto l21;
l14:pile[v[22]]=103; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+38,jvj+41)*/
pile[v[22]]=111; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+41,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]!=596)) goto l25;
pile[v[22]]=102; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+41,jvj+44)*/
pile[v[22]]=130; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+44,V317)*/
V317=pile[WZ2]; 
V324=abs(V317);
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+38,jvj+45)*/
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+45,V318)*/
V318=pile[WZ2]; 
if((V324<V318)) goto l25;
pile[v[22]]=103; pile[WZ1]=jvj+41; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+41,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=484)) goto l25;
pile[v[22]]=jvj+46; pile[WZ1]=jvj+48; 
(*f[1352])( );     /*POSITIF0(jvj+46,jvj+48)*/
if((x[jvj+48]==135)) goto l82;
l25:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(538,NNNY,jvj+69)*/
pile[v[22]]=111; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+69,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+70,jvj+71)*/
if((x[jvj+71]==625)) goto l26;
if((x[jvj+71]!=25)) goto l39;
x[jvj+82]=d[20];z[jvj+82]=0;
goto l31;
l16:pile[v[22]]=160; pile[WZ1]=jvj+38; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,jvj+38,jvj+50)*/
pile[v[22]]=130; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+50,V224)*/
V224=pile[WZ2]; 
x[jvj+51]=d[20];z[jvj+51]=0;
l17:if((x[jvj+51]<=0)) goto l25;
x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+38; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+52,jvj+38,jvj+53)*/
if((x[NNNY]!=x[jvj+53])) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=596)) goto l18;
pile[v[22]]=102; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+53,jvj+56)*/
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+56,V243)*/
V243=pile[WZ2]; 
V223=V243;
V540=V223%V224;
V541=V540;
if((V541<=0)) goto l86;
V542=V224/2;
if((V541<=V542)) goto l86;
V543=V541-V224;
V222=V543;
l19:if((V222==V223)) goto l18;
pile[v[22]]=103; pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+53,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(jvj+57,jvj+58)*/
x[jvj+59]=incon;
if((V222==0)) goto l75;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+201; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+201)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V222; pile[WZ4]=jvj+204; 
(*f[192])( );     /*QUADRI4(100,41,130,V222,jvj+204)*/
pile[v[22]]=jvj+201; pile[WZ1]=111; pile[WZ2]=jvj+202; 
(*f[54])( );     /*TRI1(jvj+201,111,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=jvj+58; pile[WZ2]=103; pile[WZ3]=jvj+203; 
(*f[58])( );     /*TRI3(jvj+202,jvj+58,103,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+204; pile[WZ4]=jvj+203; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+204,jvj+203,jvj+59)*/
l20:NNNT=198;
pile[v[22]]=NNNY; pile[WZ1]=jvj+59; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+59,NNNX)*/
goto l69;
l18:x[jvj+51]=t[x[jvj+51]];
goto l17;
l23:pile[v[22]]=103; pile[WZ1]=jvj+62; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+62,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1352])( );     /*POSITIF0(jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l24;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[996])( );if(v[102]) goto l22;     /*PAIR0(jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l24;
goto l22;
l24:NNNT=206;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+68)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+68; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+38,jvj+68,NNNX)*/
goto l69;
l26:pile[v[22]]=160; pile[WZ1]=jvj+69; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(160,jvj+69,jvj+72)*/
pile[v[22]]=130; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,jvj+72,V190)*/
V190=pile[WZ2]; 
x[jvj+73]=d[20];z[jvj+73]=0;
l27:if((x[jvj+73]<=0)) goto l39;
x[jvj+74]=s[x[jvj+73]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+73];
pile[v[22]]=jvj+74; pile[WZ1]=jvj+69; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+74,jvj+69,jvj+75)*/
if((x[NNNY]!=x[jvj+75])) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+75,jvj+76)*/
pile[v[22]]=101; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+76,jvj+77)*/
if((x[jvj+77]!=596)) goto l28;
pile[v[22]]=102; pile[WZ1]=jvj+75; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+75,jvj+78)*/
pile[v[22]]=130; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+78,V209)*/
V209=pile[WZ2]; 
V189=V209;
V547=V189%V190;
V548=V547;
if((V548<=0)) goto l88;
V549=V190/2;
if((V548<=V549)) goto l88;
V550=V548-V190;
V188=V550;
l29:if((V188==V189)) goto l28;
pile[v[22]]=103; pile[WZ1]=jvj+75; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+75,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[255])( );     /*COPEXP0(jvj+79,jvj+80)*/
x[jvj+81]=incon;
if((V188==0)) goto l74;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+197; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+197)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V188; pile[WZ4]=jvj+200; 
(*f[192])( );     /*QUADRI4(100,41,130,V188,jvj+200)*/
pile[v[22]]=jvj+197; pile[WZ1]=111; pile[WZ2]=jvj+198; 
(*f[54])( );     /*TRI1(jvj+197,111,jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=jvj+80; pile[WZ2]=103; pile[WZ3]=jvj+199; 
(*f[58])( );     /*TRI3(jvj+198,jvj+80,103,jvj+199)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+200; pile[WZ4]=jvj+199; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+200,jvj+199,jvj+81)*/
l30:NNNT=198;
pile[v[22]]=NNNY; pile[WZ1]=jvj+81; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+81,NNNX)*/
goto l69;
l28:x[jvj+73]=t[x[jvj+73]];
goto l27;
l32:x[jvj+83]=s[x[jvj+82]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+82];
pile[v[22]]=jvj+83; pile[WZ1]=jvj+69; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+83,jvj+69,jvj+84)*/
pile[v[22]]=111; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+84,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+85,jvj+86)*/
if((x[jvj+86]!=596)) goto l33;
pile[v[22]]=102; pile[WZ1]=jvj+84; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+84,jvj+87)*/
pile[v[22]]=130; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+87,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+83; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+83,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+69; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+88,jvj+69,jvj+89)*/
pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+89,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+84; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+84,jvj+1)*/
V151=V173;
V152=V179;
V162=abs(V152);
V150=0;
l2:pile[v[22]]=V150; pile[WZ1]=V151; 
(*f[1006])( );if(v[102]) goto l1;     /*POWER0(V150,V151,V157)*/
V157=pile[WZ2]; 
N=V157;
V161=abs(N);
if((V161<V162)) goto l1;
x[jvj+90]=incon;
(*f[1006])( );if(v[102]) goto l73;     /*POWER0(V150,V151,V159)*/
V159=pile[WZ2]; 
if((V159!=V152)) goto l73;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+193; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+193)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V150; pile[WZ4]=jvj+195; 
(*f[192])( );     /*QUADRI4(100,41,130,V150,jvj+195)*/
pile[v[22]]=jvj+193; pile[WZ1]=111; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(jvj+193,111,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=jvj+195; pile[WZ2]=103; pile[WZ3]=jvj+196; 
(*f[58])( );     /*TRI3(jvj+194,jvj+195,103,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+196; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+2,jvj+196,jvj+90)*/
l34:NNNT=237;
pile[v[22]]=jvj+69; pile[WZ1]=jvj+90; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+69,jvj+90,NNNX)*/
goto l69;
l37:pile[v[22]]=103; pile[WZ1]=jvj+93; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+93,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1352])( );     /*POSITIF0(jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l38;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[996])( );if(v[102]) goto l36;     /*PAIR0(jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l38;
goto l36;
l38:NNNT=206;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+99)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+99; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+69,jvj+99,NNNX)*/
goto l69;
l39:pile[v[22]]=543; pile[WZ1]=jvj+69; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(543,jvj+69,jvj+100)*/
pile[v[22]]=539; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(539,jvj+100,jvj+101)*/
pile[v[22]]=111; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+101,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+102,jvj+103)*/
if((x[jvj+103]!=408)) goto l43;
pile[v[22]]=103; pile[WZ1]=jvj+101; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,jvj+101,jvj+104)*/
pile[v[22]]=111; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+104,jvj+105)*/
pile[v[22]]=101; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+105,jvj+106)*/
if((x[jvj+106]!=485)) goto l43;
pile[v[22]]=107; pile[WZ1]=jvj+104; pile[WZ2]=jvj+107; 
(*f[33])( );     /*FNDE0(107,jvj+104,jvj+107)*/
pile[v[22]]=102; pile[WZ1]=jvj+101; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+101,jvj+108)*/
pile[v[22]]=130; pile[WZ1]=jvj+108; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+108,I)*/
I=pile[WZ2]; 
l40:if((x[jvj+107]<=0)) goto l43;
x[jvj+109]=s[x[jvj+107]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+107];
pile[v[22]]=111; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+109,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+110,jvj+111)*/
if((x[jvj+111]!=52)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+109; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+109,jvj+112)*/
pile[v[22]]=111; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+112,jvj+113)*/
pile[v[22]]=101; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+113,jvj+114)*/
if((x[jvj+114]!=596)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+112; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+112,jvj+115)*/
pile[v[22]]=130; pile[WZ1]=jvj+115; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+115,V136)*/
V136=pile[WZ2]; 
J=V136;
V112=abs(J);
if((V112<I)) goto l41;
pile[v[22]]=103; pile[WZ1]=jvj+112; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,jvj+112,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+116,jvj+117)*/
if((x[jvj+117]!=484)) goto l41;
pile[v[22]]=jvj+116; pile[WZ1]=jvj+118; 
(*f[1352])( );     /*POSITIF0(jvj+116,jvj+118)*/
if((x[jvj+118]==135)) goto l89;
l41:x[jvj+107]=t[x[jvj+107]];
goto l40;
l43:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(543,NNNY,jvj+120)*/
pile[v[22]]=539; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(539,jvj+120,jvj+121)*/
pile[v[22]]=111; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+121,jvj+122)*/
pile[v[22]]=101; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+122,jvj+123)*/
if((x[jvj+123]==408)) goto l44;
if((x[jvj+123]!=625)) goto l61;
pile[v[22]]=160; pile[WZ1]=jvj+121; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(160,jvj+121,jvj+137)*/
pile[v[22]]=130; pile[WZ1]=jvj+137; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(130,jvj+137,P)*/
P=pile[WZ2]; 
x[jvj+138]=d[20];z[jvj+138]=0;
l48:if((x[jvj+138]>0)) goto l49;
x[jvj+151]=d[20];z[jvj+151]=0;
l55:if((x[jvj+151]<=0)) goto l61;
x[jvj+152]=s[x[jvj+151]] ;z[jvj+152]=(x[jvj+152]<=sepcte) ? x[jvj+152] : z[jvj+151];
pile[v[22]]=jvj+152; pile[WZ1]=jvj+121; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(jvj+152,jvj+121,jvj+153)*/
pile[v[22]]=111; pile[WZ1]=jvj+153; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+153,jvj+154)*/
pile[v[22]]=101; pile[WZ1]=jvj+154; pile[WZ2]=jvj+155; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+154,jvj+155)*/
if((x[jvj+155]!=485)) goto l56;
pile[v[22]]=107; pile[WZ1]=jvj+153; pile[WZ2]=jvj+156; 
(*f[33])( );     /*FNDE0(107,jvj+153,jvj+156)*/
x[jvj+230]=x[jvj+156] ;z[jvj+230]=z[jvj+156];
l57:if((x[jvj+230]<=0)) goto l56;
x[jvj+157]=s[x[jvj+230]] ;z[jvj+157]=(x[jvj+157]<=sepcte) ? x[jvj+157] : z[jvj+230];
if((x[NNNY]!=x[jvj+157])) goto l58;
pile[v[22]]=111; pile[WZ1]=jvj+157; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+157,jvj+158)*/
pile[v[22]]=101; pile[WZ1]=jvj+158; pile[WZ2]=jvj+159; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+158,jvj+159)*/
if((x[jvj+159]!=596)) goto l58;
pile[v[22]]=102; pile[WZ1]=jvj+157; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+157,jvj+160)*/
pile[v[22]]=130; pile[WZ1]=jvj+160; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+160,V91)*/
V91=pile[WZ2]; 
V71=V91;
V575=V71%P;
V576=V575;
if((V576<=0)) goto l98;
V577=P/2;
if((V576<=V577)) goto l98;
V578=V576-P;
V70=V578;
l59:if((V70==V71)) goto l58;
pile[v[22]]=103; pile[WZ1]=jvj+157; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+157,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=jvj+162; 
(*f[255])( );     /*COPEXP0(jvj+161,jvj+162)*/
x[jvj+163]=incon;
if((V70==0)) goto l72;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+189)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V70; pile[WZ4]=jvj+192; 
(*f[192])( );     /*QUADRI4(100,41,130,V70,jvj+192)*/
pile[v[22]]=jvj+189; pile[WZ1]=111; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,111,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+162; pile[WZ2]=103; pile[WZ3]=jvj+191; 
(*f[58])( );     /*TRI3(jvj+190,jvj+162,103,jvj+191)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+192; pile[WZ4]=jvj+191; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+192,jvj+191,jvj+163)*/
l60:NNNT=200;
pile[v[22]]=NNNY; pile[WZ1]=jvj+163; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+163,NNNX)*/
goto l69;
l44:pile[v[22]]=103; pile[WZ1]=jvj+121; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(103,jvj+121,jvj+124)*/
pile[v[22]]=111; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+124,jvj+125)*/
pile[v[22]]=101; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+125,jvj+126)*/
if((x[jvj+126]!=485)) goto l61;
pile[v[22]]=107; pile[WZ1]=jvj+124; pile[WZ2]=jvj+127; 
(*f[33])( );     /*FNDE0(107,jvj+124,jvj+127)*/
pile[v[22]]=102; pile[WZ1]=jvj+121; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,jvj+121,jvj+128)*/
pile[v[22]]=130; pile[WZ1]=jvj+128; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(130,jvj+128,V257)*/
V257=pile[WZ2]; 
l45:if((x[jvj+127]<=0)) goto l61;
x[jvj+129]=s[x[jvj+127]] ;z[jvj+129]=(x[jvj+129]<=sepcte) ? x[jvj+129] : z[jvj+127];
pile[v[22]]=111; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+129,jvj+130)*/
pile[v[22]]=101; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+130,jvj+131)*/
if((x[jvj+131]!=596)) goto l46;
pile[v[22]]=102; pile[WZ1]=jvj+129; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+129,jvj+132)*/
pile[v[22]]=130; pile[WZ1]=jvj+132; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+132,V281)*/
V281=pile[WZ2]; 
V256=V281;
V264=abs(V256);
if((V264<V257)) goto l46;
pile[v[22]]=103; pile[WZ1]=jvj+129; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+129,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+133,jvj+134)*/
if((x[jvj+134]!=484)) goto l46;
pile[v[22]]=jvj+133; pile[WZ1]=jvj+135; 
(*f[1352])( );     /*POSITIF0(jvj+133,jvj+135)*/
if((x[jvj+135]==135)) goto l92;
l46:x[jvj+127]=t[x[jvj+127]];
goto l45;
l49:x[jvj+139]=s[x[jvj+138]] ;z[jvj+139]=(x[jvj+139]<=sepcte) ? x[jvj+139] : z[jvj+138];
pile[v[22]]=jvj+139; pile[WZ1]=jvj+121; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(jvj+139,jvj+121,jvj+140)*/
pile[v[22]]=111; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+140,jvj+141)*/
pile[v[22]]=101; pile[WZ1]=jvj+141; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+141,jvj+142)*/
if((x[jvj+142]!=486)) goto l50;
pile[v[22]]=107; pile[WZ1]=jvj+140; pile[WZ2]=jvj+143; 
(*f[33])( );     /*FNDE0(107,jvj+140,jvj+143)*/
x[jvj+229]=x[jvj+143] ;z[jvj+229]=z[jvj+143];
l51:if((x[jvj+229]<=0)) goto l50;
x[jvj+144]=s[x[jvj+229]] ;z[jvj+144]=(x[jvj+144]<=sepcte) ? x[jvj+144] : z[jvj+229];
if((x[NNNY]!=x[jvj+144])) goto l52;
pile[v[22]]=111; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,jvj+144,jvj+145)*/
pile[v[22]]=101; pile[WZ1]=jvj+145; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+145,jvj+146)*/
if((x[jvj+146]!=596)) goto l52;
pile[v[22]]=102; pile[WZ1]=jvj+144; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(102,jvj+144,jvj+147)*/
pile[v[22]]=130; pile[WZ1]=jvj+147; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(130,jvj+147,V17)*/
V17=pile[WZ2]; 
K=V17;
V568=K%P;
V569=V568;
if((V569<=0)) goto l96;
V570=P/2;
if((V569<=V570)) goto l96;
V571=V569-P;
L=V571;
l53:if((L==K)) goto l52;
pile[v[22]]=103; pile[WZ1]=jvj+144; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(103,jvj+144,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=jvj+149; 
(*f[255])( );     /*COPEXP0(jvj+148,jvj+149)*/
x[jvj+150]=incon;
if((L==0)) goto l70;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+181)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+184; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+184)*/
pile[v[22]]=jvj+181; pile[WZ1]=111; pile[WZ2]=jvj+182; 
(*f[54])( );     /*TRI1(jvj+181,111,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=jvj+149; pile[WZ2]=103; pile[WZ3]=jvj+183; 
(*f[58])( );     /*TRI3(jvj+182,jvj+149,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+184; pile[WZ4]=jvj+183; pile[WZ5]=jvj+150; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+184,jvj+183,jvj+150)*/
l54:NNNT=199;
pile[v[22]]=NNNY; pile[WZ1]=jvj+150; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+150,NNNX)*/
goto l69;
l50:x[jvj+138]=t[x[jvj+138]];
goto l48;
l52:x[jvj+229]=t[x[jvj+229]];
goto l51;
l56:x[jvj+151]=t[x[jvj+151]];
goto l55;
l58:x[jvj+230]=t[x[jvj+230]];
goto l57;
l61:pile[v[22]]=538; pile[WZ1]=jvj+120; pile[WZ2]=jvj+164; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(538,jvj+120,jvj+164)*/
pile[v[22]]=111; pile[WZ1]=jvj+164; pile[WZ2]=jvj+165; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,jvj+164,jvj+165)*/
pile[v[22]]=101; pile[WZ1]=jvj+165; pile[WZ2]=jvj+166; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(101,jvj+165,jvj+166)*/
if((x[jvj+166]!=625)) goto l68;
pile[v[22]]=160; pile[WZ1]=jvj+164; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(160,jvj+164,jvj+167)*/
pile[v[22]]=130; pile[WZ1]=jvj+167; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(130,jvj+167,V35)*/
V35=pile[WZ2]; 
x[jvj+168]=d[20];z[jvj+168]=0;
l62:if((x[jvj+168]<=0)) goto l68;
x[jvj+169]=s[x[jvj+168]] ;z[jvj+169]=(x[jvj+169]<=sepcte) ? x[jvj+169] : z[jvj+168];
pile[v[22]]=jvj+169; pile[WZ1]=jvj+164; pile[WZ2]=jvj+170; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(jvj+169,jvj+164,jvj+170)*/
pile[v[22]]=111; pile[WZ1]=jvj+170; pile[WZ2]=jvj+171; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(111,jvj+170,jvj+171)*/
pile[v[22]]=101; pile[WZ1]=jvj+171; pile[WZ2]=jvj+172; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(101,jvj+171,jvj+172)*/
if((x[jvj+172]!=485)) goto l63;
pile[v[22]]=107; pile[WZ1]=jvj+170; pile[WZ2]=jvj+173; 
(*f[33])( );     /*FNDE0(107,jvj+170,jvj+173)*/
x[jvj+231]=x[jvj+173] ;z[jvj+231]=z[jvj+173];
l64:if((x[jvj+231]<=0)) goto l63;
x[jvj+174]=s[x[jvj+231]] ;z[jvj+174]=(x[jvj+174]<=sepcte) ? x[jvj+174] : z[jvj+231];
if((x[NNNY]!=x[jvj+174])) goto l65;
pile[v[22]]=111; pile[WZ1]=jvj+174; pile[WZ2]=jvj+175; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+174,jvj+175)*/
pile[v[22]]=101; pile[WZ1]=jvj+175; pile[WZ2]=jvj+176; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+175,jvj+176)*/
if((x[jvj+176]!=596)) goto l65;
pile[v[22]]=102; pile[WZ1]=jvj+174; pile[WZ2]=jvj+177; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(102,jvj+174,jvj+177)*/
pile[v[22]]=130; pile[WZ1]=jvj+177; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+177,V54)*/
V54=pile[WZ2]; 
V34=V54;
V582=V34%V35;
V583=V582;
if((V583<=0)) goto l100;
V584=V35/2;
if((V583<=V584)) goto l100;
V585=V583-V35;
V33=V585;
l66:if((V33==V34)) goto l65;
pile[v[22]]=103; pile[WZ1]=jvj+174; pile[WZ2]=jvj+178; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(103,jvj+174,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=jvj+179; 
(*f[255])( );     /*COPEXP0(jvj+178,jvj+179)*/
x[jvj+180]=incon;
if((V33==0)) goto l71;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+185; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+185)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V33; pile[WZ4]=jvj+188; 
(*f[192])( );     /*QUADRI4(100,41,130,V33,jvj+188)*/
pile[v[22]]=jvj+185; pile[WZ1]=111; pile[WZ2]=jvj+186; 
(*f[54])( );     /*TRI1(jvj+185,111,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=jvj+179; pile[WZ2]=103; pile[WZ3]=jvj+187; 
(*f[58])( );     /*TRI3(jvj+186,jvj+179,103,jvj+187)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+188; pile[WZ4]=jvj+187; pile[WZ5]=jvj+180; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+188,jvj+187,jvj+180)*/
l67:NNNT=200;
pile[v[22]]=NNNY; pile[WZ1]=jvj+180; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+180,NNNX)*/
goto l69;
l63:x[jvj+168]=t[x[jvj+168]];
goto l62;
l65:x[jvj+231]=t[x[jvj+231]];
goto l64;
l68:x[NNNX]=NNNT=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l70:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+150; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+150)*/
goto l54;
l71:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+180; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+180)*/
goto l67;
l72:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+163; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+163)*/
goto l60;
l73:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+90)*/
goto l34;
l74:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+81; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+81)*/
goto l30;
l75:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+59; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+59)*/
goto l20;
l77:x[jvj+224]=s[x[jvj+232]] ;z[jvj+224]=(x[jvj+224]<=sepcte) ? x[jvj+224] : z[jvj+232];
pile[v[22]]=jvj+224; pile[WZ1]=jvj+31; pile[WZ2]=jvj+225; 
(*f[760])( );     /*MEMEX0(jvj+224,jvj+31,jvj+225)*/
if((x[jvj+225]==135)) goto l78;
x[jvj+232]=t[x[jvj+232]];
goto l76;
l78:x[jvj+226]=0 ;z[jvj+226]=0;
x[jvj+233]=x[jvj+30] ;z[jvj+233]=z[jvj+30];
l79:if((x[jvj+233]>0)) goto l80;
x[jvj+32]=x[jvj+226] ;z[jvj+32]=z[jvj+226];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[299])( );     /*COPEL0(jvj+32,jvj+33)*/
NNNT=175;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+213)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V298; pile[WZ4]=jvj+217; 
(*f[192])( );     /*QUADRI4(100,41,130,V298,jvj+217)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=111; pile[WZ2]=jvj+219; 
(*f[54])( );     /*TRI1(jvj+218,111,jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=jvj+33; pile[WZ2]=107; pile[WZ3]=jvj+220; 
(*f[301])( );     /*TRI11(jvj+219,jvj+33,107,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+215; 
(*f[58])( );     /*TRI3(jvj+220,22,100,jvj+215)*/
pile[v[22]]=jvj+213; pile[WZ1]=111; pile[WZ2]=jvj+214; 
(*f[54])( );     /*TRI1(jvj+213,111,jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=jvj+215; pile[WZ2]=103; pile[WZ3]=jvj+216; 
(*f[58])( );     /*TRI3(jvj+214,jvj+215,103,jvj+216)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+217; pile[WZ4]=jvj+216; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+217,jvj+216,jvj+34)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+34; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+34,NNNX)*/
goto l69;
l80:x[jvj+227]=s[x[jvj+233]] ;z[jvj+227]=(x[jvj+227]<=sepcte) ? x[jvj+227] : z[jvj+233];
if((x[jvj+227]==x[jvj+224])) goto l81;
pile[v[22]]=jvj+226; pile[WZ1]=jvj+227; 
(*f[68])( );     /*PLUE0(jvj+226,jvj+227)*/
l81:x[jvj+233]=t[x[jvj+233]];
goto l79;
l82:V533=V317%V318;
V534=V533;
if((V534<=0)) goto l84;
V535=V318/2;
if((V534<=V535)) goto l84;
V536=V534-V318;
V323=V536;
l15:NNNT=159;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V323; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V323,jvj+49)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+49; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+44,jvj+49,NNNX)*/
goto l69;
l83:V323=V534;
goto l15;
l84:if((V534>=0)) goto l83;
V538=abs(V534);
V537=2*V538;
if((V537<V318)) goto l83;
V539=V534+V318;
V323=V539;
goto l15;
l85:V222=V541;
goto l19;
l86:if((V541>=0)) goto l85;
V545=abs(V541);
V544=2*V545;
if((V544<V224)) goto l85;
V546=V541+V224;
V222=V546;
goto l19;
l87:V188=V548;
goto l29;
l88:if((V548>=0)) goto l87;
V552=abs(V548);
V551=2*V552;
if((V551<V190)) goto l87;
V553=V548+V190;
V188=V553;
goto l29;
l89:V554=J%I;
V555=V554;
if((V555<=0)) goto l91;
V556=I/2;
if((V555<=V556)) goto l91;
V557=V555-I;
V111=V557;
l42:NNNT=161;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V111; pile[WZ4]=jvj+119; 
(*f[192])( );     /*QUADRI4(100,41,130,V111,jvj+119)*/
pile[v[22]]=jvj+115; pile[WZ1]=jvj+119; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+115,jvj+119,NNNX)*/
goto l69;
l90:V111=V555;
goto l42;
l91:if((V555>=0)) goto l90;
V559=abs(V555);
V558=2*V559;
if((V558<I)) goto l90;
V560=V555+I;
V111=V560;
goto l42;
l92:V561=V256%V257;
V562=V561;
if((V562<=0)) goto l94;
V563=V257/2;
if((V562<=V563)) goto l94;
V564=V562-V257;
V263=V564;
l47:NNNT=160;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V263; pile[WZ4]=jvj+136; 
(*f[192])( );     /*QUADRI4(100,41,130,V263,jvj+136)*/
pile[v[22]]=jvj+132; pile[WZ1]=jvj+136; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+132,jvj+136,NNNX)*/
goto l69;
l93:V263=V562;
goto l47;
l94:if((V562>=0)) goto l93;
V566=abs(V562);
V565=2*V566;
if((V565<V257)) goto l93;
V567=V562+V257;
V263=V567;
goto l47;
l95:L=V569;
goto l53;
l96:if((V569>=0)) goto l95;
V573=abs(V569);
V572=2*V573;
if((V572<P)) goto l95;
V574=V569+P;
L=V574;
goto l53;
l97:V70=V576;
goto l59;
l98:if((V576>=0)) goto l97;
V580=abs(V576);
V579=2*V580;
if((V579<P)) goto l97;
V581=V576+P;
V70=V581;
goto l59;
l99:V33=V583;
goto l66;
l100:if((V583>=0)) goto l99;
V587=abs(V583);
V586=2*V587;
if((V586<V35)) goto l99;
V588=V583+V35;
V33=V588;
goto l66;
}
