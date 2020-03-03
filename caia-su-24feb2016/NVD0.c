#include "dx.h"
void NVD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V13=0,V7=0,V10=0,V19=0,V22=0,V15=0,V16=0,V17=0,V18=0,V20=0,V21=0,V6=0,V2=0,V1=0;
int X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V12=x[X];
V13=r[V12];
if((V13==0)) goto l5;
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
V2=x[jvj+2];
V1=vu[V2];
if((V1!=0)) goto l4;
vu[V2]=1;
if(x[jvj+2]==77||x[jvj+2]==1389||x[jvj+2]==1387||x[jvj+2]==1388||x[jvj+2]==1391||x[jvj+2]==1392) goto l4;
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=jvj+1; pile[WZ1]=159; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,159,jvj+2)*/
l4:if((v[60]!=V2)) goto l5;
V6=g[643];
if((V6<=0)) goto l5;
V7=vg[643];
if((V7!=0)) goto l1;
if((V6<3)) goto l3;
l1:pile[v[22]]=643; pile[WZ1]=11704; pile[WZ2]=0; pile[WZ3]=(-664); pile[WZ4]=jvj+2; pile[WZ5]=jvj+3; 
(*f[232])( );     /*INTERP3(643,11704,0,(-664),jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
l5:v[0]=jvj; v[22]-=1; return;
l2:if((V6<4)) goto l3;
goto l5;
l3:V10=v[61];
V19=x[jvj+2];
V22=V10;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V15; pile[WZ2]=11704; 
(*f[98])( );     /*SRA3(135,V15,11704,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V16,125,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V19,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V18,(-740),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(20,V22,V20,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
if((V6!=2)) goto l5;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l5;
}
