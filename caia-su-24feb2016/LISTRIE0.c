#include "dx.h"
void LISTRIE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V2=0,V21=0,V13=0,V15=0,V16=0,V18=0,V11=0,V12=0,V20=0;
int RN,N,M,AT,Q;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

RN=pile[v[22]]; N=pile[v[22]+1]; M=pile[v[22]+2]; AT=pile[v[22]+3]; Q=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=x[AT] ;z[jvj+11]=z[AT];
x[jvj+10]=x[Q] ;z[jvj+10]=z[Q];
V21=M;
V20=N;
x[jvj+3]=x[RN] ;z[jvj+3]=z[RN];
l6:x[jvj+12]=incon;
if((V20>0)) goto l1;
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1226,jvj+1,jvj+2)*/
if((x[jvj+2]==67)) goto l1;
l5:v[0]=jvj; v[22]-=5; return;
l1:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+4)*/
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1226,jvj+5,jvj+6)*/
if((x[jvj+6]!=67)) goto l2;
pile[v[22]]=204; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(204,jvj+4,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=698; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(698,jvj+4,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1290])( );if(v[102]) goto l2;     /*DEPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=V21; pile[WZ1]=1110; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(V21,1110,jvj+13)*/
pile[v[22]]=204; pile[WZ1]=V10; pile[WZ2]=698; pile[WZ3]=jvj+8; pile[WZ4]=jvj+13; pile[WZ5]=jvj+12; 
(*f[725])( );     /*QUADRI14(204,V10,698,jvj+8,jvj+13,jvj+12)*/
l2:if((V20<=0)) goto l3;
pile[v[22]]=204; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(204,jvj+4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=698; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(698,jvj+4,jvj+9)*/
pile[v[22]]=41; pile[WZ1]=V21; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V21,0,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V13,46,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V2; pile[WZ2]=V15; 
(*f[39])( );     /*SDX0(41,V2,V15,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; pile[WZ1]=jvj+9; 
(*f[1556])( );     /*SDP1(V16,jvj+9,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
l3:if(x[jvj+12]!=incon) goto l4;
goto l5;
l4:pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+10,jvj+11,jvj+12)*/
V11=V20-1;
V12=V21+1;
x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
V20=V11;
V21=V12;
x[jvj+10]=x[jvj+12] ;z[jvj+10]=z[jvj+12];
x[jvj+11]=120 ;z[jvj+11]=120;
goto l6;
}
