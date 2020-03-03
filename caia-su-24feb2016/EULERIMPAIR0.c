#include "dx.h"
void EULERIMPAIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V8=0,V7=0,V11=0,V10=0,V17=0,XX=0,V13=0,V15=0,YY=0,V14=0,V16=0,V21=0,V20=0,V19=0,V4=0;
int I,N,P,Q,T,S;
int NNNE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=26103;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2412&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; P=pile[v[22]+2]; Q=pile[v[22]+3]; T=pile[v[22]+4]; S=pile[v[22]+5]; NNNE=pile[v[22]+6]; v[22]+=7; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((I==0)) goto l1;
x[jvj+4]=0 ;z[jvj+4]=0;
V9=I-1;
V8=V9/N;
V7=V8+1;
V11=V9%N;
V10=V11+1;
V17=(-P);
XX=V17;
l3:if((XX<=P)) goto l5;
x[jvj+3]=incon;
if((I==S)) goto l2;
if((I==T)) goto l2;
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+3]=x[jvj+5] ;z[jvj+3]=z[jvj+5];
l10:if((x[jvj+3]>0)) goto l11;
x[NNNE]=x[jvj+4] ;z[NNNE]=z[jvj+4];
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=S; 
(*f[207])( );     /*PLUE2(jvj+2,S)*/
pile[WZ1]=T; 
(*f[207])( );     /*PLUE2(jvj+2,T)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
goto l12;
l2:pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=jvj+3; 
(*f[445])( );     /*TRI15(41,0,jvj+3)*/
goto l10;
l5:V13=V10+XX;
if((V13<=0)) goto l4;
if((V13>N)) goto l4;
V15=abs(XX);
if((V15==P)) goto l7;
if((V15==Q)) goto l7;
l4:XX++;
goto l3;
l7:YY=V17;
l6:if((YY>P)) goto l4;
V14=V7+YY;
if((V14<=0)) goto l8;
if((V14>N)) goto l8;
V16=abs(YY);
if((V15==V16)) goto l8;
if((V16==P)) goto l9;
if((V16==Q)) goto l9;
l8:YY++;
goto l6;
l9:V21=V14-1;
V20=N*V21;
V19=V13+V20;
pile[v[22]]=jvj+4; pile[WZ1]=V19; 
(*f[207])( );     /*PLUE2(jvj+4,V19)*/
goto l8;
l11:V4=s[x[jvj+3]];
pile[v[22]]=jvj+4; pile[WZ1]=V4; 
(*f[207])( );     /*PLUE2(jvj+4,V4)*/
x[jvj+3]=t[x[jvj+3]];
goto l10;
}
