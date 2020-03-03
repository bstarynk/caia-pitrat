#include "dx.h"
void ALCTLL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,DX=0,NR=0,V7=0,V8=0,V10=0,V9=0;
int TYY,NM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10811;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==477&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TYY=pile[v[22]]; NM=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[TYY]!=451)) goto l1;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=0; pile[WZ1]=(-3007); 
(*f[37])( );     /*SRA0(0,(-3007),V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=NM; 
(*f[37])( );     /*SRA0(V2,NM,V3)*/
V3=pile[WZ2]; 
V7=V3-1;
V8=0;
l2:if((V8<=V7)) goto l3;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[126])( );     /*LND2(0,NR,DX)*/
NR=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0((-200),416,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+4,41,158,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=NR; pile[WZ2]=140; pile[WZ3]=NM; pile[WZ4]=jvj+5; pile[WZ5]=jvj+3; 
(*f[197])( );     /*QUADRI5(130,NR,140,NM,jvj+5,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=128; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+2,128,jvj+3)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:V10=c[0][V8];
V9=V10;
putchar(V9);
V8++;
goto l2;
}
