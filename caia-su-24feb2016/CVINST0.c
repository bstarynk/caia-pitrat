#include "dx.h"
void CVINST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V17=0,V27=0;
int A,EV;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; EV=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]==651)) goto l1;
if((x[jvj+2]==649)) goto l2;
if((x[jvj+2]!=650)) goto l3;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,A,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=EV; pile[WZ1]=V27; 
(*f[331])( );     /*PLUE3(EV,V27)*/
l3:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+6)*/
x[jvj+12]=w[x[jvj+6]][9];
l4:if((x[jvj+12]>0)) goto l5;
x[jvj+13]=w[x[jvj+6]][8];
l7:if((x[jvj+13]<=0)) goto l10;
x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=jvj+9; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,A,jvj+10)*/
x[jvj+14]=x[jvj+10] ;z[jvj+14]=z[jvj+10];
l8:if((x[jvj+14]>0)) goto l9;
x[jvj+13]=t[x[jvj+13]];
goto l7;
l1:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,A,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+3,V)*/
V=pile[WZ2]; 
pile[v[22]]=EV; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(EV,V)*/
goto l3;
l2:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,A,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=EV; pile[WZ1]=V17; 
(*f[331])( );     /*PLUE3(EV,V17)*/
goto l3;
l5:x[jvj+7]=s[x[jvj+12]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+12];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+7,A,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=EV; 
(*f[1397])( );     /*CVINST0(jvj+8,EV)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l4;
l9:x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=jvj+11; pile[WZ1]=EV; 
(*f[1397])( );     /*CVINST0(jvj+11,EV)*/
x[jvj+14]=t[x[jvj+14]];
goto l8;
l10:v[0]=jvj; v[22]-=2; return;
}
