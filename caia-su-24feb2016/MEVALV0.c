#include "dx.h"
void MEVALV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0;
int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=10073;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1997&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
l11:x[jvj+3]=x[jvj+4]=incon;
pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(135,jvj+2,jvj+3)*/
l1:pile[v[22]]=134; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(134,jvj+2,jvj+4)*/
l2:pile[v[22]]=248; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+5)*/
if((x[jvj+5]==0)) goto l3;
T=67;
pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(248,jvj+2,jvj+8)*/
l4:if((x[jvj+8]>0)) goto l5;
x[jvj+10]=vo[15];z[jvj+10]=vz[15];
pile[v[22]]=jvj+10; pile[WZ1]=363; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+10,363,jvj+2)*/
l6:if(x[jvj+3]!=incon) goto l7;
l8:if(x[jvj+4]!=incon) goto l9;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:T=68;
x[jvj+9]=vo[15];z[jvj+9]=vz[15];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+9; 
(*f[1383])( );     /*ISV0(jvj+2,jvj+9)*/
goto l6;
l5:x[jvj+6]=s[x[jvj+8]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+8];
pile[v[22]]=360; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(360,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l6;
x[jvj+8]=t[x[jvj+8]];
goto l4;
l7:if((T!=68)) goto l8;
pile[v[22]]=jvj+3; 
(*f[1997])( );     /*MEVALV0(jvj+3)*/
goto l8;
l9:if((T!=68)) goto l10;
x[jvj+2]=x[jvj+4] ;z[jvj+2]=z[jvj+4];
goto l11;
}
