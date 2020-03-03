#include "dx.h"
void ATOME120T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0,V1=0,V7=0,V11=0,M=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=20120;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3507&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+4,jvj+5)*/
pile[v[22]]=1182; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1182,jvj+5,jvj+6)*/
if((68!=x[jvj+6])) goto l5;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+7,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=1332; pile[WZ1]=D; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1332,D,jvj+8)*/
l2:if((x[jvj+8]<=0)) goto l5;
x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=497; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(497,jvj+2,jvj+9)*/
V1=incon;
pile[v[22]]=145; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(145,jvj+2,jvj+3)*/
if((x[jvj+3]!=27)) goto l1;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,D,V10)*/
V10=pile[WZ2]; 
V9=V10+1;
V1=V9;
l4:x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
M=V1;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+16)*/
pile[v[22]]=V11; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V11,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3507; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3507,246,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20120; pile[WZ2]=218; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20120,218,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-20); pile[WZ2]=jvj+15; pile[WZ3]=159; pile[WZ4]=jvj+17; 
(*f[298])( );     /*TRIENS1(jvj+16,(-20),jvj+15,159,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+17,1,158,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=280; pile[WZ2]=jvj+11; pile[WZ3]=M; 
(*f[2056])( );     /*VAUT0(jvj+10,280,jvj+11,M)*/
l3:x[jvj+8]=t[x[jvj+8]];
goto l2;
l1:pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l3;     /*FNDCND0(280,D,V7)*/
V7=pile[WZ2]; 
V1=V7;
goto l4;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
