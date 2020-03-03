#include "dx.h"
void VALTAB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V6=0,V8=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=vo[16];z[jvj+1]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(454,jvj+1,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=436; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+3,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V3)*/
V3=pile[WZ2]; 
if((V3!=A)) goto l3;
pile[v[22]]=480; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(480,jvj+3,jvj+5)*/
x[jvj+9]=x[jvj+5] ;z[jvj+9]=z[jvj+5];
l4:if((x[jvj+9]<=0)) goto l3;
x[jvj+6]=s[x[jvj+9]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+9];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V6)*/
V6=pile[WZ2]; 
if((V6!=B)) goto l5;
pile[v[22]]=489; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(489,jvj+6,jvj+7)*/
x[jvj+10]=x[jvj+7] ;z[jvj+10]=z[jvj+7];
l6:if((x[jvj+10]<=0)) goto l5;
x[jvj+8]=s[x[jvj+10]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+8,V8)*/
V8=pile[WZ2]; 
R=V8;
v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
l7:x[jvj+10]=t[x[jvj+10]];
goto l6;
}
