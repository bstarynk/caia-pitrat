#include "dx.h"
void QTTER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V18=0,V14=0,V15=0,V16=0,V17=0,V7=0,V6=0,V8=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11187;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2063&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=334; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(334,jvj+4,jvj+5)*/
if((x[jvj+5]!=0)) goto l6;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(509,jvj+6,jvj+7)*/
l4:if((x[jvj+7]<=0)) goto l6;
x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+8)*/
if((x[jvj+8]!=0)) goto l5;
pile[v[22]]=jvj+2; pile[WZ1]=545; pile[WZ2]=jvj+2; pile[WZ3]=68; 
(*f[2119])( );     /*QRR3(jvj+2,545,jvj+2,68)*/
V7=vv[7];
V6=V7+1;
vv[7]=V6;
V8=g[534];
if((V8<=0)) goto l5;
V9=vg[534];
if((V9!=0)) goto l1;
if((V8<3)) goto l3;
l1:pile[v[22]]=534; pile[WZ1]=11187; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=jvj+2; pile[WZ5]=jvj+3; 
(*f[232])( );     /*INTERP3(534,11187,0,(-601),jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l2:if((V8<4)) goto l3;
goto l5;
l3:V18=x[jvj+2];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=545; 
(*f[42])( );     /*SRA1(135,0,545,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V14,45,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V15; pile[WZ2]=221; 
(*f[42])( );     /*SRA1(135,V15,221,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V18; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V18,V16,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; 
(*f[40])( );     /*SLG0(V17)*/
if((V8!=2)) goto l5;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l5;
l6:x[jvj+1]=incon; v[0]=jvj; return;
}
