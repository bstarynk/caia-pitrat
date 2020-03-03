#include "dx.h"
void ENSTYPVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V=0,V10=0,V8=0,V9=0,V11=0;
int ED;
int EY;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

ED=pile[v[22]]; EY=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
x[EY]=x[jvj+8] ;z[EY]=z[jvj+8];
x[jvj+1]=x[jvj+8] ;z[jvj+1]=z[jvj+8];
x[jvj+11]=x[ED] ;z[jvj+11]=z[ED];
l1:if((x[jvj+11]<=0)) goto l8;
x[jvj+9]=s[x[jvj+11]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+11];
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l2;
x[jvj+2]=x[jvj+9] ;z[jvj+2]=z[jvj+9];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+1,jvj+2)*/
pile[v[22]]=498; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(498,jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=454)) goto l7;
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+3,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+5,VV)*/
VV=pile[WZ2]; 
V=VV;
pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(515,jvj+2,V10)*/
V10=pile[WZ2]; 
x[jvj+10]=x[EY] ;z[jvj+10]=z[EY];
l3:if((x[jvj+10]<=0)) goto l5;
x[jvj+6]=s[x[jvj+10]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+10];
pile[v[22]]=110; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+6,V8)*/
V8=pile[WZ2]; 
if((V8!=V)) goto l4;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+6,V9)*/
V9=pile[WZ2]; 
if((V9!=V10)) goto l4;
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
l6:pile[v[22]]=jvj+7; pile[WZ1]=892; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+7,892,jvj+2)*/
l7:pile[v[22]]=ED; pile[WZ1]=jvj+1; pile[WZ2]=EY; 
(*f[4104])( );     /*ENSTYPVAR1(ED,jvj+1,EY)*/
l8:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+11]=t[x[jvj+11]];
goto l1;
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l5:pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(515,jvj+2,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=117; pile[WZ3]=V11; pile[WZ4]=jvj+7; 
(*f[752])( );     /*QUADRI15(110,V,117,V11,jvj+7)*/
pile[v[22]]=EY; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(EY,jvj+7)*/
goto l6;
}
