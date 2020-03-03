#include "dx.h"
void DAMESUJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V9=0,XX=0,YY=0,H=0,V6=0,V5=0,V8=0,V7=0,V11=0,V10=0;
int I,N;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26075;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2312&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V3=I/N;
V4=I%N;
V9=N-1;
XX=(-1);
l2:YY=(-1);
l1:if((XX!=0)) goto l5;
if((YY==0)) goto l3;
l5:H=1;
l4:if((H>V9)) goto l3;
V6=H*XX;
V5=V4+V6;
if((V5<0)) goto l6;
if((V5>=N)) goto l6;
V8=H*YY;
V7=V3+V8;
if((V7<0)) goto l6;
if((V7>=N)) goto l6;
V11=N*V7;
V10=V5+V11;
pile[v[22]]=jvj+2; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+2,V10)*/
l6:H++;
goto l4;
l3:YY++;
if((YY<=1)) goto l1;
XX++;
if((XX<=1)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
