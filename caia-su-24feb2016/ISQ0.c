#include "dx.h"
void ISQ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V7=0,V12=0;
int VA,VB,X,K;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

VA=pile[v[22]]; VB=pile[v[22]+1]; X=pile[v[22]+2]; K=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=220; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(220,X,V4)*/
V4=pile[WZ2]; 
if((V4==K)) goto l8;
l6:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=73)) goto l7;
pile[v[22]]=128; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(128,jvj+1,jvj+3)*/
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+1,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==255)) goto l1;
l7:pile[v[22]]=X; pile[WZ1]=220; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(X,220,K)*/
pile[v[22]]=VA; pile[WZ1]=VB; pile[WZ2]=jvj+1; 
(*f[2101])( );     /*SUBVT0(VA,VB,jvj+1)*/
pile[v[22]]=436; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,jvj+1,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+8,V12)*/
V12=pile[WZ2]; 
if((V12!=VB)) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+1,jvj+7)*/
if((x[jvj+7]==39)) goto l4;
l8:v[0]=jvj; v[22]-=4; return;
l4:x[jvj+9]=d[108];z[jvj+9]=0;
l3:if((x[jvj+9]<=0)) goto l8;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,X,jvj+11)*/
pile[v[22]]=VA; pile[WZ1]=VB; pile[WZ3]=K; 
(*f[2100])( );     /*ISQ0(VA,VB,jvj+11,K)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l3;
l1:if((x[jvj+3]<=0)) goto l7;
x[jvj+6]=s[x[jvj+3]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+3];
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+6,V7)*/
V7=pile[WZ2]; 
if((VB==V7)) goto l8;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
}
