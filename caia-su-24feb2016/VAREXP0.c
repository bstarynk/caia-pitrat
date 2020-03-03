#include "dx.h"
void VAREXP0(void )
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
v[0]+=13;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=0 ;z[jvj+9]=0;
x[R]=x[jvj+9] ;z[R]=z[jvj+9];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l8;
x[jvj+10]=w[x[jvj+1]][9];
l1:if((x[jvj+10]<=0)) goto l3;
x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=jvj+2; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+2,A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=R; 
(*f[1206])( );     /*VAREXP1(jvj+3,R)*/
l2:x[jvj+10]=t[x[jvj+10]];
goto l1;
l6:x[jvj+6]=s[x[jvj+12]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+12];
pile[v[22]]=jvj+6; pile[WZ1]=R; 
(*f[1206])( );     /*VAREXP1(jvj+6,R)*/
x[jvj+12]=t[x[jvj+12]];
l5:if((x[jvj+12]>0)) goto l6;
x[jvj+11]=t[x[jvj+11]];
l4:if((x[jvj+11]<=0)) goto l7;
x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+4,A,jvj+5)*/
x[jvj+12]=x[jvj+5] ;z[jvj+12]=z[jvj+5];
goto l5;
l7:v[0]=jvj; v[22]-=2; return;
l8:x[jvj+13]=x[R] ;z[jvj+13]=z[R];
l9:if((x[jvj+13]>0)) goto l10;
pile[v[22]]=R; pile[WZ1]=A; 
(*f[68])( );     /*PLUE0(R,A)*/
l3:x[jvj+11]=w[x[jvj+1]][8];
goto l4;
l10:x[jvj+7]=s[x[jvj+13]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+13];
pile[v[22]]=A; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(A,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l3;
x[jvj+13]=t[x[jvj+13]];
goto l9;
}
