#include "dx.h"
void REMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V12=0;
int C,B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[A] ;z[R]=z[A];
V=B;
pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,A,V12)*/
V12=pile[WZ2]; 
if((V!=V12)) goto l2;
pile[v[22]]=A; pile[WZ1]=140; pile[WZ2]=C; 
(*f[177])( );     /*CHGC4(A,140,C)*/
l2:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+3)*/
x[jvj+9]=w[x[jvj+3]][9];
l3:if((x[jvj+9]>0)) goto l4;
x[jvj+10]=w[x[jvj+3]][8];
l6:if((x[jvj+10]<=0)) goto l10;
x[jvj+6]=s[x[jvj+10]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+10];
pile[v[22]]=jvj+6; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,A,jvj+7)*/
x[jvj+11]=x[jvj+7] ;z[jvj+11]=z[jvj+7];
l7:if((x[jvj+11]>0)) goto l8;
x[jvj+10]=t[x[jvj+10]];
goto l6;
l1:x[jvj+8]=x[jvj+1] ;z[jvj+8]=z[jvj+1];
l9:pile[v[22]]=jvj+8; pile[WZ1]=C; pile[WZ2]=B; 
(*f[2224])( );     /*REMP1(jvj+8,C,B)*/
x[jvj+11]=t[x[jvj+11]];
goto l7;
l4:x[jvj+4]=s[x[jvj+9]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+9];
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+4,A,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=C; pile[WZ2]=B; 
(*f[2224])( );     /*REMP1(jvj+5,C,B)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l3;
l8:x[jvj+1]=s[x[jvj+11]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+11];
x[jvj+8]=incon;
if((x[jvj+3]!=39)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+1,jvj+2)*/
x[jvj+8]=x[jvj+2] ;z[jvj+8]=z[jvj+2];
goto l9;
l10:v[0]=jvj; v[22]-=4; return;
}
