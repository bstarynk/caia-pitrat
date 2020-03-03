#include "dx.h"
void CRINTERDITA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V4=0;
int X,B,S;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; B=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[S] ;z[jvj+1]=z[S];
x[jvj+2]=x[B] ;z[jvj+2]=z[B];
l1:pile[v[22]]=280; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(280,X,V1)*/
V1=pile[WZ2]; 
pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(280,jvj+1,V2)*/
V2=pile[WZ2]; 
if((V1>=V2)) goto l2;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+2,jvj+3)*/
pile[v[22]]=164; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(164,X,V4)*/
V4=pile[WZ2]; 
pile[WZ1]=V4; pile[WZ2]=280; pile[WZ3]=V1; pile[WZ4]=jvj+4; 
(*f[391])( );     /*QUADRI10(164,V4,280,V1,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=120; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+4,120,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+2,120,jvj+4)*/
l3:v[0]=jvj; v[22]-=3; return;
l2:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+1,jvj+5)*/
x[jvj+2]=x[jvj+1] ;z[jvj+2]=z[jvj+1];
x[jvj+1]=x[jvj+5] ;z[jvj+1]=z[jvj+5];
goto l1;
}
