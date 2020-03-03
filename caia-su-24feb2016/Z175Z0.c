#include "dx.h"
void Z175Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0;
int BXXX;
int BRRR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(250,158,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,BXXX,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=50)) goto l3;
pile[v[22]]=107; pile[WZ1]=BXXX; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,BXXX,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=44)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=43)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+7,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+9,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=365)) goto l2;
pile[v[22]]=jvj+12; pile[WZ1]=159; pile[WZ2]=BXXX; 
(*f[36])( );     /*PLUSC0(jvj+12,159,BXXX)*/
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,BXXX,jvj+13)*/
x[jvj+19]=w[x[jvj+13]][9];
l4:if((x[jvj+19]>0)) goto l5;
x[jvj+20]=w[x[jvj+13]][8];
l7:if((x[jvj+20]<=0)) goto l10;
x[jvj+16]=s[x[jvj+20]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+20];
pile[v[22]]=jvj+16; pile[WZ1]=BXXX; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,BXXX,jvj+17)*/
x[jvj+21]=x[jvj+17] ;z[jvj+21]=z[jvj+17];
l8:if((x[jvj+21]>0)) goto l9;
x[jvj+20]=t[x[jvj+20]];
goto l7;
l5:x[jvj+14]=s[x[jvj+19]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+19];
pile[v[22]]=jvj+14; pile[WZ1]=BXXX; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+14,BXXX,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+12; 
(*f[1619])( );     /*Z175Z1(jvj+15,jvj+12)*/
l6:x[jvj+19]=t[x[jvj+19]];
goto l4;
l9:x[jvj+18]=s[x[jvj+21]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+21];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+12; 
(*f[1619])( );     /*Z175Z1(jvj+18,jvj+12)*/
x[jvj+21]=t[x[jvj+21]];
goto l8;
l10:pile[v[22]]=159; pile[WZ1]=jvj+12; pile[WZ2]=BRRR; 
(*f[33])( );     /*FNDE0(159,jvj+12,BRRR)*/
v[0]=jvj; v[22]-=2; return;
}
