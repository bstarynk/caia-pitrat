#include "dx.h"
void SCH2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,I=0,V4=0,V7=0,V6=0,V5=0;
int N;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26017;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2259&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V3=N-1;
I=1;
l1:if((I<=V3)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V4=I+1;
V7=I-1;
V6=N*V7;
l3:if((V4<=N)) goto l4;
I++;
goto l1;
l4:V5=V6+V4;
pile[v[22]]=jvj+2; pile[WZ1]=V5; 
(*f[207])( );     /*PLUE2(jvj+2,V5)*/
V4++;
goto l3;
}
