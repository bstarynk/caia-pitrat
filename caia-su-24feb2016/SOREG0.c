#include "dx.h"
void SOREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,JJ=0,V12=0,V13=0,V14=0,V11=0,V15=0,V16=0,V17=0,V18=0,V19=0,V20=0,V7=0,V4=0;
int R,I;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; I=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(107,R,jvj+1)*/
V2=I+3;
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(30,0,32,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V12,61,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V13,62,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; 
(*f[40])( );     /*SLG0(V14)*/
pile[v[22]]=105; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(105,R,jvj+6)*/
l7:if((x[jvj+6]>0)) goto l8;
v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=0; pile[WZ1]=jvj+2; 
(*f[223])( );if(v[102]) goto l3;     /*XX0(0,jvj+2,JJ)*/
JJ=pile[WZ2]; 
pile[v[22]]=JJ; pile[WZ1]=I; pile[WZ2]=V2; 
(*f[364])( );     /*SLG3(JJ,I,V2)*/
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l6:x[jvj+5]=s[x[jvj+9]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+9];
pile[v[22]]=jvj+5; pile[WZ1]=V11; 
(*f[363])( );     /*SOREG0(jvj+5,V11)*/
x[jvj+9]=t[x[jvj+9]];
l5:if((x[jvj+9]>0)) goto l6;
pile[v[22]]=I; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(I,0,32,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=50; pile[WZ1]=V19; pile[WZ2]=45; 
(*f[41])( );     /*SRB0(50,V19,45,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
l4:pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==47)) goto l9;
l10:V7=I+3;
pile[v[22]]=0; pile[WZ1]=jvj+3; 
(*f[223])( );if(v[102]) goto l9;     /*XX0(0,jvj+3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=I; pile[WZ2]=V7; 
(*f[364])( );     /*SLG3(V4,I,V7)*/
l9:x[jvj+6]=t[x[jvj+6]];
goto l7;
l8:x[jvj+3]=s[x[jvj+6]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+6];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+3,jvj+7)*/
if((x[jvj+7]!=47)) goto l4;
pile[v[22]]=184; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(184,jvj+3,jvj+8)*/
pile[v[22]]=I; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(I,0,32,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V15; pile[WZ2]=45; 
(*f[41])( );     /*SRB0(20,V15,45,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V16; pile[WZ2]=47; 
(*f[42])( );     /*SRA1(135,V16,47,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=45; 
(*f[41])( );     /*SRB0(20,V17,45,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
V11=I+4;
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
goto l5;
}
