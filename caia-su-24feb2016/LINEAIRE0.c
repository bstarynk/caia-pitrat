#include "dx.h"
void LINEAIRE0(void )
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
v[0]+=11;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[1205])( );     /*LINELEM0(A,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,A,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,A,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l2;
x[jvj+1]=s[x[jvj+6]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+6];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[1205])( );     /*LINELEM0(jvj+1,jvj+2)*/
if((x[jvj+2]==134)) goto l3;
x[jvj+6]=t[x[jvj+6]];
goto l1;
l2:x[R]=135 ;z[R]=135;
l6:v[0]=jvj; v[22]-=2; return;
l3:if(x[jvj+5]!=25&&x[jvj+5]!=27&&x[jvj+5]!=28&&x[jvj+5]!=29&&x[jvj+5]!=30&&x[jvj+5]!=26) goto l5;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]!=22)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,A,jvj+8)*/
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,A,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; 
(*f[888])( );     /*LINEAIRE0(jvj+8,jvj+10)*/
if((x[jvj+10]==135)) goto l4;
l5:x[R]=134 ;z[R]=134;
goto l6;
l4:pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[888])( );     /*LINEAIRE0(jvj+9,jvj+11)*/
if((x[jvj+11]==135)) goto l2;
goto l5;
}
