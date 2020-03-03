#include "dx.h"
void SOLDANS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0;
int A,E;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; E=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=x[E] ;z[jvj+14]=z[E];
l7:if((x[jvj+14]>0)) goto l8;
R=(-1);
l10:v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; return;
l3:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+6,jvj+9)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(jvj+5,jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l6;
l2:x[jvj+12]=t[x[jvj+12]];
l1:if((x[jvj+12]<=0)) goto l9;
x[jvj+6]=s[x[jvj+12]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+12];
pile[v[22]]=436; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+6,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(jvj+4,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l3;
goto l2;
l5:x[jvj+3]=s[x[jvj+13]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+13];
pile[v[22]]=256; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(256,jvj+1,jvj+2)*/
pile[v[22]]=436; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(436,jvj+3,jvj+4)*/
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+3,jvj+5)*/
x[jvj+12]=x[jvj+2] ;z[jvj+12]=z[jvj+2];
goto l1;
l6:x[jvj+13]=t[x[jvj+13]];
l4:if((x[jvj+13]>0)) goto l5;
R=V9;
goto l10;
l8:x[jvj+1]=s[x[jvj+14]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+14];
pile[v[22]]=493; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(493,jvj+1,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=256; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(256,A,jvj+11)*/
x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
goto l4;
l9:x[jvj+14]=t[x[jvj+14]];
goto l7;
}
