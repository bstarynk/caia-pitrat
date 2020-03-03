#include "dx.h"
void PROCEDURALITHEN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int X,AT,N,P;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11689;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1241&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; AT=pile[v[22]+1]; N=pile[v[22]+2]; P=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,X,V4)*/
V4=pile[WZ2]; 
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
pile[v[22]]=1687; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1687,jvj+2,jvj+3)*/
if((x[jvj+3]==0)) goto l1;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V4; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(100,21,140,V4,jvj+5)*/
pile[WZ4]=jvj+6; 
(*f[270])( );     /*QUADRI7(100,21,140,V4,jvj+6)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=N; pile[WZ3]=jvj+5; pile[WZ4]=1688; pile[WZ5]=P; pile[v[22]+6]=jvj+6; pile[v[22]+7]=jvj+7; 
(*f[1510])( );     /*PROCEDURALISA1(jvj+3,jvj+4,N,jvj+5,1688,P,jvj+6,jvj+7)*/
x[RES]=68 ;z[RES]=68;
pile[v[22]]=P; pile[WZ1]=AT; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(P,AT,jvj+7)*/
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
