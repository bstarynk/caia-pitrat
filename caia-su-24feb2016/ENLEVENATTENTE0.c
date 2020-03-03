#include "dx.h"
void ENLEVENATTENTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V7=0,V5=0,V2=0;
int M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

M=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=N=x[jvj+1]=incon;
pile[v[22]]=970; pile[WZ1]=M; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(970,M,jvj+1)*/
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,jvj+1,jvj+2)*/
l1:pile[v[22]]=117; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,M,N)*/
N=pile[WZ2]; 
l3:if(x[jvj+2]!=incon) goto l4;
l8:v[0]=jvj; v[22]-=1; return;
l4:if(N!=incon) goto l5;
goto l8;
l5:if(x[jvj+1]!=incon) goto l6;
l7:pile[v[22]]=698; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(698,jvj+2,jvj+5)*/
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+5,V2)*/
V2=pile[WZ2]; 
if((V2==N)) goto l8;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+2,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ2]=N; 
(*f[596])( );     /*ENLEVENATTENTE1(jvj+6,jvj+2,N)*/
goto l8;
l6:pile[v[22]]=698; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(698,jvj+2,jvj+4)*/
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=N)) goto l7;
pile[v[22]]=120; pile[WZ1]=jvj+1; 
(*f[71])( );     /*ENLV0(120,jvj+1)*/
pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+2,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+1,120,jvj+3)*/
l2:V7=vv[21];
if((V7<=0)) goto l7;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
goto l7;
}
