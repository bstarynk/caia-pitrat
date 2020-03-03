#include "dx.h"
void NUMEROTENS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V2=0,V3=0,V5=0,V8=0;
int I,E,AT,P;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; E=pile[v[22]+1]; AT=pile[v[22]+2]; P=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V8=x[E];
V7=I;
l1:if((V8!=0)) goto l2;
R=V7;
v[0]=jvj; v[22]-=5; pile[v[22]+4]=R; return;
l2:V2=s[V8];
x[jvj+1]=V2 ;z[jvj+1]=(V2<=sepcte) ? V2 : 0;
V3=V7+1;
V5=t[V8];
if((x[P]==129)) goto l4;
if((x[P]!=67)) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=AT; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+1,AT,V7)*/
l3:V7=V3;
V8=V5;
goto l1;
l4:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+2; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=AT; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+1,AT,jvj+2)*/
goto l3;
}
