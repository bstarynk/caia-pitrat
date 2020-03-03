#include "dx.h"
void ISC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V9=0,V37=0,V20=0,V22=0,V2=0,V11=0;
int X,V;
int T;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; V=pile[v[22]+1]; T=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=incon;
(*f[2003])( );     /*INC0(K)*/
K=pile[v[22]]; 
pile[v[22]]=X; pile[WZ1]=220; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(X,220,K)*/
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=T; 
(*f[54])( );     /*TRI1(216,158,T)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]==435)) goto l1;
if((x[jvj+2]!=39)) goto l8;
pile[v[22]]=113; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(113,jvj+1,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=114; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(114,jvj+1,jvj+7)*/
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+1,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]==10102||x[jvj+9]==10490||x[jvj+9]==10672||x[jvj+9]==10275||x[jvj+9]==10212) goto l6;
l8:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,X,jvj+16)*/
pile[v[22]]=V; pile[WZ1]=jvj+16; pile[WZ2]=X; pile[WZ3]=T; 
(*f[2004])( );     /*ISD0(V,jvj+16,X,T)*/
l9:if(x[jvj+15]==incon) goto l10;
l14:v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=436; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+1,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+3,V9)*/
V9=pile[WZ2]; 
if((V==V9)) goto l2;
goto l8;
l2:x[jvj+15]=68 ;z[jvj+15]=68;
pile[v[22]]=T; pile[WZ1]=144; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(T,144,jvj+15)*/
goto l8;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+6,V37)*/
V37=pile[WZ2]; 
if((V==V37)) goto l2;
l5:x[jvj+4]=t[x[jvj+4]];
goto l3;
l10:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(135,X,jvj+13)*/
pile[v[22]]=220; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(220,jvj+13,V2)*/
V2=pile[WZ2]; 
if((V2==K)) goto l12;
l11:pile[v[22]]=V; pile[WZ1]=jvj+13; pile[WZ2]=T; pile[WZ3]=K; 
(*f[2005])( );     /*ISC1(V,jvj+13,T,K)*/
l12:pile[v[22]]=134; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(134,X,jvj+14)*/
pile[v[22]]=220; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(220,jvj+14,V11)*/
V11=pile[WZ2]; 
if((V11==K)) goto l14;
l13:pile[v[22]]=V; pile[WZ1]=jvj+14; pile[WZ2]=T; pile[WZ3]=K; 
(*f[2005])( );     /*ISC1(V,jvj+14,T,K)*/
goto l14;
l6:if((x[jvj+7]<=0)) goto l8;
x[jvj+10]=s[x[jvj+7]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+7];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+10,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+11,V20)*/
V20=pile[WZ2]; 
if((V!=V20)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+10,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+12,V22)*/
V22=pile[WZ2]; 
if((V22==(-697))) goto l2;
l7:x[jvj+7]=t[x[jvj+7]];
goto l6;
}
