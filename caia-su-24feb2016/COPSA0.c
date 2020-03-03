#include "dx.h"
void COPSA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int M,XA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

M=pile[v[22]]; XA=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[M] ;z[jvj+2]=z[M];
l1:x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+1,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=613; pile[WZ2]=XA; 
(*f[35])( );     /*CHGC1(jvj+1,613,XA)*/
l3:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+1,jvj+4)*/
if((x[jvj+4]!=185)) goto l2;
pile[v[22]]=160; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,jvj+1,jvj+5)*/
pile[v[22]]=162; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l2;     /*FNDC2(162,jvj+5,V4)*/
V4=pile[WZ2]; 
if((V4!=36)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+1,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=XA; 
(*f[2082])( );     /*COPSA0(jvj+6,XA)*/
l2:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+1,jvj+2)*/
goto l1;
l4:v[0]=jvj; v[22]-=2; return;
}
