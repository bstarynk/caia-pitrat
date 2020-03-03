#include "dx.h"
void METORDRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V24=0,V17=0;
int A,B,C;
int BB,CC;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; BB=pile[v[22]+3]; CC=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=277; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(277,B,jvj+1)*/
if((x[jvj+1]!=480)) goto l2;
x[BB]=x[B] ;z[BB]=z[B];
l1:x[jvj+11]=x[C] ;z[jvj+11]=z[C];
l9:pile[v[22]]=277; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(277,jvj+11,jvj+13)*/
l10:if((x[A]!=489)) goto l12;
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+11,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=BB; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,BB,jvj+15)*/
pile[v[22]]=481; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(481,jvj+15,jvj+16)*/
if((x[jvj+16]!=0)) goto l12;
pile[v[22]]=277; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(277,jvj+11,jvj+14)*/
l12:x[CC]=x[jvj+11] ;z[CC]=z[jvj+11];
l14:v[0]=jvj; v[22]-=5; v[102]=0;return;
l2:pile[v[22]]=277; pile[WZ1]=C; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(277,C,jvj+2)*/
if((x[jvj+2]!=480)) goto l4;
x[BB]=x[C] ;z[BB]=z[C];
l3:x[jvj+11]=x[B] ;z[jvj+11]=z[B];
goto l9;
l4:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,B,jvj+3)*/
if((x[jvj+3]!=484)) goto l5;
pile[v[22]]=B; pile[WZ1]=BB; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(B,BB)*/
goto l1;
l5:pile[v[22]]=100; pile[WZ1]=C; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,C,jvj+4)*/
if((x[jvj+4]!=484)) goto l13;
pile[v[22]]=C; pile[WZ1]=BB; 
(*f[200])( );if(v[102]) goto l13;     /*NDD0(C,BB)*/
goto l3;
l6:pile[v[22]]=498; pile[WZ1]=BB; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(498,BB,jvj+5)*/
pile[v[22]]=481; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(481,jvj+5,jvj+6)*/
l7:if((x[jvj+6]<=0)) goto l10;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+9]=w[x[jvj+8]][3])==incon) goto l8;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; pile[WZ3]=jvj+10; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(jvj+7,jvj+9,V22,jvj+10)*/
V22=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(jvj+11,jvj+9,V24,jvj+12)*/
V24=pile[WZ2]; 
if((V22!=V24)) goto l8;
x[CC]=x[jvj+7] ;z[CC]=z[jvj+7];
goto l14;
l8:x[jvj+6]=t[x[jvj+6]];
goto l7;
l11:pile[v[22]]=jvj+15; pile[WZ1]=V17; pile[WZ2]=CC; 
(*f[1765])( );     /*AJARR0(jvj+15,V17,CC)*/
goto l14;
l13:x[BB]=x[CC]=incon;
v[0]=jvj; v[22]-=5; v[102]=1;return;
}
