#include "dx.h"
void DIAPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V5=0,V=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0;
int BL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10303;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==671&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=454; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(454,BL,jvj+2)*/
V13=x[BL];
l1:if((x[jvj+2]>0)) goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=454)) goto l3;
pile[v[22]]=436; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+3,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V5)*/
V5=pile[WZ2]; 
V=V5;
if(V!=(-611)&&V!=(-657)) goto l3;
pile[v[22]]=20; pile[WZ1]=10303; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10303,0,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,V7,21,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V8,V,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=(-7691); 
(*f[37])( );     /*SRA0(V9,(-7691),V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V10,(-740),V11)*/
V11=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V13; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(20,V13,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
}
