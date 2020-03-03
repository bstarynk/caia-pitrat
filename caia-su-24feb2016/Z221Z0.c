#include "dx.h"
void Z221Z0(void )
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
v[0]+=17;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,BXXX,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=596)) goto l2;
pile[v[22]]=102; pile[WZ1]=BXXX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,BXXX,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=41)) goto l2;
pile[v[22]]=103; pile[WZ1]=BXXX; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,BXXX,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==484)) goto l1;
l2:pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,BXXX,jvj+7)*/
x[jvj+15]=w[x[jvj+7]][9];
l3:if((x[jvj+15]>0)) goto l4;
x[jvj+16]=w[x[jvj+7]][8];
l6:if((x[jvj+16]<=0)) goto l9;
x[jvj+11]=s[x[jvj+16]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+16];
pile[v[22]]=jvj+11; pile[WZ1]=BXXX; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+11,BXXX,jvj+12)*/
x[jvj+17]=x[jvj+12] ;z[jvj+17]=z[jvj+12];
l7:if((x[jvj+17]>0)) goto l8;
x[jvj+16]=t[x[jvj+16]];
goto l6;
l1:x[BRRR]=135 ;z[BRRR]=135;
l10:v[0]=jvj; v[22]-=2; return;
l4:x[jvj+8]=s[x[jvj+15]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+15];
pile[v[22]]=jvj+8; pile[WZ1]=BXXX; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,BXXX,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[900])( );     /*Z221Z0(jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l1;
l5:x[jvj+15]=t[x[jvj+15]];
goto l3;
l8:x[jvj+13]=s[x[jvj+17]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+17];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[900])( );     /*Z221Z0(jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l1;
x[jvj+17]=t[x[jvj+17]];
goto l7;
l9:x[BRRR]=134 ;z[BRRR]=134;
goto l10;
}
