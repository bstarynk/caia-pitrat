#include "dx.h"
void FERMER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V17=0,V18=0,V1=0,V12=0,V14=0,V16=0,V7=0,V8=0,V9=0,V11=0,V13=0,V15=0,V6=0;
int WZ1,WZ2,WZ3;


WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
vv[40]=v[90];
V5=vv[11];
if((V5==2)) goto l1;
if((V5!=1)) goto l2;
pile[v[22]]=23; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(23,0,126,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=12345678; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(41,12345678,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
fflush(stdout);
l2:V1=vv[0];
if((V1<=0)) goto l3;
if((V1==99)) goto l3;
V12=v[0];
V14=v[22];
V16=v[14];
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(15,0,126,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10847; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(20,10847,V7,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(41,V1,V8,V9)*/
V9=pile[WZ3]; 
pile[WZ1]=V12; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(41,V12,V9,V11)*/
V11=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,V14,V11,V13)*/
V13=pile[WZ3]; 
pile[WZ1]=V16; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(41,V16,V13,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
fflush(stdout);
l3:V6=vv[11];
if((V6!=0)) goto l4;
(*f[1])( );     /*PRINCIPAL0()*/
l4:return;
l1:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l2;
}
