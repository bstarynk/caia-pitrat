#include "dx.h"
void CRELOGIQUE9(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V25=0,V31=0,V37=0,V33=0,V32=0,V28=0,V26=0,V30=0,V29=0,V38=0,V40=0,V41=0,V43=0,V39=0,V42=0,V35=0;
int NNNX;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26136;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2572&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
v[22]+=1; 
V24=100;
V25=1;
V31=49;
V32=incon;
V37=v[V31];
V33=V37%1000000;
if((V33>0)) goto l3;
V32=137643;
l2:v[V31]=V32;
V28=V24+1;
V26=V28-V25;
V30=v[49]%V26;
V29=V25+V30;
NNNX=V29;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; pile[v[22]]=NNNX; return;
l3:V35=V33%100000;
V42=V33/100000;
V39=V35*10;
V43=V35/10000;
V41=V42+V43;
V40=V41%10;
V38=V39+V40;
V32=V38;
goto l2;
}
