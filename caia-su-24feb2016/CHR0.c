#include "dx.h"
void CHR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V4=0,V7=0,V9=0;
int T,K,P;
int L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; K=pile[v[22]+1]; P=pile[v[22]+2]; L=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[L]=incon;
if((T==0)) goto l5;
if((T<=0)) goto l7;
V4=s[T];
x[jvj+4]=V4 ;z[jvj+4]=(V4<=sepcte) ? V4 : 0;
pile[v[22]]=102; pile[WZ1]=P; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,P,jvj+12)*/
pile[v[22]]=103; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,P,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+13,V7)*/
V7=pile[WZ2]; 
V9=t[T];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+14; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V7; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,V7,jvj+16)*/
pile[v[22]]=jvj+4; pile[WZ1]=319; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+4,319,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+18,jvj+17,jvj+1)*/
pile[v[22]]=246; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(246,P,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=246; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(jvj+1,246,V16)*/
l2:pile[v[22]]=111; pile[WZ1]=P; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,P,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+6; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+6,jvj+7)*/
pile[v[22]]=jvj+1; pile[WZ1]=111; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+1,111,jvj+7)*/
l3:pile[v[22]]=107; pile[WZ1]=P; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,P,jvj+8)*/
if((x[jvj+8]==0)) goto l4;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[195])( );     /*CPE0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+1; pile[WZ1]=107; pile[WZ2]=jvj+9; 
(*f[34])( );     /*CHGC0(jvj+1,107,jvj+9)*/
l4:if(x[jvj+14]!=433&&x[jvj+14]!=918) goto l6;
pile[v[22]]=366; pile[WZ1]=P; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(366,P,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[378])( );     /*CPI0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+1; pile[WZ1]=366; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+1,366,jvj+11)*/
pile[v[22]]=366; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(366,jvj+1,jvj+2)*/
l1:x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=319; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+3,319,jvj+4)*/
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+3,jvj+2)*/
goto l1;
l5:x[L]=x[K] ;z[L]=z[K];
l9:v[0]=jvj; v[22]-=4; v[102]=0;return;
l6:pile[v[22]]=K; pile[WZ1]=120; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(K,120,jvj+1)*/
pile[v[22]]=V9; pile[WZ1]=jvj+1; pile[WZ2]=P; pile[WZ3]=L; 
(*f[1904])( );if(v[102]) goto l8;     /*CHR0(V9,jvj+1,P,L)*/
l8:if(x[L]!=incon) goto l9;
l7:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
