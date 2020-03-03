#include "dx.h"
void MEVALF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int F,FF,A;
int AT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=10469;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1998&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
F=pile[v[22]]; FF=pile[v[22]+1]; A=pile[v[22]+2]; AT=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[F]!=x[FF])) goto l2;
if((x[A]==135)) goto l1;
l2:if((x[F]==29)) goto l3;
if((x[F]==27)) goto l7;
if((x[F]==28)) goto l10;
if((x[F]==30)) goto l11;
if((x[F]!=25)) goto l12;
if(x[FF]==30||x[FF]==28) goto l1;
l12:if((x[FF]==26)) goto l13;
if((x[FF]!=25)) goto l14;
if(x[F]==29||x[F]==27) goto l5;
l14:if((x[A]==135)) goto l15;
if((x[A]!=134)) goto l16;
pile[v[22]]=514; pile[WZ1]=FF; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(514,FF,jvj+3)*/
if((x[F]==x[jvj+3])) goto l5;
l16:if(x[F]!=25&&x[F]!=26) goto l17;
pile[v[22]]=268; pile[WZ1]=FF; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,FF,jvj+4)*/
if((x[F]==x[jvj+4])) goto l5;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:x[AT]=135 ;z[AT]=135;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l3:if((x[FF]==30)) goto l4;
if((x[FF]!=28)) goto l6;
if((x[A]==134)) goto l5;
goto l14;
l4:if((x[A]==135)) goto l1;
l6:if((x[A]!=134)) goto l12;
if(x[FF]==29||x[FF]==30) goto l5;
goto l12;
l5:x[AT]=134 ;z[AT]=134;
goto l18;
l7:if((x[FF]==28)) goto l8;
if((x[FF]!=30)) goto l9;
if((x[A]==134)) goto l5;
goto l14;
l8:if((x[A]==135)) goto l1;
l9:if((x[A]!=134)) goto l12;
if(x[FF]==27||x[FF]==28) goto l5;
goto l12;
l10:if((x[FF]!=27)) goto l12;
if((x[A]==134)) goto l5;
goto l14;
l11:if((x[FF]!=29)) goto l12;
if((x[A]==134)) goto l5;
goto l14;
l13:if(x[F]==29||x[F]==27) goto l1;
goto l14;
l15:pile[v[22]]=268; pile[WZ1]=FF; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,FF,jvj+2)*/
if((x[F]==x[jvj+2])) goto l5;
goto l16;
}
