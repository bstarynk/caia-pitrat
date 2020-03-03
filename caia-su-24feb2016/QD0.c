#include "dx.h"
void QD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V85=0,V80=0,V86=0,V67=0,V69=0,V70=0,V71=0,V72=0,V73=0,V68=0,V74=0,V57=0,V58=0,V59=0,V62=0,V60=0,V2=0,V4=0,V3=0,V5=0,V7=0,V9=0,V13=0,V14=0,V15=0,V11=0,V12=0,V10=0,V8=0,V16=0,V17=0,V20=0,V22=0,V23=0,V24=0,V25=0,V21=0,V19=0,V27=0,V28=0,V26=0,V29=0,V30=0,V32=0,V36=0,V37=0,V38=0,V34=0,V35=0,V33=0,V31=0,V39=0,V40=0,V45=0,V46=0,V47=0,V43=0,V44=0,V42=0,V48=0,V50=0,V49=0,V41=0,V18=0,V6=0,V51=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=10459;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2073&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V86=I;
l1:x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(235,jvj+2,jvj+3)*/
if((x[jvj+3]==x[X])) goto l3;
pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(447,jvj+3,jvj+4)*/
if((x[jvj+4]==67)) goto l2;
if((x[jvj+4]!=68)) goto l3;
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,87,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(331,390,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=26; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,26,V59)*/
V59=pile[WZ2]; 
pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,25,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=235; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(235,jvj+3,jvj+9)*/
pile[v[22]]=10524; pile[WZ1]=0; pile[WZ2]=jvj+10; 
(*f[133])( );if(v[102]) goto l3;     /*TLDEBL1(10524,0,jvj+10)*/
pile[v[22]]=246; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(246,jvj+10,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=235; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+2,235,jvj+9)*/
pile[v[22]]=jvj+3; pile[WZ1]=V86; 
(*f[1962])( );     /*SPB0(jvj+3,V86,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V2; 
(*f[64])( );     /*SRA2(V57,V2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=(-6493); pile[WZ1]=V4; 
(*f[64])( );     /*SRA2((-6493),V4,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=V58; 
(*f[38])( );     /*SPC0(V3,V58,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V5; 
(*f[64])( );     /*SRA2((-2577),V5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V7,40,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V9; 
(*f[64])( );     /*SRA2((-2491),V9,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V13,91,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=73; pile[WZ1]=V14; 
(*f[99])( );     /*SPM0(73,V14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V15,93,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=V11; 
(*f[64])( );     /*SRA2(V59,V11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V12; 
(*f[99])( );     /*SPM0(0,V12,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V10,41,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V8,32,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V16,123,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V17,40,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V20; 
(*f[64])( );     /*SRA2((-2532),V20,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V22; 
(*f[64])( );     /*SRA2((-3571),V22,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V23,91,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=V24; 
(*f[99])( );     /*SPM0(V60,V24,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V25,93,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V21,41,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V19,40,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V27,32,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V28,41,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=V58; 
(*f[38])( );     /*SPC0(V26,V58,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V29; 
(*f[64])( );     /*SRA2((-2577),V29,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V30,40,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=(-7268); pile[WZ1]=V32; 
(*f[64])( );     /*SRA2((-7268),V32,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V36,91,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=43; pile[WZ1]=V37; 
(*f[99])( );     /*SPM0(43,V37,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V38,93,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=V34; 
(*f[64])( );     /*SRA2(V62,V34,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=3; pile[WZ1]=V35; 
(*f[99])( );     /*SPM0(3,V35,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V33,41,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V31,32,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V39,123,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V40; 
(*f[64])( );     /*SRA2((-2491),V40,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V45,91,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=145; pile[WZ1]=V46; 
(*f[99])( );     /*SPM0(145,V46,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V47,93,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V43,61,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=1; pile[WZ1]=V44; 
(*f[99])( );     /*SPM0(1,V44,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=V58; 
(*f[38])( );     /*SPC0(V42,V58,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V48; 
(*f[64])( );     /*SRA2((-843),V48,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=3999; pile[WZ1]=V50; 
(*f[64])( );     /*SRA2(3999,V50,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=V58; 
(*f[38])( );     /*SPC0(V49,V58,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V41,125,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; 
(*f[38])( );     /*SPC0(V18,125,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; 
(*f[656])( );     /*SPLN2(V6,V51)*/
V51=pile[WZ1]; 
V86=V51;
goto l1;
l2:pile[v[22]]=241; pile[WZ1]=88; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,88,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+3,jvj+5)*/
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,jvj+5,jvj+6)*/
pile[v[22]]=436; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+7,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=235; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(235,jvj+3,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=235; 
(*f[35])( );     /*CHGC1(jvj+2,235,jvj+8)*/
pile[v[22]]=jvj+3; pile[WZ1]=V86; 
(*f[1962])( );     /*SPB0(jvj+3,V86,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=V67; 
(*f[64])( );     /*SRA2(V85,V67,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=107; 
(*f[38])( );     /*SPC0(V69,107,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=V70; 
(*f[64])( );     /*SRA2(V80,V70,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V71,91,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=jvj+5; 
(*f[1981])( );if(v[102]) goto l3;     /*SPSS0(V72,jvj+5,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V73,93,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; 
(*f[1803])( );     /*SPLL0(V68,V74)*/
V74=pile[WZ1]; 
V86=V74;
goto l1;
l3:J=V86;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
}
