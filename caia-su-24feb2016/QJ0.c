#include "dx.h"
void QJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int MN=0,MX=0,V61=0,V62=0,V58=0,V57=0,V64=0,V65=0,V66=0,V59=0,V18=0,V19=0,V17=0,V21=0,V22=0,V24=0,V27=0,V28=0,V26=0,V30=0,V31=0,V32=0,V29=0,V33=0,V34=0,V25=0,V23=0,V35=0,V36=0,V38=0,V42=0,V43=0,V44=0,V45=0,V40=0,V41=0,V39=0,V37=0,V46=0,V47=0,V48=0,V20=0,V49=0,V50=0,V52=0,V54=0,V55=0,V53=0,V51=0,V56=0,V72=0,V71=0,V74=0,V73=0,MA=0,MB=0,V85=0,V78=0,V80=0,V82=0,V83=0,V81=0,V79=0,V84=0,V13=0,V14=0,V15=0,V2=0,V4=0,V8=0,V9=0,V6=0,V7=0,V10=0,V11=0,V5=0,V3=0,V12=0,V94=0,V87=0,V89=0,V91=0,V92=0,V90=0,V88=0,V93=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10304;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2139&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
MN=MX=incon;
pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(218,X,jvj+2)*/
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(280,jvj+2,MN)*/
MN=pile[WZ2]; 
l1:pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(164,jvj+2,MX)*/
MX=pile[WZ2]; 
l3:if(MN!=incon) goto l4;
l14:J=I;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l2:V61=2*V59;
if((V57>V61)) goto l6;
l7:V71=incon;
pile[v[22]]=208; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(208,X,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[1160])( );if(v[102]) goto l8;     /*SUP0(jvj+5,V72)*/
V72=pile[WZ1]; 
if((V72>MX)) goto l8;
V71=67;
l9:V73=incon;
pile[v[22]]=208; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(208,X,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[1161])( );if(v[102]) goto l10;     /*INF0(jvj+6,V74)*/
V74=pile[WZ1]; 
if((V74<MN)) goto l10;
V73=67;
l11:MA=V71;
MB=V73;
if((MA==68)) goto l12;
if((MA!=67)) goto l14;
if((MB!=68)) goto l14;
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,29,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V87,40,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l14;     /*SPSS0(V89,jvj+2,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=V91; 
(*f[64])( );     /*SRA2(V94,V91,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=MN; pile[WZ1]=V92; 
(*f[99])( );     /*SPM0(MN,V92,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=V90; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V90,41,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V88,32,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l14;     /*QU0(V93,X,J)*/
J=pile[WZ2]; 
goto l15;
l4:if(MX!=incon) goto l5;
goto l14;
l5:V58=MX-MN;
V57=V58+1;
pile[v[22]]=158; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(158,X,jvj+3)*/
if((x[jvj+3]!=221)) goto l7;
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(241,29,V64)*/
V64=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(241,87,V65)*/
V65=pile[WZ2]; 
pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(241,25,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+4)*/
for(i=x[jvj+4],V59=0;i>0;i=t[i],V59++)  ;
if((V59<=10)) goto l2;
if((V59>20)) goto l7;
V62=3*V59;
if((V57>V62)) goto l6;
goto l7;
l6:pile[v[22]]=(-5008); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-5008),I,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V18,61,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V19; 
(*f[99])( );     /*SPM0(0,V19,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V17,59,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=(-2580); pile[WZ1]=V21; 
(*f[64])( );     /*SRA2((-2580),V21,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V22,40,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=(-5009); pile[WZ1]=V24; 
(*f[64])( );     /*SRA2((-5009),V24,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V27,61,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V28; 
(*f[99])( );     /*SPM0(0,V28,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V26,59,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=(-5009); pile[WZ1]=V30; 
(*f[64])( );     /*SRA2((-5009),V30,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=V31; 
(*f[64])( );     /*SRA2(V64,V31,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V32; 
(*f[99])( );     /*SPM0(V59,V32,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V29,59,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=(-5009); pile[WZ1]=V33; 
(*f[64])( );     /*SRA2((-5009),V33,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=V34; 
(*f[64])( );     /*SRA2(V65,V34,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V25,41,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V23,32,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V35; 
(*f[64])( );     /*SRA2((-2577),V35,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V36,40,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=110; 
(*f[38])( );     /*SPC0(V38,110,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l14;     /*SPSS0(V42,jvj+2,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V43,91,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=(-5009); pile[WZ1]=V44; 
(*f[64])( );     /*SRA2((-5009),V44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V45,93,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=V40; 
(*f[64])( );     /*SRA2(V66,V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l14;     /*SPSS0(V41,jvj+2,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V39,41,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V37,32,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=(-5008); pile[WZ1]=V46; 
(*f[64])( );     /*SRA2((-5008),V46,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V47,61,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V48; 
(*f[99])( );     /*SPM0(1,V48,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V20,59,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V49; 
(*f[64])( );     /*SRA2((-2577),V49,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V50,40,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=(-5008); pile[WZ1]=V52; 
(*f[64])( );     /*SRA2((-5008),V52,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=V54; 
(*f[64])( );     /*SRA2(V66,V54,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V55; 
(*f[99])( );     /*SPM0(0,V55,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V53,41,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V51,32,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l14;     /*QU0(V56,X,J)*/
J=pile[WZ2]; 
goto l15;
l8:V71=68;
goto l9;
l10:V73=68;
goto l11;
l12:if((MB==67)) goto l13;
if((MB!=68)) goto l14;
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,29,V13)*/
V13=pile[WZ2]; 
pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,27,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=394; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,394,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V2,40,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l14;     /*SPSS0(V4,jvj+2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=V8; 
(*f[64])( );     /*SRA2(V13,V8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=MN; pile[WZ1]=V9; 
(*f[99])( );     /*SPM0(MN,V9,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=V6; 
(*f[64])( );     /*SRA2(V15,V6,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l14;     /*SPSS0(V7,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=V10; 
(*f[64])( );     /*SRA2(V14,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=MX; pile[WZ1]=V11; 
(*f[99])( );     /*SPM0(MX,V11,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V5,41,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V3,32,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l14;     /*QU0(V12,X,J)*/
J=pile[WZ2]; 
goto l15;
l13:pile[v[22]]=241; pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(241,27,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V78,40,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=jvj+2; 
(*f[1981])( );if(v[102]) goto l14;     /*SPSS0(V80,jvj+2,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=V82; 
(*f[64])( );     /*SRA2(V85,V82,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=MX; pile[WZ1]=V83; 
(*f[99])( );     /*SPM0(MX,V83,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V81,41,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V79,32,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V84; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l14;     /*QU0(V84,X,J)*/
J=pile[WZ2]; 
goto l15;
}
