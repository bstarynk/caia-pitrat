#include "dx.h"
void TROUVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V6=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10279;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3105&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,A,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=498; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,A,jvj+4)*/
pile[v[22]]=481; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(481,jvj+4,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l6;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V6)*/
V6=pile[WZ2]; 
if((V6!=B)) goto l5;
x[R]=x[jvj+6] ;z[R]=z[jvj+6];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=B)) goto l3;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
goto l7;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
