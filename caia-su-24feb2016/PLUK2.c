#include "dx.h"
void PLUK2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V14=0;
int BL,A;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; A=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=x[BL];
if((V2<=sepfacts)) goto l1;
if((V2>sephist)) goto l1;
pile[v[22]]=345; pile[WZ1]=BL; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(345,BL,jvj+1)*/
l7:x[jvj+7]=x[BL] ;z[jvj+7]=z[BL];
l8:pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+7,jvj+8)*/
x[jvj+9]=d[2];z[jvj+9]=0;
l9:if((x[jvj+9]>0)) goto l10;
x[jvj+7]=x[jvj+8] ;z[jvj+7]=z[jvj+8];
goto l8;
l1:x[jvj+1]=x[BL] ;z[jvj+1]=z[BL];
goto l7;
l3:pile[v[22]]=565; pile[WZ1]=jvj+1; 
(*f[71])( );     /*ENLV0(565,jvj+1)*/
if((x[BL]==x[jvj+1])) goto l4;
pile[v[22]]=184; 
(*f[71])( );     /*ENLV0(184,jvj+1)*/
pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(184,BL,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l4;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+1; pile[WZ1]=184; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+1,184,jvj+4)*/
x[jvj+2]=t[x[jvj+2]];
goto l2;
l4:pile[v[22]]=365; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+1,jvj+5)*/
l5:if((x[jvj+5]>0)) goto l6;
v[0]=jvj; v[22]-=2; return;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=A; 
(*f[273])( );     /*PLUK1(jvj+6,A)*/
x[jvj+5]=t[x[jvj+5]];
goto l5;
l10:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=240; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(jvj+10,240,jvj+11)*/
x[jvj+14]=x[jvj+11] ;z[jvj+14]=z[jvj+11];
l11:if((x[jvj+14]>0)) goto l12;
x[jvj+9]=t[x[jvj+9]];
goto l9;
l12:x[jvj+12]=s[x[jvj+14]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+14];
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[jvj+8])) goto l13;
V14=x[jvj+12];
pile[v[22]]=jvj+10; pile[WZ1]=240; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(jvj+10,240,V14)*/
l13:x[jvj+14]=t[x[jvj+14]];
goto l11;
}
