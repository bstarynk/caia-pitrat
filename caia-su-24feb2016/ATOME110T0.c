#include "dx.h"
void ATOME110T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V2=0,V1=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20110;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3481&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+2,jvj+3)*/
pile[v[22]]=1182; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+3,jvj+4)*/
if((68!=x[jvj+4])) goto l1;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=164; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(164,D,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,D,V1)*/
V1=pile[WZ2]; 
if((V1!=V2)) goto l1;
pile[v[22]]=498; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,D,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=V1; pile[WZ2]=jvj+7; 
(*f[1765])( );     /*AJARR0(jvj+6,V1,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+15)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(V8,858,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3481; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3481,246,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=20110; pile[WZ2]=218; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,20110,218,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=jvj+14; pile[WZ3]=159; pile[WZ4]=jvj+16; 
(*f[298])( );     /*TRIENS1(jvj+15,(-20),jvj+14,159,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+16,1,158,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=365; pile[WZ2]=D; pile[WZ3]=jvj+7; 
(*f[1753])( );     /*LIER1(jvj+8,365,D,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+21)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V8,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3481; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3481,246,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=20110; pile[WZ2]=218; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,20110,218,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=jvj+20; pile[WZ3]=159; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,159,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+22,1,158,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=489; pile[WZ2]=D; pile[WZ3]=jvj+7; 
(*f[1753])( );     /*LIER1(jvj+9,489,D,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+27)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V8,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3481; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3481,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20110; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20110,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=202; pile[WZ2]=D; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+10,202,D,68)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
