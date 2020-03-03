#include "dx.h"
void AJLONG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P,S,C;
int RR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10976;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1725&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; S=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
RR=incon;
pile[v[22]]=S; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(S,117,1)*/
pile[v[22]]=117; pile[WZ1]=S; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,S,RR)*/
RR=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=117; pile[WZ2]=RR; 
(*f[43])( );     /*CHGC2(P,117,RR)*/
l1:pile[v[22]]=C; pile[WZ1]=P; pile[WZ2]=S; 
(*f[1145])( );     /*TRIE0(C,P,S)*/
pile[v[22]]=P; pile[WZ1]=S; 
(*f[525])( );     /*SOREXP0(P,S)*/
if(RR!=incon) goto l3;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=RR; v[102]=0;return;
}
