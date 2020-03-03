#include "dx.h"
void DETRUISYMA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V29=0,V14=0;
int R,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=1261; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1261,T,jvj+1)*/
if((x[jvj+1]!=0)) goto l2;
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=1260; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1260,T,jvj+10)*/
x[jvj+11]=d[76];z[jvj+11]=0;
l6:if((x[jvj+10]>0)) goto l7;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[299])( );     /*COPEL0(jvj+18,jvj+19)*/
V30=x[R];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+19; pile[WZ2]=107; pile[WZ3]=jvj+40; 
(*f[301])( );     /*TRI11(jvj+39,jvj+19,107,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+40,22,100,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(R,107,jvj+20)*/
pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V30,0,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
l2:if((x[jvj+1]<=0)) goto l9;
x[jvj+21]=s[x[jvj+1]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+1];
V14=x[jvj+21];
pile[v[22]]=447; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(447,jvj+21,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=459; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(459,jvj+21,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+26)*/
pile[WZ3]=29; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+25,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+43; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+43,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+28; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+29; 
(*f[298])( );     /*TRIENS1(jvj+28,(-20),jvj+27,107,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+29,22,100,jvj+8)*/
pile[v[22]]=1260; pile[WZ1]=T; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1260,T,jvj+2)*/
l3:if((x[jvj+2]>0)) goto l4;
pile[v[22]]=1261; pile[WZ1]=T; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(1261,T,V14)*/
pile[v[22]]=T; pile[WZ1]=1260; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(T,1260,jvj+21)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(R,107,jvj+8)*/
goto l1;
l4:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(447,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=459; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(459,jvj+3,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
x[jvj+33]=x[jvj+5] ;z[jvj+33]=z[jvj+5];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+7,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+9)*/
l5:x[jvj+2]=t[x[jvj+2]];
goto l3;
l7:x[jvj+12]=s[x[jvj+10]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+10];
pile[v[22]]=447; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+12,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=459; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(459,jvj+12,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
x[jvj+37]=x[jvj+14] ;z[jvj+37]=z[jvj+14];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,jvj+16,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+17)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+17,jvj+18)*/
l8:x[jvj+10]=t[x[jvj+10]];
goto l6;
l9:v[0]=jvj; v[22]-=2; return;
}
