#include "dx.h"
void EVALJGT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,V1=0,V10=0,V20=0,V24=0,V26=0,V28=0,V16=0,V17=0,V18=0,V19=0,V21=0,V23=0,V25=0,V27=0,V9=0,V8=0;
int B,C,Z,N,S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10821;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1122&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; C=pile[v[22]+1]; Z=pile[v[22]+2]; N=pile[v[22]+3]; S=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=159; pile[WZ1]=Z; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,Z,jvj+6)*/
l6:if((x[jvj+6]>0)) goto l7;
pile[v[22]]=C; pile[WZ1]=1002; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(C,1002,jvj+8)*/
if((x[S]!=52)) goto l10;
pile[v[22]]=jvj+8; pile[WZ1]=550; pile[WZ2]=52; 
(*f[35])( );     /*CHGC1(jvj+8,550,52)*/
l10:pile[v[22]]=Z; pile[WZ1]=159; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(Z,159,jvj+8)*/
l11:pile[v[22]]=258; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(258,jvj+8,jvj+9)*/
l12:if((x[jvj+9]>0)) goto l13;
pile[v[22]]=B; pile[WZ1]=274; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(B,274,jvj+12)*/
pile[v[22]]=jvj+8; pile[WZ1]=258; 
(*f[36])( );     /*PLUSC0(jvj+8,258,jvj+12)*/
l15:pile[v[22]]=jvj+12; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+12,117,1)*/
pile[v[22]]=578; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(578,jvj+12,jvj+13)*/
l16:if((x[jvj+13]>0)) goto l17;
pile[v[22]]=N; pile[WZ1]=117; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(N,117,jvj+15)*/
pile[v[22]]=jvj+12; pile[WZ1]=578; 
(*f[36])( );     /*PLUSC0(jvj+12,578,jvj+15)*/
l19:pile[v[22]]=jvj+15; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+15,510,1)*/
V9=g[423];
if((V9<=0)) goto l20;
V10=vg[423];
if((V10!=0)) goto l2;
if((V9<3)) goto l4;
l2:pile[v[22]]=423; pile[WZ1]=10821; pile[WZ2]=0; pile[WZ3]=(-608); pile[WZ4]=Z; pile[WZ5]=(-625); pile[v[22]+6]=N; pile[v[22]+7]=(-591); pile[v[22]+8]=B; pile[v[22]+9]=(-632); pile[v[22]+10]=C; pile[v[22]+11]=(-657); pile[v[22]+12]=S; pile[v[22]+13]=jvj+4; 
(*f[1434])( );     /*INTERP18(423,10821,0,(-608),Z,(-625),N,(-591),B,(-632),C,(-657),S,jvj+4)*/
if((x[jvj+4]==135)) goto l3;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:V1=36;
l9:if((x[S]!=V1)) goto l8;
x[jvj+8]=x[jvj+2] ;z[jvj+8]=z[jvj+2];
goto l11;
l3:if((V9<4)) goto l4;
goto l20;
l4:pile[v[22]]=274; pile[WZ1]=Z; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(274,Z,jvj+5)*/
V20=x[jvj+5];
V24=x[B];
V26=x[C];
V28=x[S];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V16; pile[WZ2]=10821; 
(*f[98])( );     /*SRA3(135,V16,10821,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V17,125,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V20; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(20,V20,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(41,N,V19,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V24; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V24,V21,V23)*/
V23=pile[WZ3]; 
pile[WZ1]=V26; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V26,V23,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V28; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V28,V25,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
l5:if((V9!=2)) goto l20;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l20;
l7:x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=1002; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1002,jvj+2,jvj+7)*/
if((x[jvj+7]!=x[C])) goto l8;
V1=incon;
pile[v[22]]=550; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(550,jvj+2,jvj+3)*/
T=x[jvj+3];
V1=T;
goto l9;
l8:x[jvj+6]=t[x[jvj+6]];
goto l6;
l13:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=274; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(274,jvj+10,jvj+11)*/
if((x[jvj+11]!=x[B])) goto l14;
x[jvj+12]=x[jvj+10] ;z[jvj+12]=z[jvj+10];
goto l15;
l14:x[jvj+9]=t[x[jvj+9]];
goto l12;
l17:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+14,V8)*/
V8=pile[WZ2]; 
if((V8!=N)) goto l18;
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
goto l19;
l18:x[jvj+13]=t[x[jvj+13]];
goto l16;
}
