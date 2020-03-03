#include "dx.h"
void SIMPLIFIA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V6=0,V9=0,V3=0,NT=0,V12=0;
int E1,E2;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

E1=pile[v[22]]; E2=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
l3:x[jvj+8]=x[E1] ;z[jvj+8]=z[E1];
l1:if((x[jvj+8]>0)) goto l2;
v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V5==0)) goto l4;
pile[v[22]]=218; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+2,jvj+1)*/
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+1,V4)*/
V4=pile[WZ2]; 
if((V4==0)) goto l4;
l6:x[jvj+9]=x[E2] ;z[jvj+9]=z[E2];
l5:if((x[jvj+9]<=0)) goto l4;
x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+3,V6)*/
V6=pile[WZ2]; 
if((V6==0)) goto l7;
V9=(-V6);
pile[v[22]]=V9; pile[WZ1]=V5; 
(*f[1025])( );if(v[102]) goto l7;     /*POSOM0(V9,V5,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+3,jvj+4)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[760])( );     /*MEMEX0(jvj+1,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l8;
l7:x[jvj+9]=t[x[jvj+9]];
goto l5;
l4:x[jvj+8]=t[x[jvj+8]];
goto l1;
l8:v[20]=1;
NT=V3;
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
x[jvj+7]=x[jvj+3] ;z[jvj+7]=z[jvj+3];
if((NT==0)) goto l9;
if((NT>0)) goto l11;
if((NT>=0)) goto l3;
V12=(-NT);
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(jvj+7,117,V12)*/
pile[v[22]]=E1; pile[WZ1]=jvj+6; 
(*f[1670])( );     /*OUTER3(E1,jvj+6)*/
goto l3;
l9:pile[v[22]]=E1; pile[WZ1]=jvj+6; 
(*f[1670])( );     /*OUTER3(E1,jvj+6)*/
l10:pile[v[22]]=E2; pile[WZ1]=jvj+7; 
(*f[1670])( );     /*OUTER3(E2,jvj+7)*/
goto l3;
l11:pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=NT; 
(*f[43])( );     /*CHGC2(jvj+6,117,NT)*/
goto l10;
}
