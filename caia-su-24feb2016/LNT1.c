#include "dx.h"
void LNT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V2=0,V34=0,V35=0,V7=0,V36=0,V37=0,V13=0,V38=0,V39=0,V4=0,V3=0,V6=0,K=0,V8=0,V12=0,V14=0,V19=0,V40=0,V22=0,V41=0,V42=0,V23=0,V25=0,V50=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V24=0,V21=0,V74=0,V51=0,V62=0,V61=0,V57=0,V56=0,V59=0,V69=0,V70=0,V65=0,V66=0,V63=0,V71=0,V68=0,V72=0,V73=0,KK=0;
int X,I;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=incon;
pile[v[22]]=I; 
(*f[107])( );     /*CRC0(I,L)*/
L=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+1; 
(*f[78])( );if(v[102]) goto l13;     /*SMA0(I,64,67,jvj+1)*/
V2=bh[v[1]][L];
if(V2==61||V2==58) goto l1;
pile[v[22]]=20; pile[WZ1]=10419; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10419,0,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V34; 
(*f[39])( );     /*SDX0(41,1,V34,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
l1:V4=L+1;
V3=bh[v[1]][V4];
if((V3==91)) goto l16;
if((V3!=40)) goto l2;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(250,158,jvj+3)*/
pile[v[22]]=X; pile[WZ1]=jvj+1; 
(*f[35])( );     /*CHGC1(X,jvj+1,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=V4; 
(*f[333])( );if(v[102]) goto l2;     /*LNT1(jvj+3,V4,V8)*/
V8=pile[WZ2]; 
V12=V8+1;
K=V12;
V13=bh[v[1]][V8];
if(V13==41) goto l11;
pile[v[22]]=20; pile[WZ1]=10419; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10419,0,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,4,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l11:V21=bh[v[1]][K];
if(V21==32||V21==41) goto l12;
if((V21!=44)) goto l5;
pile[v[22]]=X; pile[WZ1]=K; 
(*f[333])( );if(v[102]) goto l5;     /*LNT1(X,K,J)*/
J=pile[WZ2]; 
l5:V22=bh[v[1]][K];
if(V22==44||V22==41||V22==32) goto l6;
pile[v[22]]=20; pile[WZ1]=10419; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10419,0,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(41,3,V41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
l6:if((V23=w[x[jvj+1]][1])==incon) goto l10;
l13:pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,X,jvj+8)*/
if((x[jvj+8]!=250)) goto l14;
(*f[71])( );     /*ENLV0(158,X)*/
l14:if(J!=incon) goto l15;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l2:if(V3==91||V3==40) goto l6;
pile[v[22]]=444; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(444,jvj+1,jvj+2)*/
if((x[jvj+2]==107)) goto l4;
l3:pile[v[22]]=L; pile[WZ3]=jvj+4; 
(*f[334])( );if(v[102]) goto l4;     /*LNB0(L,V14,K,jvj+4)*/
V14=pile[WZ1]; K=pile[WZ2]; 
V19=V14;
V40=V19;
pile[v[22]]=X; pile[WZ1]=jvj+1; pile[WZ2]=V40; 
(*f[43])( );     /*CHGC2(X,jvj+1,V40)*/
goto l11;
l4:pile[v[22]]=444; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(444,jvj+1,jvj+5)*/
if((x[jvj+5]!=107)) goto l6;
pile[v[22]]=L; pile[WZ1]=jvj+6; 
(*f[335])( );if(v[102]) goto l6;     /*LANT0(L,jvj+6,K)*/
K=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(X,jvj+1,jvj+6)*/
goto l11;
l8:if((V24<4)) goto l9;
goto l13;
l9:V50=x[jvj+1];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=10419; 
(*f[98])( );     /*SRA3(135,V44,10419,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V45,125,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=2; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,2,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V47,(-1318),V48)*/
V48=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V50,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
if((V24!=2)) goto l13;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l13;
l10:V24=g[37];
if((V24<=0)) goto l13;
V25=vg[37];
if((V25!=0)) goto l7;
if((V24<3)) goto l9;
l7:pile[v[22]]=37; pile[WZ1]=10419; pile[WZ2]=1; pile[WZ3]=(-606); pile[WZ4]=jvj+1; pile[WZ5]=jvj+7; 
(*f[232])( );     /*INTERP3(37,10419,1,(-606),jvj+1,jvj+7)*/
if((x[jvj+7]==135)) goto l8;
goto l13;
l12:J=K;
goto l5;
l15:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l16:V74=V4;
l17:V51=bh[v[1]][V74];
if((V51==93)) goto l21;
if(V51!=44&&V51!=91) goto l2;
V62=V74+1;
V61=bh[v[1]][V62];
if((V61!=40)) goto l19;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(250,158,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=V62; 
(*f[333])( );if(v[102]) goto l2;     /*LNT1(jvj+9,V62,V57)*/
V57=pile[WZ2]; 
V56=V57+1;
V59=bh[v[1]][V57];
if(V59==41) goto l18;
pile[v[22]]=20; pile[WZ1]=10445; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10445,0,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,1,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; 
(*f[40])( );     /*SLG0(V70)*/
l18:pile[v[22]]=X; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(X,jvj+1,jvj+9)*/
V74=V56;
goto l17;
l19:pile[v[22]]=V74; pile[WZ3]=jvj+10; 
(*f[334])( );if(v[102]) goto l2;     /*LNB0(V74,V65,V66,jvj+10)*/
V65=pile[WZ1]; V66=pile[WZ2]; 
V63=V65;
V71=V63;
V68=bh[v[1]][V66];
if(V68==93||V68==44) goto l20;
pile[v[22]]=20; pile[WZ1]=10445; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10445,0,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(41,2,V72,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; 
(*f[40])( );     /*SLG0(V73)*/
l20:pile[v[22]]=V71; pile[WZ1]=jvj+1; pile[WZ2]=X; 
(*f[235])( );     /*PLUSC2(V71,jvj+1,X)*/
V74=V66;
goto l17;
l21:KK=V74;
V6=KK+1;
K=V6;
V7=bh[v[1]][KK];
if(V7==93) goto l11;
pile[v[22]]=20; pile[WZ1]=10419; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10419,0,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,2,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; 
(*f[40])( );     /*SLG0(V37)*/
goto l11;
}
