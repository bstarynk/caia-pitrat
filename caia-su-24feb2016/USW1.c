#include "dx.h"
void USW1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0;
int A,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=T; pile[WZ1]=273; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(T,273,V)*/
l1:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]!=39)) goto l4;
pile[v[22]]=114; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(114,A,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l4;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=T; 
(*f[1093])( );     /*USW1(jvj+4,T)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
l4:x[jvj+10]=w[x[jvj+1]][9];
l5:if((x[jvj+10]>0)) goto l6;
if((x[jvj+1]==39)) goto l11;
x[jvj+11]=w[x[jvj+1]][8];
l8:if((x[jvj+11]<=0)) goto l11;
x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,A,jvj+8)*/
x[jvj+12]=x[jvj+8] ;z[jvj+12]=z[jvj+8];
l9:if((x[jvj+12]>0)) goto l10;
x[jvj+11]=t[x[jvj+11]];
goto l8;
l6:x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+5,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=T; 
(*f[1093])( );     /*USW1(jvj+6,T)*/
l7:x[jvj+10]=t[x[jvj+10]];
goto l5;
l10:x[jvj+9]=s[x[jvj+12]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+12];
pile[v[22]]=jvj+9; pile[WZ1]=T; 
(*f[1093])( );     /*USW1(jvj+9,T)*/
x[jvj+12]=t[x[jvj+12]];
goto l9;
l11:v[0]=jvj; v[22]-=2; return;
}
