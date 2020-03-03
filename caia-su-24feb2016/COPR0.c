#include "dx.h"
void COPR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V41=0,V94=0,V116=0,V107=0,V149=0,QT=0,V124=0,V159=0,V156=0,V155=0,W=0,QQ=0,V153=0,V103=0,V134=0,VT=0,V68=0,WW=0,VL=0,VN=0,V=0;
int RM,BT,X,R;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=282;
x[jvj+1]=10574;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2085&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RM=pile[v[22]]; BT=pile[v[22]+1]; X=pile[v[22]+2]; R=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=x[jvj+6]=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,X,jvj+44)*/
if((x[jvj+44]!=73)) goto l32;
pile[v[22]]=111; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]==32)) goto l18;
if((x[jvj+46]==38)) goto l19;
if((x[jvj+46]==49)) goto l20;
if((x[jvj+46]==37)) goto l21;
if((x[jvj+46]==166)) goto l23;
if((x[jvj+46]!=722)) goto l25;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,X,jvj+78)*/
pile[v[22]]=130; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+78,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(120,X,jvj+79)*/
pile[v[22]]=X; pile[WZ1]=jvj+79; pile[WZ2]=V103; pile[WZ3]=jvj+6; 
(*f[2164])( );if(v[102]) goto l25;     /*DMQ0(X,jvj+79,V103,jvj+6)*/
l32:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,X,jvj+95)*/
if((x[jvj+95]!=73)) goto l33;
pile[v[22]]=102; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,X,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+96,jvj+97)*/
if((x[jvj+97]!=128)) goto l33;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,X,jvj+98)*/
pile[v[22]]=101; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+98,jvj+99)*/
if((x[jvj+99]!=32)) goto l33;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,X,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+96; pile[WZ2]=R; pile[WZ3]=X; pile[WZ4]=RM; 
(*f[2163])( );     /*COPY0(jvj+100,jvj+96,R,X,RM)*/
x[RES]=67 ;z[RES]=67;
l33:if(x[RES]==incon) goto l34;
l37:if(x[RES]!=incon) goto l38;
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l4:x[jvj+17]=x[jvj+18] ;z[jvj+17]=z[jvj+18];
l3:pile[v[22]]=120; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(120,jvj+17,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=185)) goto l4;
pile[v[22]]=160; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(160,jvj+18,jvj+20)*/
pile[v[22]]=162; pile[WZ1]=jvj+20; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(162,jvj+20,V116)*/
V116=pile[WZ2]; 
V107=V116;
if(V107!=35&&V107!=33) goto l4;
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(120,X,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; 
(*f[378])( );     /*CPI0(jvj+93,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ2]=jvj+94; pile[WZ3]=jvj+6; 
(*f[2165])( );     /*COPQ0(jvj+94,jvj+94,jvj+94,jvj+6)*/
l31:if(x[RES]==incon) goto l32;
goto l33;
l6:x[jvj+282]=t[x[jvj+282]];
l5:if((x[jvj+282]<=0)) goto l7;
x[jvj+24]=s[x[jvj+282]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+282];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=108)) goto l6;
pile[v[22]]=103; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+24,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+26,V149)*/
V149=pile[WZ2]; 
if((W!=V149)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+24,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+27,jvj+28)*/
QT=x[jvj+28];
V124=QT;
l17:QQ=V124;
if((V153=w[QQ][1])==incon) goto l16;
if((x[jvj+171]=w[V153][3])==incon) goto l16;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=159; pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,20,101,159,jvj+162)*/
pile[WZ3]=110; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,110,jvj+167)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=W; pile[WZ4]=jvj+165; 
(*f[270])( );     /*QUADRI7(100,96,163,W,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=103; pile[WZ2]=jvj+166; 
(*f[54])( );     /*TRI1(jvj+165,103,jvj+166)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+167; pile[WZ4]=jvj+166; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+167,jvj+166,jvj+163)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+171; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+171,jvj+170)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+168; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=103; pile[WZ2]=jvj+169; 
(*f[54])( );     /*TRI1(jvj+168,103,jvj+169)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+170; pile[WZ4]=jvj+169; pile[WZ5]=jvj+164; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+170,jvj+169,jvj+164)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(69,100,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=108; pile[WZ2]=jvj+163; 
(*f[36])( );     /*PLUSC0(jvj+160,108,jvj+163)*/
pile[WZ2]=jvj+164; 
(*f[36])( );     /*PLUSC0(jvj+160,108,jvj+164)*/
pile[WZ1]=103; pile[WZ2]=jvj+161; 
(*f[54])( );     /*TRI1(jvj+160,103,jvj+161)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+162; pile[WZ4]=jvj+161; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+162,jvj+161,jvj+43)*/
pile[v[22]]=jvj+42; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+42,108,jvj+43)*/
l16:x[jvj+41]=t[x[jvj+41]];
l15:if((x[jvj+41]<=0)) goto l26;
W=s[x[jvj+41]];
V124=incon;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+21,jvj+22)*/
pile[v[22]]=108; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(108,jvj+22,jvj+23)*/
x[jvj+282]=x[jvj+23] ;z[jvj+282]=z[jvj+23];
goto l5;
l7:V124=576;
goto l17;
l8:if((x[jvj+46]==576)) goto l13;
l14:pile[v[22]]=754; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(754,jvj+37,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=X; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+37,X,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V155; pile[WZ4]=jvj+158; 
(*f[270])( );     /*QUADRI7(100,21,140,V155,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=103; pile[WZ2]=jvj+159; 
(*f[54])( );     /*TRI1(jvj+158,103,jvj+159)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+159; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+39,jvj+159,jvj+40)*/
pile[v[22]]=jvj+6; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+40)*/
l13:x[jvj+36]=t[x[jvj+36]];
l10:if((x[jvj+36]>0)) goto l11;
pile[v[22]]=762; pile[WZ1]=jvj+21; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(762,jvj+21,jvj+41)*/
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+30,jvj+42)*/
goto l15;
l11:x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
if((x[jvj+37]==103)) goto l8;
if((x[jvj+37]!=102)) goto l14;
if((x[jvj+46]==580)) goto l13;
goto l14;
l18:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,X,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+47,jvj+48)*/
if((x[jvj+48]==128)) goto l25;
pile[v[22]]=jvj+47; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+49)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,X,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10414; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,10414,jvj+105)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+172; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=103; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,103,jvj+173)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+173; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+49,jvj+173,jvj+106)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+174; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=103; pile[WZ2]=jvj+175; 
(*f[54])( );     /*TRI1(jvj+174,103,jvj+175)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+175; pile[WZ5]=jvj+107; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+51,jvj+175,jvj+107)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+105; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+105,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=114; pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+106)*/
pile[WZ2]=jvj+107; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+107)*/
goto l32;
l19:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,X,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=1)) goto l25;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,X,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+54,jvj+55)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,X,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[255])( );     /*COPEXP0(jvj+56,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=266; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,266,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+109,jvj+57,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+110; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+55,jvj+110,jvj+6)*/
goto l32;
l20:x[jvj+58]=vo[15];z[jvj+58]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(297,jvj+58,jvj+59)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,X,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; 
(*f[255])( );     /*COPEXP0(jvj+60,jvj+61)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,X,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,X,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[255])( );     /*COPEXP0(jvj+64,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=45; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,45,jvj+180)*/
pile[WZ3]=198; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,20,101,198,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=111; pile[WZ2]=jvj+185; 
(*f[54])( );     /*TRI1(jvj+184,111,jvj+185)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+185; pile[WZ5]=jvj+183; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+185,jvj+183)*/
pile[v[22]]=jvj+180; pile[WZ1]=111; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,111,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+182; 
(*f[58])( );     /*TRI3(jvj+181,jvj+65,103,jvj+182)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+183; pile[WZ4]=jvj+182; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+183,jvj+182,jvj+176)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+188)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=79; pile[WZ4]=jvj+195; 
(*f[272])( );     /*QUADRI9(100,89,162,79,jvj+195)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+59; pile[WZ4]=jvj+193; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+59,jvj+193)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=46; pile[WZ4]=jvj+189; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+189)*/
pile[WZ3]=68; pile[WZ4]=jvj+199; 
(*f[272])( );     /*QUADRI9(100,89,162,68,jvj+199)*/
pile[WZ3]=46; pile[WZ4]=jvj+196; 
(*f[272])( );     /*QUADRI9(100,89,162,46,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=160; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(jvj+196,160,jvj+197)*/
pile[v[22]]=jvj+197; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+198; 
(*f[58])( );     /*TRI3(jvj+197,jvj+61,103,jvj+198)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+199; pile[WZ4]=jvj+198; pile[WZ5]=jvj+191; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+199,jvj+198,jvj+191)*/
pile[v[22]]=jvj+189; pile[WZ1]=160; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,160,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+191; pile[WZ2]=120; pile[WZ3]=jvj+192; 
(*f[58])( );     /*TRI3(jvj+190,jvj+191,120,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=jvj+193; pile[WZ2]=103; pile[WZ3]=jvj+194; 
(*f[58])( );     /*TRI3(jvj+192,jvj+193,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=185; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=jvj+186; 
(*f[269])( );     /*QUADRI6(100,185,102,jvj+195,jvj+194,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=120; pile[WZ2]=jvj+187; 
(*f[54])( );     /*TRI1(jvj+186,120,jvj+187)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+188; pile[WZ4]=jvj+187; pile[WZ5]=jvj+178; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+188,jvj+187,jvj+178)*/
pile[v[22]]=jvj+176; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+177; 
(*f[180])( );     /*TRIENS0(jvj+176,(-20),107,jvj+177)*/
pile[v[22]]=jvj+178; pile[WZ2]=jvj+177; pile[WZ3]=105; pile[WZ4]=jvj+179; 
(*f[298])( );     /*TRIENS1(jvj+178,(-20),jvj+177,105,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+111; 
(*f[58])( );     /*TRI3(jvj+179,42,100,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=(-20); pile[WZ2]=184; pile[WZ3]=jvj+112; 
(*f[180])( );     /*TRIENS0(jvj+111,(-20),184,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+112,47,100,jvj+6)*/
goto l32;
l21:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,X,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+66)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,X,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; 
(*f[255])( );     /*COPEXP0(jvj+67,jvj+68)*/
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,X,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; 
(*f[255])( );     /*COPEXP0(jvj+69,jvj+70)*/
x[jvj+71]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+2,jvj+3)*/
if((V41=w[x[jvj+3]][2])==incon) goto l40;
if((V41!=41)) goto l40;
x[jvj+71]=x[jvj+69] ;z[jvj+71]=z[jvj+69];
l22:pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; 
(*f[255])( );     /*COPEXP0(jvj+71,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10421; pile[WZ4]=jvj+113; 
(*f[181])( );     /*QUADRI2(100,20,101,10421,jvj+113)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-602); pile[WZ4]=jvj+200; 
(*f[270])( );     /*QUADRI7(100,21,140,(-602),jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=103; pile[WZ2]=jvj+201; 
(*f[54])( );     /*TRI1(jvj+200,103,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+201; pile[WZ5]=jvj+114; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+66,jvj+201,jvj+114)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+202; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=103; pile[WZ2]=jvj+203; 
(*f[54])( );     /*TRI1(jvj+202,103,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+203; pile[WZ5]=jvj+115; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+68,jvj+203,jvj+115)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+204; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=103; pile[WZ2]=jvj+205; 
(*f[54])( );     /*TRI1(jvj+204,103,jvj+205)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+205; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+72,jvj+205,jvj+116)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+113; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+113,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=114; pile[WZ2]=jvj+114; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+114)*/
pile[WZ2]=jvj+115; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+115)*/
pile[WZ2]=jvj+116; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+116)*/
goto l32;
l23:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,X,jvj+8)*/
x[jvj+16]=0 ;z[jvj+16]=0;
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=69)) goto l24;
pile[v[22]]=108; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(108,jvj+8,jvj+10)*/
x[jvj+11]=d[27];z[jvj+11]=0;
l1:if((x[jvj+10]<=0)) goto l24;
x[jvj+12]=s[x[jvj+10]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+10];
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+13,jvj+14)*/
x[jvj+135]=x[jvj+14] ;z[jvj+135]=z[jvj+14];
if((V94=w[x[jvj+135]][1])==incon) goto l2;
if((V94==23)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+135; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+135,jvj+15)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+15,jvj+16)*/
l2:x[jvj+10]=t[x[jvj+10]];
goto l1;
l24:pile[v[22]]=jvj+8; pile[WZ1]=jvj+73; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+73)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,X,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[255])( );     /*COPEXP0(jvj+74,jvj+75)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,X,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+77; 
(*f[255])( );     /*COPEXP0(jvj+76,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10324; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,10324,jvj+117)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+206; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=103; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,103,jvj+207)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+207; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+75,jvj+207,jvj+118)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+208; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+208)*/
pile[v[22]]=jvj+208; pile[WZ1]=103; pile[WZ2]=jvj+209; 
(*f[54])( );     /*TRI1(jvj+208,103,jvj+209)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+209; pile[WZ5]=jvj+119; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+77,jvj+209,jvj+119)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+210; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+210)*/
pile[v[22]]=jvj+210; pile[WZ1]=103; pile[WZ2]=jvj+211; 
(*f[54])( );     /*TRI1(jvj+210,103,jvj+211)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+211; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+73,jvj+211,jvj+120)*/
pile[v[22]]=jvj+16; pile[WZ1]=128; pile[WZ2]=jvj+215; 
(*f[300])( );     /*TRI10(jvj+16,128,jvj+215)*/
pile[v[22]]=jvj+215; pile[WZ2]=100; pile[WZ3]=jvj+214; 
(*f[58])( );     /*TRI3(jvj+215,128,100,jvj+214)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+212; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=103; pile[WZ2]=jvj+213; 
(*f[54])( );     /*TRI1(jvj+212,103,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+214; pile[WZ4]=jvj+213; pile[WZ5]=jvj+121; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+214,jvj+213,jvj+121)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+117; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+117,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=114; pile[WZ2]=jvj+118; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+118)*/
pile[WZ2]=jvj+119; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+119)*/
pile[WZ2]=jvj+120; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+120)*/
pile[WZ2]=jvj+121; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+121)*/
goto l32;
l25:pile[v[22]]=115; pile[WZ1]=jvj+46; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(115,jvj+46,jvj+80)*/
if((x[jvj+80]!=10574)) goto l27;
pile[v[22]]=449; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(449,jvj+46,jvj+81)*/
x[jvj+82]=vo[15];z[jvj+82]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+82; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(583,jvj+82,jvj+21)*/
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(246,jvj+82,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=218; pile[WZ4]=jvj+223; 
(*f[181])( );     /*QUADRI2(100,20,101,218,jvj+223)*/
pile[WZ3]=jvj+21; pile[WZ4]=jvj+221; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+221)*/
pile[v[22]]=jvj+221; pile[WZ1]=103; pile[WZ2]=jvj+222; 
(*f[54])( );     /*TRI1(jvj+221,103,jvj+222)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+223; pile[WZ4]=jvj+222; pile[WZ5]=jvj+216; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+223,jvj+222,jvj+216)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=246; pile[WZ4]=jvj+226; 
(*f[181])( );     /*QUADRI2(100,20,101,246,jvj+226)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V134; pile[WZ4]=jvj+224; 
(*f[192])( );     /*QUADRI4(100,41,130,V134,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=103; pile[WZ2]=jvj+225; 
(*f[54])( );     /*TRI1(jvj+224,103,jvj+225)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+226; pile[WZ4]=jvj+225; pile[WZ5]=jvj+217; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+226,jvj+225,jvj+217)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=642; pile[WZ4]=jvj+229; 
(*f[181])( );     /*QUADRI2(100,20,101,642,jvj+229)*/
pile[WZ3]=24; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,24,jvj+230)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=13; pile[WZ4]=jvj+232; 
(*f[192])( );     /*QUADRI4(100,41,130,13,jvj+232)*/
pile[v[22]]=jvj+230; pile[WZ1]=111; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,111,jvj+231)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+232; pile[WZ4]=jvj+231; pile[WZ5]=jvj+227; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+232,jvj+231,jvj+227)*/
pile[v[22]]=jvj+227; pile[WZ1]=103; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+227,103,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+229; pile[WZ4]=jvj+228; pile[WZ5]=jvj+218; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+229,jvj+228,jvj+218)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=158; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,158,jvj+235)*/
pile[WZ3]=1; pile[WZ4]=jvj+233; 
(*f[181])( );     /*QUADRI2(100,20,101,1,jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=103; pile[WZ2]=jvj+234; 
(*f[54])( );     /*TRI1(jvj+233,103,jvj+234)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+235; pile[WZ4]=jvj+234; pile[WZ5]=jvj+219; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+235,jvj+234,jvj+219)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=858; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,858,jvj+238)*/
pile[WZ3]=642; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,642,jvj+241)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-4349); pile[WZ4]=jvj+239; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4349),jvj+239)*/
pile[v[22]]=jvj+239; pile[WZ1]=103; pile[WZ2]=jvj+240; 
(*f[54])( );     /*TRI1(jvj+239,103,jvj+240)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+241; pile[WZ4]=jvj+240; pile[WZ5]=jvj+236; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+241,jvj+240,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=103; pile[WZ2]=jvj+237; 
(*f[54])( );     /*TRI1(jvj+236,103,jvj+237)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+238; pile[WZ4]=jvj+237; pile[WZ5]=jvj+220; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+238,jvj+237,jvj+220)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+124; 
(*f[54])( );     /*TRI1(69,100,jvj+124)*/
pile[v[22]]=jvj+124; pile[WZ1]=108; pile[WZ2]=jvj+216; 
(*f[36])( );     /*PLUSC0(jvj+124,108,jvj+216)*/
pile[WZ2]=jvj+217; 
(*f[36])( );     /*PLUSC0(jvj+124,108,jvj+217)*/
pile[WZ2]=jvj+218; 
(*f[36])( );     /*PLUSC0(jvj+124,108,jvj+218)*/
pile[WZ2]=jvj+219; 
(*f[36])( );     /*PLUSC0(jvj+124,108,jvj+219)*/
pile[WZ2]=jvj+220; 
(*f[36])( );     /*PLUSC0(jvj+124,108,jvj+220)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-6231); pile[WZ4]=jvj+122; 
(*f[270])( );     /*QUADRI7(100,21,140,(-6231),jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=103; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,103,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+124,jvj+123,jvj+30)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+81; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+81,jvj+126)*/
pile[v[22]]=jvj+30; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+125; 
(*f[180])( );     /*TRIENS0(jvj+30,(-20),114,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+126; pile[WZ4]=jvj+125; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+126,jvj+125,jvj+6)*/
if((x[jvj+46]!=580)) goto l9;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,X,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+29,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+30,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=159; pile[WZ4]=jvj+138; 
(*f[181])( );     /*QUADRI2(100,20,101,159,jvj+138)*/
pile[WZ3]=110; pile[WZ4]=jvj+143; 
(*f[181])( );     /*QUADRI2(100,20,101,110,jvj+143)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V159; pile[WZ4]=jvj+141; 
(*f[270])( );     /*QUADRI7(100,96,163,V159,jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=103; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,103,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+142; pile[WZ5]=jvj+139; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+143,jvj+142,jvj+139)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=101; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,101,jvj+146)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V159; pile[WZ4]=jvj+144; 
(*f[270])( );     /*QUADRI7(100,21,140,V159,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=103; pile[WZ2]=jvj+145; 
(*f[54])( );     /*TRI1(jvj+144,103,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+146; pile[WZ4]=jvj+145; pile[WZ5]=jvj+140; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+146,jvj+145,jvj+140)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(69,100,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=108; pile[WZ2]=jvj+139; 
(*f[36])( );     /*PLUSC0(jvj+136,108,jvj+139)*/
pile[WZ2]=jvj+140; 
(*f[36])( );     /*PLUSC0(jvj+136,108,jvj+140)*/
pile[WZ1]=103; pile[WZ2]=jvj+137; 
(*f[54])( );     /*TRI1(jvj+136,103,jvj+137)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+138; pile[WZ4]=jvj+137; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+138,jvj+137,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+31,108,jvj+32)*/
l9:if(x[jvj+46]!=576&&x[jvj+46]!=1290) goto l12;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,X,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+33,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+30,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=159; pile[WZ4]=jvj+149; 
(*f[181])( );     /*QUADRI2(100,20,101,159,jvj+149)*/
pile[WZ3]=110; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,110,jvj+154)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V156; pile[WZ4]=jvj+152; 
(*f[270])( );     /*QUADRI7(100,96,163,V156,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=103; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,103,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+153; pile[WZ5]=jvj+150; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+154,jvj+153,jvj+150)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=101; pile[WZ4]=jvj+157; 
(*f[181])( );     /*QUADRI2(100,20,101,101,jvj+157)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V156; pile[WZ4]=jvj+155; 
(*f[270])( );     /*QUADRI7(100,21,140,V156,jvj+155)*/
pile[v[22]]=jvj+155; pile[WZ1]=103; pile[WZ2]=jvj+156; 
(*f[54])( );     /*TRI1(jvj+155,103,jvj+156)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+157; pile[WZ4]=jvj+156; pile[WZ5]=jvj+151; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+157,jvj+156,jvj+151)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(69,100,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=108; pile[WZ2]=jvj+150; 
(*f[36])( );     /*PLUSC0(jvj+147,108,jvj+150)*/
pile[WZ2]=jvj+151; 
(*f[36])( );     /*PLUSC0(jvj+147,108,jvj+151)*/
pile[WZ1]=103; pile[WZ2]=jvj+148; 
(*f[54])( );     /*TRI1(jvj+147,103,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+149; pile[WZ4]=jvj+148; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+149,jvj+148,jvj+35)*/
pile[v[22]]=jvj+34; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+34,108,jvj+35)*/
l12:x[jvj+36]=d[6];z[jvj+36]=0;
goto l10;
l26:pile[v[22]]=jvj+6; pile[WZ1]=860; pile[WZ2]=jvj+46; 
(*f[35])( );     /*CHGC1(jvj+6,860,jvj+46)*/
goto l32;
l27:if(x[jvj+46]!=189&&x[jvj+46]!=950) goto l29;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,X,jvj+83)*/
pile[v[22]]=123; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(123,X,jvj+84)*/
x[jvj+85]=incon;
if((x[jvj+46]==189)) goto l39;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-727); pile[WZ4]=jvj+85; 
(*f[270])( );     /*QUADRI7(100,21,140,(-727),jvj+85)*/
l28:pile[v[22]]=jvj+85; pile[WZ1]=jvj+86; 
(*f[255])( );     /*COPEXP0(jvj+85,jvj+86)*/
(*f[1817])( );     /*NOUV2(VT)*/
VT=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10271; pile[WZ4]=jvj+129; 
(*f[181])( );     /*QUADRI2(100,20,101,10271,jvj+129)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VT; pile[WZ4]=jvj+243; 
(*f[270])( );     /*QUADRI7(100,21,140,VT,jvj+243)*/
pile[v[22]]=jvj+86; pile[WZ1]=103; pile[WZ2]=jvj+242; 
(*f[54])( );     /*TRI1(jvj+86,103,jvj+242)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+243; pile[WZ4]=jvj+242; pile[WZ5]=jvj+127; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+243,jvj+242,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+128; 
(*f[180])( );     /*TRIENS0(jvj+127,(-20),114,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+129,jvj+128,jvj+6)*/
(*f[1817])( );     /*NOUV2(V68)*/
V68=pile[v[22]]; 
pile[v[22]]=jvj+84; pile[WZ1]=R; pile[WZ2]=jvj+83; pile[WZ3]=VT; pile[WZ4]=V68; 
(*f[2084])( );     /*COPK0(jvj+84,R,jvj+83,VT,V68)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+248; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+248)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+246; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+246)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V68; pile[WZ4]=jvj+244; 
(*f[270])( );     /*QUADRI7(100,21,140,V68,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=436; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,436,jvj+245)*/
pile[v[22]]=jvj+245; pile[WZ1]=jvj+246; pile[WZ2]=111; pile[WZ3]=jvj+247; 
(*f[58])( );     /*TRI3(jvj+245,jvj+246,111,jvj+247)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+248; pile[WZ4]=jvj+247; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+248,jvj+247,jvj+87)*/
pile[v[22]]=250; pile[WZ1]=107; pile[WZ2]=R; pile[WZ3]=jvj+87; 
(*f[1819])( );     /*COPV1(250,107,R,jvj+87)*/
goto l32;
l29:if(x[jvj+46]!=406&&x[jvj+46]!=686&&x[jvj+46]!=1153&&x[jvj+46]!=1146) goto l30;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,X,jvj+88)*/
pile[v[22]]=123; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(123,X,jvj+89)*/
(*f[1817])( );     /*NOUV2(WW)*/
WW=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(VL)*/
VL=pile[v[22]]; 
pile[v[22]]=jvj+89; pile[WZ1]=R; pile[WZ2]=jvj+88; pile[WZ3]=VL; pile[WZ4]=WW; 
(*f[2084])( );     /*COPK0(jvj+89,R,jvj+88,VL,WW)*/
(*f[1817])( );     /*NOUV2(VN)*/
VN=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+253; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+253)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+251; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+251)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VN; pile[WZ4]=jvj+249; 
(*f[270])( );     /*QUADRI7(100,21,140,VN,jvj+249)*/
pile[v[22]]=jvj+249; pile[WZ1]=436; pile[WZ2]=jvj+250; 
(*f[54])( );     /*TRI1(jvj+249,436,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=jvj+251; pile[WZ2]=111; pile[WZ3]=jvj+252; 
(*f[58])( );     /*TRI3(jvj+250,jvj+251,111,jvj+252)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+253; pile[WZ4]=jvj+252; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+253,jvj+252,jvj+90)*/
pile[v[22]]=250; pile[WZ1]=107; pile[WZ2]=R; pile[WZ3]=jvj+90; 
(*f[1819])( );     /*COPV1(250,107,R,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10076; pile[WZ4]=jvj+258; 
(*f[181])( );     /*QUADRI2(100,20,101,10076,jvj+258)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VN; pile[WZ4]=jvj+261; 
(*f[270])( );     /*QUADRI7(100,21,140,VN,jvj+261)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+259; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+259)*/
pile[v[22]]=jvj+259; pile[WZ1]=103; pile[WZ2]=jvj+260; 
(*f[54])( );     /*TRI1(jvj+259,103,jvj+260)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+261; pile[WZ4]=jvj+260; pile[WZ5]=jvj+254; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+261,jvj+260,jvj+254)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+264; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+264)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+262; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+262)*/
pile[v[22]]=jvj+262; pile[WZ1]=103; pile[WZ2]=jvj+263; 
(*f[54])( );     /*TRI1(jvj+262,103,jvj+263)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+264; pile[WZ4]=jvj+263; pile[WZ5]=jvj+256; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+264,jvj+263,jvj+256)*/
pile[v[22]]=jvj+254; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+255; 
(*f[180])( );     /*TRIENS0(jvj+254,(-20),114,jvj+255)*/
pile[v[22]]=jvj+256; pile[WZ2]=jvj+255; pile[WZ3]=113; pile[WZ4]=jvj+257; 
(*f[298])( );     /*TRIENS1(jvj+256,(-20),jvj+255,113,jvj+257)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+258; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+258,jvj+257,jvj+91)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+91; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+91)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10422; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,10422,jvj+130)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+267; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+267)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+265; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+265)*/
pile[v[22]]=jvj+265; pile[WZ1]=103; pile[WZ2]=jvj+266; 
(*f[54])( );     /*TRI1(jvj+265,103,jvj+266)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+267; pile[WZ4]=jvj+266; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+267,jvj+266,jvj+131)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+46; pile[WZ4]=jvj+270; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+46,jvj+270)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+268; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+268)*/
pile[v[22]]=jvj+268; pile[WZ1]=103; pile[WZ2]=jvj+269; 
(*f[54])( );     /*TRI1(jvj+268,103,jvj+269)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+270; pile[WZ4]=jvj+269; pile[WZ5]=jvj+132; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+270,jvj+269,jvj+132)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+130; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+130,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=114; pile[WZ2]=jvj+131; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+131)*/
pile[WZ2]=jvj+132; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10077; pile[WZ4]=jvj+275; 
(*f[181])( );     /*QUADRI2(100,20,101,10077,jvj+275)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VL; pile[WZ4]=jvj+278; 
(*f[270])( );     /*QUADRI7(100,21,140,VL,jvj+278)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+276; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+276)*/
pile[v[22]]=jvj+276; pile[WZ1]=103; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(jvj+276,103,jvj+277)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+278; pile[WZ4]=jvj+277; pile[WZ5]=jvj+271; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+278,jvj+277,jvj+271)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+281; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+281)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+279; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+279)*/
pile[v[22]]=jvj+279; pile[WZ1]=103; pile[WZ2]=jvj+280; 
(*f[54])( );     /*TRI1(jvj+279,103,jvj+280)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+281; pile[WZ4]=jvj+280; pile[WZ5]=jvj+273; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+281,jvj+280,jvj+273)*/
pile[v[22]]=jvj+271; pile[WZ1]=(-20); pile[WZ2]=114; pile[WZ3]=jvj+272; 
(*f[180])( );     /*TRIENS0(jvj+271,(-20),114,jvj+272)*/
pile[v[22]]=jvj+273; pile[WZ2]=jvj+272; pile[WZ3]=113; pile[WZ4]=jvj+274; 
(*f[298])( );     /*TRIENS1(jvj+273,(-20),jvj+272,113,jvj+274)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+275; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+275,jvj+274,jvj+92)*/
pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+92; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+92)*/
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-624); pile[WZ4]=jvj+133; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=103; pile[WZ2]=jvj+134; 
(*f[54])( );     /*TRI1(jvj+133,103,jvj+134)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+134; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+5,jvj+134,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+7)*/
goto l32;
l30:if((x[jvj+46]!=33)) goto l32;
x[jvj+17]=x[X] ;z[jvj+17]=z[X];
goto l3;
l34:if(x[jvj+6]!=incon) goto l35;
goto l37;
l35:pile[v[22]]=RM; pile[WZ1]=BT; pile[WZ2]=X; pile[WZ3]=R; pile[WZ4]=jvj+6; 
(*f[1818])( );     /*COPV0(RM,BT,X,R,jvj+6)*/
x[RES]=67 ;z[RES]=67;
goto l37;
l38:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l39:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-592); pile[WZ4]=jvj+85; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+85)*/
goto l28;
l40:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=172; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,172,jvj+101)*/
pile[WZ3]=41; pile[WZ4]=jvj+103; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+103)*/
pile[v[22]]=jvj+101; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,111,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; pile[WZ2]=103; pile[WZ3]=jvj+104; 
(*f[58])( );     /*TRI3(jvj+102,jvj+103,103,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+104; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+70,jvj+104,jvj+71)*/
goto l22;
}
