#include "dx.h"
void DVG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0;
int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]==108)) goto l1;
if((x[jvj+1]!=69)) goto l3;
pile[v[22]]=108; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(108,X,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l3;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; 
(*f[1795])( );     /*DVG0(jvj+7)*/
x[jvj+6]=t[x[jvj+6]];
goto l2;
l1:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,X,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+2,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+5]=w[x[jvj+4]][1])==incon) goto l3;
if((x[jvj+5]==23)) goto l3;
pile[v[22]]=V16; pile[WZ1]=jvj+5; 
(*f[1791])( );     /*DVF0(V16,jvj+5)*/
l3:x[jvj+10]=w[x[jvj+1]][9];
l4:if((x[jvj+10]<=0)) goto l6;
x[jvj+8]=s[x[jvj+10]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+10];
pile[v[22]]=jvj+8; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,X,jvj+9)*/
pile[v[22]]=jvj+9; 
(*f[1795])( );     /*DVG0(jvj+9)*/
l5:x[jvj+10]=t[x[jvj+10]];
goto l4;
l6:v[0]=jvj; v[22]-=1; return;
}
