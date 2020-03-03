#include "dx.h"
void CRESUDOKU4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,K=0,V23=0,J=0,V28=0,JJ=0,V27=0,KK=0,V32=0,L=0,M=0,V33=0,V31=0,P=0,Q=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=79;
x[jvj+1]=26118;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2457&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+24]=0 ;z[jvj+24]=0;
x[jvj+5]=0 ;z[jvj+5]=0;
J=0;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
V24=9*J;
K=0;
l2:V23=K+V24;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
K++;
if((K<=8)) goto l2;
pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+29)*/
pile[WZ3]=1273; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+37)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+36; 
(*f[301])( );     /*TRI11(jvj+35,jvj+4,107,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=7; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,7,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
J++;
if((J<=8)) goto l1;
pile[WZ1]=jvj+21; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+21)*/
x[jvj+10]=0 ;z[jvj+10]=0;
KK=0;
l3:x[jvj+7]=0 ;z[jvj+7]=0;
V28=9*KK;
JJ=0;
l4:V27=JJ+V28;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V27; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+40,jvj+39,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
JJ++;
if((JJ<=8)) goto l4;
pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+41)*/
pile[WZ3]=1273; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+46)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+49)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+48; 
(*f[301])( );     /*TRI11(jvj+47,jvj+9,107,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=7; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,7,jvj+43)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+42,jvj+43,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+44,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(jvj+10,jvj+11)*/
KK++;
if((KK<=8)) goto l3;
pile[WZ1]=jvj+22; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+22)*/
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+16]=d[135];z[jvj+16]=0;
l9:if((x[jvj+16]>0)) goto l10;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+23; 
(*f[299])( );     /*COPEL0(jvj+19,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+62)*/
pile[WZ3]=485; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+67)*/
pile[WZ3]=1215; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+73; 
(*f[301])( );     /*TRI11(jvj+72,jvj+21,107,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+68; 
(*f[58])( );     /*TRI3(jvj+73,22,100,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+22; pile[WZ2]=107; pile[WZ3]=jvj+76; 
(*f[301])( );     /*TRI11(jvj+75,jvj+22,107,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+76,22,100,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=111; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+77,111,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+23; pile[WZ2]=107; pile[WZ3]=jvj+79; 
(*f[301])( );     /*TRI11(jvj+78,jvj+23,107,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+79,22,100,jvj+70)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+67,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=107; pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+68)*/
pile[WZ2]=jvj+69; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+69)*/
pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+64; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+63,jvj+64,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+66,jvj+65,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[522])( );     /*PLUB2(jvj+24,jvj+25)*/
x[NNNE]=x[jvj+24] ;z[NNNE]=z[jvj+24];
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l6:L=s[x[jvj+12]];
x[jvj+13]=d[128];z[jvj+13]=0;
l7:if((x[jvj+13]>0)) goto l8;
x[jvj+12]=t[x[jvj+12]];
l5:if((x[jvj+12]>0)) goto l6;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+18; 
(*f[299])( );     /*COPEL0(jvj+14,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+53)*/
pile[WZ3]=1273; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+61)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+18; pile[WZ2]=107; pile[WZ3]=jvj+60; 
(*f[301])( );     /*TRI11(jvj+59,jvj+18,107,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+61,jvj+60,jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=7; pile[WZ4]=jvj+55; 
(*f[192])( );     /*QUADRI4(100,41,130,7,jvj+55)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=103; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,103,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+56; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+57,jvj+56,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[522])( );     /*PLUB2(jvj+19,jvj+20)*/
x[jvj+17]=t[x[jvj+17]];
l11:if((x[jvj+17]>0)) goto l12;
x[jvj+16]=t[x[jvj+16]];
goto l9;
l8:M=s[x[jvj+13]];
V33=L+M;
V31=V32+V33;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+50)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V31; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,V31,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+52,jvj+51,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[522])( );     /*PLUB2(jvj+14,jvj+15)*/
x[jvj+13]=t[x[jvj+13]];
goto l7;
l10:P=s[x[jvj+16]];
x[jvj+17]=d[130];z[jvj+17]=0;
goto l11;
l12:Q=s[x[jvj+17]];
x[jvj+14]=0 ;z[jvj+14]=0;
V32=P+Q;
x[jvj+12]=d[127];z[jvj+12]=0;
goto l5;
}
