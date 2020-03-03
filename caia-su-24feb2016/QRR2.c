#include "dx.h"
void QRR2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0,W=0,V2=0;
int V,G,K,N,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=10869;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2068&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; G=pile[v[22]+1]; K=pile[v[22]+2]; N=pile[v[22]+3]; C=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=K; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(K,158,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=218; pile[WZ2]=V; 
(*f[35])( );     /*CHGC1(jvj+6,218,V)*/
pile[WZ1]=208; pile[WZ2]=N; 
(*f[35])( );     /*CHGC1(jvj+6,208,N)*/
pile[WZ1]=613; pile[WZ2]=C; 
(*f[35])( );     /*CHGC1(jvj+6,613,C)*/
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=608; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(608,jvj+3,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=728; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+5,728,jvj+6)*/
l1:pile[v[22]]=jvj+3; pile[WZ1]=608; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+3,608,jvj+6)*/
pile[v[22]]=728; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(728,jvj+3,jvj+4)*/
l3:x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=jvj+7; pile[WZ1]=1232; pile[WZ2]=V; 
(*f[36])( );     /*PLUSC0(jvj+7,1232,V)*/
pile[WZ1]=1304; 
(*f[36])( );     /*PLUSC0(jvj+7,1304,V)*/
if((x[K]!=528)) goto l4;
pile[v[22]]=365; pile[WZ1]=V; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,V,jvj+8)*/
for(i=x[jvj+8],V10=0;i>0;i=t[i],V10++)  ;
pile[v[22]]=V10; 
(*f[850])( );if(v[102]) goto l4;     /*LOG0(V10,V9)*/
V9=pile[WZ1]; 
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=V; pile[WZ1]=110; pile[WZ2]=W; 
(*f[177])( );     /*CHGC4(V,110,W)*/
pile[v[22]]=jvj+7; pile[WZ1]=273; 
(*f[735])( );     /*PLUSC4(jvj+7,273,W)*/
pile[WZ1]=322; pile[WZ2]=V9; 
(*f[186])( );     /*BTC0(jvj+7,322,V9)*/
l4:x[jvj+9]=vo[12];z[jvj+9]=vz[12];
pile[v[22]]=1256; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1256,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l5;
pile[v[22]]=V; pile[WZ1]=jvj+11; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(V,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=G; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(G,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,jvj+13,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+19; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+19,jvj+14)*/
pile[v[22]]=jvj+7; pile[WZ1]=1081; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+7,1081,jvj+14)*/
l5:pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(509,V,jvj+15)*/
V2=x[V];
l6:if((x[jvj+15]>0)) goto l7;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l2:pile[v[22]]=jvj+3; pile[WZ1]=728; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+3,728,jvj+6)*/
goto l3;
l7:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=258; pile[WZ1]=jvj+16; pile[WZ2]=V2; 
(*f[134])( );     /*OTA0(258,jvj+16,V2)*/
x[jvj+15]=t[x[jvj+15]];
goto l6;
}
