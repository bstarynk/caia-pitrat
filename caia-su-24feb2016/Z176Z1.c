#include "dx.h"
void Z176Z1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0;
int BXXX,BTTT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BTTT=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,BXXX,jvj+1)*/
if((x[jvj+1]!=22)) goto l3;
pile[v[22]]=107; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(107,BXXX,jvj+2)*/
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,BXXX,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]==533||x[jvj+4]==532||x[jvj+4]==50) goto l1;
l3:x[jvj+18]=w[x[jvj+1]][9];
l4:if((x[jvj+18]>0)) goto l5;
x[jvj+19]=w[x[jvj+1]][8];
l7:if((x[jvj+19]<=0)) goto l10;
x[jvj+15]=s[x[jvj+19]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+19];
pile[v[22]]=jvj+15; pile[WZ1]=BXXX; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+15,BXXX,jvj+16)*/
x[jvj+20]=x[jvj+16] ;z[jvj+20]=z[jvj+16];
l8:if((x[jvj+20]>0)) goto l9;
x[jvj+19]=t[x[jvj+19]];
goto l7;
l5:x[jvj+13]=s[x[jvj+18]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+18];
pile[v[22]]=jvj+13; pile[WZ1]=BXXX; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+13,BXXX,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=BTTT; 
(*f[1620])( );     /*Z176Z1(jvj+14,BTTT)*/
l6:x[jvj+18]=t[x[jvj+18]];
goto l4;
l9:x[jvj+17]=s[x[jvj+20]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+20];
pile[v[22]]=jvj+17; pile[WZ1]=BTTT; 
(*f[1620])( );     /*Z176Z1(jvj+17,BTTT)*/
x[jvj+20]=t[x[jvj+20]];
goto l8;
l10:v[0]=jvj; v[22]-=2; return;
l1:if((x[jvj+2]<=0)) goto l3;
x[jvj+5]=s[x[jvj+2]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+2];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=44)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+5,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=43)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+8,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+10,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+8,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=365)) goto l2;
pile[v[22]]=BTTT; pile[WZ1]=159; pile[WZ2]=BXXX; 
(*f[36])( );     /*PLUSC0(BTTT,159,BXXX)*/
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
}
