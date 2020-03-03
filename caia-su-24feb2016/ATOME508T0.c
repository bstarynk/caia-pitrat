#include "dx.h"
void ATOME508T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,I=0,J=0,V5=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=20508;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3939&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(202,V,jvj+2)*/
if((x[jvj+2]!=68)) goto l3;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=1182; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1182,jvj+4,jvj+5)*/
if((68!=x[jvj+5])) goto l3;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+6,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=280; pile[WZ1]=V; 
(*f[1975])( );if(v[102]) goto l3;     /*FNDCND0(280,V,I)*/
I=pile[WZ2]; 
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l3;     /*FNDCND0(164,V,J)*/
J=pile[WZ2]; 
pile[v[22]]=365; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(365,V,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l3;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+8,V5)*/
V5=pile[WZ2]; 
if((V5<I)) goto l4;
if((V5>J)) goto l4;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+14)*/
pile[v[22]]=V10; pile[WZ1]=858; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(V10,858,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3939; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3939,246,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20508; pile[WZ2]=218; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20508,218,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ2]=jvj+13; pile[WZ3]=159; pile[WZ4]=jvj+15; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+13,159,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+15,1,158,jvj+9)*/
pile[v[22]]=365; pile[WZ1]=V; pile[WZ2]=jvj+8; 
(*f[1569])( );     /*DELIER0(365,V,jvj+8,jvj+9)*/
goto l2;
}
