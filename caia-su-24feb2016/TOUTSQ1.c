#include "dx.h"
void TOUTSQ1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V10=0,V1=0,DFF=0,V2=0,V7=0;
int N,T;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10316;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==776&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[T] ;z[jvj+4]=z[T];
l1:
(*f[74])( );     /*LK0()*/
V1=bh[v[1]][0];
if(V1==32||V1==91||V1==123) goto l3;
pile[v[22]]=(-1); pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[734])( );if(v[102]) goto l3;     /*LIRESQ0((-1),N,jvj+3,DFF)*/
DFF=pile[WZ3]; 
pile[v[22]]=jvj+4; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+4,120,jvj+3)*/
pile[v[22]]=N; pile[WZ1]=jvj+3; 
(*f[776])( );     /*TOUTSQ1(N,jvj+3)*/
l3:if(V1!=91&&V1!=123) goto l5;
x[jvj+7]=incon;
if((V1==91)) goto l2;
x[jvj+7]=918 ;z[jvj+7]=918;
l6:pile[v[22]]=jvj+7; pile[WZ1]=158; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+7,158,jvj+5)*/
pile[v[22]]=0; pile[WZ1]=jvj+5; 
(*f[321])( );if(v[102]) goto l5;     /*LCANT0(0,jvj+5,V2)*/
V2=pile[WZ2]; 
V7=V2+1;
pile[v[22]]=V7; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[777])( );if(v[102]) goto l5;     /*LIRESAUT0(V7,N,jvj+6)*/
V8=bh[v[1]][V2];
if(V8==93||V8==125) goto l4;
pile[v[22]]=20; pile[WZ1]=10316; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10316,0,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V9; 
(*f[39])( );     /*SDX0(41,1,V9,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; 
(*f[40])( );     /*SLG0(V10)*/
l4:pile[v[22]]=jvj+4; pile[WZ1]=120; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+4,120,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=366; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+5,366,jvj+6)*/
x[jvj+4]=x[jvj+5] ;z[jvj+4]=z[jvj+5];
goto l1;
l2:x[jvj+7]=433 ;z[jvj+7]=433;
goto l6;
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
