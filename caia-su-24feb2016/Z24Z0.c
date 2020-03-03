#include "dx.h"
void Z24Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V15=0,V4=0,V27=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=15525;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1865&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(539,NNNY,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=596)) goto l1;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+2,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+5,V24)*/
V24=pile[WZ2]; 
if((V24!=1)) goto l1;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+2,jvj+6)*/
NNNT=188;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+2,jvj+6,NNNX)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:if(x[jvj+4]!=63&&x[jvj+4]!=990) goto l2;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+2,jvj+7)*/
if((x[jvj+7]!=22)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+2,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+8,V15)*/
V15=pile[WZ2]; 
if((V15!=1)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+2,jvj+9)*/
NNNT=21;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+9; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+2,jvj+9,NNNX)*/
goto l7;
l2:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(543,NNNY,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=486)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+13)*/
l3:if((x[jvj+13]<=0)) goto l6;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
if((x[NNNY]!=x[jvj+14])) goto l4;
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+14,V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l4;
x[NNNX]=x[jvj+10] ;z[NNNX]=z[jvj+10];
NNNT=2;
V27=x[NNNY];
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=V27; 
(*f[134])( );     /*OTA0(107,jvj+10,V27)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+10)*/
goto l7;
l4:x[jvj+13]=t[x[jvj+13]];
goto l3;
l6:x[NNNX]=NNNT=incon;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
