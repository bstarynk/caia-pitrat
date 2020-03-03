#include "dx.h"
void SORTIR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V41=0,V42=0,V11=0,V4=0,V12=0,NT=0,V24=0,V27=0,V26=0,V16=0,V34=0,V33=0,V37=0,V36=0,V35=0,V40=0,V58=0,V59=0,V61=0,V62=0,V64=0,V22=0,V23=0,V21=0,V51=0,V50=0,V52=0,V54=0,V55=0,V57=0,V18=0,I=0,V43=0,V45=0,V46=0,V48=0;
int EE;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11235;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1198&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EE=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=158; pile[WZ1]=EE; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,EE,jvj+2)*/
V2=0;
pile[v[22]]=V2; 
(*f[656])( );     /*SPLN2(V2,V1)*/
V1=pile[WZ1]; 
pile[v[22]]=V1; 
(*f[288])( );     /*SPLN0(V1)*/
pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(5,0,42,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V41,jvj+2,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
l5:pile[v[22]]=763; pile[WZ1]=EE; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(763,EE,jvj+10)*/
l6:if((x[jvj+10]>0)) goto l7;
pile[v[22]]=1000; pile[WZ1]=EE; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1000,EE,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=1041; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1041,EE,I)*/
I=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V18,0,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V43,1000,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=I; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(41,I,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V46,1041,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; 
(*f[40])( );     /*SLG0(V48)*/
pile[v[22]]=763; pile[WZ1]=EE; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(763,EE,jvj+19)*/
l17:if((x[jvj+19]<=0)) goto l20;
x[jvj+16]=s[x[jvj+19]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+19];
pile[v[22]]=1000; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1000,jvj+16,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=1041; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1041,jvj+16,V23)*/
V23=pile[WZ2]; 
V21=V22+V23;
if((V21<=0)) goto l18;
pile[v[22]]=109; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(109,jvj+16,jvj+20)*/
V16=incon;
V24=V22*I;
V27=V23*V18;
V26=4*V27;
if((V24>V26)) goto l14;
V16=0;
l19:V51=x[jvj+20];
pile[v[22]]=20; pile[WZ1]=V51; pile[WZ2]=V16; 
(*f[39])( );     /*SDX0(20,V51,V16,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V22; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V22,V50,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V52,1000,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,V23,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V55; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V55,1041,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
pile[v[22]]=159; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(159,jvj+16,jvj+17)*/
x[jvj+23]=x[jvj+17] ;z[jvj+23]=z[jvj+17];
l15:if((x[jvj+23]<=0)) goto l18;
x[jvj+18]=s[x[jvj+23]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+23];
pile[v[22]]=1000; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1000,jvj+18,V34)*/
V34=pile[WZ2]; 
V33=V34*I;
pile[v[22]]=1041; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1041,jvj+18,V37)*/
V37=pile[WZ2]; 
V36=V37*V18;
V35=4*V36;
if((V33<=V35)) goto l16;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+18,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V40; 
(*f[37])( );     /*SRA0(0,V40,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V34; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,V34,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V59; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V59,1000,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V37; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,V37,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V62; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V62,1041,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
l16:x[jvj+23]=t[x[jvj+23]];
goto l15;
l2:V4=incon;
if((x[jvj+6]==1252)) goto l3;
if((x[jvj+6]!=1251)) goto l4;
pile[v[22]]=1049; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1049,jvj+8,jvj+9)*/
for(i=x[jvj+9],V12=0;i>0;i=t[i],V12++)  ;
V4=V12;
l13:x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
NT=V4;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+15; pile[WZ2]=NT; 
(*f[186])( );     /*BTC0(jvj+11,jvj+15,NT)*/
pile[v[22]]=EE; 
(*f[186])( );     /*BTC0(EE,jvj+15,NT)*/
pile[v[22]]=jvj+3; 
(*f[186])( );     /*BTC0(jvj+3,jvj+15,NT)*/
l12:x[jvj+22]=t[x[jvj+22]];
l10:if((x[jvj+22]>0)) goto l11;
x[jvj+21]=t[x[jvj+21]];
l8:if((x[jvj+21]>0)) goto l9;
x[jvj+10]=t[x[jvj+10]];
goto l6;
l3:pile[v[22]]=405; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(405,jvj+8,V11)*/
V11=pile[WZ2]; 
V4=V11;
goto l13;
l4:V4=1;
goto l13;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=159; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,jvj+11,jvj+12)*/
x[jvj+21]=x[jvj+12] ;z[jvj+21]=z[jvj+12];
goto l8;
l9:x[jvj+3]=s[x[jvj+21]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+21];
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+13)*/
x[jvj+22]=x[jvj+13] ;z[jvj+22]=z[jvj+13];
goto l10;
l11:x[jvj+8]=s[x[jvj+22]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+22];
pile[v[22]]=893; pile[WZ1]=jvj+8; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(893,jvj+8,jvj+14)*/
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(218,jvj+3,jvj+4)*/
x[jvj+5]=d[58];z[jvj+5]=0;
l1:if((x[jvj+5]<=0)) goto l12;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,jvj+4,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l2;
x[jvj+5]=t[x[jvj+5]];
goto l1;
l14:pile[v[22]]=5; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(5,0,43,V16)*/
V16=pile[WZ3]; 
goto l19;
l18:x[jvj+19]=t[x[jvj+19]];
goto l17;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
