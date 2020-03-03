#include "dx.h"
void ESTCEINFINI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V34=0,V31=0,V33=0,V17=0,V28=0,V30=0,V22=0,V23=0,V24=0,V25=0,V27=0,V29=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11924;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1003&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=1601; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1601,jvj+5,jvj+6)*/
x[jvj+7]=d[72];z[jvj+7]=0;
l1:if((x[jvj+6]>0)) goto l2;
x[jvj+24]=x[jvj+14] ;z[jvj+24]=z[jvj+14];
x[jvj+21]=vo[16];z[jvj+21]=vz[16];
pile[v[22]]=1374; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1374,jvj+21,jvj+22)*/
l7:if((x[jvj+22]>0)) goto l8;
x[R]=135 ;z[R]=135;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
pile[v[22]]=1888; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1888,jvj+8,jvj+9)*/
if((x[jvj+9]!=x[A])) goto l3;
pile[v[22]]=1879; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1879,jvj+8,jvj+2)*/
pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+10)*/
if((x[jvj+10]!=0)) goto l3;
pile[v[22]]=498; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+2,jvj+3)*/
pile[v[22]]=1348; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1348,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l3;
l4:pile[v[22]]=1880; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1880,jvj+8,jvj+11)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+12; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+2,jvj+12)*/
pile[v[22]]=447; pile[WZ2]=459; pile[WZ3]=jvj+11; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(447,jvj+12,459,jvj+11,jvj+13)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+13,jvj+14)*/
l3:x[jvj+6]=t[x[jvj+6]];
goto l1;
l8:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+15; 
(*f[1355])( );if(v[102]) goto l9;     /*SUBSTOTAL0(jvj+23,jvj+24,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l9;
l10:x[R]=134 ;z[R]=134;
if((v[230]<=0)) goto l11;
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(929,jvj+20,V17)*/
V17=pile[WZ2]; 
V28=x[jvj+23];
V30=x[jvj+15];
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(20,V22,38,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11924; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,11924,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V17; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,V17,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V28; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V28,V25,V27)*/
V27=pile[WZ3]; 
pile[WZ1]=V30; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(20,V30,V27,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
x[jvj+25]=x[jvj+24] ;z[jvj+25]=z[jvj+24];
l5:if((x[jvj+25]<=0)) goto l11;
x[jvj+17]=s[x[jvj+25]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+25];
pile[v[22]]=459; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(459,jvj+17,jvj+18)*/
pile[v[22]]=447; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+17,jvj+19)*/
V32=x[jvj+19];
V34=x[jvj+18];
pile[v[22]]=20; pile[WZ1]=V32; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V32,0,V31)*/
V31=pile[WZ3]; 
pile[WZ1]=V34; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V34,V31,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
l6:x[jvj+25]=t[x[jvj+25]];
goto l5;
l9:x[jvj+22]=t[x[jvj+22]];
goto l7;
}
