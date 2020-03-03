#include "dx.h"
void SORCHEMIN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V6=0,V14=0,V10=0;
int N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[N] ;z[jvj+1]=z[N];
l1:pile[v[22]]=jvj+1; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+1,191,68)*/
pile[v[22]]=498; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,jvj+1,jvj+2)*/
x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
goto l1;
l2:V6=0;
V14=V6;
x[jvj+3]=x[jvj+1] ;z[jvj+3]=z[jvj+1];
l3:pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+4)*/
l4:if((x[jvj+4]>0)) goto l5;
J=V14;
pile[v[22]]=J; 
(*f[40])( );     /*SLG0(J)*/
v[0]=jvj; v[22]-=1; return;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=191; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(191,jvj+5,jvj+6)*/
if((x[jvj+6]!=68)) goto l6;
pile[v[22]]=V14; pile[WZ2]=250; 
(*f[1200])( );     /*SORARC0(V14,jvj+5,250,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+5)*/
x[jvj+3]=x[jvj+5] ;z[jvj+3]=z[jvj+5];
V14=V10;
goto l3;
l6:x[jvj+4]=t[x[jvj+4]];
goto l4;
}
