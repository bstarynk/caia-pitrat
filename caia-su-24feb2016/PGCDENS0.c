#include "dx.h"
void PGCDENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,V8=0,Q=0,V9=0,V1=0,T=0,V10=0,I=0,V11=0,J=0,V12=0,RR=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
for(i=x[A],V1=0;i>0;i=t[i],V1++)  ;
if((V1==1)) goto l4;
if((V1==2)) goto l6;
if((V1<=2)) goto l10;
V8=x[A];
if((V8<=0)) goto l10;
S=s[V8];
x[jvj+1]=0 ;z[jvj+1]=0;
V9=x[A];
l1:if((V9>0)) goto l2;
pile[v[22]]=jvj+1; 
(*f[2027])( );if(v[102]) goto l10;     /*PGCDENS0(jvj+1,RR)*/
RR=pile[WZ1]; 
pile[v[22]]=RR; pile[WZ1]=S; 
(*f[1011])( );     /*PGCD0(RR,S,R)*/
R=pile[WZ2]; 
l11:v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:Q=s[V9];
if((Q==S)) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=Q; 
(*f[207])( );     /*PLUE2(jvj+1,Q)*/
l3:V9=t[V9];
goto l1;
l4:V10=x[A];
if((V10<=0)) goto l10;
T=s[V10];
R=T;
goto l11;
l6:V11=x[A];
l5:if((V11<=0)) goto l10;
I=s[V11];
V12=x[A];
l7:if((V12>0)) goto l8;
V11=t[V11];
goto l5;
l8:J=s[V12];
if((I!=J)) goto l9;
V12=t[V12];
goto l7;
l9:pile[v[22]]=J; pile[WZ1]=I; 
(*f[1011])( );     /*PGCD0(J,I,R)*/
R=pile[WZ2]; 
goto l11;
l10:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
