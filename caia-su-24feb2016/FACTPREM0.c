#include "dx.h"
void FACTPREM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V10=0,AA=0,V2=0,P=0,Q=0,V3=0,V9=0,V12=0,V16=0,V13=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
x[jvj+1]=x[jvj+3] ;z[jvj+1]=z[jvj+3];
if((A==0)) goto l6;
V10=incon;
if((A<0)) goto l1;
V10=A;
l2:AA=V10;
V2=AA%2;
if((V2!=0)) goto l3;
P=2;
Q=0;
pile[v[22]]=jvj+1; pile[WZ1]=2; 
(*f[978])( );     /*PLUB3(jvj+1,2)*/
V3=AA/P;
if((V3<=1)) goto l3;
pile[v[22]]=V3; pile[WZ1]=jvj+1; pile[WZ2]=Q; 
(*f[1351])( );     /*FACTPREM1(V3,jvj+1,Q)*/
l3:V9=AA%2;
if((V9==0)) goto l7;
pile[v[22]]=AA; pile[WZ1]=jvj+1; pile[WZ2]=1; 
(*f[1351])( );     /*FACTPREM1(AA,jvj+1,1)*/
l7:pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(1,117,jvj+2)*/
V16=x[jvj+1];
l4:if((V16>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+2,V13)*/
V13=pile[WZ2]; 
if((V13!=AA)) goto l6;
x[R]=x[jvj+1] ;z[R]=z[jvj+1];
v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:V11=(-A);
V10=V11;
goto l2;
l5:V12=s[V16];
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V12; 
(*f[818])( );     /*MTC0(jvj+2,117,V12)*/
V16=t[V16];
goto l4;
l6:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
