#include "dx.h"
void MENAGE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V8=0,V9=0,V10=0,V11=0,V12=0,V2=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10563;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==315&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=10061; pile[WZ1]=(-20); pile[WZ2]=333; pile[WZ3]=jvj+2; 
(*f[180])( );     /*TRIENS0(10061,(-20),333,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[85])( );     /*VG0(jvj+2)*/
(*f[91])( );     /*MND0()*/
pile[v[22]]=365; pile[WZ1]=10833; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,10833,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
V2=g[350];
if((V2<=0)) goto l6;
V3=vg[350];
if((V3!=0)) goto l3;
if((V2<3)) goto l5;
l3:pile[v[22]]=350; pile[WZ1]=10563; pile[WZ2]=0; pile[WZ3]=jvj+5; 
(*f[291])( );     /*INTERP4(350,10563,0,jvj+5)*/
if((x[jvj+5]==135)) goto l4;
l6:pile[v[22]]=32; 
(*f[707])( );     /*EAD0(32)*/
l7:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; 
(*f[357])( );     /*CL0(jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:if((V2<4)) goto l5;
goto l6;
l5:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V8; pile[WZ2]=10563; 
(*f[98])( );     /*SRA3(135,V8,10563,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V9,125,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=(-4669); 
(*f[37])( );     /*SRA0(V10,(-4669),V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=(-6390); 
(*f[37])( );     /*SRA0(V11,(-6390),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
if((V2!=2)) goto l6;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l6;
}
