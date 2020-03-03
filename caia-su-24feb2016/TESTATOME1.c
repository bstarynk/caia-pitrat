#include "dx.h"
void TESTATOME1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V=0,DX=0,DXX=0,V2=0,V1=0,C=0,V7=0,V8=0,V10=0,V9=0;
int S;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11329;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==544&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,0,21,V4)*/
V4=pile[WZ3]; 
pile[WZ1]=V4; pile[WZ2]=409; 
(*f[42])( );     /*SRA1(135,V4,409,V5)*/
V5=pile[WZ3]; 
V7=V5-1;
V8=0;
l4:if((V8<=V7)) goto l5;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=(-1); 
(*f[131])( );     /*SMV0((-1),V,DX)*/
V=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=DX; pile[WZ1]=jvj+3; 
(*f[335])( );if(v[102]) goto l2;     /*LANT0(DX,jvj+3,DXX)*/
DXX=pile[WZ2]; 
V2=DXX+1;
V1=bh[v[1]][V2];
C=V1;
pile[v[22]]=100; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=22)) goto l3;
pile[v[22]]=jvj+3; 
(*f[543])( );     /*ETUCONTR0(jvj+3)*/
l3:pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=V; pile[WZ4]=jvj+5; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,V,jvj+5)*/
pile[v[22]]=S; pile[WZ1]=159; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(S,159,jvj+5)*/
if((C==43)) goto l1;
(*f[545])( );     /*AGIR0(S)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l5:V10=c[0][V8];
V9=V10;
putchar(V9);
V8++;
goto l4;
}
