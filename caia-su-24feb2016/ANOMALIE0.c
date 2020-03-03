#include "dx.h"
void ANOMALIE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V16=0,V17=0,C2=0,C1=0,E1=0,E2=0,V12=0,V3=0,V2=0,V1=0,E=0,V=0,V5=0,V4=0,V9=0,V7=0,V21=0,V20=0,V22=0,V23=0,V25=0,V26=0,V28=0,V30=0,V31=0,V32=0,V34=0,V35=0,V37=0,V39=0,V40=0;
int T,BL,X,XX,BT,AT,M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10815;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1534&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; BL=pile[v[22]+1]; X=pile[v[22]+2]; XX=pile[v[22]+3]; BT=pile[v[22]+4]; AT=pile[v[22]+5]; M=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1082; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1082,X,jvj+2)*/
pile[v[22]]=BT; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(BT,jvj+2,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=AT; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(AT,X,V16)*/
V16=pile[WZ2]; 
pile[WZ1]=XX; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(AT,XX,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1078,XX,jvj+3)*/
pile[v[22]]=BT; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(BT,jvj+3,C2)*/
C2=pile[WZ2]; 
C1=V13;
E1=V16;
E2=V17;
pile[v[22]]=1076; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1076,jvj+2,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=1076; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(V12,1076,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=AT; pile[WZ2]=1018; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+8,AT,1018,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=C2; pile[WZ2]=610; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,C2,610,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=C1; pile[WZ2]=609; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,C1,609,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=E2; pile[WZ2]=515; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,E2,515,jvj+12)*/
pile[v[22]]=288; pile[WZ1]=T; pile[WZ2]=510; pile[WZ3]=E1; pile[WZ4]=jvj+12; pile[WZ5]=jvj+4; 
(*f[47])( );     /*QUADRI0(288,T,510,E1,jvj+12,jvj+4)*/
pile[v[22]]=M; pile[WZ1]=1051; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(M,1051,jvj+4)*/
l1:if((E1<=0)) goto l4;
V3=E1-E2;
V2=V3*100;
V1=V2/E1;
E=V1;
pile[v[22]]=1076; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1076,jvj+2,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ1]=XX; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1078,XX,jvj+5)*/
pile[v[22]]=1110; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1110,jvj+5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,BL,jvj+6)*/
pile[v[22]]=983; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(983,jvj+6,jvj+7)*/
V21=x[jvj+7];
pile[v[22]]=20; pile[WZ1]=10815; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10815,0,V20)*/
V20=pile[WZ3]; 
pile[WZ1]=V21; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(20,V21,V20,V5)*/
V5=pile[WZ3]; 
V4=incon;
pile[v[22]]=163; pile[WZ1]=BL; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,BL,V)*/
V=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V5,V,V4)*/
V4=pile[WZ2]; 
l3:pile[v[22]]=135; pile[WZ1]=V4; pile[WZ2]=T; 
(*f[42])( );     /*SRA1(135,V4,T,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(41,V9,V22,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=84; 
(*f[42])( );     /*SRA1(135,V23,84,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=C1; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,C1,V25,V26)*/
V26=pile[WZ3]; 
pile[WZ1]=C2; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,C2,V26,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V28,44,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=AT; 
(*f[42])( );     /*SRA1(135,V30,AT,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=E; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,E,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V32,37,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=E1; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,E1,V34,V35)*/
V35=pile[WZ3]; 
pile[WZ1]=E2; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,E2,V35,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=117; 
(*f[42])( );     /*SRA1(135,V37,117,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V7; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(41,V7,V39,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; return;
l2:V4=V5;
goto l3;
}
