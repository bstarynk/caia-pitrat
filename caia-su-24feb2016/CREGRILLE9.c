#include "dx.h"
void CREGRILLE9(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int NT,NO;
int NNNE;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26127;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2521&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NT=pile[v[22]]; NO=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V2=NT-1;
pile[v[22]]=V2; pile[WZ1]=2; pile[WZ2]=NO; pile[WZ3]=NNNE; 
(*f[1038])( );if(v[102]) goto l1;     /*ENSHASARD0(V2,2,NO,NNNE)*/
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
