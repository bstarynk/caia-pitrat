#include "dx.h"
void ATOME55T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V3=0,V2=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=20055;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3410&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+4,jvj+5)*/
pile[v[22]]=1182; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+5,jvj+6)*/
if((68!=x[jvj+6])) goto l1;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+7,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,D,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(164,D,V2)*/
V2=pile[WZ2]; 
if((V2!=V3)) goto l1;
pile[v[22]]=V2; pile[WZ2]=jvj+8; 
(*f[3105])( );if(v[102]) goto l1;     /*TROUVE0(V2,D,jvj+8)*/
pile[v[22]]=489; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(489,D,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l1;
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+14)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(V9,858,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3410; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3410,246,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=20055; pile[WZ2]=218; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+12,20055,218,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=(-20); pile[WZ2]=jvj+13; pile[WZ3]=159; pile[WZ4]=jvj+15; 
(*f[298])( );     /*TRIENS1(jvj+14,(-20),jvj+13,159,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+15,1,158,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=489; pile[WZ2]=D; pile[WZ3]=jvj+8; 
(*f[1753])( );     /*LIER1(jvj+9,489,D,jvj+8)*/
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
