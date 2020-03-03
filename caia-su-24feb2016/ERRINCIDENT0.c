#include "dx.h"
void ERRINCIDENT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V3=0,V4=0,V6=0,V8=0,V10=0,V1=0;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10736;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==611&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
J=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=vv[19];
if((V1==0)) goto l3;
if((V1<=0)) goto l5;
vv[0]=J;
if((V1!=2)) goto l4;
I=fintravail;
l1:if((I>v[0])) goto l4;
V3=z[I];
if((V3!=(-100))) goto l2;
V4=x[I];
if((V4<=sepbase)) goto l2;
pile[v[22]]=41; pile[WZ1]=J; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,J,0,V6)*/
V6=pile[WZ3]; 
pile[WZ1]=I; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(41,I,V6,V8)*/
V8=pile[WZ3]; 
pile[WZ1]=V4; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(41,V4,V8,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
l2:I++;
goto l1;
l3:pile[v[22]]=J; 
(*f[977])( );     /*SORTA1(J)*/
(*f[15])( );     /*ERR1(J)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=10736; pile[WZ1]=v[0]; 
(*f[16])( );     /*DERNIERBLOC0(10736,v[0])*/
(*f[17])( );     /*FERMER0()*/
goto l5;
}
