#include "dx.h"
void USENSTYY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,M=0,V7=0;
int N,E,YY;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; E=pile[v[22]+1]; YY=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1088; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1088,N,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=447; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+7)*/
l7:pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=145; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,jvj+1,jvj+9)*/
x[jvj+29]=x[jvj+6] ;z[jvj+29]=z[jvj+6];
x[jvj+14]=x[jvj+8] ;z[jvj+14]=z[jvj+8];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+12)*/
pile[WZ3]=433; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,433,jvj+17)*/
pile[WZ3]=228; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,228,jvj+23)*/
pile[WZ3]=74; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+26)*/
pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+22)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-605); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-605),jvj+34)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=365; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,365,jvj+35)*/
pile[WZ3]=489; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,489,jvj+36)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(128,100,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=128; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+32,128,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+32,128,jvj+36)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+21; 
(*f[180])( );     /*TRIENS0(jvj+20,(-20),107,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,452,102,jvj+22,jvj+21,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+37)*/
pile[WZ1]=452; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,452,102,jvj+37,jvj+19)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+17,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+19)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+13,jvj+14,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+15,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=E; pile[WZ2]=jvj+11; 
(*f[1415])( );     /*COMPTEST0(jvj+10,E,jvj+11)*/
if((x[jvj+11]==135)) goto l8;
l6:x[jvj+38]=t[x[jvj+38]];
l5:if((x[jvj+38]<=0)) goto l4;
x[jvj+1]=s[x[jvj+38]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+38];
pile[v[22]]=122; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(122,jvj+1,jvj+6)*/
if((x[jvj+6]==158)) goto l6;
x[jvj+7]=incon;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(510,jvj+1,V12)*/
V12=pile[WZ2]; 
M=V12;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=M; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,M,jvj+7)*/
goto l7;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+4,V7)*/
V7=pile[WZ2]; 
if((V7==(-7416))) goto l4;
pile[v[22]]=159; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+4,jvj+5)*/
x[jvj+38]=x[jvj+5] ;z[jvj+38]=z[jvj+5];
goto l5;
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
l8:pile[v[22]]=YY; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(YY,107,jvj+10)*/
goto l6;
}
