#include "dx.h"
void SORARC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V2=0,V75=0,V1=0,V80=0,V78=0,V79=0,V3=0,V83=0,V6=0,V5=0,V88=0,V92=0,V84=0,V43=0,V85=0,V86=0,V87=0,V89=0,V90=0,V7=0,V11=0,V13=0,V15=0,V9=0,V55=0,V59=0,V109=0,V58=0,V114=0,V112=0,V113=0,V60=0,V63=0,V64=0,V66=0,V62=0,V47=0,V96=0,V36=0,V108=0,V98=0,V40=0,V105=0,V100=0,V102=0,V103=0,V104=0,V106=0,V107=0,V74=0,V120=0,V118=0,V50=0,JJ=0,NN=0,V53=0,V121=0,V122=0;
int I,X,M;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=80; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(80,X,jvj+14)*/
pile[v[22]]=866; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(866,X,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=158; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(158,jvj+14,jvj+15)*/
if((x[jvj+16]=w[x[jvj+15]][3])==incon) goto l17;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; pile[WZ3]=jvj+17; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(jvj+14,jvj+16,V96,jvj+17)*/
V96=pile[WZ2]; 
pile[v[22]]=287; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(287,X,jvj+18)*/
V36=V96;
pile[v[22]]=498; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(498,jvj+18,jvj+19)*/
pile[v[22]]=436; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(436,jvj+19,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+20,V43)*/
V43=pile[WZ2]; 
V108=V36;
pile[v[22]]=158; pile[WZ1]=jvj+18; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(158,jvj+18,jvj+4)*/
if((x[jvj+21]=w[x[jvj+4]][3])==incon) goto l17;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+21; pile[WZ3]=jvj+22; 
(*f[45])( );if(v[102]) goto l17;     /*FNDZ0(jvj+18,jvj+21,V98,jvj+22)*/
V98=pile[WZ2]; 
V40=V98;
V105=V40;
if((x[M]==250)) goto l26;
pile[v[22]]=226; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(226,X,jvj+7)*/
if((x[jvj+7]!=0)) goto l26;
pile[v[22]]=867; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(867,X,jvj+8)*/
x[jvj+9]=incon;
if((x[jvj+8]==493)) goto l15;
x[jvj+9]=117 ;z[jvj+9]=117;
l16:pile[v[22]]=M; pile[WZ1]=jvj+9; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(M,jvj+9,1)*/
l26:pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=I; 
(*f[39])( );     /*SDX0(41,V47,I,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V100,46,V2)*/
V2=pile[WZ2]; 
V1=incon;
pile[v[22]]=117; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,X,N)*/
N=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=N; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V2,N,41,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V75,46,V1)*/
V1=pile[WZ2]; 
l2:V3=incon;
pile[v[22]]=1337; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1337,X,jvj+1)*/
if((x[jvj+1]!=0)) goto l3;
V3=V1;
l27:pile[v[22]]=V43; pile[WZ1]=V3; 
(*f[64])( );     /*SRA2(V43,V3,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V102,123,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; pile[WZ1]=V105; pile[WZ2]=jvj+4; 
(*f[179])( );     /*SDX1(V103,V105,jvj+4,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V104,125,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=V106; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V106,61,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=V108; pile[WZ2]=jvj+15; 
(*f[179])( );     /*SDX1(V107,V108,jvj+15,V6)*/
V6=pile[WZ3]; 
V5=incon;
pile[v[22]]=576; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(576,X,jvj+2)*/
V83=x[jvj+2];
pile[v[22]]=20; pile[WZ1]=V83; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V83,V6,V5)*/
V5=pile[WZ3]; 
l5:V7=incon;
pile[v[22]]=509; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(509,X,jvj+3)*/
if((x[jvj+3]!=0)) goto l6;
V7=V5;
l7:V9=incon;
pile[v[22]]=226; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(226,X,jvj+5)*/
if((x[jvj+5]!=0)) goto l14;
pile[v[22]]=867; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(867,X,jvj+6)*/
V11=incon;
if((x[jvj+6]==493)) goto l8;
V11=V7;
l9:V13=incon;
if((x[jvj+6]==1336)) goto l10;
V13=V11;
l11:V15=incon;
if(x[jvj+6]!=493&&x[jvj+6]!=1336) goto l12;
V15=V13;
l13:V9=V15;
l28:J=V9;
l33:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l1:V1=V2;
goto l2;
l3:V80=x[jvj+1];
pile[v[22]]=V1; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V1,123,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=V80; pile[WZ2]=23; 
(*f[179])( );     /*SDX1(V78,V80,23,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V79,125,V3)*/
V3=pile[WZ2]; 
goto l27;
l4:V5=V6;
goto l5;
l6:V88=V40;
V92=x[jvj+3];
pile[v[22]]=135; pile[WZ1]=V5; pile[WZ2]=1350; 
(*f[42])( );     /*SRA1(135,V5,1350,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=V43; 
(*f[37])( );     /*SRA0(V84,V43,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V85,123,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=V88; pile[WZ2]=jvj+4; 
(*f[179])( );     /*SDX1(V86,V88,jvj+4,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V87,125,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V89,(-740),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V92; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(23,V92,V90,V7)*/
V7=pile[WZ3]; 
goto l7;
l8:pile[v[22]]=8; pile[WZ1]=V7; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(8,V7,35,V11)*/
V11=pile[WZ3]; 
goto l9;
l10:pile[v[22]]=6; pile[WZ1]=V11; pile[WZ2]=63; 
(*f[41])( );     /*SRB0(6,V11,63,V13)*/
V13=pile[WZ3]; 
goto l11;
l12:pile[v[22]]=V13; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V13,42,V15)*/
V15=pile[WZ2]; 
goto l13;
l14:V9=V7;
goto l28;
l15:x[jvj+9]=130 ;z[jvj+9]=130;
goto l16;
l17:pile[v[22]]=287; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(287,X,jvj+10)*/
l32:V50=x[X];
pile[v[22]]=373; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(373,X,jvj+24)*/
JJ=0;
V121=v[200];
pile[v[22]]=41; pile[WZ1]=V121; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V121,0,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; 
(*f[40])( );     /*SLG0(V122)*/
fflush(stdout);
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
pile[v[22]]=JJ; pile[WZ1]=40; pile[WZ2]=V50; pile[WZ3]=jvj+24; pile[WZ4]=68; 
(*f[224])( );     /*SDA0(JJ,40,V50,jvj+24,68,NN)*/
NN=pile[WZ5]; 
V53=NN+1;
c[v[1]][NN]=41;
J=V53;
goto l33;
l18:V58=V59;
l19:V60=incon;
pile[v[22]]=1337; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1337,X,jvj+11)*/
if((x[jvj+11]!=0)) goto l20;
V60=V58;
l30:pile[v[22]]=20; pile[WZ1]=V120; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(20,V120,V60,V63)*/
V63=pile[WZ3]; 
V62=incon;
pile[v[22]]=226; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(226,X,jvj+12)*/
if((x[jvj+12]!=0)) goto l25;
pile[v[22]]=867; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(867,X,jvj+13)*/
V64=incon;
if((x[jvj+13]==1336)) goto l21;
V64=V63;
l22:V66=incon;
if((x[jvj+13]!=1336)) goto l23;
V66=V64;
l24:V62=V66;
l31:J=V62;
goto l33;
l20:V114=x[jvj+11];
pile[v[22]]=V58; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V58,123,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V112; pile[WZ1]=V114; pile[WZ2]=23; 
(*f[179])( );     /*SDX1(V112,V114,23,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V113,125,V60)*/
V60=pile[WZ2]; 
goto l30;
l21:pile[v[22]]=7; pile[WZ1]=V63; pile[WZ2]=63; 
(*f[41])( );     /*SRB0(7,V63,63,V64)*/
V64=pile[WZ3]; 
goto l22;
l23:pile[v[22]]=V64; pile[WZ1]=42; 
(*f[249])( );     /*SPC1(V64,42,V66)*/
V66=pile[WZ2]; 
goto l24;
l25:V62=V63;
goto l31;
l29:pile[v[22]]=576; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(576,X,jvj+23)*/
pile[v[22]]=866; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(866,X,V74)*/
V74=pile[WZ2]; 
V120=x[jvj+23];
pile[v[22]]=41; pile[WZ1]=V74; pile[WZ2]=I; 
(*f[39])( );     /*SDX0(41,V74,I,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V118,46,V59)*/
V59=pile[WZ2]; 
V58=incon;
pile[v[22]]=117; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,X,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V55; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V59,V55,41,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=V109; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V109,46,V58)*/
V58=pile[WZ2]; 
goto l19;
}
