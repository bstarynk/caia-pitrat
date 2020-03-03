#include "dx.h"
void INVEQEQM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; RES=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+1,jvj+2)*/
if(x[jvj+2]==25||x[jvj+2]==625||x[jvj+2]==26) goto l1;
l2:pile[v[22]]=763; pile[WZ1]=514; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(763,514,jvj+3)*/
l3:if((x[jvj+3]>0)) goto l4;
x[RES]=134 ;z[RES]=134;
l6:v[0]=jvj; v[22]-=2; return;
l1:x[RES]=135 ;z[RES]=135;
goto l6;
l4:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+4,X,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[2023])( );     /*INVEQEQM0(jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l1;
l5:x[jvj+3]=t[x[jvj+3]];
goto l3;
}
