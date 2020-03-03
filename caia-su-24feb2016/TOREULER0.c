#include "dx.h"
void TOREULER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V2=0,V14=0,V15=0,V3=0,V16=0,V5=0,V6=0,V11=0,XX=0,V7=0,V9=0,X=0,YY=0,V8=0,V10=0,Y=0,V18=0,V17=0;
int I,N,P,Q;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26132;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2560&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; P=pile[v[22]+2]; Q=pile[v[22]+3]; NNNE=pile[v[22]+4]; v[22]+=5; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V5=I/N;
V6=I%N;
V11=(-P);
XX=V11;
l10:if((XX<=P)) goto l12;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:if((P==Q)) goto l6;
if((V9!=V10)) goto l6;
l15:YY++;
l14:if((YY>P)) goto l11;
V8=V5+YY;
V10=abs(YY);
if((V10==P)) goto l1;
if((V10==Q)) goto l1;
goto l15;
l2:V2=incon;
if((V7>=0)) goto l3;
V13=V7+N;
V2=V13;
l3:if((V7>=N)) goto l4;
if(V2==incon) goto l5;
l13:X=V2;
YY=V11;
goto l14;
l4:V14=V7-N;
V2=V14;
goto l13;
l5:V2=V7;
goto l13;
l6:V3=incon;
if((V8>=0)) goto l7;
V15=V8+N;
V3=V15;
l7:if((V8>=N)) goto l8;
if(V3==incon) goto l9;
l16:Y=V3;
V18=N*Y;
V17=X+V18;
pile[v[22]]=jvj+2; pile[WZ1]=V17; 
(*f[207])( );     /*PLUE2(jvj+2,V17)*/
goto l15;
l8:V16=V8-N;
V3=V16;
goto l16;
l9:V3=V8;
goto l16;
l12:V7=V6+XX;
V9=abs(XX);
if((V9==P)) goto l2;
if((V9==Q)) goto l2;
l11:XX++;
goto l10;
}
