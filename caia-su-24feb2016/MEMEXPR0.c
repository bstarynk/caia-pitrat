#include "dx.h"
void MEMEXPR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V,W,BA;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

V=pile[v[22]]; W=pile[v[22]+1]; BA=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=V; pile[WZ1]=BA; pile[WZ2]=jvj+1; 
(*f[1915])( );     /*NATFNDA1(V,BA,jvj+1)*/
pile[v[22]]=W; pile[WZ2]=jvj+2; 
(*f[1915])( );     /*NATFNDA1(W,BA,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=1752; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(jvj+2,1752,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,1752,jvj+2)*/
pile[v[22]]=1752; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1752,jvj+2,jvj+7)*/
pile[v[22]]=1261; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1261,jvj+2,jvj+8)*/
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=1752; pile[WZ1]=jvj+1; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1752,jvj+1,jvj+12)*/
pile[v[22]]=1261; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1261,jvj+1,jvj+13)*/
l7:if((x[jvj+13]>0)) goto l8;
v[0]=jvj; v[22]-=3; return;
l2:x[jvj+11]=s[x[jvj+8]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+8];
pile[v[22]]=350; pile[WZ1]=100; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(350,100,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l5;
pile[v[22]]=159; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,100,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l5;
l3:x[jvj+8]=t[x[jvj+8]];
goto l1;
l5:x[jvj+17]=x[jvj+7] ;z[jvj+17]=z[jvj+7];
l4:if((x[jvj+17]<=0)) goto l3;
x[jvj+9]=s[x[jvj+17]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+17];
pile[v[22]]=1261; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1261,jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l6;
pile[v[22]]=jvj+9; pile[WZ1]=1261; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+9,1261,jvj+11)*/
l6:x[jvj+17]=t[x[jvj+17]];
goto l4;
l8:x[jvj+16]=s[x[jvj+13]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+13];
pile[v[22]]=350; pile[WZ1]=100; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(350,100,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l11;
pile[v[22]]=159; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,100,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l11;
l9:x[jvj+13]=t[x[jvj+13]];
goto l7;
l11:x[jvj+18]=x[jvj+12] ;z[jvj+18]=z[jvj+12];
l10:if((x[jvj+18]<=0)) goto l9;
x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
pile[v[22]]=1261; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1261,jvj+14,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l12;
pile[v[22]]=jvj+14; pile[WZ1]=1261; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+14,1261,jvj+16)*/
l12:x[jvj+18]=t[x[jvj+18]];
goto l10;
}
