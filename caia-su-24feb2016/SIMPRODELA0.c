#include "dx.h"
void SIMPRODELA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V2=0,V9=0,V7=0;
int EE,Q,P;
int EA;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

EE=pile[v[22]]; Q=pile[v[22]+1]; P=pile[v[22]+2]; EA=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=0 ;z[jvj+6]=0;
x[EA]=x[jvj+6] ;z[EA]=z[jvj+6];
if((Q==0)) goto l5;
if((Q<=0)) goto l9;
x[jvj+7]=x[EE] ;z[jvj+7]=z[EE];
l1:if((x[jvj+7]<=0)) goto l9;
x[jvj+1]=s[x[jvj+7]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+7];
pile[v[22]]=510; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+1,V3)*/
V3=pile[WZ2]; 
if((V3<=0)) goto l2;
V2=incon;
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+1,V5)*/
V5=pile[WZ2]; 
if((V5>Q)) goto l3;
V2=V5;
l8:pile[v[22]]=447; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(447,jvj+1,jvj+4)*/
pile[v[22]]=P; pile[WZ1]=V2; pile[WZ3]=jvj+5; 
(*f[1456])( );if(v[102]) goto l9;     /*SIMPRODEL0(P,V2,jvj+4,jvj+5)*/
V7=Q-V2;
pile[v[22]]=EA; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(EA,jvj+5)*/
pile[v[22]]=jvj+1; pile[WZ1]=510; pile[WZ2]=(-1); 
(*f[43])( );     /*CHGC2(jvj+1,510,(-1))*/
pile[v[22]]=EA; pile[WZ1]=V7; pile[WZ2]=EE; pile[WZ3]=P; 
(*f[1897])( );     /*SIMPRODELA1(EA,V7,EE,P)*/
l9:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:V2=Q;
goto l8;
l5:x[jvj+8]=x[EE] ;z[jvj+8]=z[EE];
l4:if((x[jvj+8]<=0)) goto l9;
x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(510,jvj+2,V9)*/
V9=pile[WZ2]; 
if((V9<0)) goto l6;
l7:pile[v[22]]=447; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+2,jvj+3)*/
pile[v[22]]=EA; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(EA,jvj+3)*/
l6:x[jvj+8]=t[x[jvj+8]];
goto l4;
}
