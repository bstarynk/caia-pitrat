#include "dx.h"
void LAND0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DZ=0,V2=0;
int DR,K,M;
int DY,EX,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11693;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1375&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; K=pile[v[22]+1]; M=pile[v[22]+2]; EX=pile[v[22]+4]; C=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
DY=incon;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=K; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,K,jvj+6)*/
pile[WZ1]=1736; pile[WZ2]=111; pile[WZ3]=jvj+6; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,1736,111,jvj+6,EX)*/
pile[v[22]]=DR; pile[WZ1]=67; pile[WZ3]=jvj+3; 
(*f[1597])( );if(v[102]) goto l2;     /*LFACT1(DR,67,DZ,jvj+3)*/
DZ=pile[WZ2]; 
pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+4; 
(*f[666])( );if(v[102]) goto l1;     /*SMA3(DZ,64,66,jvj+4)*/
if((x[jvj+4]!=x[K])) goto l1;
(*f[667])( );if(v[102]) goto l1;     /*CRK0(DZ,V2)*/
V2=pile[WZ1]; 
pile[v[22]]=EX; pile[WZ1]=1662; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(EX,1662,jvj+3)*/
pile[v[22]]=V2; pile[WZ1]=K; pile[WZ2]=M; pile[WZ3]=EX; pile[WZ5]=C; 
(*f[1599])( );if(v[102]) goto l1;     /*LAND1(V2,K,M,EX,DY,C)*/
DY=pile[WZ4]; 
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; pile[v[22]+3]=DY; v[102]=0;return;
l1:DY=DZ;
pile[v[22]]=EX; pile[WZ1]=1662; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(EX,1662,jvj+3)*/
if((x[M]!=68)) goto l2;
pile[v[22]]=DY; pile[WZ1]=64; pile[WZ2]=66; pile[WZ3]=jvj+5; 
(*f[666])( );if(v[102]) goto l2;     /*SMA3(DY,64,66,jvj+5)*/
x[jvj+7]=339 ;z[jvj+7]=339;
if((x[jvj+7]!=x[jvj+5])) goto l2;
x[C]=x[jvj+7] ;z[C]=z[jvj+7];
goto l4;
l2:x[C]=250 ;z[C]=250;
if(DY!=incon) goto l4;
DY=x[EX]=x[C]=incon;
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
}
