#include "dx.h"
void FACILE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F=0,V10=0,V21=0,V23=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=184; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(184,A,jvj+1)*/
if((x[jvj+1]<=0)) goto l3;
x[jvj+15]=s[x[jvj+1]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+1];
x[jvj+2]=x[jvj+15] ;z[jvj+2]=z[jvj+15];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=42)) goto l6;
pile[v[22]]=105; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(105,jvj+2,jvj+4)*/
x[jvj+16]=x[jvj+4] ;z[jvj+16]=z[jvj+4];
l1:if((x[jvj+16]<=0)) goto l4;
x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=73)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
F=x[jvj+8];
if(F==875||F==859) goto l3;
l2:x[jvj+16]=t[x[jvj+16]];
goto l1;
l6:pile[v[22]]=jvj+2; 
(*f[1162])( );if(v[102]) goto l8;     /*Z229Z0(jvj+2,V21)*/
V21=pile[WZ1]; 
if((V21>0)) goto l7;
l8:pile[v[22]]=jvj+2; 
(*f[1163])( );if(v[102]) goto l3;     /*Z230Z0(jvj+2,V23)*/
V23=pile[WZ1]; 
if((V23>0)) goto l7;
l3:x[R]=135 ;z[R]=135;
l9:v[0]=jvj; v[22]-=2; return;
l7:x[R]=134 ;z[R]=134;
goto l9;
l4:if((x[jvj+4]<=0)) goto l6;
x[jvj+9]=s[x[jvj+4]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+4];
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=73)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
V10=x[jvj+12];
if(V10!=843&&V10!=921) goto l5;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+9,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==38)) goto l3;
l5:x[jvj+4]=t[x[jvj+4]];
goto l4;
}
