#include "dx.h"
void COPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V64=0,V=0,V40=0,V18=0,VV=0,W=0;
int X,RM,S,NV;
int Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=87;
x[jvj+1]=10468;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1823&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; RM=pile[v[22]+1]; S=pile[v[22]+2]; NV=pile[v[22]+3]; Q=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=295)) goto l5;
x[jvj+9]=vo[15];z[jvj+9]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(583,jvj+9,jvj+10)*/
pile[v[22]]=397; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(397,jvj+10,jvj+11)*/
if((x[jvj+11]!=68)) goto l2;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=Q; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,X,Q)*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l1:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=22)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+2,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+4,jvj+5)*/
pile[v[22]]=146; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(146,jvj+5,jvj+6)*/
if((x[jvj+6]==23)) goto l11;
l9:x[jvj+39]=vo[20];z[jvj+39]=vz[20];
pile[v[22]]=191; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(191,jvj+39,jvj+40)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+41)*/
(*f[1817])( );     /*NOUV2(V18)*/
V18=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V18; pile[WZ4]=Q; 
(*f[270])( );     /*QUADRI7(100,21,140,V18,Q)*/
(*f[1817])( );     /*NOUV2(VV)*/
VV=pile[v[22]]; 
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=267; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,267,jvj+70)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+72; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+72)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+75)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+78; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+78)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+77; 
(*f[58])( );     /*TRI3(jvj+76,jvj+41,103,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+77; pile[WZ5]=jvj+73; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+78,jvj+77,jvj+73)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+79)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+83)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+40; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+40,jvj+84)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+86; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+86)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+85; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+86,jvj+85,jvj+81)*/
pile[v[22]]=jvj+79; pile[WZ1]=111; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,111,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; pile[WZ2]=103; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+80,jvj+81,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+82; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+83,jvj+82,jvj+74)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+72,jvj+71,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=107; pile[WZ2]=jvj+73; 
(*f[36])( );     /*PLUSC0(jvj+65,107,jvj+73)*/
pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(jvj+65,107,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V18; pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(100,21,140,V18,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=436; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,436,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=111; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+62,jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+65,jvj+64,jvj+42)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=jvj+42; pile[WZ3]=S; pile[WZ4]=RM; pile[WZ5]=NV; 
(*f[1633])( );     /*COPTT0(RM,107,jvj+42,S,RM,NV)*/
(*f[36])( );     /*PLUSC0(RM,107,jvj+42)*/
goto l14;
l2:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,X,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+12,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=748; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(748,jvj+9,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V64) goto l3;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,X,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=397; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(397,jvj+17,jvj+18)*/
if((x[jvj+18]!=68)) goto l5;
x[Q]=x[jvj+14] ;z[Q]=z[jvj+14];
goto l14;
l3:x[Q]=x[jvj+12] ;z[Q]=z[jvj+12];
goto l14;
l5:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,X,jvj+19)*/
if((x[jvj+19]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,X,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+20,jvj+21)*/
if(x[jvj+21]!=138&&x[jvj+21]!=139&&x[jvj+21]!=141&&x[jvj+21]!=149&&x[jvj+21]!=137&&x[jvj+21]!=432&&x[jvj+21]!=1382&&x[jvj+21]!=1660) goto l6;
x[Q]=x[X] ;z[Q]=z[X];
goto l14;
l6:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,X,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=295)) goto l7;
x[jvj+24]=vo[20];z[jvj+24]=vz[20];
pile[v[22]]=191; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(191,jvj+24,jvj+25)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+55)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+25; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+67; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+67,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=Q; 
(*f[270])( );     /*QUADRI7(100,21,140,V,Q)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=jvj+28; pile[WZ3]=S; pile[WZ4]=RM; pile[WZ5]=NV; 
(*f[1633])( );     /*COPTT0(RM,107,jvj+28,S,RM,NV)*/
(*f[36])( );     /*PLUSC0(RM,107,jvj+28)*/
goto l14;
l7:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,X,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]==585)) goto l8;
if((x[jvj+30]==847)) goto l10;
if((x[jvj+30]!=647)) goto l11;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,X,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=RM; pile[WZ2]=S; pile[WZ3]=NV; pile[WZ4]=Q; 
(*f[1986])( );     /*COPF0(jvj+48,RM,S,NV,Q)*/
goto l14;
l8:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,X,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+2,jvj+31)*/
if((x[jvj+31]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+2,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+32,jvj+33)*/
pile[v[22]]=146; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(146,jvj+33,jvj+34)*/
if((x[jvj+34]!=23)) goto l1;
x[jvj+35]=vo[20];z[jvj+35]=vz[20];
pile[v[22]]=1654; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1654,jvj+35,jvj+36)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+37)*/
(*f[1817])( );     /*NOUV2(V40)*/
V40=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+56)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V40; pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(100,21,140,V40,jvj+60)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+36; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+36,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+69; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+69,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; pile[WZ2]=103; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+57,jvj+58,103,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+60,jvj+59,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V40; pile[WZ4]=Q; 
(*f[270])( );     /*QUADRI7(100,21,140,V40,Q)*/
pile[v[22]]=RM; pile[WZ1]=107; pile[WZ2]=jvj+38; pile[WZ3]=S; pile[WZ4]=RM; pile[WZ5]=NV; 
(*f[1633])( );     /*COPTT0(RM,107,jvj+38,S,RM,NV)*/
(*f[36])( );     /*PLUSC0(RM,107,jvj+38)*/
goto l14;
l10:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,X,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,X,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+45,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=103; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+44,103,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=570; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+87; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,570,102,jvj+46,jvj+87,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=RM; pile[WZ2]=S; pile[WZ3]=NV; pile[WZ4]=Q; 
(*f[1823])( );if(v[102]) goto l11;     /*COPE0(jvj+47,RM,S,NV,Q)*/
goto l14;
l11:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=653)) goto l12;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l12:pile[v[22]]=X; pile[WZ1]=RM; pile[WZ2]=S; pile[WZ3]=NV; pile[WZ4]=Q; 
(*f[1986])( );     /*COPF0(X,RM,S,NV,Q)*/
goto l14;
}
