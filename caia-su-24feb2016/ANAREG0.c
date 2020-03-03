#include "dx.h"
void ANAREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N,K,E,SS,NR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10990;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==148&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; K=pile[v[22]+1]; E=pile[v[22]+2]; SS=pile[v[22]+3]; NR=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=208; pile[WZ1]=860; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(208,860,jvj+7)*/
pile[v[22]]=N; pile[WZ1]=K; pile[WZ2]=87; pile[WZ3]=SS; pile[WZ4]=E; pile[WZ5]=NR; pile[v[22]+6]=jvj+2; 
(*f[448])( );     /*SORINU0(N,K,87,SS,E,NR,jvj+2)*/
pile[v[22]]=1001; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1001,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
if((x[SS]!=68)) goto l8;
pile[v[22]]=159; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+8)*/
l5:if((x[jvj+8]<=0)) goto l8;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; 
(*f[450])( );     /*SOREGBILAN0(jvj+9)*/
x[jvj+8]=t[x[jvj+8]];
goto l5;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=159; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(159,jvj+4,jvj+5)*/
x[jvj+12]=x[jvj+5] ;z[jvj+12]=z[jvj+5];
l3:if((x[jvj+12]>0)) goto l4;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+6]=s[x[jvj+12]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+12];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; pile[WZ2]=SS; pile[WZ3]=N; pile[WZ4]=jvj+7; 
(*f[449])( );     /*INUBAS0(jvj+4,jvj+6,SS,N,jvj+7)*/
x[jvj+12]=t[x[jvj+12]];
goto l3;
l7:x[jvj+10]=s[x[jvj+13]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+13];
pile[v[22]]=1001; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1001,jvj+10,jvj+11)*/
if((x[jvj+11]==0)) goto l9;
pile[v[22]]=jvj+10; pile[WZ1]=N; 
(*f[451])( );     /*COMPRIMEJGT0(jvj+10,N)*/
l9:x[jvj+13]=t[x[jvj+13]];
l6:if((x[jvj+13]>0)) goto l7;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l8:x[jvj+13]=x[E] ;z[jvj+13]=z[E];
goto l6;
}
