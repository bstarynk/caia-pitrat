#include "dx.h"
void SPLN1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V4=0;
int II;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

II=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((II==0)) goto l1;
V4=II+1;
c[v[1]][II]=59;
I=V4;
if((I>=0)) goto l2;
l4:v[0]=jvj; v[22]-=1; return;
l1:I=0;
l2:for(i=1;i<=0;i++) putc(' ',fx[v[27]]);for(i=0;i<I;i++) putc(c[v[1]][i],fx[v[27]]);putc('\n',fx[v[27]]);
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
pile[v[22]]=954; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(954,jvj+1,jvj+2)*/
if((x[jvj+2]!=68)) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=937; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,937,1)*/
l3:pile[v[22]]=1692; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(1692,510,1)*/
goto l4;
}
