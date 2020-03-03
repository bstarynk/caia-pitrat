#include "dx.h"
void SORED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V2=0,V22=0,V23=0,V1=0,V66=0,V67=0,V68=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V26=0,V27=0,V29=0,V30=0,V32=0,V33=0,V35=0,V36=0,V37=0,V39=0,V40=0,V42=0,V43=0,V44=0,V46=0,V47=0,V48=0,V50=0,V51=0,V52=0,V54=0,V55=0,V56=0,V58=0,V59=0,V60=0,V62=0,V63=0,V64=0;
int LA;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11657;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==872&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
LA=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=876; pile[WZ1]=LA; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(876,LA,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=1335; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1335,LA,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1005,LA,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=1527; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1527,LA,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=1058; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1058,LA,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,LA,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,LA,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,LA,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=941; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(941,LA,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=942; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(942,LA,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=943; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(943,LA,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=1202; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1202,LA,jvj+6)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+6,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,V14,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V27,45,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V29,V13,41,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V30,45,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=V12; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V32,V12,41,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V33,642,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V35,58,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=V11; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V36,V11,41,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V37; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V37,683,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V39,58,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=V10; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V40,V10,41,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=901; pile[WZ1]=LA; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(901,LA,jvj+2)*/
if((x[jvj+2]!=0)) goto l1;
V1=V2;
l4:pile[v[22]]=135; pile[WZ1]=V1; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V1,936,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V42,58,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=V9; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V43,V9,41,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=1058; 
(*f[42])( );     /*SRA1(135,V44,1058,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V46,58,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=V8; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V47,V8,41,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V48,301,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V50,58,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=V7; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V51,V7,41,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V52,1005,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V54,58,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V6; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V55,V6,41,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=1335; 
(*f[42])( );     /*SRA1(135,V56,1335,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V58,58,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V5; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V59,V5,41,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V60,876,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V62,58,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=V4; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V63,V4,41,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
pile[v[22]]=1260; pile[WZ1]=LA; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1260,LA,jvj+3)*/
if((x[jvj+3]==0)) goto l2;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1335; 
(*f[42])( );     /*SRA1(135,0,1335,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
pile[v[22]]=jvj+3; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+3,0,2)*/
l2:pile[v[22]]=1261; pile[WZ1]=LA; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1261,LA,jvj+4)*/
if((x[jvj+4]==0)) goto l3;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,0,876,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; 
(*f[40])( );     /*SLG0(V67)*/
pile[v[22]]=jvj+4; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+4,0,2)*/
l3:pile[v[22]]=1363; pile[WZ1]=LA; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1363,LA,jvj+5)*/
if((x[jvj+5]==0)) goto l5;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,0,1005,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
pile[v[22]]=jvj+5; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+5,0,2)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:V25=x[jvj+2];
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=901; 
(*f[42])( );     /*SRA1(135,V2,901,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V22,58,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V25; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(23,V25,V23,V1)*/
V1=pile[WZ3]; 
goto l4;
}
