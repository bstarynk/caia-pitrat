#include "dx.h"
void CREKPRODA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V10=0,V5=0,WW=0,V12=0;
int N,TL,YY,EE;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; TL=pile[v[22]+1]; YY=pile[v[22]+2]; EE=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(222,TL,jvj+5)*/
pile[v[22]]=762; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(762,N,jvj+6)*/
V12=x[jvj+6];
l6:if((V12>0)) goto l7;
v[0]=jvj; v[22]-=4; return;
l3:if((VV==WW)) goto l2;
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==VV) goto l2;
for(a=x[EE];a>0;a=t[a]) if(s[a]==VV) goto l2;
l5:x[jvj+8]=t[x[jvj+8]];
l4:if((x[jvj+8]<=0)) goto l8;
x[jvj+1]=s[x[jvj+8]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+8];
pile[v[22]]=110; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(110,jvj+1,V5)*/
V5=pile[WZ2]; 
if((V5!=WW)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+1,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[703])( );     /*USW0(jvj+2,jvj+3)*/
V10=x[jvj+6];
l1:if((V10<=0)) goto l9;
VV=s[V10];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VV) goto l3;
l2:V10=t[V10];
goto l1;
l7:WW=s[V12];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==WW) goto l8;
for(a=x[EE];a>0;a=t[a]) if(s[a]==WW) goto l8;
pile[v[22]]=1420; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1420,N,jvj+4)*/
x[jvj+8]=x[jvj+4] ;z[jvj+8]=z[jvj+4];
goto l4;
l9:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+1,jvj+7)*/
pile[v[22]]=YY; pile[WZ1]=jvj+7; 
(*f[1414])( );     /*AJANT0(YY,jvj+7)*/
pile[v[22]]=EE; pile[WZ1]=WW; 
(*f[331])( );     /*PLUE3(EE,WW)*/
pile[v[22]]=N; pile[WZ1]=TL; pile[WZ2]=YY; pile[WZ3]=EE; 
(*f[1418])( );     /*CREKPRODA0(N,TL,YY,EE)*/
l8:V12=t[V12];
goto l6;
}
