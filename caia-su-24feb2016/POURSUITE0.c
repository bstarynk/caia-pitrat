#include "dx.h"
void POURSUITE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V9=0,V10=0,V11=0,V12=0,V14=0,V15=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0,V26=0,V27=0,V28=0,V29=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V3=0,KR=0,V5=0,K=0,KK=0,V4=0;
int AA;
int SM;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=11471;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==949&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AA=pile[v[22]]; SM=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
vv[195]=1;
vv[197]=1;
V1=AA/10;
V2=AA%10;
pile[v[22]]=0; pile[WZ1]=73; 
(*f[38])( );     /*SPC0(0,73,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=(-9873); 
(*f[37])( );     /*SRA0(V9,(-9873),V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=(-9876); 
(*f[37])( );     /*SRA0(V10,(-9876),V11)*/
V11=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V1; pile[WZ2]=V11; 
(*f[39])( );     /*SDX0(41,V1,V11,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V12,46,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=V2; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V14,V2,41,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V15,37,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=(-9699); 
(*f[37])( );     /*SRA0(V17,(-9699),V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V18,(-9546),V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=(-9809); 
(*f[37])( );     /*SRA0(V19,(-9809),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V20,46,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
pile[v[22]]=0; pile[WZ1]=(-9720); 
(*f[37])( );     /*SRA0(0,(-9720),V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=(-9862); 
(*f[37])( );     /*SRA0(V22,(-9862),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=(-9879); 
(*f[37])( );     /*SRA0(V23,(-9879),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=(-9882); 
(*f[37])( );     /*SRA0(V24,(-9882),V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=(-9884); 
(*f[37])( );     /*SRA0(V25,(-9884),V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=(-9889); 
(*f[37])( );     /*SRA0(V26,(-9889),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V27,44,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(V28,(-2943),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=84; 
(*f[249])( );     /*SPC1(V29,84,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=(-9730); 
(*f[37])( );     /*SRA0(V30,(-9730),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=(-9733); 
(*f[37])( );     /*SRA0(V31,(-9733),V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=(-9546); 
(*f[37])( );     /*SRA0(V32,(-9546),V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=(-9735); 
(*f[37])( );     /*SRA0(V33,(-9735),V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=(-9699); 
(*f[37])( );     /*SRA0(V34,(-9699),V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=(-9729); 
(*f[37])( );     /*SRA0(V35,(-9729),V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V36,46,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
pile[v[22]]=0; pile[WZ1]=(-9720); 
(*f[37])( );     /*SRA0(0,(-9720),V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=(-9862); 
(*f[37])( );     /*SRA0(V38,(-9862),V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=(-9879); 
(*f[37])( );     /*SRA0(V39,(-9879),V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=(-9882); 
(*f[37])( );     /*SRA0(V40,(-9882),V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=(-9891); 
(*f[37])( );     /*SRA0(V41,(-9891),V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V42,44,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=(-2943); 
(*f[37])( );     /*SRA0(V43,(-2943),V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=(-9895); 
(*f[37])( );     /*SRA0(V44,(-9895),V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V45,46,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V3=bh[v[1]][0];
KR=V3;
if((KR!=84)) goto l4;
V5=bh[v[1]][1];
if((V5<48)) goto l7;
if((V5>57)) goto l7;
V4=135;
l1:if((V4==135)) goto l2;
l3:if((V5!=32)) goto l4;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,KK)*/
KK=pile[WZ1]; 
if((KK<=0)) goto l4;
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
x[SM]=68 ;z[SM]=68;
pile[v[22]]=jvj+3; pile[WZ1]=936; pile[WZ2]=KK; 
(*f[186])( );     /*BTC0(jvj+3,936,KK)*/
l5:vv[195]=0;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=1; 
(*f[135])( );     /*LND3(1,K)*/
K=pile[WZ1]; 
if((K<=0)) goto l3;
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
x[SM]=68 ;z[SM]=68;
pile[v[22]]=jvj+2; pile[WZ1]=936; pile[WZ2]=K; 
(*f[186])( );     /*BTC0(jvj+2,936,K)*/
goto l5;
l4:x[SM]=12 ;z[SM]=12;
goto l5;
l7:V4=134;
goto l1;
}
