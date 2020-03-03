#include "dx.h"
void ETUQUOI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,F=0,V4=0,NA=0,DX=0,V10=0,V11=0,NB=0,V6=0,V9=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11140;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==146&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=incon;
V5=bh[v[1]][2];
F=V5;
if((F==32)) goto l1;
if((F<48)) goto l13;
if((F>57)) goto l13;
V6=135;
l5:if((V6==135)) goto l6;
l7:NA=(-1);
pile[v[22]]=250; pile[WZ1]=250; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(250,250,jvj+6)*/
x[jvj+9]=250 ;z[jvj+9]=250;
l10:NB=(-1);
x[jvj+7]=250 ;z[jvj+7]=250;
if(x[jvj+5]!=incon) goto l11;
l12:x[jvj+1]=incon; v[0]=jvj; return;
l1:x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(645,597,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
goto l7;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=V4; 
(*f[207])( );     /*PLUE2(jvj+4,V4)*/
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l6:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NA,DX)*/
NA=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NA; pile[WZ2]=jvj+5; 
(*f[445])( );     /*TRI15(41,NA,jvj+5)*/
pile[v[22]]=NA; pile[WZ1]=117; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(NA,117,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=(-20); pile[WZ2]=1003; pile[WZ3]=jvj+10; 
(*f[180])( );     /*TRIENS0(jvj+9,(-20),1003,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=NA; pile[WZ2]=510; pile[WZ3]=jvj+6; 
(*f[189])( );     /*TRI4(jvj+10,NA,510,jvj+6)*/
V10=DX+1;
V11=bh[v[1]][V10];
if((V11<48)) goto l14;
if((V11>57)) goto l14;
V9=135;
l8:if((V9==135)) goto l9;
goto l10;
l9:pile[v[22]]=V10; 
(*f[135])( );     /*LND3(V10,NB)*/
NB=pile[WZ1]; 
pile[v[22]]=NB; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(NB,117,jvj+7)*/
pile[v[22]]=jvj+5; pile[WZ1]=NB; 
(*f[207])( );     /*PLUE2(jvj+5,NB)*/
pile[v[22]]=jvj+6; pile[WZ1]=515; pile[WZ2]=NB; 
(*f[43])( );     /*CHGC2(jvj+6,515,NB)*/
pile[WZ1]=1003; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+6,1003,jvj+7)*/
l11:pile[v[22]]=jvj+8; 
(*f[138])( );if(v[102]) goto l12;     /*EXPPB0(jvj+8)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; pile[WZ2]=NA; pile[WZ3]=NB; pile[WZ4]=jvj+6; pile[WZ5]=jvj+9; pile[v[22]+6]=jvj+7; 
(*f[444])( );     /*ETUREG0(jvj+5,jvj+8,NA,NB,jvj+6,jvj+9,jvj+7)*/
goto l12;
l13:V6=134;
goto l5;
l14:V9=134;
goto l8;
}
