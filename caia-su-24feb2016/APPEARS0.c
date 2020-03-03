#include "dx.h"
void APPEARS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=incon;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,B,jvj+1)*/
l1:pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,B,jvj+2)*/
if((x[A]==x[jvj+2])) goto l2;
l3:if(x[jvj+1]!=incon) goto l4;
l13:x[jvj+10]=d[34];z[jvj+10]=0;
l11:if((x[jvj+10]>0)) goto l12;
x[R]=134 ;z[R]=134;
l17:v[0]=jvj; v[22]-=3; return;
l2:x[R]=135 ;z[R]=135;
goto l17;
l4:x[jvj+16]=w[x[jvj+1]][9];
l5:if((x[jvj+16]>0)) goto l6;
x[jvj+17]=w[x[jvj+1]][8];
l8:if((x[jvj+17]<=0)) goto l13;
x[jvj+6]=s[x[jvj+17]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+17];
if(x[jvj+6]==114||x[jvj+6]==113) goto l9;
pile[v[22]]=jvj+6; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,B,jvj+7)*/
x[jvj+18]=x[jvj+7] ;z[jvj+18]=z[jvj+7];
l10:if((x[jvj+18]<=0)) goto l9;
x[jvj+8]=s[x[jvj+18]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+18];
pile[v[22]]=A; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1031])( );     /*APPEARS0(A,jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l2;
x[jvj+18]=t[x[jvj+18]];
goto l10;
l6:x[jvj+3]=s[x[jvj+16]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+16];
pile[v[22]]=jvj+3; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+3,B,jvj+4)*/
pile[v[22]]=A; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1031])( );     /*APPEARS0(A,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l2;
l7:x[jvj+16]=t[x[jvj+16]];
goto l5;
l9:x[jvj+17]=t[x[jvj+17]];
goto l8;
l12:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+11,B,jvj+12)*/
x[jvj+19]=x[jvj+12] ;z[jvj+19]=z[jvj+12];
l14:if((x[jvj+19]>0)) goto l15;
x[jvj+10]=t[x[jvj+10]];
goto l11;
l15:x[jvj+13]=s[x[jvj+19]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+19];
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=A; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1031])( );     /*APPEARS0(A,jvj+14,jvj+15)*/
if((x[jvj+15]==135)) goto l2;
l16:x[jvj+19]=t[x[jvj+19]];
goto l14;
}
