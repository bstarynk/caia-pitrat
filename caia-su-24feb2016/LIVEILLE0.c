#include "dx.h"
void LIVEILLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V14=0,V13=0,ZZ=0,V3=0,V17=0,ZA=0,V18=0,V5=0,NM=0,V7=0,V28=0,V29=0,V6=0,V20=0,V36=0,V37=0,V32=0,V33=0,V34=0,V35=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V54=0,V55=0;
int A,M,TX,QA;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=11515;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==557&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; M=pile[v[22]+1]; TX=pile[v[22]+2]; QA=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=578; pile[WZ1]=M; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(578,M,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l16;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[A])) goto l2;
x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=1490; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1490,jvj+8,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=1526; pile[WZ1]=1447; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1526,1447,jvj+11)*/
x[jvj+12]=d[172];z[jvj+12]=0;
l6:if((x[jvj+11]<=0)) goto l8;
x[jvj+13]=s[x[jvj+11]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+11];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(jvj+13,jvj+8,V13)*/
V13=pile[WZ2]; 
ZZ=V13;
pile[v[22]]=V14; pile[WZ1]=ZZ; 
(*f[913])( );if(v[102]) goto l7;     /*PMILLE0(V14,ZZ,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=405; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V3,405,jvj+25)*/
pile[v[22]]=117; pile[WZ1]=ZZ; pile[WZ2]=218; pile[WZ3]=jvj+13; pile[WZ4]=jvj+25; pile[WZ5]=jvj+14; 
(*f[725])( );     /*QUADRI14(117,ZZ,218,jvj+13,jvj+25,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[196])( );     /*PLUF0(jvj+12,jvj+14,jvj+15)*/
l7:x[jvj+11]=t[x[jvj+11]];
goto l6;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(jvj+7,jvj+8,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=V10; pile[WZ2]=218; pile[WZ3]=jvj+7; pile[WZ4]=jvj+9; 
(*f[567])( );     /*QUADRI11(117,V10,218,jvj+7,jvj+9)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+6,jvj+9,jvj+10)*/
l5:x[jvj+5]=t[x[jvj+5]];
l3:if((x[jvj+5]>0)) goto l4;
V20=0;
pile[v[22]]=V20; pile[WZ1]=1488; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V20,1488,jvj+22)*/
pile[v[22]]=1467; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1467,A,jvj+23)*/
V36=x[A];
V37=x[jvj+23];
x[jvj+24]=x[jvj+22] ;z[jvj+24]=z[jvj+22];
pile[v[22]]=0; pile[WZ1]=6; 
(*f[178])( );     /*SPLO0(0,6,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=854; 
(*f[42])( );     /*SRA1(135,V32,854,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V33,58,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=218; pile[WZ2]=A; 
(*f[35])( );     /*CHGC1(jvj+22,218,A)*/
pile[v[22]]=20; pile[WZ1]=V36; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(20,V36,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=jvj+22; pile[WZ1]=1467; pile[WZ2]=jvj+23; 
(*f[34])( );     /*CHGC0(jvj+22,1467,jvj+23)*/
pile[v[22]]=23; pile[WZ1]=V37; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(23,V37,V35,V7)*/
V7=pile[WZ3]; 
V6=incon;
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+8,NM)*/
NM=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V7,642,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V28,58,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=642; pile[WZ2]=NM; 
(*f[43])( );     /*CHGC2(jvj+22,642,NM)*/
pile[v[22]]=V29; pile[WZ1]=NM; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V29,NM,41,V6)*/
V6=pile[WZ3]; 
l13:pile[v[22]]=jvj+22; pile[WZ1]=1016; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(jvj+22,1016,jvj+10)*/
pile[v[22]]=V6; pile[WZ1]=jvj+10; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V6,jvj+10,44,V38)*/
V38=pile[WZ3]; 
V39=0;
V54=V38;
if((V54<0)) goto l14;
pile[v[22]]=V54; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V54,3)*/
l14:pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=1531; 
(*f[42])( );     /*SRA1(135,V39,1531,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=jvj+22; pile[WZ1]=1531; pile[WZ2]=jvj+21; 
(*f[34])( );     /*CHGC0(jvj+22,1531,jvj+21)*/
pile[v[22]]=V40; pile[WZ1]=jvj+21; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V40,jvj+21,44,V41)*/
V41=pile[WZ3]; 
V42=0;
V55=V41;
if((V55<0)) goto l15;
pile[v[22]]=V55; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V55,3)*/
l15:pile[v[22]]=135; pile[WZ1]=V42; pile[WZ2]=1526; 
(*f[42])( );     /*SRA1(135,V42,1526,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=jvj+22; pile[WZ1]=1526; pile[WZ2]=jvj+15; 
(*f[34])( );     /*CHGC0(jvj+22,1526,jvj+15)*/
pile[v[22]]=V43; pile[WZ1]=jvj+15; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V43,jvj+15,44,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
pile[v[22]]=QA; pile[WZ1]=578; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(QA,578,jvj+22)*/
pile[v[22]]=A; pile[WZ1]=jvj+8; pile[WZ2]=TX; pile[WZ3]=jvj+24; 
(*f[914])( );     /*LIVEILLC0(A,jvj+8,TX,jvj+24)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l8:x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=1531; pile[WZ1]=1447; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1531,1447,jvj+16)*/
x[jvj+17]=d[172];z[jvj+17]=0;
l9:if((x[jvj+16]>0)) goto l10;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=1016; pile[WZ1]=1447; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1016,1447,jvj+5)*/
x[jvj+6]=d[126];z[jvj+6]=0;
goto l3;
l10:x[jvj+18]=s[x[jvj+16]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+16];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(jvj+18,jvj+8,V17)*/
V17=pile[WZ2]; 
ZA=V17;
pile[v[22]]=218; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,jvj+18,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(jvj+19,jvj+8,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=ZA; 
(*f[913])( );if(v[102]) goto l11;     /*PMILLE0(V18,ZA,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=405; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V5,405,jvj+26)*/
pile[v[22]]=117; pile[WZ1]=ZA; pile[WZ2]=218; pile[WZ3]=jvj+18; pile[WZ4]=jvj+26; pile[WZ5]=jvj+20; 
(*f[725])( );     /*QUADRI14(117,ZA,218,jvj+18,jvj+26,jvj+20)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[196])( );     /*PLUF0(jvj+17,jvj+20,jvj+21)*/
l11:x[jvj+16]=t[x[jvj+16]];
goto l9;
l12:V6=V7;
goto l13;
}
