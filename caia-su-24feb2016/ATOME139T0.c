#include "dx.h"
void ATOME139T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=20139;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3547&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=770)) goto l1;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,R,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=484)) goto l1;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+6,jvj+7)*/
pile[v[22]]=1182; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+7,jvj+8)*/
if((68!=x[jvj+8])) goto l1;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(jvj+4,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+16)*/
pile[v[22]]=V10; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V10,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3547; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3547,246,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20139; pile[WZ2]=218; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20139,218,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-20); pile[WZ2]=jvj+15; pile[WZ3]=159; pile[WZ4]=jvj+17; 
(*f[298])( );     /*TRIENS1(jvj+16,(-20),jvj+15,159,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+17,1,158,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=280; pile[WZ2]=jvj+10; pile[WZ3]=2; 
(*f[2056])( );     /*VAUT0(jvj+11,280,jvj+10,2)*/
pile[v[22]]=jvj+10; pile[WZ1]=131; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+10,131,68)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
