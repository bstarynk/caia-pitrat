#include "dx.h"
void QYYDNA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,N=0,S=0,V4=0,V7=0,V9=0,V8=0,V10=0;
int L;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11146;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1957&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[L]=incon;
if((v[190]<=0)) goto l14;
V1=v[191];
N=v[190];
S=V1;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l11;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=436; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+4,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+5,V4)*/
V4=pile[WZ2]; 
if((V4!=S)) goto l2;
pile[v[22]]=480; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(480,jvj+4,jvj+6)*/
x[jvj+8]=x[jvj+6] ;z[jvj+8]=z[jvj+6];
l3:if((x[jvj+8]<=0)) goto l2;
x[jvj+7]=s[x[jvj+8]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+7,V7)*/
V7=pile[WZ2]; 
if((V7!=N)) goto l4;
x[L]=x[jvj+7] ;z[L]=z[jvj+7];
l11:if((S==(-656))) goto l12;
V9=incon;
if((S==(-630))) goto l5;
if((S==(-598))) goto l6;
if((S==(-2041))) goto l7;
if((S==(-591))) goto l8;
if((S==(-1544))) goto l9;
if((S==(-632))) goto l10;
if((S!=(-697))) goto l15;
V9=((-656));
l13:V10=V9;
v[191]=V10;
l15:if(x[L]!=incon) goto l16;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+8]=t[x[jvj+8]];
goto l3;
l5:V9=((-598));
goto l13;
l6:V9=((-2041));
goto l13;
l7:V9=((-591));
goto l13;
l8:V9=((-1544));
goto l13;
l9:V9=((-632));
goto l13;
l10:V9=((-697));
goto l13;
l12:V8=N+1;
v[190]=V8;
v[191]=(-630);
goto l15;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
}
