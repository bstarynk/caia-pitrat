#include "dx.h"
void CRESUDOKU6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V24=0,V30=0,V36=0,V32=0,V31=0,V27=0,V25=0,V29=0,V28=0,V37=0,V39=0,V40=0,V42=0,V38=0,V41=0,V34=0;
int N;
int NNNX;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26118;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2459&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=2; 
V2=incon;
if((N>=50)) goto l1;
V2=1;
l3:V24=0;
V30=49;
V31=incon;
V36=v[V30];
V32=V36%1000000;
if((V32>0)) goto l5;
V31=137643;
l4:v[V30]=V31;
V27=V2+1;
V25=V27-V24;
V29=v[49]%V25;
V28=V24+V29;
NNNX=V28;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=NNNX; return;
l1:V2=0;
goto l3;
l5:V34=V32%100000;
V41=V32/100000;
V38=V34*10;
V42=V34/10000;
V40=V41+V42;
V39=V40%10;
V37=V38+V39;
V31=V37;
goto l4;
}
