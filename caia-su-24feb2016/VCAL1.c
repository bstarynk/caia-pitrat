#include "dx.h"
void VCAL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V21=0,V15=0,V24=0,V37=0,V32=0;
int A,R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=22;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]==435)) goto l1;
if((x[jvj+1]!=39)) goto l5;
pile[v[22]]=113; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(113,A,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l5;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V21)*/
V21=pile[WZ2]; 
V15=V21;
pile[v[22]]=R; pile[WZ1]=V15; 
(*f[331])( );     /*PLUE3(R,V15)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l1:pile[v[22]]=436; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,A,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+2,V)*/
V=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(R,V)*/
l5:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==44)) goto l6;
if((x[jvj+10]!=25)) goto l9;
x[jvj+12]=d[20];z[jvj+12]=0;
l7:if((x[jvj+12]<=0)) goto l9;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+13,A,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+14,V37)*/
V37=pile[WZ2]; 
V32=V37;
pile[v[22]]=R; pile[WZ1]=V32; 
(*f[331])( );     /*PLUE3(R,V32)*/
l8:x[jvj+12]=t[x[jvj+12]];
goto l7;
l4:x[jvj+19]=x[jvj+7] ;z[jvj+19]=z[jvj+7];
l18:pile[v[22]]=jvj+19; pile[WZ1]=R; 
(*f[1902])( );     /*VCAL1(jvj+19,R)*/
x[jvj+22]=t[x[jvj+22]];
l17:if((x[jvj+22]<=0)) goto l16;
x[jvj+7]=s[x[jvj+22]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+22];
x[jvj+19]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,A,jvj+6)*/
if((x[jvj+6]!=39)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+7,jvj+8)*/
x[jvj+19]=x[jvj+8] ;z[jvj+19]=z[jvj+8];
goto l18;
l6:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+11,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V24; 
(*f[331])( );     /*PLUE3(R,V24)*/
l9:if(x[jvj+1]!=incon) goto l10;
l19:v[0]=jvj; v[22]-=2; return;
l10:if((x[jvj+1]==114)) goto l14;
x[jvj+20]=w[x[jvj+1]][9];
l11:if((x[jvj+20]<=0)) goto l14;
x[jvj+15]=s[x[jvj+20]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+20];
if((x[jvj+15]==436)) goto l12;
if((x[jvj+1]!=113)) goto l13;
if((x[jvj+15]==103)) goto l12;
l13:pile[v[22]]=jvj+15; pile[WZ1]=A; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+15,A,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=R; 
(*f[1902])( );     /*VCAL1(jvj+16,R)*/
l12:x[jvj+20]=t[x[jvj+20]];
goto l11;
l14:x[jvj+21]=w[x[jvj+1]][8];
l15:if((x[jvj+21]<=0)) goto l19;
x[jvj+17]=s[x[jvj+21]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+21];
if((x[jvj+17]==114)) goto l16;
pile[v[22]]=jvj+17; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,A,jvj+18)*/
x[jvj+22]=x[jvj+18] ;z[jvj+22]=z[jvj+18];
goto l17;
l16:x[jvj+21]=t[x[jvj+21]];
goto l15;
}
