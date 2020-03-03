#include "dx.h"
void LANGFORDSNUMBER1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V16=0,V15=0,V14=0,V11=0,V20=0,J=0,V19=0,V24=0,V23=0,V22=0,V9=0,I=0,P=0;
int K,N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=26178;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2765&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
V9=K*N;
I=1;
l7:if((I<=V9)) goto l9;
x[NNNE]=x[jvj+8] ;z[NNNE]=z[jvj+8];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+5]=0 ;z[jvj+5]=0;
V11=K-1;
V20=P+1;
J=0;
l6:if((J<=V11)) goto l2;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+27)*/
pile[WZ3]=26; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+35)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+37,jvj+36,jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+28)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+7; pile[WZ2]=107; pile[WZ3]=jvj+40; 
(*f[301])( );     /*TRI11(jvj+39,jvj+7,107,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+40,22,100,jvj+29)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+27; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+27,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+29)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[522])( );     /*PLUB2(jvj+8,jvj+9)*/
P++;
l8:if((P<=N)) goto l1;
I++;
goto l7;
l2:x[jvj+2]=0 ;z[jvj+2]=0;
L=0;
l3:if((L<=V11)) goto l5;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
V19=J*V20;
x[jvj+25]=((I>V19)) ? 135 : 134;
V24=V11-J;
V23=V24*V20;
V22=I+V23;
x[jvj+26]=((V22<=V9)) ? 135 : 134;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+18)*/
pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+24; 
(*f[301])( );     /*TRI11(jvj+23,jvj+4,107,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+24,22,100,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+25; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,jvj+20)*/
pile[WZ3]=jvj+26; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,jvj+21)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+21)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
J++;
goto l6;
l5:if((L==J)) goto l4;
V16=L-J;
V15=V16*V20;
V14=I+V15;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l4:L++;
goto l3;
l9:P=1;
goto l8;
}
