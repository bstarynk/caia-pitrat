#include "dx.h"
void LEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V84=0,V83=0,DQ=0,V86=0,V85=0,V102=0,V101=0,V200=0,V199=0,V202=0,V201=0,V204=0,V175=0,V177=0,V174=0,V274=0,DR=0,V271=0,V273=0,V272=0,DZZ=0,V291=0,V290=0,V285=0,V293=0,V47=0,V43=0,V180=0,V189=0,V191=0,V182=0,V239=0,A=0,V241=0,V257=0,V41=0,RR=0,V55=0,V50=0,V54=0,DZ=0,DT=0,V140=0,V28=0,V302=0,V303=0,V29=0,V304=0,V305=0,V31=0,V306=0,V307=0,V38=0,V308=0,V309=0,V62=0,V310=0,V311=0,V66=0,V71=0,V312=0,V313=0,V75=0,V314=0,V315=0,V192=0,V227=0,V323=0,V324=0,V231=0,V267=0,V268=0,V265=0,V120=0,V122=0,V121=0,V123=0,V164=0,V163=0,V165=0,V260=0,V259=0,V261=0,N=0,J=0,V263=0,JJ=0,V4=0,V6=0,V8=0,NR=0,V9=0,V10=0,V17=0,V14=0,V264=0,DW=0,V233=0,V234=0,V229=0,V238=0,V34=0,V33=0,V36=0,V35=0,V215=0,V217=0,V224=0,V226=0,V72=0,V74=0,V25=0,V24=0,V18=0,V26=0,DYY=0,V27=0,V209=0,V208=0,V207=0,V210=0,V195=0,V58=0,V56=0,V61=0,V63=0,V70=0,V150=0,V151=0,V152=0,V161=0,V127=0,V129=0,V128=0,DN=0,V79=0,V316=0,V317=0,V77=0,V76=0,V78=0,V136=0,V130=0,V137=0,V282=0,D=0,V276=0,V283=0,V284=0,V214=0,V318=0,V319=0,V320=0,V321=0,V109=0,V12=0,V230=0,V367=0,V287=0,V369=0,V49=0,V371=0,V297=0;
int DP;
int EX,DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=97;
x[jvj+1]=10327;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==79&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
DP=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+97]=DQ=x[EX]=DX=DR=x[jvj+21]=DZ=x[jvj+41]=DT=x[jvj+20]=DN=x[jvj+48]=incon;
V84=DP+1;
V83=bh[v[1]][V84];
if(V83==37||V83==63||V83==47||V83==92) goto l10;
DQ=DP;
l10:V86=DP+1;
V85=bh[v[1]][V86];
if((V85==37)) goto l11;
if((V85==47)) goto l12;
if((V85!=63)) goto l17;
V102=V86+1;
V101=bh[v[1]][V102];
if((V101==39)) goto l13;
if((V101==96)) goto l14;
if((V101<48)) goto l98;
if((V101>57)) goto l98;
V109=135;
l15:if((V109==135)) goto l16;
if((V101==45)) goto l16;
if(V101!=64&&V101!=36&&V101!=38&&V101!=(-89)) goto l17;
x[jvj+97]=149 ;z[jvj+97]=149;
l17:V200=DP+1;
V199=bh[v[1]][V200];
if((V199==63)) goto l18;
if((V199!=92)) goto l20;
V175=V200+1;
V177=bh[v[1]][V175];
x[jvj+96]=incon;
if((V177==73)) goto l1;
if((V177==79)) goto l2;
if((V177==67)) goto l3;
if((V177==83)) goto l4;
if((V177==86)) goto l5;
if((V177==75)) goto l6;
if((V177==69)) goto l7;
if((V177==84)) goto l8;
if((V177==78)) goto l9;
if((V177!=85)) goto l20;
x[jvj+96]=387 ;z[jvj+96]=387;
l19:V174=V175+1;
pile[v[22]]=V174; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l20;     /*LEXP0(V174,jvj+3,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+56)*/
pile[WZ3]=jvj+96; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+96,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; pile[WZ2]=103; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+57,jvj+58,103,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+59; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+59,EX)*/
l22:if(DQ!=incon) goto l23;
l46:if(x[EX]==incon) goto l47;
l80:if(DR!=incon) goto l81;
if(DX==incon) goto l88;
l89:if(x[EX]==incon) goto l90;
l92:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=DX; v[102]=0;return;
l1:x[jvj+96]=41 ;z[jvj+96]=41;
goto l19;
l2:x[jvj+96]=20 ;z[jvj+96]=20;
goto l19;
l3:x[jvj+96]=89 ;z[jvj+96]=89;
goto l19;
l4:x[jvj+96]=96 ;z[jvj+96]=96;
goto l19;
l5:x[jvj+96]=21 ;z[jvj+96]=21;
goto l19;
l6:x[jvj+96]=324 ;z[jvj+96]=324;
goto l19;
l7:x[jvj+96]=128 ;z[jvj+96]=128;
goto l19;
l8:x[jvj+96]=1317 ;z[jvj+96]=1317;
goto l19;
l9:x[jvj+96]=201 ;z[jvj+96]=201;
goto l19;
l11:x[jvj+97]=295 ;z[jvj+97]=295;
goto l17;
l12:x[jvj+97]=137 ;z[jvj+97]=137;
goto l17;
l13:x[jvj+97]=138 ;z[jvj+97]=138;
goto l17;
l14:x[jvj+97]=141 ;z[jvj+97]=141;
goto l17;
l16:x[jvj+97]=139 ;z[jvj+97]=139;
goto l17;
l18:V202=V200+1;
V201=bh[v[1]][V202];
if((V201!=63)) goto l20;
V204=V202+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=318; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,318,jvj+55)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+55; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+55,EX)*/
DX=V204;
goto l22;
l20:if(x[jvj+97]!=incon) goto l21;
goto l22;
l21:pile[v[22]]=V200; pile[WZ1]=jvj+5; 
(*f[79])( );if(v[102]) goto l22;     /*LEXP0(V200,jvj+5,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+97; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+97,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+61; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+61,EX)*/
goto l22;
l23:V274=DQ+1;
DR=V274;
if(x[EX]==incon) goto l25;
l34:V55=bh[v[1]][DR];
V369=V55;
if((V369>=97)) goto l107;
if((V369<65)) goto l105;
if((V369<=90)) goto l106;
l105:V49=134;
l35:if((V49==135)) goto l36;
goto l46;
l24:pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=A; pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,A,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+63,jvj+12,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=979; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+64; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,979,102,jvj+10,jvj+64,jvj+65)*/
l32:x[EX]=x[jvj+65] ;z[EX]=z[jvj+65];
DX=V257;
goto l34;
l25:if(DX==incon) goto l26;
goto l34;
l26:V271=bh[v[1]][DR];
if((V271!=35)) goto l101;
V273=DR+1;
V272=bh[v[1]][V273];
if((V272==35)) goto l101;
pile[v[22]]=DQ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+13; 
(*f[78])( );if(v[102]) goto l101;     /*SMA0(DQ,64,67,jvj+13)*/
(*f[107])( );     /*CRC0(DQ,DX)*/
DX=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+13; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+13,EX)*/
goto l34;
l28:pile[v[22]]=DQ; 
(*f[107])( );     /*CRC0(DQ,DZZ)*/
DZZ=pile[WZ1]; 
V291=bh[v[1]][DZZ];
if((V291!=32)) goto l29;
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+14; 
(*f[78])( );if(v[102]) goto l29;     /*SMA0(DQ,64,67,jvj+14)*/
pile[v[22]]=118; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(118,jvj+14,V290)*/
V290=pile[WZ2]; 
if((V290<0)) goto l29;
pile[v[22]]=1825; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1825,jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+14; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+69)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+69; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+69,EX)*/
pile[v[22]]=EX; pile[WZ1]=jvj+14; pile[WZ2]=DZZ; 
(*f[268])( );     /*LEXTNOM0(EX,jvj+14,DZZ,V285)*/
V285=pile[WZ3]; 
V293=V285+1;
DX=V293;
goto l34;
l29:V47=bh[v[1]][DZZ];
if(V47!=40&&V47!=91&&V47!=123&&V47!=47&&V47!=92&&V47!=33) goto l30;
if((V47!=33)) goto l31;
pile[v[22]]=DZZ; pile[WZ1]=jvj+16; 
(*f[79])( );if(v[102]) goto l31;     /*LEXP0(DZZ,jvj+16,V180)*/
V180=pile[WZ2]; 
V189=bh[v[1]][V180];
if((V189!=41)) goto l31;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
V191=V180+1;
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,V182)*/
V182=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V182; pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,V182,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=531; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+71; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,531,102,jvj+17,jvj+71,EX)*/
DX=V191;
goto l34;
l30:DX=DZZ;
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,V43)*/
V43=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V43; pile[WZ4]=EX; 
(*f[270])( );     /*QUADRI7(100,21,140,V43,EX)*/
goto l34;
l31:if(V47!=47&&V47!=92) goto l33;
pile[v[22]]=DZZ; pile[WZ1]=jvj+9; 
(*f[79])( );if(v[102]) goto l33;     /*LEXP0(DZZ,jvj+9,V239)*/
V239=pile[WZ2]; 
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,A)*/
A=pile[WZ1]; 
pile[v[22]]=V239; pile[WZ1]=jvj+11; 
(*f[79])( );if(v[102]) goto l33;     /*LEXP0(V239,jvj+11,V241)*/
V241=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+18)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+19)*/
V257=V241+1;
x[jvj+65]=incon;
if((V47==47)) goto l24;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=A; pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(100,21,140,A,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+68; 
(*f[58])( );     /*TRI3(jvj+67,jvj+19,103,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=1027; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+68; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,1027,102,jvj+18,jvj+68,jvj+65)*/
goto l32;
l36:pile[v[22]]=DQ; 
(*f[107])( );     /*CRC0(DQ,V50)*/
V50=pile[WZ1]; 
V54=bh[v[1]][V50];
if(V54!=40&&V54!=91) goto l38;
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+7; 
(*f[78])( );if(v[102]) goto l38;     /*SMA0(DQ,64,67,jvj+7)*/
pile[v[22]]=1825; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(1825,jvj+7,jvj+8)*/
l38:if((V54!=123)) goto l46;
pile[v[22]]=V50; pile[WZ1]=jvj+20; 
(*f[79])( );if(v[102]) goto l46;     /*LEXP0(V50,jvj+20,DT)*/
DT=pile[WZ2]; 
pile[v[22]]=DQ; 
(*f[258])( );     /*SMV1(DQ,V140)*/
V140=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V140; pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(100,21,140,V140,jvj+41)*/
goto l46;
l37:x[jvj+21]=x[jvj+7] ;z[jvj+21]=z[jvj+7];
DZ=V50;
goto l38;
l42:pile[v[22]]=118; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(118,jvj+21,V192)*/
V192=pile[WZ2]; 
l75:if(x[jvj+41]!=incon) goto l76;
goto l80;
l43:V231=incon;
if((V120==126)) goto l44;
V231=sephist;
l64:pile[v[22]]=V233; 
(*f[126])( );     /*LND2(V233,V229,DX)*/
V229=pile[WZ1]; DX=pile[WZ2]; 
V238=V229+V231;
x[jvj+75]=V238 ;z[jvj+75]=(V238<=sepcte) ? V238 : 0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+75; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+75,EX)*/
l81:V127=bh[v[1]][DR];
if((V127!=91)) goto l82;
V129=DR+1;
V128=bh[v[1]][V129];
if((V128==93)) goto l82;
pile[v[22]]=DR; pile[WZ1]=jvj+48; 
(*f[79])( );if(v[102]) goto l82;     /*LEXP0(DR,jvj+48,DN)*/
DN=pile[WZ2]; 
l82:if(DX==incon) goto l83;
goto l89;
l44:V231=sepfacts;
goto l64;
l45:V268=DW+1;
V265=V268;
l93:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V264; pile[WZ4]=EX; 
(*f[270])( );     /*QUADRI7(100,21,140,V264,EX)*/
pile[v[22]]=V265; pile[WZ1]=EX; 
(*f[265])( );     /*LAFTER0(V265,EX,DX)*/
DX=pile[WZ2]; 
goto l81;
l47:if(DX==incon) goto l48;
goto l80;
l48:if(DR!=incon) goto l49;
l69:if(x[jvj+21]!=incon) goto l70;
goto l75;
l49:V120=bh[v[1]][DR];
if((V120==42)) goto l50;
if((V120==91)) goto l54;
if((V120==35)) goto l55;
if((V120!=64)) goto l56;
pile[v[22]]=DR; 
(*f[253])( );     /*CRR1(DR,JJ)*/
JJ=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+25; 
(*f[78])( );if(v[102]) goto l56;     /*SMA0(DR,64,67,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,EX)*/
DX=JJ;
goto l81;
l50:V122=DR+1;
V121=bh[v[1]][V122];
if((V121==42)) goto l51;
V371=V121;
if((V371>=97)) goto l110;
if((V371<65)) goto l108;
if((V371<=90)) goto l109;
l108:V297=134;
l52:if((V297==135)) goto l53;
l56:if(V120!=36&&V120!=38&&V120!=124&&V120!=34&&V120!=(-80)&&V120!=35) goto l57;
pile[v[22]]=DR; 
(*f[107])( );     /*CRC0(DR,V4)*/
V4=pile[WZ1]; 
V6=DR-1;
pile[v[22]]=V6; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+26; 
(*f[78])( );if(v[102]) goto l57;     /*SMA0(V6,64,67,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,EX)*/
DX=V4;
goto l81;
l51:V123=V122+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+72)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+72; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+72,EX)*/
DX=V123;
goto l81;
l53:pile[v[22]]=DR; pile[WZ1]=jvj+23; 
(*f[79])( );if(v[102]) goto l56;     /*LEXP0(DR,jvj+23,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+74; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+74,EX)*/
goto l81;
l54:V164=DR+1;
V163=bh[v[1]][V164];
if((V163!=93)) goto l56;
V165=V164+1;
DX=V165;
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(128,100,EX)*/
goto l81;
l55:V260=DR+1;
V259=bh[v[1]][V260];
if((V259!=35)) goto l56;
V261=V260+1;
pile[v[22]]=V261; 
(*f[264])( );if(v[102]) goto l56;     /*LEXCMT0(V261,N,J)*/
N=pile[WZ1]; J=pile[WZ2]; 
V263=J+1;
pile[v[22]]=100; pile[WZ1]=1317; pile[WZ2]=1352; pile[WZ3]=N; pile[WZ4]=EX; 
(*f[271])( );     /*QUADRI8(100,1317,1352,N,EX)*/
DX=V263;
goto l81;
l57:if((V120==45)) goto l58;
if((V120<48)) goto l99;
if((V120>57)) goto l99;
V12=135;
l59:if((V12==135)) goto l60;
if((V120==(-89))) goto l61;
if((V120==58)) goto l62;
if(V120!=(-75)&&V120!=126) goto l65;
V233=DR+1;
V234=bh[v[1]][V233];
if((V234<48)) goto l100;
if((V234>57)) goto l100;
V230=135;
l63:if((V230==135)) goto l43;
l65:if((V120==39)) goto l66;
if(V120!=60&&V120!=62) goto l67;
pile[v[22]]=DR; pile[WZ2]=jvj+27; 
(*f[263])( );if(v[102]) goto l67;     /*LIREL0(DR,V215,jvj+27)*/
V215=pile[WZ1]; 
pile[v[22]]=V215; pile[WZ2]=jvj+28; 
(*f[263])( );if(v[102]) goto l67;     /*LIREL0(V215,V217,jvj+28)*/
V217=pile[WZ1]; 
pile[v[22]]=jvj+27; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+30)*/
V224=V217+1;
V226=bh[v[1]][V217];
DX=V224;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V120; pile[WZ4]=jvj+78; 
(*f[272])( );     /*QUADRI9(100,89,162,V120,jvj+78)*/
pile[WZ3]=V226; pile[WZ4]=jvj+76; 
(*f[272])( );     /*QUADRI9(100,89,162,V226,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=644; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,644,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; pile[WZ2]=628; pile[WZ3]=jvj+79; 
(*f[58])( );     /*TRI3(jvj+77,jvj+78,628,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+80; 
(*f[58])( );     /*TRI3(jvj+79,jvj+30,103,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=566; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+80; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,566,102,jvj+29,jvj+80,EX)*/
V227=bh[v[1]][V215];
if(V227==58) goto l81;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V323)*/
V323=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=10; pile[WZ2]=V323; 
(*f[39])( );     /*SDX0(41,10,V323,V324)*/
V324=pile[WZ3]; 
pile[v[22]]=V324; 
(*f[40])( );     /*SLG0(V324)*/
goto l81;
l58:V8=DR+1;
pile[v[22]]=V8; 
(*f[126])( );     /*LND2(V8,NR,DX)*/
NR=pile[WZ1]; DX=pile[WZ2]; 
V9=(-NR);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,EX)*/
goto l81;
l60:pile[v[22]]=DR; 
(*f[126])( );     /*LND2(DR,V10,DX)*/
V10=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,EX)*/
goto l81;
l61:V17=DR+1;
pile[v[22]]=V17; pile[WZ1]=16; 
(*f[254])( );     /*LND4(V17,16,V14,DX)*/
V14=pile[WZ2]; DX=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,EX)*/
goto l81;
l62:pile[v[22]]=DR; 
(*f[131])( );     /*SMV0(DR,V264,DW)*/
V264=pile[WZ1]; DW=pile[WZ2]; 
V265=incon;
V267=bh[v[1]][DW];
if((V267==32)) goto l45;
V265=DW;
goto l93;
l66:V34=DR+1;
V33=bh[v[1]][V34];
V36=V34+1;
V35=V36+1;
pile[v[22]]=100; pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V33; pile[WZ4]=EX; 
(*f[272])( );     /*QUADRI9(100,89,162,V33,EX)*/
DX=V35;
V38=bh[v[1]][V36];
if(V38==39) goto l81;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V308)*/
V308=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V308; 
(*f[39])( );     /*SDX0(41,4,V308,V309)*/
V309=pile[WZ3]; 
pile[v[22]]=V309; 
(*f[40])( );     /*SLG0(V309)*/
goto l81;
l67:if((V120==40)) goto l94;
if(V120!=46&&V120!=38&&V120!=124&&V120!=95&&V120!=43) goto l68;
pile[v[22]]=DR; pile[WZ1]=EX; 
(*f[262])( );if(v[102]) goto l68;     /*LPAT0(DR,EX,DX)*/
DX=pile[WZ2]; 
goto l81;
l68:if((V120!=123)) goto l69;
V25=DR+1;
V24=bh[v[1]][V25];
if((V24==123)) goto l69;
pile[v[22]]=DR; pile[WZ1]=jvj+31; 
(*f[79])( );if(v[102]) goto l69;     /*LEXP0(DR,jvj+31,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+32)*/
V26=V18+1;
pile[v[22]]=V26; pile[WZ1]=jvj+33; 
(*f[79])( );if(v[102]) goto l69;     /*LEXP0(V26,jvj+33,DYY)*/
DYY=pile[WZ2]; 
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+33,jvj+34)*/
V27=DYY+1;
pile[v[22]]=jvj+34; pile[WZ1]=103; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+34,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+81; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+32,jvj+81,EX)*/
DX=V27;
V28=bh[v[1]][V18];
if(V28==125) goto l39;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V302)*/
V302=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V302; 
(*f[39])( );     /*SDX0(41,1,V302,V303)*/
V303=pile[WZ3]; 
pile[v[22]]=V303; 
(*f[40])( );     /*SLG0(V303)*/
l39:V29=bh[v[1]][V26];
if(V29==40) goto l40;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V304)*/
V304=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V304; 
(*f[39])( );     /*SDX0(41,2,V304,V305)*/
V305=pile[WZ3]; 
pile[v[22]]=V305; 
(*f[40])( );     /*SLG0(V305)*/
l40:V31=bh[v[1]][DYY];
if(V31==41) goto l81;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V306)*/
V306=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V306; 
(*f[39])( );     /*SDX0(41,3,V306,V307)*/
V307=pile[WZ3]; 
pile[v[22]]=V307; 
(*f[40])( );     /*SLG0(V307)*/
goto l81;
l70:if(DZ!=incon) goto l71;
goto l75;
l71:V209=DZ+1;
V208=bh[v[1]][V209];
if((V208==46)) goto l72;
pile[v[22]]=118; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(118,jvj+21,V58)*/
V58=pile[WZ2]; 
if((V58<0)) goto l41;
pile[v[22]]=1825; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l97;     /*FNDO0(1825,jvj+21,jvj+22)*/
l41:pile[v[22]]=118; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(118,jvj+21,V66)*/
V66=pile[WZ2]; 
goto l75;
l72:pile[v[22]]=118; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(118,jvj+21,V207)*/
V207=pile[WZ2]; 
if((V207!=1)) goto l42;
x[jvj+35]=vo[20];z[jvj+35]=vz[20];
pile[v[22]]=274; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(274,jvj+35,jvj+36)*/
V210=V209+1;
DX=V210;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+82)*/
pile[WZ3]=jvj+36; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+36,jvj+84)*/
pile[v[22]]=jvj+82; pile[WZ1]=111; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,111,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+83,EX)*/
goto l80;
l73:x[jvj+37]=vo[20];z[jvj+37]=vz[20];
pile[v[22]]=274; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(274,jvj+37,jvj+38)*/
V195=V209+1;
DX=V195;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+87)*/
pile[WZ3]=jvj+38; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+38,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=103; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,103,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+87,jvj+86,EX)*/
goto l80;
l74:pile[v[22]]=DZ; pile[WZ1]=jvj+39; 
(*f[79])( );if(v[102]) goto l75;     /*LEXP0(DZ,jvj+39,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[255])( );     /*COPEXP0(jvj+39,jvj+40)*/
V70=V63+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+90)*/
pile[v[22]]=jvj+40; pile[WZ1]=103; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+40,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+90,jvj+89,EX)*/
DX=V70;
V71=bh[v[1]][V63];
if(V71==41) goto l80;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V312)*/
V312=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=6; pile[WZ2]=V312; 
(*f[39])( );     /*SDX0(41,6,V312,V313)*/
V313=pile[WZ3]; 
pile[v[22]]=V313; 
(*f[40])( );     /*SLG0(V313)*/
goto l80;
l76:if(DT!=incon) goto l77;
goto l80;
l77:if(x[jvj+20]!=incon) goto l78;
goto l80;
l78:V150=bh[v[1]][DT];
if((V150==125)) goto l79;
if((V150!=44)) goto l80;
pile[v[22]]=DT; pile[WZ1]=jvj+44; 
(*f[79])( );if(v[102]) goto l80;     /*LEXP0(DT,jvj+44,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=jvj+41; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+45)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+47)*/
V161=V152+1;
DX=V161;
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+92,jvj+47,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=453; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+93; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,453,102,jvj+46,jvj+93,EX)*/
goto l80;
l79:pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+41,jvj+42)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+43)*/
V151=DT+1;
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+91; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+43,jvj+91,EX)*/
DX=V151;
goto l80;
l83:if(x[EX]==incon) goto l84;
l88:V214=DP+1;
DX=V214;
goto l89;
l84:if(DN!=incon) goto l85;
goto l88;
l85:V77=bh[v[1]][DN];
if(V77==44||V77==93) goto l95;
if(x[jvj+48]!=incon) goto l86;
goto l88;
l86:V136=bh[v[1]][DN];
if((V136!=58)) goto l87;
pile[v[22]]=DN; pile[WZ1]=jvj+49; 
(*f[79])( );if(v[102]) goto l87;     /*LEXP0(DN,jvj+49,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=jvj+48; pile[WZ1]=jvj+50; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+50)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+49,jvj+51)*/
V137=V130+1;
DX=V137;
pile[v[22]]=jvj+51; pile[WZ1]=103; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+51,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+94; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+50,jvj+94,EX)*/
goto l92;
l87:pile[v[22]]=jvj+48; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+52)*/
V282=DN+1;
pile[v[22]]=V282; pile[WZ1]=1706; 
(*f[266])( );if(v[102]) goto l88;     /*FOBJ0(V282,1706,D)*/
D=pile[WZ2]; 
pile[v[22]]=D; pile[WZ2]=jvj+53; 
(*f[267])( );if(v[102]) goto l88;     /*LEXP1(D,V276,jvj+53)*/
V276=pile[WZ1]; 
V283=bh[v[1]][V276];
if((V283!=93)) goto l88;
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+54)*/
V284=V276+1;
DX=V284;
pile[v[22]]=jvj+54; pile[WZ1]=103; pile[WZ2]=jvj+95; 
(*f[54])( );     /*TRI1(jvj+54,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+95; pile[WZ5]=EX; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+52,jvj+95,EX)*/
goto l92;
l90:if(DR!=incon) goto l96;
x[EX]=DX=incon;
l91:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l94:pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(69,100,EX)*/
pile[v[22]]=DR; pile[WZ1]=EX; 
(*f[260])( );if(v[102]) goto l81;     /*LEXR0(DR,EX,V72)*/
V72=pile[WZ2]; 
V74=V72+1;
DX=V74;
V75=bh[v[1]][V72];
if(V75==41) goto l81;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V314)*/
V314=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=7; pile[WZ2]=V314; 
(*f[39])( );     /*SDX0(41,7,V314,V315)*/
V315=pile[WZ3]; 
pile[v[22]]=V315; 
(*f[40])( );     /*SLG0(V315)*/
goto l81;
l95:pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=EX; 
(*f[54])( );     /*TRI1(128,100,EX)*/
pile[v[22]]=DR; pile[WZ1]=EX; 
(*f[261])( );if(v[102]) goto l88;     /*LEXS0(DR,EX,V76)*/
V76=pile[WZ2]; 
V78=V76+1;
DX=V78;
V79=bh[v[1]][V76];
if(V79==93) goto l92;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V316)*/
V316=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=8; pile[WZ2]=V316; 
(*f[39])( );     /*SDX0(41,8,V316,V317)*/
V317=pile[WZ3]; 
pile[v[22]]=V317; 
(*f[40])( );     /*SLG0(V317)*/
goto l92;
l96:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=EX; 
(*f[192])( );     /*QUADRI4(100,41,130,0,EX)*/
pile[v[22]]=0; pile[WZ1]=(-5225); 
(*f[37])( );     /*SRA0(0,(-5225),V318)*/
V318=pile[WZ2]; 
pile[v[22]]=V318; pile[WZ1]=(-4411); 
(*f[37])( );     /*SRA0(V318,(-4411),V319)*/
V319=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=V319; 
(*f[39])( );     /*SDX0(20,10327,V319,V320)*/
V320=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=DR; pile[WZ2]=V320; 
(*f[39])( );     /*SDX0(41,DR,V320,V321)*/
V321=pile[WZ3]; 
pile[v[22]]=V321; 
(*f[40])( );     /*SLG0(V321)*/
goto l92;
l97:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+88)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+88; pile[WZ4]=EX; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+88,EX)*/
pile[v[22]]=EX; pile[WZ1]=jvj+21; pile[WZ2]=DZ; 
(*f[259])( );     /*LEXT0(EX,jvj+21,DZ,V56)*/
V56=pile[WZ3]; 
V61=V56+1;
DX=V61;
V62=bh[v[1]][V56];
if(V62==41||V62==93) goto l80;
pile[v[22]]=20; pile[WZ1]=10327; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10327,0,V310)*/
V310=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=5; pile[WZ2]=V310; 
(*f[39])( );     /*SDX0(41,5,V310,V311)*/
V311=pile[WZ3]; 
pile[v[22]]=V311; 
(*f[40])( );     /*SLG0(V311)*/
goto l80;
l98:V109=134;
goto l15;
l99:V12=134;
goto l59;
l100:V230=134;
goto l63;
l101:V367=V271;
if((V367>=97)) goto l104;
if((V367<65)) goto l102;
if((V367<=90)) goto l103;
l102:V287=134;
l27:if((V287==135)) goto l28;
l33:if((V271!=96)) goto l34;
pile[v[22]]=DQ; 
(*f[257])( );if(v[102]) goto l34;     /*SRS0(DQ,V41)*/
V41=pile[WZ1]; 
(*f[256])( );if(v[102]) goto l34;     /*SY0(DQ,RR)*/
RR=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=RR; pile[WZ4]=EX; 
(*f[270])( );     /*QUADRI7(100,96,163,RR,EX)*/
DX=V41;
goto l34;
l103:V287=135;
goto l27;
l104:if((V367<=122)) goto l103;
goto l102;
l106:V49=135;
goto l35;
l107:if((V369<=122)) goto l106;
goto l105;
l109:V297=135;
goto l52;
l110:if((V371<=122)) goto l109;
goto l108;
}
