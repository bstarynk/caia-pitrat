#include "dx.h"
void INTERA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V21=0,V17=0,V18=0,V19=0,V20=0,V11=0;
int AT,Y,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; Y=pile[v[22]+1]; X=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+2)*/
x[jvj+9]=w[x[jvj+2]][9];
l4:if((x[jvj+9]>0)) goto l5;
x[jvj+10]=w[x[jvj+2]][8];
l7:if((x[jvj+10]<=0)) goto l10;
x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(jvj+5,X,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[Y]) goto l9;
l8:x[jvj+10]=t[x[jvj+10]];
goto l7;
l2:if((V11<4)) goto l3;
l11:pile[v[22]]=AT; pile[WZ1]=Y; 
(*f[1110])( );     /*INTERB0(AT,Y)*/
l12:v[0]=jvj; v[22]-=3; return;
l3:V21=x[Y];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V17; pile[WZ2]=10523; 
(*f[98])( );     /*SRA3(135,V17,10523,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V18,125,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V21; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,V21,V19,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
if((V11!=2)) goto l11;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l11;
l5:x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=jvj+3; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+3,X,jvj+4)*/
(*f[727])( );     /*INTERA0(jvj+3,X,jvj+4)*/
l6:x[jvj+9]=t[x[jvj+9]];
goto l4;
l9:pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=Y; 
(*f[727])( );     /*INTERA0(jvj+5,X,Y)*/
goto l8;
l10:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=318)) goto l12;
V11=g[75];
if((V11<=0)) goto l11;
V12=vg[75];
if((V12!=0)) goto l1;
if((V11<3)) goto l3;
l1:pile[v[22]]=75; pile[WZ1]=10523; pile[WZ2]=0; pile[WZ3]=(-606); pile[WZ4]=Y; pile[WZ5]=jvj+1; 
(*f[232])( );     /*INTERP3(75,10523,0,(-606),Y,jvj+1)*/
if((x[jvj+1]==135)) goto l2;
goto l11;
}
