#include "dx.h"
void COUPENS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V7=0,V6=0,V8=0,V4=0,V5=0,V9=0,V10=0;
int BB,B,R,S,X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

BB=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; S=pile[v[22]+3]; X=pile[v[22]+4]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[S] ;z[jvj+1]=z[S];
V10=X;
V9=BB;
l1:if((V10<=0)) goto l5;
V2=s[V10];
x[jvj+5]=V2 ;z[jvj+5]=(V2<=sepcte) ? V2 : 0;
x[jvj+2]=x[jvj+5] ;z[jvj+2]=z[jvj+5];
if((V9<B)) goto l2;
if((V9!=B)) goto l5;
V4=B-1;
V5=t[V10];
pile[v[22]]=20; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[409])( );     /*TRI14(20,jvj+2,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=128; pile[WZ2]=jvj+4; 
(*f[300])( );     /*TRI10(jvj+3,128,jvj+4)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(R,jvj+4)*/
V9=V4;
x[jvj+1]=x[jvj+4] ;z[jvj+1]=z[jvj+4];
V10=V5;
goto l1;
l2:V6=incon;
V7=V9-1;
if((V7>0)) goto l3;
V6=B;
l4:V8=t[V10];
pile[v[22]]=jvj+1; pile[WZ1]=128; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,128,jvj+2)*/
V9=V6;
V10=V8;
goto l1;
l3:V6=V7;
goto l4;
l5:v[0]=jvj; v[22]-=5; return;
}
