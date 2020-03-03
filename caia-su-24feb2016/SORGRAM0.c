#include "dx.h"
void SORGRAM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I,N;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11612;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==719&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1640; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1640,N,jvj+5)*/
pile[v[22]]=287; pile[WZ1]=1640; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(287,1640,jvj+6)*/
pile[v[22]]=N; pile[WZ1]=jvj+7; 
(*f[1099])( );     /*ATTRIBOBJGRAM2(N,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=N; pile[WZ2]=jvj+7; pile[WZ3]=I; 
(*f[1100])( );if(v[102]) goto l1;     /*SORGRAMA0(jvj+6,N,jvj+7,I,J)*/
J=pile[WZ4]; 
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l1:pile[v[22]]=1640; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1640,N,jvj+2)*/
l2:pile[v[22]]=1640; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1640,N,jvj+3)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l3:pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,N,jvj+4)*/
goto l5;
l4:pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,N,jvj+8)*/
pile[v[22]]=I; 
(*f[223])( );if(v[102]) goto l2;     /*XX0(I,N,J)*/
J=pile[WZ2]; 
goto l6;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=N; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,N,jvj+9)*/
pile[v[22]]=I; pile[WZ1]=jvj+9; 
(*f[223])( );if(v[102]) goto l5;     /*XX0(I,jvj+9,J)*/
J=pile[WZ2]; 
goto l6;
}
