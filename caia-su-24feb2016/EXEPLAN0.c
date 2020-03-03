#include "dx.h"
void EXEPLAN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V14=0,NN=0,V23=0,V25=0,V26=0,V200=0,V180=0,V181=0,V182=0,V183=0,V184=0,V185=0,V186=0,V188=0,V189=0,V190=0,V191=0,V193=0,V194=0,V195=0,V196=0,V198=0,V199=0,V201=0,V202=0,V13=0,V8=0,V161=0,V164=0,V162=0,V165=0,V150=0,V155=0,V156=0,V158=0,V159=0,V307=0,V288=0,V289=0,V290=0,V291=0,V292=0,V294=0,V145=0,V296=0,V298=0,V299=0,V301=0,V146=0,V303=0,V305=0,V306=0,V149=0,V144=0,V115=0,V122=0,V123=0,V118=0,V120=0,V254=0,V255=0,V256=0,V257=0,V258=0,V260=0,V262=0,V263=0,V265=0,V114=0,V129=0,V137=0,V138=0,V133=0,V135=0,V286=0,V268=0,V269=0,V270=0,V271=0,V272=0,V113=0,V273=0,V275=0,V277=0,V279=0,V280=0,V282=0,V284=0,V285=0,V128=0,V35=0,V36=0,V111=0,V112=0,V125=0,V126=0,V100=0,V108=0,V104=0,V244=0,V252=0,V233=0,V234=0,V235=0,V236=0,V91=0,V237=0,V239=0,V240=0,V241=0,V243=0,V92=0,V245=0,V247=0,V248=0,V249=0,V251=0,V99=0,V53=0,V210=0,V212=0,V205=0,V206=0,V207=0,V208=0,V209=0,V211=0,V52=0,V62=0,V70=0,V71=0,V66=0,V68=0,V231=0,V214=0,V215=0,V216=0,V217=0,V218=0,V219=0,V220=0,V222=0,V224=0,V225=0,V227=0,V229=0,V230=0,V61=0,I=0,V78=0,LL=0,V76=0,V83=0,V84=0,II=0,V86=0,V167=0,V172=0,V173=0,V168=0,V175=0,JJ=0,V171=0,V169=0,V177=0,V90=0,V323=0,V322=0,V330=0,V329=0;
int M,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=88;
x[jvj+1]=10893;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==970&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[T] ;z[jvj+4]=z[T];
x[jvj+7]=x[M] ;z[jvj+7]=z[M];
l83:x[jvj+14]=x[jvj+15]=x[jvj+33]=x[jvj+35]=x[jvj+36]=incon;
pile[v[22]]=1064; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1064,jvj+7,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+7,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1078,jvj+7,jvj+13)*/
pile[v[22]]=1064; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1064,jvj+13,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(683,jvj+13,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=683; pile[WZ2]=jvj+74; 
(*f[46])( );     /*TRI0(V164,683,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=V162; pile[WZ2]=515; pile[WZ3]=jvj+75; 
(*f[189])( );     /*TRI4(jvj+74,V162,515,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=V161; pile[WZ2]=510; pile[WZ3]=jvj+76; 
(*f[189])( );     /*TRI4(jvj+75,V161,510,jvj+76)*/
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=359; pile[WZ3]=V165; pile[WZ4]=jvj+76; pile[WZ5]=jvj+33; 
(*f[47])( );     /*QUADRI0(158,287,359,V165,jvj+76,jvj+33)*/
l12:pile[v[22]]=jvj+7; pile[WZ1]=jvj+14; 
(*f[1329])( );if(v[102]) goto l13;     /*CALSQUEL0(jvj+7,jvj+14)*/
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=876; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(876,jvj+2,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=1048; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1048,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=269; 
(*f[35])( );     /*CHGC1(jvj+4,269,jvj+3)*/
l1:pile[v[22]]=jvj+4; pile[WZ1]=510; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+4,510,V1)*/
l13:pile[v[22]]=1078; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(1078,jvj+7,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+15; 
(*f[1329])( );if(v[102]) goto l18;     /*CALSQUEL0(jvj+10,jvj+15)*/
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=876; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(876,jvj+5,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=1048; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1048,jvj+5,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=270; 
(*f[35])( );     /*CHGC1(jvj+4,270,jvj+6)*/
l10:pile[v[22]]=jvj+4; pile[WZ1]=515; pile[WZ2]=V8; 
(*f[43])( );     /*CHGC2(jvj+4,515,V8)*/
l11:pile[v[22]]=609; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(609,jvj+4,NN)*/
NN=pile[WZ2]; 
V13=g[517];
if((V13<=0)) goto l18;
V14=vg[517];
if((V14!=0)) goto l2;
if((V13<3)) goto l7;
l2:pile[v[22]]=517; pile[WZ1]=10893; pile[WZ2]=0; pile[WZ3]=(-600); pile[WZ4]=jvj+7; pile[WZ5]=(-620); pile[v[22]+6]=jvj+4; pile[v[22]+7]=(-1578); pile[v[22]+8]=NN; pile[v[22]+9]=jvj+8; 
(*f[1340])( );     /*INTERP16(517,10893,0,(-600),jvj+7,(-620),jvj+4,(-1578),NN,jvj+8)*/
if((x[jvj+8]==135)) goto l6;
l18:if(x[jvj+14]!=incon) goto l19;
l78:pile[v[22]]=405; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(405,jvj+4,V90)*/
V90=pile[WZ2]; 
if((V90!=0)) goto l82;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(510,jvj+4,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(515,jvj+4,V92)*/
V92=pile[WZ2]; 
if((V91>=V92)) goto l82;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+66; 
(*f[378])( );     /*CPI0(jvj+7,jvj+66)*/
pile[v[22]]=1078; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(1078,jvj+66,jvj+67)*/
pile[v[22]]=269; pile[WZ1]=jvj+4; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(269,jvj+4,jvj+68)*/
pile[v[22]]=270; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(270,jvj+4,jvj+69)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[760])( );     /*MEMEX0(jvj+68,jvj+69,jvj+70)*/
if((x[jvj+70]==134)) goto l41;
l82:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+12]=36 ;z[jvj+12]=36;
l8:pile[v[22]]=405; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(405,jvj+4,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=683; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(683,jvj+10,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=1048; pile[WZ1]=jvj+9; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1048,jvj+9,jvj+11)*/
V200=x[jvj+11];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V180; pile[WZ2]=10893; 
(*f[98])( );     /*SRA3(135,V180,10893,V181)*/
V181=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V181; 
(*f[39])( );     /*SDX0(41,7,V181,V182)*/
V182=pile[WZ3]; 
pile[v[22]]=V182; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V182,125,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V183; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V183,683,V184)*/
V184=pile[WZ3]; 
pile[v[22]]=V184; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V184,58,V185)*/
V185=pile[WZ2]; 
pile[v[22]]=V185; pile[WZ1]=V26; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V185,V26,41,V186)*/
V186=pile[WZ3]; 
pile[v[22]]=V186; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V186,44,V188)*/
V188=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V188; pile[WZ2]=405; 
(*f[42])( );     /*SRA1(135,V188,405,V189)*/
V189=pile[WZ3]; 
pile[v[22]]=V189; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V189,58,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=V25; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V190,V25,41,V191)*/
V191=pile[WZ3]; 
pile[v[22]]=V191; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V191,44,V193)*/
V193=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V193; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V193,876,V194)*/
V194=pile[WZ3]; 
pile[v[22]]=V194; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V194,58,V195)*/
V195=pile[WZ2]; 
pile[v[22]]=V195; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V195,V23,41,V196)*/
V196=pile[WZ3]; 
pile[v[22]]=V196; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V196,(-9813),V198)*/
V198=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V200; pile[WZ2]=V198; 
(*f[39])( );     /*SDX0(20,V200,V198,V199)*/
V199=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V199; pile[WZ2]=jvj+12; 
(*f[42])( );     /*SRA1(135,V199,jvj+12,V201)*/
V201=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=NN; pile[WZ2]=V201; 
(*f[39])( );     /*SDX0(41,NN,V201,V202)*/
V202=pile[WZ3]; 
pile[v[22]]=V202; 
(*f[40])( );     /*SLG0(V202)*/
l9:if((V13!=2)) goto l18;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l18;
l5:x[jvj+12]=25 ;z[jvj+12]=25;
goto l8;
l6:if((V13<4)) goto l7;
goto l18;
l7:x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=876; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(876,jvj+9,V23)*/
V23=pile[WZ2]; 
x[jvj+12]=incon;
if((V23<=NN)) goto l3;
x[jvj+12]=52 ;z[jvj+12]=52;
l3:if((V23<NN)) goto l4;
if(x[jvj+12]==incon) goto l5;
goto l8;
l15:if((V149<4)) goto l16;
l84:pile[v[22]]=2; pile[WZ1]=405; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(2,405,jvj+22)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+22; 
(*f[970])( );     /*EXEPLAN0(jvj+16,jvj+22)*/
l31:if(x[jvj+33]!=incon) goto l32;
l35:pile[v[22]]=405; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(405,jvj+4,V113)*/
V113=pile[WZ2]; 
if((V113==0)) goto l36;
if((V113<=0)) goto l42;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(510,jvj+4,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(515,jvj+4,V126)*/
V126=pile[WZ2]; 
if((V125!=V126)) goto l42;
V128=g[514];
if((V128<=0)) goto l42;
V129=vg[514];
if((V129!=0)) goto l26;
if((V128<3)) goto l28;
l26:pile[v[22]]=514; pile[WZ1]=10893; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=jvj+4; pile[WZ5]=(-600); pile[v[22]+6]=jvj+7; pile[v[22]+7]=jvj+30; 
(*f[187])( );     /*INTERP0(514,10893,0,(-620),jvj+4,(-600),jvj+7,jvj+30)*/
if((x[jvj+30]==135)) goto l27;
l42:if(x[jvj+35]!=incon) goto l43;
goto l78;
l16:pile[v[22]]=683; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+16,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+16,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(683,jvj+7,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+7,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=698; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(698,jvj+18,jvj+20)*/
V307=x[jvj+20];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V288)*/
V288=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V288; pile[WZ2]=10893; 
(*f[98])( );     /*SRA3(135,V288,10893,V289)*/
V289=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V289; 
(*f[39])( );     /*SDX0(41,5,V289,V290)*/
V290=pile[WZ3]; 
pile[v[22]]=V290; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V290,125,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V159; pile[WZ2]=V291; 
(*f[39])( );     /*SDX0(41,V159,V291,V292)*/
V292=pile[WZ3]; 
pile[WZ1]=V158; pile[WZ2]=V292; 
(*f[39])( );     /*SDX0(41,V158,V292,V294)*/
V294=pile[WZ3]; 
pile[WZ1]=V145; pile[WZ2]=V294; 
(*f[39])( );     /*SDX0(41,V145,V294,V296)*/
V296=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V296; pile[WZ2]=842; 
(*f[42])( );     /*SRA1(135,V296,842,V298)*/
V298=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V156; pile[WZ2]=V298; 
(*f[39])( );     /*SDX0(41,V156,V298,V299)*/
V299=pile[WZ3]; 
pile[WZ1]=V155; pile[WZ2]=V299; 
(*f[39])( );     /*SDX0(41,V155,V299,V301)*/
V301=pile[WZ3]; 
pile[WZ1]=V146; pile[WZ2]=V301; 
(*f[39])( );     /*SDX0(41,V146,V301,V303)*/
V303=pile[WZ3]; 
pile[v[22]]=V303; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V303,(-9813),V305)*/
V305=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V307; pile[WZ2]=V305; 
(*f[39])( );     /*SDX0(20,V307,V305,V306)*/
V306=pile[WZ3]; 
pile[v[22]]=V306; 
(*f[40])( );     /*SLG0(V306)*/
l17:if((V149!=2)) goto l84;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l84;
l19:if(x[jvj+15]!=incon) goto l20;
goto l78;
l20:pile[v[22]]=405; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(405,jvj+4,V144)*/
V144=pile[WZ2]; 
if((V144!=1)) goto l31;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(510,jvj+4,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(515,jvj+4,V146)*/
V146=pile[WZ2]; 
if((V145<=V146)) goto l31;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+16; 
(*f[378])( );     /*CPI0(jvj+10,jvj+16)*/
pile[v[22]]=1025; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1025,jvj+16,jvj+17)*/
if((x[jvj+17]<=0)) goto l31;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=1078; pile[WZ1]=jvj+7; 
(*f[71])( );     /*ENLV0(1078,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+21; 
(*f[378])( );     /*CPI0(jvj+7,jvj+21)*/
pile[v[22]]=jvj+16; pile[WZ1]=1078; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(jvj+16,1078,jvj+21)*/
V149=g[516];
if((V149<=0)) goto l84;
V150=vg[516];
if((V150!=0)) goto l14;
if((V149<3)) goto l16;
l14:pile[v[22]]=516; pile[WZ1]=10893; pile[WZ2]=0; pile[WZ3]=(-600); pile[WZ4]=jvj+7; pile[WZ5]=(-620); pile[v[22]+6]=jvj+4; pile[v[22]+7]=141; pile[v[22]+8]=jvj+16; pile[v[22]+9]=(-624); pile[v[22]+10]=jvj+18; pile[v[22]+11]=jvj+19; 
(*f[1341])( );     /*INTERP17(516,10893,0,(-600),jvj+7,(-620),jvj+4,141,jvj+16,(-624),jvj+18,jvj+19)*/
if((x[jvj+19]==135)) goto l15;
goto l84;
l21:x[jvj+34]=250 ;z[jvj+34]=250;
l33:pile[v[22]]=270; pile[WZ1]=jvj+4; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(270,jvj+4,jvj+25)*/
pile[v[22]]=269; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(269,jvj+4,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(269,jvj+4,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[760])( );     /*MEMEX0(jvj+24,jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l34;
goto l35;
l23:if((V114<4)) goto l24;
goto l42;
l24:pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(683,jvj+7,V122)*/
V122=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+7,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1078,jvj+7,jvj+29)*/
pile[v[22]]=683; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(683,jvj+29,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+29,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V254)*/
V254=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V254; pile[WZ2]=10893; 
(*f[98])( );     /*SRA3(135,V254,10893,V255)*/
V255=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V255; 
(*f[39])( );     /*SDX0(41,3,V255,V256)*/
V256=pile[WZ3]; 
pile[v[22]]=V256; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V256,125,V257)*/
V257=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V123; pile[WZ2]=V257; 
(*f[39])( );     /*SDX0(41,V123,V257,V258)*/
V258=pile[WZ3]; 
pile[WZ1]=V122; pile[WZ2]=V258; 
(*f[39])( );     /*SDX0(41,V122,V258,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V260; pile[WZ2]=548; 
(*f[42])( );     /*SRA1(135,V260,548,V262)*/
V262=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V120; pile[WZ2]=V262; 
(*f[39])( );     /*SDX0(41,V120,V262,V263)*/
V263=pile[WZ3]; 
pile[WZ1]=V118; pile[WZ2]=V263; 
(*f[39])( );     /*SDX0(41,V118,V263,V265)*/
V265=pile[WZ3]; 
pile[v[22]]=V265; 
(*f[40])( );     /*SLG0(V265)*/
l25:if((V114==2)) goto l30;
goto l42;
l27:if((V128<4)) goto l28;
goto l42;
l28:pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(683,jvj+7,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+7,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1078,jvj+7,jvj+31)*/
pile[v[22]]=683; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(683,jvj+31,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+31,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=270; pile[WZ1]=jvj+4; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(270,jvj+4,jvj+32)*/
V286=x[jvj+32];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V268)*/
V268=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V268; pile[WZ2]=10893; 
(*f[98])( );     /*SRA3(135,V268,10893,V269)*/
V269=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V269; 
(*f[39])( );     /*SDX0(41,4,V269,V270)*/
V270=pile[WZ3]; 
pile[v[22]]=V270; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V270,125,V271)*/
V271=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V271; pile[WZ2]=499; 
(*f[42])( );     /*SRA1(135,V271,499,V272)*/
V272=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V113; pile[WZ2]=V272; 
(*f[39])( );     /*SDX0(41,V113,V272,V273)*/
V273=pile[WZ3]; 
pile[WZ1]=V138; pile[WZ2]=V273; 
(*f[39])( );     /*SDX0(41,V138,V273,V275)*/
V275=pile[WZ3]; 
pile[WZ1]=V137; pile[WZ2]=V275; 
(*f[39])( );     /*SDX0(41,V137,V275,V277)*/
V277=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V277; pile[WZ2]=548; 
(*f[42])( );     /*SRA1(135,V277,548,V279)*/
V279=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V135; pile[WZ2]=V279; 
(*f[39])( );     /*SDX0(41,V135,V279,V280)*/
V280=pile[WZ3]; 
pile[WZ1]=V133; pile[WZ2]=V280; 
(*f[39])( );     /*SDX0(41,V133,V280,V282)*/
V282=pile[WZ3]; 
pile[v[22]]=V282; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V282,(-9813),V284)*/
V284=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V286; pile[WZ2]=V284; 
(*f[39])( );     /*SDX0(20,V286,V284,V285)*/
V285=pile[WZ3]; 
pile[v[22]]=V285; 
(*f[40])( );     /*SLG0(V285)*/
l29:if((V128==2)) goto l30;
goto l42;
l30:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l42;
l32:pile[v[22]]=515; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(515,jvj+4,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(510,jvj+4,V36)*/
V36=pile[WZ2]; 
if((V35<=V36)) goto l35;
x[jvj+34]=incon;
pile[v[22]]=269; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(269,jvj+4,jvj+27)*/
x[jvj+34]=x[jvj+27] ;z[jvj+34]=z[jvj+27];
goto l33;
l34:pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+7; pile[WZ3]=jvj+25; pile[WZ4]=jvj+33; pile[WZ5]=jvj+34; pile[v[22]+6]=jvj+35; pile[v[22]+7]=jvj+36; 
(*f[1330])( );if(v[102]) goto l35;     /*BILEXPLIQUE0(jvj+14,jvj+15,jvj+7,jvj+25,jvj+33,jvj+34,jvj+35,jvj+36)*/
goto l35;
l36:pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(510,jvj+4,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(515,jvj+4,V112)*/
V112=pile[WZ2]; 
if((V111!=V112)) goto l42;
V114=g[513];
if((V114<=0)) goto l42;
V115=vg[513];
if((V115!=0)) goto l22;
if((V114<3)) goto l24;
l22:pile[v[22]]=513; pile[WZ1]=10893; pile[WZ2]=0; pile[WZ3]=(-600); pile[WZ4]=jvj+7; pile[WZ5]=jvj+28; 
(*f[232])( );     /*INTERP3(513,10893,0,(-600),jvj+7,jvj+28)*/
if((x[jvj+28]==135)) goto l23;
goto l42;
l38:if((V99<4)) goto l39;
l85:pile[v[22]]=698; pile[WZ1]=jvj+68; pile[WZ2]=1110; pile[WZ3]=1; pile[WZ4]=jvj+71; 
(*f[192])( );     /*QUADRI4(698,jvj+68,1110,1,jvj+71)*/
pile[v[22]]=jvj+67; pile[WZ1]=1025; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+67,1025,jvj+71)*/
x[jvj+7]=x[jvj+66] ;z[jvj+7]=z[jvj+66];
pile[v[22]]=V92; pile[WZ1]=610; pile[WZ2]=jvj+77; 
(*f[46])( );     /*TRI0(V92,610,jvj+77)*/
pile[v[22]]=405; pile[WZ1]=1; pile[WZ2]=609; pile[WZ3]=V91; pile[WZ4]=jvj+77; pile[WZ5]=jvj+4; 
(*f[190])( );     /*QUADRI3(405,1,609,V91,jvj+77,jvj+4)*/
goto l83;
l39:pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(683,jvj+7,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1078,jvj+7,jvj+38)*/
pile[v[22]]=683; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(683,jvj+38,V104)*/
V104=pile[WZ2]; 
V244=x[jvj+68];
V252=x[jvj+69];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V233; pile[WZ2]=10893; 
(*f[98])( );     /*SRA3(135,V233,10893,V234)*/
V234=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V234; 
(*f[39])( );     /*SDX0(41,6,V234,V235)*/
V235=pile[WZ3]; 
pile[v[22]]=V235; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V235,125,V236)*/
V236=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V91; pile[WZ2]=V236; 
(*f[39])( );     /*SDX0(41,V91,V236,V237)*/
V237=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V237; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V237,683,V239)*/
V239=pile[WZ3]; 
pile[v[22]]=V239; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V239,58,V240)*/
V240=pile[WZ2]; 
pile[v[22]]=V240; pile[WZ1]=V108; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V240,V108,41,V241)*/
V241=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V244; pile[WZ2]=V241; 
(*f[39])( );     /*SDX0(20,V244,V241,V243)*/
V243=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V92; pile[WZ2]=V243; 
(*f[39])( );     /*SDX0(41,V92,V243,V245)*/
V245=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V245; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V245,683,V247)*/
V247=pile[WZ3]; 
pile[v[22]]=V247; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V247,58,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=V248; pile[WZ1]=V104; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V248,V104,41,V249)*/
V249=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V252; pile[WZ2]=V249; 
(*f[39])( );     /*SDX0(20,V252,V249,V251)*/
V251=pile[WZ3]; 
pile[v[22]]=V251; 
(*f[40])( );     /*SLG0(V251)*/
l40:if((V99!=2)) goto l85;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l85;
l41:V99=g[515];
if((V99<=0)) goto l85;
V100=vg[515];
if((V100!=0)) goto l37;
if((V99<3)) goto l39;
l37:pile[v[22]]=515; pile[WZ1]=10893; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=jvj+4; pile[WZ5]=(-600); pile[v[22]+6]=jvj+7; pile[v[22]+7]=jvj+37; 
(*f[187])( );     /*INTERP0(515,10893,0,(-620),jvj+4,(-600),jvj+7,jvj+37)*/
if((x[jvj+37]==135)) goto l38;
goto l85;
l43:if(x[jvj+36]!=incon) goto l44;
goto l82;
l44:pile[v[22]]=jvj+7; pile[WZ1]=392; pile[WZ2]=jvj+36; pile[WZ3]=jvj+35; pile[WZ4]=jvj+39; pile[WZ5]=jvj+40; 
(*f[1331])( );     /*CALCHEM0(jvj+7,392,jvj+36,jvj+35,jvj+39,jvj+40)*/
pile[v[22]]=1078; pile[WZ1]=jvj+7; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(1078,jvj+7,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=205; pile[WZ2]=jvj+36; pile[WZ3]=jvj+35; pile[WZ4]=jvj+42; pile[WZ5]=jvj+43; 
(*f[1331])( );     /*CALCHEM0(jvj+41,205,jvj+36,jvj+35,jvj+42,jvj+43)*/
if((x[jvj+39]!=80)) goto l82;
if((x[jvj+42]!=80)) goto l82;
x[jvj+52]=0 ;z[jvj+52]=0;
x[jvj+87]=x[jvj+43] ;z[jvj+87]=z[jvj+43];
l48:if((x[jvj+87]>0)) goto l49;
x[jvj+60]=x[jvj+52] ;z[jvj+60]=z[jvj+52];
x[jvj+88]=x[jvj+60] ;z[jvj+88]=z[jvj+60];
l56:if((x[jvj+88]>0)) goto l57;
if((x[jvj+60]==0)) goto l79;
pile[v[22]]=jvj+7; pile[WZ1]=392; pile[WZ2]=jvj+36; pile[WZ3]=jvj+35; pile[WZ4]=jvj+60; pile[WZ5]=jvj+61; 
(*f[1332])( );     /*CALCHEM1(jvj+7,392,jvj+36,jvj+35,jvj+60,jvj+61)*/
if((x[jvj+61]!=80)) goto l68;
x[jvj+59]=vo[14];z[jvj+59]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(642,jvj+59,V76)*/
V76=pile[WZ2]; 
I=0;
l63:if((I<=V76)) goto l64;
pile[v[22]]=V76; pile[WZ1]=68; 
(*f[1333])( );     /*MONTECONTR0(V76,68)*/
V78=vv[29];
if((V78<=1)) goto l66;
LL=1;
l65:if((LL>V76)) goto l66;
pile[v[22]]=LL; 
(*f[1187])( );     /*SORELT0(LL)*/
LL++;
goto l65;
l47:pile[v[22]]=80; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(80,jvj+47,jvj+50)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+46,jvj+50,jvj+51)*/
if((x[jvj+51]==135)) goto l50;
l46:x[jvj+86]=t[x[jvj+86]];
l45:if((x[jvj+86]<=0)) goto l51;
x[jvj+47]=s[x[jvj+86]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+86];
pile[v[22]]=287; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(287,jvj+47,jvj+48)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[760])( );     /*MEMEX0(jvj+45,jvj+48,jvj+49)*/
if((x[jvj+49]==135)) goto l47;
goto l46;
l49:x[jvj+44]=s[x[jvj+87]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+87];
pile[v[22]]=287; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(287,jvj+44,jvj+45)*/
pile[v[22]]=80; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(80,jvj+44,jvj+46)*/
x[jvj+86]=x[jvj+40] ;z[jvj+86]=z[jvj+40];
goto l45;
l51:pile[v[22]]=jvj+52; pile[WZ1]=jvj+44; 
(*f[68])( );     /*PLUE0(jvj+52,jvj+44)*/
l50:x[jvj+87]=t[x[jvj+87]];
goto l48;
l53:if((V52<4)) goto l54;
l58:x[jvj+88]=t[x[jvj+88]];
goto l56;
l54:pile[v[22]]=80; pile[WZ1]=jvj+53; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(80,jvj+53,jvj+55)*/
pile[v[22]]=287; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(287,jvj+53,jvj+56)*/
V210=x[jvj+56];
V212=x[jvj+55];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V205)*/
V205=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V205; pile[WZ2]=10893; 
(*f[98])( );     /*SRA3(135,V205,10893,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V206; 
(*f[39])( );     /*SDX0(41,2,V206,V207)*/
V207=pile[WZ3]; 
pile[v[22]]=V207; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V207,125,V208)*/
V208=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V210; pile[WZ2]=V208; 
(*f[39])( );     /*SDX0(20,V210,V208,V209)*/
V209=pile[WZ3]; 
pile[WZ1]=V212; pile[WZ2]=V209; 
(*f[39])( );     /*SDX0(20,V212,V209,V211)*/
V211=pile[WZ3]; 
pile[v[22]]=V211; 
(*f[40])( );     /*SLG0(V211)*/
l55:if((V52!=2)) goto l58;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l58;
l57:x[jvj+53]=s[x[jvj+88]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+88];
V52=g[512];
if((V52<=0)) goto l58;
V53=vg[512];
if((V53!=0)) goto l52;
if((V52<3)) goto l54;
l52:pile[v[22]]=512; pile[WZ1]=10893; pile[WZ2]=0; pile[WZ3]=(-606); pile[WZ4]=jvj+53; pile[WZ5]=jvj+54; 
(*f[232])( );     /*INTERP3(512,10893,0,(-606),jvj+53,jvj+54)*/
if((x[jvj+54]==135)) goto l53;
goto l58;
l60:if((V61<4)) goto l61;
l81:pile[v[22]]=jvj+33; pile[WZ1]=158; pile[WZ2]=74; 
(*f[35])( );     /*CHGC1(jvj+33,158,74)*/
pile[WZ1]=447; pile[WZ2]=jvj+72; 
(*f[35])( );     /*CHGC1(jvj+33,447,jvj+72)*/
pile[v[22]]=jvj+73; pile[WZ1]=1244; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+73,1244,jvj+33)*/
goto l82;
l61:pile[v[22]]=683; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(683,jvj+7,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(117,jvj+7,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(1078,jvj+7,jvj+58)*/
pile[v[22]]=683; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(683,jvj+58,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(117,jvj+58,V68)*/
V68=pile[WZ2]; 
V231=x[jvj+72];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V214)*/
V214=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V214; pile[WZ2]=10893; 
(*f[98])( );     /*SRA3(135,V214,10893,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V215; 
(*f[39])( );     /*SDX0(41,1,V215,V216)*/
V216=pile[WZ3]; 
pile[v[22]]=V216; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V216,125,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V217; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,V217,876,V218)*/
V218=pile[WZ3]; 
pile[v[22]]=V218; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V218,(-9543),V219)*/
V219=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V71; pile[WZ2]=V219; 
(*f[39])( );     /*SDX0(41,V71,V219,V220)*/
V220=pile[WZ3]; 
pile[WZ1]=V70; pile[WZ2]=V220; 
(*f[39])( );     /*SDX0(41,V70,V220,V222)*/
V222=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V222; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V222,48,V224)*/
V224=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V68; pile[WZ2]=V224; 
(*f[39])( );     /*SDX0(41,V68,V224,V225)*/
V225=pile[WZ3]; 
pile[WZ1]=V66; pile[WZ2]=V225; 
(*f[39])( );     /*SDX0(41,V66,V225,V227)*/
V227=pile[WZ3]; 
pile[v[22]]=V227; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V227,(-9813),V229)*/
V229=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V231; pile[WZ2]=V229; 
(*f[39])( );     /*SDX0(20,V231,V229,V230)*/
V230=pile[WZ3]; 
pile[v[22]]=V230; 
(*f[40])( );     /*SLG0(V230)*/
l62:if((V61!=2)) goto l81;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l81;
l64:tu[I]=0;
I++;
goto l63;
l66:pile[v[22]]=1; pile[WZ1]=V76; pile[WZ2]=jvj+4; pile[WZ3]=0; 
(*f[1334])( );     /*COMPRIMUTILE0(1,V76,jvj+4,0)*/
V83=vv[29];
if((V83<=0)) goto l68;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(117,jvj+4,V84)*/
V84=pile[WZ2]; 
II=1;
l67:if((II>V84)) goto l68;
ctx[II]=0;
pile[v[22]]=II; 
(*f[1335])( );     /*CSORELT0(II)*/
II++;
goto l67;
l68:if((x[jvj+61]!=80)) goto l79;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(117,jvj+4,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=1078; pile[WZ1]=jvj+7; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(1078,jvj+7,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=205; pile[WZ2]=jvj+36; pile[WZ3]=jvj+35; pile[WZ4]=jvj+63; 
(*f[1336])( );     /*CALCHEM2(jvj+62,205,jvj+36,jvj+35,jvj+63)*/
if(x[jvj+33]!=incon) goto l76;
goto l82;
l70:ctw[V167]=0;
V167++;
l69:if((V167<=V171)) goto l70;
V172=vv[29];
if((V172!=2)) goto l73;
x[jvj+64]=vo[14];z[jvj+64]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(642,jvj+64,V173)*/
V173=pile[WZ2]; 
V168=1;
l71:if((V168>V173)) goto l73;
pile[v[22]]=V168; 
(*f[1187])( );     /*SORELT0(V168)*/
V168++;
goto l71;
l73:pile[v[22]]=V171; 
(*f[1337])( );     /*MARCOMP0(V171)*/
V175=vv[29];
if((V175<=0)) goto l77;
JJ=1;
l72:if((JJ>V171)) goto l77;
pile[v[22]]=JJ; 
(*f[1335])( );     /*CSORELT0(JJ)*/
JJ++;
goto l72;
l76:if((x[jvj+63]!=80)) goto l82;
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(117,jvj+4,V171)*/
V171=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(109,jvj+7,jvj+78)*/
pile[v[22]]=983; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(983,jvj+78,jvj+79)*/
pile[v[22]]=878; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(878,jvj+79,jvj+80)*/
l86:if((x[jvj+80]<=0)) goto l82;
x[jvj+81]=s[x[jvj+80]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+80];
pile[v[22]]=163; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l87;     /*FNDC1(163,jvj+81,V323)*/
V323=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l87;     /*FNDC1(163,jvj+7,V322)*/
V322=pile[WZ2]; 
if((V323==V322)) goto l87;
x[jvj+80]=t[x[jvj+80]];
goto l86;
l77:pile[v[22]]=jvj+65; pile[WZ1]=1244; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+65,1244,jvj+33)*/
ctx[V171]=1;
pile[v[22]]=V171; pile[WZ1]=jvj+4; 
(*f[1338])( );     /*MARNOUV0(V171,jvj+4)*/
V169=1;
l74:if((V169>V171)) goto l82;
V177=ctx[V169];
if((V177==0)) goto l75;
pile[v[22]]=V169; pile[WZ1]=jvj+4; pile[WZ2]=jvj+33; 
(*f[1339])( );     /*CSORELT1(V169,jvj+4,jvj+33)*/
l75:V169++;
goto l74;
l79:if(x[jvj+33]!=incon) goto l80;
goto l82;
l80:if((x[jvj+60]!=0)) goto l82;
pile[v[22]]=270; pile[WZ1]=jvj+4; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(270,jvj+4,jvj+72)*/
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(109,jvj+7,jvj+82)*/
pile[v[22]]=983; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l82;     /*FNDO0(983,jvj+82,jvj+83)*/
pile[v[22]]=878; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(878,jvj+83,jvj+84)*/
l88:if((x[jvj+84]<=0)) goto l82;
x[jvj+85]=s[x[jvj+84]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+84];
pile[v[22]]=163; pile[WZ1]=jvj+85; 
(*f[44])( );if(v[102]) goto l89;     /*FNDC1(163,jvj+85,V330)*/
V330=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l89;     /*FNDC1(163,jvj+7,V329)*/
V329=pile[WZ2]; 
if((V330==V329)) goto l89;
x[jvj+84]=t[x[jvj+84]];
goto l88;
l87:x[jvj+65]=x[jvj+81] ;z[jvj+65]=z[jvj+81];
V167=0;
goto l69;
l89:x[jvj+73]=x[jvj+85] ;z[jvj+73]=z[jvj+85];
V61=g[504];
if((V61<=0)) goto l81;
V62=vg[504];
if((V62!=0)) goto l59;
if((V61<3)) goto l61;
l59:pile[v[22]]=504; pile[WZ1]=10893; pile[WZ2]=0; pile[WZ3]=(-600); pile[WZ4]=jvj+7; pile[WZ5]=(-620); pile[v[22]+6]=jvj+4; pile[v[22]+7]=jvj+57; 
(*f[187])( );     /*INTERP0(504,10893,0,(-600),jvj+7,(-620),jvj+4,jvj+57)*/
if((x[jvj+57]==135)) goto l60;
goto l81;
}
