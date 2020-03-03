#include "dx.h"
void AJTYPE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AA=0,V10=0;
int T,A,V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; A=pile[v[22]+1]; V=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,T,jvj+1)*/
pile[v[22]]=108; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(108,jvj+1,jvj+2)*/
AA=x[A];
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=A; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,A,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=103; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+11,jvj+10,jvj+8)*/
pile[v[22]]=jvj+1; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+1,108,jvj+8)*/
l4:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=108)) goto l3;
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+3,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V10)*/
V10=pile[WZ2]; 
if((V!=V10)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((AA==x[jvj+7])) goto l4;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
}
