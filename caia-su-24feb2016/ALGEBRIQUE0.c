#include "dx.h"
void ALGEBRIQUE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,A,jvj+1)*/
if(x[jvj+1]!=485&&x[jvj+1]!=486&&x[jvj+1]!=52&&x[jvj+1]!=25) goto l1;
l4:x[jvj+2]=d[51];z[jvj+2]=0;
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,A,jvj+6)*/
l6:if((x[jvj+6]>0)) goto l7;
x[R]=68 ;z[R]=68;
l8:v[0]=jvj; v[22]-=2; return;
l1:x[R]=67 ;z[R]=67;
goto l8;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+3,A,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1739])( );     /*ALGEBRIQUE0(jvj+4,jvj+5)*/
if((x[jvj+5]==67)) goto l1;
l5:x[jvj+2]=t[x[jvj+2]];
goto l2;
l7:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1739])( );     /*ALGEBRIQUE0(jvj+7,jvj+8)*/
if((x[jvj+8]==67)) goto l1;
x[jvj+6]=t[x[jvj+6]];
goto l6;
}
