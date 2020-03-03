#include "dx.h"
void ATOME41T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V6=0,V1=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=20041;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3290&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=750; pile[WZ1]=N; 
(*f[1975])( );if(v[102]) goto l3;     /*FNDCND0(750,N,V3)*/
V3=pile[WZ2]; 
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+3,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=481; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(481,N,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+5,jvj+6)*/
if((x[N]!=x[jvj+6])) goto l2;
pile[v[22]]=365; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+7)*/
for(i=x[jvj+7],V1=0;i>0;i=t[i],V1++)  ;
if((V1>=V3)) goto l2;
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-598); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,(-598),jvj+12)*/
pile[WZ1]=N; pile[WZ3]=(-625); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,N,110,(-625),jvj+13)*/
pile[v[22]]=V6; pile[WZ1]=858; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(V6,858,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,v[13],642,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=3290; pile[WZ2]=246; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,3290,246,jvj+11)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20041; pile[WZ4]=jvj+11; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(158,1,218,20041,jvj+11,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=159; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+8,159,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+8,159,jvj+13)*/
(*f[1559])( );     /*CONTRADICTION0(jvj+8)*/
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
