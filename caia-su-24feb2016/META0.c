#include "dx.h"
void META0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,KK=0,UR=0,V4=0,V9=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11605;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==171&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=35; 
(*f[346])( );     /*LK1(35)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
KK=V1;
UR=V2;
if((KK==67)) goto l7;
if((KK==75)) goto l1;
if((KK!=70)) goto l8;
pile[v[22]]=898; pile[WZ1]=905; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(898,905,jvj+4)*/
l4:if((x[jvj+4]<=0)) goto l8;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=162; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(162,jvj+5,V9)*/
V9=pile[WZ2]; 
if((V9!=UR)) goto l5;
pile[v[22]]=218; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+5,jvj+6)*/
pile[v[22]]=1357; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(1357,jvj+6)*/
pile[v[22]]=1629; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1629,jvj+6,jvj+7)*/
l6:if((x[jvj+7]<=0)) goto l8;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; 
(*f[570])( );     /*CREUSFCT0(jvj+8)*/
x[jvj+7]=t[x[jvj+7]];
goto l6;
l1:pile[v[22]]=898; pile[WZ1]=905; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(898,905,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l8;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4!=UR)) goto l3;
pile[v[22]]=218; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+3,jvj+9)*/
pile[v[22]]=1629; pile[WZ1]=jvj+9; 
(*f[71])( );     /*ENLV0(1629,jvj+9)*/
pile[v[22]]=1357; 
(*f[71])( );     /*ENLV0(1357,jvj+9)*/
pile[v[22]]=jvj+3; 
(*f[569])( );     /*CRERULES0(jvj+3)*/
l8:x[jvj+1]=incon; v[0]=jvj; return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:x[jvj+4]=t[x[jvj+4]];
goto l4;
l7:
(*f[568])( );     /*CALARITH0()*/
goto l8;
}
