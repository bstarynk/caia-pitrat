#include "dx.h"
void CRETND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V4=0,V2=0,V1=0,V7=0,I=0,V9=0;
int Q,TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

Q=pile[v[22]]; TL=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=tnd[Q][0];
if((V2!=0)) goto l5;
V1=knr[Q];
if((V1<=0)) goto l5;
V7=V1-1;
I=0;
l3:if((I>V7)) goto l5;
V6=vnd[Q][I];
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(283,TL,jvj+1)*/
x[jvj+4]=x[jvj+1] ;z[jvj+4]=z[jvj+1];
l1:if((x[jvj+4]<=0)) goto l4;
x[jvj+2]=s[x[jvj+4]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+4];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4!=V6)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+2,jvj+3)*/
V9=x[jvj+3];
tnd[Q][I]=V9;
l4:I++;
goto l3;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:v[0]=jvj; v[22]-=2; return;
}
