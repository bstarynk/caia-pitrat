#include "dx.h"
void SETCOEFFS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V22=0,V15=0,V16=0,V4=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,A,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V16; pile[WZ2]=R; 
(*f[445])( );     /*TRI15(41,V16,R)*/
l10:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+1]=s[x[jvj+8]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+8];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1966])( );     /*SETCOEFFS0(jvj+1,jvj+2)*/
V22=x[jvj+2];
l3:if((V22>0)) goto l4;
x[jvj+8]=t[x[jvj+8]];
l1:if((x[jvj+8]>0)) goto l2;
x[R]=x[jvj+3] ;z[R]=z[jvj+3];
goto l10;
l4:J=s[V22];
V15=abs(J);
pile[v[22]]=jvj+3; pile[WZ1]=V15; 
(*f[207])( );     /*PLUE2(jvj+3,V15)*/
V22=t[V22];
goto l3;
l5:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==486)) goto l6;
if((x[jvj+5]!=485)) goto l9;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,A,jvj+8)*/
x[jvj+3]=0 ;z[jvj+3]=0;
goto l1;
l6:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,A,jvj+6)*/
l7:if((x[jvj+6]<=0)) goto l9;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+7,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V4; pile[WZ2]=R; 
(*f[445])( );     /*TRI15(41,V4,R)*/
goto l10;
l8:x[jvj+6]=t[x[jvj+6]];
goto l7;
l9:pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=R; 
(*f[445])( );     /*TRI15(41,1,R)*/
goto l10;
}
