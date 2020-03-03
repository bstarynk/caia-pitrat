#include "dx.h"
void VARND0(void )
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
v[0]+=17;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=687; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(687,A,jvj+1)*/
if((x[jvj+1]!=0)) goto l1;
x[jvj+14]=0 ;z[jvj+14]=0;
x[R]=x[jvj+14] ;z[R]=z[jvj+14];
pile[v[22]]=100; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]==484)) goto l2;
if((x[jvj+2]!=1050)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,A,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+6,jvj+7)*/
if(x[jvj+7]!=96&&x[jvj+7]!=89&&x[jvj+7]!=41&&x[jvj+7]!=20&&x[jvj+7]!=128&&x[jvj+7]!=570&&x[jvj+7]!=1317) goto l3;
pile[v[22]]=A; pile[WZ1]=jvj+8; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(A,jvj+8)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+8)*/
l3:x[jvj+15]=w[x[jvj+2]][9];
l4:if((x[jvj+15]>0)) goto l5;
x[jvj+16]=w[x[jvj+2]][8];
l7:if((x[jvj+16]<=0)) goto l10;
x[jvj+11]=s[x[jvj+16]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+16];
pile[v[22]]=jvj+11; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+11,A,jvj+12)*/
x[jvj+17]=x[jvj+12] ;z[jvj+17]=z[jvj+12];
l8:if((x[jvj+17]>0)) goto l9;
x[jvj+16]=t[x[jvj+16]];
goto l7;
l1:x[R]=x[jvj+1] ;z[R]=z[jvj+1];
l11:v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,A,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if(x[jvj+4]!=96&&x[jvj+4]!=89&&x[jvj+4]!=41&&x[jvj+4]!=20&&x[jvj+4]!=128&&x[jvj+4]!=570&&x[jvj+4]!=1317) goto l3;
pile[v[22]]=A; pile[WZ1]=jvj+5; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(A,jvj+5)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+5)*/
goto l3;
l5:x[jvj+9]=s[x[jvj+15]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+15];
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+9,A,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=67; pile[WZ2]=R; 
(*f[1204])( );     /*VARND1(jvj+10,67,R)*/
l6:x[jvj+15]=t[x[jvj+15]];
goto l4;
l9:x[jvj+13]=s[x[jvj+17]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+17];
pile[v[22]]=jvj+13; pile[WZ1]=67; pile[WZ2]=R; 
(*f[1204])( );     /*VARND1(jvj+13,67,R)*/
x[jvj+17]=t[x[jvj+17]];
goto l8;
l10:if((v[111]!=0)) goto l11;
pile[v[22]]=A; pile[WZ1]=687; pile[WZ2]=R; 
(*f[34])( );     /*CHGC0(A,687,R)*/
goto l11;
}
