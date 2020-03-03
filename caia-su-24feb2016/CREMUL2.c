#include "dx.h"
void CREMUL2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V16=0,V18=0,V7=0,V21=0,V20=0,V22=0,V10=0,K=0,V24=0,V13=0;
int NC,NK,NT;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=26122;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2485&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NC=pile[v[22]]; NK=pile[v[22]+1]; NT=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+2]=0 ;z[jvj+2]=0;
V17=NK-NT;
V16=V17+1;
l1:if((V16<=NC)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+8)*/
x[jvj+4]=0 ;z[jvj+4]=0;
V21=NC-NK;
V20=V21+1;
l4:if((V20<=NC)) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+9)*/
x[jvj+6]=0 ;z[jvj+6]=0;
K=1;
l7:if((K<=NC)) goto l9;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+10; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+31)*/
pile[WZ3]=486; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+36)*/
pile[WZ3]=485; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+41; 
(*f[301])( );     /*TRI11(jvj+40,jvj+8,107,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+41,22,100,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+44; 
(*f[301])( );     /*TRI11(jvj+43,jvj+9,107,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+44,22,100,jvj+38)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+36,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+35,107,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+35,107,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+10; pile[WZ2]=107; pile[WZ3]=jvj+47; 
(*f[301])( );     /*TRI11(jvj+46,jvj+10,107,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+47,22,100,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+32,jvj+33,103,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+34,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[522])( );     /*PLUB2(jvj+11,jvj+12)*/
x[NNNE]=x[jvj+11] ;z[NNNE]=z[jvj+11];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:V18=NC-V16;
pile[v[22]]=V18; pile[WZ1]=10; 
(*f[1006])( );if(v[102]) goto l2;     /*POWER0(V18,10,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V16; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+18,jvj+17,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+15)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+13,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+15)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:V16++;
goto l1;
l6:V22=NC-V20;
pile[v[22]]=V22; pile[WZ1]=10; 
(*f[1006])( );if(v[102]) goto l5;     /*POWER0(V22,10,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V20; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,V20,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+24,jvj+23,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+21)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+19; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+19,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+21)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l5:V20++;
goto l4;
l9:V24=NC-K;
pile[v[22]]=V24; pile[WZ1]=10; 
(*f[1006])( );if(v[102]) goto l8;     /*POWER0(V24,10,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-630); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+30,jvj+29,jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+27)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+25; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+25,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+27)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
l8:K++;
goto l7;
}
