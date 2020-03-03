#include "dx.h"
void ATOME83T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V16=0,V4=0,V6=0,V7=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20083;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3334&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l1;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(870,R,V8)*/
V8=pile[WZ2]; 
if((V8!=2)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l1;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,R,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l1;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+9,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(jvj+7,jvj+10)*/
pile[v[22]]=498; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+10,jvj+11)*/
pile[v[22]]=688; pile[WZ1]=jvj+11; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,jvj+11,V4)*/
V4=pile[WZ2]; 
if((V4!=2)) goto l1;
pile[v[22]]=473; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(473,jvj+11,V6)*/
V6=pile[WZ2]; 
if((V6!=1)) goto l1;
pile[v[22]]=472; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(472,jvj+11,V7)*/
V7=pile[WZ2]; 
if((V7!=1)) goto l1;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(jvj+5,jvj+12)*/
pile[v[22]]=498; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+12,jvj+13)*/
if((x[jvj+11]!=x[jvj+13])) goto l1;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+19)*/
pile[v[22]]=V16; pile[WZ1]=858; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(V16,858,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3334; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3334,246,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=20083; pile[WZ2]=218; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,20083,218,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ2]=jvj+18; pile[WZ3]=159; pile[WZ4]=jvj+20; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+18,159,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+20,1,158,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=25; pile[WZ2]=R; 
(*f[1047])( );     /*EVENEMENT0(jvj+14,25,R)*/
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
