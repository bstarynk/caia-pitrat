#include "dx.h"
void ARCHIVE5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M=0,V3=0,K=0,V7=0,V8=0,V9=0;
int T,A,IB,EC;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10341;z[jvj+1]=(-100);
x[jvj+2]=5;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2059&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; A=pile[v[22]+1]; IB=pile[v[22]+2]; EC=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
M=0;
x[jvj+3]=vo[13];z[jvj+3]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(963,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l1;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+5,V3)*/
V3=pile[WZ2]; 
if((V3>600000)) goto l1;
(*f[1210])( );     /*AJNUMESSAI0()*/
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+6,K)*/
K=pile[WZ2]; 
ta1[K]=0;
ta2[K]=0;
ta3[K]=0;
ta4[K]=0;
ta5[K]=0;
V7=x[T];
tt[K]=V7;
V8=x[A];
ta1[K]=V8;
ta2[K]=IB;
tm[K]=M;
V9=x[EC];
ta3[K]=V9;
l1:if((v[93]<=0)) goto l2;
if(x[T]!=1318&&x[T]!=1465&&x[T]!=580&&x[T]!=489&&x[T]!=365&&x[T]!=904&&x[T]!=280&&x[T]!=164&&x[T]!=472&&x[T]!=473&&x[T]!=688&&x[T]!=750&&x[T]!=1367) goto l2;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1415,jvj+7,jvj+8)*/
pile[v[22]]=1018; pile[WZ1]=T; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1018,T,jvj+9)*/
pile[v[22]]=1525; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1525,jvj+8,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=737; 
(*f[1211])( );     /*MARKUTILE0(jvj+8,737)*/
pile[WZ1]=jvj+9; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,jvj+9,1)*/
pile[v[22]]=jvj+10; 
(*f[186])( );     /*BTC0(jvj+10,jvj+9,1)*/
l2:x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=jvj+11; pile[WZ1]=927; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,927,1)*/
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
}
