#include "dx.h"
void DETRUISYMA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V29=0,V14=0;
int L,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1261; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1261,T,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+27)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+27; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+27,jvj+2)*/
pile[v[22]]=L; pile[WZ1]=1081; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(L,1081,jvj+2)*/
if((x[jvj+1]!=0)) goto l1;
x[jvj+19]=0 ;z[jvj+19]=0;
pile[v[22]]=1260; pile[WZ1]=T; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1260,T,jvj+11)*/
x[jvj+12]=d[76];z[jvj+12]=0;
l5:if((x[jvj+11]>0)) goto l6;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[299])( );     /*COPEL0(jvj+19,jvj+20)*/
V30=x[jvj+2];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+20; pile[WZ2]=107; pile[WZ3]=jvj+42; 
(*f[301])( );     /*TRI11(jvj+41,jvj+20,107,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+42,22,100,jvj+21)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+21)*/
pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V30,0,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
l1:if((x[jvj+1]<=0)) goto l8;
x[jvj+22]=s[x[jvj+1]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+1];
V14=x[jvj+22];
pile[v[22]]=447; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+22,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=459; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(459,jvj+22,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+28)*/
pile[WZ3]=29; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,jvj+26,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+45; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+45,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+30; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+31; 
(*f[298])( );     /*TRIENS1(jvj+30,(-20),jvj+29,107,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+31,22,100,jvj+9)*/
pile[v[22]]=1260; pile[WZ1]=T; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1260,T,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
pile[v[22]]=1261; pile[WZ1]=T; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(1261,T,V14)*/
pile[v[22]]=T; pile[WZ1]=1260; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(T,1260,jvj+22)*/
pile[v[22]]=jvj+2; pile[WZ1]=107; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+2,107,jvj+9)*/
pile[WZ1]=T; 
(*f[4110])( );     /*DETRUISYMA1(jvj+2,T)*/
l8:v[0]=jvj; v[22]-=2; return;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=447; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(447,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=459; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(459,jvj+4,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
x[jvj+35]=x[jvj+6] ;z[jvj+35]=z[jvj+6];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+8; pile[WZ2]=103; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,jvj+8,103,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+34,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+10)*/
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
l6:x[jvj+13]=s[x[jvj+11]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+11];
pile[v[22]]=447; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=459; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(459,jvj+13,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
x[jvj+39]=x[jvj+15] ;z[jvj+39]=z[jvj+15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,jvj+17,103,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+38,jvj+18)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[196])( );     /*PLUF0(jvj+12,jvj+18,jvj+19)*/
l7:x[jvj+11]=t[x[jvj+11]];
goto l5;
}
