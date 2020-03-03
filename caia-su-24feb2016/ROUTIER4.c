#include "dx.h"
void ROUTIER4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V23=0,V27=0,V26=0,V25=0,K=0,V15=0,V14=0,V22=0,V21=0,L=0,V30=0,V29=0,V39=0,V38=0,V37=0,V42=0,V41=0,V40=0,V36=0,M=0,V47=0,V46=0,V45=0,V50=0,V49=0,V48=0,V44=0,V52=0,V51=0,I=0,V12=0,V61=0,V60=0,V63=0,V62=0,V59=0,V58=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=93;
x[jvj+1]=26162;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2661&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=0 ;z[jvj+11]=0;
I=1;
l11:if((I<=N)) goto l12;
x[NNNE]=x[jvj+11] ;z[NNNE]=z[jvj+11];
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
V24=V12-1;
V23=V24*N;
V27=V12+1;
V26=V12*V27;
V25=V26/2;
K=1;
l2:if((K<=N)) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+8)*/
x[jvj+4]=0 ;z[jvj+4]=0;
L=1;
l5:if((L<=N)) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+9)*/
x[jvj+6]=0 ;z[jvj+6]=0;
M=1;
l8:if((M<=N)) goto l10;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+10; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+10)*/
V59=V60+V12;
V58=V59-V62;
x[jvj+85]=x[jvj+8] ;z[jvj+85]=z[jvj+8];
x[jvj+89]=x[jvj+9] ;z[jvj+89]=z[jvj+9];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+70)*/
pile[WZ3]=25; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+75)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+80)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V58; pile[WZ4]=jvj+82; 
(*f[192])( );     /*QUADRI4(100,41,130,V58,jvj+82)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+82,jvj+81,jvj+79)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+77; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+77)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+77; pile[WZ2]=103; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+76,jvj+77,103,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+79,jvj+78,jvj+71)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=107; pile[WZ3]=jvj+86; 
(*f[301])( );     /*TRI11(jvj+84,jvj+85,107,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+86,22,100,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=107; pile[WZ3]=jvj+90; 
(*f[301])( );     /*TRI11(jvj+88,jvj+89,107,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+90,22,100,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+10; pile[WZ2]=107; pile[WZ3]=jvj+93; 
(*f[301])( );     /*TRI11(jvj+92,jvj+10,107,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+93,22,100,jvj+74)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+70; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+70,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+71)*/
pile[WZ2]=jvj+72; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+72)*/
pile[WZ2]=jvj+73; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+73)*/
pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+74)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[522])( );     /*PLUB2(jvj+11,jvj+12)*/
V12++;
l13:if((V12<=N)) goto l1;
I++;
goto l11;
l4:if((K<=V12)) goto l3;
V15=V60+K;
V14=V15-V62;
V22=V23+K;
V21=V22-V25;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+13)*/
pile[WZ3]=25; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+23,jvj+22,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+19,jvj+14)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V21; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V21,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+31,jvj+30,jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+15)*/
pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+13,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+15)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l3:K++;
goto l2;
l7:if((L<=I)) goto l6;
if((L>=V12)) goto l6;
V30=V60+L;
V29=V30-V62;
V39=L-1;
V38=V39*N;
V37=V38+V12;
V42=L+1;
V41=L*V42;
V40=V41/2;
V36=V37-V40;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+32)*/
pile[WZ3]=25; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+35)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V29; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,V29,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+42,jvj+41,jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=103; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,103,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+38,jvj+33)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V36; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,V36,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+50,jvj+49,jvj+47)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+46,jvj+34)*/
pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+32,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+33)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+34)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l6:L++;
goto l5;
l10:if((M>=I)) goto l9;
V47=M-1;
V46=V47*N;
V45=V46+I;
V50=M+1;
V49=M*V50;
V48=V49/2;
V44=V45-V48;
V52=V46+V12;
V51=V52-V48;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+51)*/
pile[WZ3]=25; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+54)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V44; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,V44,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+61,jvj+60,jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+56; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+56)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+52)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+62)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V51; pile[WZ4]=jvj+69; 
(*f[192])( );     /*QUADRI4(100,41,130,V51,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+68; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+69,jvj+68,jvj+66)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+64; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+63,jvj+64,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+66,jvj+65,jvj+53)*/
pile[WZ2]=111; pile[WZ3]=jvj+51; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+51,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+53)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
l9:M++;
goto l8;
l12:V12=I+1;
V61=I-1;
V60=V61*N;
V63=I*V12;
V62=V63/2;
goto l13;
}
