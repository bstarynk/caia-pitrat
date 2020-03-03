#include "dx.h"
void MAGDOBIS7(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V6=0,V15=0,V16=0,T=0,V9=0,V=0,V10=0,V17=0,V11=0,V18=0,V20=0,V19=0,K=0,M=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=57;
x[jvj+1]=26210;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2892&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
K=0;
l8:M=0;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
S=0;
l3:pile[v[22]]=1; pile[WZ1]=S; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(1,S,(-630),V6)*/
V6=pile[WZ3]; 
if((V6!=M)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=S; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,S,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:S++;
if((S<=7)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+6)*/
x[jvj+4]=0 ;z[jvj+4]=0;
V15=K%4;
V16=K/4;
T=0;
l5:pile[v[22]]=2; pile[WZ1]=T; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(2,T,(-630),V9)*/
V9=pile[WZ3]; 
if((V9!=M)) goto l4;
V=0;
l7:pile[v[22]]=V; pile[WZ1]=(-7562); 
(*f[201])( );if(v[102]) goto l6;     /*FCOEFF0(V,(-7562),V10)*/
V10=pile[WZ2]; 
V17=V15-V10;
if((V17<0)) goto l6;
if((V17>3)) goto l6;
pile[WZ1]=(-7563); 
(*f[201])( );if(v[102]) goto l6;     /*FCOEFF0(V,(-7563),V11)*/
V11=pile[WZ2]; 
V18=V16-V11;
if((V18<0)) goto l6;
if((V18>3)) goto l6;
V20=4*V18;
V19=V17+V20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+18)*/
pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=T; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,T,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+19)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=T; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,T,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+36,jvj+35,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+20)*/
pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+5,107,jvj+20)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
l6:V++;
if((V<=3)) goto l7;
l4:T++;
if((T<=7)) goto l5;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+7)*/
x[jvj+53]=x[jvj+6] ;z[jvj+53]=z[jvj+6];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+37)*/
pile[WZ3]=26; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+47,jvj+46,jvj+44)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=M; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,M,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+38)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+48)*/
pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=107; pile[WZ3]=jvj+54; 
(*f[301])( );     /*TRI11(jvj+52,jvj+53,107,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+54,22,100,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+57; 
(*f[301])( );     /*TRI11(jvj+56,jvj+7,107,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+57,22,100,jvj+50)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+39,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+39,107,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+37; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+37,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+39)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[522])( );     /*PLUB2(jvj+8,jvj+9)*/
M++;
if((M<=6)) goto l1;
K++;
if((K<=15)) goto l8;
x[NNNE]=x[jvj+8] ;z[NNNE]=z[jvj+8];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
