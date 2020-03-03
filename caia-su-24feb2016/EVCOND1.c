#include "dx.h"
void EVCOND1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R=0,BT=0;
int Y,EC,AT;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

Y=pile[v[22]]; EC=pile[v[22]+1]; AT=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=x[EC] ;z[jvj+11]=z[EC];
l1:if((x[jvj+11]>0)) goto l2;
x[RES]=135 ;z[RES]=135;
l5:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+1]=s[x[jvj+11]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+1,jvj+3)*/
if((x[jvj+3]!=22)) goto l6;
BT=x[AT];
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+1,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=43)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
if((BT==x[jvj+7])) goto l3;
l6:pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(0,416,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+9,20,158,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=Y; pile[WZ2]=140; pile[WZ3]=(-7886); pile[WZ4]=jvj+10; pile[WZ5]=jvj+8; 
(*f[599])( );     /*QUADRI12(101,Y,140,(-7886),jvj+10,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+2; 
(*f[180])( );     /*TRIENS0(jvj+8,(-20),128,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[30])( );if(v[102]) goto l4;     /*EVL0(jvj+1,jvj+2,R)*/
R=pile[WZ2]; 
if((R==135)) goto l3;
l4:x[RES]=134 ;z[RES]=134;
goto l5;
l3:x[jvj+11]=t[x[jvj+11]];
goto l1;
}
