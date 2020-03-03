#include "dx.h"
void SNAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V11=0,V17=0,V16=0,V18=0,V10=0,V9=0,V15=0,V22=0;
int K,X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V22=K;
l4:pile[v[22]]=226; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(226,X,jvj+4)*/
x[jvj+7]=x[jvj+4] ;z[jvj+7]=z[jvj+4];
l5:if((x[jvj+7]<=0)) goto l8;
x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l6;     /*FNDC2(162,jvj+2,V10)*/
V10=pile[WZ2]; 
V9=V10;
if((V9<=V22)) goto l6;
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
l1:if((x[jvj+6]>0)) goto l2;
x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+2,jvj+3)*/
V11=x[jvj+3];
V17=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V17,0,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(41,V11,V16,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
l7:pile[v[22]]=0; pile[WZ1]=jvj+5; 
(*f[292])( );     /*SNAL0(0,jvj+5)*/
pile[v[22]]=162; 
(*f[219])( );if(v[102]) goto l8;     /*FNDC2(162,jvj+5,V15)*/
V15=pile[WZ2]; 
V22=V15;
goto l4;
l2:x[jvj+1]=s[x[jvj+6]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+6];
pile[v[22]]=162; pile[WZ1]=jvj+1; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+1,V3)*/
V3=pile[WZ2]; 
V2=V3;
if((V2<=V22)) goto l3;
if((V2<V9)) goto l6;
l3:x[jvj+6]=t[x[jvj+6]];
goto l1;
l6:x[jvj+7]=t[x[jvj+7]];
goto l5;
l8:v[0]=jvj; v[22]-=2; return;
}
