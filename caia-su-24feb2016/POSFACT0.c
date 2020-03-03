#include "dx.h"
void POSFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V5=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=26;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==485)) goto l1;
if((x[jvj+6]!=486)) goto l17;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,A,jvj+15)*/
for(i=x[jvj+15],V5=0;i>0;i=t[i],V5++)  ;
if((V5!=2)) goto l12;
x[jvj+22]=x[jvj+15] ;z[jvj+22]=z[jvj+15];
l7:if((x[jvj+22]<=0)) goto l12;
x[jvj+16]=s[x[jvj+22]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+22];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=41)) goto l8;
x[jvj+23]=x[jvj+15] ;z[jvj+23]=z[jvj+15];
l9:if((x[jvj+23]<=0)) goto l8;
x[jvj+18]=s[x[jvj+23]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+23];
if((x[jvj+16]==x[jvj+18])) goto l10;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[896])( );if(v[102]) goto l10;     /*POSFACT0(jvj+18,jvj+19)*/
if((x[jvj+19]==68)) goto l6;
l10:x[jvj+23]=t[x[jvj+23]];
goto l9;
l1:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,A,jvj+7)*/
x[jvj+20]=x[jvj+7] ;z[jvj+20]=z[jvj+7];
l2:if((x[jvj+20]<=0)) goto l17;
x[jvj+8]=s[x[jvj+20]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+20];
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=486)) goto l3;
x[jvj+11]=x[jvj+8] ;z[jvj+11]=z[jvj+8];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(jvj+11,jvj+12)*/
for(i=x[jvj+12],V17=0;i>0;i=t[i],V17++)  ;
if((V17<2)) goto l3;
x[jvj+21]=x[jvj+7] ;z[jvj+21]=z[jvj+7];
l4:if((x[jvj+21]<=0)) goto l3;
x[jvj+13]=s[x[jvj+21]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+21];
if((x[jvj+8]==x[jvj+13])) goto l5;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+13,jvj+14)*/
if((x[jvj+14]!=0)) goto l6;
l5:x[jvj+21]=t[x[jvj+21]];
goto l4;
l3:x[jvj+20]=t[x[jvj+20]];
goto l2;
l8:x[jvj+22]=t[x[jvj+22]];
goto l7;
l12:x[jvj+26]=x[jvj+15] ;z[jvj+26]=z[jvj+15];
l11:if((x[jvj+26]<=0)) goto l17;
x[jvj+24]=s[x[jvj+26]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+26];
x[jvj+1]=x[jvj+24] ;z[jvj+1]=z[jvj+24];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+2]==41)) goto l13;
l15:x[jvj+25]=x[jvj+15] ;z[jvj+25]=z[jvj+15];
l14:if((x[jvj+25]<=0)) goto l13;
x[jvj+3]=s[x[jvj+25]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+25];
if((x[jvj+24]==x[jvj+3])) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==41)) goto l16;
l6:x[R]=68 ;z[R]=68;
v[0]=jvj; v[22]-=2; v[102]=0;return;
l13:x[jvj+26]=t[x[jvj+26]];
goto l11;
l16:x[jvj+25]=t[x[jvj+25]];
goto l14;
l17:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
