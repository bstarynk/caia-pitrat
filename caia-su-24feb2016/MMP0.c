#include "dx.h"
void MMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V5=0,I=0,V9=0,V12=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10094;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==19&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
V1=sepcte+2;
l1:if((V1<=lim)) goto l2;
V5=sepcte+1;
t[V5]=0;
v[3]=lim;
I=1;
l3:if((I<=sepcte)) goto l4;
r[0]=0;
s[0]=0;
t[0]=0;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+2; 
(*f[54])( );     /*TRI1(250,158,jvj+2)*/
vo[20]=x[jvj+2];vz[20]=0;
l7:x[jvj+1]=incon; v[0]=jvj; return;
l2:V2=V1-1;
t[V1]=V2;
V1++;
goto l1;
l4:x[I]=I;
z[I]=I;
V9=0;
l5:w[I][V9]=incon;
V9++;
if((V9<=4)) goto l5;
V12=8;
l6:w[I][V12]=0;
V12++;
if((V12<=9)) goto l6;
I++;
goto l3;
}
