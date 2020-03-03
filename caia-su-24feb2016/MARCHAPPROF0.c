#include "dx.h"
void MARCHAPPROF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V6=0,V40=0,V9=0,V21=0,V50=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V20=0,V28=0,V58=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V59=0,V27=0,V33=0,V61=0,V62=0,V63=0,V64=0,V65=0,V32=0,V69=0,V71=0,V66=0,V67=0,V68=0,V70=0;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10957;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1309&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+27]=0 ;z[jvj+27]=0;
x[jvj+21]=x[jvj+27] ;z[jvj+21]=z[jvj+27];
x[jvj+13]=vo[12];z[jvj+13]=vz[12];
pile[v[22]]=658; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(658,jvj+13,jvj+14)*/
l7:if((x[jvj+14]>0)) goto l8;
pile[v[22]]=M; 
(*f[964])( );     /*BILANSANSCHOIX0(M)*/
if((x[jvj+21]!=0)) goto l16;
x[jvj+26]=1041 ;z[jvj+26]=1041;
V32=g[455];
if((V32<=0)) goto l21;
V33=vg[455];
if((V33!=0)) goto l18;
if((V32<3)) goto l20;
l18:pile[v[22]]=455; pile[WZ1]=10957; pile[WZ2]=0; pile[WZ3]=jvj+24; 
(*f[291])( );     /*INTERP4(455,10957,0,jvj+24)*/
if((x[jvj+24]==135)) goto l19;
l21:x[jvj+25]=vo[14];z[jvj+25]=vz[14];
pile[v[22]]=jvj+25; pile[WZ1]=935; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+25,935,jvj+26)*/
V69=v[0];
V71=v[14];
pile[v[22]]=20; pile[WZ1]=10957; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10957,0,V66)*/
V66=pile[WZ3]; 
pile[WZ1]=80; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(20,80,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V69; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(41,V69,V67,V68)*/
V68=pile[WZ3]; 
pile[WZ1]=V71; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(41,V71,V68,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; 
(*f[40])( );     /*SLG0(V70)*/
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:if((V20<4)) goto l5;
l12:pile[v[22]]=jvj+21; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+11)*/
l11:x[jvj+17]=t[x[jvj+17]];
l10:if((x[jvj+17]<=0)) goto l9;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+11; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+18,jvj+11,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+6,jvj+19)*/
if((x[jvj+19]!=484)) goto l11;
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+18,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+11; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+20,jvj+11,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+4]=w[x[jvj+3]][3])==incon) goto l6;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+2,jvj+4,V38,jvj+5)*/
V38=pile[WZ2]; 
V6=V38;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+6,jvj+7)*/
pile[v[22]]=365; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,jvj+7,jvj+8)*/
x[jvj+28]=x[jvj+8] ;z[jvj+28]=z[jvj+8];
l1:if((x[jvj+28]<=0)) goto l6;
x[jvj+9]=s[x[jvj+28]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+28];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+4; pile[WZ3]=jvj+10; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+9,jvj+4,V40,jvj+10)*/
V40=pile[WZ2]; 
V9=V40;
if((V6==V9)) goto l11;
l2:x[jvj+28]=t[x[jvj+28]];
goto l1;
l5:V50=x[jvj+11];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=10957; 
(*f[98])( );     /*SRA3(135,V43,10957,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,1,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V45,125,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V46; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(15,V46,35,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V47; pile[WZ2]=634; 
(*f[42])( );     /*SRA1(135,V47,634,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V50,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
if((V20!=2)) goto l12;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l12;
l6:V20=g[453];
if((V20<=0)) goto l12;
V21=vg[453];
if((V21!=0)) goto l3;
if((V20<3)) goto l5;
l3:pile[v[22]]=453; pile[WZ1]=10957; pile[WZ2]=0; pile[WZ3]=(-596); pile[WZ4]=jvj+11; pile[WZ5]=jvj+12; 
(*f[232])( );     /*INTERP3(453,10957,0,(-596),jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l4;
goto l12;
l8:x[jvj+11]=s[x[jvj+14]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+14];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+11,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=25)) goto l9;
x[jvj+17]=d[20];z[jvj+17]=0;
goto l10;
l9:x[jvj+14]=t[x[jvj+14]];
goto l7;
l14:if((V27<4)) goto l15;
l17:pile[v[22]]=jvj+23; pile[WZ1]=1120; pile[WZ2]=jvj+21; 
(*f[34])( );     /*CHGC0(jvj+23,1120,jvj+21)*/
goto l21;
l15:V58=x[jvj+21];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=10957; 
(*f[98])( );     /*SRA3(135,V52,10957,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(41,2,V53,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V54,125,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V55; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(15,V55,35,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V58; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(23,V58,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V57; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V57,1000,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
if((V27!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l16:x[jvj+23]=vo[14];z[jvj+23]=vz[14];
x[jvj+26]=1000 ;z[jvj+26]=1000;
V27=g[454];
if((V27<=0)) goto l17;
V28=vg[454];
if((V28!=0)) goto l13;
if((V27<3)) goto l15;
l13:pile[v[22]]=454; pile[WZ1]=10957; pile[WZ2]=0; pile[WZ3]=(-697); pile[WZ4]=jvj+21; pile[WZ5]=jvj+22; 
(*f[317])( );     /*INTERP5(454,10957,0,(-697),jvj+21,jvj+22)*/
if((x[jvj+22]==135)) goto l14;
goto l17;
l19:if((V32<4)) goto l20;
goto l21;
l20:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=10957; 
(*f[98])( );     /*SRA3(135,V61,10957,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,3,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V63,125,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V64,1041,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
if((V32!=2)) goto l21;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l21;
}
