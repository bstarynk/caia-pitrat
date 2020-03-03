#include "dx.h"
void Z257Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=15758;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1890&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,NNNY,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=962)) goto l3;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,NNNY,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==134)) goto l1;
if((x[jvj+5]!=135)) goto l3;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,NNNY,jvj+7)*/
NNNT=93;
pile[v[22]]=NNNY; pile[WZ1]=jvj+7; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+7,NNNX)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:NNNT=94;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+6)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+6; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+6,NNNX)*/
goto l4;
l3:x[NNNX]=NNNT=incon;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
