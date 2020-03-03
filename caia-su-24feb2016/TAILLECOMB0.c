#include "dx.h"
void TAILLECOMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V1=0,V3=0,V4=0,V5=0,V2=0,V7=0,V8=0,V9=0,V12=0,V13=0,V14=0,V15=0,V16=0,V17=0,V18=0,V19=0,V20=0,V21=0,V24=0,V25=0,V36=0,V35=0,V26=0,V28=0,V29=0,V30=0,V32=0,V33=0,V31=0;
int N;
int WZ1,WZ2,WZ3;

v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=incon;
V6=0;
v[2]=v[1];
V1=V6;
v[1]=4;
pile[v[22]]=(-8207); pile[WZ1]=V1; 
(*f[64])( );     /*SRA2((-8207),V1,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V3,32,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V4,62,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-4539),V5,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V7)*/
V7=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V7; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V7,406,130)*/
if((v[130]<0)) goto l1;
V12=0;
V13=v[17];
v[2]=v[1];
V14=V12;
v[1]=4;
pile[v[22]]=(-4539); pile[WZ1]=V14; 
(*f[64])( );     /*SRA2((-4539),V14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V15,0,V16)*/
V16=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V16; pile[WZ1]=1146; pile[WZ2]=2; 
(*f[67])( );     /*SPA0(V16,1146,2)*/
fscanf(fx[2],"%s",res);
fclose(fx[2]);
v[17]=V13;
V17=0;
v[2]=v[1];
V18=V17;
v[1]=4;
pile[v[22]]=(-4501); pile[WZ1]=V18; 
(*f[64])( );     /*SRA2((-4501),V18,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=(-4539); pile[WZ1]=V19; 
(*f[64])( );     /*SRA2((-4539),V19,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V20,0,V21)*/
V21=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V21; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V21,406,130)*/
l1:if((v[130]<0)) goto l2;
V24=0;
V25=0;
V36=V25;
V35=V24;
l5:V26=res[V35];
V28=V26;
if((V28<48)) goto l8;
if((V28>57)) goto l8;
V29=135;
l6:if((V29==135)) goto l7;
N=V36;
l2:if((v[130]>=0)) goto l3;
pile[v[22]]=17; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(17,0,126,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11003; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(20,11003,V8,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l3:if(N!=incon) goto l4;
v[22]-=1; v[102]=1;return;
l4:v[22]-=1; pile[v[22]]=N; v[102]=0;return;
l7:V30=V35+1;
V32=V36*10;
V33=V26-48;
V31=V32+V33;
V35=V30;
V36=V31;
goto l5;
l8:V29=134;
goto l6;
}
