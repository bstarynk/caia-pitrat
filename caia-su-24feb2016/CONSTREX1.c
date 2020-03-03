#include "dx.h"
void CONSTREX1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int H,F;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; F=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[F] ;z[jvj+5]=z[F];
l4:if((x[jvj+5]>0)) goto l5;
v[0]=jvj; v[22]-=2; return;
l2:x[jvj+1]=s[x[jvj+4]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+4];
pile[v[22]]=921; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(921,jvj+1,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l3;
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
l1:if((x[jvj+4]>0)) goto l2;
pile[v[22]]=H; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(H,jvj+3)*/
pile[WZ1]=F; 
(*f[4068])( );     /*CONSTREX1(H,F)*/
goto l6;
l5:x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
for(a=x[H];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l6;
x[jvj+4]=x[H] ;z[jvj+4]=z[H];
goto l1;
}
