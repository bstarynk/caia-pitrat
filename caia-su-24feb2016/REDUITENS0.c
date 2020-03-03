#include "dx.h"
void REDUITENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V2=0,V22=0;
int X;
int XX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; XX=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l6:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(128,X,jvj+8)*/
if((x[jvj+8]==0)) goto l10;
for(i=x[jvj+8],V2=0;i>0;i=t[i],V2++)  ;
if((V2==1)) goto l7;
if((V2<=1)) goto l8;
x[jvj+10]=x[jvj+8] ;z[jvj+10]=z[jvj+8];
l1:if((x[jvj+10]<=0)) goto l8;
x[jvj+1]=s[x[jvj+10]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=653)) goto l2;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
l3:if((x[jvj+8]>0)) goto l4;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+7,V5)*/
V5=pile[WZ2]; 
if((V5<=1)) goto l8;
V22=x[jvj+1];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=V22; 
(*f[134])( );     /*OTA0(128,X,V22)*/
goto l6;
l2:x[jvj+10]=t[x[jvj+10]];
goto l1;
l4:x[jvj+4]=s[x[jvj+8]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=653)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+7,117,1)*/
l5:x[jvj+8]=t[x[jvj+8]];
goto l3;
l7:if((x[jvj+8]<=0)) goto l8;
x[jvj+11]=s[x[jvj+8]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+8];
x[XX]=x[jvj+11] ;z[XX]=z[jvj+11];
l9:v[0]=jvj; v[22]-=2; return;
l8:x[XX]=x[X] ;z[XX]=z[X];
goto l9;
l10:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+9)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=XX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,XX)*/
goto l9;
}
