#include "dx.h"
void SPY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V3=0,L=0,V114=0,Q=0,V111=0,V108=0,V109=0,V112=0,V105=0,V106=0,V107=0,V103=0,V104=0,V102=0,P=0,V27=0,V26=0,V25=0,V24=0,II=0,V96=0,V97=0,V82=0,V83=0,V85=0,V87=0,V89=0,V90=0,V91=0,V88=0,V86=0,V92=0,V93=0,V84=0,V65=0,V66=0,V67=0,V32=0,V34=0,V37=0,V38=0,V36=0,V40=0,V41=0,V42=0,V39=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V35=0,V33=0,V49=0,V50=0,V52=0,V56=0,V57=0,V58=0,V54=0,V55=0,V53=0,V51=0,V59=0,V60=0,V31=0,J=0,V21=0,V16=0,V9=0,V11=0,V12=0,V10=0,V13=0,V14=0,V8=0,V73=0,V115=0,V116=0,V123=0,V124=0,V125=0,V126=0,V127=0,V128=0,V129=0,V130=0,V131=0,V132=0,V133=0,V135=0,V136=0,V143=0,V144=0,V145=0,V146=0,V147=0,V148=0,V149=0,V150=0,V151=0,V152=0,V153=0,V155=0,V156=0,V163=0,V164=0,V165=0,V166=0,V167=0,V168=0,V169=0,V170=0,V171=0,V172=0,V173=0;
int I,X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=10441;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1983&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V114=I;
x[jvj+2]=x[X] ;z[jvj+2]=z[X];
l1:pile[v[22]]=191; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(191,jvj+2,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,191,68)*/
if((x[jvj+3]==67)) goto l2;
if((x[jvj+3]!=68)) goto l16;
pile[v[22]]=193; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(193,jvj+2,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V114; 
(*f[64])( );     /*SRA2((-843),V114,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=V26; 
(*f[64])( );     /*SRA2(V27,V26,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; 
(*f[1803])( );     /*SPLL0(V25,V24)*/
V24=pile[WZ1]; 
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=193; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(193,jvj+2,V2)*/
V2=pile[WZ2]; 
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
pile[v[22]]=870; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,jvj+4,V4)*/
V4=pile[WZ2]; 
V3=V4-1;
L=0;
l3:if((L>V3)) goto l4;
gardevaleur[L]=250;
L++;
goto l3;
l4:pile[v[22]]=jvj+2; pile[WZ1]=V114; 
(*f[1962])( );     /*SPB0(jvj+2,V114,Q)*/
Q=pile[WZ2]; 
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l7;     /*FNDC2(331,390,V112)*/
V112=pile[WZ2]; 
V108=incon;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+2,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=39)) goto l5;
V111=(-V109);
V108=V111;
l6:pile[v[22]]=(-8066); pile[WZ1]=Q; 
(*f[64])( );     /*SRA2((-8066),Q,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V105,91,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=V106; 
(*f[99])( );     /*SPM0(100,V106,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V107,93,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=V103; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V103,61,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=V108; pile[WZ1]=V104; 
(*f[99])( );     /*SPM0(V108,V104,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=V112; 
(*f[38])( );     /*SPC0(V102,V112,P)*/
P=pile[WZ2]; 
l8:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+2,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=39)) goto l9;
pile[v[22]]=P; 
(*f[2079])( );     /*SPDON0(P,jvj+7,II)*/
II=pile[WZ2]; 
l11:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+2,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=39)) goto l12;
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l12;     /*FNDC2(331,390,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(135,jvj+2,jvj+12)*/
pile[v[22]]=193; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(193,jvj+12,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=134; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(134,jvj+2,jvj+13)*/
pile[v[22]]=jvj+10; pile[WZ1]=II; 
(*f[2077])( );     /*SPR0(jvj+10,II,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=V96; 
(*f[38])( );     /*SPC0(V82,V96,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V83; 
(*f[64])( );     /*SRA2((-2577),V83,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V85,40,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V87; 
(*f[64])( );     /*SRA2((-2491),V87,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V89,91,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=V90; 
(*f[99])( );     /*SPM0(102,V90,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V91,93,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V88,41,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V86,32,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V92; 
(*f[64])( );     /*SRA2((-843),V92,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V97; pile[WZ1]=V93; 
(*f[64])( );     /*SRA2(V97,V93,V84)*/
V84=pile[WZ2]; 
V115=V84+1;
c[v[1]][V84]=59;
V116=V115;
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+10,jvj+27)*/
if((x[jvj+27]!=39)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+10,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+28,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+10,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=(-6047); pile[WZ1]=V116; 
(*f[64])( );     /*SRA2((-6047),V116,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=V124; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V124,47,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=V125; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V125,42,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V126; pile[WZ2]=jvj+29; 
(*f[98])( );     /*SRA3(135,V126,jvj+29,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=V123; pile[WZ1]=V127; 
(*f[99])( );     /*SPM0(V123,V127,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=V128; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V128,40,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=V129; pile[WZ1]=jvj+10; pile[WZ2]=10429; 
(*f[2081])( );     /*SPJ0(V129,jvj+10,10429,V130)*/
V130=pile[WZ3]; 
pile[v[22]]=V130; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V130,41,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V131; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V131,42,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V132,47,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; 
(*f[656])( );     /*SPLN2(V133,J)*/
J=pile[WZ1]; 
l15:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(120,jvj+2,jvj+26)*/
pile[v[22]]=102; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+2,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=39)) goto l17;
pile[v[22]]=jvj+24; pile[WZ1]=J; 
(*f[2080])( );     /*SPRES0(jvj+24,J,V73)*/
V73=pile[WZ2]; 
l17:x[jvj+2]=x[jvj+26] ;z[jvj+2]=z[jvj+26];
V114=0;
goto l1;
l5:V108=V109;
goto l6;
l7:P=Q;
goto l8;
l9:II=P;
goto l11;
l10:pile[v[22]]=134; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(134,jvj+2,jvj+9)*/
l14:pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(135,jvj+2,jvj+21)*/
pile[v[22]]=193; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(193,jvj+21,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=134; pile[WZ1]=jvj+2; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(134,jvj+2,jvj+22)*/
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+2,jvj+23)*/
pile[v[22]]=(-2577); pile[WZ1]=II; 
(*f[64])( );     /*SRA2((-2577),II,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V9,40,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=V11; 
(*f[2077])( );     /*SPR0(jvj+23,V11,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V12,41,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V10,32,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V13; 
(*f[64])( );     /*SRA2((-843),V13,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=V14; 
(*f[64])( );     /*SRA2(V16,V14,V8)*/
V8=pile[WZ2]; 
V155=V8+1;
c[v[1]][V8]=59;
V156=V155;
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+23,jvj+33)*/
if((x[jvj+33]!=39)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+23,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+34,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+23,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=(-6047); pile[WZ1]=V156; 
(*f[64])( );     /*SRA2((-6047),V156,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V164,47,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V165; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V165,42,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V166; pile[WZ2]=jvj+35; 
(*f[98])( );     /*SRA3(135,V166,jvj+35,V167)*/
V167=pile[WZ3]; 
pile[v[22]]=V163; pile[WZ1]=V167; 
(*f[99])( );     /*SPM0(V163,V167,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=V168; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V168,40,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=V169; pile[WZ1]=jvj+23; pile[WZ2]=10429; 
(*f[2081])( );     /*SPJ0(V169,jvj+23,10429,V170)*/
V170=pile[WZ3]; 
pile[v[22]]=V170; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V170,41,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V171,42,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=V172; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V172,47,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=V173; 
(*f[656])( );     /*SPLN2(V173,J)*/
J=pile[WZ1]; 
goto l15;
l12:pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+10,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=44)) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+10,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]==128)) goto l10;
pile[v[22]]=241; pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,27,V65)*/
V65=pile[WZ2]; 
pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,25,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(135,jvj+2,jvj+18)*/
pile[v[22]]=193; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(193,jvj+18,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+10,jvj+19)*/
pile[v[22]]=134; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(134,jvj+2,jvj+20)*/
pile[v[22]]=(-2580); pile[WZ1]=II; 
(*f[64])( );     /*SRA2((-2580),II,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V32,40,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=(-1418); pile[WZ1]=V34; 
(*f[64])( );     /*SRA2((-1418),V34,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V37,61,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=V38; 
(*f[2077])( );     /*SPR0(jvj+16,V38,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V36,59,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=(-1418); pile[WZ1]=V40; 
(*f[64])( );     /*SRA2((-1418),V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=V41; 
(*f[64])( );     /*SRA2(V65,V41,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V42; 
(*f[99])( );     /*SPM0(0,V42,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V39,59,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=(-1418); pile[WZ1]=V43; 
(*f[64])( );     /*SRA2((-1418),V43,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V44,61,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=(-1728); pile[WZ1]=V45; 
(*f[64])( );     /*SRA2((-1728),V45,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V46,91,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=(-1418); pile[WZ1]=V47; 
(*f[64])( );     /*SRA2((-1418),V47,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V48,93,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V35,41,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V33,32,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=(-2577); pile[WZ1]=V49; 
(*f[64])( );     /*SRA2((-2577),V49,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V50,40,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=(-1727); pile[WZ1]=V52; 
(*f[64])( );     /*SRA2((-1727),V52,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V56,91,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=(-1418); pile[WZ1]=V57; 
(*f[64])( );     /*SRA2((-1418),V57,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V58,93,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=V54; 
(*f[64])( );     /*SRA2(V66,V54,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=V55; 
(*f[2077])( );     /*SPR0(jvj+19,V55,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V53,41,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V51,32,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V59; 
(*f[64])( );     /*SRA2((-843),V59,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=V60; 
(*f[64])( );     /*SRA2(V67,V60,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; 
(*f[1803])( );     /*SPLL0(V31,J)*/
J=pile[WZ1]; 
goto l15;
l13:pile[v[22]]=jvj+10; pile[WZ1]=II; 
(*f[2077])( );     /*SPR0(jvj+10,II,V21)*/
V21=pile[WZ2]; 
V135=V21+1;
c[v[1]][V21]=59;
V136=V135;
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+10,jvj+30)*/
if((x[jvj+30]!=39)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+10,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+31,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+10,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=(-6047); pile[WZ1]=V136; 
(*f[64])( );     /*SRA2((-6047),V136,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=V144; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V144,47,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V145; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V145,42,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V146; pile[WZ2]=jvj+32; 
(*f[98])( );     /*SRA3(135,V146,jvj+32,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=V143; pile[WZ1]=V147; 
(*f[99])( );     /*SPM0(V143,V147,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V148,40,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V149; pile[WZ1]=jvj+10; pile[WZ2]=10429; 
(*f[2081])( );     /*SPJ0(V149,jvj+10,10429,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=V150; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V150,41,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V151,42,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=47; 
(*f[38])( );     /*SPC0(V152,47,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=V153; 
(*f[656])( );     /*SPLN2(V153,J)*/
J=pile[WZ1]; 
goto l15;
l18:pile[v[22]]=V116; 
(*f[656])( );     /*SPLN2(V116,J)*/
J=pile[WZ1]; 
goto l15;
l19:pile[v[22]]=V136; 
(*f[656])( );     /*SPLN2(V136,J)*/
J=pile[WZ1]; 
goto l15;
l20:pile[v[22]]=V156; 
(*f[656])( );     /*SPLN2(V156,J)*/
J=pile[WZ1]; 
goto l15;
}
