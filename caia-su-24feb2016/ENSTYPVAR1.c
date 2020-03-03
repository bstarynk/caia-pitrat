#include "dx.h"
void ENSTYPVAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V=0,V9=0,V7=0,V8=0,V10=0;
int ED,F,EY;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

ED=pile[v[22]]; F=pile[v[22]+1]; EY=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l3:x[jvj+9]=x[ED] ;z[jvj+9]=z[ED];
l1:if((x[jvj+9]>0)) goto l2;
v[0]=jvj; v[22]-=3; return;
l2:x[jvj+7]=s[x[jvj+9]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+9];
for(a=x[F];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l4;
x[jvj+1]=x[jvj+7] ;z[jvj+1]=z[jvj+7];
pile[v[22]]=F; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(F,jvj+1)*/
pile[v[22]]=498; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=454)) goto l3;
pile[v[22]]=103; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,VV)*/
VV=pile[WZ2]; 
V=VV;
pile[v[22]]=515; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(515,jvj+1,V9)*/
V9=pile[WZ2]; 
x[jvj+8]=x[EY] ;z[jvj+8]=z[EY];
l5:if((x[jvj+8]<=0)) goto l7;
x[jvj+5]=s[x[jvj+8]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+8];
pile[v[22]]=110; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(110,jvj+5,V7)*/
V7=pile[WZ2]; 
if((V7!=V)) goto l6;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+5,V8)*/
V8=pile[WZ2]; 
if((V8!=V9)) goto l6;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
l8:pile[v[22]]=jvj+6; pile[WZ1]=892; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(jvj+6,892,jvj+1)*/
goto l3;
l4:x[jvj+9]=t[x[jvj+9]];
goto l1;
l6:x[jvj+8]=t[x[jvj+8]];
goto l5;
l7:pile[v[22]]=515; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+1,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=117; pile[WZ3]=V10; pile[WZ4]=jvj+6; 
(*f[752])( );     /*QUADRI15(110,V,117,V10,jvj+6)*/
pile[v[22]]=EY; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(EY,jvj+6)*/
goto l8;
}
