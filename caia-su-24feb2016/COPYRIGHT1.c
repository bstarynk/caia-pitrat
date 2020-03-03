#include "dx.h"
void COPYRIGHT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,J=0,V5=0,K=0,V7=0,V8=0,V9=0,V10=0,L=0,V12=0,V13=0,V14=0,V15=0,M=0,V17=0,V18=0,V16=0;
int NL,Q;
int WZ1,WZ2;

NL=pile[v[22]]; Q=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=0;
pile[v[22]]=71; pile[WZ1]=V1; 
(*f[227])( );     /*SPCMT0(71,V1,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; 
(*f[656])( );     /*SPLN2(V3,J)*/
J=pile[WZ1]; 
pile[v[22]]=72; pile[WZ1]=J; 
(*f[227])( );     /*SPCMT0(72,J,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; 
(*f[656])( );     /*SPLN2(V5,K)*/
K=pile[WZ1]; 
pile[v[22]]=73; pile[WZ1]=K; 
(*f[227])( );     /*SPCMT0(73,K,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=74; pile[WZ1]=V7; 
(*f[227])( );     /*SPCMT0(74,V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=75; pile[WZ1]=V8; 
(*f[227])( );     /*SPCMT0(75,V8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=76; pile[WZ1]=V9; 
(*f[227])( );     /*SPCMT0(76,V9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; 
(*f[656])( );     /*SPLN2(V10,L)*/
L=pile[WZ1]; 
pile[v[22]]=77; pile[WZ1]=L; 
(*f[227])( );     /*SPCMT0(77,L,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=78; pile[WZ1]=V12; 
(*f[227])( );     /*SPCMT0(78,V12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=79; pile[WZ1]=V13; 
(*f[227])( );     /*SPCMT0(79,V13,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=80; pile[WZ1]=V14; 
(*f[227])( );     /*SPCMT0(80,V14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; 
(*f[656])( );     /*SPLN2(V15,M)*/
M=pile[WZ1]; 
pile[v[22]]=83; pile[WZ1]=M; 
(*f[227])( );     /*SPCMT0(83,M,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=84; pile[WZ1]=V17; 
(*f[227])( );     /*SPCMT0(84,V17,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; 
(*f[656])( );     /*SPLN2(V18,V16)*/
V16=pile[WZ1]; 
v[22]-=2; return;
}
