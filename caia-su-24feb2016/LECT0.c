#include "dx.h"
void LECT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,J=0,V7=0,NN=0,V5=0,V2=0,V4=0,V3=0,V6=0,V27=0,V26=0,V28=0,V34=0,V32=0,V35=0,V33=0,V31=0,V30=0,V29=0,V40=0,V39=0,V45=0,V42=0,V43=0,V38=0,V36=0;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=10399;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==59&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V1=s[x[N]];
J=V1;
vo[36]=x[N];vz[36]=x[N];
V7=x[N];
NN=V7;
s[x[N]]=67;
if((J!=66)) goto l1;
V5=0;
v[2]=v[1];
V2=V5;
v[1]=4;
pile[v[22]]=V2; pile[WZ1]=95; 
(*f[38])( );     /*SPC0(V2,95,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=NN; pile[WZ1]=V4; 
(*f[99])( );     /*SPM0(NN,V4,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V3,0,V6)*/
V6=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V6; pile[WZ1]=1146; pile[WZ2]=7; 
(*f[67])( );     /*SPA0(V6,1146,7)*/
fread(sw,sizeof(char),6,fx[7]);
V27=(sw[0]<<8)|(sw[0+1]&0xff);
V26=V27+1;
V28=V26;
V34=(sw[2]<<8)|(sw[2+1]&0xff);
V32=V34<<16;
V35=(sw[4]<<8)|(sw[4+1]&0xff);
V33=V35&65535;
V31=V32|V33;
V30=V31;
V29=1;
l2:if((V29<=V28)) goto l6;
v[16]=NN;
fread(&sw[6],sizeof(char),V30-6,fx[7]);
pile[v[22]]=7; pile[WZ1]=68; 
(*f[18])( );     /*SPZ0(7,68)*/
V38=incon;
V40=t[NN];
V39=r[V40];
if((V39==3)) goto l4;
if((V39!=2)) goto l5;
V45=t[V40];
V42=t[V45];
V43=r[V42];
if((V43!=4)) goto l5;
if((V42<=0)) goto l5;
V38=V42;
l3:v[11]=V28;
pile[v[22]]=V38; pile[WZ1]=6; pile[WZ2]=1; 
(*f[244])( );     /*LIRB2(V38,6,1)*/
v[11]=0;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:V38=V40;
goto l3;
l5:V36=t[V40];
V38=V36;
goto l3;
l6:lpr[V29]=0;
V29++;
goto l2;
}
