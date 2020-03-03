#include "dx.h"
void SUBTOU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,VA,VB;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; VA=pile[v[22]+1]; VB=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(X,191,68)*/
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+1)*/
pile[v[22]]=VA; pile[WZ1]=VB; 
(*f[2101])( );     /*SUBVT0(VA,VB,jvj+1)*/
l3:x[jvj+4]=d[108];z[jvj+4]=0;
l1:if((x[jvj+4]>0)) goto l2;
v[0]=jvj; v[22]-=3; return;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+5,X,jvj+6)*/
x[jvj+2]=x[jvj+6] ;z[jvj+2]=z[jvj+6];
pile[v[22]]=191; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(191,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l4;
l5:pile[v[22]]=jvj+2; pile[WZ1]=VA; pile[WZ2]=VB; 
(*f[2214])( );     /*SUBTOU0(jvj+2,VA,VB)*/
l4:x[jvj+4]=t[x[jvj+4]];
goto l1;
}
