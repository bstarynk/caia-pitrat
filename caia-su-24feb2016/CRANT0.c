#include "dx.h"
void CRANT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V8=0,V7=0,V10=0;
int V,X,BL;
int EA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; X=pile[v[22]+1]; BL=pile[v[22]+2]; EA=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=incon;
pile[v[22]]=970; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(970,X,jvj+1)*/
V1=x[jvj+1];
l2:x[jvj+6]=incon;
if((V1==985)) goto l3;
if((V1!=1489)) goto l8;
pile[v[22]]=683; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,X,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=1538; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1538,BL,jvj+2)*/
l4:if((x[jvj+2]<=0)) goto l8;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+3,V7)*/
V7=pile[WZ2]; 
if((V7!=V8)) goto l5;
pile[v[22]]=159; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+4)*/
x[jvj+8]=x[jvj+4] ;z[jvj+8]=z[jvj+4];
l6:if((x[jvj+8]<=0)) goto l5;
x[jvj+5]=s[x[jvj+8]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+8];
pile[v[22]]=110; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(110,jvj+5,V10)*/
V10=pile[WZ2]; 
if((V10!=V)) goto l7;
pile[v[22]]=1489; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1489,jvj+5,jvj+6)*/
l9:x[EA]=x[jvj+6] ;z[EA]=z[jvj+6];
v[0]=jvj; v[22]-=4; return;
l1:V1=107;
goto l2;
l3:x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+6]=x[jvj+7] ;z[jvj+6]=z[jvj+7];
goto l9;
l5:x[jvj+2]=t[x[jvj+2]];
goto l4;
l7:x[jvj+8]=t[x[jvj+8]];
goto l6;
l8:pile[v[22]]=107; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,BL,jvj+6)*/
goto l9;
}
