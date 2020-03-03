#include "dx.h"
void ATOME80T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V11=0,V26=0,V28=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20080;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3777&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=N; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,N,jvj+12)*/
if((x[jvj+12]!=454)) goto l4;
pile[v[22]]=103; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,N,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+13,V26)*/
V26=pile[WZ2]; 
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+14,jvj+2)*/
pile[v[22]]=1182; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+2,jvj+15)*/
if((68!=x[jvj+15])) goto l4;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+16,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(480,N,jvj+17)*/
pile[v[22]]=448; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(448,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l4;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=448)) goto l2;
pile[v[22]]=436; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+4,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+6,V18)*/
V18=pile[WZ2]; 
if((V26!=V18)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=61)) goto l2;
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+7,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+9,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==128)) goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:if((x[jvj+17]<=0)) goto l4;
x[jvj+19]=s[x[jvj+17]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+17];
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V28,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3777; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3777,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20080; pile[WZ4]=jvj+22; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,20080,jvj+22,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=280; pile[WZ2]=jvj+19; pile[WZ3]=V11; 
(*f[2056])( );     /*VAUT0(jvj+18,280,jvj+19,V11)*/
x[jvj+17]=t[x[jvj+17]];
goto l3;
}
