#include "dx.h"
void DVF4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0;
int V,VV;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10477;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1796&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; VV=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=283; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(283,jvj+4,jvj+5)*/
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+7; 
(*f[329])( );     /*TRI13(V,140,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=283; 
(*f[36])( );     /*PLUSC0(jvj+4,283,jvj+7)*/
l4:pile[v[22]]=jvj+7; pile[WZ1]=110; pile[WZ2]=VV; 
(*f[177])( );     /*CHGC4(jvj+7,110,VV)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+6,V3)*/
V3=pile[WZ2]; 
if((V3!=V)) goto l3;
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
goto l4;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
}
