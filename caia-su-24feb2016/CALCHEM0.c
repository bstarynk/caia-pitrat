#include "dx.h"
void CALCHEM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M,K,E,RES;
int R,F;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10915;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1331&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; K=pile[v[22]+1]; E=pile[v[22]+2]; RES=pile[v[22]+3]; R=pile[v[22]+4]; F=pile[v[22]+5]; v[22]+=6; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+4]=x[jvj+7] ;z[jvj+4]=z[jvj+7];
pile[v[22]]=M; pile[WZ1]=jvj+3; 
(*f[378])( );     /*CPI0(M,jvj+3)*/
pile[v[22]]=E; pile[WZ1]=jvj+5; 
(*f[195])( );     /*CPE0(E,jvj+5)*/
pile[v[22]]=jvj+3; pile[WZ1]=924; 
(*f[762])( );     /*AJNUM0(jvj+3,924)*/
if((x[jvj+4]==0)) goto l1;
pile[WZ1]=1049; pile[WZ2]=jvj+4; 
(*f[34])( );     /*CHGC0(jvj+3,1049,jvj+4)*/
l1:pile[v[22]]=jvj+3; pile[WZ1]=909; pile[WZ2]=K; 
(*f[35])( );     /*CHGC1(jvj+3,909,K)*/
pile[WZ1]=907; pile[WZ2]=jvj+5; 
(*f[34])( );     /*CHGC0(jvj+3,907,jvj+5)*/
pile[WZ1]=576; pile[WZ2]=RES; 
(*f[35])( );     /*CHGC1(jvj+3,576,RES)*/
pile[WZ1]=R; 
(*f[968])( );     /*FAIRESSAI0(jvj+3,R)*/
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=1246; pile[WZ1]=jvj+6; pile[WZ2]=F; 
(*f[33])( );     /*FNDE0(1246,jvj+6,F)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; return;
}
