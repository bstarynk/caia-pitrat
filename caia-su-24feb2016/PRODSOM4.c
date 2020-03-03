#include "dx.h"
void PRODSOM4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,Z=0,V3=0,V4=0,V5=0,X=0;
int N,E1;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26102;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2408&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; E1=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V5=2*N;
X=4;
l7:if((X<=V5)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:Y=2;
l1:if((Y<=N)) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=X; 
(*f[207])( );     /*PLUE2(jvj+2,X)*/
l8:X++;
goto l7;
l4:Z=Y;
l3:if((Z<=N)) goto l6;
Y++;
goto l1;
l5:Z++;
goto l3;
l6:V3=Y+Z;
if((V3!=X)) goto l5;
V4=Y*Z;
for(a=x[E1];a>0;a=t[a]) if(s[a]==V4) goto l5;
goto l8;
}
