#include "dx.h"
void NETTOYREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0;
int A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=625)) goto l1;
pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[1449])( );if(v[102]) goto l1;     /*DECODEPUI0(A,jvj+3)*/
l2:V13=x[jvj+3];
pile[v[22]]=jvj+3; pile[WZ1]=0; pile[WZ2]=V13; pile[WZ3]=191; 
(*f[285])( );     /*ENLY0(jvj+3,0,V13,191,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=538; 
(*f[285])( );     /*ENLY0(jvj+3,V4,V3,538,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=539; 
(*f[285])( );     /*ENLY0(jvj+3,V6,V5,539,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[WZ1]=V8; pile[WZ2]=V7; pile[WZ3]=541; 
(*f[285])( );     /*ENLY0(jvj+3,V8,V7,541,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[WZ1]=V10; pile[WZ2]=V9; pile[WZ3]=543; 
(*f[285])( );     /*ENLY0(jvj+3,V10,V9,543,V11,V12)*/
V11=pile[WZ4]; V12=pile[WZ5]; 
x[jvj+4]=d[6];z[jvj+4]=0;
l3:if((x[jvj+4]>0)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+7)*/
l6:if((x[jvj+7]>0)) goto l7;
v[0]=jvj; v[22]-=1; return;
l1:x[jvj+3]=x[A] ;z[jvj+3]=z[A];
goto l2;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+5,jvj+3,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[1150])( );     /*NETTOYREG0(jvj+6)*/
l5:x[jvj+4]=t[x[jvj+4]];
goto l3;
l7:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; 
(*f[1150])( );     /*NETTOYREG0(jvj+8)*/
x[jvj+7]=t[x[jvj+7]];
goto l6;
}
