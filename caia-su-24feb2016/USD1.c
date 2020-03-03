#include "dx.h"
void USD1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0;
int X,E,S;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; E=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,X,V)*/
V=pile[WZ2]; 
pile[v[22]]=E; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(E,V)*/
l2:if((x[X]==x[S])) goto l10;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+5)*/
x[jvj+11]=w[x[jvj+5]][8];
l3:if((x[jvj+11]>0)) goto l4;
x[jvj+13]=w[x[jvj+5]][9];
if((x[jvj+5]!=22)) goto l8;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==178)) goto l10;
l8:if((x[jvj+13]<=0)) goto l10;
x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=jvj+9; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+9,X,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=E; pile[WZ2]=S; 
(*f[714])( );     /*USD1(jvj+10,E,S)*/
l9:x[jvj+13]=t[x[jvj+13]];
goto l8;
l1:x[jvj+8]=x[jvj+1] ;z[jvj+8]=z[jvj+1];
l7:pile[v[22]]=jvj+8; pile[WZ1]=E; pile[WZ2]=S; 
(*f[714])( );     /*USD1(jvj+8,E,S)*/
x[jvj+12]=t[x[jvj+12]];
l5:if((x[jvj+12]>0)) goto l6;
x[jvj+11]=t[x[jvj+11]];
goto l3;
l4:x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=jvj+6; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,X,jvj+7)*/
x[jvj+12]=x[jvj+7] ;z[jvj+12]=z[jvj+7];
goto l5;
l6:x[jvj+1]=s[x[jvj+12]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+12];
x[jvj+8]=incon;
if((x[jvj+5]!=39)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+1,jvj+2)*/
x[jvj+8]=x[jvj+2] ;z[jvj+8]=z[jvj+2];
goto l7;
l10:v[0]=jvj; v[22]-=3; return;
}
