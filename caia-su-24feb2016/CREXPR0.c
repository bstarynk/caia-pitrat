#include "dx.h"
void CREXPR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RR,BA;
int F;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11755;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1917&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; BA=pile[v[22]+1]; F=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=RR; pile[WZ1]=BA; pile[WZ2]=jvj+2; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[1708])( );     /*TYPEXPR2(RR,BA,jvj+2,jvj+4,jvj+3)*/
if((x[jvj+2]==129)) goto l1;
if((x[jvj+2]==1881)) goto l2;
if((x[jvj+4]==23)) goto l3;
l4:x[F]=250 ;z[F]=250;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:if((x[jvj+4]==23)) goto l3;
x[F]=295 ;z[F]=295;
goto l5;
l2:if((x[jvj+4]==23)) goto l3;
pile[v[22]]=530; pile[WZ1]=jvj+3; pile[WZ2]=F; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(530,jvj+3,F)*/
goto l5;
l3:x[F]=585 ;z[F]=585;
goto l5;
}
