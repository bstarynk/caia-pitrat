#include "dx.h"
void Z174Z1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0;
int BXXX,BTTT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BTTT=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,BXXX,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=74)) goto l1;
pile[v[22]]=102; pile[WZ1]=BXXX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,BXXX,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=43)) goto l1;
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+3,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+5,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=365)) goto l1;
pile[v[22]]=BTTT; pile[WZ1]=159; pile[WZ2]=BXXX; 
(*f[36])( );     /*PLUSC0(BTTT,159,BXXX)*/
l1:pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,BXXX,jvj+8)*/
x[jvj+14]=w[x[jvj+8]][9];
l2:if((x[jvj+14]>0)) goto l3;
x[jvj+15]=w[x[jvj+8]][8];
l5:if((x[jvj+15]<=0)) goto l8;
x[jvj+11]=s[x[jvj+15]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+15];
pile[v[22]]=jvj+11; pile[WZ1]=BXXX; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+11,BXXX,jvj+12)*/
x[jvj+16]=x[jvj+12] ;z[jvj+16]=z[jvj+12];
l6:if((x[jvj+16]>0)) goto l7;
x[jvj+15]=t[x[jvj+15]];
goto l5;
l3:x[jvj+9]=s[x[jvj+14]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+14];
pile[v[22]]=jvj+9; pile[WZ1]=BXXX; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,BXXX,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=BTTT; 
(*f[1617])( );     /*Z174Z1(jvj+10,BTTT)*/
l4:x[jvj+14]=t[x[jvj+14]];
goto l2;
l7:x[jvj+13]=s[x[jvj+16]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+16];
pile[v[22]]=jvj+13; pile[WZ1]=BTTT; 
(*f[1617])( );     /*Z174Z1(jvj+13,BTTT)*/
x[jvj+16]=t[x[jvj+16]];
goto l6;
l8:v[0]=jvj; v[22]-=2; return;
}
