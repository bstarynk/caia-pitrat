#include "dx.h"
void CLASSECOND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V6=0,V8=0,V4=0,V5=0,V7=0;
int X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11251;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==778&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[X] ;z[jvj+5]=z[X];
l5:x[jvj+3]=x[jvj+5] ;z[jvj+3]=z[jvj+5];
pile[v[22]]=366; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(366,jvj+3,jvj+6)*/
pile[v[22]]=107; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+4)*/
x[jvj+7]=x[jvj+4] ;z[jvj+7]=z[jvj+4];
l2:if((x[jvj+7]>0)) goto l3;
pile[v[22]]=jvj+6; 
(*f[778])( );     /*CLASSECOND0(jvj+6)*/
l6:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+3,jvj+5)*/
goto l5;
l1:V6=x[X];
V8=x[jvj+2];
pile[v[22]]=24; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(24,0,35,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V6; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(20,V6,V4,V5)*/
V5=pile[WZ3]; 
pile[WZ1]=V8; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(20,V8,V5,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
l4:x[jvj+7]=t[x[jvj+7]];
goto l2;
l3:x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
pile[v[22]]=jvj+2; 
(*f[1130])( );     /*CLASSECONDA0(jvj+2)*/
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(510,jvj+2,V1)*/
V1=pile[WZ2]; 
goto l4;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
