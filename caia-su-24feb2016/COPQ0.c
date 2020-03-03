#include "dx.h"
void COPQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V=0;
int A,B,C;
int H;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=10653;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2165&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; H=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[C] ;z[jvj+4]=z[C];
x[jvj+8]=x[B] ;z[jvj+8]=z[B];
l3:pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+4,jvj+9)*/
if((x[jvj+9]!=185)) goto l5;
pile[v[22]]=160; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,jvj+4,jvj+10)*/
pile[v[22]]=162; pile[WZ1]=jvj+10; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(162,jvj+10,K)*/
K=pile[WZ2]; 
if(K!=35&&K!=33) goto l5;
x[jvj+39]=incon;
if((K==35)) goto l1;
x[jvj+39]=180 ;z[jvj+39]=180;
l4:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+11)*/
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+4,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=V; pile[WZ1]=(-3031); pile[WZ2]=jvj+11; pile[WZ3]=jvj+14; 
(*f[2207])( );     /*REMP0(V,(-3031),jvj+11,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=436; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,436,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=111; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+38; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+13,jvj+38,jvj+31)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=33; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+41)*/
pile[v[22]]=jvj+15; pile[WZ1]=120; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+15,120,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+41,jvj+40,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+32; 
(*f[180])( );     /*TRIENS0(jvj+31,(-20),107,jvj+32)*/
pile[v[22]]=jvj+33; pile[WZ2]=jvj+32; pile[WZ3]=105; pile[WZ4]=jvj+34; 
(*f[298])( );     /*TRIENS1(jvj+33,(-20),jvj+32,105,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+34,42,100,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=(-20); pile[WZ2]=184; pile[WZ3]=jvj+18; 
(*f[180])( );     /*TRIENS0(jvj+17,(-20),184,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=H; 
(*f[58])( );     /*TRI3(jvj+18,47,100,H)*/
pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=229; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+25)*/
pile[WZ3]=33; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+30)*/
pile[v[22]]=jvj+6; pile[WZ1]=120; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+6,120,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+30,jvj+29,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=337; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,337,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,105,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+28,42,100,jvj+7)*/
pile[v[22]]=H; pile[WZ1]=184; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(H,184,jvj+7)*/
l2:if((x[jvj+4]==x[A])) goto l7;
pile[v[22]]=120; pile[WZ1]=jvj+8; 
(*f[71])( );     /*ENLV0(120,jvj+8)*/
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(A,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=239; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+19)*/
pile[WZ3]=33; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,33,jvj+24)*/
pile[v[22]]=jvj+2; pile[WZ1]=120; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+2,120,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+24,jvj+23,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=337; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,337,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,105,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+3; 
(*f[58])( );     /*TRI3(jvj+22,42,100,jvj+3)*/
pile[v[22]]=H; pile[WZ1]=184; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(H,184,jvj+3)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l1:x[jvj+39]=723 ;z[jvj+39]=723;
goto l4;
l5:pile[v[22]]=120; pile[WZ1]=jvj+4; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+4,jvj+16)*/
x[jvj+8]=x[jvj+4] ;z[jvj+8]=z[jvj+4];
x[jvj+4]=x[jvj+16] ;z[jvj+4]=z[jvj+16];
goto l3;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
