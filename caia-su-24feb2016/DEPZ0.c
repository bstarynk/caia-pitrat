#include "dx.h"
void DEPZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VX,E,S,T,A;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

VX=pile[v[22]]; E=pile[v[22]+1]; S=pile[v[22]+2]; T=pile[v[22]+3]; A=pile[v[22]+4]; RES=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[T]!=68)) goto l2;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,A,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l4;
x[jvj+1]=s[x[jvj+5]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+5];
pile[v[22]]=VX; pile[WZ1]=E; pile[WZ2]=S; pile[WZ3]=67; pile[WZ4]=jvj+1; pile[WZ5]=jvj+2; 
(*f[4070])( );     /*DEPZ0(VX,E,S,67,jvj+1,jvj+2)*/
if((x[jvj+2]==134)) goto l2;
x[jvj+5]=t[x[jvj+5]];
goto l1;
l2:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=52)) goto l6;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,A,jvj+8)*/
pile[v[22]]=268; pile[WZ1]=S; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,S,jvj+9)*/
pile[v[22]]=VX; pile[WZ1]=E; pile[WZ3]=T; pile[WZ4]=jvj+8; pile[WZ5]=jvj+10; 
(*f[4070])( );     /*DEPZ0(VX,E,jvj+9,T,jvj+8,jvj+10)*/
if((x[jvj+10]==135)) goto l4;
l6:pile[v[22]]=218; pile[WZ1]=S; pile[WZ2]=510; pile[WZ3]=0; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(218,S,510,0,jvj+11)*/
pile[v[22]]=A; pile[WZ1]=VX; pile[WZ2]=jvj+11; pile[WZ3]=jvj+12; 
(*f[4071])( );     /*CPTEXP0(A,VX,jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l3;
x[RES]=134 ;z[RES]=134;
l5:v[0]=jvj; v[22]-=6; return;
l3:pile[v[22]]=E; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(E,jvj+11)*/
l4:x[RES]=135 ;z[RES]=135;
goto l5;
}
