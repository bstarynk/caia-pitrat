#include "dx.h"
void AJE3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int EO,X,AT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

EO=pile[v[22]]; X=pile[v[22]+1]; AT=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[EO] ;z[jvj+2]=z[EO];
l1:if((x[jvj+2]>0)) goto l2;
v[0]=jvj; v[22]-=3; return;
l2:x[jvj+1]=s[x[jvj+2]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+2];
pile[v[22]]=X; pile[WZ1]=AT; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(X,AT,jvj+1)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
}
