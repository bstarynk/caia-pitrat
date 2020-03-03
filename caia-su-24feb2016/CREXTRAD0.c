#include "dx.h"
void CREXTRAD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0;
int RN;
int RK;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11923;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1520&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RN=pile[v[22]]; RK=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[RN] ;z[jvj+2]=z[RN];
l1:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
x[RK]=x[jvj+2] ;z[RK]=z[jvj+2];
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=278)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+4,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=651)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+4,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=21)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+7,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=21)) goto l4;
V19=x[jvj+4];
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(107,jvj+2,V19)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+10; pile[WZ2]=jvj+2; pile[WZ3]=jvj+14; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+12,jvj+10,jvj+2,jvj+14)*/
x[jvj+2]=x[jvj+14] ;z[jvj+2]=z[jvj+14];
goto l1;
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
}
