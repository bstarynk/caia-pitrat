#include "dx.h"
void CREPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int N;
int SG,PB;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11156;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==608&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; SG=pile[v[22]+1]; PB=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=878; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(878,N,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
x[PB]=250 ;z[PB]=250;
l6:x[SG]=120 ;z[SG]=120;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+3,V2)*/
V2=pile[WZ2]; 
if((V2!=(-7141))) goto l3;
x[jvj+7]=x[jvj+3] ;z[jvj+7]=z[jvj+3];
pile[v[22]]=448; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(448,N,jvj+4)*/
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=jvj+7; 
(*f[972])( );     /*CREINIPB0(jvj+7)*/
pile[v[22]]=448; pile[WZ1]=jvj+7; 
(*f[71])( );     /*ENLV0(448,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=PB; 
(*f[973])( );     /*EXECREE0(jvj+7,PB)*/
if((x[PB]==250)) goto l6;
x[SG]=287 ;z[SG]=287;
goto l7;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=448; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+7,448,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l4;
}
