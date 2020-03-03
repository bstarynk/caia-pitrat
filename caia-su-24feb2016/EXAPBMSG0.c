#include "dx.h"
void EXAPBMSG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V16=0,N=0,V3=0,V17=0,V=0,V6=0,V5=0,V20=0,D=0,V13=0,V12=0,V21=0,V10=0,V9=0,V22=0,C=0,V14=0,V18=0,A=0,V7=0,V36=0,V25=0,V184=0,V185=0,V186=0,V187=0,V188=0,V26=0,V37=0,VV=0,V29=0,V28=0,V32=0,V39=0,V33=0,V40=0,V38=0,NK=0,V31=0,V192=0,V30=0,V48=0,V50=0,V55=0,V49=0,V53=0,V52=0,V109=0,V64=0,V70=0,V69=0,V110=0,V65=0,V72=0,V234=0,V235=0,V71=0,V111=0,NT=0,V238=0,V239=0,V73=0,V245=0,V242=0,V243=0,V75=0,V114=0,V249=0,V246=0,V247=0,V248=0,V250=0,V251=0,V77=0,V257=0,V254=0,V255=0,V79=0,V118=0,V119=0,GG=0,V261=0,V84=0,V258=0,V259=0,V260=0,V262=0,V263=0,V264=0,V265=0,V267=0,V268=0,V269=0,V83=0,V273=0,V85=0,LL=0,V276=0,V274=0,V275=0,V81=0,V121=0,V277=0,V278=0,V279=0,V280=0,V281=0,V126=0,V127=0,V87=0,V129=0,V130=0,V89=0,V133=0,V92=0,V67=0,V135=0,W=0,V137=0,V93=0,V96=0,V95=0,V98=0,V97=0,V66=0,V139=0,V286=0,V285=0,V287=0,V288=0,V289=0,V291=0,V292=0,V293=0,V295=0,V296=0,V298=0,V299=0,V145=0,V144=0,V100=0,V301=0,V99=0,V102=0,V101=0,V104=0,V103=0,V151=0,V150=0,V306=0,V105=0,V142=0,V143=0,V141=0,V155=0,V154=0,V309=0,V310=0,V311=0,V312=0,V313=0,V315=0,V316=0,V317=0,V319=0,V320=0,V321=0,V323=0,V324=0,V325=0,V327=0,V328=0,V183=0,V34=0,V35=0,V41=0,V42=0,V195=0,NN=0,V196=0,V197=0,V198=0,V200=0,V201=0,V202=0,V203=0,V205=0,V206=0,V207=0,V54=0,V56=0,V59=0,V60=0,V61=0,V211=0,V224=0,V228=0,V212=0,V214=0,V215=0,V217=0,V218=0,V219=0,V220=0,V222=0,V223=0,V225=0,V226=0,V227=0,V229=0,V230=0,V232=0,V158=0,V161=0,V160=0,V165=0,V164=0,V163=0,V332=0,V170=0,V173=0,V336=0,V335=0,V337=0,V339=0,V340=0,V341=0,V361=0,V358=0,V359=0,V360=0;
int G,M,MM,T,K;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=63;
x[jvj+1]=11229;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==848&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
G=pile[v[22]]; M=pile[v[22]+1]; MM=pile[v[22]+2]; T=pile[v[22]+3]; K=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=M; 
(*f[42])( );     /*SRA1(135,0,M,V2)*/
V2=pile[WZ3]; 
V1=incon;
if((x[MM]!=250)) goto l1;
V1=V2;
l2:pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
x[jvj+16]=250 ;z[jvj+16]=250;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(250,158,jvj+22)*/
if((K!=69)) goto l79;
x[jvj+59]=x[G] ;z[jvj+59]=z[G];
l77:if((x[jvj+59]<=0)) goto l79;
x[jvj+37]=s[x[jvj+59]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+59];
pile[v[22]]=447; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(447,jvj+37,jvj+38)*/
pile[v[22]]=218; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(218,jvj+37,jvj+39)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[856])( );     /*SORESSAI1(jvj+38,jvj+39)*/
l78:x[jvj+59]=t[x[jvj+59]];
goto l77;
l1:pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=MM; 
(*f[42])( );     /*SRA1(135,V2,MM,V1)*/
V1=pile[WZ3]; 
goto l2;
l3:V3=0;
l82:V183=x[jvj+40];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+22; 
(*f[1176])( );     /*STOMSG0(jvj+3,jvj+22)*/
pile[v[22]]=20; pile[WZ1]=V183; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(20,V183,V3,V6)*/
V6=pile[WZ3]; 
V5=incon;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+3,V17)*/
V17=pile[WZ2]; 
V=V17;
pile[v[22]]=V6; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V6,V,V5)*/
V5=pile[WZ2]; 
l5:V7=incon;
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+3,V18)*/
V18=pile[WZ2]; 
A=V18;
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,A,V5,V10)*/
V10=pile[WZ3]; 
V9=incon;
x[jvj+52]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,jvj+3,jvj+4)*/
x[jvj+63]=x[jvj+4] ;z[jvj+63]=z[jvj+4];
x[jvj+52]=x[jvj+63] ;z[jvj+52]=z[jvj+63];
l8:x[jvj+5]=x[jvj+52] ;z[jvj+5]=z[jvj+52];
pile[v[22]]=331; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l10;     /*FNDC2(331,jvj+5,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=V21; 
(*f[38])( );     /*SPC0(V10,V21,V13)*/
V13=pile[WZ2]; 
V12=incon;
pile[v[22]]=332; pile[WZ1]=jvj+5; 
(*f[219])( );if(v[102]) goto l7;     /*FNDC2(332,jvj+5,V20)*/
V20=pile[WZ2]; 
D=V20;
pile[v[22]]=V13; pile[WZ1]=D; 
(*f[38])( );     /*SPC0(V13,D,V12)*/
V12=pile[WZ2]; 
l9:V9=V12;
l11:V14=incon;
pile[v[22]]=515; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+3,V22)*/
V22=pile[WZ2]; 
C=V22;
pile[v[22]]=V9; pile[WZ1]=C; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V9,C,41,V14)*/
V14=pile[WZ3]; 
l13:V7=V14;
l83:pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
l81:x[jvj+60]=t[x[jvj+60]];
l80:if((x[jvj+60]<=0)) goto l100;
x[jvj+3]=s[x[jvj+60]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+60];
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(109,jvj+3,jvj+40)*/
V3=incon;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+3,V16)*/
V16=pile[WZ2]; 
N=V16;
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(N,0,42,V3)*/
V3=pile[WZ3]; 
goto l82;
l4:V5=V6;
goto l5;
l6:x[jvj+52]=66 ;z[jvj+52]=66;
goto l8;
l7:V12=V13;
goto l9;
l10:V9=V10;
goto l11;
l12:V14=V9;
goto l13;
l14:V7=V5;
goto l83;
l15:V26=0;
l89:V195=x[jvj+41];
NN=V35;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+22; 
(*f[1176])( );     /*STOMSG0(jvj+6,jvj+22)*/
pile[v[22]]=20; pile[WZ1]=V195; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V195,V26,V29)*/
V29=pile[WZ3]; 
V28=incon;
pile[v[22]]=163; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+6,V37)*/
V37=pile[WZ2]; 
VV=V37;
pile[v[22]]=V29; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V29,VV,V28)*/
V28=pile[WZ2]; 
l90:pile[v[22]]=135; pile[WZ1]=V28; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,V28,493,V196)*/
V196=pile[WZ3]; 
pile[v[22]]=V196; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V196,58,V197)*/
V197=pile[WZ2]; 
pile[v[22]]=V197; pile[WZ1]=V42; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V197,V42,41,V198)*/
V198=pile[WZ3]; 
pile[v[22]]=V198; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V198,44,V200)*/
V200=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V200; pile[WZ2]=936; 
(*f[42])( );     /*SRA1(135,V200,936,V201)*/
V201=pile[WZ3]; 
pile[v[22]]=V201; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V201,58,V202)*/
V202=pile[WZ2]; 
pile[v[22]]=V202; pile[WZ1]=V41; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V202,V41,41,V203)*/
V203=pile[WZ3]; 
pile[v[22]]=V203; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V203,44,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V205; pile[WZ2]=482; 
(*f[42])( );     /*SRA1(135,V205,482,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=V206; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V206,58,V31)*/
V31=pile[WZ2]; 
V30=incon;
pile[v[22]]=1015; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1015,jvj+6,V38)*/
V38=pile[WZ2]; 
V32=incon;
if((NN==0)) goto l17;
V39=10000000/NN;
pile[v[22]]=V39; 
(*f[850])( );if(v[102]) goto l19;     /*LOG0(V39,V33)*/
V33=pile[WZ1]; 
V40=V33/10;
V32=V40;
l18:NK=V38;
pile[v[22]]=V31; pile[WZ1]=NK; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V31,NK,41,V192)*/
V192=pile[WZ3]; 
V361=V192+V32;
V30=V361;
if((V32<=0)) goto l91;
V358=V32-1;
V359=0;
l107:if((V359>V358)) goto l91;
V360=V192+V359;
c[v[1]][V360]=48;
V359++;
goto l107;
l16:V28=V29;
goto l90;
l17:V32=6;
goto l18;
l19:V30=V31;
l91:pile[v[22]]=V30; pile[WZ1]=NN; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V30,NN,41,V207)*/
V207=pile[WZ3]; 
pile[v[22]]=V207; 
(*f[40])( );     /*SLG0(V207)*/
l87:x[jvj+61]=t[x[jvj+61]];
l85:if((x[jvj+61]<=0)) goto l100;
x[jvj+6]=s[x[jvj+61]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+61];
pile[v[22]]=331; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l87;     /*FNDC2(331,jvj+6,V34)*/
V34=pile[WZ2]; 
V25=V34;
if((x[T]==301)) goto l88;
if((V25!=32)) goto l88;
goto l87;
l20:V50=0;
l96:V211=x[jvj+44];
V224=x[jvj+43];
V228=x[jvj+42];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+22; 
(*f[1176])( );     /*STOMSG0(jvj+7,jvj+22)*/
pile[v[22]]=20; pile[WZ1]=V211; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V211,V50,V53)*/
V53=pile[WZ3]; 
V52=incon;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+7,V55)*/
V55=pile[WZ2]; 
V49=V55;
pile[v[22]]=V53; pile[WZ1]=V49; 
(*f[37])( );     /*SRA0(V53,V49,V52)*/
V52=pile[WZ2]; 
l97:pile[v[22]]=41; pile[WZ1]=V61; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(41,V61,V52,V212)*/
V212=pile[WZ3]; 
pile[v[22]]=V212; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(V212,60,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=V214; pile[WZ1]=V60; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V214,V60,41,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=V215; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V215,(-9543),V217)*/
V217=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V217; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V217,683,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V218,58,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=V219; pile[WZ1]=V59; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V219,V59,41,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=V220; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V220,(-9813),V222)*/
V222=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V224; pile[WZ2]=V222; 
(*f[39])( );     /*SDX0(20,V224,V222,V223)*/
V223=pile[WZ3]; 
pile[v[22]]=V223; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V223,(-1410),V225)*/
V225=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V225; pile[WZ2]=67; 
(*f[42])( );     /*SRA1(135,V225,67,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V228; pile[WZ2]=V226; 
(*f[39])( );     /*SDX0(20,V228,V226,V227)*/
V227=pile[WZ3]; 
pile[v[22]]=V227; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V227,40,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=V56; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V229,V56,41,V230)*/
V230=pile[WZ3]; 
pile[v[22]]=V230; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V230,41,V232)*/
V232=pile[WZ2]; 
pile[v[22]]=V232; 
(*f[40])( );     /*SLG0(V232)*/
l94:x[jvj+62]=t[x[jvj+62]];
l92:if((x[jvj+62]<=0)) goto l100;
x[jvj+7]=s[x[jvj+62]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+62];
pile[v[22]]=331; pile[WZ1]=jvj+7; 
(*f[219])( );if(v[102]) goto l94;     /*FNDC2(331,jvj+7,V54)*/
V54=pile[WZ2]; 
V48=V54;
if((x[T]==301)) goto l95;
if((V48!=32)) goto l95;
goto l94;
l21:V52=V53;
goto l97;
l23:x[jvj+8]=s[x[jvj+53]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+53];
pile[v[22]]=109; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(109,jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+9)*/
l24:x[jvj+53]=t[x[jvj+53]];
l22:if((x[jvj+53]>0)) goto l23;
pile[v[22]]=0; pile[WZ1]=610; pile[WZ2]=jvj+50; 
(*f[46])( );     /*TRI0(0,610,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=0; pile[WZ2]=609; pile[WZ3]=jvj+51; 
(*f[189])( );     /*TRI4(jvj+50,0,609,jvj+51)*/
pile[v[22]]=510; pile[WZ2]=515; pile[WZ3]=0; pile[WZ4]=jvj+51; pile[WZ5]=jvj+36; 
(*f[190])( );     /*QUADRI3(510,0,515,0,jvj+51,jvj+36)*/
if((x[T]!=301)) goto l64;
x[jvj+54]=x[G] ;z[jvj+54]=z[G];
l41:if((x[jvj+54]<=0)) goto l64;
x[jvj+11]=s[x[jvj+54]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+54];
pile[v[22]]=683; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(683,jvj+11,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=893; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(893,jvj+11,jvj+19)*/
pile[v[22]]=459; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(459,jvj+11,jvj+20)*/
pile[v[22]]=109; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(109,jvj+11,jvj+21)*/
V277=x[jvj+21];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+22; 
(*f[1176])( );     /*STOMSG0(jvj+11,jvj+22)*/
pile[v[22]]=20; pile[WZ1]=V277; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V277,0,V70)*/
V70=pile[WZ3]; 
V69=incon;
pile[v[22]]=163; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+11,V109)*/
V109=pile[WZ2]; 
V64=V109;
pile[v[22]]=V70; pile[WZ1]=V64; 
(*f[37])( );     /*SRA0(V70,V64,V69)*/
V69=pile[WZ2]; 
l43:pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=jvj+20; 
(*f[42])( );     /*SRA1(135,V69,jvj+20,V278)*/
V278=pile[WZ3]; 
pile[WZ1]=V278; pile[WZ2]=jvj+19; 
(*f[42])( );     /*SRA1(135,V278,jvj+19,V279)*/
V279=pile[WZ3]; 
pile[WZ1]=V279; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V279,683,V280)*/
V280=pile[WZ3]; 
pile[v[22]]=V280; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V280,58,V281)*/
V281=pile[WZ2]; 
pile[v[22]]=V281; pile[WZ1]=V121; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V281,V121,41,V72)*/
V72=pile[WZ3]; 
V71=incon;
pile[v[22]]=359; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(359,jvj+11,V110)*/
V110=pile[WZ2]; 
V65=V110;
pile[v[22]]=V72; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V72,40,V234)*/
V234=pile[WZ2]; 
pile[v[22]]=V234; pile[WZ1]=V65; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V234,V65,41,V235)*/
V235=pile[WZ3]; 
pile[v[22]]=V235; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V235,41,V71)*/
V71=pile[WZ2]; 
l27:V73=incon;
pile[v[22]]=405; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(405,jvj+11,V111)*/
V111=pile[WZ2]; 
NT=V111;
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=405; 
(*f[42])( );     /*SRA1(135,V71,405,V238)*/
V238=pile[WZ3]; 
pile[v[22]]=V238; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V238,58,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=V239; pile[WZ1]=NT; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V239,NT,41,V73)*/
V73=pile[WZ3]; 
l29:V75=incon;
pile[v[22]]=1049; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1049,jvj+11,jvj+12)*/
if((x[jvj+12]!=0)) goto l30;
V75=V73;
l31:V77=incon;
pile[v[22]]=876; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(876,jvj+11,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=1025; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1025,jvj+11,jvj+13)*/
if((x[jvj+13]==0)) goto l32;
V249=x[jvj+13];
pile[v[22]]=135; pile[WZ1]=V75; pile[WZ2]=1025; 
(*f[42])( );     /*SRA1(135,V75,1025,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=V246; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V246,58,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V249; pile[WZ2]=V247; 
(*f[39])( );     /*SDX0(23,V249,V247,V248)*/
V248=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V248; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V248,876,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=V250; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V250,58,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=V251; pile[WZ1]=V114; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V251,V114,41,V77)*/
V77=pile[WZ3]; 
l33:V79=incon;
pile[v[22]]=658; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(658,jvj+11,jvj+14)*/
if((x[jvj+14]!=0)) goto l34;
V79=V77;
l35:V81=incon;
pile[v[22]]=1048; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1048,jvj+16,jvj+18)*/
LL=x[jvj+18];
V276=LL;
pile[v[22]]=V79; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V79,44,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V274; pile[WZ2]=1048; 
(*f[42])( );     /*SRA1(135,V274,1048,V275)*/
V275=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V276; pile[WZ2]=V275; 
(*f[39])( );     /*SDX0(20,V276,V275,V84)*/
V84=pile[WZ3]; 
V83=incon;
pile[v[22]]=447; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(447,jvj+11,jvj+15)*/
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(510,jvj+11,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=876; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(876,jvj+16,V119)*/
V119=pile[WZ2]; 
GG=x[jvj+15];
V261=GG;
pile[v[22]]=V84; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V84,(-1410),V258)*/
V258=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V258; pile[WZ2]=67; 
(*f[42])( );     /*SRA1(135,V258,67,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V261; pile[WZ2]=V259; 
(*f[39])( );     /*SDX0(20,V261,V259,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=V260; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V260,40,V262)*/
V262=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V262; pile[WZ2]=876; 
(*f[98])( );     /*SRA3(135,V262,876,V263)*/
V263=pile[WZ3]; 
pile[v[22]]=V263; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V263,58,V264)*/
V264=pile[WZ2]; 
pile[v[22]]=V264; pile[WZ1]=V119; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V264,V119,41,V265)*/
V265=pile[WZ3]; 
pile[v[22]]=V265; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V265,(-1410),V267)*/
V267=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V267; pile[WZ2]=67; 
(*f[42])( );     /*SRA1(135,V267,67,V268)*/
V268=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V118; pile[WZ2]=V268; 
(*f[39])( );     /*SDX0(41,V118,V268,V269)*/
V269=pile[WZ3]; 
pile[v[22]]=V269; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V269,41,V83)*/
V83=pile[WZ2]; 
l37:V85=incon;
if((x[jvj+10]==0)) goto l38;
pile[v[22]]=195; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(195,jvj+11,jvj+17)*/
if((x[jvj+10]!=x[jvj+17])) goto l38;
V273=x[jvj+10];
pile[v[22]]=23; pile[WZ1]=V273; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(23,V273,V83,V85)*/
V85=pile[WZ3]; 
l39:V81=V85;
l44:pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
l42:x[jvj+54]=t[x[jvj+54]];
goto l41;
l25:V69=V70;
goto l43;
l26:V71=V72;
goto l27;
l28:V73=V71;
goto l29;
l30:V245=x[jvj+12];
pile[v[22]]=135; pile[WZ1]=V73; pile[WZ2]=1049; 
(*f[42])( );     /*SRA1(135,V73,1049,V242)*/
V242=pile[WZ3]; 
pile[v[22]]=V242; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V242,58,V243)*/
V243=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V245; pile[WZ2]=V243; 
(*f[39])( );     /*SDX0(23,V245,V243,V75)*/
V75=pile[WZ3]; 
goto l31;
l32:V77=V75;
goto l33;
l34:V257=x[jvj+14];
pile[v[22]]=135; pile[WZ1]=V77; pile[WZ2]=658; 
(*f[42])( );     /*SRA1(135,V77,658,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=V254; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V254,58,V255)*/
V255=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V257; pile[WZ2]=V255; 
(*f[39])( );     /*SDX0(23,V257,V255,V79)*/
V79=pile[WZ3]; 
goto l35;
l36:V83=V84;
goto l37;
l38:V85=V83;
goto l39;
l40:V81=V79;
goto l44;
l46:x[jvj+23]=s[x[jvj+55]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+55];
pile[v[22]]=109; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(109,jvj+23,jvj+24)*/
if((x[jvj+24]!=V66)) goto l47;
pile[v[22]]=1000; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(1000,jvj+23,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=117; pile[WZ2]=V126; 
(*f[186])( );     /*BTC0(jvj+25,117,V126)*/
l47:x[jvj+55]=t[x[jvj+55]];
l45:if((x[jvj+55]>0)) goto l46;
pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(117,jvj+25,V127)*/
V127=pile[WZ2]; 
V87=V127;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(0,117,jvj+28)*/
x[jvj+56]=x[G] ;z[jvj+56]=z[G];
l48:if((x[jvj+56]>0)) goto l49;
pile[v[22]]=117; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(117,jvj+28,V130)*/
V130=pile[WZ2]; 
V89=V130;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(0,117,jvj+35)*/
l58:if((x[jvj+31]>0)) goto l59;
pile[v[22]]=117; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(117,jvj+35,V137)*/
V137=pile[WZ2]; 
V93=V137;
V286=V66;
pile[v[22]]=20; pile[WZ1]=V286; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V286,0,V285)*/
V285=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V285; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V285,1000,V287)*/
V287=pile[WZ3]; 
pile[v[22]]=V287; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V287,58,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=V288; pile[WZ1]=V87; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V288,V87,41,V289)*/
V289=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V289; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V289,1041,V291)*/
V291=pile[WZ3]; 
pile[v[22]]=V291; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V291,58,V292)*/
V292=pile[WZ2]; 
pile[v[22]]=V292; pile[WZ1]=V89; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V292,V89,41,V293)*/
V293=pile[WZ3]; 
pile[v[22]]=V293; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V293,(-9813),V295)*/
V295=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V93; pile[WZ2]=V295; 
(*f[39])( );     /*SDX0(41,V93,V295,V296)*/
V296=pile[WZ3]; 
pile[v[22]]=V296; pile[WZ1]=(-8405); 
(*f[37])( );     /*SRA0(V296,(-8405),V96)*/
V96=pile[WZ2]; 
V95=incon;
if((V93>1)) goto l62;
V95=V96;
l67:pile[v[22]]=V95; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V95,(-6980),V298)*/
V298=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V139; pile[WZ2]=V298; 
(*f[39])( );     /*SDX0(41,V139,V298,V299)*/
V299=pile[WZ3]; 
pile[v[22]]=V299; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V299,(-2986),V98)*/
V98=pile[WZ2]; 
V97=incon;
if((V139>1)) goto l63;
V97=V98;
l68:pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
pile[v[22]]=jvj+36; pile[WZ1]=510; pile[WZ2]=V93; 
(*f[186])( );     /*BTC0(jvj+36,510,V93)*/
pile[WZ1]=515; pile[WZ2]=V139; 
(*f[186])( );     /*BTC0(jvj+36,515,V139)*/
pile[WZ1]=609; pile[WZ2]=V87; 
(*f[186])( );     /*BTC0(jvj+36,609,V87)*/
pile[WZ1]=610; pile[WZ2]=V89; 
(*f[186])( );     /*BTC0(jvj+36,610,V89)*/
l66:x[jvj+10]=t[x[jvj+10]];
l64:if((x[jvj+10]>0)) goto l65;
pile[v[22]]=609; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l100;     /*FNDC0(609,jvj+36,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l100;     /*FNDC0(610,jvj+36,V143)*/
V143=pile[WZ2]; 
V141=V142+V143;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l100;     /*FNDC0(510,jvj+36,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l100;     /*FNDC0(515,jvj+36,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(10,0,38,V309)*/
V309=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V309; pile[WZ2]=18; 
(*f[42])( );     /*SRA1(135,V309,18,V310)*/
V310=pile[WZ3]; 
pile[WZ1]=V310; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,V310,1000,V311)*/
V311=pile[WZ3]; 
pile[v[22]]=V311; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V311,58,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=V312; pile[WZ1]=V142; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V312,V142,41,V313)*/
V313=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V313; pile[WZ2]=1041; 
(*f[42])( );     /*SRA1(135,V313,1041,V315)*/
V315=pile[WZ3]; 
pile[v[22]]=V315; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V315,58,V316)*/
V316=pile[WZ2]; 
pile[v[22]]=V316; pile[WZ1]=V143; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V316,V143,41,V317)*/
V317=pile[WZ3]; 
pile[v[22]]=V317; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V317,40,V319)*/
V319=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V319; pile[WZ2]=301; 
(*f[98])( );     /*SRA3(135,V319,301,V320)*/
V320=pile[WZ3]; 
pile[v[22]]=V320; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V320,58,V321)*/
V321=pile[WZ2]; 
pile[v[22]]=V321; pile[WZ1]=V141; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V321,V141,41,V100)*/
V100=pile[WZ3]; 
V99=incon;
if((V141>0)) goto l69;
V99=V100;
l74:pile[v[22]]=V99; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V99,41,V323)*/
V323=pile[WZ2]; 
pile[v[22]]=V323; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V323,(-9813),V324)*/
V324=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V155; pile[WZ2]=V324; 
(*f[39])( );     /*SDX0(41,V155,V324,V325)*/
V325=pile[WZ3]; 
pile[v[22]]=V325; pile[WZ1]=(-8405); 
(*f[37])( );     /*SRA0(V325,(-8405),V102)*/
V102=pile[WZ2]; 
V101=incon;
if((V155>1)) goto l70;
V101=V102;
l75:pile[v[22]]=V101; pile[WZ1]=(-6980); 
(*f[37])( );     /*SRA0(V101,(-6980),V327)*/
V327=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V154; pile[WZ2]=V327; 
(*f[39])( );     /*SDX0(41,V154,V327,V328)*/
V328=pile[WZ3]; 
pile[v[22]]=V328; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V328,(-2986),V104)*/
V104=pile[WZ2]; 
V103=incon;
if((V154>1)) goto l71;
V103=V104;
l72:V105=incon;
if((V154>0)) goto l73;
V105=V103;
l76:pile[v[22]]=V105; 
(*f[40])( );     /*SLG0(V105)*/
l100:for(i=x[G],V163=0;i>0;i=t[i],V163++)  ;
V158=incon;
V158=0;
pile[v[22]]=41; pile[WZ1]=V163; pile[WZ2]=V158; 
(*f[39])( );     /*SDX0(41,V163,V158,V332)*/
V332=pile[WZ3]; 
pile[v[22]]=V332; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V332,(-4670),V161)*/
V161=pile[WZ2]; 
V160=incon;
if((V163>1)) goto l98;
V160=V161;
l101:pile[v[22]]=V160; 
(*f[40])( );     /*SLG0(V160)*/
pile[v[22]]=763; pile[WZ1]=jvj+22; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(763,jvj+22,jvj+45)*/
l102:if((x[jvj+45]>0)) goto l103;
l106:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l49:x[jvj+26]=s[x[jvj+56]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+56];
pile[v[22]]=109; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(109,jvj+26,jvj+27)*/
if((x[jvj+27]!=V66)) goto l50;
pile[v[22]]=1041; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(1041,jvj+26,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=117; pile[WZ2]=V129; 
(*f[186])( );     /*BTC0(jvj+28,117,V129)*/
l50:x[jvj+56]=t[x[jvj+56]];
goto l48;
l51:V92=((-7141));
l55:V67=V92;
pile[v[22]]=jvj+31; pile[WZ1]=V67; 
(*f[331])( );     /*PLUE3(jvj+31,V67)*/
l54:x[jvj+57]=t[x[jvj+57]];
l52:if((x[jvj+57]>0)) goto l53;
for(i=x[jvj+31],V139=0;i>0;i=t[i],V139++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(0,117,jvj+25)*/
x[jvj+55]=x[G] ;z[jvj+55]=z[G];
goto l45;
l53:x[jvj+29]=s[x[jvj+57]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+57];
pile[v[22]]=109; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(109,jvj+29,jvj+30)*/
if((x[jvj+30]!=V66)) goto l54;
V92=incon;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(163,jvj+29,V133)*/
V133=pile[WZ2]; 
V64=V133;
V92=V64;
goto l55;
l59:W=s[x[jvj+31]];
x[jvj+58]=x[G] ;z[jvj+58]=z[G];
l56:if((x[jvj+58]<=0)) goto l60;
x[jvj+32]=s[x[jvj+58]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+58];
pile[v[22]]=109; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(109,jvj+32,jvj+33)*/
if((x[jvj+33]!=V66)) goto l57;
pile[v[22]]=893; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(893,jvj+32,jvj+34)*/
if((x[jvj+34]!=1000)) goto l57;
if((W==(-7141))) goto l61;
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l57;     /*FNDC1(163,jvj+32,V135)*/
V135=pile[WZ2]; 
if((W==V135)) goto l61;
l57:x[jvj+58]=t[x[jvj+58]];
goto l56;
l61:pile[v[22]]=jvj+35; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+35,117,1)*/
l60:x[jvj+31]=t[x[jvj+31]];
goto l58;
l62:pile[v[22]]=V96; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V96,83,V95)*/
V95=pile[WZ2]; 
goto l67;
l63:pile[v[22]]=V98; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V98,83,V97)*/
V97=pile[WZ2]; 
goto l68;
l65:V66=s[x[jvj+10]];
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+57]=x[G] ;z[jvj+57]=z[G];
goto l52;
l69:V145=100*V142;
V144=V145/V141;
pile[v[22]]=41; pile[WZ1]=V144; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(41,V144,V100,V301)*/
V301=pile[WZ3]; 
pile[v[22]]=V301; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V301,37,V99)*/
V99=pile[WZ2]; 
goto l74;
l70:pile[v[22]]=V102; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V102,83,V101)*/
V101=pile[WZ2]; 
goto l75;
l71:pile[v[22]]=V104; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V104,83,V103)*/
V103=pile[WZ2]; 
goto l72;
l73:V151=V155*100;
V150=V151/V154;
pile[v[22]]=41; pile[WZ1]=V150; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(41,V150,V103,V306)*/
V306=pile[WZ3]; 
pile[v[22]]=V306; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V306,37,V105)*/
V105=pile[WZ2]; 
goto l76;
l79:if((x[T]!=301)) goto l84;
if((K!=32)) goto l84;
x[jvj+60]=x[G] ;z[jvj+60]=z[G];
goto l80;
l84:if((K==75)) goto l86;
if((K==76)) goto l93;
if((K!=88)) goto l100;
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+53]=x[G] ;z[jvj+53]=z[G];
goto l22;
l86:x[jvj+61]=x[G] ;z[jvj+61]=z[G];
goto l85;
l88:pile[v[22]]=695; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(695,jvj+6,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(936,jvj+6,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(493,jvj+6,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(109,jvj+6,jvj+41)*/
V26=incon;
if((V25==32)) goto l15;
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(1005,jvj+6,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=V25; 
(*f[41])( );     /*SRB0(15,0,V25,V184)*/
V184=pile[WZ3]; 
pile[v[22]]=V184; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V184,40,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V185; pile[WZ2]=1005; 
(*f[98])( );     /*SRA3(135,V185,1005,V186)*/
V186=pile[WZ3]; 
pile[v[22]]=V186; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V186,61,V187)*/
V187=pile[WZ2]; 
pile[v[22]]=V187; pile[WZ1]=V36; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V187,V36,41,V188)*/
V188=pile[WZ3]; 
pile[v[22]]=V188; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V188,41,V26)*/
V26=pile[WZ2]; 
goto l89;
l93:x[jvj+62]=x[G] ;z[jvj+62]=z[G];
goto l92;
l95:pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l94;     /*FNDC0(117,jvj+7,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l94;     /*FNDC0(683,jvj+7,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l94;     /*FNDC0(510,jvj+7,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l94;     /*FNDC0(876,jvj+7,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(447,jvj+7,jvj+42)*/
pile[v[22]]=1048; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(1048,jvj+7,jvj+43)*/
pile[v[22]]=109; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(109,jvj+7,jvj+44)*/
V50=incon;
if((x[T]!=301)) goto l20;
if((V48==32)) goto l20;
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=V48; 
(*f[41])( );     /*SRB0(10,0,V48,V50)*/
V50=pile[WZ3]; 
goto l96;
l98:pile[v[22]]=V161; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V161,83,V160)*/
V160=pile[WZ2]; 
goto l101;
l99:pile[v[22]]=V165; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V165,83,V164)*/
V164=pile[WZ2]; 
l105:pile[v[22]]=V164; 
(*f[40])( );     /*SLG0(V164)*/
l104:x[jvj+45]=t[x[jvj+45]];
goto l102;
l103:x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=109; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l104;     /*FNDO0(109,jvj+46,jvj+47)*/
pile[v[22]]=878; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(878,jvj+47,jvj+48)*/
for(i=x[jvj+48],V170=0;i>0;i=t[i],V170++)  ;
pile[v[22]]=159; pile[WZ1]=jvj+46; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(159,jvj+46,jvj+49)*/
for(i=x[jvj+49],V173=0;i>0;i=t[i],V173++)  ;
V336=x[jvj+47];
pile[v[22]]=20; pile[WZ1]=V336; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V336,0,V335)*/
V335=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V173; pile[WZ2]=V335; 
(*f[39])( );     /*SDX0(41,V173,V335,V337)*/
V337=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V337; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V337,301,V339)*/
V339=pile[WZ3]; 
pile[v[22]]=V339; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V339,(-740),V340)*/
V340=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V170; pile[WZ2]=V340; 
(*f[39])( );     /*SDX0(41,V170,V340,V341)*/
V341=pile[WZ3]; 
pile[v[22]]=V341; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V341,(-2986),V165)*/
V165=pile[WZ2]; 
V164=incon;
if((V170>1)) goto l99;
V164=V165;
goto l105;
}
