#include "dx.h"
void Z251Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BXXX;
int BRRR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(250,158,jvj+9)*/
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
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+3,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=365)) goto l1;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+3,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=21)) goto l1;
pile[v[22]]=jvj+9; pile[WZ1]=159; pile[WZ2]=BXXX; 
(*f[36])( );     /*PLUSC0(jvj+9,159,BXXX)*/
l1:pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,BXXX,jvj+10)*/
x[jvj+16]=w[x[jvj+10]][9];
l2:if((x[jvj+16]>0)) goto l3;
x[jvj+17]=w[x[jvj+10]][8];
l5:if((x[jvj+17]<=0)) goto l8;
x[jvj+13]=s[x[jvj+17]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+17];
pile[v[22]]=jvj+13; pile[WZ1]=BXXX; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(jvj+13,BXXX,jvj+14)*/
x[jvj+18]=x[jvj+14] ;z[jvj+18]=z[jvj+14];
l6:if((x[jvj+18]>0)) goto l7;
x[jvj+17]=t[x[jvj+17]];
goto l5;
l3:x[jvj+11]=s[x[jvj+16]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+16];
pile[v[22]]=jvj+11; pile[WZ1]=BXXX; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+11,BXXX,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+9; 
(*f[1439])( );     /*Z251Z1(jvj+12,jvj+9)*/
l4:x[jvj+16]=t[x[jvj+16]];
goto l2;
l7:x[jvj+15]=s[x[jvj+18]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+18];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+9; 
(*f[1439])( );     /*Z251Z1(jvj+15,jvj+9)*/
x[jvj+18]=t[x[jvj+18]];
goto l6;
l8:pile[v[22]]=159; pile[WZ1]=jvj+9; pile[WZ2]=BRRR; 
(*f[33])( );     /*FNDE0(159,jvj+9,BRRR)*/
v[0]=jvj; v[22]-=2; return;
}
