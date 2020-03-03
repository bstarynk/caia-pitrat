#include "dx.h"
void COPEXPO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V22=0,V12=0,V24=0;
int A,E;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=26;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; E=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,A,jvj+4)*/
x[jvj+22]=incon;
if((x[jvj+4]!=484)) goto l4;
x[jvj+21]=x[E] ;z[jvj+21]=z[E];
l1:if((x[jvj+21]<=0)) goto l4;
x[jvj+1]=s[x[jvj+21]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+21];
pile[v[22]]=218; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+1,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[760])( );     /*MEMEX0(jvj+2,A,jvj+3)*/
if((x[jvj+3]==135)) goto l3;
l2:x[jvj+21]=t[x[jvj+21]];
goto l1;
l3:x[jvj+22]=41 ;z[jvj+22]=41;
l5:x[jvj+20]=x[jvj+22] ;z[jvj+20]=z[jvj+22];
if((x[jvj+20]==484)) goto l6;
if((x[jvj+20]!=22)) goto l21;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=52)) goto l21;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,A,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=E; pile[WZ2]=R; 
(*f[4075])( );if(v[102]) goto l21;     /*COPEXPO0(jvj+7,E,R)*/
l20:v[0]=jvj; v[22]-=3; v[102]=0;return;
l4:x[jvj+22]=x[jvj+4] ;z[jvj+22]=z[jvj+4];
goto l5;
l6:pile[v[22]]=A; pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(A,R)*/
goto l20;
l9:pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+8,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=130; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(R,130,V16)*/
goto l20;
l10:if((x[jvj+11]=w[x[jvj+20]][3])==incon) goto l11;
pile[v[22]]=A; pile[WZ1]=jvj+11; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(A,jvj+11,V22,jvj+12)*/
V22=pile[WZ2]; 
V12=V22;
V24=V12;
pile[v[22]]=R; pile[WZ2]=V24; 
(*f[43])( );     /*CHGC2(R,jvj+11,V24)*/
l11:x[jvj+24]=w[x[jvj+20]][9];
l12:if((x[jvj+24]>0)) goto l13;
x[jvj+25]=w[x[jvj+20]][8];
l15:if((x[jvj+25]<=0)) goto l20;
x[jvj+16]=s[x[jvj+25]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+25];
pile[v[22]]=jvj+16; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,A,jvj+17)*/
x[jvj+26]=x[jvj+17] ;z[jvj+26]=z[jvj+17];
l16:if((x[jvj+26]>0)) goto l17;
x[jvj+25]=t[x[jvj+25]];
goto l15;
l13:x[jvj+13]=s[x[jvj+24]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+24];
pile[v[22]]=jvj+13; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+13,A,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=E; pile[WZ2]=jvj+15; 
(*f[4075])( );if(v[102]) goto l14;     /*COPEXPO0(jvj+14,E,jvj+15)*/
pile[v[22]]=R; pile[WZ1]=jvj+13; 
(*f[35])( );     /*CHGC1(R,jvj+13,jvj+15)*/
l14:x[jvj+24]=t[x[jvj+24]];
goto l12;
l17:x[jvj+18]=s[x[jvj+26]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+26];
pile[v[22]]=jvj+18; pile[WZ1]=E; pile[WZ2]=jvj+19; 
(*f[4075])( );if(v[102]) goto l18;     /*COPEXPO0(jvj+18,E,jvj+19)*/
pile[v[22]]=R; pile[WZ1]=jvj+16; 
(*f[36])( );     /*PLUSC0(R,jvj+16,jvj+19)*/
l18:x[jvj+26]=t[x[jvj+26]];
goto l16;
l19:v[0]=jvj; v[22]-=3; v[102]=1;return;
l21:pile[v[22]]=jvj+20; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(jvj+20,100,R)*/
if((x[jvj+20]!=41)) goto l10;
x[jvj+23]=x[E] ;z[jvj+23]=z[E];
l7:if((x[jvj+23]<=0)) goto l10;
x[jvj+8]=s[x[jvj+23]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+23];
pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(jvj+9,A,jvj+10)*/
if((x[jvj+10]==135)) goto l9;
l8:x[jvj+23]=t[x[jvj+23]];
goto l7;
}
