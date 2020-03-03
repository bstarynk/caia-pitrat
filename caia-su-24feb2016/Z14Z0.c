#include "dx.h"
void Z14Z0(void )
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
v[0]+=22;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(250,158,jvj+14)*/
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
l3:x[jvj+20]=w[x[jvj+1]][9];
l4:if((x[jvj+20]>0)) goto l5;
x[jvj+21]=w[x[jvj+1]][8];
l7:if((x[jvj+21]<=0)) goto l10;
x[jvj+17]=s[x[jvj+21]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+21];
pile[v[22]]=jvj+17; pile[WZ1]=BXXX; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,BXXX,jvj+18)*/
x[jvj+22]=x[jvj+18] ;z[jvj+22]=z[jvj+18];
l8:if((x[jvj+22]>0)) goto l9;
x[jvj+21]=t[x[jvj+21]];
goto l7;
l5:x[jvj+15]=s[x[jvj+20]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+20];
pile[v[22]]=jvj+15; pile[WZ1]=BXXX; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,BXXX,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+14; 
(*f[1441])( );     /*Z14Z1(jvj+16,jvj+14)*/
l6:x[jvj+20]=t[x[jvj+20]];
goto l4;
l9:x[jvj+19]=s[x[jvj+22]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+22];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+14; 
(*f[1441])( );     /*Z14Z1(jvj+19,jvj+14)*/
x[jvj+22]=t[x[jvj+22]];
goto l8;
l10:pile[v[22]]=159; pile[WZ1]=jvj+14; pile[WZ2]=BRRR; 
(*f[33])( );     /*FNDE0(159,jvj+14,BRRR)*/
v[0]=jvj; v[22]-=2; return;
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
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=365)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+8,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=21)) goto l2;
pile[v[22]]=jvj+14; pile[WZ1]=159; pile[WZ2]=BXXX; 
(*f[36])( );     /*PLUSC0(jvj+14,159,BXXX)*/
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
}
