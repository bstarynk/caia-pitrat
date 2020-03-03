#include "dx.h"
void QDB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,K=0,V1=0,V3=0,V2=0,V5=0,V32=0,V33=0,SS=0,V47=0,V48=0,V58=0,V59=0,V57=0,V89=0,V122=0,V153=0,V155=0,V156=0,V154=0,V160=0,V158=0,V141=0,V142=0,V7=0,V8=0,V9=0,V6=0,V69=0,V66=0,V64=0,V15=0,V16=0,V19=0,V20=0,V21=0,V22=0,V17=0,V18=0,V23=0,V24=0,V13=0,V39=0,V56=0,V42=0,V43=0,V44=0,V45=0,V46=0,V40=0,V140=0,V162=0,V145=0,V146=0,V147=0,V148=0,V149=0,V143=0,V168=0,V169=0,V170=0,V171=0,V166=0,V95=0,S=0,V97=0,V99=0,V75=0,V76=0,V79=0,V80=0,V81=0,V77=0,V78=0,V82=0,V83=0,V73=0,F=0,V102=0,V132=0,V134=0,V136=0,V133=0,V135=0,V105=0,V106=0,V109=0,V111=0,V112=0,V110=0,V113=0,V114=0,V107=0,V108=0,V115=0,V116=0,V103=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=51;
x[jvj+1]=11194;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2070&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V4=0;
K=v[27];
v[2]=v[1];
V1=V4;
v[1]=4;
pile[v[22]]=(-8342); pile[WZ1]=V1; 
(*f[64])( );     /*SRA2((-8342),V1,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=(-2615); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-2615),V3,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V2,0,V5)*/
V5=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V5; pile[WZ1]=1153; pile[WZ2]=5; 
(*f[67])( );     /*SPA0(V5,1153,5)*/
V7=0;
pile[v[22]]=(-8114); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-8114),V7,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=(-4663); pile[WZ1]=V8; 
(*f[64])( );     /*SRA2((-4663),V8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=(-6493); pile[WZ1]=V9; 
(*f[64])( );     /*SRA2((-6493),V9,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; 
(*f[289])( );     /*SPLN1(V6)*/
x[jvj+26]=vo[16];z[jvj+26]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(454,jvj+26,jvj+27)*/
l19:if((x[jvj+27]>0)) goto l20;
pile[v[22]]=498; pile[WZ1]=jvj+26; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(498,jvj+26,jvj+32)*/
if(x[jvj+32]!=26147&&x[jvj+32]!=26169) goto l26;
pile[v[22]]=(-2655); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-2655),V7,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=(-8968); pile[WZ1]=V168; 
(*f[64])( );     /*SRA2((-8968),V168,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=V169; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V169,91,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=5; pile[WZ1]=V170; 
(*f[99])( );     /*SPM0(5,V170,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V171,93,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; 
(*f[289])( );     /*SPLN1(V166)*/
l26:x[jvj+33]=vo[14];z[jvj+33]=vz[14];
pile[v[22]]=678; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(678,jvj+33,jvj+34)*/
l27:if((x[jvj+34]>0)) goto l28;
x[jvj+41]=vo[14];z[jvj+41]=vz[14];
pile[v[22]]=273; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(273,jvj+41,jvj+42)*/
pile[v[22]]=50; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[2125])( );     /*COUPENS0(50,jvj+42,jvj+43)*/
V58=0;
l9:if((x[jvj+43]>0)) goto l10;
pile[v[22]]=5; 
(*f[63])( );     /*SPZ1(5)*/
v[27]=K;
l31:x[jvj+1]=incon; v[0]=jvj; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+46]=x[jvj+5] ;z[jvj+46]=z[jvj+5];
l2:if((x[jvj+46]>0)) goto l3;
x[jvj+45]=x[jvj+2] ;z[jvj+45]=z[jvj+2];
l32:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(250,158,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=128; pile[WZ3]=jvj+31; 
(*f[301])( );     /*TRI11(jvj+44,jvj+45,128,jvj+31)*/
pile[v[22]]=(-5003); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-5003),V7,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=(-789); pile[WZ1]=V15; 
(*f[64])( );     /*SRA2((-789),V15,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=(-2692); pile[WZ1]=V16; 
(*f[64])( );     /*SRA2((-2692),V16,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=jvj+4; 
(*f[1981])( );if(v[102]) goto l24;     /*SPSS0(V19,jvj+4,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V20,91,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V21,32,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V22,93,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V17,61,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V18,123,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=jvj+31; 
(*f[2124])( );     /*QE0(V23,jvj+31,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V24,125,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; 
(*f[289])( );     /*SPLN1(V13)*/
l24:x[jvj+51]=t[x[jvj+51]];
l22:if((x[jvj+51]>0)) goto l23;
pile[v[22]]=688; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(688,jvj+9,V39)*/
V39=pile[WZ2]; 
V47=(-999999);
pile[v[22]]=481; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(481,jvj+9,jvj+10)*/
x[jvj+47]=x[jvj+10] ;z[jvj+47]=z[jvj+10];
l6:if((x[jvj+47]>0)) goto l7;
if((V47==(-999999))) goto l25;
V56=V47+1;
pile[v[22]]=(-789); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-789),V7,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=107; 
(*f[38])( );     /*SPC0(V42,107,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=V43; 
(*f[64])( );     /*SRA2(V69,V43,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V44,91,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V45; 
(*f[99])( );     /*SPM0(V56,V45,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V46,93,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; 
(*f[289])( );     /*SPLN1(V40)*/
l25:pile[v[22]]=750; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(750,jvj+9,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=688; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(688,jvj+9,V153)*/
V153=pile[WZ2]; 
if((V140!=V153)) goto l15;
pile[v[22]]=473; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(473,jvj+9,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=480; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(480,jvj+9,jvj+22)*/
for(i=x[jvj+22],V156=0;i>0;i=t[i],V156++)  ;
V154=V155*V156;
pile[v[22]]=481; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(481,jvj+9,jvj+23)*/
for(i=x[jvj+23],V160=0;i>0;i=t[i],V160++)  ;
V158=V153*V160;
if((V154==V158)) goto l21;
l15:V141=(-999999);
pile[v[22]]=481; pile[WZ1]=jvj+9; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(481,jvj+9,jvj+24)*/
x[jvj+50]=x[jvj+24] ;z[jvj+50]=z[jvj+24];
l16:if((x[jvj+50]>0)) goto l17;
if((V141==(-999999))) goto l21;
V162=V141+1;
pile[v[22]]=(-789); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-789),V7,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(V145,108,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=V146; 
(*f[64])( );     /*SRA2(V69,V146,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=V147; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V147,91,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V162; pile[WZ1]=V148; 
(*f[99])( );     /*SPM0(V162,V148,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V149; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V149,93,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=V143; 
(*f[289])( );     /*SPLN1(V143)*/
pile[v[22]]=jvj+9; pile[WZ1]=1198; pile[WZ2]=V162; 
(*f[43])( );     /*CHGC2(jvj+9,1198,V162)*/
l21:x[jvj+27]=t[x[jvj+27]];
goto l19;
l3:x[jvj+3]=s[x[jvj+46]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+46];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+3)*/
x[jvj+46]=t[x[jvj+46]];
goto l2;
l5:x[jvj+45]=x[jvj+8] ;z[jvj+45]=z[jvj+8];
goto l32;
l7:x[jvj+11]=s[x[jvj+47]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+47];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+11,V48)*/
V48=pile[WZ2]; 
if(V48>V47) V47=V48;
l8:x[jvj+47]=t[x[jvj+47]];
goto l6;
l10:x[jvj+12]=s[x[jvj+43]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+43];
pile[v[22]]=128; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(128,jvj+12,jvj+13)*/
pile[v[22]]=(-789); pile[WZ1]=V58; 
(*f[64])( );     /*SRA2((-789),V58,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=jvj+13; pile[WZ2]=32; pile[WZ3]=21; 
(*f[1804])( );     /*SPE0(V59,jvj+13,32,21,V57)*/
V57=pile[WZ4]; 
pile[v[22]]=V57; 
(*f[289])( );     /*SPLN1(V57)*/
x[jvj+43]=t[x[jvj+43]];
goto l9;
l12:x[jvj+48]=t[x[jvj+48]];
l11:if((x[jvj+48]<=0)) goto l30;
x[jvj+16]=s[x[jvj+48]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+48];
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+16,V89)*/
V89=pile[WZ2]; 
if((V89!=S)) goto l12;
pile[v[22]]=158; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(158,jvj+16,jvj+17)*/
if((x[jvj+17]!=531)) goto l12;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+16,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=951; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(951,jvj+16,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=101; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+16,jvj+40)*/
pile[v[22]]=(-5003); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-5003),V7,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=(-789); pile[WZ1]=V75; 
(*f[64])( );     /*SRA2((-789),V75,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V97; pile[WZ1]=V76; 
(*f[64])( );     /*SRA2(V97,V76,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V79,91,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V80,32,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V81,93,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V77,61,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V78,123,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=jvj+40; pile[WZ2]=V99; 
(*f[2126])( );     /*QF0(V82,jvj+40,V99,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V83,125,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; 
(*f[289])( );     /*SPLN1(V73)*/
l30:F=x[jvj+39];
if(F!=453&&F!=979&&F!=1027) goto l29;
V102=V95;
x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(128,jvj+18,jvj+19)*/
x[jvj+49]=x[jvj+19] ;z[jvj+49]=z[jvj+19];
l13:if((x[jvj+49]<=0)) goto l29;
x[jvj+20]=s[x[jvj+49]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+49];
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+20,V122)*/
V122=pile[WZ2]; 
if((V122!=V102)) goto l14;
pile[v[22]]=158; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+20,jvj+21)*/
if((x[jvj+21]!=F)) goto l14;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+20,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(510,jvj+20,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(515,jvj+20,V136)*/
V136=pile[WZ2]; 
V133=V134+1;
V135=V136+1;
pile[v[22]]=(-5003); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-5003),V7,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=(-789); pile[WZ1]=V105; 
(*f[64])( );     /*SRA2((-789),V105,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=V106; 
(*f[64])( );     /*SRA2(V132,V106,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V109,91,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=V111; 
(*f[99])( );     /*SPM0(V133,V111,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V112; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V112,93,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=V110; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V110,91,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V135; pile[WZ1]=V113; 
(*f[99])( );     /*SPM0(V135,V113,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=V114; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V114,93,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V107,61,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=V108; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V108,123,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=jvj+20; 
(*f[2127])( );     /*QFF0(V115,jvj+20,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V116,125,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; 
(*f[289])( );     /*SPLN1(V103)*/
l29:x[jvj+34]=t[x[jvj+34]];
goto l27;
l14:x[jvj+49]=t[x[jvj+49]];
goto l13;
l17:x[jvj+25]=s[x[jvj+50]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+50];
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+25,V142)*/
V142=pile[WZ2]; 
if(V142>V141) V141=V142;
l18:x[jvj+50]=t[x[jvj+50]];
goto l16;
l20:x[jvj+9]=s[x[jvj+27]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+27];
pile[v[22]]=436; pile[WZ1]=jvj+9; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(436,jvj+9,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+28,V69)*/
V69=pile[WZ2]; 
if((V69==(-8106))) goto l25;
pile[v[22]]=480; pile[WZ1]=jvj+9; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(480,jvj+9,jvj+29)*/
pile[v[22]]=(-789); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-789),V7,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=jvj+29; pile[WZ2]=32; pile[WZ3]=480; 
(*f[1804])( );     /*SPE0(V66,jvj+29,32,480,V64)*/
V64=pile[WZ4]; 
pile[v[22]]=V64; 
(*f[289])( );     /*SPLN1(V64)*/
x[jvj+51]=x[jvj+29] ;z[jvj+51]=z[jvj+29];
goto l22;
l23:x[jvj+4]=s[x[jvj+51]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+51];
pile[v[22]]=489; pile[WZ1]=jvj+4; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(489,jvj+4,jvj+30)*/
if((x[jvj+30]!=0)) goto l24;
x[jvj+45]=incon;
pile[v[22]]=365; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+4,jvj+5)*/
if((x[jvj+5]!=0)) goto l1;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(280,jvj+4,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(164,jvj+4,V33)*/
V33=pile[WZ2]; 
x[jvj+6]=d[29];z[jvj+6]=0;
SS=V32;
l4:if((SS>V33)) goto l5;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=SS; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,SS,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[196])( );     /*PLUF0(jvj+6,jvj+7,jvj+8)*/
SS++;
goto l4;
l28:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=448)) goto l29;
pile[v[22]]=436; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(436,jvj+35,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+37,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+35,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=531)) goto l30;
S=V95;
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(128,jvj+14,jvj+15)*/
x[jvj+48]=x[jvj+15] ;z[jvj+48]=z[jvj+15];
goto l11;
}
