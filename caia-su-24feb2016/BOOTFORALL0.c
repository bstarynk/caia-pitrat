#include "dx.h"
void BOOTFORALL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int T,BA,C;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; BA=pile[v[22]+1]; C=pile[v[22]+2]; RT=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,T,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=1715)) goto l6;
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,T,jvj+3)*/
pile[v[22]]=103; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,T,jvj+4)*/
pile[v[22]]=20; pile[WZ2]=jvj+5; 
(*f[409])( );     /*TRI14(20,T,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+21)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+21; pile[WZ4]=RT; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+21,RT)*/
for(i=x[jvj+5],V13=0;i>0;i=t[i],V13++)  ;
if((V13!=1)) goto l4;
x[jvj+28]=x[jvj+5] ;z[jvj+28]=z[jvj+5];
l1:if((x[jvj+28]<=0)) goto l4;
x[jvj+6]=s[x[jvj+28]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+28];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=1715)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+9)*/
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+6,jvj+10)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+11; 
(*f[1503])( );if(v[102]) goto l2;     /*BOOTRADA0(C,BA,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+6,jvj+13)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+14; 
(*f[1503])( );if(v[102]) goto l2;     /*BOOTRADA0(C,BA,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,jvj+15,103,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+24; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+24,jvj+16)*/
pile[v[22]]=RT; pile[WZ1]=107; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+16)*/
pile[v[22]]=jvj+6; pile[WZ1]=RT; pile[WZ2]=BA; pile[WZ3]=jvj+9; pile[WZ4]=C; 
(*f[2044])( );     /*BOOTFORALL1(jvj+6,RT,BA,jvj+9,C)*/
l7:v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+28]=t[x[jvj+28]];
goto l1;
l4:x[jvj+29]=x[jvj+5] ;z[jvj+29]=z[jvj+5];
l3:if((x[jvj+29]<=0)) goto l7;
x[jvj+17]=s[x[jvj+29]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+29];
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+17; pile[WZ3]=jvj+18; 
(*f[1503])( );if(v[102]) goto l5;     /*BOOTRADA0(C,BA,jvj+17,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+27; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+26,107,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+27,22,100,jvj+20)*/
pile[v[22]]=RT; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+20)*/
l5:x[jvj+29]=t[x[jvj+29]];
goto l3;
l6:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
