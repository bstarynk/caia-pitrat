#include "dx.h"
void ORDOBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,ZZ;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11583;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==706&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; ZZ=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[ZZ] ;z[jvj+2]=z[ZZ];
l6:x[jvj+3]=incon;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,jvj+2,jvj+3)*/
l1:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==44)) goto l2;
if((x[jvj+5]!=187)) goto l4;
pile[v[22]]=959; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(959,jvj+2,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+6,jvj+7)*/
l3:pile[v[22]]=jvj+7; pile[WZ1]=jvj+2; pile[WZ2]=X; 
(*f[1095])( );     /*INSVAL0(jvj+7,jvj+2,X)*/
l4:if(x[jvj+3]!=incon) goto l7;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+7]=301 ;z[jvj+7]=301;
goto l3;
l7:x[jvj+2]=x[jvj+3] ;z[jvj+2]=z[jvj+3];
goto l6;
}
