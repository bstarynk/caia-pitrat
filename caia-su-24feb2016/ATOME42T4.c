#include "dx.h"
void ATOME42T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=20042;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3446&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,D,jvj+3)*/
pile[v[22]]=688; pile[WZ1]=jvj+3; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,jvj+3,V1)*/
V1=pile[WZ2]; 
if((V1!=1)) goto l1;
pile[v[22]]=971; pile[WZ1]=D; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(971,D,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==29) goto l2;
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+10)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(206,715,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+7; 
(*f[189])( );     /*TRI4(jvj+6,v[13],642,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=3445; pile[WZ2]=246; pile[WZ3]=jvj+8; 
(*f[189])( );     /*TRI4(jvj+7,3445,246,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=20042; pile[WZ2]=218; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+8,20042,218,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=(-20); pile[WZ2]=jvj+9; pile[WZ3]=159; pile[WZ4]=jvj+11; 
(*f[298])( );     /*TRIENS1(jvj+10,(-20),jvj+9,159,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+11,289,158,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[481])( );     /*STOCKER0(jvj+5)*/
goto l1;
}
