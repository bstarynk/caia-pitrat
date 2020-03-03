#include "dx.h"
void LEXP1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V28=0,V246=0,V247=0,V29=0,V248=0,V249=0,V31=0,V250=0,V251=0,V38=0,V252=0,V253=0,V75=0,V258=0,V259=0,V168=0,V267=0,V268=0,V172=0,V208=0,V209=0,V206=0,V83=0,V85=0,V84=0,V86=0,DX=0,V127=0,V126=0,V128=0,V201=0,V200=0,V202=0,N=0,J=0,V204=0,JJ=0,V4=0,V6=0,V8=0,NR=0,V9=0,V10=0,V17=0,V14=0,V205=0,DW=0,V174=0,V175=0,V170=0,V179=0,V34=0,V33=0,V36=0,V35=0,V156=0,V158=0,V165=0,V167=0,V72=0,V74=0,V25=0,V24=0,V18=0,V26=0,DYY=0,V27=0,V219=0,DQ=0,V212=0,V214=0,V213=0,DZZ=0,V235=0,V234=0,V229=0,V237=0,V47=0,V43=0,V130=0,V139=0,V141=0,V132=0,V180=0,A=0,V182=0,V198=0,V41=0,RR=0,V55=0,V50=0,V54=0,DZ=0,DT=0,V103=0,V62=0,V254=0,V255=0,V66=0,V71=0,V256=0,V257=0,V142=0,V151=0,V150=0,V149=0,V152=0,V145=0,V58=0,V56=0,V61=0,V63=0,V70=0,V113=0,V114=0,V115=0,V124=0,V90=0,V92=0,V91=0,DN=0,V79=0,V260=0,V261=0,V77=0,V76=0,V78=0,V93=0,V100=0,V226=0,D=0,V220=0,V227=0,V228=0,V215=0,V217=0,V216=0,V218=0,V262=0,V263=0,V264=0,V265=0,V12=0,V171=0,V303=0,V241=0,V305=0,V231=0,V307=0,V49=0;
int DR;
int DY,EX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=84;
x[jvj+1]=10327;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==267&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DR=pile[v[22]]; EX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[EX]=DX=x[jvj+29]=DZ=x[jvj+37]=DT=x[jvj+28]=DN=x[jvj+44]=DY=incon;
V83=bh[v[1]][DR];
if((V83==42)) goto l6;
if((V83==91)) goto l10;
if((V83==35)) goto l11;
if((V83!=64)) goto l12;
pile[v[22]]=DR; 
(*f[253])( );     /*CRR1(DR,JJ)*/
JJ=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l12;     /*SMA0(DR,64,67,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+5,EX)*/
DX=JJ;
l25:V219=DR-1;
DQ=V219;
if(x[EX]==incon) goto l27;
l36:V55=bh[v[1]][DR];
V307=V55;
if((V307>=97)) goto l85;
if((V307<65)) goto l83;
if((V307<=90)) goto l84;
l83:V49=134;
l37:if((V49==135)) goto l38;
l43:if(DX==incon) goto l44;
l56:V90=bh[v[1]][DR];
if((V90!=91)) goto l57;
V92=DR+1;
V91=bh[v[1]][V92];
if((V91==93)) goto l57;
pile[v[22]]=DR; pile[WZ1]=jvj+44; 
(*f[79])( );if(v[102]) goto l57;     /*LEXP0(DR,jvj+44,DN)*/
DN=pile[WZ2]; 
l57:if(DX==incon) goto l58;
l63:V215=bh[v[1]][DX];
if((V215!=32)) goto l64;
V217=DX-1;
V216=bh[v[1]][V217];
if((V216==32)) goto l64;
V218=DX+1;
DY=V218;
l65:if(x[EX]==incon) goto l72;
l68:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+1]=DY; v[102]=0;return;
l3:V172=incon;
if((V83==126)) goto l4;
V172=sephist;
l20:pile[v[22]]=V174; 
(*f[126])( );     /*LND2(V174,V170,DX)*/
V170=pile[WZ1]; DX=pile[WZ2]; 
V179=V170+V172;
x[jvj+54]=V179 ;z[jvj+54]=(V179<=sepcte) ? V179 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+54; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+54,EX)*/
goto l25;
l4:V172=sepfacts;
goto l20;
l5:V209=DW+1;
V206=V209;
l69:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V205; pile[WZ4]=EX; 
(*f[270])( );     /*QUADRI7(100,21,140,V205,EX)*/
pile[v[22]]=V206; pile[WZ1]=EX; 
(*f[265])( );     /*LAFTER0(V206,EX,DX)*/
DX=pile[WZ2]; 
goto l25;
l6:V85=DR+1;
V84=bh[v[1]][V85];
if((V84==42)) goto l7;
V303=V84;
if((V303>=97)) goto l78;
if((V303<65)) goto l76;
if((V303<=90)) goto l77;
l76:V241=134;
l8:if((V241==135)) goto l9;
l12:if(V83!=36&&V83!=38&&V83!=124&&V83!=34&&V83!=(-80)&&V83!=35) goto l13;
pile[v[22]]=DR; 
(*f[107])( );     /*CRC0(DR,V4)*/
V4=pile[WZ1]; 
V6=DR-1;
pile[v[22]]=V6; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l13;     /*SMA0(V6,64,67,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+6,EX)*/
DX=V4;
goto l25;
l7:V86=V85+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+51)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+51; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+51,EX)*/
DX=V86;
goto l25;
l9:pile[v[22]]=DR; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l12;     /*LEXP0(DR,jvj+3,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+53; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+53,EX)*/
goto l25;
l10:V127=DR+1;
V126=bh[v[1]][V127];
if((V126!=93)) goto l12;
V128=V127+1;
DX=V128;
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(128,100,EX)*/
goto l25;
l11:V201=DR+1;
V200=bh[v[1]][V201];
if((V200!=35)) goto l12;
V202=V201+1;
pile[v[22]]=V202; 
(*f[264])( );if(v[102]) goto l12;     /*LEXCMT0(V202,N,J)*/
N=pile[WZ1]; J=pile[WZ2]; 
V204=J+1;
pile[v[22]]=100; pile[WZ1]=1317; pile[WZ2]=1352; pile[WZ3]=N; pile[WZ4]=EX; 
(*f[271])( );     /*QUADRI8(100,1317,1352,N,EX)*/
DX=V204;
goto l25;
l13:if((V83==45)) goto l14;
if((V83<48)) goto l74;
if((V83>57)) goto l74;
V12=135;
l15:if((V12==135)) goto l16;
if((V83==(-89))) goto l17;
if((V83==58)) goto l18;
if(V83!=(-75)&&V83!=126) goto l21;
V174=DR+1;
V175=bh[v[1]][V174];
if((V175<48)) goto l75;
if((V175>57)) goto l75;
V171=135;
l19:if((V171==135)) goto l3;
l21:if((V83==39)) goto l22;
if(V83!=60&&V83!=62) goto l23;
pile[v[22]]=DR; pile[WZ2]=jvj+7; 
(*f[263])( );if(v[102]) goto l23;     /*LIREL0(DR,V156,jvj+7)*/
V156=pile[WZ1]; 
pile[v[22]]=V156; pile[WZ2]=jvj+8; 
(*f[263])( );if(v[102]) goto l23;     /*LIREL0(V156,V158,jvj+8)*/
V158=pile[WZ1]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+10)*/
V165=V158+1;
V167=bh[v[1]][V158];
DX=V165;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V83; pile[WZ4]=jvj+57; 
(*f[272])( );     /*QUADRI9(100,89,162,V83,jvj+57)*/
pile[WZ3]=V167; pile[WZ4]=jvj+55; 
(*f[272])( );     /*QUADRI9(100,89,162,V167,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=644; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,644,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=628; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,628,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+10; pile[WZ2]=103; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+58,jvj+10,103,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=566; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+59; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,566,102,jvj+9,jvj+59,EX)*/
V168=bh[v[1]][V156];
if(V168==58) goto l25;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V267)*/
V267=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=10; pile[WZ2]=V267; 
(*f[39])( );     /*SDX0(41,10,V267,V268)*/
V268=pile[WZ3]; 
pile[v[22]]=V268; 
(*f[40])( );     /*SLG0(V268)*/
goto l25;
l14:V8=DR+1;
pile[v[22]]=V8; 
(*f[126])( );     /*LND2(V8,NR,DX)*/
NR=pile[WZ1]; DX=pile[WZ2]; 
V9=(-NR);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,EX)*/
goto l25;
l16:pile[v[22]]=DR; 
(*f[126])( );     /*LND2(DR,V10,DX)*/
V10=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,EX)*/
goto l25;
l17:V17=DR+1;
pile[v[22]]=V17; pile[WZ1]=16; 
(*f[254])( );     /*LND4(V17,16,V14,DX)*/
V14=pile[WZ2]; DX=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,EX)*/
goto l25;
l18:pile[v[22]]=DR; 
(*f[131])( );     /*SMV0(DR,V205,DW)*/
V205=pile[WZ1]; DW=pile[WZ2]; 
V206=incon;
V208=bh[v[1]][DW];
if((V208==32)) goto l5;
V206=DW;
goto l69;
l22:V34=DR+1;
V33=bh[v[1]][V34];
V36=V34+1;
V35=V36+1;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V33; pile[WZ4]=EX; 
(*f[272])( );     /*QUADRI9(100,89,162,V33,EX)*/
DX=V35;
V38=bh[v[1]][V36];
if(V38==39) goto l25;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V252)*/
V252=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V252; 
(*f[39])( );     /*SDX0(41,4,V252,V253)*/
V253=pile[WZ3]; 
pile[v[22]]=V253; 
(*f[40])( );     /*SLG0(V253)*/
goto l25;
l23:if((V83==40)) goto l70;
if(V83!=46&&V83!=38&&V83!=124&&V83!=95&&V83!=43) goto l24;
pile[v[22]]=DR; pile[WZ1]=EX; 
(*f[262])( );if(v[102]) goto l24;     /*LPAT0(DR,EX,DX)*/
DX=pile[WZ2]; 
goto l25;
l24:if((V83!=123)) goto l25;
V25=DR+1;
V24=bh[v[1]][V25];
if((V24==123)) goto l25;
pile[v[22]]=DR; pile[WZ1]=jvj+11; 
(*f[79])( );if(v[102]) goto l25;     /*LEXP0(DR,jvj+11,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
V26=V18+1;
pile[v[22]]=V26; pile[WZ1]=jvj+13; 
(*f[79])( );if(v[102]) goto l25;     /*LEXP0(V26,jvj+13,DYY)*/
DYY=pile[WZ2]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
V27=DYY+1;
pile[v[22]]=jvj+14; pile[WZ1]=103; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+14,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+60; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+12,jvj+60,EX)*/
DX=V27;
V28=bh[v[1]][V18];
if(V28==125) goto l1;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V246)*/
V246=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V246; 
(*f[39])( );     /*SDX0(41,1,V246,V247)*/
V247=pile[WZ3]; 
pile[v[22]]=V247; 
(*f[40])( );     /*SLG0(V247)*/
l1:V29=bh[v[1]][V26];
if(V29==40) goto l2;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V248)*/
V248=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V248; 
(*f[39])( );     /*SDX0(41,2,V248,V249)*/
V249=pile[WZ3]; 
pile[v[22]]=V249; 
(*f[40])( );     /*SLG0(V249)*/
l2:V31=bh[v[1]][DYY];
if(V31==41) goto l25;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V250; 
(*f[39])( );     /*SDX0(41,3,V250,V251)*/
V251=pile[WZ3]; 
pile[v[22]]=V251; 
(*f[40])( );     /*SLG0(V251)*/
goto l25;
l26:pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=A; pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(100,21,140,A,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+62,jvj+20,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=979; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+63; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,979,102,jvj+18,jvj+63,jvj+64)*/
l34:x[EX]=x[jvj+64] ;z[EX]=z[jvj+64];
DX=V198;
goto l36;
l27:if(DX==incon) goto l28;
goto l36;
l28:V212=bh[v[1]][DR];
if((V212!=35)) goto l79;
V214=DR+1;
V213=bh[v[1]][V214];
if((V213==35)) goto l79;
pile[v[22]]=DQ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+21; 
(*f[78])( );if(v[102]) goto l79;     /*SMA0(DQ,64,67,jvj+21)*/
(*f[107])( );     /*CRC0(DQ,DX)*/
DX=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,EX)*/
goto l36;
l30:pile[v[22]]=DQ; 
(*f[107])( );     /*CRC0(DQ,DZZ)*/
DZZ=pile[WZ1]; 
V235=bh[v[1]][DZZ];
if((V235!=32)) goto l31;
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+22; 
(*f[78])( );if(v[102]) goto l31;     /*SMA0(DQ,64,67,jvj+22)*/
pile[v[22]]=118; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(118,jvj+22,V234)*/
V234=pile[WZ2]; 
if((V234<0)) goto l31;
pile[v[22]]=1825; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1825,jvj+22,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+22; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+22,jvj+68)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+68; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+68,EX)*/
pile[v[22]]=EX; pile[WZ1]=jvj+22; pile[WZ2]=DZZ; 
(*f[268])( );     /*LEXTNOM0(EX,jvj+22,DZZ,V229)*/
V229=pile[WZ3]; 
V237=V229+1;
DX=V237;
goto l36;
l31:V47=bh[v[1]][DZZ];
if(V47!=40&&V47!=91&&V47!=123&&V47!=47&&V47!=92&&V47!=33) goto l32;
if((V47!=33)) goto l33;
pile[v[22]]=DZZ; pile[WZ1]=jvj+24; 
(*f[79])( );if(v[102]) goto l33;     /*LEXP0(DZZ,jvj+24,V130)*/
V130=pile[WZ2]; 
V139=bh[v[1]][V130];
if((V139!=41)) goto l33;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
V141=V130+1;
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,V132)*/
V132=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V132; pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(100,21,140,V132,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=531; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+70; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,531,102,jvj+25,jvj+70,EX)*/
DX=V141;
goto l36;
l32:DX=DZZ;
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,V43)*/
V43=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V43; pile[WZ4]=EX; 
(*f[270])( );     /*QUADRI7(100,21,140,V43,EX)*/
goto l36;
l33:if(V47!=47&&V47!=92) goto l35;
pile[v[22]]=DZZ; pile[WZ1]=jvj+17; 
(*f[79])( );if(v[102]) goto l35;     /*LEXP0(DZZ,jvj+17,V180)*/
V180=pile[WZ2]; 
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,A)*/
A=pile[WZ1]; 
pile[v[22]]=V180; pile[WZ1]=jvj+19; 
(*f[79])( );if(v[102]) goto l35;     /*LEXP0(V180,jvj+19,V182)*/
V182=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+26)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+27)*/
V198=V182+1;
x[jvj+64]=incon;
if((V47==47)) goto l26;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=A; pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(100,21,140,A,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+66,jvj+27,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=1027; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+67; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,1027,102,jvj+26,jvj+67,jvj+64)*/
goto l34;
l38:pile[v[22]]=DQ; 
(*f[107])( );     /*CRC0(DQ,V50)*/
V50=pile[WZ1]; 
V54=bh[v[1]][V50];
if(V54!=40&&V54!=91) goto l40;
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+15; 
(*f[78])( );if(v[102]) goto l40;     /*SMA0(DQ,64,67,jvj+15)*/
pile[v[22]]=1825; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1825,jvj+15,jvj+16)*/
l40:if((V54!=123)) goto l43;
pile[v[22]]=V50; pile[WZ1]=jvj+28; 
(*f[79])( );if(v[102]) goto l43;     /*LEXP0(V50,jvj+28,DT)*/
DT=pile[WZ2]; 
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,V103)*/
V103=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V103; pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,V103,jvj+37)*/
goto l43;
l39:x[jvj+29]=x[jvj+15] ;z[jvj+29]=z[jvj+15];
DZ=V50;
goto l40;
l42:pile[v[22]]=118; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(118,jvj+29,V142)*/
V142=pile[WZ2]; 
l51:if(x[jvj+37]!=incon) goto l52;
goto l56;
l44:if(x[EX]==incon) goto l45;
goto l56;
l45:if(x[jvj+29]!=incon) goto l46;
goto l51;
l46:if(DZ!=incon) goto l47;
goto l51;
l47:V151=DZ+1;
V150=bh[v[1]][V151];
if((V150==46)) goto l48;
pile[v[22]]=118; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(118,jvj+29,V58)*/
V58=pile[WZ2]; 
if((V58<0)) goto l41;
pile[v[22]]=1825; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(1825,jvj+29,jvj+30)*/
l41:pile[v[22]]=118; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(118,jvj+29,V66)*/
V66=pile[WZ2]; 
goto l51;
l48:pile[v[22]]=118; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(118,jvj+29,V149)*/
V149=pile[WZ2]; 
if((V149!=1)) goto l42;
x[jvj+31]=vo[20];z[jvj+31]=vz[20];
pile[v[22]]=274; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(274,jvj+31,jvj+32)*/
V152=V151+1;
DX=V152;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+71)*/
pile[WZ3]=jvj+32; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+32,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+72,EX)*/
goto l56;
l49:x[jvj+33]=vo[20];z[jvj+33]=vz[20];
pile[v[22]]=274; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(274,jvj+33,jvj+34)*/
V145=V151+1;
DX=V145;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+76)*/
pile[WZ3]=jvj+34; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=103; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+76; pile[WZ4]=jvj+75; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+76,jvj+75,EX)*/
goto l56;
l50:pile[v[22]]=DZ; pile[WZ1]=jvj+35; 
(*f[79])( );if(v[102]) goto l51;     /*LEXP0(DZ,jvj+35,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
V70=V63+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+79)*/
pile[v[22]]=jvj+36; pile[WZ1]=103; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+36,103,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+79,jvj+78,EX)*/
DX=V70;
V71=bh[v[1]][V63];
if(V71==41) goto l56;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V256)*/
V256=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V256; 
(*f[39])( );     /*SDX0(41,6,V256,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=V257; 
(*f[40])( );     /*SLG0(V257)*/
goto l56;
l52:if(DT!=incon) goto l53;
goto l56;
l53:if(x[jvj+28]!=incon) goto l54;
goto l56;
l54:V113=bh[v[1]][DT];
if((V113==125)) goto l55;
if((V113!=44)) goto l56;
pile[v[22]]=DT; pile[WZ1]=jvj+40; 
(*f[79])( );if(v[102]) goto l56;     /*LEXP0(DT,jvj+40,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+41)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+43)*/
V124=V115+1;
DX=V124;
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+81,jvj+43,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=453; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+82; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,453,102,jvj+42,jvj+82,EX)*/
goto l56;
l55:pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+39)*/
V114=DT+1;
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+80; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+39,jvj+80,EX)*/
DX=V114;
goto l56;
l58:if(x[EX]==incon) goto l59;
l67:DY=x[EX]=incon;
l66:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l59:if(DN!=incon) goto l60;
l72:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,0,EX)*/
pile[v[22]]=0; pile[WZ1]=(-5225); 
(*f[37])( );     /*SRA0(0,(-5225),V262)*/
V262=pile[WZ2]; 
pile[v[22]]=V262; pile[WZ1]=(-4411); 
(*f[37])( );     /*SRA0(V262,(-4411),V263)*/
V263=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=V263; 
(*f[39])( );     /*SDX0(20,10327,V263,V264)*/
V264=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=DR; pile[WZ2]=V264; 
(*f[39])( );     /*SDX0(41,DR,V264,V265)*/
V265=pile[WZ3]; 
pile[v[22]]=V265; 
(*f[40])( );     /*SLG0(V265)*/
if(DY!=incon) goto l68;
goto l67;
l60:V77=bh[v[1]][DN];
if(V77==44||V77==93) goto l71;
if(x[jvj+44]!=incon) goto l61;
goto l72;
l61:if((V77!=58)) goto l62;
pile[v[22]]=DN; pile[WZ1]=jvj+45; 
(*f[79])( );if(v[102]) goto l62;     /*LEXP0(DN,jvj+45,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=jvj+44; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+46)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+45,jvj+47)*/
V100=V93+1;
DX=V100;
pile[v[22]]=jvj+47; pile[WZ1]=103; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+47,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+83; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+46,jvj+83,EX)*/
goto l63;
l62:pile[v[22]]=jvj+44; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+48)*/
V226=DN+1;
pile[v[22]]=V226; pile[WZ1]=1706; 
(*f[266])( );if(v[102]) goto l72;     /*FOBJ0(V226,1706,D)*/
D=pile[WZ2]; 
pile[v[22]]=D; pile[WZ2]=jvj+49; 
(*f[267])( );if(v[102]) goto l72;     /*LEXP1(D,V220,jvj+49)*/
V220=pile[WZ1]; 
V227=bh[v[1]][V220];
if((V227!=93)) goto l72;
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; 
(*f[255])( );     /*COPEXP0(jvj+49,jvj+50)*/
V228=V220+1;
DX=V228;
pile[v[22]]=jvj+50; pile[WZ1]=103; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+50,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+84; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+48,jvj+84,EX)*/
goto l63;
l64:DY=DX;
goto l65;
l70:pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(69,100,EX)*/
pile[v[22]]=DR; pile[WZ1]=EX; 
(*f[260])( );if(v[102]) goto l25;     /*LEXR0(DR,EX,V72)*/
V72=pile[WZ2]; 
V74=V72+1;
DX=V74;
V75=bh[v[1]][V72];
if(V75==41) goto l25;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V258)*/
V258=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V258; 
(*f[39])( );     /*SDX0(41,7,V258,V259)*/
V259=pile[WZ3]; 
pile[v[22]]=V259; 
(*f[40])( );     /*SLG0(V259)*/
goto l25;
l71:pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(128,100,EX)*/
pile[v[22]]=DR; pile[WZ1]=EX; 
(*f[261])( );if(v[102]) goto l67;     /*LEXS0(DR,EX,V76)*/
V76=pile[WZ2]; 
V78=V76+1;
DX=V78;
V79=bh[v[1]][V76];
if(V79==93) goto l63;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V260)*/
V260=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=8; pile[WZ2]=V260; 
(*f[39])( );     /*SDX0(41,8,V260,V261)*/
V261=pile[WZ3]; 
pile[v[22]]=V261; 
(*f[40])( );     /*SLG0(V261)*/
goto l63;
l73:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+77)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+77; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+77,EX)*/
pile[v[22]]=EX; pile[WZ1]=jvj+29; pile[WZ2]=DZ; 
(*f[259])( );     /*LEXT0(EX,jvj+29,DZ,V56)*/
V56=pile[WZ3]; 
V61=V56+1;
DX=V61;
V62=bh[v[1]][V56];
if(V62==41||V62==93) goto l56;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V254; 
(*f[39])( );     /*SDX0(41,5,V254,V255)*/
V255=pile[WZ3]; 
pile[v[22]]=V255; 
(*f[40])( );     /*SLG0(V255)*/
goto l56;
l74:V12=134;
goto l15;
l75:V171=134;
goto l19;
l77:V241=135;
goto l8;
l78:if((V303<=122)) goto l77;
goto l76;
l79:V305=V212;
if((V305>=97)) goto l82;
if((V305<65)) goto l80;
if((V305<=90)) goto l81;
l80:V231=134;
l29:if((V231==135)) goto l30;
l35:if((V212!=96)) goto l36;
pile[v[22]]=DQ; 
(*f[257])( );if(v[102]) goto l36;     /*SRS0(DQ,V41)*/
V41=pile[WZ1]; 
(*f[256])( );if(v[102]) goto l36;     /*SY0(DQ,RR)*/
RR=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=RR; pile[WZ4]=EX; 
(*f[270])( );     /*QUADRI7(100,96,163,RR,EX)*/
DX=V41;
goto l36;
l81:V231=135;
goto l29;
l82:if((V305<=122)) goto l81;
goto l80;
l84:V49=135;
goto l37;
l85:if((V307<=122)) goto l84;
goto l83;
}
