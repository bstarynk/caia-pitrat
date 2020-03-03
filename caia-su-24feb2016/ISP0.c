#include "dx.h"
void ISP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V7=0,K=0;
int X,VA,VB,Y;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10482;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2007&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; VA=pile[v[22]+1]; VB=pile[v[22]+2]; Y=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(283,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+4,V3)*/
V3=pile[WZ2]; 
if((V3!=VB)) goto l2;
pile[v[22]]=VA; 
(*f[1792])( );     /*DVF1(VA,jvj+4)*/
l3:x[jvj+5]=vo[15];z[jvj+5]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(283,jvj+5,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l6;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7!=VA)) goto l5;
pile[v[22]]=VB; 
(*f[1792])( );     /*DVF1(VB,jvj+7)*/
l6:pile[v[22]]=Y; 
(*f[2099])( );     /*INC1(Y,K)*/
K=pile[WZ1]; 
pile[v[22]]=VA; pile[WZ1]=VB; pile[WZ2]=X; pile[WZ3]=K; 
(*f[2100])( );     /*ISQ0(VA,VB,X,K)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
}
