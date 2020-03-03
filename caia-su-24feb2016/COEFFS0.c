#include "dx.h"
void COEFFS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,K=0,V16=0,L=0,M=0,V31=0,V27=0,V23=0,V40=0,V34=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,A,M)*/
M=pile[WZ2]; 
if((M!=1)) goto l8;
l5:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,A,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=486)) goto l3;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,A,jvj+11)*/
l6:if((x[jvj+11]<=0)) goto l3;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+12,V16)*/
V16=pile[WZ2]; 
L=V16;
if((L!=1)) goto l8;
l7:x[jvj+11]=t[x[jvj+11]];
goto l6;
l2:x[jvj+23]=t[x[jvj+23]];
l1:if((x[jvj+23]<=0)) goto l17;
x[jvj+5]=s[x[jvj+23]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+23];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+5,V6)*/
V6=pile[WZ2]; 
K=V6;
if((K==1)) goto l2;
x[jvj+8]=t[x[jvj+8]];
l4:if((x[jvj+8]<=0)) goto l8;
x[jvj+1]=s[x[jvj+8]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+4)*/
x[jvj+23]=x[jvj+4] ;z[jvj+23]=z[jvj+4];
goto l1;
l3:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=485)) goto l8;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,A,jvj+8)*/
goto l4;
l8:x[jvj+24]=0 ;z[jvj+24]=0;
x[R]=x[jvj+24] ;z[R]=z[jvj+24];
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,A,V31)*/
V31=pile[WZ2]; 
if((V31==1)) goto l9;
pile[v[22]]=R; pile[WZ1]=V31; 
(*f[207])( );     /*PLUE2(R,V31)*/
l9:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==486)) goto l10;
if((x[jvj+14]!=485)) goto l18;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,A,jvj+17)*/
l13:if((x[jvj+17]<=0)) goto l18;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=486)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
x[jvj+25]=x[jvj+21] ;z[jvj+25]=z[jvj+21];
l15:if((x[jvj+25]<=0)) goto l14;
x[jvj+22]=s[x[jvj+25]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+25];
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+22,V40)*/
V40=pile[WZ2]; 
V34=V40;
if((V34==1)) goto l16;
pile[v[22]]=R; pile[WZ1]=V34; 
(*f[207])( );     /*PLUE2(R,V34)*/
l16:x[jvj+25]=t[x[jvj+25]];
goto l15;
l10:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,A,jvj+15)*/
l11:if((x[jvj+15]<=0)) goto l18;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+16,V27)*/
V27=pile[WZ2]; 
V23=V27;
if((V23==1)) goto l12;
pile[v[22]]=R; pile[WZ1]=V23; 
(*f[207])( );     /*PLUE2(R,V23)*/
l12:x[jvj+15]=t[x[jvj+15]];
goto l11;
l14:x[jvj+17]=t[x[jvj+17]];
goto l13;
l17:v[0]=jvj; v[22]-=2; v[102]=1;return;
l18:v[0]=jvj; v[22]-=2; v[102]=0;return;
}
