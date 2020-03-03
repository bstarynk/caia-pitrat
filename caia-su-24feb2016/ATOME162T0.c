#include "dx.h"
void ATOME162T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V12=0,V3=0,V14=0;
int R,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=20162;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3520&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6!=1)) goto l1;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1353,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l1;
pile[v[22]]=498; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+3,jvj+5)*/
pile[v[22]]=1182; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+5,jvj+6)*/
if((68!=x[jvj+6])) goto l1;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+7,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,D,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=D; pile[WZ1]=jvj+8; 
(*f[1290])( );if(v[102]) goto l1;     /*DEPEXP0(D,jvj+8)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1294,R,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==1483) goto l2;
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; pile[WZ2]=R; pile[WZ3]=jvj+11; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+8,jvj+10,R,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[799])( );if(v[102]) goto l1;     /*NORME0(jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=134)) goto l1;
V14=V3+1;
pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+18)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+19)*/
pile[v[22]]=V12; pile[WZ1]=858; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(V12,858,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3520; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3520,246,jvj+17)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20162; pile[WZ4]=jvj+17; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(158,1,218,20162,jvj+17,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=159; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+14,159,jvj+19)*/
pile[WZ1]=280; pile[WZ2]=D; pile[WZ3]=V14; 
(*f[2056])( );     /*VAUT0(jvj+14,280,D,V14)*/
goto l1;
}
