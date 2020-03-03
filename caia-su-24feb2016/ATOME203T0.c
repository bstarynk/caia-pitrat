#include "dx.h"
void ATOME203T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V13=0,V3=0,K=0,V22=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20203;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3560&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=26)) goto l3;
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(498,jvj+4,jvj+5)*/
pile[v[22]]=1182; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1182,jvj+5,jvj+6)*/
if((68!=x[jvj+6])) goto l3;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+7,V20)*/
V20=pile[WZ2]; 
x[jvj+8]=d[20];z[jvj+8]=0;
l1:if((x[jvj+8]<=0)) goto l3;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+9,R,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+9,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+13,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+10,jvj+14)*/
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
pile[v[22]]=280; pile[WZ1]=jvj+15; 
(*f[1975])( );if(v[102]) goto l2;     /*FNDCND0(280,jvj+15,V3)*/
V3=pile[WZ2]; 
K=V13;
if((V3!=K)) goto l2;
V22=K+1;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V20,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3560; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3560,246,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=20203; pile[WZ2]=218; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,20203,218,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=jvj+20; pile[WZ3]=159; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,159,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+22,1,158,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=280; pile[WZ2]=jvj+15; pile[WZ3]=V22; 
(*f[2056])( );     /*VAUT0(jvj+16,280,jvj+15,V22)*/
l2:x[jvj+8]=t[x[jvj+8]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
