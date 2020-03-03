#include "dx.h"
void DETEXPLO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=22;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,N,jvj+1)*/
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]!=69)) goto l5;
pile[v[22]]=108; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(108,jvj+1,jvj+3)*/
x[jvj+20]=x[jvj+3] ;z[jvj+20]=z[jvj+3];
l1:if((x[jvj+20]<=0)) goto l5;
x[jvj+4]=s[x[jvj+20]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+20];
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=576)) goto l2;
x[jvj+21]=x[jvj+3] ;z[jvj+21]=z[jvj+3];
l3:if((x[jvj+21]<=0)) goto l2;
x[jvj+7]=s[x[jvj+21]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+21];
if((x[jvj+4]==x[jvj+7])) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=576)) goto l4;
pile[v[22]]=N; pile[WZ1]=1297; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,1297,68)*/
l4:x[jvj+21]=t[x[jvj+21]];
goto l3;
l2:x[jvj+20]=t[x[jvj+20]];
goto l1;
l5:pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(184,N,jvj+10)*/
l6:if((x[jvj+10]>0)) goto l7;
v[0]=jvj; v[22]-=1; return;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=42)) goto l8;
pile[v[22]]=105; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(105,jvj+11,jvj+13)*/
x[jvj+22]=x[jvj+13] ;z[jvj+22]=z[jvj+13];
l9:if((x[jvj+22]<=0)) goto l8;
x[jvj+14]=s[x[jvj+22]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+22];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=73)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+14,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=301)) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+14,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=1086)) goto l10;
pile[v[22]]=N; pile[WZ1]=1297; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,1297,68)*/
l10:x[jvj+22]=t[x[jvj+22]];
goto l9;
l8:x[jvj+10]=t[x[jvj+10]];
goto l6;
}
