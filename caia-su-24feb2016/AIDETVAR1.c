#include "dx.h"
void AIDETVAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X;
int F;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; F=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+1)*/
if((x[jvj+1]!=22)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,X,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=484)) goto l2;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,X,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
if(x[jvj+5]==625||x[jvj+5]==1280) goto l1;
if(x[jvj+5]!=29&&x[jvj+5]!=30&&x[jvj+5]!=27&&x[jvj+5]!=28) goto l2;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,X,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+6,jvj+7)*/
if(x[jvj+7]==96||x[jvj+7]==89||x[jvj+7]==41||x[jvj+7]==20||x[jvj+7]==128||x[jvj+7]==570||x[jvj+7]==1317) goto l1;
l2:if(x[jvj+3]!=96&&x[jvj+3]!=89&&x[jvj+3]!=41&&x[jvj+3]!=20&&x[jvj+3]!=128&&x[jvj+3]!=570&&x[jvj+3]!=1317) goto l3;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,X,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l3;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,X,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+10,jvj+11)*/
if(x[jvj+11]!=29&&x[jvj+11]!=30&&x[jvj+11]!=27&&x[jvj+11]!=28) goto l3;
pile[v[22]]=844; pile[WZ1]=jvj+11; pile[WZ2]=F; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(844,jvj+11,F)*/
l7:v[0]=jvj; v[22]-=2; v[102]=0;return;
l1:x[F]=x[jvj+5] ;z[F]=z[jvj+5];
goto l7;
l3:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,X,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l6;
x[jvj+14]=d[20];z[jvj+14]=0;
l4:if((x[jvj+14]<=0)) goto l6;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+15,X,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+15,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+18,X,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+19,jvj+20)*/
if(x[jvj+20]!=96&&x[jvj+20]!=89&&x[jvj+20]!=41&&x[jvj+20]!=20&&x[jvj+20]!=128&&x[jvj+20]!=570&&x[jvj+20]!=1317) goto l5;
x[F]=25 ;z[F]=25;
goto l7;
l5:x[jvj+14]=t[x[jvj+14]];
goto l4;
l6:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
