#include "dx.h"
void SORESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,NN=0,V30=0,V31=0,V5=0,T=0,V8=0,V34=0,V35=0,V36=0,V7=0,V10=0,V39=0,V40=0,V41=0,V9=0,L=0,V43=0,V44=0,V45=0,V11=0,V52=0,V48=0,V49=0,V50=0,V13=0,V22=0,V23=0,V24=0,V25=0,V26=0,V53=0,V55=0,V56=0,V57=0,V59=0,V60=0,V61=0,V62=0,V64=0,V65=0,V66=0,V67=0,V69=0,V70=0,V71=0;
int A;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=977; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(977,A,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(936,A,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(876,A,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(493,A,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,A,V26)*/
V26=pile[WZ2]; 
V1=incon;
V1=0;
;
V5=incon;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,A,NN)*/
NN=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V1; pile[WZ2]=117; 
(*f[42])( );     /*SRA1(135,V1,117,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V30,58,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=NN; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V31,NN,41,V5)*/
V5=pile[WZ3]; 
l8:pile[v[22]]=135; pile[WZ1]=V5; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V5,683,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V26; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(41,V26,V53,V8)*/
V8=pile[WZ3]; 
V7=incon;
pile[v[22]]=1000; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1000,A,T)*/
T=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V8; pile[WZ2]=1202; 
(*f[42])( );     /*SRA1(135,V8,1202,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V34,61,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=T; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V35,T,41,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V36,44,V7)*/
V7=pile[WZ2]; 
l9:pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V7,493,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V55,61,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V25; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V56,V25,41,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V57,44,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V59,876,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V60,61,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=V24; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V61,V24,41,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V62,44,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V64,936,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V65,61,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V66,V23,41,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V67,44,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=977; 
(*f[42])( );     /*SRA1(135,V69,977,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V70,61,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=V22; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V71,V22,41,V10)*/
V10=pile[WZ3]; 
V9=incon;
pile[v[22]]=935; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(935,A,jvj+1)*/
pile[v[22]]=V10; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V10,59,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=935; 
(*f[42])( );     /*SRA1(135,V39,935,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V40,58,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=jvj+1; 
(*f[42])( );     /*SRA1(135,V41,jvj+1,V9)*/
V9=pile[WZ3]; 
l4:V11=incon;
pile[v[22]]=1005; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1005,A,L)*/
L=pile[WZ2]; 
if((L>=1000)) goto l5;
pile[v[22]]=V9; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V9,44,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V43,1005,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V44,61,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=L; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V45,L,41,V11)*/
V11=pile[WZ3]; 
l6:V13=incon;
pile[v[22]]=1203; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1203,A,jvj+2)*/
if((x[jvj+2]!=0)) goto l7;
V13=V11;
l10:pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l11:v[0]=jvj; v[22]-=1; return;
l1:V5=V1;
goto l8;
l2:V7=V8;
goto l9;
l3:V9=V10;
goto l4;
l5:V11=V9;
goto l6;
l7:V52=x[jvj+2];
pile[v[22]]=V11; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V11,44,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=1203; 
(*f[42])( );     /*SRA1(135,V48,1203,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V49,58,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(23,V52,V50,V13)*/
V13=pile[WZ3]; 
goto l10;
}
