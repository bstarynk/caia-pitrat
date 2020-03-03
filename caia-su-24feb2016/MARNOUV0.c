#include "dx.h"
void MARNOUV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V10=0,V5=0,V6=0,I=0,V4=0,V13=0,V14=0,V17=0;
int N,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11169;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1338&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V17=N;
l5:V9=ctx[V17];
if((V9<=0)) goto l10;
V10=ctw[V17];
if((V10<0)) goto l6;
if((V10>0)) goto l7;
if((V10!=0)) goto l10;
V5=cts[V17];
V6=V17-1;
I=1;
l8:if((I>V6)) goto l10;
V4=ctu[I];
if((V4!=V5)) goto l9;
ctx[I]=1;
x[jvj+6]=incon;
pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,T,jvj+2)*/
x[jvj+7]=x[jvj+2] ;z[jvj+7]=z[jvj+2];
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=V17; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(V17,117,jvj+6)*/
l4:x[jvj+4]=x[jvj+6] ;z[jvj+4]=z[jvj+6];
pile[v[22]]=T; pile[WZ1]=763; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(T,763,jvj+4)*/
pile[v[22]]=I; pile[WZ1]=510; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(I,510,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(jvj+4,159,jvj+5)*/
l9:I++;
goto l8;
l2:x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8!=V17)) goto l3;
x[jvj+6]=x[jvj+3] ;z[jvj+6]=z[jvj+3];
goto l4;
l3:x[jvj+7]=t[x[jvj+7]];
goto l1;
l6:ctx[V17]=(-1);
l10:V13=ctt[V17];
if((V13!=864)) goto l11;
ctx[V17]=(-2);
l11:if((V17>1)) goto l12;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l7:ctx[V17]=0;
goto l10;
l12:V14=V17-1;
V17=V14;
goto l5;
}
