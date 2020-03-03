#include "dx.h"
void QFF1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V18=0,V20=0,V9=0,V10=0,V25=0,V3=0,V4=0,V2=0,V5=0,V21=0,V14=0,V15=0,V13=0,V16=0,V26=0;
int I,X,Y;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V26=Y;
V25=I;
l9:pile[v[22]]=952; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(952,X,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=128; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(128,X,jvj+1)*/
l1:if((x[jvj+1]<=0)) goto l3;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+2,V7)*/
V7=pile[WZ2]; 
if((V7!=V26)) goto l2;
pile[v[22]]=355; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(355,jvj+2,jvj+7)*/
V10=V26+1;
pile[v[22]]=V25; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V25,123,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=jvj+7; pile[WZ2]=V9; 
(*f[2126])( );     /*QF0(V3,jvj+7,V9,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=V4; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V4,125,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V2,44,V5)*/
V5=pile[WZ2]; 
V25=V5;
V26=V10;
goto l9;
l2:x[jvj+1]=t[x[jvj+1]];
goto l1;
l3:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,X,jvj+3)*/
l4:if((x[jvj+3]>0)) goto l5;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,X,jvj+5)*/
l7:if((x[jvj+5]<=0)) goto l10;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+6,V20)*/
V20=pile[WZ2]; 
if((V20<=V26)) goto l8;
V21=V26+1;
pile[v[22]]=V25; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V25,123,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V14; 
(*f[99])( );     /*SPM0(0,V14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V15,125,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V13,44,V16)*/
V16=pile[WZ2]; 
V25=V16;
V26=V21;
goto l9;
l5:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+4,V18)*/
V18=pile[WZ2]; 
if((V18==V26)) goto l10;
l6:x[jvj+3]=t[x[jvj+3]];
goto l4;
l8:x[jvj+5]=t[x[jvj+5]];
goto l7;
l10:J=V25;
v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
}
