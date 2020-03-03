#include "dx.h"
void LK1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V11=0,V22=0,V12=0,V13=0,V18=0,V20=0,V19=0,V21=0,V14=0,V15=0,V16=0,V17=0;
int C;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=10466;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==346&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; v[22]+=1; 
putchar(C);
putchar(32);
V1=incon;
if((v[62]==0)) goto l1;
V1=68;
l3:V11=0;
V22=V11;
l4:V12=getchar();
V13=V12;
if((V1!=67)) goto l8;
V18=V13;
if((V18<97)) goto l8;
if((V18>122)) goto l8;
V20=V18-32;
V19=V20;
V21=V19;
l5:if((V13==10)) goto l6;
V14=V22+1;
bh[v[1]][V22]=V21;
V22=V14;
goto l4;
l1:V1=67;
goto l3;
l6:V15=0;
l7:V16=V22+V15;
bh[v[1]][V16]=32;
V15++;
if((V15<=2)) goto l7;
V17=V22+3;
bh[v[1]][V17]=94;
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l8:V21=V13;
goto l5;
}
