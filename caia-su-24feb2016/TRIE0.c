#include "dx.h"
void TRIE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0;
int RES,Z,RN;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

RES=pile[v[22]]; Z=pile[v[22]+1]; RN=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
x[jvj+1]=120 ;z[jvj+1]=120;
x[jvj+6]=36 ;z[jvj+6]=36;
x[jvj+2]=x[RN] ;z[jvj+2]=z[RN];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+1,jvj+2,jvj+3)*/
pile[v[22]]=204; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(204,jvj+3,V3)*/
V3=pile[WZ2]; 
if((RES<V3)) goto l2;
pile[v[22]]=Z; pile[WZ1]=698; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(Z,698,jvj+7)*/
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=204; pile[WZ3]=RES; pile[WZ4]=jvj+7; pile[WZ5]=jvj+5; 
(*f[47])( );     /*QUADRI0(120,jvj+3,204,RES,jvj+7,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+2,jvj+1,jvj+5)*/
l1:if(x[RN]!=1055&&x[RN]!=924&&x[RN]!=1097&&x[RN]!=978) goto l4;
pile[v[22]]=Z; pile[WZ1]=970; pile[WZ2]=RN; 
(*f[35])( );     /*CHGC1(Z,970,RN)*/
l4:v[0]=jvj; v[22]-=3; return;
l3:pile[v[22]]=jvj+3; pile[WZ1]=RES; pile[WZ2]=Z; pile[WZ3]=jvj+6; 
(*f[1444])( );     /*TRIE2(jvj+3,RES,Z,jvj+6)*/
goto l1;
l5:pile[v[22]]=204; pile[WZ1]=RES; pile[WZ2]=698; pile[WZ3]=Z; pile[WZ4]=jvj+4; 
(*f[567])( );     /*QUADRI11(204,RES,698,Z,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+2,jvj+1,jvj+4)*/
l2:if(x[jvj+3]!=incon) goto l3;
goto l1;
}
