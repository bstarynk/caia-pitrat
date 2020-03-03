#include "dx.h"
void AJMEMA2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,AA=0,V3=0,YY=0;
int A,H,B,C;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; H=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[H] ;z[jvj+1]=z[H];
l1:V1=x[A];
AA=V1;
pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+1,jvj+2)*/
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+2,jvj+3)*/
V3=x[jvj+3];
YY=V3;
if((AA>YY)) goto l8;
if((AA!=YY)) goto l7;
pile[v[22]]=763; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(763,jvj+2,jvj+6)*/
l2:if((x[jvj+6]>0)) goto l3;
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=459; pile[WZ3]=B; pile[WZ4]=jvj+8; 
(*f[567])( );     /*QUADRI11(117,1,459,B,jvj+8)*/
if((x[C]==250)) goto l6;
pile[v[22]]=jvj+8; pile[WZ1]=475; pile[WZ2]=C; 
(*f[35])( );     /*CHGC1(jvj+8,475,C)*/
l6:pile[v[22]]=jvj+2; pile[WZ1]=763; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+2,763,jvj+8)*/
l7:v[0]=jvj; v[22]-=4; return;
l3:x[jvj+4]=s[x[jvj+6]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+6];
pile[v[22]]=459; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(459,jvj+4,jvj+7)*/
if((x[jvj+7]!=x[B])) goto l4;
if((x[C]==250)) goto l5;
pile[v[22]]=475; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(475,jvj+4,jvj+5)*/
if((x[jvj+5]==x[C])) goto l5;
l4:x[jvj+6]=t[x[jvj+6]];
goto l2;
l5:pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,117,1)*/
goto l7;
l8:x[jvj+1]=x[jvj+2] ;z[jvj+1]=z[jvj+2];
goto l1;
}
