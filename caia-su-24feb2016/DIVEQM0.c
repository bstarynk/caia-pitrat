#include "dx.h"
void DIVEQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int KK=0,K=0,V7=0,V11=0,L=0,V18=0,V23=0,Q=0,V28=0;
int X,Y,P;
int XX,YY,PP;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; P=pile[v[22]+2]; XX=pile[v[22]+3]; YY=pile[v[22]+4]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
K=L=incon;
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,X,KK)*/
KK=pile[WZ2]; 
K=KK;
l4:pile[v[22]]=130; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,Y,V11)*/
V11=pile[WZ2]; 
L=V11;
l8:if(K!=incon) goto l9;
l12:x[XX]=x[YY]=PP=incon;
v[0]=jvj; v[22]-=6; v[102]=1;return;
l1:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,X,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l4;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V7)*/
V7=pile[WZ2]; 
K=V7;
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,Y,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,Y,jvj+7)*/
l6:if((x[jvj+7]<=0)) goto l8;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+8,V18)*/
V18=pile[WZ2]; 
L=V18;
goto l8;
l7:x[jvj+7]=t[x[jvj+7]];
goto l6;
l9:if(L!=incon) goto l10;
goto l12;
l10:pile[v[22]]=P; pile[WZ1]=L; 
(*f[1011])( );     /*PGCD0(P,L,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=K; 
(*f[1011])( );     /*PGCD0(V23,K,Q)*/
Q=pile[WZ2]; 
if((Q==1)) goto l11;
if((Q<=1)) goto l12;
pile[v[22]]=X; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(X,jvj+9)*/
pile[v[22]]=Y; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(Y,jvj+10)*/
V28=P/Q;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Q; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,Q,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+14; pile[WZ5]=XX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+14,XX)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=Q; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,Q,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+18; pile[WZ5]=YY; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+18,YY)*/
PP=V28;
l13:v[0]=jvj; v[22]-=6; pile[v[22]+5]=PP; v[102]=0;return;
l11:x[XX]=x[X] ;z[XX]=z[X];
x[YY]=x[Y] ;z[YY]=z[Y];
PP=P;
goto l13;
}
