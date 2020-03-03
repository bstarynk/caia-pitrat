#include "dx.h"
void ATOME175T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,P=0,II=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=20175;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3767&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1347; pile[WZ1]=D; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1347,D,jvj+4)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=1603; pile[WZ1]=D; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1603,D,jvj+5)*/
pile[v[22]]=1474; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1474,D,jvj+6)*/
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+6,P)*/
P=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+6,II)*/
II=pile[WZ2]; 
if((II==0)) goto l4;
;
if((II>=0)) goto l1;
V9=II+P;
l1:pile[v[22]]=202; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(202,D,jvj+3)*/
if((x[jvj+3]==68)) goto l4;
l3:pile[v[22]]=D; pile[WZ1]=jvj+7; 
(*f[1290])( );if(v[102]) goto l4;     /*DEPEXP0(D,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+13)*/
pile[v[22]]=604; pile[WZ1]=715; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(604,715,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,v[13],642,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=3766; pile[WZ2]=246; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,3766,246,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=20175; pile[WZ2]=218; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,20175,218,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=(-20); pile[WZ2]=jvj+12; pile[WZ3]=159; pile[WZ4]=jvj+14; 
(*f[298])( );     /*TRIENS1(jvj+13,(-20),jvj+12,159,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+14,289,158,jvj+8)*/
pile[v[22]]=jvj+8; 
(*f[481])( );     /*STOCKER0(jvj+8)*/
goto l4;
}
