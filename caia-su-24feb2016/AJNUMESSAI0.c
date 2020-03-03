#include "dx.h"
void AJNUMESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V1=0,V7=0,V13=0,V14=0,V15=0,V6=0,NN=0,N=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );


WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,NN)*/
NN=pile[WZ2]; 
V1=incon;
if((NN<600000)) goto l1;
V1=600001;
if((NN!=600000)) goto l6;
v[111]=1;
V6=g[505];
if((V6<=0)) goto l5;
V7=vg[505];
if((V7!=0)) goto l2;
if((V6<3)) goto l4;
l2:pile[v[22]]=505; pile[WZ1]=10948; pile[WZ2]=0; pile[WZ3]=jvj+1; 
(*f[291])( );     /*INTERP4(505,10948,0,jvj+1)*/
if((x[jvj+1]==135)) goto l3;
l5:pile[v[22]]=jvj+2; pile[WZ1]=506; pile[WZ2]=927; 
(*f[35])( );     /*CHGC1(jvj+2,506,927)*/
l6:N=V1;
pile[v[22]]=jvj+2; pile[WZ1]=642; pile[WZ2]=N; 
(*f[43])( );     /*CHGC2(jvj+2,642,N)*/
if((N!=v[203])) goto l7;
v[205]=1;
l7:v[0]=jvj; return;
l1:V4=NN+1;
V1=V4;
goto l6;
l3:if((V6<4)) goto l4;
goto l5;
l4:pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(30,0,126,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10341; pile[WZ2]=V13; 
(*f[39])( );     /*SDX0(20,10341,V13,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; pile[WZ1]=(-6396); 
(*f[37])( );     /*SRA0(V14,(-6396),V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
if((V6!=2)) goto l5;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l5;
}
