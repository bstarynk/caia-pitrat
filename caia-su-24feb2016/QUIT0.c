#include "dx.h"
void QUIT0(int sign)
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int S=0,K=0,Y=0,V2=0,V3=0,V4=0,V5=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

v[22]+=100; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
Y=incon;
if((v[7]>0)) goto l1;
if((v[5]>0)) goto l1;
S=68;
K=v[0];
Y=v[1];
v[1]=3;
pile[v[22]]=381; 
(*f[14])( );     /*SORTA0(381)*/
signal(SIGQUIT,QUIT0);
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=K; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(K,117,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=372; 
(*f[35])( );     /*CHGC1(jvj+1,372,jvj+2)*/
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l2:if((v[5]<=0)) goto l3;
pile[v[22]]=20; pile[WZ1]=10499; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10499,0,V2)*/
V2=pile[WZ3]; 
pile[v[22]]=V2; pile[WZ1]=(-8027); 
(*f[37])( );     /*SRA0(V2,(-8027),V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; 
(*f[40])( );     /*SLG0(V3)*/
l3:if((v[7]<=0)) goto l4;
pile[v[22]]=20; pile[WZ1]=10044; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10044,0,V4)*/
V4=pile[WZ3]; 
pile[v[22]]=V4; pile[WZ1]=(-8027); 
(*f[37])( );     /*SRA0(V4,(-8027),V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
l4:if(Y!=incon) goto l5;
l6:v[0]=jvj; v[22]-=100; return;
l1:S=67;
goto l2;
l5:if((S!=68)) goto l6;
v[1]=Y;
goto l6;
}
