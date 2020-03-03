#include "dx.h"
void INTERM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V15=0,V16=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0,V26=0,V27=0,V28=0,V29=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V84=0,V85=0;
int CT;
int NR,K;
int WZ1,WZ2,WZ3;

CT=pile[v[22]]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=CT; 
(*f[98])( );     /*SRA3(135,0,CT,V1)*/
V1=pile[WZ3]; 
pile[v[22]]=V1; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V1,46,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=0; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(41,0,V2,V3)*/
V3=pile[WZ3]; 
pile[v[22]]=V3; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V3,58,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V4; pile[WZ2]=300; 
(*f[98])( );     /*SRA3(135,V4,300,V5)*/
V5=pile[WZ3]; 
pile[v[22]]=V5; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V5,44,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(41,1,V6,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=V7; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V7,58,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V8; pile[WZ2]=178; 
(*f[98])( );     /*SRA3(135,V8,178,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V9,44,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(41,2,V10,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=V11; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V11,58,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V12; pile[WZ2]=318; 
(*f[98])( );     /*SRA3(135,V12,318,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V13,44,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(41,3,V14,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V15,58,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V16; pile[WZ2]=397; 
(*f[98])( );     /*SRA3(135,V16,397,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=V17; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V17,44,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(41,4,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V19,58,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V20; pile[WZ2]=39; 
(*f[98])( );     /*SRA3(135,V20,39,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V21,44,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(41,5,V22,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V23,58,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=22; 
(*f[98])( );     /*SRA3(135,V24,22,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V25,44,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,6,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V27,58,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=73; 
(*f[98])( );     /*SRA3(135,V28,73,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V29,44,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,7,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V31,58,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=435; 
(*f[98])( );     /*SRA3(135,V32,435,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V33,44,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=8; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,8,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V35,58,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V36; pile[WZ2]=42; 
(*f[98])( );     /*SRA3(135,V36,42,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V37,44,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=9; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,9,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V39,58,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=69; 
(*f[98])( );     /*SRA3(135,V40,69,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V41,44,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=10; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(41,10,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V43,58,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=114; 
(*f[98])( );     /*SRA3(135,V44,114,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V45,44,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=11; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,11,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V47,58,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=113; 
(*f[98])( );     /*SRA3(135,V48,113,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V49,44,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=12; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,12,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V51,58,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=108; 
(*f[98])( );     /*SRA3(135,V52,108,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V53,44,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=13; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,13,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V55,58,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=47; 
(*f[98])( );     /*SRA3(135,V56,47,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V57,44,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=14; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,14,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V59,58,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=20; 
(*f[98])( );     /*SRA3(135,V60,20,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V61,44,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=15; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,15,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V63,58,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=41; 
(*f[98])( );     /*SRA3(135,V64,41,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V65,44,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=16; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,16,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V67,58,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=89; 
(*f[98])( );     /*SRA3(135,V68,89,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V69,44,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=17; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(41,17,V70,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V71,58,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=96; 
(*f[98])( );     /*SRA3(135,V72,96,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V73,44,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=18; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(41,18,V74,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V75,58,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V76; pile[WZ2]=21; 
(*f[98])( );     /*SRA3(135,V76,21,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V77,44,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=19; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(41,19,V78,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V79,58,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V80; pile[WZ2]=147; 
(*f[98])( );     /*SRA3(135,V80,147,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V81,44,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=20; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(41,20,V82,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V83,58,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V84; pile[WZ2]=425; 
(*f[98])( );     /*SRA3(135,V84,425,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; 
(*f[40])( );     /*SLG0(V85)*/
(*f[74])( );     /*LK0()*/
pile[v[22]]=0; 
(*f[126])( );     /*LND2(0,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
v[22]-=3; pile[v[22]+1]=NR; pile[v[22]+2]=K; return;
}
