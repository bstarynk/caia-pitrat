#include "dx.h"
void EXPRES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V1=0,V6=0,V5=0,V7=0,N=0,HH=0,V9=0,V12=0,NN=0;
int H,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11500;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==551&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,D,jvj+3)*/
l1:V1=incon;
pile[v[22]]=117; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,H,L)*/
L=pile[WZ2]; 
V1=L;
l4:v[93]=V1;
x[jvj+4]=incon;
pile[v[22]]=449; pile[WZ1]=H; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(449,H,jvj+2)*/
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
l5:pile[v[22]]=1447; pile[WZ1]=1458; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(1447,1458,jvj+4)*/
if(x[jvj+3]!=incon) goto l6;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V1=100000;
goto l4;
l3:x[jvj+4]=250 ;z[jvj+4]=250;
goto l5;
l6:pile[v[22]]=905; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(905,jvj+3,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(645,597,jvj+5)*/
l7:if((x[jvj+5]<=0)) goto l11;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=905; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(905,jvj+6,V5)*/
V5=pile[WZ2]; 
if((V5!=V6)) goto l8;
pile[v[22]]=1418; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1418,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l8;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+6,V7)*/
V7=pile[WZ2]; 
N=V7;
V9=incon;
pile[v[22]]=936; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(936,H,HH)*/
HH=pile[WZ2]; 
V9=HH;
l12:pile[v[22]]=V9; pile[WZ1]=936; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(V9,936,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=1440; pile[WZ2]=860; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,1440,860,jvj+11)*/
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=683; pile[WZ3]=N; pile[WZ4]=jvj+11; pile[WZ5]=jvj+8; 
(*f[47])( );     /*QUADRI0(109,jvj+3,683,N,jvj+11,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=1440; 
(*f[793])( );if(v[102]) goto l13;     /*AJNUM1(jvj+8,1440,NN)*/
NN=pile[WZ2]; 
pile[v[22]]=163; pile[WZ1]=D; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,D,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=163; pile[WZ2]=V12; 
(*f[177])( );     /*CHGC4(jvj+8,163,V12)*/
l10:pile[v[22]]=jvj+8; 
(*f[429])( );     /*NOUVSAUVE0(jvj+8)*/
l13:pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+8; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[605])( );     /*MONITEUR0(jvj+9)*/
v[93]=0;
pile[v[22]]=1458; pile[WZ1]=1447; 
(*f[71])( );     /*ENLV0(1458,1447)*/
goto l11;
l8:x[jvj+5]=t[x[jvj+5]];
goto l7;
l9:pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1268,936,V9)*/
V9=pile[WZ2]; 
goto l12;
}
