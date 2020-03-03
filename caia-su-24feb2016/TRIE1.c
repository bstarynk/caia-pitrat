#include "dx.h"
void TRIE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0;
int RES,Z,BT,SN;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

RES=pile[v[22]]; Z=pile[v[22]+1]; BT=pile[v[22]+2]; SN=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
x[jvj+2]=x[jvj+1] ;z[jvj+2]=z[jvj+1];
pile[v[22]]=BT; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(BT,jvj+2,jvj+3)*/
if((x[SN]==36)) goto l1;
if((x[SN]!=52)) goto l2;
pile[v[22]]=204; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(204,jvj+3,V4)*/
V4=pile[WZ2]; 
if((RES<=V4)) goto l6;
l2:if(x[jvj+3]!=incon) goto l3;
l4:v[0]=jvj; v[22]-=4; return;
l1:pile[v[22]]=204; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(204,jvj+3,V3)*/
V3=pile[WZ2]; 
if((RES>=V3)) goto l6;
goto l2;
l3:pile[v[22]]=jvj+3; pile[WZ1]=RES; pile[WZ2]=Z; pile[WZ3]=SN; 
(*f[1444])( );     /*TRIE2(jvj+3,RES,Z,SN)*/
goto l4;
l5:pile[v[22]]=204; pile[WZ1]=RES; pile[WZ2]=698; pile[WZ3]=Z; pile[WZ4]=jvj+4; 
(*f[567])( );     /*QUADRI11(204,RES,698,Z,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ1]=BT; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+2,BT,jvj+4)*/
goto l2;
l6:pile[v[22]]=Z; pile[WZ1]=698; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(Z,698,jvj+6)*/
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=204; pile[WZ3]=RES; pile[WZ4]=jvj+6; pile[WZ5]=jvj+5; 
(*f[47])( );     /*QUADRI0(120,jvj+3,204,RES,jvj+6,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=BT; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+2,BT,jvj+5)*/
goto l4;
}
