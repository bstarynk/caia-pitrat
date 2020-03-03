#include "dx.h"
void ANAPOURVOIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V1=0,V9=0,V4=0,V6=0,V20=0,V18=0;
int N,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10911;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1249&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; B=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1076; pile[WZ1]=966; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1076,966,V1)*/
V1=pile[WZ2]; 
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=1107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1107,jvj+4,jvj+5)*/
pile[v[22]]=204; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(204,jvj+5,V9)*/
V9=pile[WZ2]; 
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+2,jvj+6)*/
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,B,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=1114; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(V6,1114,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=V1; pile[WZ2]=1076; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,V1,1076,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=1085; pile[WZ2]=860; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+9,1085,860,jvj+10)*/
pile[v[22]]=109; pile[WZ1]=jvj+6; pile[WZ2]=683; pile[WZ3]=V4; pile[WZ4]=jvj+10; pile[WZ5]=jvj+3; 
(*f[47])( );     /*QUADRI0(109,jvj+6,683,V4,jvj+10,jvj+3)*/
x[jvj+11]=x[jvj+5] ;z[jvj+11]=z[jvj+5];
V20=N;
l4:if((V20==0)) goto l5;
if((V20<=0)) goto l1;
pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,jvj+11,jvj+12)*/
V18=V20-1;
V20=V18;
x[jvj+11]=x[jvj+12] ;z[jvj+11]=z[jvj+12];
goto l4;
l5:pile[v[22]]=120; pile[WZ1]=jvj+11; 
(*f[71])( );     /*ENLV0(120,jvj+11)*/
l1:pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+2,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=163; pile[WZ2]=V12; 
(*f[177])( );     /*CHGC4(jvj+3,163,V12)*/
l2:pile[v[22]]=966; pile[WZ1]=1076; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(966,1076,1)*/
pile[v[22]]=924; pile[WZ1]=1109; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(924,1109,jvj+3)*/
pile[v[22]]=204; pile[WZ1]=V9; pile[WZ2]=1076; pile[WZ3]=V1; pile[WZ4]=jvj+7; 
(*f[391])( );     /*QUADRI10(204,V9,1076,V1,jvj+7)*/
pile[v[22]]=B; pile[WZ1]=1082; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(B,1082,jvj+7)*/
pile[v[22]]=jvj+3; pile[WZ1]=1161; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+3,1161,978)*/
pile[v[22]]=B; pile[WZ1]=jvj+3; 
(*f[1522])( );     /*CREXPLORE0(B,jvj+3)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
