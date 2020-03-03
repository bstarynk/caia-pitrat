#include "dx.h"
void QN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V25=0,V32=0,V33=0,V3=0,V28=0,V1=0,V31=0,V4=0,V6=0,V9=0,V10=0,V8=0,V12=0,V13=0,V14=0,V11=0,V15=0,V16=0,V7=0,V5=0,V17=0,V20=0,V21=0,V22=0,V23=0,V18=0,V19=0,V2=0,V103=0,V104=0,V68=0,V91=0,V92=0,V93=0,V94=0,V95=0,V89=0,V108=0,V109=0,V191=0,V192=0,V193=0,V194=0,V195=0,V69=0,V70=0,V67=0,V73=0,V74=0,V71=0,V124=0,V123=0,V114=0,V116=0,V117=0,V118=0,V119=0,V115=0,V113=0,V121=0,V122=0,V120=0,V111=0,V79=0,V80=0,V81=0,V77=0,V78=0,V75=0,V101=0,V99=0,V105=0,V86=0,V87=0,V84=0,V37=0,V62=0,V63=0,V64=0,V65=0,V40=0,V42=0,V45=0,V46=0,V44=0,V48=0,V49=0,V50=0,V47=0,V51=0,V52=0,V43=0,V41=0,V53=0,V56=0,V57=0,V58=0,V59=0,V54=0,V55=0,V38=0,V188=0,V189=0,V190=0,V183=0,V126=0,V185=0,V127=0,V128=0,V131=0,V134=0,V135=0,V136=0,V132=0,V133=0,V130=0,V138=0,V139=0,V137=0,V140=0,V129=0,V143=0,V146=0,V147=0,V148=0,V144=0,V145=0,V142=0,V150=0,V153=0,V154=0,V155=0,V151=0,V152=0,V149=0,V157=0,V158=0,V156=0,V159=0,V141=0,V161=0,V164=0,V165=0,V166=0,V162=0,V163=0,V167=0,V168=0,V160=0,V170=0,V173=0,V174=0,V175=0,V171=0,V172=0,V176=0,V177=0,V169=0,V179=0,V178=0,V180=0,V125=0;
int I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10351;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1959&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[2070])( );     /*QDB0()*/
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(241,29,V32)*/
V32=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(241,87,V33)*/
V33=pile[WZ2]; 
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(454,jvj+5,jvj+6)*/
V3=0;
l4:if((x[jvj+6]<=0)) goto l6;
x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=436; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,jvj+2,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V28)*/
V28=pile[WZ2]; 
if((V28==(-8106))) goto l5;
pile[v[22]]=688; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(688,jvj+2,V1)*/
V1=pile[WZ2]; 
V24=(-999999);
pile[v[22]]=481; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(481,jvj+2,jvj+3)*/
x[jvj+30]=x[jvj+3] ;z[jvj+30]=z[jvj+3];
l1:if((x[jvj+30]>0)) goto l2;
if((V24==(-999999))) goto l5;
V31=V24+1;
pile[v[22]]=(-2580); pile[WZ1]=V3; 
(*f[64])( );     /*SRA2((-2580),V3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V4,40,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V6; 
(*f[64])( );     /*SRA2((-2581),V6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V9,61,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V10; 
(*f[99])( );     /*SPM0(0,V10,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V8; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V8,59,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V12; 
(*f[64])( );     /*SRA2((-2581),V12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=V13; 
(*f[64])( );     /*SRA2(V32,V13,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=V14; 
(*f[99])( );     /*SPM0(V31,V14,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V11,59,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V15; 
(*f[64])( );     /*SRA2((-2581),V15,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=V16; 
(*f[64])( );     /*SRA2(V33,V16,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V7,41,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V5,32,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=107; 
(*f[38])( );     /*SPC0(V17,107,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=V20; 
(*f[64])( );     /*SRA2(V28,V20,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V21,91,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V22; 
(*f[64])( );     /*SRA2((-2581),V22,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V23,93,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V18,61,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V19; 
(*f[99])( );     /*SPM0(0,V19,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[289])( );     /*SPLN1(V2)*/
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l2:x[jvj+4]=s[x[jvj+30]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+30];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V25)*/
V25=pile[WZ2]; 
if(V25>V24) V24=V25;
l3:x[jvj+30]=t[x[jvj+30]];
goto l1;
l6:V68=0;
pile[v[22]]=(-4983); pile[WZ1]=V68; 
(*f[64])( );     /*SRA2((-4983),V68,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=V69; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V69,61,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V70; 
(*f[99])( );     /*SPM0(0,V70,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; 
(*f[289])( );     /*SPLN1(V67)*/
pile[v[22]]=(-6493); pile[WZ1]=V68; 
(*f[64])( );     /*SRA2((-6493),V68,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V73,61,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V74; 
(*f[99])( );     /*SPM0(0,V74,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; 
(*f[289])( );     /*SPLN1(V71)*/
if((v[194]<=0)) goto l7;
pile[v[22]]=331; pile[WZ1]=390; 
(*f[219])( );if(v[102]) goto l7;     /*FNDC2(331,390,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=11297; pile[WZ1]=0; pile[WZ2]=jvj+11; 
(*f[133])( );if(v[102]) goto l7;     /*TLDEBL1(11297,0,jvj+11)*/
pile[v[22]]=246; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(246,jvj+11,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V68,40,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V114; 
(*f[64])( );     /*SRA2((-2532),V114,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V116; 
(*f[64])( );     /*SRA2((-3571),V116,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V117,91,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V123; pile[WZ1]=V118; 
(*f[99])( );     /*SPM0(V123,V118,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=V119; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V119,93,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V115,41,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V113,40,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=V121; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V121,32,V122)*/
V122=pile[WZ2]; 
pile[v[22]]=V122; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V122,41,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=V120; pile[WZ1]=V124; 
(*f[38])( );     /*SPC0(V120,V124,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; 
(*f[289])( );     /*SPLN1(V111)*/
l7:pile[v[22]]=(-2491); pile[WZ1]=V68; 
(*f[64])( );     /*SRA2((-2491),V68,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V79,91,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=63; pile[WZ1]=V80; 
(*f[99])( );     /*SPM0(63,V80,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V81,93,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V77,61,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V78; 
(*f[99])( );     /*SPM0(0,V78,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; 
(*f[289])( );     /*SPLN1(V75)*/
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(454,jvj+12,jvj+13)*/
l8:if((x[jvj+13]>0)) goto l9;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=728; pile[WZ1]=jvj+10; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(728,jvj+10,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=1; 
(*f[2071])( );     /*QY0(jvj+18,1)*/
V108=vv[33];
if((V108!=0)) goto l14;
pile[v[22]]=18; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(18,jvj+10,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=18; 
(*f[42])( );     /*SRA1(135,0,18,V191)*/
V191=pile[WZ3]; 
pile[v[22]]=V191; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V191,(-1318),V192)*/
V192=pile[WZ2]; 
pile[v[22]]=V192; pile[WZ1]=(-4349); 
(*f[37])( );     /*SRA0(V192,(-4349),V193)*/
V193=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V193; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V193,262,V194)*/
V194=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V109; pile[WZ2]=V194; 
(*f[39])( );     /*SDX0(41,V109,V194,V195)*/
V195=pile[WZ3]; 
pile[v[22]]=V195; 
(*f[40])( );     /*SLG0(V195)*/
l14:pile[v[22]]=241; pile[WZ1]=326; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,326,V188)*/
V188=pile[WZ2]; 
pile[WZ1]=63; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,63,V189)*/
V189=pile[WZ2]; 
pile[WZ1]=80; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(241,80,V190)*/
V190=pile[WZ2]; 
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=728; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(728,jvj+19,jvj+20)*/
x[jvj+27]=x[jvj+20] ;z[jvj+27]=z[jvj+20];
l17:pile[v[22]]=158; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(158,jvj+27,jvj+28)*/
if((x[jvj+28]!=528)) goto l18;
x[jvj+21]=x[jvj+27] ;z[jvj+21]=z[jvj+27];
pile[v[22]]=218; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(218,jvj+21,jvj+22)*/
pile[v[22]]=110; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(110,jvj+22,V183)*/
V183=pile[WZ2]; 
V126=0;
pile[v[22]]=365; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(365,jvj+22,jvj+23)*/
for(i=x[jvj+23],V185=0;i>0;i=t[i],V185++)  ;
J=0;
pile[v[22]]=V126; 
(*f[1961])( );     /*QK0(V126,V127)*/
V127=pile[WZ1]; 
pile[v[22]]=V127; pile[WZ1]=250; 
(*f[2073])( );     /*QD0(V127,250,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=3998; pile[WZ1]=193; pile[WZ2]=jvj+24; 
(*f[329])( );     /*TRI13(3998,193,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=V128; 
(*f[1962])( );     /*SPB0(jvj+24,V128,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V131; 
(*f[64])( );     /*SRA2((-2491),V131,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V134,91,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=71; pile[WZ1]=V135; 
(*f[99])( );     /*SPM0(71,V135,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=V136; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V136,93,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=V132; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V132,61,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=(-4983); pile[WZ1]=V133; 
(*f[64])( );     /*SRA2((-4983),V133,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V130; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V130,59,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V138; 
(*f[64])( );     /*SRA2((-843),V138,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=3996; pile[WZ1]=V139; 
(*f[64])( );     /*SRA2(3996,V139,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=V137; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V137,59,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=V140; 
(*f[656])( );     /*SPLN2(V140,V129)*/
V129=pile[WZ1]; 
pile[v[22]]=3999; pile[WZ1]=193; pile[WZ2]=jvj+25; 
(*f[329])( );     /*TRI13(3999,193,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=V129; 
(*f[1962])( );     /*SPB0(jvj+25,V129,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V143; 
(*f[64])( );     /*SRA2((-2491),V143,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V146; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V146,91,V147)*/
V147=pile[WZ2]; 
pile[v[22]]=74; pile[WZ1]=V147; 
(*f[99])( );     /*SPM0(74,V147,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=V148; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V148,93,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=V144; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V144,61,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=V183; pile[WZ1]=V145; 
(*f[64])( );     /*SRA2(V183,V145,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=V142; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V142,59,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V150; 
(*f[64])( );     /*SRA2((-2491),V150,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=V153; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V153,91,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=75; pile[WZ1]=V154; 
(*f[99])( );     /*SPM0(75,V154,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=V155; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V155,93,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V151,61,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=V152; 
(*f[99])( );     /*SPM0(V185,V152,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=V149; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V149,59,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=(-843); pile[WZ1]=V157; 
(*f[64])( );     /*SRA2((-843),V157,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=3998; pile[WZ1]=V158; 
(*f[64])( );     /*SRA2(3998,V158,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V156; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V156,59,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=V159; 
(*f[656])( );     /*SPLN2(V159,V141)*/
V141=pile[WZ1]; 
pile[v[22]]=3996; pile[WZ1]=193; pile[WZ2]=jvj+26; 
(*f[329])( );     /*TRI13(3996,193,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=V141; 
(*f[1962])( );     /*SPB0(jvj+26,V141,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V161; 
(*f[64])( );     /*SRA2((-2491),V161,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V164,91,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=77; pile[WZ1]=V165; 
(*f[99])( );     /*SPM0(77,V165,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V166,93,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=V162; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V162,61,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=(-6493); pile[WZ1]=V163; 
(*f[64])( );     /*SRA2((-6493),V163,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=V188; pile[WZ1]=V167; 
(*f[64])( );     /*SRA2(V188,V167,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=10000000; pile[WZ1]=V168; 
(*f[99])( );     /*SPM0(10000000,V168,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V160,59,V170)*/
V170=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V170; 
(*f[64])( );     /*SRA2((-2491),V170,V173)*/
V173=pile[WZ2]; 
pile[v[22]]=V173; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V173,91,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=78; pile[WZ1]=V174; 
(*f[99])( );     /*SPM0(78,V174,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V175,93,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=V171; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V171,61,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=(-6493); pile[WZ1]=V172; 
(*f[64])( );     /*SRA2((-6493),V172,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=V189; pile[WZ1]=V176; 
(*f[64])( );     /*SRA2(V189,V176,V177)*/
V177=pile[WZ2]; 
pile[v[22]]=10000000; pile[WZ1]=V177; 
(*f[99])( );     /*SPM0(10000000,V177,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=V169; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V169,59,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=V179; 
(*f[64])( );     /*SRA2(V190,V179,V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V178,59,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=V180; 
(*f[656])( );     /*SPLN2(V180,V125)*/
V125=pile[WZ1]; 
pile[v[22]]=V125; 
(*f[288])( );     /*SPLN0(V125)*/
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; v[102]=0;return;
l9:x[jvj+8]=s[x[jvj+13]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+13];
pile[v[22]]=688; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(688,jvj+8,V101)*/
V101=pile[WZ2]; 
if((V101!=1)) goto l13;
pile[v[22]]=480; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(480,jvj+8,jvj+14)*/
x[jvj+32]=x[jvj+14] ;z[jvj+32]=z[jvj+14];
l11:if((x[jvj+32]<=0)) goto l13;
x[jvj+9]=s[x[jvj+32]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+32];
pile[v[22]]=489; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(489,jvj+9,jvj+15)*/
for(i=x[jvj+15],V99=0;i>0;i=t[i],V99++)  ;
if((V99!=1)) goto l12;
x[jvj+31]=x[jvj+15] ;z[jvj+31]=z[jvj+15];
if((x[jvj+31]<=0)) goto l12;
x[jvj+16]=s[x[jvj+31]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+31];
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+16,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=jvj+9; 
(*f[1981])( );if(v[102]) goto l12;     /*SPSS0(V68,jvj+9,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V86,61,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=V87; 
(*f[99])( );     /*SPM0(V105,V87,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V84; 
(*f[289])( );     /*SPLN1(V84)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+8,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(241,87,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=V104; pile[WZ1]=V68; 
(*f[64])( );     /*SRA2(V104,V68,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=107; 
(*f[38])( );     /*SPC0(V91,107,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V103; pile[WZ1]=V92; 
(*f[64])( );     /*SRA2(V103,V92,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V93,91,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=jvj+9; 
(*f[1981])( );if(v[102]) goto l12;     /*SPSS0(V94,jvj+9,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=V95; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V95,93,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; 
(*f[289])( );     /*SPLN1(V89)*/
l12:x[jvj+32]=t[x[jvj+32]];
goto l11;
l13:pile[v[22]]=750; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(750,jvj+8,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=1198; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1198,jvj+8,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,29,V63)*/
V63=pile[WZ2]; 
pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(241,87,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(436,jvj+8,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+17,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=(-2580); pile[WZ1]=V68; 
(*f[64])( );     /*SRA2((-2580),V68,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V40,40,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V42; 
(*f[64])( );     /*SRA2((-2581),V42,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V45,61,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V46; 
(*f[99])( );     /*SPM0(0,V46,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V44; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V44,59,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V48; 
(*f[64])( );     /*SRA2((-2581),V48,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=V49; 
(*f[64])( );     /*SRA2(V63,V49,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=V50; 
(*f[99])( );     /*SPM0(V62,V50,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V47,59,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V51; 
(*f[64])( );     /*SRA2((-2581),V51,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=V52; 
(*f[64])( );     /*SRA2(V64,V52,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V43,41,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V41,32,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(V53,108,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=V56; 
(*f[64])( );     /*SRA2(V65,V56,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V57,91,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=(-2581); pile[WZ1]=V58; 
(*f[64])( );     /*SRA2((-2581),V58,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V59,93,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V54,61,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V55; 
(*f[99])( );     /*SPM0(0,V55,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; 
(*f[289])( );     /*SPLN1(V38)*/
l10:x[jvj+13]=t[x[jvj+13]];
goto l8;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l18:pile[v[22]]=728; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(728,jvj+27,jvj+29)*/
x[jvj+27]=x[jvj+29] ;z[jvj+27]=z[jvj+29];
goto l17;
}
