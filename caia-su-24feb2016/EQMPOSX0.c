#include "dx.h"
void EQMPOSX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,K=0,V37=0,V29=0,V14=0,V8=0,V52=0,V42=0,V68=0,V60=0,V21=0;
int A,E,EE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; E=pile[v[22]+1]; EE=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]==486)) goto l1;
if((x[jvj+2]==485)) goto l5;
if((x[jvj+2]!=596)) goto l12;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,A,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+18,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=E; pile[WZ1]=V21; 
(*f[207])( );     /*PLUE2(E,V21)*/
pile[v[22]]=EE; 
(*f[207])( );     /*PLUE2(EE,V21)*/
l12:v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,A,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l12;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+4,V4)*/
V4=pile[WZ2]; 
K=V4;
pile[v[22]]=E; pile[WZ1]=K; 
(*f[207])( );     /*PLUE2(E,K)*/
l4:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=596)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+7,V37)*/
V37=pile[WZ2]; 
V29=V37;
pile[v[22]]=E; pile[WZ1]=V29; 
(*f[207])( );     /*PLUE2(E,V29)*/
pile[v[22]]=EE; 
(*f[207])( );     /*PLUE2(EE,V29)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,A,jvj+8)*/
l6:if((x[jvj+8]<=0)) goto l12;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==486)) goto l8;
if((x[jvj+11]!=596)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+9,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+17,V68)*/
V68=pile[WZ2]; 
V60=V68;
pile[v[22]]=E; pile[WZ1]=V60; 
(*f[207])( );     /*PLUE2(E,V60)*/
pile[v[22]]=EE; 
(*f[207])( );     /*PLUE2(EE,V60)*/
l7:x[jvj+8]=t[x[jvj+8]];
goto l6;
l8:pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
x[jvj+19]=x[jvj+12] ;z[jvj+19]=z[jvj+12];
l9:if((x[jvj+19]<=0)) goto l7;
x[jvj+13]=s[x[jvj+19]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+19];
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+13,V14)*/
V14=pile[WZ2]; 
V8=V14;
pile[v[22]]=E; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(E,V8)*/
l11:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=596)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+13,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+16,V52)*/
V52=pile[WZ2]; 
V42=V52;
pile[v[22]]=E; pile[WZ1]=V42; 
(*f[207])( );     /*PLUE2(E,V42)*/
pile[v[22]]=EE; 
(*f[207])( );     /*PLUE2(EE,V42)*/
l10:x[jvj+19]=t[x[jvj+19]];
goto l9;
}
