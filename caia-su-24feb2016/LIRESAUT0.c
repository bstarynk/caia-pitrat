#include "dx.h"
void LIRESAUT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V12=0,V13=0,V7=0,V14=0,V15=0,V1=0,V2=0,DFF=0,V6=0,DX=0,V8=0,V10=0,V9=0;
int DF,N;
int EX;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10369;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==777&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DF=pile[v[22]]; N=pile[v[22]+1]; EX=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[EX]=x[jvj+3]=DX=incon;
V1=bh[v[1]][DF];
if(V1==123||V1==59) goto l1;
V2=DF-1;
pile[v[22]]=V2; pile[WZ1]=N; pile[WZ2]=EX; 
(*f[734])( );if(v[102]) goto l1;     /*LIRESQ0(V2,N,EX,DFF)*/
DFF=pile[WZ3]; 
V3=bh[v[1]][DFF];
if(V3==32) goto l1;
pile[v[22]]=20; pile[WZ1]=10369; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10369,0,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(41,1,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l1:V6=bh[v[1]][DF];
if(V6!=123&&V6!=59) goto l2;
pile[v[22]]=DF; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[734])( );if(v[102]) goto l2;     /*LIRESQ0(DF,N,jvj+3,DX)*/
DX=pile[WZ3]; 
V7=bh[v[1]][DX];
if(V7==59||V7==125) goto l2;
pile[v[22]]=20; pile[WZ1]=10369; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10369,0,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(41,2,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
l2:if(x[EX]==incon) goto l3;
if(x[jvj+3]!=incon) goto l5;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:if(x[jvj+3]!=incon) goto l4;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l4:if((V6!=123)) goto l5;
x[EX]=x[jvj+3] ;z[EX]=z[jvj+3];
l5:if(DX!=incon) goto l6;
l8:if(x[EX]!=incon) goto l9;
goto l7;
l6:V8=bh[v[1]][DX];
if((V8!=59)) goto l8;
V10=DX+1;
V9=bh[v[1]][V10];
if((V9==125)) goto l8;
pile[v[22]]=DX; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[1129])( );     /*LIRESAUT1(DX,N,jvj+3)*/
goto l8;
}
