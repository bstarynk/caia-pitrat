#include "dx.h"
void FNDOBJ1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[A] ;z[jvj+1]=z[A];
l1:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+1,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(R,jvj+4)*/
l2:x[jvj+16]=w[x[jvj+2]][9];
l3:if((x[jvj+16]>0)) goto l4;
if((x[jvj+2]==39)) goto l6;
x[jvj+17]=w[x[jvj+2]][8];
l9:if((x[jvj+17]>0)) goto l10;
if((x[jvj+2]!=43)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+1,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+13,jvj+14)*/
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+1,jvj+15)*/
pile[v[22]]=R; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(R,jvj+14)*/
x[jvj+1]=x[jvj+15] ;z[jvj+1]=z[jvj+15];
goto l1;
l4:x[jvj+5]=s[x[jvj+16]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+16];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+5,jvj+1,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=R; 
(*f[1354])( );     /*FNDOBJ1(jvj+6,R)*/
l5:x[jvj+16]=t[x[jvj+16]];
goto l3;
l6:pile[v[22]]=114; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(114,jvj+1,jvj+7)*/
l7:if((x[jvj+7]<=0)) goto l13;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=R; 
(*f[1354])( );     /*FNDOBJ1(jvj+9,R)*/
l8:x[jvj+7]=t[x[jvj+7]];
goto l7;
l10:x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(jvj+10,jvj+1,jvj+11)*/
x[jvj+18]=x[jvj+11] ;z[jvj+18]=z[jvj+11];
l11:if((x[jvj+18]>0)) goto l12;
x[jvj+17]=t[x[jvj+17]];
goto l9;
l12:x[jvj+12]=s[x[jvj+18]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+18];
pile[v[22]]=jvj+12; pile[WZ1]=R; 
(*f[1354])( );     /*FNDOBJ1(jvj+12,R)*/
x[jvj+18]=t[x[jvj+18]];
goto l11;
l13:v[0]=jvj; v[22]-=2; return;
}
