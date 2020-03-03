#include "dx.h"
void YL3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V32=0,V33=0,V35=0,V52=0,V51=0,V50=0,V38=0,V49=0,V39=0,V40=0,V47=0,V41=0,V44=0,V43=0,V46=0,V34=0;
int N,XO;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; XO=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[19]<=0)) goto l1;
pile[v[22]]=0; pile[WZ1]=(-606); 
(*f[37])( );     /*SRA0(0,(-606),V1)*/
V1=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(41,N,V1,V2)*/
V2=pile[WZ3]; 
pile[v[22]]=V2; 
(*f[40])( );     /*SLG0(V2)*/
V32=x[XO];
pile[v[22]]=V32; pile[WZ1]=0; 
(*f[221])( );     /*SRN0(V32,0,V33)*/
V33=pile[WZ2]; 
V35=46;
V52=V33;
V51=V35;
V50=V32;
l3:if((V50==0)) goto l4;
if((V50<=0)) goto l1;
V38=r[V50];
x[jvj+2]=V38 ;z[jvj+2]=(V38<=sepcte) ? V38 : 0;
x[jvj+1]=V50 ;z[jvj+1]=(V50<=sepcte) ? V50 : 0;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ3]=jvj+3; 
(*f[45])( );if(v[102]) goto l1;     /*FNDZ0(jvj+1,jvj+2,V49,jvj+3)*/
V49=pile[WZ2]; 
V39=V52+1;
V40=t[V50];
V47=V49;
V41=V47;
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=jvj+2; 
(*f[98])( );     /*SRA3(135,V39,jvj+2,V44)*/
V44=pile[WZ3]; 
V43=V44+1;
c[v[1]][V44]=58;
c[v[1]][V52]=V51;
pile[v[22]]=jvj+2; pile[WZ1]=V41; pile[WZ2]=V43; pile[WZ3]=67; 
(*f[645])( );     /*SDX4(jvj+2,V41,V43,67,V46)*/
V46=pile[WZ4]; 
V50=V40;
V51=44;
V52=V46;
goto l3;
l4:V34=V52;
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l1:if((N>=0)) goto l2;
if((v[19]<=0)) goto l2;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l2:v[0]=jvj; v[22]-=2; return;
}
