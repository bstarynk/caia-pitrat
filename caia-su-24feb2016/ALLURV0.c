#include "dx.h"
void ALLURV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V24=0,F=0,V50=0;
int V,R;
int RR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=37;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; R=pile[v[22]+1]; RR=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,R,jvj+1)*/
x[jvj+36]=x[jvj+1] ;z[jvj+36]=z[jvj+1];
l1:if((x[jvj+36]>0)) goto l2;
x[jvj+37]=x[jvj+1] ;z[jvj+37]=z[jvj+1];
l6:if((x[jvj+37]<=0)) goto l8;
x[jvj+10]=s[x[jvj+37]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+37];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=22)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+10,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+12,V24)*/
V24=pile[WZ2]; 
if((V!=V24)) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+10,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+13,jvj+14)*/
F=x[jvj+14];
if(F!=278&&F!=910) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+10,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=R; pile[WZ2]=RR; 
(*f[535])( );     /*ALLURE0(jvj+15,R,RR)*/
l13:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+36]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+36];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l3;
x[jvj+5]=d[20];z[jvj+5]=0;
l4:if((x[jvj+5]<=0)) goto l3;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+6,jvj+2,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V6)*/
V6=pile[WZ2]; 
if((V!=V6)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+6,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,jvj+2,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=RR; 
(*f[535])( );     /*ALLURE0(jvj+9,R,RR)*/
goto l13;
l3:x[jvj+36]=t[x[jvj+36]];
goto l1;
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
l7:x[jvj+37]=t[x[jvj+37]];
goto l6;
l9:x[jvj+16]=s[x[jvj+1]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+1];
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=278)) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+16,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=25)) goto l10;
x[jvj+22]=d[20];z[jvj+22]=0;
l11:if((x[jvj+22]<=0)) goto l10;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+23,jvj+19,jvj+24)*/
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=654)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+24,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+27,V50)*/
V50=pile[WZ2]; 
if((V!=V50)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+23,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+19; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+28,jvj+19,jvj+29)*/
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=651)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+24; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+24,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=21)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+29,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=R; pile[WZ2]=RR; 
(*f[535])( );     /*ALLURE0(jvj+34,R,RR)*/
goto l13;
l10:x[jvj+1]=t[x[jvj+1]];
l8:if((x[jvj+1]>0)) goto l9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+35)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+35; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+35,RR)*/
goto l13;
l12:x[jvj+22]=t[x[jvj+22]];
goto l11;
}
