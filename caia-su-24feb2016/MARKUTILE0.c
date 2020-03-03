#include "dx.h"
void MARKUTILE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V10=0;
int MM,IG;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

MM=pile[v[22]]; IG=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=IG; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(226,IG,jvj+11)*/
l6:if((x[jvj+11]>0)) goto l7;
pile[v[22]]=248; pile[WZ1]=IG; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(248,IG,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=1525; pile[WZ1]=MM; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1525,MM,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=IG; 
(*f[1211])( );     /*MARKUTILE0(jvj+10,IG)*/
l9:pile[v[22]]=MM; pile[WZ1]=IG; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(MM,IG,1)*/
pile[v[22]]=159; pile[WZ1]=MM; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,MM,jvj+4)*/
l4:if((x[jvj+4]<=0)) goto l10;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=22)) goto l5;
pile[v[22]]=1513; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1513,jvj+7,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=IG; 
(*f[1211])( );     /*MARKUTILE0(jvj+9,IG)*/
l5:x[jvj+4]=t[x[jvj+4]];
goto l4;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=1018; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1018,jvj+2,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=MM; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(jvj+3,MM,V2)*/
V2=pile[WZ2]; 
if((V2==1)) goto l10;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l7:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=MM; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(jvj+12,MM,V10)*/
V10=pile[WZ2]; 
if((V10!=1)) goto l8;
(*f[71])( );     /*ENLV0(jvj+12,MM)*/
l8:x[jvj+11]=t[x[jvj+11]];
goto l6;
l10:v[0]=jvj; v[22]-=2; return;
}
