#include "dx.h"
void CPEL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V13=0,V12=0,V15=0,V14=0,V1=0,V4=0,V5=0,V7=0,V2=0,V16=0,V18=0;
int X,T;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; T=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((X>0)) goto l6;
x[jvj+4]=0 ;z[jvj+4]=0;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
l8:v[0]=jvj; v[22]-=3; return;
l2:x[jvj+1]=t[x[jvj+1]];
l1:if((x[jvj+1]<=0)) goto l3;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V12)*/
V12=pile[WZ2]; 
if((V12!=V13)) goto l2;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(110,jvj+2,V15)*/
V15=pile[WZ2]; 
V14=V15;
V1=V14;
l3:V4=(-20);
if((V16!=V4)) goto l4;
V5=s[X];
if((V5<=sepcte)) goto l4;
pile[v[22]]=V5; pile[WZ1]=T; pile[WZ2]=jvj+3; 
(*f[1799])( );     /*CPIM1(V5,T,jvj+3)*/
V7=x[jvj+3];
V1=V7;
l7:pile[v[22]]=V1; pile[WZ1]=V16; pile[WZ2]=R; 
(*f[213])( );     /*TRI7(V1,V16,R)*/
V18=t[X];
pile[v[22]]=V18; pile[WZ1]=R; pile[WZ2]=T; 
(*f[1980])( );     /*CPEL1(V18,R,T)*/
goto l8;
l4:if(V1==incon) goto l5;
goto l7;
l5:V2=s[X];
V1=V2;
goto l7;
l6:V16=r[X];
V1=incon;
V9=(-96);
if((V16!=V9)) goto l3;
V13=s[X];
pile[v[22]]=258; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(258,T,jvj+1)*/
goto l1;
}
