#include "dx.h"
void CHERBLOC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V34=0,V26=0,V27=0,V28=0,V29=0,V30=0,V31=0,V33=0,V35=0,V37=0,V4=0,V3=0,V2=0,V11=0,V46=0,V49=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V47=0,V48=0,V50=0,V10=0,V21=0,V62=0,V66=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V60=0,V61=0,V63=0,V65=0,V20=0,V19=0;
int M,BK,NK,NT;
int BL,N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11026;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1271&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; BK=pile[v[22]+1]; NK=pile[v[22]+2]; NT=pile[v[22]+3]; BL=pile[v[22]+4]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[BL]=N=incon;
if((M!=0)) goto l1;
V4=g[496];
if((V4<=0)) goto l17;
V5=vg[496];
if((V5!=0)) goto l2;
if((V4<3)) goto l4;
l2:pile[v[22]]=496; pile[WZ1]=11026; pile[WZ2]=0; pile[WZ3]=(-678); pile[WZ4]=BK; pile[WZ5]=(-3141); pile[v[22]+6]=NT; pile[v[22]+7]=(-2364); pile[v[22]+8]=NK; pile[v[22]+9]=jvj+3; 
(*f[1059])( );     /*INTERP11(496,11026,0,(-678),BK,(-3141),NT,(-2364),NK,jvj+3)*/
if((x[jvj+3]==135)) goto l3;
l17:x[BL]=N=incon;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; v[102]=1;return;
l1:pile[v[22]]=BK; pile[WZ1]=NK; pile[WZ2]=jvj+2; 
(*f[133])( );if(v[102]) goto l17;     /*TLDEBL1(BK,NK,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=372; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,372,68)*/
(*f[306])( );     /*EAC0(jvj+2)*/
V3=abs(M);
pile[v[22]]=302; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(302,jvj+2,jvj+4)*/
l5:if((x[jvj+4]<=0)) goto l15;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+5,V2)*/
V2=pile[WZ2]; 
if((V2!=V3)) goto l6;
x[jvj+10]=x[jvj+5] ;z[jvj+10]=z[jvj+5];
if((M>0)) goto l14;
if((M>=0)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+10,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+8,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+8,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=BL; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+11,BL)*/
N=V19;
V20=g[498];
if((V20<=0)) goto l15;
V21=vg[498];
if((V21!=0)) goto l11;
if((V20<3)) goto l13;
l11:pile[v[22]]=498; pile[WZ1]=11026; pile[WZ2]=0; pile[WZ3]=(-604); pile[WZ4]=BL; pile[WZ5]=15; pile[v[22]+6]=jvj+8; pile[v[22]+7]=(-3141); pile[v[22]+8]=NT; pile[v[22]+9]=(-625); pile[v[22]+10]=N; pile[v[22]+11]=jvj+9; 
(*f[1257])( );     /*INTERP13(498,11026,0,(-604),BL,15,jvj+8,(-3141),NT,(-625),N,jvj+9)*/
if((x[jvj+9]==135)) goto l12;
l15:pile[v[22]]=372; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(372,jvj+2)*/
pile[v[22]]=jvj+2; 
(*f[306])( );     /*EAC0(jvj+2)*/
if(x[BL]!=incon) goto l18;
goto l17;
l3:if((V4<4)) goto l4;
goto l17;
l4:V34=x[BK];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=11026; 
(*f[98])( );     /*SRA3(135,V26,11026,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V27; 
(*f[39])( );     /*SDX0(41,1,V27,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V28,125,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(20,V29,35,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,NT,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V34,V31,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,NK,V33,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=259; 
(*f[42])( );     /*SRA1(135,V35,259,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
if((V4!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l6:x[jvj+4]=t[x[jvj+4]];
goto l5;
l8:if((V10<4)) goto l9;
goto l15;
l9:V46=x[jvj+6];
V49=x[BK];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V39; pile[WZ2]=11026; 
(*f[98])( );     /*SRA3(135,V39,11026,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(41,2,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V41,125,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V42; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(22,V42,35,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V43; pile[WZ2]=935; 
(*f[42])( );     /*SRA1(135,V43,935,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V46; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(20,V46,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V45; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,V45,297,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,V49,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,NK,V48,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
if((V10==2)) goto l10;
goto l15;
l10:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l15;
l12:if((V20<4)) goto l13;
goto l15;
l13:V62=x[BL];
V66=x[jvj+8];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V53; pile[WZ2]=11026; 
(*f[98])( );     /*SRA3(135,V53,11026,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,3,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V55,125,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=17; pile[WZ1]=V56; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(17,V56,64,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,NT,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V58; pile[WZ2]=297; 
(*f[42])( );     /*SRA1(135,V58,297,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V62; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,V62,V60,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,N,V61,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V66; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(20,V66,V63,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
if((V20==2)) goto l10;
goto l15;
l14:pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+10,jvj+6)*/
V10=g[497];
if((V10<=0)) goto l15;
V11=vg[497];
if((V11!=0)) goto l7;
if((V10<3)) goto l9;
l7:pile[v[22]]=497; pile[WZ1]=11026; pile[WZ2]=0; pile[WZ3]=(-606); pile[WZ4]=jvj+6; pile[WZ5]=(-678); pile[v[22]+6]=BK; pile[v[22]+7]=(-2364); pile[v[22]+8]=NK; pile[v[22]+9]=jvj+7; 
(*f[1340])( );     /*INTERP16(497,11026,0,(-606),jvj+6,(-678),BK,(-2364),NK,jvj+7)*/
if((x[jvj+7]==135)) goto l8;
goto l15;
l18:if(N!=incon) goto l19;
goto l17;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; pile[v[22]+5]=N; v[102]=0;return;
}
