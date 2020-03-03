#include "dx.h"
void DVF5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V5=0;
int L,V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10477;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1797&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; V=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=incon;
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
pile[v[22]]=100; pile[WZ1]=L; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,L,jvj+4)*/
if(x[jvj+4]!=20&&x[jvj+4]!=89&&x[jvj+4]!=96&&x[jvj+4]!=41&&x[jvj+4]!=1317) goto l1;
x[jvj+10]=x[jvj+4] ;z[jvj+10]=z[jvj+4];
l1:pile[v[22]]=283; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(283,jvj+5,jvj+6)*/
l2:if((x[jvj+6]>0)) goto l3;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+8; 
(*f[329])( );     /*TRI13(V,140,jvj+8)*/
pile[v[22]]=jvj+5; pile[WZ1]=283; 
(*f[36])( );     /*PLUSC0(jvj+5,283,jvj+8)*/
l6:if(x[jvj+10]!=incon) goto l7;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7!=V)) goto l4;
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
goto l6;
l4:x[jvj+6]=t[x[jvj+6]];
goto l2;
l7:pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+8,jvj+11)*/
if((x[jvj+11]==x[jvj+10])) goto l5;
pile[v[22]]=10477; pile[WZ1]=V; pile[WZ2]=(-4383); pile[WZ3]=jvj+10; pile[WZ4]=jvj+11; 
(*f[1825])( );     /*FAUTE8(10477,V,(-4383),jvj+10,jvj+11)*/
l5:pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(158,jvj+8,jvj+9)*/
goto l9;
l8:pile[v[22]]=jvj+8; pile[WZ1]=158; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+8,158,jvj+10)*/
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(110,jvj+8,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=jvj+10; 
(*f[1791])( );     /*DVF0(V5,jvj+10)*/
goto l9;
}
