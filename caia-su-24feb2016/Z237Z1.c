#include "dx.h"
void Z237Z1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BXXX,BRRR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,BXXX,jvj+1)*/
if((x[jvj+1]!=531)) goto l1;
pile[v[22]]=BRRR; 
(*f[68])( );     /*PLUE0(BRRR,BXXX)*/
l1:x[jvj+7]=w[x[jvj+1]][9];
l2:if((x[jvj+7]>0)) goto l3;
x[jvj+8]=w[x[jvj+1]][8];
l5:if((x[jvj+8]<=0)) goto l8;
x[jvj+4]=s[x[jvj+8]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+8];
pile[v[22]]=jvj+4; pile[WZ1]=BXXX; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+4,BXXX,jvj+5)*/
x[jvj+9]=x[jvj+5] ;z[jvj+9]=z[jvj+5];
l6:if((x[jvj+9]>0)) goto l7;
x[jvj+8]=t[x[jvj+8]];
goto l5;
l3:x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
pile[v[22]]=jvj+2; pile[WZ1]=BXXX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+2,BXXX,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=BRRR; 
(*f[1630])( );     /*Z237Z1(jvj+3,BRRR)*/
l4:x[jvj+7]=t[x[jvj+7]];
goto l2;
l7:x[jvj+6]=s[x[jvj+9]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+9];
pile[v[22]]=jvj+6; pile[WZ1]=BRRR; 
(*f[1630])( );     /*Z237Z1(jvj+6,BRRR)*/
x[jvj+9]=t[x[jvj+9]];
goto l6;
l8:v[0]=jvj; v[22]-=2; return;
}
