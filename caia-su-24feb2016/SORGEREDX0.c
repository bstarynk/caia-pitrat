#include "dx.h"
void SORGEREDX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0;
int TY,BL,EZ,NA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

TY=pile[v[22]]; BL=pile[v[22]+1]; EZ=pile[v[22]+2]; NA=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[TY]!=1005)) goto l5;
if((NA!=999)) goto l5;
x[jvj+8]=x[EZ] ;z[jvj+8]=z[EZ];
l2:if((x[jvj+8]<=0)) goto l5;
x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,jvj+2,jvj+5)*/
pile[v[22]]=983; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(983,jvj+5,jvj+6)*/
x[jvj+3]=x[jvj+6] ;z[jvj+3]=z[jvj+6];
pile[v[22]]=878; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(878,jvj+3,jvj+4)*/
x[jvj+7]=x[jvj+4] ;z[jvj+7]=z[jvj+4];
l1:if((x[jvj+7]<=0)) goto l3;
x[jvj+1]=s[x[jvj+7]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+7];
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+1,V4)*/
V4=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V4==V5)) goto l4;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:pile[v[22]]=jvj+1; pile[WZ1]=972; pile[WZ2]=BL; 
(*f[36])( );     /*PLUSC0(jvj+1,972,BL)*/
l3:x[jvj+8]=t[x[jvj+8]];
goto l2;
l5:v[0]=jvj; v[22]-=4; return;
}
