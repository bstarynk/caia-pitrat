#include "dx.h"
void SIMPRODX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,V4=0,V16=0,V17=0,N=0;
int A,P;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; P=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[A] ;z[jvj+4]=z[A];
l5:pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+4,N)*/
N=pile[WZ2]; 
pile[v[22]]=P; pile[WZ1]=N; 
(*f[1027])( );     /*PUIDANS0(P,N,R)*/
R=pile[WZ2]; 
l10:v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; return;
l2:x[jvj+1]=s[x[jvj+8]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+8];
pile[v[22]]=jvj+1; pile[WZ1]=P; 
(*f[1674])( );     /*SIMPRODX0(jvj+1,P,RS)*/
RS=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=RS; 
(*f[818])( );     /*MTC0(jvj+2,117,RS)*/
x[jvj+8]=t[x[jvj+8]];
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+2,V4)*/
V4=pile[WZ2]; 
R=V4;
goto l10;
l4:x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=jvj+3; pile[WZ1]=P; 
(*f[1674])( );     /*SIMPRODX0(jvj+3,P,V17)*/
V17=pile[WZ2]; 
if(V17<V16) V16=V17;
x[jvj+7]=t[x[jvj+7]];
l3:if((x[jvj+7]>0)) goto l4;
if((V16==999999)) goto l9;
R=V16;
goto l10;
l6:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==485)) goto l7;
if((x[jvj+6]==486)) goto l8;
if((x[jvj+6]!=52)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+4,jvj+9)*/
x[jvj+4]=x[jvj+9] ;z[jvj+4]=z[jvj+9];
goto l5;
l7:pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+7)*/
V16=999999;
goto l3;
l8:pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+8)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(1,117,jvj+2)*/
goto l1;
l9:R=0;
goto l10;
}
