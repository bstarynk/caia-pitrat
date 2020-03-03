#include "dx.h"
void CRATOMETRAD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Z=0;
int N;
int M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11354;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1242&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1732; pile[WZ1]=100; pile[WZ2]=M; 
(*f[54])( );     /*TRI1(1732,100,M)*/
Z=250;
x[jvj+4]=incon;
pile[v[22]]=498; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,N,jvj+3)*/
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
l2:pile[v[22]]=M; pile[WZ1]=498; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(M,498,jvj+4)*/
x[jvj+9]=w[1732][8];
l3:if((x[jvj+9]>0)) goto l4;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+4]=x[N] ;z[jvj+4]=z[N];
goto l2;
l4:x[jvj+5]=s[x[jvj+9]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+9];
pile[v[22]]=jvj+5; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,N,jvj+6)*/
x[jvj+10]=x[jvj+6] ;z[jvj+10]=z[jvj+6];
l5:if((x[jvj+10]>0)) goto l6;
x[jvj+9]=t[x[jvj+9]];
goto l3;
l6:x[jvj+7]=s[x[jvj+10]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+10];
if((x[jvj+7]==Z)) goto l7;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=M; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(M,jvj+5,jvj+8)*/
l7:x[jvj+10]=t[x[jvj+10]];
goto l5;
}
