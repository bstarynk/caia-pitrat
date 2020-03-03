#include "dx.h"
void VAROBJ0(void )
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
x[jvj+8]=0 ;z[jvj+8]=0;
x[R]=x[jvj+8] ;z[R]=z[jvj+8];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==484)) goto l1;
x[jvj+9]=w[x[jvj+1]][9];
l2:if((x[jvj+9]<=0)) goto l4;
x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=jvj+3; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+3,A,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=R; 
(*f[1591])( );     /*VAROBJ1(jvj+4,R)*/
l3:x[jvj+9]=t[x[jvj+9]];
goto l2;
l1:pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(A,jvj+2)*/
pile[v[22]]=R; 
(*f[68])( );     /*PLUE0(R,jvj+2)*/
l4:x[jvj+10]=w[x[jvj+1]][8];
l5:if((x[jvj+10]<=0)) goto l8;
x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,A,jvj+6)*/
x[jvj+11]=x[jvj+6] ;z[jvj+11]=z[jvj+6];
l6:if((x[jvj+11]>0)) goto l7;
x[jvj+10]=t[x[jvj+10]];
goto l5;
l7:x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=R; 
(*f[1591])( );     /*VAROBJ1(jvj+7,R)*/
x[jvj+11]=t[x[jvj+11]];
goto l6;
l8:v[0]=jvj; v[22]-=2; return;
}
