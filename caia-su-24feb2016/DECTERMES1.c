#include "dx.h"
void DECTERMES1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[R] ;z[jvj+2]=z[R];
l2:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==485)) goto l3;
if((x[jvj+4]!=52)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+2,jvj+6)*/
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
goto l2;
l3:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l5;
x[jvj+1]=s[x[jvj+5]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+5];
pile[v[22]]=jvj+1; pile[WZ1]=E; 
(*f[2053])( );     /*DECTERMES1(jvj+1,E)*/
x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:pile[v[22]]=E; pile[WZ1]=jvj+2; 
(*f[522])( );     /*PLUB2(E,jvj+2)*/
l5:v[0]=jvj; v[22]-=2; return;
}
