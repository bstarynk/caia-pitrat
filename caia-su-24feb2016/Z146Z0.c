#include "dx.h"
void Z146Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V9=0,V=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=15647;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1859&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=NNNY; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,NNNY,V)*/
V=pile[WZ2]; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l7;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=V)) goto l2;
x[jvj+7]=incon;
pile[v[22]]=158; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]!=41)) goto l3;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+7)*/
l3:if(x[jvj+5]!=599&&x[jvj+5]!=20) goto l4;
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
l5:if((x[jvj+7]==(-99999998))) goto l7;
NNNT=33;
pile[v[22]]=NNNY; pile[WZ1]=jvj+7; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+7,NNNX)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:if(x[jvj+7]==incon) goto l7;
goto l5;
l7:x[NNNX]=NNNT=incon;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
