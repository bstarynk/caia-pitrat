#include "dx.h"
void QL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V8=0,V10=0,V11=0,V9=0;
int I,X,Y;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10293;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2138&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(X,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=208; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(jvj+2,208,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ2]=jvj+2; pile[WZ3]=jvj+4; 
(*f[2141])( );if(v[102]) goto l6;     /*QLL0(jvj+3,208,jvj+2,jvj+4)*/
if((x[Y]!=201)) goto l3;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,X,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==1029)) goto l3;
pile[v[22]]=jvj+4; 
(*f[2188])( );     /*QLM0(jvj+4)*/
l3:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,X,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=1029)) goto l1;
x[jvj+11]=incon;
if((x[Y]==201)) goto l2;
x[jvj+11]=25 ;z[jvj+11]=25;
l4:pile[v[22]]=241; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,jvj+11,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=V8; 
(*f[2077])( );     /*SPR0(jvj+4,V8,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=V10; 
(*f[64])( );     /*SRA2(V15,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V11; 
(*f[99])( );     /*SPM0(1,V11,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V9,41,J)*/
J=pile[WZ2]; 
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==1029)) goto l6;
l5:pile[v[22]]=jvj+4; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+4,I,J)*/
J=pile[WZ2]; 
goto l7;
l2:x[jvj+11]=26 ;z[jvj+11]=26;
goto l4;
l6:J=I;
goto l7;
}
