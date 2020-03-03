#include "dx.h"
void DECOMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V4=0,V7=0,K=0,V22=0,NN=0,V31=0;
int Y,H;
int X,N;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; H=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,Y,V32)*/
V32=pile[WZ2]; 
N=V32;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=X; 
(*f[192])( );     /*QUADRI4(100,41,130,1,X)*/
l13:v[0]=jvj; v[22]-=4; pile[v[22]+3]=N; return;
l3:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,Y,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==486)) goto l4;
if((x[jvj+6]!=52)) goto l12;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,Y,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=H; pile[WZ2]=X; 
(*f[1667])( );     /*DECOMP0(jvj+12,H,X,NN)*/
NN=pile[WZ3]; 
V31=(-NN);
N=V31;
goto l13;
l4:pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,Y,jvj+7)*/
for(i=x[jvj+7],V4=0;i>0;i=t[i],V4++)  ;
if((V4==2)) goto l6;
if((V4<=2)) goto l12;
x[jvj+22]=x[jvj+7] ;z[jvj+22]=z[jvj+7];
l10:if((x[jvj+22]<=0)) goto l12;
x[jvj+9]=s[x[jvj+22]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+22];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+9,V22)*/
V22=pile[WZ2]; 
x[jvj+23]=x[jvj+7] ;z[jvj+23]=z[jvj+7];
l14:if((x[jvj+23]>0)) goto l15;
l11:x[jvj+22]=t[x[jvj+22]];
goto l10;
l6:x[jvj+20]=x[jvj+7] ;z[jvj+20]=z[jvj+7];
l5:if((x[jvj+20]<=0)) goto l12;
x[jvj+8]=s[x[jvj+20]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+20];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+8,V7)*/
V7=pile[WZ2]; 
K=V7;
x[jvj+21]=x[jvj+7] ;z[jvj+21]=z[jvj+7];
l8:if((x[jvj+21]<=0)) goto l7;
x[jvj+1]=s[x[jvj+21]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+21];
if((x[jvj+8]!=x[jvj+1])) goto l9;
x[jvj+21]=t[x[jvj+21]];
goto l8;
l7:x[jvj+20]=t[x[jvj+20]];
goto l5;
l9:x[X]=x[jvj+1] ;z[X]=z[jvj+1];
N=K;
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=41)) goto l13;
pile[v[22]]=H; pile[WZ1]=459; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(H,459,68)*/
goto l13;
l12:x[X]=x[Y] ;z[X]=z[Y];
N=1;
goto l13;
l15:x[jvj+16]=s[x[jvj+23]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+23];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+9; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+16,jvj+9,jvj+17)*/
if((x[jvj+17]==135)) goto l16;
x[jvj+23]=t[x[jvj+23]];
goto l14;
l16:x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+24]=x[jvj+7] ;z[jvj+24]=z[jvj+7];
l17:if((x[jvj+24]>0)) goto l18;
x[jvj+10]=x[jvj+18] ;z[jvj+10]=z[jvj+18];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+11; pile[WZ2]=107; pile[WZ3]=jvj+15; 
(*f[301])( );     /*TRI11(jvj+14,jvj+11,107,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=X; 
(*f[58])( );     /*TRI3(jvj+15,22,100,X)*/
N=V22;
l1:if((x[jvj+7]<=0)) goto l13;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
if((x[jvj+3]==x[jvj+9])) goto l2;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=41)) goto l2;
pile[v[22]]=H; pile[WZ1]=459; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(H,459,68)*/
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l18:x[jvj+19]=s[x[jvj+24]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+24];
if((x[jvj+19]==x[jvj+16])) goto l19;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+19)*/
l19:x[jvj+24]=t[x[jvj+24]];
goto l17;
}
