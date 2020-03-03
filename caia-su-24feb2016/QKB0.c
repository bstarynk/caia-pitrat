#include "dx.h"
void QKB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M=0,S=0,V108=0,V208=0,V207=0,V121=0,V112=0,V114=0,V115=0,V116=0,V117=0,V113=0,V111=0,V119=0,V120=0,V118=0,V109=0,K=0,L=0,V93=0,Q=0,V105=0,V104=0,V88=0,V87=0,V79=0,V81=0,V82=0,V80=0,V83=0,V48=0,V55=0,V56=0,V57=0,V14=0,V16=0,V19=0,V20=0,V18=0,V22=0,V23=0,V24=0,V21=0,V25=0,V26=0,V17=0,V15=0,V27=0,V28=0,V29=0,V31=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V32=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V30=0,V13=0,V107=0,V201=0,V200=0,V209=0,V210=0,V211=0,V219=0,V213=0,V124=0,V126=0,V129=0,V130=0,V128=0,V132=0,V134=0,V135=0,V136=0,V138=0,V140=0,V141=0,V142=0,V139=0,V137=0,V143=0,V144=0,V133=0,V145=0,V146=0,V147=0,V131=0,V148=0,V149=0,V127=0,V125=0,V150=0,V151=0,V152=0,V154=0,V156=0,V157=0,V155=0,V158=0,V160=0,V161=0,V159=0,V162=0,V164=0,V165=0,V163=0,V166=0,V168=0,V169=0,V167=0,V170=0,V172=0,V173=0,V174=0,V175=0,V177=0,V178=0,V176=0,V179=0,V180=0,V171=0,V181=0,V182=0,V183=0,V184=0,V185=0,V186=0,V188=0,V189=0,V191=0,V192=0,V190=0,V193=0,V194=0,V187=0,V153=0,V123=0,VV=0,V63=0,V64=0,V62=0,V65=0,V66=0,V67=0,V68=0,V69=0;
int I;
int J,R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=11195;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2074&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=S=x[R]=K=VV=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=728; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(728,jvj+2,jvj+3)*/
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+4]!=528)) goto l2;
pile[v[22]]=I; 
(*f[2129])( );     /*QC0(I,M)*/
M=pile[WZ1]; 
l3:pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+3,jvj+5)*/
if((x[jvj+5]!=528)) goto l5;
pile[v[22]]=M; 
(*f[2130])( );if(v[102]) goto l5;     /*COUPECOMB0(M,J)*/
J=pile[WZ1]; 
S=68;
l8:pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,jvj+3,jvj+13)*/
if((x[jvj+13]==221)) goto l9;
if((x[jvj+13]!=326)) goto l10;
pile[v[22]]=613; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(613,jvj+3,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=208; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,208,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ2]=jvj+14; pile[WZ3]=jvj+16; 
(*f[2141])( );if(v[102]) goto l10;     /*QLL0(jvj+15,208,jvj+14,jvj+16)*/
pile[v[22]]=M; pile[WZ1]=jvj+14; 
(*f[2079])( );     /*SPDON0(M,jvj+14,L)*/
L=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=L; 
(*f[2077])( );     /*SPR0(jvj+16,L,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; 
(*f[1803])( );     /*SPLL0(V93,Q)*/
Q=pile[WZ1]; 
pile[v[22]]=jvj+14; pile[WZ1]=Q; 
(*f[2080])( );     /*SPRES0(jvj+14,Q,K)*/
K=pile[WZ2]; 
l10:if(J==incon) goto l11;
l19:pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,jvj+3,jvj+27)*/
pile[v[22]]=498; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(498,jvj+27,jvj+28)*/
pile[v[22]]=436; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(436,jvj+28,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+29,VV)*/
VV=pile[WZ2]; 
l20:if(x[R]==incon) goto l21;
l25:if(J==incon) goto l26;
l31:if(x[R]==incon) goto l32;
l33:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+1]=J; return;
l1:pile[v[22]]=I; 
(*f[2129])( );     /*QC0(I,M)*/
M=pile[WZ1]; 
pile[v[22]]=M; 
(*f[2131])( );if(v[102]) goto l30;     /*QKBB0(M,J)*/
J=pile[WZ1]; 
l32:x[R]=67 ;z[R]=67;
goto l33;
l2:M=I;
goto l3;
l5:pile[v[22]]=728; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(728,jvj+3,jvj+7)*/
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=jvj+8; pile[WZ1]=728; 
(*f[35])( );     /*CHGC1(jvj+8,728,jvj+7)*/
l4:pile[v[22]]=728; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(728,jvj+3,jvj+6)*/
goto l8;
l6:x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=728; pile[WZ1]=jvj+9; 
(*f[71])( );     /*ENLV0(728,jvj+9)*/
goto l8;
l7:pile[v[22]]=191; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(191,jvj+10,jvj+11)*/
if((x[jvj+11]==68)) goto l13;
l12:V88=vv[7];
V87=V88+1;
x[R]=68 ;z[R]=68;
vv[7]=V87;
pile[v[22]]=(-2577); pile[WZ1]=M; 
(*f[64])( );     /*SRA2((-2577),M,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V79,40,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=jvj+10; pile[WZ2]=201; 
(*f[2138])( );     /*QL0(V81,jvj+10,201,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V82,41,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V80,32,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; pile[WZ1]=jvj+3; 
(*f[2140])( );if(v[102]) goto l13;     /*QU0(V83,jvj+3,J)*/
J=pile[WZ2]; 
l13:if(S==incon) goto l14;
goto l19;
l9:K=M;
goto l10;
l11:pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(158,jvj+3,jvj+17)*/
if((x[jvj+17]!=545)) goto l13;
pile[v[22]]=208; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(208,jvj+3,jvj+10)*/
pile[v[22]]=191; pile[WZ1]=jvj+10; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(191,jvj+10,jvj+18)*/
if((x[jvj+18]!=68)) goto l7;
V105=vv[7];
V104=V105+1;
J=M;
x[R]=68 ;z[R]=68;
vv[7]=V104;
goto l13;
l14:if(J==incon) goto l15;
goto l19;
l15:if((v[194]!=0)) goto l16;
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+3,jvj+19)*/
if((x[jvj+19]!=528)) goto l16;
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(235,jvj+20,jvj+21)*/
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,jvj+3,jvj+22)*/
pile[v[22]]=110; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(110,jvj+22,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=949; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(949,jvj+3,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,29,V56)*/
V56=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,87,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=68; 
(*f[2132])( );     /*QB0(jvj+22,68)*/
pile[v[22]]=jvj+20; pile[WZ1]=1304; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+20,1304,jvj+22)*/
pile[WZ1]=1279; 
(*f[36])( );     /*PLUSC0(jvj+20,1279,jvj+22)*/
pile[v[22]]=(-2580); pile[WZ1]=M; 
(*f[64])( );     /*SRA2((-2580),M,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V14,40,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=V16; 
(*f[64])( );     /*SRA2(V48,V16,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V19,61,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V20; 
(*f[99])( );     /*SPM0(0,V20,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V18,59,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=V22; 
(*f[64])( );     /*SRA2(V48,V22,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=V23; 
(*f[64])( );     /*SRA2(V56,V23,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=V24; 
(*f[99])( );     /*SPM0(V55,V24,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V21,59,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=V25; 
(*f[64])( );     /*SRA2(V48,V25,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=V26; 
(*f[64])( );     /*SRA2(V57,V26,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V17,41,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=V15; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V15,32,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; 
(*f[656])( );     /*SPLN2(V27,V28)*/
V28=pile[WZ1]; 
pile[v[22]]=V28; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V28,123,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=jvj+3; 
(*f[2133])( );     /*QS0(V29,jvj+3,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=jvj+22; 
(*f[1981])( );if(v[102]) goto l16;     /*SPSS0(V31,jvj+22,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V33,61,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=110; 
(*f[38])( );     /*SPC0(V34,110,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=jvj+22; 
(*f[1981])( );if(v[102]) goto l16;     /*SPSS0(V35,jvj+22,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V36,91,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=V37; 
(*f[64])( );     /*SRA2(V48,V37,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V38,93,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; 
(*f[1803])( );     /*SPLL0(V32,V39)*/
V39=pile[WZ1]; 
pile[v[22]]=V39; pile[WZ1]=jvj+3; 
(*f[2134])( );     /*QH0(V39,jvj+3,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; 
(*f[2135])( );     /*QX0(V40,jvj+3,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; 
(*f[2136])( );     /*QP0(V41,jvj+3,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=jvj+22; 
(*f[2137])( );     /*QA0(V42,jvj+22,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; 
(*f[1961])( );     /*QK0(V43,V44)*/
V44=pile[WZ1]; 
pile[v[22]]=V44; pile[WZ1]=jvj+21; 
(*f[2073])( );     /*QD0(V44,jvj+21,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V30,125,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; 
(*f[656])( );     /*SPLN2(V13,J)*/
J=pile[WZ1]; 
goto l19;
l16:if((v[194]<=0)) goto l19;
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(158,jvj+3,jvj+23)*/
if((x[jvj+23]!=528)) goto l19;
x[jvj+24]=vo[14];z[jvj+24]=vz[14];
pile[v[22]]=235; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(235,jvj+24,jvj+25)*/
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+3,jvj+26)*/
pile[v[22]]=110; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(110,jvj+26,V107)*/
V107=pile[WZ2]; 
V201=V107;
V200=V201-1;
pile[v[22]]=949; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(949,jvj+3,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,29,V210)*/
V210=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,87,V211)*/
V211=pile[WZ2]; 
pile[WZ1]=88; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(241,88,V219)*/
V219=pile[WZ2]; 
V121=0;
V213=V200%8;
if((M<=0)) goto l17;
pile[v[22]]=M; 
(*f[656])( );     /*SPLN2(M,V108)*/
V108=pile[WZ1]; 
l17:pile[v[22]]=jvj+26; pile[WZ1]=68; 
(*f[2132])( );     /*QB0(jvj+26,68)*/
if((V200<=0)) goto l18;
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l18;     /*FNDC2(331,390,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=11298; pile[WZ1]=0; pile[WZ2]=jvj+12; 
(*f[133])( );if(v[102]) goto l18;     /*TLDEBL1(11298,0,jvj+12)*/
pile[v[22]]=246; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(246,jvj+12,V207)*/
V207=pile[WZ2]; 
pile[v[22]]=V121; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V121,40,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V112; 
(*f[64])( );     /*SRA2((-2532),V112,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V114; 
(*f[64])( );     /*SRA2((-3571),V114,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V115,91,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V207; pile[WZ1]=V116; 
(*f[99])( );     /*SPM0(V207,V116,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V117,93,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V113,41,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V111,40,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V119,32,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=V120; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V120,41,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=V208; 
(*f[38])( );     /*SPC0(V118,V208,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; 
(*f[289])( );     /*SPLN1(V109)*/
l18:pile[v[22]]=jvj+24; pile[WZ1]=1304; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+24,1304,jvj+26)*/
pile[WZ1]=1279; 
(*f[36])( );     /*PLUSC0(jvj+24,1279,jvj+26)*/
pile[v[22]]=(-2580); pile[WZ1]=V121; 
(*f[64])( );     /*SRA2((-2580),V121,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=V124; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V124,40,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=V126; 
(*f[64])( );     /*SRA2(V107,V126,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=V129; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V129,61,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V130; 
(*f[99])( );     /*SPM0(0,V130,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=V128; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V128,59,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=(-8964); pile[WZ1]=V132; 
(*f[64])( );     /*SRA2((-8964),V132,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V134,61,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=(-9055); pile[WZ1]=V135; 
(*f[64])( );     /*SRA2((-9055),V135,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=V136; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V136,91,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=(-2692); pile[WZ1]=V138; 
(*f[64])( );     /*SRA2((-2692),V138,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=V140; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V140,91,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=V200; pile[WZ1]=V141; 
(*f[99])( );     /*SPM0(V200,V141,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=V142; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V142,93,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=V139; 
(*f[38])( );     /*SPC0(V139,93,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=V137; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V137,91,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=V143; 
(*f[64])( );     /*SRA2(V107,V143,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=V144; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V144,93,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V133,44,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=V145; 
(*f[64])( );     /*SRA2(V107,V145,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V210; pile[WZ1]=V146; 
(*f[64])( );     /*SRA2(V210,V146,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=V209; pile[WZ1]=V147; 
(*f[99])( );     /*SPM0(V209,V147,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V131; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V131,59,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=V148; 
(*f[64])( );     /*SRA2(V107,V148,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=V149; 
(*f[64])( );     /*SRA2(V211,V149,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=V127; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V127,41,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=V125; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V125,32,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=V150; 
(*f[656])( );     /*SPLN2(V150,V151)*/
V151=pile[WZ1]; 
pile[v[22]]=V151; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V151,123,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=jvj+3; 
(*f[2133])( );     /*QS0(V152,jvj+3,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=V154; pile[WZ1]=jvj+26; 
(*f[1981])( );if(v[102]) goto l19;     /*SPSS0(V154,jvj+26,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V156; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V156,61,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=(-8964); pile[WZ1]=V157; 
(*f[64])( );     /*SRA2((-8964),V157,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; 
(*f[1803])( );     /*SPLL0(V155,V158)*/
V158=pile[WZ1]; 
pile[v[22]]=(-9067); pile[WZ1]=V158; 
(*f[64])( );     /*SRA2((-9067),V158,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V160,61,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=V161; 
(*f[64])( );     /*SRA2(V107,V161,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=V159; 
(*f[1803])( );     /*SPLL0(V159,V162)*/
V162=pile[WZ1]; 
pile[v[22]]=(-9059); pile[WZ1]=V162; 
(*f[64])( );     /*SRA2((-9059),V162,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V164,61,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V200; pile[WZ1]=V165; 
(*f[99])( );     /*SPM0(V200,V165,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=V163; 
(*f[1803])( );     /*SPLL0(V163,V166)*/
V166=pile[WZ1]; 
pile[v[22]]=(-9057); pile[WZ1]=V166; 
(*f[64])( );     /*SRA2((-9057),V166,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=V168; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V168,61,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=V169; 
(*f[99])( );     /*SPM0(V213,V169,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V167; 
(*f[1803])( );     /*SPLL0(V167,V170)*/
V170=pile[WZ1]; 
pile[v[22]]=(-9064); pile[WZ1]=V170; 
(*f[64])( );     /*SRA2((-9064),V170,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=V172; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V172,61,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=V211; pile[WZ1]=V173; 
(*f[64])( );     /*SRA2(V211,V173,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=(-9056); pile[WZ1]=V174; 
(*f[64])( );     /*SRA2((-9056),V174,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V175,91,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=(-8964); pile[WZ1]=V177; 
(*f[64])( );     /*SRA2((-8964),V177,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V178,93,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=V176; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V176,91,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=V179; 
(*f[99])( );     /*SPM0(V213,V179,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=V180; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V180,93,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; 
(*f[1803])( );     /*SPLL0(V171,V181)*/
V181=pile[WZ1]; 
pile[v[22]]=V181; pile[WZ1]=jvj+3; 
(*f[2134])( );     /*QH0(V181,jvj+3,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=V182; 
(*f[2135])( );     /*QX0(V182,jvj+3,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=V183; pile[WZ1]=jvj+26; 
(*f[2137])( );     /*QA0(V183,jvj+26,V184)*/
V184=pile[WZ2]; 
pile[v[22]]=V184; 
(*f[1961])( );     /*QK0(V184,V185)*/
V185=pile[WZ1]; 
pile[v[22]]=V185; pile[WZ1]=jvj+25; 
(*f[2073])( );     /*QD0(V185,jvj+25,V186)*/
V186=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=V186; 
(*f[64])( );     /*SRA2(V219,V186,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=(-9056); pile[WZ1]=V188; 
(*f[64])( );     /*SRA2((-9056),V188,V189)*/
V189=pile[WZ2]; 
pile[v[22]]=V189; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V189,91,V191)*/
V191=pile[WZ2]; 
pile[v[22]]=V191; pile[WZ1]=jvj+26; 
(*f[1981])( );if(v[102]) goto l19;     /*SPSS0(V191,jvj+26,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V192,93,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V190,91,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=V213; pile[WZ1]=V193; 
(*f[99])( );     /*SPM0(V213,V193,V194)*/
V194=pile[WZ2]; 
pile[v[22]]=V194; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V194,93,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; 
(*f[1803])( );     /*SPLL0(V187,V153)*/
V153=pile[WZ1]; 
pile[v[22]]=V153; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V153,125,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V123; 
(*f[656])( );     /*SPLN2(V123,J)*/
J=pile[WZ1]; 
goto l19;
l21:if(J==incon) goto l22;
goto l32;
l22:if(K!=incon) goto l23;
l27:if(VV!=incon) goto l28;
l30:J=M;
goto l31;
l23:if(VV!=incon) goto l24;
goto l30;
l24:if((VV==(-8106))) goto l29;
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(158,jvj+3,jvj+30)*/
if(x[jvj+30]!=221&&x[jvj+30]!=326) goto l30;
pile[v[22]]=208; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(208,jvj+3,jvj+31)*/
x[jvj+32]=vo[14];z[jvj+32]=vz[14];
pile[v[22]]=jvj+32; pile[WZ1]=1304; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+32,1304,jvj+27)*/
x[R]=68 ;z[R]=68;
pile[v[22]]=K; pile[WZ1]=jvj+27; 
(*f[1981])( );if(v[102]) goto l30;     /*SPSS0(K,jvj+27,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V63,61,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=jvj+31; pile[WZ2]=365; 
(*f[2138])( );     /*QL0(V64,jvj+31,365,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[1803])( );     /*SPLL0(V62,V65)*/
V65=pile[WZ1]; 
pile[v[22]]=V65; pile[WZ1]=jvj+3; 
(*f[2139])( );     /*QJ0(V65,jvj+3,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; 
(*f[2134])( );     /*QH0(V66,jvj+3,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; 
(*f[2136])( );     /*QP0(V67,jvj+3,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=jvj+27; 
(*f[2137])( );     /*QA0(V68,jvj+27,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=jvj+3; 
(*f[2135])( );     /*QX0(V69,jvj+3,J)*/
J=pile[WZ2]; 
pile[v[22]]=jvj+32; pile[WZ1]=1279; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+32,1279,jvj+27)*/
goto l33;
l26:if(x[R]==incon) goto l27;
goto l30;
l28:if((VV==(-8106))) goto l29;
goto l30;
l29:pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(158,jvj+3,jvj+33)*/
if((x[jvj+33]!=221)) goto l30;
pile[v[22]]=jvj+3; pile[WZ1]=M; 
(*f[2142])( );     /*SPNBVRAI0(jvj+3,M,J)*/
J=pile[WZ2]; 
x[R]=68 ;z[R]=68;
goto l33;
}
