#include "dx.h"
void ATOME64T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=20064;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3133&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,R,jvj+2)*/
if((x[jvj+2]!=134)) goto l1;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+3,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+9)*/
pile[v[22]]=V2; pile[WZ1]=858; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(V2,858,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+6; 
(*f[189])( );     /*TRI4(jvj+5,v[13],642,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=3133; pile[WZ2]=246; pile[WZ3]=jvj+7; 
(*f[189])( );     /*TRI4(jvj+6,3133,246,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=20064; pile[WZ2]=218; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+7,20064,218,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=(-20); pile[WZ2]=jvj+8; pile[WZ3]=159; pile[WZ4]=jvj+10; 
(*f[298])( );     /*TRIENS1(jvj+9,(-20),jvj+8,159,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+4; 
(*f[58])( );     /*TRI3(jvj+10,1,158,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[1559])( );     /*CONTRADICTION0(jvj+4)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
