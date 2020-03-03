#include "dx.h"
void AJANT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int YY,X,F;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

YY=pile[v[22]]; X=pile[v[22]+1]; F=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V4=x[X];
pile[v[22]]=107; pile[WZ1]=F; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(107,F,V4)*/
pile[WZ1]=YY; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,YY,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=X; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(X,jvj+4)*/
pile[v[22]]=YY; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(YY,107,jvj+4)*/
l3:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=jvj+2; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[760])( );     /*MEMEX0(jvj+2,X,jvj+3)*/
if((x[jvj+3]==135)) goto l3;
x[jvj+1]=t[x[jvj+1]];
goto l1;
}
