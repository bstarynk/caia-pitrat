#include "dx.h"
void SPLL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
J=0;
c[v[1]][I]=59;
pile[v[22]]=1692; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(1692,117,1)*/
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
pile[v[22]]=954; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(954,jvj+1,jvj+2)*/
if((x[jvj+2]!=68)) goto l1;
pile[v[22]]=jvj+1; pile[WZ1]=937; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,937,1)*/
l1:V4=I+1;
for(i=1;i<=0;i++) putc(' ',fx[v[27]]);for(i=0;i<V4;i++) putc(c[v[1]][i],fx[v[27]]);putc('\n',fx[v[27]]);
v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; return;
}
