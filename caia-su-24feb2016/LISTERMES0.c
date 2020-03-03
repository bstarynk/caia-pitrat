#include "dx.h"
void LISTERMES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R;
int E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=0 ;z[jvj+12]=0;
x[E]=x[jvj+12] ;z[E]=z[jvj+12];
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l6;
x[jvj+6]=d[20];z[jvj+6]=0;
l2:if((x[jvj+6]<=0)) goto l6;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+7,R,jvj+1)*/
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+1,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=485)) goto l1;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+10)*/
x[jvj+13]=x[jvj+10] ;z[jvj+13]=z[jvj+10];
l4:if((x[jvj+13]<=0)) goto l1;
x[jvj+11]=s[x[jvj+13]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+13];
pile[v[22]]=E; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(E,jvj+11)*/
x[jvj+13]=t[x[jvj+13]];
goto l4;
l1:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==485)) goto l3;
l5:pile[v[22]]=E; pile[WZ1]=jvj+1; 
(*f[522])( );     /*PLUB2(E,jvj+1)*/
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l6:v[0]=jvj; v[22]-=2; return;
}
