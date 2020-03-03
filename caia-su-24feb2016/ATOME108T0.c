#include "dx.h"
void ATOME108T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V27=0,V30=0,V25=0,V26=0,V28=0,V29=0,V13=0,V20=0,V36=0,V31=0,V32=0,V34=0,V35=0,V3=0,V37=0,V2=0,V39=0,V22=0,V1=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20108;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3480&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+8,jvj+9)*/
pile[v[22]]=1182; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+9,jvj+10)*/
if((68!=x[jvj+10])) goto l8;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+5,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=164; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(164,D,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(280,D,V3)*/
V3=pile[WZ2]; 
V1=V2-V3;
if((V1>=300)) goto l8;
pile[v[22]]=202; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(202,D,jvj+2)*/
if((x[jvj+2]==68)) goto l8;
l4:if((v[225]<=0)) goto l5;
pile[v[22]]=929; pile[WZ1]=jvj+5; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+5,V20)*/
V20=pile[WZ2]; 
V36=x[D];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1395; 
(*f[42])( );     /*SRA1(135,0,1395,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V20; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,V20,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=20108; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,20108,V32,V34)*/
V34=pile[WZ3]; 
pile[WZ1]=V36; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,V36,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V3; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,V3,V35,V37)*/
V37=pile[WZ3]; 
pile[WZ1]=V2; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,V2,V37,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l5:pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(498,D,jvj+6)*/
l6:if((V3>V2)) goto l9;
pile[v[22]]=jvj+6; pile[WZ1]=V3; pile[WZ2]=jvj+3; 
(*f[1765])( );     /*AJARR0(jvj+6,V3,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+16)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V22,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3480; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3480,246,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20108; pile[WZ2]=218; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20108,218,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-20); pile[WZ2]=jvj+15; pile[WZ3]=159; pile[WZ4]=jvj+17; 
(*f[298])( );     /*TRIENS1(jvj+16,(-20),jvj+15,159,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+17,1,158,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=365; pile[WZ2]=D; pile[WZ3]=jvj+3; 
(*f[1753])( );     /*LIER1(jvj+7,365,D,jvj+3)*/
V13=g[617];
if((V13<=0)) goto l7;
V14=vg[617];
if((V14!=0)) goto l1;
if((V13<3)) goto l3;
l1:pile[v[22]]=617; pile[WZ1]=20108; pile[WZ2]=0; pile[WZ3]=(-656); pile[WZ4]=D; pile[WZ5]=(-598); pile[v[22]+6]=jvj+3; pile[v[22]+7]=jvj+4; 
(*f[187])( );     /*INTERP0(617,20108,0,(-656),D,(-598),jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l2;
l7:V3++;
goto l6;
l2:if((V13<4)) goto l3;
goto l7;
l3:V27=x[D];
V30=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=20108; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,20108,0,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V27; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V27,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=365; 
(*f[42])( );     /*SRA1(135,V26,365,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V30; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(20,V30,V28,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; 
(*f[40])( );     /*SLG0(V29)*/
if((V13!=2)) goto l7;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l7;
l9:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+22)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V22,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3480; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3480,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20108; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20108,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+23,1,158,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=202; pile[WZ2]=D; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+11,202,D,68)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
