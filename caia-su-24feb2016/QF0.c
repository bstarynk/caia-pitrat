#include "dx.h"
void QF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V9=0,V8=0,V14=0,V15=0,V12=0,V13=0,V2=0,V3=0,V16=0;
int I,X,Y;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[X] ;z[jvj+1]=z[X];
V16=Y;
V15=I;
l8:K=incon;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+1,jvj+2)*/
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+2,K)*/
K=pile[WZ2]; 
l3:if((V16>0)) goto l4;
if(K!=incon) goto l5;
l7:J=V15;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+2,V9)*/
V9=pile[WZ2]; 
V8=V9;
K=V8;
goto l3;
l2:x[jvj+4]=250 ;z[jvj+4]=250;
l6:pile[v[22]]=K; pile[WZ1]=V15; 
(*f[99])( );     /*SPM0(K,V15,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V2,44,V3)*/
V3=pile[WZ2]; 
V15=V3;
x[jvj+1]=x[jvj+4] ;z[jvj+1]=z[jvj+4];
V16=V16;
goto l8;
l4:V14=V16-1;
pile[v[22]]=0; pile[WZ1]=V15; 
(*f[99])( );     /*SPM0(0,V15,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V12,44,V13)*/
V13=pile[WZ2]; 
V15=V13;
V16=V14;
goto l8;
l5:if((V16!=0)) goto l7;
x[jvj+4]=incon;
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+1,jvj+3)*/
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
goto l6;
}
