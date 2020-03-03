#include "dx.h"
void SORARB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,L=0,V7=0,V3=0,V4=0;
int X,I,K,M;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10543;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1201&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; I=pile[v[22]+1]; K=pile[v[22]+2]; M=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[X] ;z[jvj+4]=z[X];
V14=I;
l1:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
if((x[jvj+4]!=x[jvj+3])) goto l2;
L=V14;
l4:pile[v[22]]=226; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(226,jvj+4,jvj+6)*/
if((x[jvj+6]!=0)) goto l5;
V3=K+1;
pile[v[22]]=L; pile[WZ1]=K; pile[WZ2]=V3; 
(*f[364])( );     /*SLG3(L,K,V3)*/
fflush(stdout);
l5:for(i=x[jvj+6],V4=0;i>0;i=t[i],V4++)  ;
if((V4>1)) goto l6;
if((V4!=1)) goto l7;
if((x[jvj+6]<=0)) goto l7;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
V14=L;
x[jvj+4]=x[jvj+7] ;z[jvj+4]=z[jvj+7];
goto l1;
l2:pile[v[22]]=V14; pile[WZ1]=jvj+4; pile[WZ2]=M; 
(*f[1200])( );     /*SORARC0(V14,jvj+4,M,L)*/
L=pile[WZ3]; 
goto l4;
l6:pile[v[22]]=L; pile[WZ1]=K; 
(*f[1175])( );     /*SLG4(L,K)*/
V7=K+1;
l3:if((x[jvj+6]<=0)) goto l7;
x[jvj+5]=s[x[jvj+6]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+6];
pile[v[22]]=jvj+5; pile[WZ1]=0; pile[WZ2]=V7; pile[WZ3]=M; 
(*f[1201])( );     /*SORARB1(jvj+5,0,V7,M)*/
x[jvj+6]=t[x[jvj+6]];
goto l3;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
}
