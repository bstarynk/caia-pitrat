#include "dx.h"
void KAKURO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V2=0,M=0,V3=0,V4=0,N=0,V5=0,J=0;
int I,NK;
int NNNE;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26077;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2315&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; NK=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
L=1;
l3:if((L<=NK)) goto l5;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:M++;
l1:if((M>V2)) goto l4;
pile[v[22]]=M; pile[WZ1]=L; pile[WZ2]=(-620); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(M,L,(-620),V3)*/
V3=pile[WZ3]; 
if((V3!=I)) goto l2;
N=1;
l6:if((N>V4)) goto l4;
pile[v[22]]=N; pile[WZ1]=L; pile[WZ2]=(-620); 
(*f[203])( );if(v[102]) goto l7;     /*FTAB0(N,L,(-620),V5)*/
V5=pile[WZ3]; 
J=V5;
if((J==I)) goto l7;
pile[v[22]]=jvj+2; pile[WZ1]=J; 
(*f[207])( );     /*PLUE2(jvj+2,J)*/
l7:N++;
goto l6;
l4:L++;
goto l3;
l5:pile[v[22]]=L; pile[WZ1]=(-620); 
(*f[3979])( );if(v[102]) goto l4;     /*LONGUEUR0(L,(-620),V4)*/
V4=pile[WZ2]; 
(*f[3979])( );if(v[102]) goto l4;     /*LONGUEUR0(L,(-620),V2)*/
V2=pile[WZ2]; 
M=1;
goto l1;
}
