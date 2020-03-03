#include "dx.h"
void CALARITH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,KR=0,K=0,A=0,V3=0,KK=0,B=0,V35=0,V45=0,V46=0,V47=0,V49=0,V38=0,V50=0,V51=0,V53=0,V41=0,V43=0,V44=0,V54=0,V56=0,V57=0,V59=0,V60=0,V61=0,V63=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11419;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==568&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=43; 
(*f[346])( );     /*LK1(43)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
KR=V1;
if((KR==76)) goto l3;
if((KR==68)) goto l1;
if((KR!=77)) goto l2;
pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,A,K)*/
A=pile[WZ1]; K=pile[WZ2]; 
V3=K+1;
pile[v[22]]=V3; 
(*f[126])( );     /*LND2(V3,B,KK)*/
B=pile[WZ1]; KK=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[929])( );     /*CALMOD0(A,B,jvj+4)*/
l2:x[jvj+1]=incon; v[0]=jvj; return;
l1:pile[v[22]]=50; pile[WZ1]=12; pile[WZ2]=jvj+2; 
(*f[929])( );     /*CALMOD0(50,12,jvj+2)*/
pile[v[22]]=763; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(763,jvj+2,jvj+3)*/
pile[v[22]]=1396; pile[WZ1]=763; 
(*f[34])( );     /*CHGC0(1396,763,jvj+3)*/
goto l2;
l3:x[jvj+5]=1396 ;z[jvj+5]=1396;
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(763,jvj+5,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
goto l2;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+7,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V45; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(10,V45,43,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=1233; 
(*f[42])( );     /*SRA1(135,V46,1233,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,V35,V47,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
pile[v[22]]=1481; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1481,jvj+7,jvj+8)*/
x[jvj+13]=x[jvj+8] ;z[jvj+13]=z[jvj+8];
l6:if((x[jvj+13]<=0)) goto l10;
x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+9,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V50; pile[WZ2]=596; 
(*f[42])( );     /*SRA1(135,V50,596,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V38; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(41,V38,V51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
pile[v[22]]=159; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,jvj+9,jvj+10)*/
x[jvj+14]=x[jvj+10] ;z[jvj+14]=z[jvj+10];
l7:if((x[jvj+14]<=0)) goto l9;
x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=609; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(609,jvj+11,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(515,jvj+11,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(510,jvj+11,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+11,jvj+12)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=326; 
(*f[42])( );     /*SRA1(135,0,326,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V44; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,V44,V54,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V56,262,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V43; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,V43,V57,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V59,(-9543),V60)*/
V60=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=jvj+12; 
(*f[42])( );     /*SRA1(135,V60,jvj+12,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V41; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,V41,V61,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
l8:x[jvj+14]=t[x[jvj+14]];
goto l7;
l9:x[jvj+13]=t[x[jvj+13]];
goto l6;
l10:x[jvj+6]=t[x[jvj+6]];
goto l4;
}
