#include "dx.h"
void FINDPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[R]=incon;
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+5]=x[B] ;z[jvj+5]=z[B];
l3:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(120,jvj+5,jvj+2)*/
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+2,jvj+3)*/
x[jvj+7]=x[A] ;z[jvj+7]=z[A];
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+1]=s[x[jvj+7]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+7];
pile[v[22]]=109; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+1,jvj+4)*/
if((x[jvj+4]!=x[jvj+3])) goto l2;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+1,V5)*/
V5=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V5!=V6)) goto l2;
l5:pile[v[22]]=jvj+6; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+2)*/
l4:x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l6:if(x[jvj+6]!=incon) goto l7;
l8:if(x[R]!=incon) goto l9;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l7:x[R]=x[jvj+6] ;z[R]=z[jvj+6];
goto l8;
l9:v[0]=jvj; v[22]-=3; v[102]=0;return;
}
