#include "dx.h"
void COPS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V34=0,V=0,VV=0,V37=0,V94=0,V122=0,V136=0,V139=0,V228=0,V88=0,V97=0,W=0,V73=0,V198=0,V137=0,V119=0,V99=0,V102=0,V196=0,V181=0,V182=0,V224=0,V239=0,V55=0,V60=0,V42=0,V153=0,V166=0,V161=0,V173=0,V171=0,V446=0,V445=0,V449=0,V448=0;
int R,BT,X,RM;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=313;
x[jvj+1]=10575;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1987&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; RM=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=W=incon;
if(x[BT]!=105&&x[BT]!=184&&x[BT]!=357) goto l11;
pile[v[22]]=123; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(123,X,jvj+2)*/
l11:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,X,jvj+28)*/
if((x[jvj+28]!=73)) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,X,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+29,jvj+30)*/
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,X,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=1479)) goto l22;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,X,jvj+18)*/
pile[v[22]]=436; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(436,X,jvj+20)*/
x[jvj+34]=incon;
if((x[jvj+30]!=598)) goto l3;
x[jvj+34]=x[jvj+18] ;z[jvj+34]=z[jvj+18];
l12:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(120,X,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[2082])( );     /*COPSA0(jvj+33,jvj+34)*/
if((x[jvj+30]==598)) goto l22;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,R,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+24)*/
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+11]=d[30];z[jvj+11]=0;
l7:if((x[jvj+10]>0)) goto l8;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+25; 
(*f[299])( );     /*COPEL0(jvj+13,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+174; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+174)*/
pile[WZ3]=1488; pile[WZ4]=jvj+182; 
(*f[181])( );     /*QUADRI2(100,20,101,1488,jvj+182)*/
pile[WZ3]=1487; pile[WZ4]=jvj+183; 
(*f[181])( );     /*QUADRI2(100,20,101,1487,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=111; pile[WZ2]=jvj+184; 
(*f[54])( );     /*TRI1(jvj+183,111,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=jvj+25; pile[WZ2]=107; pile[WZ3]=jvj+185; 
(*f[301])( );     /*TRI11(jvj+184,jvj+25,107,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+180; 
(*f[58])( );     /*TRI3(jvj+185,22,100,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=103; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,103,jvj+181)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+182; pile[WZ4]=jvj+181; pile[WZ5]=jvj+178; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+182,jvj+181,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=(-20); pile[WZ2]=108; pile[WZ3]=jvj+179; 
(*f[180])( );     /*TRIENS0(jvj+178,(-20),108,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=69; pile[WZ2]=100; pile[WZ3]=jvj+176; 
(*f[58])( );     /*TRI3(jvj+179,69,100,jvj+176)*/
pile[v[22]]=jvj+174; pile[WZ1]=111; pile[WZ2]=jvj+175; 
(*f[54])( );     /*TRI1(jvj+174,111,jvj+175)*/
pile[v[22]]=jvj+175; pile[WZ1]=jvj+176; pile[WZ2]=103; pile[WZ3]=jvj+177; 
(*f[58])( );     /*TRI3(jvj+175,jvj+176,103,jvj+177)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+177; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+177,jvj+26)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=R; pile[WZ3]=jvj+26; 
(*f[1819])( );     /*COPV1(R,107,R,jvj+26)*/
if((V37=w[x[jvj+30]][1])==incon) goto l22;
if((V37!=23)) goto l9;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+149; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+149)*/
pile[WZ3]=36; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,36,jvj+146)*/
pile[v[22]]=jvj+23; pile[WZ1]=160; pile[WZ2]=jvj+145; 
(*f[54])( );     /*TRI1(jvj+23,160,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=jvj+146; pile[WZ2]=111; pile[WZ3]=jvj+147; 
(*f[58])( );     /*TRI3(jvj+145,jvj+146,111,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+148; 
(*f[58])( );     /*TRI3(jvj+147,jvj+22,103,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+148; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+149,jvj+148,jvj+17)*/
pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=R; pile[WZ3]=jvj+17; 
(*f[1819])( );     /*COPV1(R,105,R,jvj+17)*/
pile[v[22]]=337; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(337,X,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=337; 
(*f[35])( );     /*CHGC1(jvj+17,337,jvj+16)*/
l22:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,X,V88)*/
V88=pile[WZ2]; 
if((V88!=(-1278))) goto l23;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+194; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+194)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+198; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+198)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=23; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(100,20,101,23,jvj+196)*/
pile[v[22]]=jvj+194; pile[WZ1]=111; pile[WZ2]=jvj+195; 
(*f[54])( );     /*TRI1(jvj+194,111,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=jvj+196; pile[WZ2]=103; pile[WZ3]=jvj+197; 
(*f[58])( );     /*TRI3(jvj+195,jvj+196,103,jvj+197)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+198; pile[WZ4]=jvj+197; pile[WZ5]=jvj+199; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+198,jvj+197,jvj+199)*/
if((V446=w[x[BT]][1])==incon) goto l23;
if((V446!=23)) goto l55;
V445=x[X];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V445; 
(*f[134])( );     /*OTA0(BT,R,V445)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+199; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+199)*/
l23:if(V88!=(-3629)&&V88!=(-4348)&&V88!=(-4349)&&V88!=(-6170)&&V88!=(-6470)&&V88!=(-10635)&&V88!=(-10974)) goto l24;
pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(258,21,jvj+35)*/
l13:if((x[jvj+35]<=0)) goto l24;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+36,V94)*/
V94=pile[WZ2]; 
if((V94!=V88)) goto l14;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+36,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=639; pile[WZ4]=jvj+200; 
(*f[181])( );     /*QUADRI2(100,20,101,639,jvj+200)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V97; pile[WZ4]=jvj+202; 
(*f[192])( );     /*QUADRI4(100,41,130,V97,jvj+202)*/
pile[v[22]]=jvj+200; pile[WZ1]=111; pile[WZ2]=jvj+201; 
(*f[54])( );     /*TRI1(jvj+200,111,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+202; pile[WZ4]=jvj+201; pile[WZ5]=jvj+203; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+202,jvj+201,jvj+203)*/
if((V449=w[x[BT]][1])==incon) goto l24;
if((V449!=23)) goto l56;
V448=x[X];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V448; 
(*f[134])( );     /*OTA0(BT,R,V448)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+203; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+203)*/
l24:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,X,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=82)) goto l25;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,X,jvj+60)*/
pile[v[22]]=111; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+60,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+61,jvj+62)*/
if((x[jvj+62]!=282)) goto l25;
pile[v[22]]=102; pile[WZ1]=jvj+60; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+60,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+63,jvj+64)*/
if((x[jvj+64]==21)) goto l25;
pile[v[22]]=jvj+63; pile[WZ1]=jvj+65; 
(*f[255])( );     /*COPEXP0(jvj+63,jvj+65)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+206)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+204; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=436; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,436,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=jvj+206; pile[WZ2]=111; pile[WZ3]=jvj+207; 
(*f[58])( );     /*TRI3(jvj+205,jvj+206,111,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+207; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+65,jvj+207,jvj+66)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(R,107,jvj+66)*/
l26:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,X,jvj+73)*/
if((x[jvj+73]==39)) goto l27;
if((x[jvj+73]==43)) goto l30;
if((x[jvj+73]==73)) goto l33;
if((x[jvj+73]==185)) goto l34;
if((x[jvj+73]==435)) goto l37;
if((x[jvj+73]==22)) goto l38;
if((x[jvj+73]==185)) goto l39;
if((x[jvj+73]==22)) goto l41;
if((x[jvj+73]!=895)) goto l44;
pile[v[22]]=160; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(160,X,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+53,jvj+54)*/
if((x[jvj+54]==21)) goto l42;
l21:pile[v[22]]=jvj+53; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+55)*/
(*f[1817])( );     /*NOUV2(V228)*/
V228=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+192; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+192)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V228; pile[WZ4]=jvj+190; 
(*f[270])( );     /*QUADRI7(100,21,140,V228,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=436; pile[WZ2]=jvj+191; 
(*f[54])( );     /*TRI1(jvj+190,436,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=jvj+192; pile[WZ2]=111; pile[WZ3]=jvj+193; 
(*f[58])( );     /*TRI3(jvj+191,jvj+192,111,jvj+193)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+193; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+55,jvj+193,jvj+56)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+56; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V228; pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(100,21,140,V228,jvj+57)*/
pile[v[22]]=X; pile[WZ1]=160; pile[WZ2]=jvj+57; 
(*f[35])( );     /*CHGC1(X,160,jvj+57)*/
l42:pile[v[22]]=X; pile[WZ1]=jvj+116; 
(*f[1082])( );     /*TRADUIT0(X,jvj+116)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+116; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+116)*/
l44:if(W!=incon) goto l45;
l46:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,X,jvj+126)*/
pile[v[22]]=101; pile[WZ1]=jvj+126; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+126,jvj+127)*/
if((x[jvj+127]!=10171)) goto l51;
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+128; 
(*f[33])( );     /*FNDE0(114,X,jvj+128)*/
for(i=x[jvj+128],V153=0;i>0;i=t[i],V153++)  ;
if((V153!=1)) goto l51;
pile[v[22]]=113; pile[WZ2]=jvj+129; 
(*f[33])( );     /*FNDE0(113,X,jvj+129)*/
for(i=x[jvj+129],V166=0;i>0;i=t[i],V166++)  ;
if((V166==1)) goto l47;
l51:x[RES]=68 ;z[RES]=68;
l52:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:x[jvj+27]=incon;
pile[v[22]]=337; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(337,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
x[jvj+27]=x[jvj+4] ;z[jvj+27]=z[jvj+4];
l10:pile[v[22]]=X; pile[WZ1]=123; pile[WZ2]=jvj+27; 
(*f[35])( );     /*CHGC1(X,123,jvj+27)*/
goto l11;
l2:x[jvj+27]=206 ;z[jvj+27]=206;
goto l10;
l3:x[jvj+34]=x[jvj+20] ;z[jvj+34]=z[jvj+20];
goto l12;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=44)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+6,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+9,V34)*/
V34=pile[WZ2]; 
V=V34;
pile[v[22]]=jvj+10; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+10,V)*/
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l8:VV=s[x[jvj+10]];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+12,jvj+13)*/
x[jvj+10]=t[x[jvj+10]];
goto l7;
l9:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+30; pile[WZ4]=jvj+144; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+30,jvj+144)*/
pile[WZ3]=38; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,38,jvj+141)*/
pile[v[22]]=jvj+21; pile[WZ1]=160; pile[WZ2]=jvj+140; 
(*f[54])( );     /*TRI1(jvj+21,160,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+141; pile[WZ2]=111; pile[WZ3]=jvj+142; 
(*f[58])( );     /*TRI3(jvj+140,jvj+141,111,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+143; 
(*f[58])( );     /*TRI3(jvj+142,jvj+19,103,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+143; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+144,jvj+143,jvj+15)*/
pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=R; pile[WZ3]=jvj+15; 
(*f[1819])( );     /*COPV1(R,105,R,jvj+15)*/
pile[v[22]]=337; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(337,X,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=337; 
(*f[35])( );     /*CHGC1(jvj+15,337,jvj+14)*/
goto l22;
l14:x[jvj+35]=t[x[jvj+35]];
goto l13;
l17:if(x[jvj+39]==incon) goto l53;
l35:pile[v[22]]=jvj+39; pile[WZ1]=jvj+91; 
(*f[255])( );     /*COPEXP0(jvj+39,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V99; pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,21,140,V99,jvj+152)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=37; pile[WZ4]=jvj+150; 
(*f[272])( );     /*QUADRI9(100,89,162,37,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=160; pile[WZ2]=jvj+151; 
(*f[54])( );     /*TRI1(jvj+150,160,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=jvj+152; pile[WZ2]=103; pile[WZ3]=jvj+153; 
(*f[58])( );     /*TRI3(jvj+151,jvj+152,103,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+153; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+91,jvj+153,jvj+47)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V99; pile[WZ4]=jvj+238; 
(*f[270])( );     /*QUADRI7(100,21,140,V99,jvj+238)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=224; pile[WZ4]=jvj+250; 
(*f[181])( );     /*QUADRI2(100,20,101,224,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=111; pile[WZ2]=jvj+251; 
(*f[54])( );     /*TRI1(jvj+250,111,jvj+251)*/
pile[v[22]]=jvj+251; pile[WZ1]=jvj+90; pile[WZ2]=103; pile[WZ3]=jvj+252; 
(*f[58])( );     /*TRI3(jvj+251,jvj+90,103,jvj+252)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+252; pile[WZ5]=jvj+249; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+91,jvj+252,jvj+249)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+247)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V99; pile[WZ4]=jvj+245; 
(*f[270])( );     /*QUADRI7(100,21,140,V99,jvj+245)*/
pile[v[22]]=jvj+245; pile[WZ1]=436; pile[WZ2]=jvj+246; 
(*f[54])( );     /*TRI1(jvj+245,436,jvj+246)*/
pile[v[22]]=jvj+246; pile[WZ1]=jvj+247; pile[WZ2]=111; pile[WZ3]=jvj+248; 
(*f[58])( );     /*TRI3(jvj+246,jvj+247,111,jvj+248)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+249; pile[WZ4]=jvj+248; pile[WZ5]=jvj+243; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+249,jvj+248,jvj+243)*/
pile[v[22]]=jvj+45; pile[WZ1]=107; pile[WZ2]=jvj+242; 
(*f[300])( );     /*TRI10(jvj+45,107,jvj+242)*/
pile[v[22]]=jvj+243; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+244; 
(*f[298])( );     /*TRIENS1(jvj+243,(-20),jvj+242,105,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+239; 
(*f[58])( );     /*TRI3(jvj+244,42,100,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+257; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+257)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V99; pile[WZ4]=jvj+259; 
(*f[270])( );     /*QUADRI7(100,21,140,V99,jvj+259)*/
pile[v[22]]=jvj+257; pile[WZ1]=111; pile[WZ2]=jvj+258; 
(*f[54])( );     /*TRI1(jvj+257,111,jvj+258)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+259; pile[WZ4]=jvj+258; pile[WZ5]=jvj+253; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+259,jvj+258,jvj+253)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+262; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+262)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V99; pile[WZ4]=jvj+260; 
(*f[270])( );     /*QUADRI7(100,21,140,V99,jvj+260)*/
pile[v[22]]=jvj+260; pile[WZ1]=436; pile[WZ2]=jvj+261; 
(*f[54])( );     /*TRI1(jvj+260,436,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=jvj+262; pile[WZ2]=111; pile[WZ3]=jvj+263; 
(*f[58])( );     /*TRI3(jvj+261,jvj+262,111,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+263; pile[WZ5]=jvj+255; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+91,jvj+263,jvj+255)*/
pile[v[22]]=jvj+253; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+254; 
(*f[180])( );     /*TRIENS0(jvj+253,(-20),107,jvj+254)*/
pile[v[22]]=jvj+255; pile[WZ2]=jvj+254; pile[WZ3]=105; pile[WZ4]=jvj+256; 
(*f[298])( );     /*TRIENS1(jvj+255,(-20),jvj+254,105,jvj+256)*/
pile[v[22]]=jvj+256; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+240; 
(*f[58])( );     /*TRI3(jvj+256,42,100,jvj+240)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+264; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+264)*/
pile[WZ3]=255; pile[WZ4]=jvj+270; 
(*f[181])( );     /*QUADRI2(100,20,101,255,jvj+270)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V99; pile[WZ4]=jvj+268; 
(*f[270])( );     /*QUADRI7(100,21,140,V99,jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+269; 
(*f[180])( );     /*TRIENS0(jvj+268,(-20),128,jvj+269)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+270; pile[WZ4]=jvj+269; pile[WZ5]=jvj+266; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+270,jvj+269,jvj+266)*/
pile[v[22]]=jvj+264; pile[WZ1]=337; pile[WZ2]=jvj+265; 
(*f[54])( );     /*TRI1(jvj+264,337,jvj+265)*/
pile[v[22]]=jvj+266; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+267; 
(*f[298])( );     /*TRIENS1(jvj+266,(-20),jvj+265,105,jvj+267)*/
pile[v[22]]=jvj+267; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+241; 
(*f[58])( );     /*TRI3(jvj+267,42,100,jvj+241)*/
pile[v[22]]=100; pile[WZ1]=47; pile[WZ2]=436; pile[WZ3]=jvj+238; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,47,436,jvj+238,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=184; pile[WZ2]=jvj+239; 
(*f[36])( );     /*PLUSC0(jvj+92,184,jvj+239)*/
pile[WZ2]=jvj+240; 
(*f[36])( );     /*PLUSC0(jvj+92,184,jvj+240)*/
pile[WZ2]=jvj+241; 
(*f[36])( );     /*PLUSC0(jvj+92,184,jvj+241)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+92; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+92)*/
x[RES]=67 ;z[RES]=67;
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(120,X,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+47,120,jvj+46)*/
l36:pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+47; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+47)*/
l39:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,R,jvj+101)*/
if((x[jvj+101]!=185)) goto l43;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,X,jvj+102)*/
pile[v[22]]=162; pile[WZ1]=jvj+102; 
(*f[219])( );if(v[102]) goto l43;     /*FNDC2(162,jvj+102,V224)*/
V224=pile[WZ2]; 
if((V224!=115)) goto l43;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,X,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; 
(*f[255])( );     /*COPEXP0(jvj+103,jvj+104)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(160,X,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; 
(*f[255])( );     /*COPEXP0(jvj+105,jvj+106)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,R,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; 
(*f[255])( );     /*COPEXP0(jvj+107,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=83; pile[WZ4]=jvj+156; 
(*f[272])( );     /*QUADRI9(100,89,162,83,jvj+156)*/
pile[v[22]]=jvj+106; pile[WZ1]=160; pile[WZ2]=jvj+154; 
(*f[54])( );     /*TRI1(jvj+106,160,jvj+154)*/
pile[v[22]]=jvj+154; pile[WZ1]=jvj+104; pile[WZ2]=103; pile[WZ3]=jvj+155; 
(*f[58])( );     /*TRI3(jvj+154,jvj+104,103,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+156; pile[WZ4]=jvj+155; pile[WZ5]=jvj+109; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+156,jvj+155,jvj+109)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=68; pile[WZ4]=jvj+163; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+163)*/
pile[WZ3]=67; pile[WZ4]=jvj+297; 
(*f[272])( );     /*QUADRI9(100,89,162,67,jvj+297)*/
pile[WZ3]=83; pile[WZ4]=jvj+295; 
(*f[272])( );     /*QUADRI9(100,89,162,83,jvj+295)*/
pile[WZ3]=43; pile[WZ4]=jvj+293; 
(*f[272])( );     /*QUADRI9(100,89,162,43,jvj+293)*/
pile[v[22]]=jvj+293; pile[WZ1]=160; pile[WZ2]=jvj+294; 
(*f[54])( );     /*TRI1(jvj+293,160,jvj+294)*/
pile[v[22]]=jvj+294; pile[WZ1]=jvj+295; pile[WZ2]=103; pile[WZ3]=jvj+296; 
(*f[58])( );     /*TRI3(jvj+294,jvj+295,103,jvj+296)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+297; pile[WZ4]=jvj+296; pile[WZ5]=jvj+161; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+297,jvj+296,jvj+161)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=36; pile[WZ4]=jvj+157; 
(*f[272])( );     /*QUADRI9(100,89,162,36,jvj+157)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+298; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+298)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+300; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+300)*/
pile[v[22]]=jvj+298; pile[WZ1]=111; pile[WZ2]=jvj+299; 
(*f[54])( );     /*TRI1(jvj+298,111,jvj+299)*/
pile[v[22]]=jvj+299; pile[WZ1]=jvj+300; pile[WZ2]=103; pile[WZ3]=jvj+301; 
(*f[58])( );     /*TRI3(jvj+299,jvj+300,103,jvj+301)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+108; pile[WZ4]=jvj+301; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+108,jvj+301,jvj+159)*/
pile[v[22]]=jvj+157; pile[WZ1]=160; pile[WZ2]=jvj+158; 
(*f[54])( );     /*TRI1(jvj+157,160,jvj+158)*/
pile[v[22]]=jvj+159; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+160; 
(*f[298])( );     /*TRIENS1(jvj+159,(-20),jvj+158,107,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=jvj+161; pile[WZ2]=103; pile[WZ3]=jvj+162; 
(*f[58])( );     /*TRI3(jvj+160,jvj+161,103,jvj+162)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+163; pile[WZ4]=jvj+162; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+163,jvj+162,jvj+52)*/
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(120,X,jvj+51)*/
pile[v[22]]=jvj+52; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+52,120,jvj+51)*/
l40:pile[v[22]]=jvj+109; pile[WZ1]=120; pile[WZ2]=jvj+52; 
(*f[35])( );     /*CHGC1(jvj+109,120,jvj+52)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+109; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+109)*/
l43:if(x[RES]==incon) goto l44;
goto l52;
l19:x[jvj+43]=s[x[jvj+88]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+88];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=jvj+45; 
(*f[68])( );     /*PLUE0(jvj+45,jvj+44)*/
x[jvj+88]=t[x[jvj+88]];
l18:if((x[jvj+88]>0)) goto l19;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,X,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+90; 
(*f[255])( );     /*COPEXP0(jvj+89,jvj+90)*/
(*f[1817])( );     /*NOUV2(V99)*/
V99=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V102)*/
V102=pile[v[22]]; 
x[jvj+39]=incon;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=224)) goto l15;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,R,jvj+39)*/
l15:if(x[jvj+38]!=33&&x[jvj+38]!=722&&x[jvj+38]!=1479) goto l16;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,R,jvj+40)*/
if((x[jvj+40]!=73)) goto l16;
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+39)*/
l16:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,R,jvj+41)*/
if((x[jvj+41]!=185)) goto l17;
pile[v[22]]=160; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(160,R,jvj+42)*/
pile[v[22]]=162; pile[WZ1]=jvj+42; 
(*f[219])( );if(v[102]) goto l17;     /*FNDC2(162,jvj+42,V122)*/
V122=pile[WZ2]; 
if((V122!=37)) goto l17;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,R,jvj+39)*/
goto l35;
l20:V139=V137;
l54:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=433; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,433,jvj+214)*/
pile[WZ3]=489; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,20,101,489,jvj+222)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V139; pile[WZ4]=jvj+220; 
(*f[270])( );     /*QUADRI7(100,21,140,V139,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=103; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+220,103,jvj+221)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+222; pile[WZ4]=jvj+221; pile[WZ5]=jvj+219; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+222,jvj+221,jvj+219)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+223; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+223)*/
pile[WZ3]=74; pile[WZ4]=jvj+228; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+228)*/
pile[WZ3]=489; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,489,jvj+233)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V139; pile[WZ4]=jvj+231; 
(*f[270])( );     /*QUADRI7(100,21,140,V139,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=103; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(jvj+231,103,jvj+232)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+233; pile[WZ4]=jvj+232; pile[WZ5]=jvj+230; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+233,jvj+232,jvj+230)*/
pile[v[22]]=jvj+228; pile[WZ1]=111; pile[WZ2]=jvj+229; 
(*f[54])( );     /*TRI1(jvj+228,111,jvj+229)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+230; pile[WZ4]=jvj+229; pile[WZ5]=jvj+227; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+230,jvj+229,jvj+227)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+225; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+225)*/
pile[v[22]]=jvj+223; pile[WZ1]=111; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+223,111,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=jvj+225; pile[WZ2]=103; pile[WZ3]=jvj+226; 
(*f[58])( );     /*TRI3(jvj+224,jvj+225,103,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+227; pile[WZ4]=jvj+226; pile[WZ5]=jvj+217; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+227,jvj+226,jvj+217)*/
pile[v[22]]=jvj+217; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+218; 
(*f[180])( );     /*TRIENS0(jvj+217,(-20),107,jvj+218)*/
pile[v[22]]=100; pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+219; pile[WZ4]=jvj+218; pile[WZ5]=jvj+215; 
(*f[269])( );     /*QUADRI6(100,452,102,jvj+219,jvj+218,jvj+215)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=365; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,365,jvj+237)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V139; pile[WZ4]=jvj+235; 
(*f[270])( );     /*QUADRI7(100,21,140,V139,jvj+235)*/
pile[v[22]]=jvj+235; pile[WZ1]=103; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,103,jvj+236)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+237; pile[WZ4]=jvj+236; pile[WZ5]=jvj+234; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+237,jvj+236,jvj+234)*/
pile[WZ1]=646; pile[WZ3]=jvj+234; pile[WZ4]=jvj+216; 
(*f[181])( );     /*QUADRI2(100,646,102,jvj+234,jvj+216)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+214; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+214,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=107; pile[WZ2]=jvj+215; 
(*f[36])( );     /*PLUSC0(jvj+86,107,jvj+215)*/
pile[WZ2]=jvj+216; 
(*f[36])( );     /*PLUSC0(jvj+86,107,jvj+216)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+86; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+86)*/
if((V139!=V137)) goto l52;
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+188)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V137; pile[WZ4]=jvj+186; 
(*f[270])( );     /*QUADRI7(100,21,140,V137,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=436; pile[WZ2]=jvj+187; 
(*f[54])( );     /*TRI1(jvj+186,436,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=jvj+188; pile[WZ2]=111; pile[WZ3]=jvj+189; 
(*f[58])( );     /*TRI3(jvj+187,jvj+188,111,jvj+189)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+189; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+49,jvj+189,jvj+50)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=RM; pile[WZ3]=jvj+50; 
(*f[1819])( );     /*COPV1(RM,107,RM,jvj+50)*/
goto l52;
l25:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,X,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+67,jvj+68)*/
if((x[jvj+68]!=82)) goto l26;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,X,jvj+69)*/
pile[v[22]]=111; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+69,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+70,jvj+71)*/
if((x[jvj+71]!=282)) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+69; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+69,jvj+72)*/
pile[v[22]]=140; pile[WZ1]=jvj+72; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+72,V73)*/
V73=pile[WZ2]; 
W=V73;
goto l26;
l27:pile[v[22]]=113; pile[WZ1]=X; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(113,X,jvj+74)*/
l28:if((x[jvj+74]<=0)) goto l44;
x[jvj+75]=s[x[jvj+74]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+74];
pile[v[22]]=102; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+75,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+76,jvj+77)*/
if(x[jvj+77]==21||x[jvj+77]==69) goto l29;
pile[v[22]]=jvj+76; pile[WZ1]=jvj+78; 
(*f[255])( );     /*COPEXP0(jvj+76,jvj+78)*/
(*f[1817])( );     /*NOUV2(V198)*/
V198=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V198; pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(100,21,140,V198,jvj+79)*/
pile[v[22]]=jvj+75; pile[WZ1]=102; pile[WZ2]=jvj+79; 
(*f[35])( );     /*CHGC1(jvj+75,102,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=743; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,743,jvj+208)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V198; pile[WZ4]=jvj+211; 
(*f[270])( );     /*QUADRI7(100,21,140,V198,jvj+211)*/
pile[v[22]]=jvj+208; pile[WZ1]=111; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,111,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=jvj+78; pile[WZ2]=103; pile[WZ3]=jvj+210; 
(*f[58])( );     /*TRI3(jvj+209,jvj+78,103,jvj+210)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+211; pile[WZ4]=jvj+210; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+211,jvj+210,jvj+80)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(R,107,jvj+80)*/
l29:x[jvj+74]=t[x[jvj+74]];
goto l28;
l30:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+81)*/
pile[v[22]]=101; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+81,jvj+82)*/
if((x[jvj+82]==1)) goto l31;
if((x[jvj+82]!=689)) goto l44;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+48)*/
x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V137)*/
V137=pile[v[22]]; 
V139=incon;
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+48,V136)*/
V136=pile[WZ2]; 
V139=V136;
goto l54;
l31:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,X,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; 
(*f[255])( );     /*COPEXP0(jvj+83,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=744; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,20,101,744,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=111; pile[WZ2]=jvj+213; 
(*f[54])( );     /*TRI1(jvj+212,111,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+213; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+213,jvj+85)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+85; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+85)*/
l32:x[RES]=67 ;z[RES]=67;
goto l52;
l33:pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=RES; 
(*f[2085])( );if(v[102]) goto l44;     /*COPR0(RM,BT,X,R,RES)*/
goto l52;
l34:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(160,X,jvj+87)*/
pile[v[22]]=162; pile[WZ1]=jvj+87; 
(*f[219])( );if(v[102]) goto l39;     /*FNDC2(162,jvj+87,V119)*/
V119=pile[WZ2]; 
if((V119!=36)) goto l39;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(107,X,jvj+88)*/
x[jvj+45]=0 ;z[jvj+45]=0;
goto l18;
l37:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,X,jvj+93)*/
pile[v[22]]=111; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+93,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+94,jvj+95)*/
if((x[jvj+95]!=590)) goto l44;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(436,X,jvj+96)*/
pile[v[22]]=140; pile[WZ1]=jvj+96; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+96,V196)*/
V196=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,X,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+97,jvj+98)*/
if(x[jvj+98]!=179&&x[jvj+98]!=82) goto l44;
(*f[1817])( );     /*NOUV2(V181)*/
V181=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(V182)*/
V182=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+271)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V181; pile[WZ4]=jvj+275; 
(*f[270])( );     /*QUADRI7(100,21,140,V181,jvj+275)*/
pile[WZ3]=V182; pile[WZ4]=jvj+273; 
(*f[270])( );     /*QUADRI7(100,21,140,V182,jvj+273)*/
pile[v[22]]=jvj+271; pile[WZ1]=111; pile[WZ2]=jvj+272; 
(*f[54])( );     /*TRI1(jvj+271,111,jvj+272)*/
pile[v[22]]=jvj+272; pile[WZ1]=jvj+273; pile[WZ2]=103; pile[WZ3]=jvj+274; 
(*f[58])( );     /*TRI3(jvj+272,jvj+273,103,jvj+274)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+275; pile[WZ4]=jvj+274; pile[WZ5]=jvj+99; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+275,jvj+274,jvj+99)*/
pile[v[22]]=RM; pile[WZ1]=102; pile[WZ2]=X; pile[WZ3]=jvj+99; 
(*f[1819])( );     /*COPV1(RM,102,X,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10657; pile[WZ4]=jvj+276; 
(*f[181])( );     /*QUADRI2(100,20,101,10657,jvj+276)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+283; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+283)*/
pile[WZ4]=jvj+281; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+281)*/
pile[v[22]]=jvj+281; pile[WZ1]=103; pile[WZ2]=jvj+282; 
(*f[54])( );     /*TRI1(jvj+281,103,jvj+282)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+283; pile[WZ4]=jvj+282; pile[WZ5]=jvj+277; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+283,jvj+282,jvj+277)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V196; pile[WZ4]=jvj+286; 
(*f[270])( );     /*QUADRI7(100,96,163,V196,jvj+286)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-611); pile[WZ4]=jvj+284; 
(*f[270])( );     /*QUADRI7(100,21,140,(-611),jvj+284)*/
pile[v[22]]=jvj+284; pile[WZ1]=103; pile[WZ2]=jvj+285; 
(*f[54])( );     /*TRI1(jvj+284,103,jvj+285)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+286; pile[WZ4]=jvj+285; pile[WZ5]=jvj+278; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+286,jvj+285,jvj+278)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V181; pile[WZ4]=jvj+289; 
(*f[270])( );     /*QUADRI7(100,21,140,V181,jvj+289)*/
pile[WZ3]=(-1961); pile[WZ4]=jvj+287; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1961),jvj+287)*/
pile[v[22]]=jvj+287; pile[WZ1]=103; pile[WZ2]=jvj+288; 
(*f[54])( );     /*TRI1(jvj+287,103,jvj+288)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+289; pile[WZ4]=jvj+288; pile[WZ5]=jvj+279; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+289,jvj+288,jvj+279)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V182; pile[WZ4]=jvj+292; 
(*f[270])( );     /*QUADRI7(100,21,140,V182,jvj+292)*/
pile[WZ3]=(-619); pile[WZ4]=jvj+290; 
(*f[270])( );     /*QUADRI7(100,21,140,(-619),jvj+290)*/
pile[v[22]]=jvj+290; pile[WZ1]=103; pile[WZ2]=jvj+291; 
(*f[54])( );     /*TRI1(jvj+290,103,jvj+291)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+292; pile[WZ4]=jvj+291; pile[WZ5]=jvj+280; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+292,jvj+291,jvj+280)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+276; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+276,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=114; pile[WZ2]=jvj+277; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+277)*/
pile[WZ2]=jvj+278; 
(*f[36])( );     /*PLUSC0(jvj+100,114,jvj+278)*/
pile[WZ1]=113; pile[WZ2]=jvj+279; 
(*f[36])( );     /*PLUSC0(jvj+100,113,jvj+279)*/
pile[WZ2]=jvj+280; 
(*f[36])( );     /*PLUSC0(jvj+100,113,jvj+280)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=R; pile[WZ3]=jvj+100; 
(*f[1819])( );     /*COPV1(RM,107,R,jvj+100)*/
goto l32;
l38:pile[v[22]]=R; pile[WZ1]=X; pile[WZ2]=BT; pile[WZ3]=RM; pile[WZ4]=RES; 
(*f[2083])( );     /*COPW0(R,X,BT,RM,RES)*/
l41:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,X,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+110,jvj+111)*/
if(x[jvj+111]!=1885&&x[jvj+111]!=1884) goto l43;
pile[v[22]]=498; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(498,jvj+111,jvj+112)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,X,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+114; 
(*f[255])( );     /*COPEXP0(jvj+113,jvj+114)*/
(*f[1817])( );     /*NOUV2(V239)*/
V239=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+112; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+112,jvj+164)*/
pile[WZ3]=130; pile[WZ4]=jvj+304; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+304)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V239; pile[WZ4]=jvj+302; 
(*f[270])( );     /*QUADRI7(100,21,140,V239,jvj+302)*/
pile[v[22]]=jvj+302; pile[WZ1]=103; pile[WZ2]=jvj+303; 
(*f[54])( );     /*TRI1(jvj+302,103,jvj+303)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+304; pile[WZ4]=jvj+303; pile[WZ5]=jvj+168; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+304,jvj+303,jvj+168)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+305; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+305)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V239; pile[WZ4]=jvj+308; 
(*f[270])( );     /*QUADRI7(100,21,140,V239,jvj+308)*/
pile[v[22]]=jvj+305; pile[WZ1]=111; pile[WZ2]=jvj+306; 
(*f[54])( );     /*TRI1(jvj+305,111,jvj+306)*/
pile[v[22]]=jvj+306; pile[WZ1]=jvj+114; pile[WZ2]=103; pile[WZ3]=jvj+307; 
(*f[58])( );     /*TRI3(jvj+306,jvj+114,103,jvj+307)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+308; pile[WZ4]=jvj+307; pile[WZ5]=jvj+166; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+308,jvj+307,jvj+166)*/
pile[v[22]]=jvj+164; pile[WZ1]=111; pile[WZ2]=jvj+165; 
(*f[54])( );     /*TRI1(jvj+164,111,jvj+165)*/
pile[v[22]]=jvj+166; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+167; 
(*f[298])( );     /*TRIENS1(jvj+166,(-20),jvj+165,107,jvj+167)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+168; pile[WZ5]=jvj+115; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+168,jvj+167,jvj+115)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+115; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+115)*/
goto l43;
l45:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,X,jvj+117)*/
pile[v[22]]=101; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+117,jvj+118)*/
if((x[jvj+118]!=82)) goto l46;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,X,jvj+119)*/
pile[v[22]]=111; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+119,jvj+120)*/
pile[v[22]]=101; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+120,jvj+121)*/
if((x[jvj+121]!=282)) goto l46;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(436,X,jvj+122)*/
pile[v[22]]=140; pile[WZ1]=jvj+122; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+122,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+119; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+119,jvj+123)*/
pile[v[22]]=123; pile[WZ1]=X; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(123,X,jvj+124)*/
V60=x[X];
x[RES]=67 ;z[RES]=67;
(*f[1817])( );     /*NOUV2(V42)*/
V42=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V42; pile[WZ4]=jvj+173; 
(*f[270])( );     /*QUADRI7(100,21,140,V42,jvj+173)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+171; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+171)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V55; pile[WZ4]=jvj+169; 
(*f[270])( );     /*QUADRI7(100,21,140,V55,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=436; pile[WZ2]=jvj+170; 
(*f[54])( );     /*TRI1(jvj+169,436,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=jvj+171; pile[WZ2]=111; pile[WZ3]=jvj+172; 
(*f[58])( );     /*TRI3(jvj+170,jvj+171,111,jvj+172)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+173; pile[WZ4]=jvj+172; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+173,jvj+172,jvj+125)*/
pile[v[22]]=jvj+124; pile[WZ1]=R; pile[WZ2]=jvj+123; pile[WZ3]=V42; pile[WZ4]=W; 
(*f[2084])( );     /*COPK0(jvj+124,R,jvj+123,V42,W)*/
pile[v[22]]=105; pile[WZ2]=V60; 
(*f[134])( );     /*OTA0(105,R,V60)*/
pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+125; 
(*f[36])( );     /*PLUSC0(R,105,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=123; pile[WZ2]=jvj+124; 
(*f[35])( );     /*CHGC1(jvj+125,123,jvj+124)*/
goto l52;
l48:x[jvj+128]=t[x[jvj+128]];
l47:if((x[jvj+128]<=0)) goto l51;
x[jvj+130]=s[x[jvj+128]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+128];
pile[v[22]]=103; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+130,jvj+131)*/
pile[v[22]]=140; pile[WZ1]=jvj+131; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+131,V161)*/
V161=pile[WZ2]; 
if((V161!=(-598))) goto l48;
pile[v[22]]=102; pile[WZ1]=jvj+130; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+130,jvj+132)*/
pile[v[22]]=111; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+132,jvj+133)*/
pile[v[22]]=101; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+133,jvj+134)*/
if((x[jvj+134]!=267)) goto l48;
pile[v[22]]=jvj+132; pile[WZ1]=jvj+135; 
(*f[255])( );     /*COPEXP0(jvj+132,jvj+135)*/
x[jvj+313]=x[jvj+129] ;z[jvj+313]=z[jvj+129];
l49:if((x[jvj+313]<=0)) goto l48;
x[jvj+136]=s[x[jvj+313]] ;z[jvj+136]=(x[jvj+136]<=sepcte) ? x[jvj+136] : z[jvj+313];
pile[v[22]]=103; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+136,jvj+137)*/
pile[v[22]]=140; pile[WZ1]=jvj+137; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+137,V173)*/
V173=pile[WZ2]; 
if((V173!=(-601))) goto l50;
pile[v[22]]=102; pile[WZ1]=jvj+136; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+136,jvj+138)*/
pile[v[22]]=140; pile[WZ1]=jvj+138; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+138,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+311; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+311)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V171; pile[WZ4]=jvj+309; 
(*f[270])( );     /*QUADRI7(100,21,140,V171,jvj+309)*/
pile[v[22]]=jvj+309; pile[WZ1]=436; pile[WZ2]=jvj+310; 
(*f[54])( );     /*TRI1(jvj+309,436,jvj+310)*/
pile[v[22]]=jvj+310; pile[WZ1]=jvj+311; pile[WZ2]=111; pile[WZ3]=jvj+312; 
(*f[58])( );     /*TRI3(jvj+310,jvj+311,111,jvj+312)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+135; pile[WZ4]=jvj+312; pile[WZ5]=jvj+139; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+135,jvj+312,jvj+139)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+139; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+139)*/
goto l32;
l50:x[jvj+313]=t[x[jvj+313]];
goto l49;
l53:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V102; pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,V102,jvj+39)*/
goto l35;
l55:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+199; 
(*f[35])( );     /*CHGC1(R,BT,jvj+199)*/
goto l23;
l56:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+203; 
(*f[35])( );     /*CHGC1(R,BT,jvj+203)*/
goto l24;
}
