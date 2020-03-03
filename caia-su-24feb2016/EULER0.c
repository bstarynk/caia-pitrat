#include "dx.h"
void EULER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V4=0,V3=0,V7=0,V6=0,V13=0,XX=0,V9=0,V11=0,YY=0,V10=0,V12=0,V17=0,V16=0,V15=0;
int I,N,P,Q;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26001;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2228&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; P=pile[v[22]+2]; Q=pile[v[22]+3]; NNNE=pile[v[22]+4]; v[22]+=5; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V5=I-1;
V4=V5/N;
V3=V4+1;
V7=V5%N;
V6=V7+1;
V13=(-P);
XX=V13;
l2:if((XX<=P)) goto l4;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:if((P==Q)) goto l8;
if((V11!=V12)) goto l8;
l7:YY++;
l5:if((YY>P)) goto l3;
V10=V3+YY;
if((V10<=0)) goto l7;
if((V10>N)) goto l7;
V12=abs(YY);
if((V12==P)) goto l1;
if((V12==Q)) goto l1;
goto l7;
l4:V9=V6+XX;
if((V9<=0)) goto l3;
if((V9>N)) goto l3;
V11=abs(XX);
if((V11==P)) goto l6;
if((V11==Q)) goto l6;
l3:XX++;
goto l2;
l6:YY=V13;
goto l5;
l8:V17=V10-1;
V16=N*V17;
V15=V9+V16;
pile[v[22]]=jvj+2; pile[WZ1]=V15; 
(*f[207])( );     /*PLUE2(jvj+2,V15)*/
goto l7;
}
