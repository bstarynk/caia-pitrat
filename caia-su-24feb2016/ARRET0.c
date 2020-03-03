#include "dx.h"
void ARRET0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V9=0,V10=0,V8=0,V12=0,V14=0,V16=0,V17=0,V18=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10586;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==84&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=vv[53];
if((V3<=0)) goto l3;
V9=(time(tzt)-inccc);
V10=vv[13];
V8=V9-V10;
pile[v[22]]=41; pile[WZ1]=V8; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V8,0,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; pile[WZ1]=(-5570); 
(*f[37])( );     /*SRA0(V12,(-5570),V2)*/
V2=pile[WZ2]; 
V1=incon;
if((V8>1)) goto l1;
V1=V2;
l2:pile[v[22]]=41; pile[WZ1]=V3; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(41,V3,V1,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V14; pile[WZ2]=53; 
(*f[42])( );     /*SRA1(135,V14,53,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V16,(-740),V17)*/
V17=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10900; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,10900,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
l3:exit(0);
l4:x[jvj+1]=incon; v[0]=jvj; return;
l1:pile[v[22]]=V2; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V2,83,V1)*/
V1=pile[WZ2]; 
goto l2;
}
