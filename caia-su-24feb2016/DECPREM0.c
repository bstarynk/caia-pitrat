#include "dx.h"
void DECPREM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V16=0,P=0,AA=0,V5=0;
int A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
V16=A%2;
if((V16!=0)) goto l4;
x[jvj+2]=incon;
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=2; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(2,117,jvj+2)*/
l5:V5=A/2;
P=0;
AA=V5;
pile[v[22]]=jvj+2; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,510,1)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
l6:if((AA==1)) goto l7;
if((AA<=1)) goto l8;
pile[v[22]]=AA; pile[WZ1]=jvj+3; pile[WZ2]=P; pile[WZ3]=R; 
(*f[1590])( );if(v[102]) goto l8;     /*DECPREM1(AA,jvj+3,P,R)*/
l9:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+5]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+5];
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+1,V4)*/
V4=pile[WZ2]; 
if((V4!=2)) goto l3;
x[jvj+2]=x[jvj+1] ;z[jvj+2]=z[jvj+1];
goto l5;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:P=1;
AA=A;
goto l6;
l7:x[R]=x[jvj+3] ;z[R]=z[jvj+3];
goto l9;
l8:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
