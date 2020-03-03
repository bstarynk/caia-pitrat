#include "dx.h"
void PGCDEN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int XX=0,V10=0,X=0,V4=0,V11=0,V1=0,Y=0,V12=0,V6=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V10=x[A];
if((V10<=0)) goto l1;
XX=s[V10];
X=XX;
if((X==1)) goto l1;
if((X==0)) goto l1;
for(i=x[A],V1=0;i>0;i=t[i],V1++)  ;
if((V1==1)) goto l5;
if((V1==2)) goto l7;
if((V1<=2)) goto l1;
x[jvj+1]=0 ;z[jvj+1]=0;
V11=x[A];
l2:if((V11>0)) goto l3;
pile[v[22]]=jvj+1; 
(*f[1000])( );     /*PGCDEN0(jvj+1,V6)*/
V6=pile[WZ1]; 
pile[v[22]]=V6; pile[WZ1]=X; 
(*f[1011])( );     /*PGCD0(V6,X,R)*/
R=pile[WZ2]; 
l9:v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; return;
l1:R=1;
goto l9;
l3:V4=s[V11];
if((V4==X)) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=V4; 
(*f[207])( );     /*PLUE2(jvj+1,V4)*/
l4:V11=t[V11];
goto l2;
l5:R=X;
goto l9;
l7:V12=x[A];
l6:if((V12<=0)) goto l1;
Y=s[V12];
if((Y!=X)) goto l8;
V12=t[V12];
goto l6;
l8:pile[v[22]]=Y; pile[WZ1]=X; 
(*f[1011])( );     /*PGCD0(Y,X,R)*/
R=pile[WZ2]; 
goto l9;
}
