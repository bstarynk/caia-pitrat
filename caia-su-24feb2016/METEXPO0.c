#include "dx.h"
void METEXPO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V4=0,V5=0,V6=0;
int R,P;
int RT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11400;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3732&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; P=pile[v[22]+1]; RT=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l1;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[4026])( );     /*SIMPEXPA0(jvj+5,P,jvj+6)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,R,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=P; pile[WZ2]=jvj+8; 
(*f[4026])( );     /*SIMPEXPA0(jvj+7,P,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; pile[WZ2]=P; pile[WZ3]=RT; 
(*f[4027])( );     /*SIMPTOT0(jvj+6,jvj+8,P,RT)*/
if((v[142]<=0)) goto l2;
V7=x[RT];
pile[v[22]]=20; pile[WZ1]=11400; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11400,0,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(41,3,V4,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V7; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(23,V7,V5,V6)*/
V6=pile[WZ3]; 
pile[v[22]]=V6; 
(*f[40])( );     /*SLG0(V6)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
