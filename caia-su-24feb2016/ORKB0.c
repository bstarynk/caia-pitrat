#include "dx.h"
void ORKB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V3=0;
int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[X] ;z[jvj+1]=z[X];
l4:pile[v[22]]=238; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(238,jvj+1,V3)*/
V3=pile[WZ2]; 
l7:v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+1,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==85)) goto l7;
if((x[jvj+3]==86)) goto l7;
l5:pile[v[22]]=135; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(135,jvj+1,jvj+11)*/
pile[v[22]]=248; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(248,jvj+1,jvj+8)*/
l2:if((x[jvj+8]>0)) goto l3;
pile[v[22]]=134; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(134,jvj+1,jvj+9)*/
pile[v[22]]=jvj+1; pile[WZ1]=515; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+1,515,0)*/
l6:pile[v[22]]=jvj+1; pile[WZ1]=238; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+1,238,0)*/
pile[WZ1]=510; 
(*f[43])( );     /*CHGC2(jvj+1,510,0)*/
pile[v[22]]=134; pile[WZ1]=jvj+1; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(134,jvj+1,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[2105])( );     /*ORKB0(jvj+10)*/
l8:x[jvj+1]=x[jvj+11] ;z[jvj+1]=z[jvj+11];
goto l4;
l3:x[jvj+4]=s[x[jvj+8]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+8];
pile[v[22]]=161; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(161,jvj+4,jvj+5)*/
pile[v[22]]=122; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(122,jvj+4,jvj+6)*/
pile[v[22]]=447; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(jvj+7,jvj+5,V8)*/
V8=pile[WZ2]; 
if((V8!=0)) goto l7;
x[jvj+8]=t[x[jvj+8]];
goto l2;
}
