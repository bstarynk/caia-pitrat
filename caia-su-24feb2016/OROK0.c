#include "dx.h"
void OROK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int R,VA,VB;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; VA=pile[v[22]+1]; VB=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=253; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(253,R,jvj+1)*/
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==VB) goto l1;
l4:x[jvj+2]=d[107];z[jvj+2]=0;
l2:if((x[jvj+2]>0)) goto l3;
v[0]=jvj; v[22]-=3; return;
l1:V2=VB;
pile[v[22]]=253; pile[WZ1]=R; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(253,R,V2)*/
pile[v[22]]=R; pile[WZ1]=253; pile[WZ2]=VA; 
(*f[735])( );     /*PLUSC4(R,253,VA)*/
goto l4;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(jvj+3,R,jvj+4)*/
x[jvj+7]=x[jvj+4] ;z[jvj+7]=z[jvj+4];
l5:if((x[jvj+7]>0)) goto l6;
x[jvj+2]=t[x[jvj+2]];
goto l2;
l6:x[jvj+5]=s[x[jvj+7]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+7];
pile[v[22]]=253; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(253,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==VB) goto l8;
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l8:pile[v[22]]=jvj+5; pile[WZ1]=VA; pile[WZ2]=VB; 
(*f[2212])( );     /*OROK0(jvj+5,VA,VB)*/
goto l7;
}
