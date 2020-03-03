#include "dx.h"
void ACCORDXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V6=0;
int XP,V,BA;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

XP=pile[v[22]]; V=pile[v[22]+1]; BA=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=incon;
if((x[XP]==1896)) goto l1;
pile[v[22]]=292; pile[WZ1]=21; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(292,21,jvj+1)*/
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==V) goto l1;
l2:pile[v[22]]=BA; pile[WZ1]=V; pile[WZ2]=jvj+2; 
(*f[1491])( );     /*VDSBA0(BA,V,jvj+2)*/
pile[v[22]]=1261; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1261,jvj+2,jvj+3)*/
if(x[RES]==incon) goto l3;
l9:v[0]=jvj; v[22]-=4; return;
l1:x[RES]=68 ;z[RES]=68;
goto l2;
l3:if((x[XP]==1881)) goto l4;
if((x[XP]!=129)) goto l7;
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==1814) goto l5;
pile[v[22]]=578; pile[WZ1]=100; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(578,100,jvj+4)*/
V6=x[jvj+3];
l6:if((V6<=0)) goto l7;
L=s[V6];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==L) goto l5;
V6=t[V6];
goto l6;
l4:for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==1050) goto l5;
l7:for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[XP]) goto l5;
pile[v[22]]=218; pile[WZ1]=XP; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,XP,jvj+5)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l5;
l8:x[RES]=67 ;z[RES]=67;
goto l9;
l5:x[RES]=68 ;z[RES]=68;
goto l9;
}
