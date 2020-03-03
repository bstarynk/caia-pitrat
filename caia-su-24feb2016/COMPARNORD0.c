#include "dx.h"
void COMPARNORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V10=0,V47=0,V29=0,V35=0,V74=0,V56=0,V62=0,V82=0,V85=0,V91=0,V122=0,V84=0,V83=0,V123=0,V125=0,V126=0,V127=0,V129=0,V131=0,V87=0,V86=0,V132=0,V134=0,V90=0,V114=0,V115=0,V89=0,V136=0,V93=0,V92=0,V137=0,V139=0,V96=0,V118=0,V119=0,V95=0,V98=0,V100=0,V140=0,V141=0,V143=0,V144=0,V146=0,V147=0,V149=0,V150=0,V152=0,V104=0,V158=0,V107=0,V106=0,V159=0,V110=0,V108=0,V154=0,V155=0,V109=0;
int N,NR,UR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=10140;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==426&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NR=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=250; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(250,250,jvj+9)*/
pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(250,250,jvj+10)*/
pile[v[22]]=0; pile[WZ1]=609; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,609,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=0; pile[WZ2]=515; pile[WZ3]=jvj+7; 
(*f[189])( );     /*TRI4(jvj+6,0,515,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ2]=510; pile[WZ3]=jvj+8; 
(*f[189])( );     /*TRI4(jvj+7,0,510,jvj+8)*/
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=459; pile[WZ3]=jvj+10; pile[WZ4]=jvj+8; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(447,jvj+9,459,jvj+10,jvj+8,jvj+5)*/
pile[v[22]]=jvj+2; 
(*f[138])( );if(v[102]) goto l26;     /*EXPPB0(jvj+2)*/
x[jvj+53]=x[jvj+2] ;z[jvj+53]=z[jvj+2];
l1:if((x[jvj+53]<=0)) goto l26;
x[jvj+11]=s[x[jvj+53]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+53];
pile[v[22]]=109; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+11,jvj+12)*/
pile[v[22]]=983; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(983,jvj+12,jvj+13)*/
pile[v[22]]=878; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(878,jvj+13,jvj+14)*/
l5:if((x[jvj+14]<=0)) goto l2;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(163,jvj+15,V11)*/
V11=pile[WZ2]; 
pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(163,jvj+11,V10)*/
V10=pile[WZ2]; 
if((V11==V10)) goto l6;
x[jvj+14]=t[x[jvj+14]];
goto l5;
l6:x[jvj+54]=x[jvj+15] ;z[jvj+54]=z[jvj+15];
x[jvj+16]=x[jvj+54] ;z[jvj+16]=z[jvj+54];
pile[v[22]]=944; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(944,jvj+16,jvj+17)*/
l7:if((x[jvj+17]>0)) goto l12;
pile[v[22]]=944; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(944,jvj+16,jvj+18)*/
l8:if((x[jvj+18]>0)) goto l14;
pile[v[22]]=944; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(944,jvj+16,jvj+19)*/
l9:if((x[jvj+19]>0)) goto l10;
l2:x[jvj+53]=t[x[jvj+53]];
goto l1;
l10:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=683; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(683,jvj+20,V47)*/
V47=pile[WZ2]; 
if((V47!=N)) goto l13;
pile[v[22]]=1078; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1078,jvj+20,jvj+21)*/
pile[v[22]]=860; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(860,jvj+21,jvj+22)*/
if((x[jvj+22]!=530)) goto l13;
x[jvj+3]=x[jvj+20] ;z[jvj+3]=z[jvj+20];
l16:pile[v[22]]=944; pile[WZ1]=jvj+16; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(944,jvj+16,jvj+31)*/
l17:if((x[jvj+31]>0)) goto l22;
pile[v[22]]=944; pile[WZ1]=jvj+16; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(944,jvj+16,jvj+32)*/
l18:if((x[jvj+32]>0)) goto l24;
pile[v[22]]=944; pile[WZ1]=jvj+16; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(944,jvj+16,jvj+33)*/
l19:if((x[jvj+33]>0)) goto l20;
goto l2;
l11:x[jvj+17]=t[x[jvj+17]];
goto l7;
l12:x[jvj+23]=s[x[jvj+17]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+17];
pile[v[22]]=683; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+23,V29)*/
V29=pile[WZ2]; 
if((V29!=N)) goto l11;
pile[v[22]]=935; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(935,jvj+23,jvj+24)*/
if((x[jvj+24]!=547)) goto l11;
pile[v[22]]=1078; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1078,jvj+23,jvj+25)*/
pile[v[22]]=860; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(860,jvj+25,jvj+26)*/
if((x[jvj+26]!=530)) goto l11;
x[jvj+3]=x[jvj+23] ;z[jvj+3]=z[jvj+23];
goto l16;
l13:x[jvj+19]=t[x[jvj+19]];
goto l9;
l14:x[jvj+27]=s[x[jvj+18]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+18];
pile[v[22]]=683; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(683,jvj+27,V35)*/
V35=pile[WZ2]; 
if((V35!=N)) goto l15;
pile[v[22]]=1078; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1078,jvj+27,jvj+28)*/
pile[v[22]]=860; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(860,jvj+28,jvj+29)*/
if((x[jvj+29]!=530)) goto l15;
pile[v[22]]=935; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(935,jvj+27,jvj+30)*/
if(x[jvj+30]!=936&&x[jvj+30]!=493) goto l15;
x[jvj+3]=x[jvj+27] ;z[jvj+3]=z[jvj+27];
l15:x[jvj+18]=t[x[jvj+18]];
goto l8;
l20:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(683,jvj+34,V74)*/
V74=pile[WZ2]; 
if((V74!=NR)) goto l23;
pile[v[22]]=1078; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1078,jvj+34,jvj+35)*/
pile[v[22]]=860; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(860,jvj+35,jvj+36)*/
if((x[jvj+36]!=530)) goto l23;
x[jvj+4]=x[jvj+34] ;z[jvj+4]=z[jvj+34];
l3:pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[787])( );     /*COMPB0(jvj+3,jvj+4,jvj+5)*/
goto l2;
l21:x[jvj+31]=t[x[jvj+31]];
goto l17;
l22:x[jvj+37]=s[x[jvj+31]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+31];
pile[v[22]]=683; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(683,jvj+37,V56)*/
V56=pile[WZ2]; 
if((V56!=NR)) goto l21;
pile[v[22]]=935; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(935,jvj+37,jvj+38)*/
if((x[jvj+38]!=547)) goto l21;
pile[v[22]]=1078; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1078,jvj+37,jvj+39)*/
pile[v[22]]=860; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(860,jvj+39,jvj+40)*/
if((x[jvj+40]!=530)) goto l21;
x[jvj+4]=x[jvj+37] ;z[jvj+4]=z[jvj+37];
goto l3;
l23:x[jvj+33]=t[x[jvj+33]];
goto l19;
l24:x[jvj+41]=s[x[jvj+32]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+32];
pile[v[22]]=683; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(683,jvj+41,V62)*/
V62=pile[WZ2]; 
if((V62!=NR)) goto l25;
pile[v[22]]=1078; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1078,jvj+41,jvj+42)*/
pile[v[22]]=860; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(860,jvj+42,jvj+43)*/
if((x[jvj+43]!=530)) goto l25;
pile[v[22]]=935; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(935,jvj+41,jvj+44)*/
if(x[jvj+44]!=936&&x[jvj+44]!=493) goto l25;
x[jvj+4]=x[jvj+41] ;z[jvj+4]=z[jvj+41];
l25:x[jvj+32]=t[x[jvj+32]];
goto l18;
l26:pile[v[22]]=609; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(609,jvj+5,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,jvj+5,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(515,jvj+5,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V82; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V82,0,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V122,(-2986),V84)*/
V84=pile[WZ2]; 
V83=incon;
if((V82>1)) goto l44;
V83=V84;
l27:pile[v[22]]=V83; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V83,(-9813),V123)*/
V123=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V123; 
(*f[39])( );     /*SDX0(41,N,V123,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V125,61,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=V126; 
(*f[38])( );     /*SPC0(V126,61,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=V127; pile[WZ1]=NR; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V127,NR,41,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; 
(*f[40])( );     /*SLG0(V129)*/
pile[v[22]]=41; pile[WZ1]=V85; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V85,0,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=V131; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V131,(-2986),V87)*/
V87=pile[WZ2]; 
V86=incon;
if((V85>1)) goto l43;
V86=V87;
l28:pile[v[22]]=V86; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V86,(-9813),V132)*/
V132=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V132; 
(*f[39])( );     /*SDX0(41,N,V132,V134)*/
V134=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V134; pile[WZ2]=586; 
(*f[42])( );     /*SRA1(135,V134,586,V90)*/
V90=pile[WZ3]; 
V89=incon;
if((V85<=0)) goto l42;
pile[v[22]]=578; pile[WZ1]=jvj+5; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(578,jvj+5,jvj+45)*/
pile[v[22]]=V90; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V90,91,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V114; pile[WZ1]=jvj+45; 
(*f[789])( );if(v[102]) goto l42;     /*SORENSNOMPB0(V114,jvj+45,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V115,93,V89)*/
V89=pile[WZ2]; 
l29:pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
pile[v[22]]=41; pile[WZ1]=V91; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V91,0,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V136,(-2986),V93)*/
V93=pile[WZ2]; 
V92=incon;
if((V91>1)) goto l41;
V92=V93;
l30:pile[v[22]]=V92; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V92,(-9813),V137)*/
V137=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NR; pile[WZ2]=V137; 
(*f[39])( );     /*SDX0(41,NR,V137,V139)*/
V139=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V139; pile[WZ2]=586; 
(*f[42])( );     /*SRA1(135,V139,586,V96)*/
V96=pile[WZ3]; 
V95=incon;
if((V91<=0)) goto l40;
pile[v[22]]=256; pile[WZ1]=jvj+5; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(256,jvj+5,jvj+46)*/
pile[v[22]]=V96; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V96,91,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=jvj+46; 
(*f[789])( );if(v[102]) goto l40;     /*SORENSNOMPB0(V118,jvj+46,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V119,93,V95)*/
V95=pile[WZ2]; 
l31:pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
l32:pile[v[22]]=447; pile[WZ1]=jvj+5; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(447,jvj+5,jvj+47)*/
pile[v[22]]=459; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(459,jvj+5,jvj+48)*/
x[jvj+51]=x[jvj+47] ;z[jvj+51]=z[jvj+47];
x[jvj+49]=d[41];z[jvj+49]=0;
l33:if((x[jvj+49]<=0)) goto l35;
x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(jvj+50,jvj+48,V98)*/
V98=pile[WZ2]; 
pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(jvj+50,jvj+51,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+50; 
(*f[42])( );     /*SRA1(135,0,jvj+50,V140)*/
V140=pile[WZ3]; 
pile[WZ1]=V140; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V140,301,V141)*/
V141=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V100; pile[WZ2]=V141; 
(*f[39])( );     /*SDX0(41,V100,V141,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=V143; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V143,(-9543),V144)*/
V144=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V144; 
(*f[39])( );     /*SDX0(41,N,V144,V146)*/
V146=pile[WZ3]; 
pile[v[22]]=V146; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V146,59,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V98; pile[WZ2]=V147; 
(*f[39])( );     /*SDX0(41,V98,V147,V149)*/
V149=pile[WZ3]; 
pile[v[22]]=V149; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V149,(-9543),V150)*/
V150=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NR; pile[WZ2]=V150; 
(*f[39])( );     /*SDX0(41,NR,V150,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; 
(*f[40])( );     /*SLG0(V152)*/
l34:x[jvj+49]=t[x[jvj+49]];
goto l33;
l35:pile[v[22]]=258; pile[WZ1]=jvj+5; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(258,jvj+5,jvj+52)*/
for(i=x[jvj+52],V104=0;i>0;i=t[i],V104++)  ;
pile[v[22]]=41; pile[WZ1]=V104; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V104,0,V158)*/
V158=pile[WZ3]; 
pile[v[22]]=V158; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V158,(-2986),V107)*/
V107=pile[WZ2]; 
V106=incon;
if((V104>1)) goto l39;
V106=V107;
l36:pile[v[22]]=V106; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V106,(-9813),V159)*/
V159=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V159; pile[WZ2]=974; 
(*f[42])( );     /*SRA1(135,V159,974,V110)*/
V110=pile[WZ3]; 
V109=incon;
pile[v[22]]=610; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(610,jvj+5,V108)*/
V108=pile[WZ2]; 
if((V108<=0)) goto l38;
pile[v[22]]=V110; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V110,91,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=V154; pile[WZ1]=jvj+52; 
(*f[789])( );if(v[102]) goto l38;     /*SORENSNOMPB0(V154,jvj+52,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V155,93,V109)*/
V109=pile[WZ2]; 
l37:pile[v[22]]=V109; 
(*f[40])( );     /*SLG0(V109)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l38:V109=V110;
goto l37;
l39:pile[v[22]]=V107; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V107,83,V106)*/
V106=pile[WZ2]; 
goto l36;
l40:V95=V96;
goto l31;
l41:pile[v[22]]=V93; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V93,83,V92)*/
V92=pile[WZ2]; 
goto l30;
l42:V89=V90;
goto l29;
l43:pile[v[22]]=V87; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V87,83,V86)*/
V86=pile[WZ2]; 
goto l28;
l44:pile[v[22]]=V84; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V84,83,V83)*/
V83=pile[WZ2]; 
goto l27;
}
