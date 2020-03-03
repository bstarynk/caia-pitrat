#include "dx.h"
void LIRESAUT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V11=0,V12=0,V7=0,V13=0,V14=0,V1=0,V2=0,DFF=0,V15=0,DX=0,V8=0,V10=0,V9=0;
int DF,N,S;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10369;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1129&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DF=pile[v[22]]; N=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[S] ;z[jvj+5]=z[S];
V15=DF;
l1:V1=bh[v[1]][V15];
if(V1==123||V1==59) goto l2;
V2=V15-1;
pile[v[22]]=V2; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[734])( );if(v[102]) goto l2;     /*LIRESQ0(V2,N,jvj+3,DFF)*/
DFF=pile[WZ3]; 
V3=bh[v[1]][DFF];
if(V3==32) goto l2;
pile[v[22]]=20; pile[WZ1]=10369; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10369,0,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,1,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l2:if(V1!=123&&V1!=59) goto l4;
pile[v[22]]=V15; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[734])( );if(v[102]) goto l4;     /*LIRESQ0(V15,N,jvj+4,DX)*/
DX=pile[WZ3]; 
V7=bh[v[1]][DX];
if(V7==59||V7==125) goto l3;
pile[v[22]]=20; pile[WZ1]=10369; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10369,0,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(41,2,V13,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; 
(*f[40])( );     /*SLG0(V14)*/
l3:pile[v[22]]=jvj+5; pile[WZ1]=120; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+5,120,jvj+4)*/
V8=bh[v[1]][DX];
if((V8!=59)) goto l4;
V10=DX+1;
V9=bh[v[1]][V10];
if((V9==125)) goto l4;
V15=DX;
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
goto l1;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
}
