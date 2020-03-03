#include "dx.h"
void TRAD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int B,A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10129;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1078&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(A,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=208; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(jvj+2,208,jvj+3)*/
pile[v[22]]=208; pile[WZ1]=jvj+3; pile[WZ2]=jvj+2; 
(*f[1390])( );     /*TRADR0(208,jvj+3,jvj+2)*/
if((x[B]!=68)) goto l1;
pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(208,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1392])( );     /*TROUVETYPE0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=208; pile[WZ2]=jvj+4; pile[WZ3]=jvj+5; 
(*f[1391])( );     /*TRADA0(jvj+3,208,jvj+4,jvj+5)*/
l1:pile[v[22]]=208; pile[WZ1]=jvj+3; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(208,jvj+3,R)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
