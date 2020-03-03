#include "dx.h"
void EXTOUSQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,NR=0,I=0,V10=0,V7=0,V9=0,V4=0,V13=0,V19=0,V14=0,V16=0,V21=0,V15=0,J=0,V17=0;
int EA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

EA=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=59; 
(*f[346])( );     /*LK1(59)*/
x[jvj+6]=0 ;z[jvj+6]=0;
x[EA]=x[jvj+6] ;z[EA]=z[jvj+6];
V13=1;
V19=V13;
l6:V14=bh[v[1]][V19];
if((V14<48)) goto l13;
if((V14>57)) goto l13;
V16=135;
l7:if((V16==135)) goto l10;
V21=V14;
if((V21>=97)) goto l12;
if((V21<65)) goto l8;
if((V21<=90)) goto l11;
l8:V15=134;
l9:if((V15==135)) goto l10;
J=V19;
pile[v[22]]=(-1); pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l3;     /*SMA0((-1),64,67,jvj+1)*/
V2=J+1;
pile[v[22]]=V2; 
(*f[102])( );     /*LND0(V2,NR)*/
NR=pile[WZ1]; 
x[jvj+2]=d[126];z[jvj+2]=0;
pile[v[22]]=117; pile[WZ1]=NR; pile[WZ2]=218; pile[WZ3]=jvj+1; pile[WZ4]=jvj+3; 
(*f[567])( );     /*QUADRI11(117,NR,218,jvj+1,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=EA; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,EA)*/
l3:x[jvj+4]=d[188];z[jvj+4]=0;
l1:if((x[jvj+4]>0)) goto l2;
V4=bh[v[1]][0];
if((V4==32)) goto l5;
pile[v[22]]=EA; 
(*f[1225])( );     /*EXTOUSQ1(EA)*/
l5:v[0]=jvj; v[22]-=1; return;
l2:I=s[x[jvj+4]];
pile[v[22]]=I; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l4;     /*SMA0(I,64,67,jvj+5)*/
V10=x[jvj+5];
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,I,0,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V10; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(20,V10,V7,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l4:x[jvj+4]=t[x[jvj+4]];
goto l1;
l10:V17=V19+1;
V19=V17;
goto l6;
l11:V15=135;
goto l9;
l12:if((V21<=122)) goto l11;
goto l8;
l13:V16=134;
goto l7;
}
