#include "dx.h"
void Z60Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V14=0,V6=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=15561;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1866&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,NNNY,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=1214)) goto l1;
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+7)*/
for(i=x[jvj+7],V16=0;i>0;i=t[i],V16++)  ;
if((V16!=1)) goto l1;
if((x[jvj+7]<=0)) goto l1;
V14=s[x[jvj+7]];
NNNT=24;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+8)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+8; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+8,NNNX)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:if(x[jvj+6]!=485&&x[jvj+6]!=486&&x[jvj+6]!=55&&x[jvj+6]!=48&&x[jvj+6]!=1029) goto l5;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,NNNY,jvj+9)*/
if((x[jvj+9]!=22)) goto l5;
pile[v[22]]=107; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+10)*/
for(i=x[jvj+10],V6=0;i>0;i=t[i],V6++)  ;
if((V6==1)) goto l2;
l5:x[NNNX]=NNNT=incon;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l3:NNNT=7;
pile[v[22]]=NNNY; pile[WZ1]=jvj+2; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+2,NNNX)*/
goto l6;
l2:if((x[jvj+10]<=0)) goto l5;
x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=585)) goto l3;
x[jvj+10]=t[x[jvj+10]];
goto l2;
}
