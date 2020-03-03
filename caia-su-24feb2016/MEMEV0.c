#include "dx.h"
void MEMEV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X1,X2,L;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

X1=pile[v[22]]; X2=pile[v[22]+1]; L=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=X1; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,X1,jvj+10)*/
pile[WZ1]=X2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,X2,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=L; pile[WZ3]=jvj+12; 
(*f[2210])( );     /*MEMEL0(jvj+10,jvj+11,L,jvj+12)*/
if((x[jvj+12]==134)) goto l6;
l1:pile[v[22]]=1157; pile[WZ1]=X1; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1157,X1,jvj+1)*/
if((x[jvj+1]==78)) goto l10;
l8:x[jvj+13]=d[108];z[jvj+13]=0;
l7:if((x[jvj+13]<=0)) goto l10;
x[jvj+2]=s[x[jvj+13]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+13];
pile[v[22]]=jvj+2; pile[WZ1]=X2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+2,X2,jvj+3)*/
l3:pile[v[22]]=jvj+2; pile[WZ1]=X1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+2,X1,jvj+5)*/
l5:pile[v[22]]=jvj+2; pile[WZ1]=X1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+2,X1,jvj+7)*/
pile[WZ1]=X2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+2,X2,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=L; pile[WZ3]=jvj+9; 
(*f[2172])( );if(v[102]) goto l9;     /*MEMEV0(jvj+7,jvj+8,L,jvj+9)*/
if((x[jvj+9]==134)) goto l6;
l9:x[jvj+13]=t[x[jvj+13]];
goto l7;
l2:pile[v[22]]=jvj+2; pile[WZ1]=X1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+2,X1,jvj+4)*/
l6:x[RES]=134 ;z[RES]=134;
v[0]=jvj; v[22]-=4; v[102]=0;return;
l4:pile[v[22]]=jvj+2; pile[WZ1]=X2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+2,X2,jvj+6)*/
goto l6;
l10:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
