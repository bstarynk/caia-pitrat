#include "dx.h"
void AGE6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0;
int N,AP,AF;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=26108;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2425&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; AP=pile[v[22]+1]; AF=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V3=(-AP);
V4=(-AF);
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=26; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+8)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+15,jvj+14,jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=103; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+9,jvj+10,103,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+11,jvj+5)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+23,jvj+22,jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+19,jvj+6)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+24)*/
pile[WZ3]=485; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+35,jvj+34,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+32)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+29,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+28,107,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+28,107,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+28,107,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+36)*/
pile[WZ3]=485; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+44,jvj+43,jvj+40)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+41)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+39; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+39,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=107; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+37,107,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+38)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+36; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+36,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+38)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+7)*/
pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+7)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}