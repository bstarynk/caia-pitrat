#include "dx.h"
void ERRV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V3=0,V4=0,V5=0,V6=0,V8=0,V1=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=11103;z[jvj+1]=(-100);
if(v[90]==6&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=vv[19];
if((V1!=1)) goto l4;
vv[0]=14;
I=fintravail;
l1:if((I<=v[0])) goto l3;
pile[v[22]]=11103; pile[WZ1]=v[0]; 
(*f[16])( );     /*DERNIERBLOC0(11103,v[0])*/
(*f[17])( );     /*FERMER0()*/
l5:x[jvj+1]=incon; v[0]=jvj; return;
l3:V3=z[I];
if((V3!=(-100))) goto l2;
V4=x[I];
if((V4<=sepbase)) goto l2;
pile[v[22]]=41; pile[WZ1]=14; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,14,0,V5)*/
V5=pile[WZ3]; 
pile[WZ1]=I; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,I,V5,V6)*/
V6=pile[WZ3]; 
pile[WZ1]=V4; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(41,V4,V6,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; 
(*f[40])( );     /*SLG0(V8)*/
l2:I++;
goto l1;
l4:pile[v[22]]=1188; 
(*f[14])( );     /*SORTA0(1188)*/
pile[v[22]]=677; 
(*f[15])( );     /*ERR1(677)*/
goto l5;
}
