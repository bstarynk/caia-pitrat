#include "dx.h"
void SIMPFPTOT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,J=0,I=0,V4=0,V3=0,V10=0,V7=0,V8=0,V9=0,V14=0,V11=0,V12=0,V13=0;
int B,A;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=11912;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3917&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,A,V1)*/
V1=pile[WZ2]; 
pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,B,J)*/
J=pile[WZ2]; 
I=V1;
if((I>=0)) goto l3;
if((J>=0)) goto l6;
l9:x[R]=135 ;z[R]=135;
l1:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]==41)) goto l2;
l10:V10=x[A];
pile[v[22]]=20; pile[WZ1]=11912; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11912,0,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,1,V7,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V10; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(20,V10,V8,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l2:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,B,jvj+3)*/
if((x[jvj+3]==41)) goto l12;
l11:V14=x[B];
pile[v[22]]=20; pile[WZ1]=11912; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11912,0,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,2,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V14; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V14,V12,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:if((J>=0)) goto l4;
V4=abs(J);
if((V4<=I)) goto l8;
if((I!=999)) goto l5;
goto l9;
l4:if((I==999)) goto l9;
if((J==999)) goto l8;
if((I!=J)) goto l5;
if((I<0)) goto l6;
l8:if((I!=0)) goto l9;
if((J<0)) goto l5;
goto l9;
l5:x[R]=134 ;z[R]=134;
goto l1;
l6:V3=abs(I);
if((V3>J)) goto l7;
if((J==0)) goto l5;
goto l9;
l7:if((J!=999)) goto l5;
goto l9;
}
