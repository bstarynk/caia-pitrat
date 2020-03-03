#include "dx.h"
void REDUIT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V3=0,V11=0,V15=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,A,K)*/
K=pile[WZ2]; 
V3=K/B;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,R)*/
l9:v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+10]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+10];
pile[v[22]]=B; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[1461])( );if(v[102]) goto l3;     /*REDUIT0(B,jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
l3:x[jvj+10]=t[x[jvj+10]];
l1:if((x[jvj+10]>0)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+11; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+11; pile[WZ2]=107; pile[WZ3]=jvj+16; 
(*f[301])( );     /*TRI11(jvj+15,jvj+11,107,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+16,22,100,R)*/
goto l9;
l4:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==486)) goto l5;
if((x[jvj+5]!=485)) goto l8;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,A,jvj+10)*/
x[jvj+3]=0 ;z[jvj+3]=0;
goto l1;
l5:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,A,jvj+6)*/
x[jvj+21]=x[jvj+6] ;z[jvj+21]=z[jvj+6];
l6:if((x[jvj+21]<=0)) goto l8;
x[jvj+7]=s[x[jvj+21]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+21];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V11)*/
V11=pile[WZ2]; 
x[jvj+22]=x[jvj+6] ;z[jvj+22]=z[jvj+6];
l10:if((x[jvj+22]>0)) goto l11;
l7:x[jvj+21]=t[x[jvj+21]];
goto l6;
l8:v[0]=jvj; v[22]-=3; v[102]=1;return;
l11:x[jvj+17]=s[x[jvj+22]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+22];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+7; pile[WZ2]=jvj+18; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+7,jvj+18)*/
if((x[jvj+18]==135)) goto l12;
x[jvj+22]=t[x[jvj+22]];
goto l10;
l12:x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+23]=x[jvj+6] ;z[jvj+23]=z[jvj+6];
l13:if((x[jvj+23]>0)) goto l14;
x[jvj+8]=x[jvj+19] ;z[jvj+8]=z[jvj+19];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+8,jvj+9)*/
V15=V11/B;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+13)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,R)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(R,107,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+9,R,107)*/
goto l9;
l14:x[jvj+20]=s[x[jvj+23]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+23];
if((x[jvj+20]==x[jvj+17])) goto l15;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+20)*/
l15:x[jvj+23]=t[x[jvj+23]];
goto l13;
}
