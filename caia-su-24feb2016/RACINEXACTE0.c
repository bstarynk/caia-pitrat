#include "dx.h"
void RACINEXACTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,V8=0,V7=0,V6=0,V3=0,V1=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((A==0)) goto l7;
if((A<=0)) goto l8;
pile[v[22]]=A; pile[WZ1]=jvj+4; 
(*f[1007])( );if(v[102]) goto l8;     /*DECFACTPREM0(A,jvj+4)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(1,117,jvj+3)*/
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+3,V1)*/
V1=pile[WZ2]; 
R=V1;
l9:v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+5]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+5];
pile[v[22]]=515; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+1,V5)*/
V5=pile[WZ2]; 
V4=V5%2;
if((V4!=0)) goto l8;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l5:x[jvj+2]=s[x[jvj+4]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+4];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+2,V7)*/
V7=pile[WZ2]; 
V6=V7/2;
pile[v[22]]=V6; pile[WZ1]=V8; 
(*f[1006])( );if(v[102]) goto l6;     /*POWER0(V6,V8,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V3; 
(*f[818])( );     /*MTC0(jvj+3,117,V3)*/
l6:x[jvj+4]=t[x[jvj+4]];
goto l4;
l7:R=0;
goto l9;
l8:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
