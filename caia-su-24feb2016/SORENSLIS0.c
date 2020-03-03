#include "dx.h"
void SORENSLIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,V18=0,V2=0,V1=0,V11=0,Q=0,V3=0,V12=0,V16=0,V13=0,V14=0,V15=0;
int X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=x[X] ;z[jvj+6]=z[X];
l11:x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
pile[v[22]]=718; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(718,jvj+5,jvj+7)*/
x[jvj+12]=x[jvj+7] ;z[jvj+12]=z[jvj+7];
l12:if((x[jvj+12]>0)) goto l13;
pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(120,jvj+5,jvj+6)*/
goto l11;
l2:V1=V2;
l8:if(V1!=incon) goto l3;
l7:x[jvj+11]=t[x[jvj+11]];
l6:if((x[jvj+11]<=0)) goto l14;
x[jvj+1]=s[x[jvj+11]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+11];
pile[v[22]]=110; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(110,jvj+1,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V12; 
(*f[37])( );     /*SRA0(0,V12,V2)*/
V2=pile[WZ2]; 
V1=incon;
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
P=x[jvj+2];
V18=P;
pile[v[22]]=20; pile[WZ1]=V18; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(20,V18,V2,V1)*/
V1=pile[WZ3]; 
l1:if(V1==incon) goto l2;
goto l8;
l3:V3=incon;
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+1,V11)*/
V11=pile[WZ2]; 
Q=V11;
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(41,Q,V1,V3)*/
V3=pile[WZ3]; 
l4:if(V3==incon) goto l5;
l9:if(V3!=incon) goto l10;
goto l7;
l5:V3=V1;
goto l9;
l10:pile[v[22]]=V3; 
(*f[40])( );     /*SLG0(V3)*/
goto l7;
l13:x[jvj+3]=s[x[jvj+12]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+12];
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+3,jvj+8)*/
pile[v[22]]=715; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(715,jvj+3,jvj+9)*/
pile[v[22]]=218; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(218,jvj+3,jvj+10)*/
V16=x[jvj+10];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+9; 
(*f[42])( );     /*SRA1(135,0,jvj+9,V13)*/
V13=pile[WZ3]; 
pile[WZ1]=V13; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V13,jvj+8,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V16; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(20,V16,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+4)*/
x[jvj+11]=x[jvj+4] ;z[jvj+11]=z[jvj+4];
goto l6;
l14:x[jvj+12]=t[x[jvj+12]];
goto l12;
l15:v[0]=jvj; v[22]-=1; return;
}
