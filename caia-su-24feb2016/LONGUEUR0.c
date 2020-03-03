#include "dx.h"
void LONGUEUR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V6=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=vo[16];z[jvj+1]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(128,jvj+1,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3!=A)) goto l3;
pile[v[22]]=128; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(128,jvj+3,jvj+4)*/
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
l4:if((x[jvj+6]<=0)) goto l3;
x[jvj+5]=s[x[jvj+6]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+6];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+5,V5)*/
V5=pile[WZ2]; 
if((V5!=B)) goto l5;
pile[v[22]]=667; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(667,jvj+5,V6)*/
V6=pile[WZ2]; 
R=V6;
v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
}
