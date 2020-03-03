#include "dx.h"
void FNDATT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=0 ;z[jvj+12]=0;
x[R]=x[jvj+12] ;z[R]=z[jvj+12];
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,A,jvj+1)*/
x[jvj+13]=w[x[jvj+1]][9];
l1:if((x[jvj+13]>0)) goto l2;
if((x[jvj+1]==39)) goto l4;
x[jvj+14]=w[x[jvj+1]][8];
l7:if((x[jvj+14]>0)) goto l8;
if((x[jvj+1]!=43)) goto l11;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,A,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+10,jvj+11)*/
pile[v[22]]=R; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(R,jvj+11)*/
l11:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+13]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+13];
pile[v[22]]=jvj+2; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+2,A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=R; 
(*f[775])( );     /*FNDFONC1(jvj+3,R)*/
l3:x[jvj+13]=t[x[jvj+13]];
goto l1;
l4:pile[v[22]]=114; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(114,A,jvj+4)*/
l5:if((x[jvj+4]<=0)) goto l11;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=R; 
(*f[775])( );     /*FNDFONC1(jvj+6,R)*/
l6:x[jvj+4]=t[x[jvj+4]];
goto l5;
l8:x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,A,jvj+8)*/
x[jvj+15]=x[jvj+8] ;z[jvj+15]=z[jvj+8];
l9:if((x[jvj+15]>0)) goto l10;
x[jvj+14]=t[x[jvj+14]];
goto l7;
l10:x[jvj+9]=s[x[jvj+15]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+15];
pile[v[22]]=jvj+9; pile[WZ1]=R; 
(*f[775])( );     /*FNDFONC1(jvj+9,R)*/
x[jvj+15]=t[x[jvj+15]];
goto l9;
}
