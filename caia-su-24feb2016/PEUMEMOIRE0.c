#include "dx.h"
void PEUMEMOIRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D=0,V3=0,V6=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V2=0,V1=0,V19=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V18=0,V13=0,V15=0,V25=0,V30=0,V56=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V57=0,V29=0,V28=0;
int M;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10890;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==957&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; S=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
D=x[S]=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=1169; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1169,jvj+2,D)*/
D=pile[WZ2]; 
V1=D%10;
if((V1!=0)) goto l8;
v[111]=1;
V2=g[539];
if((V2<=0)) goto l8;
V3=vg[539];
if((V3!=0)) goto l1;
if((V2<3)) goto l3;
l1:pile[v[22]]=539; pile[WZ1]=10890; pile[WZ2]=0; pile[WZ3]=(-600); pile[WZ4]=M; pile[WZ5]=jvj+3; 
(*f[232])( );     /*INTERP3(539,10890,0,(-600),M,jvj+3)*/
if((x[jvj+3]==135)) goto l2;
l8:x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=1056; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1056,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==1060) goto l9;
l10:
(*f[1279])( );     /*MENAMONIT0()*/
x[jvj+7]=vo[12];z[jvj+7]=vz[12];
pile[v[22]]=jvj+7; 
(*f[600])( );     /*REPARTITEMPS0(jvj+7)*/
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
v[112]=1;
pile[v[22]]=946; pile[WZ1]=jvj+8; 
(*f[71])( );     /*ENLV0(946,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=506; pile[WZ2]=1169; 
(*f[35])( );     /*CHGC1(jvj+8,506,1169)*/
if(D!=incon) goto l11;
l12:pile[v[22]]=510; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(510,M,V15)*/
V15=pile[WZ2]; 
if((V15>=2000000)) goto l16;
pile[v[22]]=jvj+8; 
(*f[1280])( );     /*REDUIREMEM0(jvj+8)*/
V18=g[540];
if((V18<=0)) goto l13;
V19=vg[540];
if((V19!=0)) goto l5;
if((V18<3)) goto l7;
l5:pile[v[22]]=540; pile[WZ1]=10890; pile[WZ2]=0; pile[WZ3]=jvj+4; 
(*f[291])( );     /*INTERP4(540,10890,0,jvj+4)*/
if((x[jvj+4]==135)) goto l6;
l13:pile[v[22]]=jvj+8; pile[WZ1]=1169; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+8,1169,0)*/
l16:if(x[S]==incon) goto l14;
l22:if(D!=incon) goto l23;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:if((V2<4)) goto l3;
goto l8;
l3:pile[v[22]]=510; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,M,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=10890; 
(*f[98])( );     /*SRA3(135,V35,10890,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,1,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V37,125,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=V38; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(15,V38,64,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V6; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(41,V6,V39,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
l4:if((V2!=2)) goto l8;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l8;
l6:if((V18<4)) goto l7;
goto l13;
l7:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=10890; 
(*f[98])( );     /*SRA3(135,V43,10890,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,2,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V45,125,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=1169; 
(*f[42])( );     /*SRA1(135,V46,1169,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11175; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,11175,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; 
(*f[40])( );     /*SLG0(V48)*/
if((V18!=2)) goto l13;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l13;
l9:x[S]=80 ;z[S]=80;
goto l10;
l11:V13=D+1;
pile[v[22]]=jvj+8; pile[WZ1]=1169; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+8,1169,V13)*/
goto l12;
l14:pile[v[22]]=510; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(510,M,V25)*/
V25=pile[WZ2]; 
if((V25<400000)) goto l17;
l15:x[jvj+9]=vo[12];z[jvj+9]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(860,jvj+9,jvj+10)*/
if((x[jvj+10]==368)) goto l17;
l18:x[S]=120 ;z[S]=120;
goto l22;
l17:x[S]=12 ;z[S]=12;
goto l22;
l20:if((V29<4)) goto l21;
goto l24;
l21:V56=x[S];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V50; pile[WZ2]=10890; 
(*f[98])( );     /*SRA3(135,V50,10890,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(41,3,V51,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V52,125,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,V53,80,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=D; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(41,D,V55,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
if((V29!=2)) goto l24;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l24;
l23:V28=D%10;
if((V28!=0)) goto l24;
V29=g[541];
if((V29<=0)) goto l24;
V30=vg[541];
if((V30!=0)) goto l19;
if((V29<3)) goto l21;
l19:pile[v[22]]=541; pile[WZ1]=10890; pile[WZ2]=0; pile[WZ3]=(-656); pile[WZ4]=D; pile[WZ5]=(-657); pile[v[22]+6]=S; pile[v[22]+7]=jvj+11; 
(*f[353])( );     /*INTERP7(541,10890,0,(-656),D,(-657),S,jvj+11)*/
if((x[jvj+11]==135)) goto l20;
goto l24;
}
