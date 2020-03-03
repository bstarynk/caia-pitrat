#include "dx.h"
void NOUVCONTRC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V13=0,V255=0,V253=0,V254=0,V256=0,V257=0,V259=0,V260=0,V9=0,V21=0,V262=0,V263=0,V20=0,V27=0,V265=0,V266=0,V26=0,V43=0,K=0,V45=0,L=0,V47=0,KK=0,V49=0,LL=0,V60=0,V63=0,V270=0,V268=0,V269=0,V271=0,V272=0,V274=0,V275=0,V59=0,V84=0,V71=0,V86=0,V72=0,V88=0,V73=0,V90=0,V74=0,V99=0,V279=0,V277=0,V278=0,V280=0,V98=0,V138=0,V285=0,V288=0,V282=0,V283=0,V284=0,V286=0,V287=0,V289=0,V290=0,V137=0,V158=0,V199=0,V202=0,V298=0,V295=0,V296=0,V297=0,V299=0,V300=0,V302=0,V303=0,V198=0,V147=0,V167=0,V196=0,V168=0,V183=0,V213=0,V217=0,V224=0,V228=0,J=0,JJ=0,PA=0,V142=0,V134=0,PB=0,V121=0,V103=0,V231=0,V232=0,V237=0,V240=0,V307=0,V305=0,V306=0,V308=0,V309=0,V311=0,V312=0,V236=0,V242=0,V243=0,V246=0,V316=0,V314=0,V315=0,V317=0,V245=0,V250=0,V161=0,V292=0,V293=0,V160=0,V350=0,V349=0,V352=0,V35=0,V351=0,V354=0,V353=0,V356=0,V174=0,V355=0,V358=0,V357=0,V360=0,V112=0,V359=0,V362=0,V361=0,V364=0,V76=0,V363=0;
int RR,HIST;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=150;
x[jvj+1]=11886;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1729&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; HIST=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+83]=J=JJ=x[R]=incon;
pile[v[22]]=RR; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(RR,jvj+2)*/
if((x[jvj+2]<=0)) goto l47;
x[jvj+10]=s[x[jvj+2]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+2];
pile[v[22]]=509; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(509,jvj+10,jvj+11)*/
l8:if((x[jvj+11]<=0)) goto l47;
x[jvj+3]=s[x[jvj+11]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+11];
pile[v[22]]=jvj+3; pile[WZ1]=RR; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(jvj+3,RR,jvj+12)*/
if((x[jvj+12]==135)) goto l9;
x[jvj+11]=t[x[jvj+11]];
goto l8;
l2:if((V9<4)) goto l3;
l62:pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(111,RR,jvj+95)*/
pile[v[22]]=101; pile[WZ1]=jvj+95; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(101,jvj+95,jvj+96)*/
if((x[jvj+96]==1280)) goto l63;
if((x[jvj+96]==625)) goto l66;
if((x[jvj+96]!=30)) goto l91;
x[jvj+117]=vo[14];z[jvj+117]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+117; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(642,jvj+117,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=jvj+30; 
(*f[887])( );     /*VARND0(RR,jvj+30)*/
if((x[jvj+30]<=0)) goto l91;
x[jvj+118]=s[x[jvj+30]] ;z[jvj+118]=(x[jvj+118]<=sepcte) ? x[jvj+118] : z[jvj+30];
pile[v[22]]=509; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[33])( );     /*FNDE0(509,jvj+118,jvj+119)*/
pile[v[22]]=RR; pile[WZ1]=jvj+120; 
(*f[887])( );     /*VARND0(RR,jvj+120)*/
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(102,RR,jvj+31)*/
pile[v[22]]=103; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(103,RR,jvj+33)*/
l72:if((x[jvj+119]<=0)) goto l91;
x[jvj+37]=s[x[jvj+119]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+119];
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(111,jvj+37,jvj+121)*/
pile[v[22]]=101; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(101,jvj+121,jvj+122)*/
if((x[jvj+122]!=30)) goto l73;
pile[v[22]]=868; pile[WZ1]=jvj+37; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(868,jvj+37,jvj+123)*/
if((x[jvj+123]!=30)) goto l73;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+124; 
(*f[887])( );     /*VARND0(jvj+37,jvj+124)*/
for(i=x[jvj+124],V362=0;i>0;i=t[i],V362++)  ;
for(i=x[jvj+120],V361=0;i>0;i=t[i],V361++)  ;
if((V362!=V361)) goto l122;
V364=x[jvj+124];
l121:if((V364>0)) goto l124;
V76=135;
l74:if((V76==135)) goto l75;
l73:x[jvj+119]=t[x[jvj+119]];
goto l72;
l3:pile[v[22]]=929; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(929,jvj+3,V13)*/
V13=pile[WZ2]; 
V255=x[RR];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V253)*/
V253=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V255; pile[WZ2]=V253; 
(*f[39])( );     /*SDX0(20,V255,V253,V254)*/
V254=pile[WZ3]; 
pile[v[22]]=V254; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V254,91,V256)*/
V256=pile[WZ2]; 
pile[v[22]]=V256; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V256,V13,41,V257)*/
V257=pile[WZ3]; 
pile[v[22]]=V257; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V257,93,V259)*/
V259=pile[WZ2]; 
pile[v[22]]=V259; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l4;     /*SORHIST1(V259,HIST,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=V260; 
(*f[40])( );     /*SLG0(V260)*/
l4:if((V9==2)) goto l14;
goto l62;
l9:x[jvj+83]=68 ;z[jvj+83]=68;
pile[v[22]]=333; pile[WZ1]=HIST; pile[WZ2]=RR; 
(*f[1320])( );     /*ARCHIVE1(333,HIST,RR)*/
pile[v[22]]=1070; pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1070,RR,jvj+5)*/
if((x[jvj+5]!=68)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,1070,68)*/
l5:pile[v[22]]=1411; pile[WZ1]=RR; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1411,RR,jvj+6)*/
if((x[jvj+6]!=68)) goto l6;
pile[v[22]]=jvj+3; pile[WZ1]=1411; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,1411,68)*/
l6:if((v[93]<=0)) goto l7;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1415,jvj+7,jvj+8)*/
pile[v[22]]=1525; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1525,jvj+8,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=846; 
(*f[1211])( );     /*MARKUTILE0(jvj+8,846)*/
pile[WZ1]=1461; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,1461,1)*/
pile[v[22]]=jvj+9; 
(*f[186])( );     /*BTC0(jvj+9,1461,1)*/
l7:V9=g[646];
if((V9<=0)) goto l62;
V10=vg[646];
if((V10!=0)) goto l1;
if((V9<3)) goto l3;
l1:pile[v[22]]=646; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=(-631); pile[WZ4]=RR; pile[WZ5]=(-706); pile[v[22]+6]=jvj+3; pile[v[22]+7]=(-6231); pile[v[22]+8]=HIST; pile[v[22]+9]=jvj+4; 
(*f[188])( );     /*INTERP1(646,11886,0,(-631),RR,(-706),jvj+3,(-6231),HIST,jvj+4)*/
if((x[jvj+4]==135)) goto l2;
goto l62;
l11:if((V20<4)) goto l12;
goto l62;
l12:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=135; 
(*f[42])( );     /*SRA1(135,0,135,V262)*/
V262=pile[WZ3]; 
pile[v[22]]=V262; pile[WZ1]=HIST; 
(*f[828])( );if(v[102]) goto l13;     /*SORHIST0(V262,HIST,V263)*/
V263=pile[WZ2]; 
pile[v[22]]=V263; 
(*f[40])( );     /*SLG0(V263)*/
l13:if((V20==2)) goto l14;
goto l62;
l14:pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l62;
l17:if((V26<4)) goto l18;
goto l62;
l18:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=134; 
(*f[42])( );     /*SRA1(135,0,134,V265)*/
V265=pile[WZ3]; 
pile[v[22]]=V265; pile[WZ1]=HIST; 
(*f[828])( );if(v[102]) goto l19;     /*SORHIST0(V265,HIST,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; 
(*f[40])( );     /*SLG0(V266)*/
l19:if((V26==2)) goto l14;
goto l62;
l22:if((V59<4)) goto l23;
goto l62;
l23:pile[v[22]]=929; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(929,jvj+25,V63)*/
V63=pile[WZ2]; 
V270=x[RR];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V268)*/
V268=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V270; pile[WZ2]=V268; 
(*f[39])( );     /*SDX0(20,V270,V268,V269)*/
V269=pile[WZ3]; 
pile[v[22]]=V269; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V269,91,V271)*/
V271=pile[WZ2]; 
pile[v[22]]=V271; pile[WZ1]=V63; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V271,V63,41,V272)*/
V272=pile[WZ3]; 
pile[v[22]]=V272; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V272,93,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V274; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l24;     /*SORHIST1(V274,HIST,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=V275; 
(*f[40])( );     /*SLG0(V275)*/
l24:if((V59==2)) goto l14;
goto l62;
l28:if((V98<4)) goto l29;
l107:pile[v[22]]=V103; pile[WZ1]=858; pile[WZ2]=jvj+145; 
(*f[46])( );     /*TRI0(V103,858,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+146; 
(*f[189])( );     /*TRI4(jvj+145,v[13],642,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=1729; pile[WZ2]=246; pile[WZ3]=jvj+147; 
(*f[189])( );     /*TRI4(jvj+146,1729,246,jvj+147)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11886; pile[WZ4]=jvj+147; pile[WZ5]=jvj+125; 
(*f[269])( );     /*QUADRI6(158,1,218,11886,jvj+147,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+37; 
(*f[966])( );     /*ELIMINE0(jvj+125,jvj+37)*/
goto l73;
l29:V279=x[jvj+37];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V277)*/
V277=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V279; pile[WZ2]=V277; 
(*f[39])( );     /*SDX0(20,V279,V277,V278)*/
V278=pile[WZ3]; 
pile[v[22]]=V278; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l30;     /*SORHIST1(V278,HIST,V280)*/
V280=pile[WZ2]; 
pile[v[22]]=V280; 
(*f[40])( );     /*SLG0(V280)*/
l30:if((V98!=2)) goto l107;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l107;
l32:pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[760])( );     /*MEMEX0(jvj+44,jvj+45,jvj+46)*/
if((x[jvj+46]==135)) goto l71;
l33:pile[v[22]]=jvj+41; pile[WZ1]=jvj+45; pile[WZ2]=jvj+47; 
(*f[760])( );     /*MEMEX0(jvj+41,jvj+45,jvj+47)*/
if((x[jvj+47]==135)) goto l34;
l68:x[jvj+109]=t[x[jvj+109]];
l67:if((x[jvj+109]<=0)) goto l91;
x[jvj+49]=s[x[jvj+109]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+109];
pile[v[22]]=111; pile[WZ1]=jvj+49; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,jvj+49,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]!=625)) goto l68;
pile[v[22]]=868; pile[WZ1]=jvj+49; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(868,jvj+49,jvj+113)*/
if((x[jvj+113]!=625)) goto l68;
pile[v[22]]=160; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(160,jvj+49,jvj+114)*/
pile[v[22]]=130; pile[WZ1]=jvj+114; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(130,jvj+114,V134)*/
V134=pile[WZ2]; 
PB=V134;
V121=PA%PB;
if((V121!=0)) goto l68;
if((PA<=PB)) goto l68;
pile[v[22]]=jvj+49; pile[WZ1]=jvj+115; 
(*f[887])( );     /*VARND0(jvj+49,jvj+115)*/
for(i=x[jvj+115],V358=0;i>0;i=t[i],V358++)  ;
for(i=x[jvj+110],V357=0;i>0;i=t[i],V357++)  ;
if((V358!=V357)) goto l118;
V360=x[jvj+115];
l117:if((V360>0)) goto l120;
V112=135;
l69:if((V112==135)) goto l70;
goto l68;
l34:pile[v[22]]=jvj+44; pile[WZ1]=jvj+42; pile[WZ2]=jvj+48; 
(*f[760])( );     /*MEMEX0(jvj+44,jvj+42,jvj+48)*/
if((x[jvj+48]==135)) goto l71;
goto l68;
l36:if((V137<4)) goto l37;
l106:pile[v[22]]=V142; pile[WZ1]=858; pile[WZ2]=jvj+142; 
(*f[46])( );     /*TRI0(V142,858,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+143; 
(*f[189])( );     /*TRI4(jvj+142,v[13],642,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=1729; pile[WZ2]=246; pile[WZ3]=jvj+144; 
(*f[189])( );     /*TRI4(jvj+143,1729,246,jvj+144)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11886; pile[WZ4]=jvj+144; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(158,1,218,11886,jvj+144,jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+49; 
(*f[966])( );     /*ELIMINE0(jvj+116,jvj+49)*/
goto l68;
l37:V285=x[jvj+49];
V288=x[RR];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V282)*/
V282=pile[WZ3]; 
pile[WZ1]=V282; pile[WZ2]=248; 
(*f[42])( );     /*SRA1(135,V282,248,V283)*/
V283=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V285; pile[WZ2]=V283; 
(*f[39])( );     /*SDX0(20,V285,V283,V284)*/
V284=pile[WZ3]; 
pile[v[22]]=V284; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V284,91,V286)*/
V286=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V288; pile[WZ2]=V286; 
(*f[39])( );     /*SDX0(20,V288,V286,V287)*/
V287=pile[WZ3]; 
pile[v[22]]=V287; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V287,93,V289)*/
V289=pile[WZ2]; 
pile[v[22]]=V289; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l38;     /*SORHIST1(V289,HIST,V290)*/
V290=pile[WZ2]; 
pile[v[22]]=V290; 
(*f[40])( );     /*SLG0(V290)*/
l38:if((V137!=2)) goto l106;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l106;
l40:pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[760])( );     /*MEMEX0(jvj+58,jvj+59,jvj+60)*/
if((x[jvj+60]==135)) goto l59;
l41:pile[v[22]]=jvj+55; pile[WZ1]=jvj+59; pile[WZ2]=jvj+61; 
(*f[760])( );     /*MEMEX0(jvj+55,jvj+59,jvj+61)*/
if((x[jvj+61]==135)) goto l42;
l56:x[jvj+87]=t[x[jvj+87]];
l55:if((x[jvj+87]<=0)) goto l60;
x[jvj+63]=s[x[jvj+87]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+87];
pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+63,jvj+89)*/
pile[v[22]]=101; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+89,jvj+90)*/
if((x[jvj+90]!=625)) goto l56;
pile[v[22]]=868; pile[WZ1]=jvj+63; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(868,jvj+63,jvj+91)*/
if((x[jvj+91]!=625)) goto l56;
pile[v[22]]=160; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(160,jvj+63,jvj+92)*/
pile[v[22]]=130; pile[WZ1]=jvj+92; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+92,V196)*/
V196=pile[WZ2]; 
V168=V196;
V183=V168%V167;
if((V183!=0)) goto l56;
if((V167>=V168)) goto l56;
pile[v[22]]=jvj+63; pile[WZ1]=jvj+93; 
(*f[887])( );     /*VARND0(jvj+63,jvj+93)*/
for(i=x[jvj+93],V354=0;i>0;i=t[i],V354++)  ;
for(i=x[jvj+88],V353=0;i>0;i=t[i],V353++)  ;
if((V354!=V353)) goto l114;
V356=x[jvj+93];
l113:if((V356>0)) goto l116;
V174=135;
l57:if((V174==135)) goto l58;
goto l56;
l42:pile[v[22]]=jvj+58; pile[WZ1]=jvj+56; pile[WZ2]=jvj+62; 
(*f[760])( );     /*MEMEX0(jvj+58,jvj+56,jvj+62)*/
if((x[jvj+62]==135)) goto l59;
goto l56;
l44:if((V198<4)) goto l45;
goto l62;
l45:pile[v[22]]=929; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(929,jvj+63,V202)*/
V202=pile[WZ2]; 
V298=x[RR];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V295)*/
V295=pile[WZ3]; 
pile[WZ1]=V295; pile[WZ2]=625; 
(*f[42])( );     /*SRA1(135,V295,625,V296)*/
V296=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V298; pile[WZ2]=V296; 
(*f[39])( );     /*SDX0(20,V298,V296,V297)*/
V297=pile[WZ3]; 
pile[v[22]]=V297; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V297,91,V299)*/
V299=pile[WZ2]; 
pile[v[22]]=V299; pile[WZ1]=V202; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V299,V202,41,V300)*/
V300=pile[WZ3]; 
pile[v[22]]=V300; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V300,93,V302)*/
V302=pile[WZ2]; 
pile[v[22]]=V302; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l46;     /*SORHIST1(V302,HIST,V303)*/
V303=pile[WZ2]; 
pile[v[22]]=V303; 
(*f[40])( );     /*SLG0(V303)*/
l46:if((V198==2)) goto l14;
goto l62;
l47:pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,RR,jvj+66)*/
pile[v[22]]=101; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+66,jvj+67)*/
if((x[jvj+67]!=30)) goto l53;
pile[v[22]]=RR; pile[WZ1]=jvj+18; 
(*f[887])( );     /*VARND0(RR,jvj+18)*/
if((x[jvj+18]<=0)) goto l53;
x[jvj+68]=s[x[jvj+18]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+18];
pile[v[22]]=509; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(509,jvj+68,jvj+69)*/
pile[v[22]]=RR; pile[WZ1]=jvj+70; 
(*f[887])( );     /*VARND0(RR,jvj+70)*/
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,RR,jvj+19)*/
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,RR,jvj+21)*/
l48:if((x[jvj+69]<=0)) goto l53;
x[jvj+25]=s[x[jvj+69]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+69];
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+25,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+71,jvj+72)*/
if((x[jvj+72]!=30)) goto l49;
pile[v[22]]=868; pile[WZ1]=jvj+25; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(868,jvj+25,jvj+73)*/
if((x[jvj+73]!=30)) goto l49;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+74; 
(*f[887])( );     /*VARND0(jvj+25,jvj+74)*/
for(i=x[jvj+74],V350=0;i>0;i=t[i],V350++)  ;
for(i=x[jvj+70],V349=0;i>0;i=t[i],V349++)  ;
if((V350!=V349)) goto l110;
V352=x[jvj+74];
l109:if((V352>0)) goto l112;
V35=135;
l50:if((V35==135)) goto l51;
l49:x[jvj+69]=t[x[jvj+69]];
goto l48;
l51:pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+25,jvj+20)*/
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+25,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+19,V43)*/
V43=pile[WZ2]; 
K=V43;
pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+20,V45)*/
V45=pile[WZ2]; 
L=V45;
if((K>L)) goto l20;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+21,jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l52;
l20:pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+21,V47)*/
V47=pile[WZ2]; 
KK=V47;
pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+22,V49)*/
V49=pile[WZ2]; 
LL=V49;
if((KK<LL)) goto l49;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+24; 
(*f[760])( );     /*MEMEX0(jvj+19,jvj+20,jvj+24)*/
if((x[jvj+24]==135)) goto l52;
goto l49;
l52:x[jvj+83]=68 ;z[jvj+83]=68;
pile[v[22]]=333; pile[WZ1]=HIST; pile[WZ2]=jvj+25; 
(*f[1320])( );     /*ARCHIVE1(333,HIST,jvj+25)*/
if((v[93]<=0)) goto l25;
x[jvj+27]=vo[14];z[jvj+27]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1415,jvj+27,jvj+28)*/
pile[v[22]]=1525; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1525,jvj+28,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=846; 
(*f[1211])( );     /*MARKUTILE0(jvj+28,846)*/
pile[WZ1]=1461; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+28,1461,1)*/
pile[v[22]]=jvj+29; 
(*f[186])( );     /*BTC0(jvj+29,1461,1)*/
l25:V59=g[649];
if((V59<=0)) goto l62;
V60=vg[649];
if((V60!=0)) goto l21;
if((V59<3)) goto l23;
l21:pile[v[22]]=649; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=(-631); pile[WZ4]=RR; pile[WZ5]=32; pile[v[22]+6]=jvj+25; pile[v[22]+7]=(-6231); pile[v[22]+8]=HIST; pile[v[22]+9]=jvj+26; 
(*f[188])( );     /*INTERP1(649,11886,0,(-631),RR,32,jvj+25,(-6231),HIST,jvj+26)*/
if((x[jvj+26]==135)) goto l22;
goto l62;
l53:if(x[jvj+67]!=25&&x[jvj+67]!=29&&x[jvj+67]!=30) goto l54;
x[jvj+75]=vo[16];z[jvj+75]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+75; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(905,jvj+75,V147)*/
V147=pile[WZ2]; 
if((V147!=(-9009))) goto l54;
pile[v[22]]=100; pile[WZ1]=RR; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,RR,jvj+76)*/
if((x[jvj+76]!=22)) goto l54;
pile[v[22]]=102; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,RR,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+77,jvj+78)*/
if((x[jvj+78]!=484)) goto l54;
pile[v[22]]=103; pile[WZ1]=RR; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(103,RR,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=484)) goto l54;
pile[v[22]]=jvj+77; pile[WZ1]=jvj+81; 
(*f[200])( );if(v[102]) goto l54;     /*NDD0(jvj+77,jvj+81)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+82; 
(*f[200])( );if(v[102]) goto l54;     /*NDD0(jvj+79,jvj+82)*/
pile[v[22]]=jvj+81; pile[WZ2]=jvj+67; pile[WZ3]=jvj+83; pile[WZ4]=jvj+84; 
(*f[1929])( );if(v[102]) goto l54;     /*COMPINFSUP0(jvj+81,jvj+82,jvj+67,jvj+83,jvj+84)*/
if((x[jvj+83]!=580)) goto l62;
x[jvj+52]=vo[14];z[jvj+52]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(642,jvj+52,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=110; pile[WZ3]=(-1301); pile[WZ4]=jvj+140; 
(*f[270])( );     /*QUADRI7(101,jvj+84,110,(-1301),jvj+140)*/
pile[v[22]]=V158; pile[WZ1]=858; pile[WZ2]=jvj+136; 
(*f[46])( );     /*TRI0(V158,858,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+137; 
(*f[189])( );     /*TRI4(jvj+136,v[13],642,jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=1729; pile[WZ2]=246; pile[WZ3]=jvj+138; 
(*f[189])( );     /*TRI4(jvj+137,1729,246,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=11886; pile[WZ2]=218; pile[WZ3]=jvj+139; 
(*f[58])( );     /*TRI3(jvj+138,11886,218,jvj+139)*/
pile[v[22]]=jvj+140; pile[WZ1]=(-20); pile[WZ2]=jvj+139; pile[WZ3]=159; pile[WZ4]=jvj+141; 
(*f[298])( );     /*TRIENS1(jvj+140,(-20),jvj+139,159,jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+141,1,158,jvj+53)*/
pile[v[22]]=jvj+53; 
(*f[1559])( );     /*CONTRADICTION0(jvj+53)*/
goto l62;
l54:if((x[jvj+67]!=625)) goto l60;
pile[v[22]]=160; pile[WZ1]=RR; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(160,RR,jvj+85)*/
pile[v[22]]=130; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(130,jvj+85,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=jvj+54; 
(*f[887])( );     /*VARND0(RR,jvj+54)*/
if((x[jvj+54]<=0)) goto l60;
x[jvj+86]=s[x[jvj+54]] ;z[jvj+86]=(x[jvj+86]<=sepcte) ? x[jvj+86] : z[jvj+54];
pile[v[22]]=509; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[33])( );     /*FNDE0(509,jvj+86,jvj+87)*/
pile[v[22]]=RR; pile[WZ1]=jvj+88; 
(*f[887])( );     /*VARND0(RR,jvj+88)*/
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(102,RR,jvj+55)*/
pile[v[22]]=103; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(103,RR,jvj+58)*/
goto l55;
l58:pile[v[22]]=102; pile[WZ1]=jvj+63; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(102,jvj+63,jvj+56)*/
pile[v[22]]=103; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(103,jvj+63,jvj+59)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[760])( );     /*MEMEX0(jvj+55,jvj+56,jvj+57)*/
if((x[jvj+57]==135)) goto l40;
goto l41;
l59:x[jvj+83]=68 ;z[jvj+83]=68;
pile[v[22]]=333; pile[WZ1]=HIST; pile[WZ2]=RR; 
(*f[1320])( );     /*ARCHIVE1(333,HIST,RR)*/
V198=g[653];
if((V198<=0)) goto l62;
V199=vg[653];
if((V199!=0)) goto l43;
if((V198<3)) goto l45;
l43:pile[v[22]]=653; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=(-631); pile[WZ4]=RR; pile[WZ5]=166; pile[v[22]+6]=jvj+63; pile[v[22]+7]=(-6231); pile[v[22]+8]=HIST; pile[v[22]+9]=jvj+64; 
(*f[188])( );     /*INTERP1(653,11886,0,(-631),RR,166,jvj+63,(-6231),HIST,jvj+64)*/
if((x[jvj+64]==135)) goto l44;
goto l62;
l60:pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(101,RR,jvj+94)*/
if((x[jvj+94]==134)) goto l61;
if((x[jvj+94]!=135)) goto l62;
x[jvj+83]=68 ;z[jvj+83]=68;
pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
if((v[93]<=0)) goto l15;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1415,jvj+14,jvj+15)*/
pile[v[22]]=1525; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1525,jvj+15,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=846; 
(*f[1211])( );     /*MARKUTILE0(jvj+15,846)*/
pile[WZ1]=1462; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+15,1462,1)*/
pile[v[22]]=jvj+16; 
(*f[186])( );     /*BTC0(jvj+16,1462,1)*/
l15:V20=g[647];
if((V20<=0)) goto l62;
V21=vg[647];
if((V21!=0)) goto l10;
if((V20<3)) goto l12;
l10:pile[v[22]]=647; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=(-6231); pile[WZ4]=HIST; pile[WZ5]=jvj+13; 
(*f[232])( );     /*INTERP3(647,11886,0,(-6231),HIST,jvj+13)*/
if((x[jvj+13]==135)) goto l11;
goto l62;
l61:x[jvj+83]=68 ;z[jvj+83]=68;
pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
V26=g[648];
if((V26<=0)) goto l62;
V27=vg[648];
if((V27!=0)) goto l16;
if((V26<3)) goto l18;
l16:pile[v[22]]=648; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=(-6231); pile[WZ4]=HIST; pile[WZ5]=jvj+17; 
(*f[232])( );     /*INTERP3(648,11886,0,(-6231),HIST,jvj+17)*/
if((x[jvj+17]==135)) goto l17;
goto l62;
l63:pile[v[22]]=103; pile[WZ1]=RR; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(103,RR,jvj+97)*/
pile[v[22]]=130; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(130,jvj+97,V213)*/
V213=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=RR; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(160,RR,jvj+98)*/
pile[v[22]]=130; pile[WZ1]=jvj+98; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(130,jvj+98,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=jvj+65; 
(*f[887])( );     /*VARND0(RR,jvj+65)*/
if((x[jvj+65]<=0)) goto l91;
x[jvj+99]=s[x[jvj+65]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+65];
pile[v[22]]=509; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(509,jvj+99,jvj+100)*/
l64:if((x[jvj+100]<=0)) goto l91;
x[jvj+101]=s[x[jvj+100]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+100];
pile[v[22]]=111; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+101,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+102,jvj+103)*/
if((x[jvj+103]!=1280)) goto l65;
pile[v[22]]=103; pile[WZ1]=jvj+101; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(103,jvj+101,jvj+104)*/
pile[v[22]]=130; pile[WZ1]=jvj+104; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+104,V224)*/
V224=pile[WZ2]; 
if((V213!=V224)) goto l65;
pile[v[22]]=160; pile[WZ1]=jvj+101; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(160,jvj+101,jvj+105)*/
pile[v[22]]=130; pile[WZ1]=jvj+105; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+105,V228)*/
V228=pile[WZ2]; 
x[jvj+130]=x[jvj+101] ;z[jvj+130]=z[jvj+101];
J=V217;
JJ=V228;
if((J>0)) goto l84;
if((J>=0)) goto l91;
V242=abs(J);
V243=abs(JJ);
if((V242>V243)) goto l90;
l91:if(x[jvj+83]==incon) goto l92;
l99:if(x[jvj+83]==38||x[jvj+83]==51||x[jvj+83]==580) goto l98;
l102:if((x[jvj+83]!=67)) goto l104;
V160=g[652];
if((V160<=0)) goto l104;
V161=vg[652];
if((V161!=0)) goto l95;
if((V160<3)) goto l97;
l95:pile[v[22]]=652; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=jvj+135; 
(*f[291])( );     /*INTERP4(652,11886,0,jvj+135)*/
if((x[jvj+135]==135)) goto l96;
l104:if(x[R]!=incon) goto l105;
l103:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l65:x[jvj+100]=t[x[jvj+100]];
goto l64;
l66:pile[v[22]]=160; pile[WZ1]=RR; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(160,RR,jvj+106)*/
pile[v[22]]=130; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(130,jvj+106,PA)*/
PA=pile[WZ2]; 
x[jvj+107]=vo[14];z[jvj+107]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+107; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(642,jvj+107,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=RR; pile[WZ1]=jvj+40; 
(*f[887])( );     /*VARND0(RR,jvj+40)*/
if((x[jvj+40]<=0)) goto l91;
x[jvj+108]=s[x[jvj+40]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+40];
pile[v[22]]=509; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(509,jvj+108,jvj+109)*/
pile[v[22]]=RR; pile[WZ1]=jvj+110; 
(*f[887])( );     /*VARND0(RR,jvj+110)*/
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(102,RR,jvj+41)*/
pile[v[22]]=103; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l91;     /*FNDO0(103,RR,jvj+44)*/
goto l67;
l70:pile[v[22]]=102; pile[WZ1]=jvj+49; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(102,jvj+49,jvj+42)*/
pile[v[22]]=103; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(103,jvj+49,jvj+45)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[760])( );     /*MEMEX0(jvj+41,jvj+42,jvj+43)*/
if((x[jvj+43]==135)) goto l32;
goto l33;
l71:pile[v[22]]=333; pile[WZ1]=HIST; pile[WZ2]=jvj+49; 
(*f[1320])( );     /*ARCHIVE1(333,HIST,jvj+49)*/
pile[v[22]]=1070; pile[WZ1]=jvj+49; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1070,jvj+49,jvj+51)*/
if((x[jvj+51]!=68)) goto l39;
pile[v[22]]=RR; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(RR,1070,68)*/
l39:V137=g[651];
if((V137<=0)) goto l106;
V138=vg[651];
if((V138!=0)) goto l35;
if((V137<3)) goto l37;
l35:pile[v[22]]=651; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=106; pile[WZ4]=jvj+49; pile[WZ5]=(-631); pile[v[22]+6]=RR; pile[v[22]+7]=(-6231); pile[v[22]+8]=HIST; pile[v[22]+9]=jvj+50; 
(*f[188])( );     /*INTERP1(651,11886,0,106,jvj+49,(-631),RR,(-6231),HIST,jvj+50)*/
if((x[jvj+50]==135)) goto l36;
goto l106;
l75:pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(102,jvj+37,jvj+32)*/
pile[v[22]]=103; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(103,jvj+37,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+31,V84)*/
V84=pile[WZ2]; 
V71=V84;
pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+32,V86)*/
V86=pile[WZ2]; 
V72=V86;
if((V71<=V72)) goto l26;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+33,jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l76;
l26:pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(130,jvj+33,V88)*/
V88=pile[WZ2]; 
V73=V88;
pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(130,jvj+34,V90)*/
V90=pile[WZ2]; 
V74=V90;
if((V73>=V74)) goto l73;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+31,jvj+32,jvj+36)*/
if((x[jvj+36]==135)) goto l76;
goto l73;
l76:pile[v[22]]=333; pile[WZ1]=HIST; pile[WZ2]=RR; 
(*f[1320])( );     /*ARCHIVE1(333,HIST,RR)*/
pile[v[22]]=1070; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1070,jvj+37,jvj+39)*/
if((x[jvj+39]!=68)) goto l31;
pile[v[22]]=RR; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(RR,1070,68)*/
l31:V98=g[650];
if((V98<=0)) goto l107;
V99=vg[650];
if((V99!=0)) goto l27;
if((V98<3)) goto l29;
l27:pile[v[22]]=650; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=66; pile[WZ4]=jvj+37; pile[WZ5]=(-6231); pile[v[22]+6]=HIST; pile[v[22]+7]=jvj+38; 
(*f[187])( );     /*INTERP0(650,11886,0,66,jvj+37,(-6231),HIST,jvj+38)*/
if((x[jvj+38]==135)) goto l28;
goto l107;
l77:if((J>=0)) goto l78;
if((JJ>0)) goto l94;
V231=abs(J);
V232=abs(JJ);
if((V231<V232)) goto l94;
l78:if((J==JJ)) goto l94;
l98:x[R]=x[RR] ;z[R]=z[RR];
pile[v[22]]=R; pile[WZ1]=746; pile[WZ2]=HIST; 
(*f[35])( );     /*CHGC1(R,746,HIST)*/
(*f[543])( );     /*ETUCONTR0(R)*/
if((v[220]<=0)) goto l100;
(*f[1927])( );     /*RSNCSQ0(R)*/
l100:if((v[222]<=0)) goto l101;
pile[v[22]]=R; 
(*f[1928])( );     /*ETUCONTRBIS0(R)*/
pile[WZ1]=0; 
(*f[1315])( );     /*LETUBIS0(R,0)*/
l101:if(x[jvj+83]!=incon) goto l102;
l105:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l80:if((V236<4)) goto l81;
goto l99;
l81:pile[v[22]]=929; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(929,RR,V240)*/
V240=pile[WZ2]; 
V307=x[RR];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V305)*/
V305=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V307; pile[WZ2]=V305; 
(*f[39])( );     /*SDX0(20,V307,V305,V306)*/
V306=pile[WZ3]; 
pile[v[22]]=V306; pile[WZ1]=91; 
(*f[249])( );     /*SPC1(V306,91,V308)*/
V308=pile[WZ2]; 
pile[v[22]]=V308; pile[WZ1]=V240; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V308,V240,41,V309)*/
V309=pile[WZ3]; 
pile[v[22]]=V309; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V309,93,V311)*/
V311=pile[WZ2]; 
pile[v[22]]=V311; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l82;     /*SORHIST1(V311,HIST,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=V312; 
(*f[40])( );     /*SLG0(V312)*/
l82:if((V236!=2)) goto l99;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l99;
l84:if((JJ<0)) goto l90;
goto l91;
l86:if((V245<4)) goto l87;
l108:pile[v[22]]=V250; pile[WZ1]=858; pile[WZ2]=jvj+148; 
(*f[46])( );     /*TRI0(V250,858,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+149; 
(*f[189])( );     /*TRI4(jvj+148,v[13],642,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=1729; pile[WZ2]=246; pile[WZ3]=jvj+150; 
(*f[189])( );     /*TRI4(jvj+149,1729,246,jvj+150)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11886; pile[WZ4]=jvj+150; pile[WZ5]=jvj+134; 
(*f[269])( );     /*QUADRI6(158,1,218,11886,jvj+150,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+130; 
(*f[966])( );     /*ELIMINE0(jvj+134,jvj+130)*/
goto l91;
l87:V316=x[jvj+130];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V314)*/
V314=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V316; pile[WZ2]=V314; 
(*f[39])( );     /*SDX0(20,V316,V314,V315)*/
V315=pile[WZ3]; 
pile[v[22]]=V315; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l88;     /*SORHIST1(V315,HIST,V317)*/
V317=pile[WZ2]; 
pile[v[22]]=V317; 
(*f[40])( );     /*SLG0(V317)*/
l88:if((V245!=2)) goto l108;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l108;
l90:x[jvj+133]=vo[14];z[jvj+133]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+133; 
(*f[26])( );if(v[102]) goto l91;     /*FNDC0(642,jvj+133,V250)*/
V250=pile[WZ2]; 
pile[v[22]]=333; pile[WZ1]=HIST; pile[WZ2]=jvj+130; 
(*f[1320])( );     /*ARCHIVE1(333,HIST,jvj+130)*/
pile[v[22]]=1070; pile[WZ1]=jvj+130; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(1070,jvj+130,jvj+132)*/
if((x[jvj+132]!=68)) goto l89;
pile[v[22]]=RR; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(RR,1070,68)*/
l89:V245=g[655];
if((V245<=0)) goto l108;
V246=vg[655];
if((V246!=0)) goto l85;
if((V245<3)) goto l87;
l85:pile[v[22]]=655; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=(-675); pile[WZ4]=jvj+130; pile[WZ5]=(-6231); pile[v[22]+6]=HIST; pile[v[22]+7]=jvj+131; 
(*f[187])( );     /*INTERP0(655,11886,0,(-675),jvj+130,(-6231),HIST,jvj+131)*/
if((x[jvj+131]==135)) goto l86;
goto l108;
l92:if(J!=incon) goto l93;
goto l98;
l93:if(JJ!=incon) goto l77;
goto l98;
l94:x[jvj+83]=68 ;z[jvj+83]=68;
pile[v[22]]=333; pile[WZ1]=HIST; pile[WZ2]=RR; 
(*f[1320])( );     /*ARCHIVE1(333,HIST,RR)*/
if((v[93]<=0)) goto l83;
x[jvj+127]=vo[14];z[jvj+127]=vz[14];
pile[v[22]]=1415; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(1415,jvj+127,jvj+128)*/
pile[v[22]]=1525; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(1525,jvj+128,jvj+129)*/
pile[v[22]]=jvj+128; pile[WZ1]=846; 
(*f[1211])( );     /*MARKUTILE0(jvj+128,846)*/
pile[WZ1]=1461; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+128,1461,1)*/
pile[v[22]]=jvj+129; 
(*f[186])( );     /*BTC0(jvj+129,1461,1)*/
l83:V236=g[654];
if((V236<=0)) goto l99;
V237=vg[654];
if((V237!=0)) goto l79;
if((V236<3)) goto l81;
l79:pile[v[22]]=654; pile[WZ1]=11886; pile[WZ2]=0; pile[WZ3]=(-631); pile[WZ4]=RR; pile[WZ5]=(-6231); pile[v[22]+6]=HIST; pile[v[22]+7]=jvj+126; 
(*f[187])( );     /*INTERP0(654,11886,0,(-631),RR,(-6231),HIST,jvj+126)*/
if((x[jvj+126]==135)) goto l80;
goto l99;
l96:if((V160<4)) goto l97;
goto l104;
l97:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=333; 
(*f[42])( );     /*SRA1(135,0,333,V292)*/
V292=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11316; pile[WZ2]=V292; 
(*f[39])( );     /*SDX0(20,11316,V292,V293)*/
V293=pile[WZ3]; 
pile[v[22]]=V293; 
(*f[40])( );     /*SLG0(V293)*/
if((V160!=2)) goto l104;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l104;
l111:V352=t[V352];
goto l109;
l112:V351=s[V352];
for(a=x[jvj+70];a>0;a=t[a]) if(s[a]==V351) goto l111;
l110:V35=134;
goto l50;
l115:V356=t[V356];
goto l113;
l116:V355=s[V356];
for(a=x[jvj+88];a>0;a=t[a]) if(s[a]==V355) goto l115;
l114:V174=134;
goto l57;
l119:V360=t[V360];
goto l117;
l120:V359=s[V360];
for(a=x[jvj+110];a>0;a=t[a]) if(s[a]==V359) goto l119;
l118:V112=134;
goto l69;
l123:V364=t[V364];
goto l121;
l124:V363=s[V364];
for(a=x[jvj+120];a>0;a=t[a]) if(s[a]==V363) goto l123;
l122:V76=134;
goto l74;
}
