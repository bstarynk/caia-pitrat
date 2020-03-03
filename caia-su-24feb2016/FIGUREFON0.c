#include "dx.h"
void FIGUREFON0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,P;
int RES;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; P=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,P,jvj+1)*/
for(a=x[A];a>0;a=t[a]) if(s[a]==x[jvj+1]) goto l1;
l4:x[jvj+2]=d[51];z[jvj+2]=0;
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=100; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,P,jvj+6)*/
x[jvj+11]=w[x[jvj+6]][8];
l6:if((x[jvj+11]<=0)) goto l9;
x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=P; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,P,jvj+8)*/
x[jvj+12]=x[jvj+8] ;z[jvj+12]=z[jvj+8];
l7:if((x[jvj+12]>0)) goto l8;
x[jvj+11]=t[x[jvj+11]];
goto l6;
l1:x[RES]=135 ;z[RES]=135;
l10:v[0]=jvj; v[22]-=3; return;
l3:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=P; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+3,P,jvj+4)*/
pile[v[22]]=A; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1398])( );     /*FIGUREFON0(A,jvj+4,jvj+5)*/
if((x[jvj+5]==135)) goto l1;
l5:x[jvj+2]=t[x[jvj+2]];
goto l2;
l8:x[jvj+9]=s[x[jvj+12]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+12];
pile[v[22]]=A; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1398])( );     /*FIGUREFON0(A,jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l1;
x[jvj+12]=t[x[jvj+12]];
goto l7;
l9:x[RES]=134 ;z[RES]=134;
goto l10;
}
