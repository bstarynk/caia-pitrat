#include "dx.h"
void EDITE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int LL=0,V12=0,KR=0,V8=0,V11=0,P=0,V4=0,V7=0,V13=0,V15=0,V14=0,UR=0,V31=0,V30=0,V29=0,K=0,V32=0,V321=0,V323=0,V82=0,V80=0,V79=0,V85=0,V332=0,V333=0,D=0,V137=0,V138=0,V132=0,NRR=0,V139=0,V140=0,V166=0,V171=0,V179=0,V193=0,V197=0,V195=0,V196=0,V199=0,V351=0,V349=0,V350=0,V186=0,V352=0,V355=0,V354=0,V191=0,V209=0,V212=0,V211=0,V210=0,V255=0,V275=0,V276=0,V271=0,V282=0,V281=0,V280=0,V279=0,V361=0,V360=0,V362=0,V363=0,V292=0,V295=0,V294=0,V367=0,V366=0,V297=0,V296=0,V302=0,V301=0,V369=0,V370=0,V371=0,V315=0,NV=0,V309=0,V308=0,V24=0,V317=0,V318=0,V25=0,V319=0,V320=0,V87=0,V334=0,V336=0,V337=0,V338=0,V339=0,V177=0,V176=0,V175=0,V226=0,V225=0,V224=0,V234=0,V233=0,V232=0,V183=0,V182=0,V184=0,V181=0,V180=0,V229=0,V227=0,V28=0,V27=0,V26=0,V274=0,V273=0,V278=0,V218=0,ND=0,V216=0,V217=0,V223=0,V222=0,V221=0,V220=0,V267=0,V266=0,V264=0,V265=0,V262=0,V66=0,V65=0,V64=0,V68=0,V67=0,V62=0,V72=0,V329=0,V328=0,V330=0,V54=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V55=0,V63=0,V239=0,V240=0,V376=0,V375=0,V298=0,NX=0,V168=0,V169=0,V346=0,V343=0,V344=0,V345=0,V347=0,V93=0,V156=0,V151=0,V148=0,V149=0,V154=0,V155=0,V159=0,V158=0,V152=0,V237=0,V236=0,V235=0,V285=0,V284=0,V283=0,V18=0,DP=0,DX=0,R=0,TZ=0,V94=0,V246=0,V248=0,V247=0,V242=0,V252=0,V254=0,V253=0,V251=0,V259=0,V358=0,V356=0,V357=0,V100=0,V99=0,V98=0,V114=0,V109=0,V113=0,V112=0,V107=0,V342=0,V340=0,V341=0,V146=0,V145=0,V129=0,V128=0,V127=0,V89=0,DXX=0,V117=0,V116=0,V115=0,V78=0,V41=0,V49=0,V48=0,V47=0,V325=0,V45=0,V324=0,V326=0,V34=0,V36=0,V37=0,V38=0,V39=0,V40=0,V35=0,V42=0,V288=0,V290=0,V359=0,V170=0,V161=0,V50=0,NR=0,V91=0,RT=0,V122=0,NK=0,V120=0,V123=0,V121=0,KK=0,V90=0,V238=0,V396=0,V398=0,V397=0,V399=0,V401=0,V402=0,V53=0,V403=0,V404=0,V33=0,V136=0,V272=0,V119=0;
int L;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=93;
x[jvj+1]=10814;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==23&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
LL=NX=KR=UR=x[jvj+62]=RT=incon;
if((L<0)) goto l1;
LL=L;
l1:V12=vv[33];
if((V12>0)) goto l2;
x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8<=0)) goto l3;
V11=V8-1;
KR=126;
pile[v[22]]=0; pile[WZ1]=V11; 
(*f[75])( );     /*EAP0(0,V11)*/
l189:pile[v[22]]=10547; pile[WZ1]=109; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(10547,109,jvj+62)*/
if(KR!=incon) goto l53;
l182:if((v[0]>=0)) goto l183;
(*f[151])( );     /*FICTIF0()*/
l183:if(RT==incon) goto l184;
l188:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:KR=126;
(*f[76])( );     /*DEFEXEC0()*/
goto l189;
l3:pile[v[22]]=276; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(276,jvj+3,jvj+4)*/
pile[v[22]]=220; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(220,jvj+4,P)*/
P=pile[WZ2]; 
if((P<=0)) goto l4;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+4,V4)*/
V4=pile[WZ2]; 
V7=P-1;
KR=126;
pile[v[22]]=V4; pile[WZ1]=V7; 
(*f[75])( );     /*EAP0(V4,V7)*/
goto l189;
l4:if(LL==incon) goto l5;
l6:V13=bh[v[1]][LL];
V15=LL+1;
V14=bh[v[1]][V15];
KR=V13;
UR=V14;
goto l189;
l5:if((L>=0)) goto l189;
(*f[74])( );     /*LK0()*/
LL=0;
goto l6;
l7:pile[v[22]]=130; pile[WZ1]=77; 
(*f[26])( );if(v[102]) goto l109;     /*FNDC0(130,77,V31)*/
V31=pile[WZ2]; 
V30=(-V31);
V29=V30-1;
K=1;
l8:if((K>V29)) goto l109;
pile[v[22]]=K; pile[WZ1]=jvj+5; 
(*f[90])( );if(v[102]) goto l9;     /*SRF0(K,jvj+5)*/
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+5,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,K,0,V321)*/
V321=pile[WZ3]; 
pile[v[22]]=V321; pile[WZ1]=V32; 
(*f[37])( );     /*SRA0(V321,V32,V323)*/
V323=pile[WZ2]; 
pile[v[22]]=V323; 
(*f[40])( );     /*SLG0(V323)*/
l9:K++;
goto l8;
l16:V138=LL+1;
pile[v[22]]=V138; 
(*f[126])( );     /*LND2(V138,NRR,V132)*/
NRR=pile[WZ1]; V132=pile[WZ2]; 
V139=NRR+sepfacts;
V140=r[V139];
if((V140!=1)) goto l17;
if((V139>sephist)) goto l17;
if((V139<=sepfacts)) goto l17;
x[jvj+90]=V139 ;z[jvj+90]=(V139<=sepcte) ? V139 : 0;
x[jvj+9]=x[jvj+90] ;z[jvj+9]=z[jvj+90];
l17:if(x[jvj+9]==incon) goto l18;
l139:if(x[jvj+9]!=incon) goto l140;
l141:if((KR!=85)) goto l142;
if((UR!=32)) goto l142;
V117=LL+1;
V116=V117+1;
V115=bh[v[1]][V116];
if((V115==32)) goto l142;
pile[v[22]]=V117; 
(*f[122])( );     /*EAH0(V117)*/
l142:if((KR!=65)) goto l143;
if((UR!=32)) goto l143;
V80=LL+1;
pile[v[22]]=V80; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+7; 
(*f[78])( );if(v[102]) goto l143;     /*SMA0(V80,64,67,jvj+7)*/
(*f[107])( );     /*CRC0(V80,V78)*/
V78=pile[WZ1]; 
z[jvj+7]=(-1);
pile[v[22]]=V78; pile[WZ1]=jvj+7; 
(*f[108])( );     /*LNT0(V78,jvj+7)*/
V82=x[jvj+7];
if((V82>sepbase)) goto l10;
x[jvj+6]=vo[20];z[jvj+6]=vz[20];
if((x[jvj+7]==x[jvj+6])) goto l10;
pile[v[22]]=jvj+7; 
(*f[109])( );     /*SD0(jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=476; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+6,476,jvj+7)*/
l10:pile[v[22]]=V80; 
(*f[107])( );     /*CRC0(V80,V79)*/
V79=pile[WZ1]; 
V85=bh[v[1]][V79];
if(V85==61) goto l190;
pile[v[22]]=20; pile[WZ1]=10814; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10814,0,V332)*/
V332=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V332; 
(*f[39])( );     /*SDX0(41,2,V332,V333)*/
V333=pile[WZ3]; 
pile[v[22]]=V333; 
(*f[40])( );     /*SLG0(V333)*/
l190:pile[v[22]]=jvj+7; pile[WZ1]=109; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+7,109,jvj+87)*/
s[x[jvj+7]]=68;
l143:if((KR!=77)) goto l146;
if((UR!=72)) goto l146;
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(645,597,jvj+79)*/
pile[v[22]]=2; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+22; 
(*f[78])( );if(v[102]) goto l146;     /*SMA0(2,36,67,jvj+22)*/
l144:if((x[jvj+79]<=0)) goto l146;
x[jvj+19]=s[x[jvj+79]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+79];
pile[v[22]]=1418; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1418,jvj+19,jvj+21)*/
if((x[jvj+21]!=68)) goto l25;
pile[v[22]]=jvj+22; 
(*f[153])( );     /*CHERCHATOMEBIS0(jvj+22,jvj+19)*/
l25:pile[v[22]]=1418; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1418,jvj+19,jvj+20)*/
if((x[jvj+20]==68)) goto l145;
l26:pile[v[22]]=683; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l145;     /*FNDC0(683,jvj+19,V209)*/
V209=pile[WZ2]; 
pile[v[22]]=265; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(265,jvj+19,jvj+23)*/
V212=LL+1;
V211=V212+1;
V210=bh[v[1]][V211];
x[jvj+92]=x[jvj+23] ;z[jvj+92]=z[jvj+23];
l27:if((x[jvj+92]<=0)) goto l145;
x[jvj+24]=s[x[jvj+92]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+92];
pile[v[22]]=120; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(120,jvj+24,jvj+25)*/
pile[v[22]]=158; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(158,jvj+24,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=158; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,158,jvj+27)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+25; pile[WZ3]=V209; pile[WZ4]=V210; 
(*f[152])( );     /*CHERCHATOME0(jvj+22,jvj+25,jvj+27,V209,V210)*/
l28:x[jvj+92]=t[x[jvj+92]];
goto l27;
l18:x[jvj+9]=(-99999998);
goto l139;
l19:V179=((-9009));
l65:pile[v[22]]=V184; pile[WZ1]=V179; 
(*f[145])( );     /*PBAZERO0(V184,V179)*/
l66:V229=bh[v[1]][V182];
if(V229!=80&&V229!=65) goto l124;
pile[v[22]]=2; 
(*f[102])( );     /*LND0(2,V227)*/
V227=pile[WZ1]; 
pile[v[22]]=V227; pile[WZ1]=V229; 
(*f[156])( );     /*PBAZERONORD0(V227,V229)*/
l124:if(KR!=80&&KR!=81&&KR!=82) goto l125;
if((UR==66)) goto l125;
pile[v[22]]=LL; pile[WZ1]=KR; pile[WZ2]=UR; 
(*f[121])( );     /*EDICOMP0(LL,KR,UR)*/
l125:if((KR!=74)) goto l130;
if((UR!=32)) goto l126;
V94=LL+1;
pile[v[22]]=397; pile[WZ1]=V94; pile[WZ2]=jvj+65; 
(*f[116])( );if(v[102]) goto l126;     /*SMA1(397,V94,jvj+65)*/
l126:if((UR!=42)) goto l130;
V246=LL+1;
V248=V246+1;
V247=bh[v[1]][V248];
if((V247!=96)) goto l128;
pile[v[22]]=V248; 
(*f[107])( );     /*CRC0(V248,V242)*/
V242=pile[WZ1]; 
V252=bh[v[1]][V242];
if((V252!=96)) goto l128;
V255=V242+1;
V254=V255+1;
V253=bh[v[1]][V254];
if((V253!=96)) goto l128;
pile[v[22]]=V246; pile[WZ1]=jvj+66; 
(*f[163])( );if(v[102]) goto l128;     /*SYA0(V246,jvj+66)*/
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l128;     /*FNDC1(163,jvj+66,V251)*/
V251=pile[WZ2]; 
pile[v[22]]=67; pile[WZ1]=V255; pile[WZ2]=jvj+28; 
(*f[116])( );if(v[102]) goto l127;     /*SMA1(67,V255,jvj+28)*/
if((x[jvj+28]!=250)) goto l128;
l127:V259=(-V251);
pile[v[22]]=V259; 
(*f[119])( );     /*NVS0(V259)*/
pile[v[22]]=V255; pile[WZ1]=V251; pile[WZ2]=397; pile[WZ3]=jvj+67; 
(*f[164])( );if(v[102]) goto l128;     /*SMA2(V255,V251,397,jvj+67)*/
V358=x[jvj+67];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,0,1000,V356)*/
V356=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V358; pile[WZ2]=V356; 
(*f[39])( );     /*SDX0(20,V358,V356,V357)*/
V357=pile[WZ3]; 
pile[v[22]]=V357; 
(*f[40])( );     /*SLG0(V357)*/
l128:if(V247!=64&&V247!=36&&V247!=38&&V247!=34&&V247!=35) goto l130;
pile[v[22]]=V246; 
(*f[107])( );     /*CRC0(V246,D)*/
D=pile[WZ1]; 
V100=D+1;
V99=bh[v[1]][V100];
if((V99!=V247)) goto l130;
pile[v[22]]=67; pile[WZ1]=D; pile[WZ2]=jvj+8; 
(*f[116])( );if(v[102]) goto l129;     /*SMA1(67,D,jvj+8)*/
if((x[jvj+8]!=250)) goto l130;
l129:pile[v[22]]=V246; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+68; 
(*f[78])( );if(v[102]) goto l130;     /*SMA0(V246,64,67,jvj+68)*/
if((V98=w[x[jvj+68]][0])==incon) goto l130;
pile[v[22]]=V98; pile[WZ1]=jvj+69; 
(*f[117])( );if(v[102]) goto l130;     /*SRF1(V98,jvj+69)*/
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l130;     /*FNDC1(163,jvj+69,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=101; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l130;     /*FNDO0(101,jvj+69,jvj+70)*/
V109=x[jvj+70];
V113=V114;
V112=(-V113);
pile[v[22]]=D; pile[WZ1]=jvj+71; 
(*f[118])( );if(v[102]) goto l130;     /*SYB0(D,jvj+71)*/
pile[v[22]]=163; 
(*f[44])( );if(v[102]) goto l130;     /*FNDC1(163,jvj+71,V107)*/
V107=pile[WZ2]; 
V342=x[jvj+71];
w[V109][0]=V107;
pile[v[22]]=jvj+70; pile[WZ1]=3; pile[WZ2]=V107; 
(*f[177])( );     /*CHGC4(jvj+70,3,V107)*/
pile[v[22]]=jvj+71; pile[WZ1]=101; pile[WZ2]=jvj+70; 
(*f[35])( );     /*CHGC1(jvj+71,101,jvj+70)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1000; 
(*f[42])( );     /*SRA1(135,0,1000,V340)*/
V340=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V342; pile[WZ2]=V340; 
(*f[39])( );     /*SDX0(20,V342,V340,V341)*/
V341=pile[WZ3]; 
pile[v[22]]=V341; 
(*f[40])( );     /*SLG0(V341)*/
pile[v[22]]=V112; 
(*f[119])( );     /*NVS0(V112)*/
l130:if((KR!=80)) goto l131;
if((UR!=66)) goto l131;
V146=LL+1;
V145=V146+1;
pile[v[22]]=V145; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+72; 
(*f[78])( );if(v[102]) goto l131;     /*SMA0(V145,64,67,jvj+72)*/
pile[v[22]]=jvj+72; 
(*f[130])( );     /*EDIPB0(jvj+72)*/
l131:if(KR!=77&&KR!=109) goto l134;
if(UR!=74&&UR!=106) goto l134;
V279=incon;
V282=LL+1;
V281=V282+1;
V280=bh[v[1]][V281];
if((V280!=61)) goto l31;
V279=1;
l31:if(V279==incon) goto l32;
l132:if(V279!=incon) goto l133;
l134:if(x[jvj+62]!=incon) goto l135;
l138:if((KR!=84)) goto l141;
x[jvj+9]=incon;
if((UR!=48)) goto l12;
pile[v[22]]=jvj+9; 
(*f[128])( );if(v[102]) goto l12;     /*CODN0(jvj+9)*/
l12:if((UR!=76)) goto l13;
x[jvj+10]=vo[20];z[jvj+10]=vz[20];
pile[v[22]]=1123; pile[WZ1]=jvj+10; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1123,jvj+10,jvj+9)*/
l13:if((UR!=32)) goto l14;
V137=LL+1;
pile[v[22]]=V137; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+9; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(V137,36,67,jvj+9)*/
l14:if((UR==48)) goto l17;
if((UR<48)) goto l196;
if((UR>57)) goto l196;
V136=135;
l15:if((V136==135)) goto l16;
goto l17;
l20:V179=((-5963));
goto l65;
l22:x[jvj+91]=t[x[jvj+91]];
l21:if((x[jvj+91]<=0)) goto l24;
x[jvj+15]=s[x[jvj+91]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+91];
pile[v[22]]=683; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(683,jvj+15,V193)*/
V193=pile[WZ2]; 
if((V193!=V186)) goto l22;
V351=x[jvj+16];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V349)*/
V349=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V351; pile[WZ2]=V349; 
(*f[39])( );     /*SDX0(20,V351,V349,V350)*/
V350=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V186; pile[WZ2]=V350; 
(*f[39])( );     /*SDX0(41,V186,V350,V352)*/
V352=pile[WZ3]; 
V355=75-V352;
pile[v[22]]=V355; pile[WZ1]=V352; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V355,V352,42,V354)*/
V354=pile[WZ3]; 
pile[v[22]]=V354; 
(*f[40])( );     /*SLG0(V354)*/
pile[v[22]]=jvj+13; pile[WZ1]=V191; pile[WZ2]=jvj+18; pile[WZ3]=68; pile[WZ4]=V186; 
(*f[148])( );     /*ANAREG0(jvj+13,V191,jvj+18,68,V186)*/
l24:V195++;
l23:if((V195>V196)) goto l159;
V199=r[V195];
if((V199!=1)) goto l24;
x[jvj+16]=V195 ;z[jvj+16]=(V195<=sepcte) ? V195 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(983,jvj+16,jvj+17)*/
x[jvj+13]=x[jvj+17] ;z[jvj+13]=z[jvj+17];
pile[v[22]]=1001; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1001,jvj+13,jvj+14)*/
x[jvj+91]=x[jvj+14] ;z[jvj+91]=z[jvj+14];
goto l21;
l30:pile[v[22]]=V275; 
(*f[135])( );     /*LND3(V275,V271)*/
V271=pile[WZ1]; 
l69:V278=bh[v[1]][V273];
pile[v[22]]=V278; pile[WZ1]=V271; 
(*f[166])( );     /*TRANSFORME0(V278,V271)*/
goto l124;
l32:V279=0;
goto l132;
l34:V292=0;
l37:if(V292!=incon) goto l38;
l43:if(NX!=incon) goto l44;
l102:if((UR!=69)) goto l103;
(*f[94])( );     /*KRG0()*/
l103:if((UR!=84)) goto l104;
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[89])( );     /*TABLERASE0()*/
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[86])( );     /*DISQUE0()*/
exit(0);
l104:if((UR!=75)) goto l108;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(494,324,jvj+56)*/
l105:if((x[jvj+56]<=0)) goto l108;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l106;     /*FNDC0(130,jvj+57,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(109,jvj+57,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=V166; pile[WZ2]=jvj+12; 
(*f[133])( );if(v[102]) goto l107;     /*TLDEBL1(jvj+11,V166,jvj+12)*/
l106:x[jvj+56]=t[x[jvj+56]];
goto l105;
l36:V294=V295;
l39:if(V294!=incon) goto l40;
goto l43;
l38:V367=v[77];
pile[v[22]]=41; pile[WZ1]=V367; pile[WZ2]=V292; 
(*f[39])( );     /*SDX0(41,V367,V292,V366)*/
V366=pile[WZ3]; 
pile[v[22]]=(-8892); pile[WZ1]=V366; 
(*f[64])( );     /*SRA2((-8892),V366,V295)*/
V295=pile[WZ2]; 
V294=incon;
if((v[77]<=1)) goto l35;
pile[v[22]]=V295; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V295,83,V294)*/
V294=pile[WZ2]; 
l35:if(V294==incon) goto l36;
goto l39;
l40:pile[v[22]]=V294; 
(*f[40])( );     /*SLG0(V294)*/
goto l43;
l42:V296=V297;
l45:if(V296!=incon) goto l46;
goto l102;
l44:V302=(time(tzt)-inccc);
V301=V302-NX;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1007; 
(*f[42])( );     /*SRA1(135,0,1007,V369)*/
V369=pile[WZ3]; 
pile[v[22]]=V369; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V369,58,V370)*/
V370=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V301; pile[WZ2]=V370; 
(*f[39])( );     /*SDX0(41,V301,V370,V371)*/
V371=pile[WZ3]; 
pile[v[22]]=V371; pile[WZ1]=(-9522); 
(*f[37])( );     /*SRA0(V371,(-9522),V297)*/
V297=pile[WZ2]; 
V296=incon;
if((V301<=1)) goto l41;
pile[v[22]]=V297; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V297,83,V296)*/
V296=pile[WZ2]; 
l41:if(V296==incon) goto l42;
goto l45;
l46:pile[v[22]]=V296; 
(*f[40])( );     /*SLG0(V296)*/
goto l102;
l48:V308=V309;
l99:if(V308!=incon) goto l100;
l98:pile[v[22]]=120; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(120,jvj+51,jvj+52)*/
l97:x[jvj+51]=x[jvj+52] ;z[jvj+51]=z[jvj+52];
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(111,jvj+51,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=x[jvj+47])) goto l98;
pile[v[22]]=319; pile[WZ1]=jvj+51; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l98;     /*FNDO0(319,jvj+51,jvj+55)*/
x[jvj+29]=x[jvj+55] ;z[jvj+29]=z[jvj+55];
V376=x[jvj+29];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+50; 
(*f[42])( );     /*SRA1(135,0,jvj+50,V309)*/
V309=pile[WZ3]; 
V308=incon;
pile[v[22]]=929; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(929,jvj+29,V315)*/
V315=pile[WZ2]; 
NV=V315;
pile[v[22]]=41; pile[WZ1]=NV; pile[WZ2]=V309; 
(*f[39])( );     /*SDX0(41,NV,V309,V308)*/
V308=pile[WZ3]; 
l47:if(V308==incon) goto l48;
goto l99;
l53:if(UR!=incon) goto l54;
l162:if((KR!=35)) goto l163;
(*f[84])( );     /*ARRET0()*/
l163:if((KR!=61)) goto l164;
(*f[106])( );     /*SORTOUT0()*/
l164:if(LL!=incon) goto l165;
l176:if((KR!=73)) goto l177;
(*f[146])( );     /*ETUQUOI0()*/
l177:if((KR!=36)) goto l178;
(*f[159])( );     /*EDITOUTPB0()*/
l178:if((KR!=41)) goto l179;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V238)*/
V238=pile[WZ1]; 
pile[v[22]]=V238; 
(*f[161])( );     /*PROVISOIRE0(V238)*/
l179:if((KR!=64)) goto l180;
pile[v[22]]=0; 
(*f[15])( );     /*ERR1(0)*/
l180:if((KR!=75)) goto l181;
(*f[95])( );     /*CREFIC0()*/
l181:if((KR!=79)) goto l182;
(*f[104])( );     /*DIAL0()*/
goto l182;
l54:if((KR==45)) goto l55;
if((KR==43)) goto l56;
if((KR!=87)) goto l109;
if((UR!=70)) goto l58;
fflush(stdout);
l58:if(LL!=incon) goto l59;
l77:if((UR==72)) goto l78;
if((UR==65)) goto l79;
if((UR==78)) goto l80;
if((UR==33)) goto l81;
if((UR==37)) goto l82;
if((UR==43)) goto l83;
if((UR==35)) goto l84;
if((UR==58)) goto l85;
if((UR==66)) goto l86;
if((UR==74)) goto l87;
if((UR==32)) goto l88;
if((UR==87)) goto l90;
if((UR==80)) goto l192;
if((UR==90)) goto l91;
if((UR==68)) goto l93;
if((UR==71)) goto l191;
if((UR==126)) goto l94;
if((UR==67)) goto l7;
if((UR!=60)) goto l101;
x[jvj+46]=vo[13];z[jvj+46]=vz[13];
pile[v[22]]=2; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+47; 
(*f[78])( );if(v[102]) goto l109;     /*SMA0(2,64,67,jvj+47)*/
l95:x[jvj+48]=x[jvj+46] ;z[jvj+48]=z[jvj+46];
pile[v[22]]=287; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(287,jvj+48,jvj+49)*/
pile[v[22]]=218; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l96;     /*FNDO0(218,jvj+48,jvj+50)*/
x[jvj+52]=x[jvj+49] ;z[jvj+52]=z[jvj+49];
goto l97;
l55:if((UR!=32)) goto l109;
(*f[17])( );     /*FERMER0()*/
l109:if(LL!=incon) goto l110;
l152:if((KR!=67)) goto l153;
pile[v[22]]=UR; 
(*f[168])( );     /*EDICMT0(UR)*/
l153:if((KR!=38)) goto l155;
if((UR!=80)) goto l154;
(*f[101])( );     /*PRP0()*/
l154:if((UR!=79)) goto l155;
(*f[100])( );     /*PRO0()*/
l155:if((KR!=76)) goto l159;
if((UR!=35)) goto l158;
V288=sepnouv+1;
l156:if((V288>sepfacts)) goto l158;
V290=r[V288];
if((V290!=1)) goto l157;
x[jvj+84]=V288 ;z[jvj+84]=(V288<=sepcte) ? V288 : 0;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V359)*/
V359=pile[WZ2]; 
pile[v[22]]=V359; 
(*f[40])( );     /*SLG0(V359)*/
pile[v[22]]=jvj+84; 
(*f[172])( );     /*SORBL1(jvj+84)*/
l157:V288++;
goto l156;
l56:if((UR!=32)) goto l57;
(*f[83])( );     /*STORE0()*/
l57:if(UR!=35&&UR!=43) goto l109;
(*f[86])( );     /*DISQUE0()*/
(*f[84])( );     /*ARRET0()*/
goto l109;
l59:if((UR==63)) goto l60;
if((UR==88)) goto l61;
if((UR==86)) goto l62;
if((UR==73)) goto l63;
if((UR==79)) goto l64;
if((UR==77)) goto l67;
if((UR==83)) goto l68;
if((UR==89)) goto l70;
if((UR==76)) goto l73;
if((UR!=36)) goto l77;
V66=LL+1;
V65=V66+1;
V64=bh[v[1]][V65];
V68=V65+1;
V67=bh[v[1]][V68];
(*f[74])( );     /*LK0()*/
V401=bh[v[1]][0];
if((V64!=V401)) goto l124;
V402=bh[v[1]][1];
if((V67!=V402)) goto l124;
V53=68;
if((V53==68)) goto l74;
goto l124;
l60:pile[v[22]]=LL; 
(*f[87])( );     /*OTEINUTILE0(LL)*/
goto l124;
l61:V177=LL+1;
V176=V177+1;
V175=bh[v[1]][V176];
pile[v[22]]=V175; 
(*f[143])( );     /*SORCONTEXTE0(V175)*/
goto l124;
l62:V226=LL+1;
V225=V226+1;
V224=bh[v[1]][V225];
pile[v[22]]=V224; 
(*f[155])( );     /*EXAPB0(V224)*/
goto l124;
l63:V234=LL+1;
V233=V234+1;
V232=bh[v[1]][V233];
pile[v[22]]=V232; 
(*f[157])( );     /*VFDJK0(V232)*/
goto l124;
l64:V183=LL+1;
V182=V183+1;
V184=bh[v[1]][V182];
V181=V182+1;
if(V184!=84&&V184!=78) goto l66;
V180=bh[v[1]][V181];
V179=incon;
if((V180==65)) goto l19;
if((V180==77)) goto l20;
if((V180!=71)) goto l66;
V179=((-11721));
goto l65;
l67:V28=LL+1;
V27=V28+1;
V26=bh[v[1]][V27];
pile[v[22]]=V26; 
(*f[82])( );     /*SNUM0(V26)*/
goto l124;
l68:V274=LL+1;
V273=V274+1;
V271=incon;
V275=V273+1;
V276=bh[v[1]][V275];
if((V276<48)) goto l197;
if((V276>57)) goto l197;
V272=135;
l29:if((V272==135)) goto l30;
V271=0;
goto l69;
l70:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l124;     /*FNDC0(1484,854,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=3; 
(*f[135])( );     /*LND3(3,ND)*/
ND=pile[WZ1]; 
V216=sepfacts+1;
V217=sepfacts+V218;
V223=LL+1;
V222=V223+1;
V221=bh[v[1]][V222];
l71:if((V216>V217)) goto l124;
V220=r[V216];
if((V220!=1)) goto l72;
x[jvj+34]=V216 ;z[jvj+34]=(V216<=sepcte) ? V216 : 0;
pile[v[22]]=jvj+34; pile[WZ1]=V221; pile[WZ2]=ND; 
(*f[154])( );     /*ANATOME0(jvj+34,V221,ND)*/
l72:V216++;
goto l71;
l73:V267=LL+1;
V266=V267+1;
pile[v[22]]=V266; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+35; 
(*f[78])( );if(v[102]) goto l124;     /*SMA0(V266,36,67,jvj+35)*/
(*f[107])( );     /*CRC0(V266,V264)*/
V264=pile[WZ1]; 
V265=V264+1;
pile[v[22]]=V265; 
(*f[135])( );     /*LND3(V265,V262)*/
V262=pile[WZ1]; 
pile[v[22]]=jvj+35; pile[WZ1]=V262; 
(*f[165])( );     /*TESTATOME0(jvj+35,V262)*/
goto l124;
l74:pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(494,324,jvj+36)*/
V62=0;
l75:if((x[jvj+36]<=0)) goto l124;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(130,jvj+37,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(109,jvj+37,jvj+38)*/
V329=x[jvj+38];
pile[v[22]]=20; pile[WZ1]=V329; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V329,0,V328)*/
V328=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V72; pile[WZ2]=V328; 
(*f[39])( );     /*SDX0(41,V72,V328,V330)*/
V330=pile[WZ3]; 
pile[v[22]]=V330; 
(*f[40])( );     /*SLG0(V330)*/
fflush(stdout);
v[2]=v[1];
V54=V62;
v[1]=4;
pile[v[22]]=(-4395); pile[WZ1]=V54; 
(*f[64])( );     /*SRA2((-4395),V54,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=jvj+38; 
(*f[98])( );     /*SRA3(135,V56,jvj+38,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V72; pile[WZ1]=V57; 
(*f[99])( );     /*SPM0(V72,V57,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=(-787); pile[WZ1]=V58; 
(*f[64])( );     /*SRA2((-787),V58,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=(-5248); pile[WZ1]=V59; 
(*f[64])( );     /*SRA2((-5248),V59,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=V64; 
(*f[38])( );     /*SPC0(V60,V64,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=V67; 
(*f[38])( );     /*SPC0(V61,V67,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V55,0,V63)*/
V63=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V63; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V63,406,130)*/
l76:x[jvj+36]=t[x[jvj+36]];
goto l75;
l78:
(*f[141])( );     /*ANARES0()*/
goto l109;
l79:
(*f[149])( );     /*REGCONTR0()*/
goto l109;
l80:
(*f[150])( );     /*ESSAICOMB0()*/
goto l109;
l81:
(*f[167])( );     /*PREPMALICE0()*/
goto l109;
l82:
(*f[170])( );     /*SURVEILLE0()*/
goto l109;
l83:
(*f[171])( );     /*META0()*/
goto l109;
l84:
(*f[173])( );     /*ANARULE0()*/
goto l109;
l85:pile[v[22]]=250; 
(*f[175])( );     /*LISTEVRAI0(250)*/
goto l109;
l86:x[jvj+39]=vo[13];z[jvj+39]=vz[13];
pile[v[22]]=717; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l109;     /*FNDO0(717,jvj+39,jvj+40)*/
pile[v[22]]=jvj+40; 
(*f[142])( );     /*SORENSLIS0(jvj+40)*/
goto l109;
l87:pile[v[22]]=2; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+41; 
(*f[78])( );if(v[102]) goto l109;     /*SMA0(2,64,67,jvj+41)*/
pile[v[22]]=jvj+41; 
(*f[140])( );     /*CREJGT0(jvj+41)*/
goto l109;
l88:pile[v[22]]=jvj+42; 
(*f[138])( );if(v[102]) goto l109;     /*EXPPB0(jvj+42)*/
pile[WZ1]=178; 
(*f[137])( );     /*EXPDIAL0(jvj+42,178)*/
pile[v[22]]=994; pile[WZ1]=993; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(994,993,100)*/
V171=vv[21];
if((V171<=0)) goto l89;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l89:
(*f[25])( );     /*FAIREXP0()*/
goto l109;
l90:pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
goto l109;
l91:pile[v[22]]=552; pile[WZ1]=727; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(552,727,jvj+43)*/
l92:if((x[jvj+43]<=0)) goto l109;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; 
(*f[105])( );     /*DIAS0(jvj+44)*/
x[jvj+43]=t[x[jvj+43]];
goto l92;
l93:
(*f[91])( );     /*MND0()*/
goto l109;
l94:pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V239,V240)*/
V239=pile[WZ1]; V240=pile[WZ2]; 
pile[v[22]]=V239; pile[WZ1]=V240; 
(*f[162])( );     /*EDITOUTATOME0(V239,V240)*/
goto l109;
l96:pile[v[22]]=120; pile[WZ1]=jvj+48; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l101;     /*FNDO0(120,jvj+48,jvj+46)*/
goto l95;
l100:pile[v[22]]=20; pile[WZ1]=V376; pile[WZ2]=V308; 
(*f[39])( );     /*SDX0(20,V376,V308,V375)*/
V375=pile[WZ3]; 
pile[v[22]]=V375; 
(*f[40])( );     /*SLG0(V375)*/
goto l98;
l101:if((UR!=62)) goto l102;
V298=(time(tzt)-inccc);
v[70]=1000;
v[76]=1000;
NX=V298;
(*f[174])( );     /*COMB0()*/
V292=incon;
if((v[78]<=0)) goto l33;
V361=v[78];
pile[v[22]]=41; pile[WZ1]=V361; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V361,0,V360)*/
V360=pile[WZ3]; 
pile[v[22]]=V360; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V360,42,V362)*/
V362=pile[WZ2]; 
pile[v[22]]=V362; pile[WZ1]=10000000; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V362,10000000,41,V363)*/
V363=pile[WZ3]; 
pile[v[22]]=V363; pile[WZ1]=43; 
(*f[38])( );     /*SPC0(V363,43,V292)*/
V292=pile[WZ2]; 
l33:if(V292==incon) goto l34;
goto l37;
l107:pile[v[22]]=246; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l106;     /*FNDC0(246,jvj+57,V168)*/
V168=pile[WZ2]; 
V169=x[jvj+57];
V346=x[jvj+11];
pres[V168]=1;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=V169; 
(*f[134])( );     /*OTA0(494,324,V169)*/
pile[v[22]]=20; pile[WZ1]=494; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,494,0,V343)*/
V343=pile[WZ3]; 
pile[v[22]]=V343; pile[WZ1]=(-6435); 
(*f[37])( );     /*SRA0(V343,(-6435),V344)*/
V344=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V346; pile[WZ2]=V344; 
(*f[39])( );     /*SDX0(20,V346,V344,V345)*/
V345=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V166; pile[WZ2]=V345; 
(*f[39])( );     /*SDX0(41,V166,V345,V347)*/
V347=pile[WZ3]; 
pile[v[22]]=V347; 
(*f[40])( );     /*SLG0(V347)*/
goto l106;
l108:if((UR!=85)) goto l109;
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[96])( );     /*EASB0()*/
pile[v[22]]=68; 
(*f[88])( );     /*DATE0(68)*/
(*f[86])( );     /*DISQUE0()*/
exit(0);
goto l109;
l110:if((KR!=63)) goto l111;
pile[v[22]]=LL; pile[WZ1]=UR; 
(*f[103])( );     /*EDPION0(LL,UR)*/
l111:if((KR!=76)) goto l119;
if((UR!=74)) goto l112;
pile[v[22]]=LL; 
(*f[144])( );     /*LIREJOURNAL0(LL)*/
l112:if((UR!=66)) goto l113;
pile[v[22]]=LL; 
(*f[147])( );     /*LIREBILAN0(LL)*/
l113:if((UR!=45)) goto l114;
pile[v[22]]=LL; 
(*f[158])( );     /*SORATT0(LL)*/
l114:if(UR==43||UR==74||UR==85||UR==86||UR==66||UR==87||UR==45) goto l115;
V93=LL+1;
pile[v[22]]=V93; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+58; 
(*f[78])( );if(v[102]) goto l115;     /*SMA0(V93,36,67,jvj+58)*/
pile[v[22]]=UR; pile[WZ1]=jvj+58; 
(*f[115])( );     /*SORBL0(UR,jvj+58)*/
l115:if((UR!=43)) goto l119;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l119;     /*FNDC0(1484,854,V156)*/
V156=pile[WZ2]; 
V151=LL+1;
pile[v[22]]=V151; 
(*f[131])( );     /*SMV0(V151,V148,V149)*/
V148=pile[WZ1]; V149=pile[WZ2]; 
V154=sepfacts+1;
V155=sepfacts+V156;
V159=bh[v[1]][V149];
l116:if((V154>V155)) goto l119;
V158=r[V154];
if((V158!=1)) goto l117;
x[jvj+59]=V154 ;z[jvj+59]=(V154<=sepcte) ? V154 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l117;     /*FNDC1(905,jvj+59,V152)*/
V152=pile[WZ2]; 
if((V152==(-9113))) goto l118;
if((V152==V148)) goto l118;
l117:V154++;
goto l116;
l118:pile[v[22]]=V159; pile[WZ1]=jvj+59; 
(*f[115])( );     /*SORBL0(V159,jvj+59)*/
goto l117;
l119:if((KR!=33)) goto l120;
V237=LL+1;
V236=V237+1;
V235=bh[v[1]][V236];
pile[v[22]]=UR; pile[WZ1]=V235; 
(*f[160])( );     /*CHERCHEUR0(UR,V235)*/
l120:if((KR!=69)) goto l124;
if((UR!=88)) goto l121;
V285=LL+1;
V284=V285+1;
V283=bh[v[1]][V284];
if((V283!=80)) goto l121;
(*f[169])( );     /*EXPERIMENTE0()*/
l121:if(x[jvj+62]!=incon) goto l122;
goto l124;
l122:if((UR!=32)) goto l124;
V18=LL+1;
pile[v[22]]=V18; 
(*f[77])( );     /*CRR0(V18,DP)*/
DP=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+60; 
(*f[78])( );if(v[102]) goto l124;     /*SMA0(V18,64,67,jvj+60)*/
pile[v[22]]=DP; pile[WZ1]=jvj+61; 
(*f[79])( );if(v[102]) goto l124;     /*LEXP0(DP,jvj+61,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ3]=jvj+63; 
(*f[80])( );if(v[102]) goto l124;     /*EVL1(jvj+61,jvj+62,R,jvj+63,TZ)*/
R=pile[WZ2]; TZ=pile[WZ4]; 
x[jvj+64]=R ;z[jvj+64]=(R<=sepcte) ? R : 0;
if((TZ<=0)) goto l49;
x[jvj+30]=vo[20];z[jvj+30]=vz[20];
x[jvj+31]=TZ ;z[jvj+31]=(TZ<=sepcte) ? TZ : 0;
pile[v[22]]=jvj+30; pile[WZ1]=476; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+30,476,jvj+31)*/
l49:if((TZ<=sepbase)) goto l50;
if((TZ>sephist)) goto l50;
x[jvj+32]=TZ ;z[jvj+32]=(TZ<=sepcte) ? TZ : 0;
pile[v[22]]=jvj+32; pile[WZ1]=68; pile[WZ2]=73; 
(*f[81])( );     /*PLUK0(jvj+32,68,73)*/
l50:V24=bh[v[1]][DP];
if(V24==40) goto l51;
pile[v[22]]=20; pile[WZ1]=10814; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10814,0,V317)*/
V317=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V317; 
(*f[39])( );     /*SDX0(41,1,V317,V318)*/
V318=pile[WZ3]; 
pile[v[22]]=V318; 
(*f[40])( );     /*SLG0(V318)*/
l51:V25=bh[v[1]][DX];
if(V25==41) goto l123;
pile[v[22]]=20; pile[WZ1]=10814; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10814,0,V319)*/
V319=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V319; 
(*f[39])( );     /*SDX0(41,3,V319,V320)*/
V320=pile[WZ3]; 
pile[v[22]]=V320; 
(*f[40])( );     /*SLG0(V320)*/
l123:pile[v[22]]=jvj+60; pile[WZ1]=jvj+64; 
(*f[71])( );     /*ENLV0(jvj+60,jvj+64)*/
goto l124;
l133:v[62]=V279;
goto l134;
l135:if((KR!=89)) goto l136;
x[jvj+73]=vo[20];z[jvj+73]=vz[20];
pile[v[22]]=1733; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l136;     /*FNDO0(1733,jvj+73,jvj+74)*/
V129=LL+1;
V128=V129+1;
V127=bh[v[1]][V128];
pile[v[22]]=jvj+73; pile[WZ1]=1733; pile[WZ2]=129; 
(*f[35])( );     /*CHGC1(jvj+73,1733,129)*/
pile[v[22]]=10547; pile[WZ1]=274; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(10547,274,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=V127; pile[WZ2]=UR; pile[WZ3]=jvj+62; 
(*f[127])( );     /*EASOR0(jvj+75,V127,UR,jvj+62)*/
pile[v[22]]=jvj+73; pile[WZ1]=1733; pile[WZ2]=jvj+74; 
(*f[35])( );     /*CHGC1(jvj+73,1733,jvj+74)*/
l136:if((KR!=86)) goto l138;
V89=LL+1;
v[45]=0;
pile[v[22]]=V89; pile[WZ1]=jvj+76; 
(*f[79])( );if(v[102]) goto l138;     /*LEXP0(V89,jvj+76,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=jvj+62; pile[WZ3]=jvj+33; 
(*f[110])( );if(v[102]) goto l138;     /*EVL2(jvj+62,jvj+76,V87,jvj+33)*/
V87=pile[WZ2]; 
if((UR!=32)) goto l52;
if((v[45]!=0)) goto l52;
pile[v[22]]=jvj+33; pile[WZ1]=V87; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(jvj+33,V87,0,V334)*/
V334=pile[WZ3]; 
pile[v[22]]=V334; 
(*f[40])( );     /*SLG0(V334)*/
l52:if((v[45]<=0)) goto l137;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,0,876,V336)*/
V336=pile[WZ3]; 
pile[WZ1]=V336; pile[WZ2]=935; 
(*f[42])( );     /*SRA1(135,V336,935,V337)*/
V337=pile[WZ3]; 
pile[v[22]]=V337; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V337,58,V338)*/
V338=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V338; pile[WZ2]=940; 
(*f[42])( );     /*SRA1(135,V338,940,V339)*/
V339=pile[WZ3]; 
pile[v[22]]=V339; 
(*f[40])( );     /*SLG0(V339)*/
l137:v[45]=0;
goto l138;
l140:if((x[jvj+9]==(-99999998))) goto l141;
pile[v[22]]=109; pile[WZ1]=jvj+9; pile[WZ2]=274; pile[WZ3]=jvj+9; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(109,jvj+9,274,jvj+9,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; 
(*f[129])( );if(v[102]) goto l141;     /*EDIBLOC0(jvj+77,jvj+78)*/
goto l141;
l145:x[jvj+79]=t[x[jvj+79]];
goto l144;
l146:if((KR!=42)) goto l152;
(*f[74])( );     /*LK0()*/
V403=bh[v[1]][0];
if((KR!=V403)) goto l152;
V404=bh[v[1]][1];
if((UR!=V404)) goto l152;
V33=68;
if((V33==68)) goto l147;
goto l152;
l147:pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(311,324,jvj+80)*/
V41=0;
V49=LL+1;
V48=V49+1;
V47=bh[v[1]][V48];
l148:if((x[jvj+80]<=0)) goto l152;
x[jvj+81]=s[x[jvj+80]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+80];
pile[v[22]]=365; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(365,jvj+81,jvj+82)*/
V325=x[jvj+81];
x[jvj+93]=x[jvj+82] ;z[jvj+93]=z[jvj+82];
l149:if((x[jvj+93]>0)) goto l150;
x[jvj+80]=t[x[jvj+80]];
goto l148;
l150:x[jvj+83]=s[x[jvj+93]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+93];
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l151;     /*FNDC0(130,jvj+83,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V325; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V325,0,V324)*/
V324=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V45; pile[WZ2]=V324; 
(*f[39])( );     /*SDX0(41,V45,V324,V326)*/
V326=pile[WZ3]; 
pile[v[22]]=V326; 
(*f[40])( );     /*SLG0(V326)*/
v[2]=v[1];
V34=V41;
v[1]=4;
pile[v[22]]=(-4395); pile[WZ1]=V34; 
(*f[64])( );     /*SRA2((-4395),V34,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V36; pile[WZ2]=jvj+81; 
(*f[98])( );     /*SRA3(135,V36,jvj+81,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=V37; 
(*f[99])( );     /*SPM0(V45,V37,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=(-4396); pile[WZ1]=V38; 
(*f[64])( );     /*SRA2((-4396),V38,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=UR; 
(*f[38])( );     /*SPC0(V39,UR,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=V47; 
(*f[38])( );     /*SPC0(V40,V47,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=0; 
(*f[38])( );     /*SPC0(V35,0,V42)*/
V42=pile[WZ2]; 
v[1]=v[2];
pile[v[22]]=V42; pile[WZ1]=406; pile[WZ2]=130; 
(*f[67])( );     /*SPA0(V42,406,130)*/
l151:x[jvj+93]=t[x[jvj+93]];
goto l149;
l158:if((UR!=87)) goto l159;
V191=bh[v[1]][2];
pile[v[22]]=3; 
(*f[102])( );     /*LND0(3,V186)*/
V186=pile[WZ1]; 
pile[v[22]]=jvj+18; 
(*f[138])( );if(v[102]) goto l159;     /*EXPPB0(jvj+18)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l159;     /*FNDC0(1484,854,V197)*/
V197=pile[WZ2]; 
V195=sepfacts+1;
V196=sepfacts+V197;
goto l23;
l159:if((KR!=77)) goto l160;
if((UR!=32)) goto l160;
pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,V170)*/
V170=pile[WZ1]; 
pile[v[22]]=V170; 
(*f[136])( );     /*EDITORD0(V170)*/
l160:if((KR!=72)) goto l161;
pile[v[22]]=UR; 
(*f[93])( );     /*SNA0(UR)*/
l161:if((KR!=88)) goto l162;
if((UR!=46)) goto l11;
(*f[114])( );     /*EAKK0()*/
l11:if((UR!=32)) goto l162;
(*f[113])( );     /*EAK0()*/
goto l162;
l165:if((KR!=71)) goto l166;
pile[v[22]]=LL; 
(*f[120])( );     /*EDITEG0(LL)*/
l166:if((KR!=124)) goto l167;
V161=LL-1;
pile[v[22]]=V161; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+85; 
(*f[78])( );if(v[102]) goto l167;     /*SMA0(V161,64,67,jvj+85)*/
pile[v[22]]=jvj+85; 
(*f[132])( );     /*EDIREG0(jvj+85)*/
l167:if((KR!=78)) goto l168;
V50=LL+1;
pile[v[22]]=V50; 
(*f[102])( );     /*LND0(V50,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=NR; 
(*f[62])( );     /*INH0(NR)*/
l168:if((KR!=90)) goto l169;
V91=LL+1;
pile[v[22]]=V91; 
(*f[112])( );     /*EAM0(V91)*/
l169:if(RT==incon) goto l170;
l175:if((KR!=70)) goto l176;
V90=LL+1;
pile[v[22]]=10547; pile[WZ1]=109; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(10547,109,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=V90; 
(*f[111])( );     /*EAF0(jvj+86,V90)*/
goto l176;
l170:if((LL!=0)) goto l175;
if((KR<48)) goto l198;
if((KR>57)) goto l198;
V119=135;
l171:if((V119==135)) goto l172;
l173:if(RT==incon) goto l174;
goto l175;
l172:
(*f[124])( );     /*EAP1()*/
RT=135;
goto l173;
l174:if((KR!=37)) goto l175;
V122=LL+1;
pile[v[22]]=V122; 
(*f[125])( );     /*LND1(V122,NK,V120)*/
NK=pile[WZ1]; V120=pile[WZ2]; 
V123=V120+1;
pile[v[22]]=V123; 
(*f[126])( );     /*LND2(V123,V121,KK)*/
V121=pile[WZ1]; KK=pile[WZ2]; 
pile[v[22]]=V121; pile[WZ1]=NK; 
(*f[75])( );     /*EAP0(V121,NK)*/
RT=135;
goto l175;
l184:if(KR!=incon) goto l185;
goto l188;
l185:if(x[jvj+62]!=incon) goto l186;
goto l188;
l186:if((L>=0)) goto l188;
if(KR==83||KR==126) goto l188;
if((v[90]!=0)) goto l187;
if((KR==43)) goto l187;
vv[15]=1;
l187:pile[v[22]]=L; pile[WZ1]=jvj+62; 
(*f[176])( );     /*EDITE2(L,jvj+62)*/
goto l188;
l191:pile[v[22]]=10061; pile[WZ1]=(-20); pile[WZ2]=333; pile[WZ3]=jvj+45; 
(*f[180])( );     /*TRIENS0(10061,(-20),333,jvj+45)*/
pile[v[22]]=jvj+45; 
(*f[85])( );     /*VG0(jvj+45)*/
goto l109;
l192:pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(311,324,jvj+88)*/
l193:if((x[jvj+88]>0)) goto l194;
goto l109;
l194:x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
V396=x[jvj+89];
if((V396>sepbloc)) goto l195;
V398=x[jvj+89];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,0,42,V397)*/
V397=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V398; pile[WZ2]=V397; 
(*f[39])( );     /*SDX0(20,V398,V397,V399)*/
V399=pile[WZ3]; 
pile[v[22]]=V399; 
(*f[40])( );     /*SLG0(V399)*/
pile[v[22]]=jvj+89; 
(*f[182])( );     /*EASU0(jvj+89)*/
l195:x[jvj+88]=t[x[jvj+88]];
goto l193;
l196:V136=134;
goto l15;
l197:V272=134;
goto l29;
l198:V119=134;
goto l171;
}
