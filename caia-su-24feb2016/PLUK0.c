#include "dx.h"
void PLUK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V19=0;
int BL,M,A;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; M=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V6=x[BL];
if((V6<=sepfacts)) goto l1;
if((V6>sephist)) goto l1;
pile[v[22]]=345; pile[WZ1]=BL; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(345,BL,jvj+1)*/
l10:x[jvj+10]=x[BL] ;z[jvj+10]=z[BL];
l11:pile[v[22]]=109; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+10,jvj+11)*/
x[jvj+12]=d[2];z[jvj+12]=0;
l12:if((x[jvj+12]>0)) goto l13;
x[jvj+10]=x[jvj+11] ;z[jvj+10]=z[jvj+11];
goto l11;
l1:x[jvj+1]=x[BL] ;z[jvj+1]=z[BL];
goto l10;
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
v[0]=jvj; v[22]-=3; return;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=A; 
(*f[273])( );     /*PLUK1(jvj+6,A)*/
if((x[M]!=68)) goto l7;
pile[v[22]]=720; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(720,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l7;
pile[v[22]]=313; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(313,jvj+6,jvj+8)*/
x[jvj+17]=x[jvj+8] ;z[jvj+17]=z[jvj+8];
l8:if((x[jvj+17]<=0)) goto l7;
x[jvj+9]=s[x[jvj+17]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+17];
if((x[jvj+9]==x[BL])) goto l9;
pile[v[22]]=jvj+9; pile[WZ1]=M; pile[WZ2]=720; 
(*f[81])( );     /*PLUK0(jvj+9,M,720)*/
l9:x[jvj+17]=t[x[jvj+17]];
goto l8;
l7:x[jvj+5]=t[x[jvj+5]];
goto l5;
l13:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=240; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(jvj+13,240,jvj+14)*/
x[jvj+18]=x[jvj+14] ;z[jvj+18]=z[jvj+14];
l14:if((x[jvj+18]>0)) goto l15;
x[jvj+12]=t[x[jvj+12]];
goto l12;
l15:x[jvj+15]=s[x[jvj+18]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+18];
pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,jvj+15,jvj+16)*/
if((x[jvj+16]!=x[jvj+11])) goto l16;
V19=x[jvj+15];
pile[v[22]]=jvj+13; pile[WZ1]=240; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(jvj+13,240,V19)*/
l16:x[jvj+18]=t[x[jvj+18]];
goto l14;
}
