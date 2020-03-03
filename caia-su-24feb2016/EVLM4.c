#include "dx.h"
void EVLM4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,V24=0,RES=0;
int R,X;
int RK;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; X=pile[v[22]+1]; RK=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RK]=incon;
v[45]=0;
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=48)) goto l5;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,X,jvj+3)*/
x[jvj+4]=d[205];z[jvj+4]=0;
l1:if((x[jvj+3]<=0)) goto l5;
x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l2;
x[jvj+8]=d[20];z[jvj+8]=0;
l3:if((x[jvj+8]<=0)) goto l2;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,jvj+5,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+9,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+12,jvj+5,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+13,jvj+14)*/
if(x[jvj+14]!=96&&x[jvj+14]!=89&&x[jvj+14]!=41&&x[jvj+14]!=20&&x[jvj+14]!=128&&x[jvj+14]!=570&&x[jvj+14]!=1317) goto l4;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+15; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+10,jvj+15)*/
pile[v[22]]=274; pile[WZ2]=319; pile[WZ3]=jvj+13; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(274,jvj+15,319,jvj+13,jvj+16)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+16,jvj+17)*/
l4:x[jvj+8]=t[x[jvj+8]];
goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=jvj+18; pile[WZ1]=258; pile[WZ2]=jvj+17; 
(*f[34])( );     /*CHGC0(jvj+18,258,jvj+17)*/
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=R; pile[WZ1]=jvj+19; 
(*f[30])( );if(v[102]) goto l8;     /*EVL0(R,jvj+19,RS)*/
RS=pile[WZ2]; 
V24=incon;
if((v[45]!=0)) goto l6;
V24=RS;
l7:RES=V24;
v[45]=0;
x[jvj+21]=RES ;z[jvj+21]=(RES<=sepcte) ? RES : 0;
x[RK]=x[jvj+21] ;z[RK]=z[jvj+21];
l8:x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+20; 
(*f[71])( );     /*ENLV0(258,jvj+20)*/
if(x[RK]!=incon) goto l9;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l6:V24=178;
goto l7;
l9:v[0]=jvj; v[22]-=3; v[102]=0;return;
}
