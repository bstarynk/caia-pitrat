#include "dx.h"
void DESTRANS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,J=0,I=0,L=0,V10=0,K=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=26104;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2413&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
L=1;
l4:V10=L+1;
V4=incon;
if((V10>3)) goto l1;
V4=V10;
l5:K=V4;
x[jvj+5]=0 ;z[jvj+5]=0;
I=1;
l2:x[jvj+2]=0 ;z[jvj+2]=0;
J=I;
l3:if((J<=9)) goto l7;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+31; 
(*f[301])( );     /*TRI11(jvj+30,jvj+4,107,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+31,22,100,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
I++;
if((I<=8)) goto l2;
pile[WZ1]=jvj+7; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+32)*/
pile[WZ3]=485; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+7,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+39,22,100,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[522])( );     /*PLUB2(jvj+8,jvj+9)*/
L++;
if((L<=3)) goto l4;
x[NNNE]=x[jvj+8] ;z[NNNE]=z[jvj+8];
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:V4=1;
goto l5;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+13)*/
pile[WZ3]=(-1544); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+17)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,103,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=979; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,979,102,jvj+17,jvj+16,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-620); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-620),jvj+21)*/
pile[WZ3]=(-1544); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=979; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,979,102,jvj+25,jvj+24,jvj+12)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+10; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+10,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+12)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
J++;
goto l3;
}
