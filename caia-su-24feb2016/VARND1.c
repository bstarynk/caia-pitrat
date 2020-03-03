#include "dx.h"
void VARND1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,S,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; S=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[S]==12)) goto l10;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l1;
if((x[jvj+1]!=1050)) goto l2;
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,A,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if(x[jvj+6]!=96&&x[jvj+6]!=89&&x[jvj+6]!=41&&x[jvj+6]!=20&&x[jvj+6]!=128&&x[jvj+6]!=570&&x[jvj+6]!=1317) goto l2;
pile[v[22]]=A; pile[WZ1]=jvj+7; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(A,jvj+7)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+7)*/
l2:x[jvj+13]=w[x[jvj+1]][9];
l3:if((x[jvj+13]>0)) goto l4;
x[jvj+14]=w[x[jvj+1]][8];
l6:if((x[jvj+14]<=0)) goto l9;
x[jvj+10]=s[x[jvj+14]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+14];
pile[v[22]]=jvj+10; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(jvj+10,A,jvj+11)*/
x[jvj+15]=x[jvj+11] ;z[jvj+15]=z[jvj+11];
l7:if((x[jvj+15]>0)) goto l8;
x[jvj+14]=t[x[jvj+14]];
goto l6;
l1:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,A,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+2,jvj+3)*/
if(x[jvj+3]!=96&&x[jvj+3]!=89&&x[jvj+3]!=41&&x[jvj+3]!=20&&x[jvj+3]!=128&&x[jvj+3]!=570&&x[jvj+3]!=1317) goto l2;
pile[v[22]]=A; pile[WZ1]=jvj+4; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(A,jvj+4)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+4)*/
goto l2;
l4:x[jvj+8]=s[x[jvj+13]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+13];
pile[v[22]]=jvj+8; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,A,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=67; pile[WZ2]=R; 
(*f[1204])( );     /*VARND1(jvj+9,67,R)*/
l5:x[jvj+13]=t[x[jvj+13]];
goto l3;
l8:x[jvj+12]=s[x[jvj+15]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+15];
pile[v[22]]=jvj+12; pile[WZ1]=67; pile[WZ2]=R; 
(*f[1204])( );     /*VARND1(jvj+12,67,R)*/
x[jvj+15]=t[x[jvj+15]];
goto l7;
l9:if((x[S]!=68)) goto l10;
if((v[111]!=0)) goto l10;
pile[v[22]]=A; pile[WZ1]=687; pile[WZ2]=R; 
(*f[34])( );     /*CHGC0(A,687,R)*/
l10:v[0]=jvj; v[22]-=3; return;
}
