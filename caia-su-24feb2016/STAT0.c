#include "dx.h"
void STAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int NR;
int P;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11503;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==556&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; P=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[P]=incon;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=P; 
(*f[54])( );     /*TRI1(250,158,P)*/
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1415,jvj+2,jvj+3)*/
l1:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+4)*/
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V4<=NR)) goto l2;
pile[v[22]]=218; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+4,jvj+5)*/
x[jvj+7]=578 ;z[jvj+7]=578;
pile[v[22]]=jvj+7; pile[WZ1]=P; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,P,jvj+8)*/
l7:if((x[jvj+8]>0)) goto l9;
pile[v[22]]=jvj+5; pile[WZ1]=218; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+5,218,jvj+6)*/
pile[v[22]]=P; pile[WZ1]=jvj+7; 
(*f[36])( );     /*PLUSC0(P,jvj+7,jvj+6)*/
l3:pile[v[22]]=jvj+6; pile[WZ1]=jvj+4; 
(*f[912])( );     /*STATA0(jvj+6,jvj+4)*/
l2:x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
goto l1;
l5:if(x[P]!=incon) goto l6;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l8:x[jvj+8]=t[x[jvj+8]];
goto l7;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(218,jvj+9,jvj+10)*/
if((x[jvj+10]!=x[jvj+5])) goto l8;
x[jvj+6]=x[jvj+9] ;z[jvj+6]=z[jvj+9];
goto l3;
}
