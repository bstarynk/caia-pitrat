#include "dx.h"
void CALINC1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V30=0,V9=0,V16=0,V11=0,TT=0,NN=0,V20=0,V21=0,MM=0,V22=0,V19=0,V28=0,V27=0,V26=0,V25=0;
int D;
int N,T;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=19;
if(v[0]>99700) (*f[6])( );

D=pile[v[22]]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
T=TT=incon;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
x[jvj+1]=vo[16];z[jvj+1]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(509,jvj+1,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+6,V1)*/
V1=pile[WZ2]; 
T=V1;
l25:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,117,jvj+11)*/
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(509,jvj+7,jvj+8)*/
l4:if((x[jvj+8]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+11,V30)*/
V30=pile[WZ2]; 
TT=V30;
l11:if(T!=incon) goto l26;
l24:N=T=incon;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=1070; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1070,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l3;
pile[v[22]]=868; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(868,jvj+3,jvj+5)*/
if((x[jvj+5]!=25)) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+6,117,1)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=1070; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1070,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l6;
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
l6:x[jvj+8]=t[x[jvj+8]];
goto l4;
l8:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=868; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(868,jvj+14,jvj+15)*/
if((x[jvj+15]!=25)) goto l9;
pile[v[22]]=jvj+16; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+16,117,1)*/
l9:x[jvj+13]=t[x[jvj+13]];
l7:if((x[jvj+13]>0)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+16,V9)*/
V9=pile[WZ2]; 
V11=incon;
if((v[244]!=0)) goto l10;
if((T>=5)) goto l10;
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(509,jvj+17,jvj+18)*/
for(i=x[jvj+18],V16=0;i>0;i=t[i],V16++)  ;
V11=V16;
l12:NN=V11;
if(TT!=incon) goto l13;
goto l24;
l10:V11=V9;
goto l12;
l13:V20=incon;
if((NN<=5)) goto l14;
if((NN<=20)) goto l15;
V20=3;
l16:V21=incon;
if((v[244]!=0)) goto l17;
if((T>=5)) goto l17;
V21=TT;
l18:V22=incon;
MM=v[128];
if((MM<=0)) goto l19;
V22=MM;
l19:if((v[244]<=0)) goto l20;
V22=2;
l20:x[jvj+19]=vo[12];z[jvj+19]=vz[12];
pile[v[22]]=1102; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(1102,jvj+19,V19)*/
V19=pile[WZ2]; 
V22=V19;
l23:V28=V21*V22;
V27=V20*V28;
V26=V27+10;
V25=V26/D;
N=V25;
v[0]=jvj; v[22]-=3; pile[v[22]+1]=N; pile[v[22]+2]=T; v[102]=0;return;
l14:V20=5;
goto l16;
l15:V20=4;
goto l16;
l17:V21=T;
goto l18;
l21:if(V22==incon) goto l22;
goto l23;
l22:V22=1;
goto l23;
l26:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(0,117,jvj+16)*/
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(509,jvj+12,jvj+13)*/
goto l7;
}
