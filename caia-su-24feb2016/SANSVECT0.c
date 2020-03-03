#include "dx.h"
void SANSVECT0(void )
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
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l1;
if((x[jvj+1]==1050)) goto l1;
if((x[jvj+1]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]==295||x[jvj+3]==585) goto l1;
l2:x[jvj+11]=w[x[jvj+1]][9];
l3:if((x[jvj+11]>0)) goto l4;
x[jvj+12]=w[x[jvj+1]][8];
l6:if((x[jvj+12]<=0)) goto l9;
x[jvj+7]=s[x[jvj+12]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+12];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,A,jvj+8)*/
x[jvj+13]=x[jvj+8] ;z[jvj+13]=z[jvj+8];
l7:if((x[jvj+13]>0)) goto l8;
x[jvj+12]=t[x[jvj+12]];
goto l6;
l1:x[R]=134 ;z[R]=134;
l10:v[0]=jvj; v[22]-=2; return;
l4:x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+4,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1608])( );     /*SANSVECT0(jvj+5,jvj+6)*/
if((x[jvj+6]==134)) goto l1;
l5:x[jvj+11]=t[x[jvj+11]];
goto l3;
l8:x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[1608])( );     /*SANSVECT0(jvj+9,jvj+10)*/
if((x[jvj+10]==134)) goto l1;
x[jvj+13]=t[x[jvj+13]];
goto l7;
l9:x[R]=135 ;z[R]=135;
goto l10;
}
