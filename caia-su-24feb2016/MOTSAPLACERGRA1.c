#include "dx.h"
void MOTSAPLACERGRA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,V5=0,M=0,S=0,V6=0,V4=0,V2=0,V3=0,W=0;
int I,N;
int NNNE;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=26093;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2365&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+2]=d[134];z[jvj+2]=0;
l8:if((x[jvj+2]>0)) goto l9;
x[NNNE]=x[jvj+3] ;z[NNNE]=z[jvj+3];
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l4:P++;
l3:if((P<=N)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=W; 
(*f[467])( );     /*PLUE4(jvj+3,W)*/
l10:x[jvj+2]=t[x[jvj+2]];
goto l8;
l5:pile[v[22]]=P; pile[WZ1]=(-7297); 
(*f[201])( );if(v[102]) goto l4;     /*FCOEFF0(P,(-7297),V2)*/
V2=pile[WZ2]; 
S=1;
l6:if((S>V2)) goto l4;
pile[v[22]]=S; pile[WZ1]=P; pile[WZ2]=(-620); 
(*f[203])( );if(v[102]) goto l7;     /*FTAB0(S,P,(-620),V3)*/
V3=pile[WZ3]; 
if((V3!=I)) goto l7;
pile[v[22]]=P; pile[WZ1]=(-7297); 
(*f[201])( );if(v[102]) goto l10;     /*FCOEFF0(P,(-7297),V5)*/
V5=pile[WZ2]; 
M=1;
l1:if((M>N)) goto l10;
pile[v[22]]=S; pile[WZ1]=M; pile[WZ2]=(-595); 
(*f[202])( );if(v[102]) goto l2;     /*FMATRICE0(S,M,(-595),V6)*/
V6=pile[WZ3]; 
if((V6!=W)) goto l2;
pile[v[22]]=M; pile[WZ1]=(-7296); 
(*f[201])( );if(v[102]) goto l2;     /*FCOEFF0(M,(-7296),V4)*/
V4=pile[WZ2]; 
if((V4==V5)) goto l7;
l2:M++;
goto l1;
l7:S++;
goto l6;
l9:W=s[x[jvj+2]];
P=1;
goto l3;
}
