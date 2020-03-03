#include "dx.h"
void A179QUATRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=61;
x[jvj+1]=26260;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2999&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ3]=486; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+9)*/
pile[WZ3]=485; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+12)*/
pile[WZ3]=486; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+21,jvj+20,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+24,jvj+23,jvj+18)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+16; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+16,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+17)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+13,107,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+27,jvj+26,jvj+15)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+28)*/
pile[WZ3]=486; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+38,jvj+37,jvj+33)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+41,jvj+40,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+44,jvj+43,jvj+35)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+32,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+33)*/
pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+34)*/
pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+45)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+50,jvj+49,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+46,jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+31)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+28; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+28,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-624); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+56)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+58,jvj+57,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-612); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(100,21,140,(-612),jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+61,jvj+60,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
