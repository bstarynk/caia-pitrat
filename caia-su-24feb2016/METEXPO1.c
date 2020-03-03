#include "dx.h"
void METEXPO1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V17=0,V16=0,V18=0,V15=0,V10=0,V11=0,V12=0,V14=0,V23=0,V20=0,V21=0,V22=0,V3=0,V27=0,V24=0,V25=0,V26=0;
int E,RR,P;
int RT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11400;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4014&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; RR=pile[v[22]+1]; P=pile[v[22]+2]; RT=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[142]<=0)) goto l3;
V15=x[RR];
pile[v[22]]=20; pile[WZ1]=11400; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11400,0,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(41,1,V10,V11)*/
V11=pile[WZ3]; 
pile[WZ1]=P; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,P,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V15; pile[WZ2]=V12; 
(*f[39])( );     /*SDX0(20,V15,V12,V14)*/
V14=pile[WZ3]; 
pile[v[22]]=V14; 
(*f[40])( );     /*SLG0(V14)*/
x[jvj+12]=x[E] ;z[jvj+12]=z[E];
l1:if((x[jvj+12]<=0)) goto l3;
x[jvj+3]=s[x[jvj+12]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+12];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+3,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+3,jvj+4)*/
V17=x[jvj+4];
pile[v[22]]=20; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V17,0,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(41,V1,V16,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
l2:x[jvj+12]=t[x[jvj+12]];
goto l1;
l3:pile[v[22]]=1370; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1370,RR,V3)*/
V3=pile[WZ2]; 
if((V3<20)) goto l4;
pile[v[22]]=41; pile[WZ1]=999; pile[WZ2]=RT; 
(*f[445])( );     /*TRI15(41,999,RT)*/
l6:if((v[142]<=0)) goto l8;
V27=x[RT];
pile[v[22]]=20; pile[WZ1]=11400; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11400,0,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,3,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V27; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(23,V27,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l4:pile[v[22]]=RR; pile[WZ1]=E; pile[WZ2]=jvj+5; 
(*f[4075])( );if(v[102]) goto l7;     /*COPEXPO0(RR,E,jvj+5)*/
if((v[142]<=0)) goto l5;
V23=x[jvj+5];
pile[v[22]]=20; pile[WZ1]=11400; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11400,0,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,2,V20,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V23,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
l5:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+5,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=P; pile[WZ2]=jvj+9; 
(*f[4026])( );     /*SIMPEXPA0(jvj+8,P,jvj+9)*/
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+5,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=P; pile[WZ2]=jvj+11; 
(*f[4026])( );     /*SIMPEXPA0(jvj+10,P,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; pile[WZ2]=P; pile[WZ3]=RT; 
(*f[4027])( );     /*SIMPTOT0(jvj+9,jvj+11,P,RT)*/
goto l6;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
