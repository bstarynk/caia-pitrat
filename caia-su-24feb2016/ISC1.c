#include "dx.h"
void ISC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V37=0,V20=0,V22=0,V2=0,V11=0;
int V,X,T,K;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; X=pile[v[22]+1]; T=pile[v[22]+2]; K=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[X] ;z[jvj+1]=z[X];
l14:x[jvj+16]=incon;
pile[v[22]]=jvj+1; pile[WZ1]=220; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(jvj+1,220,K)*/
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==435)) goto l1;
if((x[jvj+3]!=39)) goto l8;
pile[v[22]]=113; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(113,jvj+2,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=114; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(114,jvj+2,jvj+8)*/
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+2,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+9,jvj+10)*/
if(x[jvj+10]==10102||x[jvj+10]==10490||x[jvj+10]==10672||x[jvj+10]==10275||x[jvj+10]==10212) goto l6;
l8:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+1,jvj+17)*/
pile[v[22]]=V; pile[WZ1]=jvj+17; pile[WZ2]=jvj+1; pile[WZ3]=T; 
(*f[2004])( );     /*ISD0(V,jvj+17,jvj+1,T)*/
l9:if(x[jvj+16]==incon) goto l10;
l13:v[0]=jvj; v[22]-=4; return;
l1:pile[v[22]]=436; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+4,V9)*/
V9=pile[WZ2]; 
if((V==V9)) goto l2;
goto l8;
l2:x[jvj+16]=68 ;z[jvj+16]=68;
pile[v[22]]=T; pile[WZ1]=144; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(T,144,jvj+16)*/
goto l8;
l4:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V37)*/
V37=pile[WZ2]; 
if((V==V37)) goto l2;
l5:x[jvj+5]=t[x[jvj+5]];
goto l3;
l10:pile[v[22]]=135; pile[WZ1]=jvj+1; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(135,jvj+1,jvj+14)*/
pile[v[22]]=220; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(220,jvj+14,V2)*/
V2=pile[WZ2]; 
if((V2==K)) goto l12;
l11:pile[v[22]]=V; pile[WZ1]=jvj+14; pile[WZ2]=T; pile[WZ3]=K; 
(*f[2005])( );     /*ISC1(V,jvj+14,T,K)*/
l12:pile[v[22]]=134; pile[WZ1]=jvj+1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(134,jvj+1,jvj+15)*/
pile[v[22]]=220; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(220,jvj+15,V11)*/
V11=pile[WZ2]; 
if((V11==K)) goto l13;
l15:x[jvj+1]=x[jvj+15] ;z[jvj+1]=z[jvj+15];
goto l14;
l6:if((x[jvj+8]<=0)) goto l8;
x[jvj+11]=s[x[jvj+8]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+8];
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+11,jvj+12)*/
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+12,V20)*/
V20=pile[WZ2]; 
if((V!=V20)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+11,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+13,V22)*/
V22=pile[WZ2]; 
if((V22==(-697))) goto l2;
l7:x[jvj+8]=t[x[jvj+8]];
goto l6;
}
