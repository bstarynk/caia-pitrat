#include "dx.h"
void ATOME28T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V6=0,V8=0,V1=0,V5=0,V3=0,V7=0;
int N;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=20028;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3453&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+3,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=473; pile[WZ1]=N; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(473,N,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=688; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,N,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=jvj+4; 
(*f[3032])( );if(v[102]) goto l1;     /*ENSDEP0(N,jvj+4)*/
pile[WZ1]=jvj+5; 
(*f[3033])( );if(v[102]) goto l1;     /*ENSARR0(N,jvj+5)*/
pile[v[22]]=jvj+4; 
(*f[457])( );if(v[102]) goto l1;     /*CARDENS0(jvj+4,V1)*/
V1=pile[WZ1]; 
V5=V6*V1;
pile[v[22]]=jvj+5; 
(*f[457])( );if(v[102]) goto l1;     /*CARDENS0(jvj+5,V3)*/
V3=pile[WZ1]; 
V7=V8*V3;
if((V5<=V7)) goto l1;
pile[v[22]]=101; pile[WZ1]=N; pile[WZ2]=110; pile[WZ3]=(-625); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(101,N,110,(-625),jvj+11)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(V9,858,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+8; 
(*f[189])( );     /*TRI4(jvj+7,v[13],642,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=3453; pile[WZ2]=246; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,3453,246,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=20028; pile[WZ2]=218; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+9,20028,218,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=(-20); pile[WZ2]=jvj+10; pile[WZ3]=159; pile[WZ4]=jvj+12; 
(*f[298])( );     /*TRIENS1(jvj+11,(-20),jvj+10,159,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+12,1,158,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[1559])( );     /*CONTRADICTION0(jvj+6)*/
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
