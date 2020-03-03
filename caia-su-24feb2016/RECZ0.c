#include "dx.h"
void RECZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int AT,X,Y;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=AT; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(AT,X,jvj+2)*/
pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=122; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(122,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[AT])) goto l2;
pile[v[22]]=161; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(161,jvj+4,jvj+6)*/
if((x[jvj+6]!=x[X])) goto l2;
V13=x[jvj+4];
pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=V13; 
(*f[134])( );     /*OTA0(248,jvj+2,V13)*/
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:pile[v[22]]=AT; pile[WZ1]=X; 
(*f[71])( );     /*ENLV0(AT,X)*/
pile[v[22]]=X; pile[WZ1]=AT; pile[WZ2]=Y; 
(*f[35])( );     /*CHGC1(X,AT,Y)*/
pile[v[22]]=122; pile[WZ2]=161; pile[WZ3]=X; pile[WZ4]=jvj+1; 
(*f[181])( );     /*QUADRI2(122,AT,161,X,jvj+1)*/
pile[v[22]]=Y; pile[WZ1]=248; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(Y,248,jvj+1)*/
v[0]=jvj; v[22]-=3; return;
}
