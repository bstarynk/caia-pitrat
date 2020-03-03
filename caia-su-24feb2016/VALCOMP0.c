#include "dx.h"
void VALCOMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V2=0,V24=0,V39=0,V43=0,V37=0,V50=0,V53=0,V48=0,V61=0,V64=0,V59=0,V72=0,V75=0,V69=0,V70=0,W=0,V288=0,V123=0,WW=0,V293=0,V196=0,V212=0,V225=0,V296=0,V227=0,V297=0,V243=0,V230=0,V252=0,V251=0,V250=0,V244=0,V248=0,V247=0,V246=0,V=0,V299=0,V275=0,V262=0,V265=0,V276=0,V259=0,V267=0,V8=0,V19=0,V16=0,V189=0,V33=0,K=0,V134=0,V121=0,V137=0,V136=0,V122=0,V194=0,V201=0,J=0,V195=0,V209=0,V217=0,V210=0,V211=0,V111=0,V108=0,V107=0,V106=0,V85=0,V157=0,V158=0,V159=0,V154=0,V3=0;
int ND;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=134;
x[jvj+1]=10866;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1958&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
ND=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=ND; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(ND,274,Z)*/
pile[v[22]]=498; pile[WZ1]=ND; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l188;     /*FNDO0(498,ND,jvj+66)*/
pile[v[22]]=472; pile[WZ1]=jvj+66; 
(*f[26])( );if(v[102]) goto l186;     /*FNDC0(472,jvj+66,V8)*/
V8=pile[WZ2]; 
x[jvj+67]=incon;
if((V8==1)) goto l9;
if((V8==2)) goto l10;
if((V8!=3)) goto l186;
x[jvj+67]=605 ;z[jvj+67]=605;
l185:pile[v[22]]=jvj+67; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+67,607,Z,2,36)*/
l186:pile[v[22]]=688; pile[WZ1]=jvj+66; 
(*f[26])( );if(v[102]) goto l188;     /*FNDC0(688,jvj+66,V19)*/
V19=pile[WZ2]; 
x[jvj+68]=incon;
if((V19==1)) goto l24;
if((V19==2)) goto l25;
if((V19!=3)) goto l188;
x[jvj+68]=605 ;z[jvj+68]=605;
l187:pile[v[22]]=jvj+68; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+68,602,Z,5,36)*/
l188:pile[v[22]]=509; pile[WZ1]=ND; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(509,ND,jvj+69)*/
for(i=x[jvj+69],V16=0;i>0;i=t[i],V16++)  ;
x[jvj+70]=incon;
if((V16==1)) goto l19;
if((V16<2)) goto l190;
if((V16<=3)) goto l20;
if((V16<=6)) goto l21;
if((V16<=11)) goto l22;
if((V16<=20)) goto l23;
x[jvj+70]=607 ;z[jvj+70]=607;
l189:pile[v[22]]=jvj+70; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+70,604,Z,4,36)*/
l190:if((x[jvj+69]>0)) goto l191;
pile[v[22]]=365; pile[WZ1]=ND; pile[WZ2]=jvj+111; 
(*f[33])( );     /*FNDE0(365,ND,jvj+111)*/
for(i=x[jvj+111],V3=0;i>0;i=t[i],V3++)  ;
x[jvj+112]=incon;
if((V3==1)) goto l3;
if((V3==2)) goto l4;
if((V3<3)) goto l237;
if((V3<=4)) goto l5;
if((V3<=7)) goto l6;
if((V3<=11)) goto l7;
if((V3<=18)) goto l8;
if((V3>20)) goto l237;
x[jvj+112]=606 ;z[jvj+112]=606;
l1:V2=incon;
pile[v[22]]=498; pile[WZ1]=ND; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,ND,jvj+2)*/
pile[v[22]]=472; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(472,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V5!=1)) goto l2;
V2=0;
l221:pile[v[22]]=V2; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[1552])( );     /*PROG0(V2,jvj+112,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+113,607,Z,1,36)*/
l237:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,117,jvj+11)*/
pile[v[22]]=509; pile[WZ1]=ND; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(509,ND,jvj+8)*/
l48:if((x[jvj+8]>0)) goto l49;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l238;     /*FNDC0(117,jvj+11,V48)*/
V48=pile[WZ2]; 
x[jvj+114]=incon;
if((V48==1)) goto l52;
if((V48<2)) goto l238;
if((V48<=3)) goto l53;
if((V48<=6)) goto l54;
if((V48<=9)) goto l55;
x[jvj+114]=607 ;z[jvj+114]=607;
l222:pile[v[22]]=jvj+114; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=8; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+114,604,Z,8,36)*/
l238:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(0,117,jvj+15)*/
pile[v[22]]=509; pile[WZ1]=ND; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(509,ND,jvj+12)*/
l58:if((x[jvj+12]>0)) goto l59;
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l239;     /*FNDC0(117,jvj+15,V59)*/
V59=pile[WZ2]; 
x[jvj+115]=incon;
if((V59<=13)) goto l62;
if((V59<=16)) goto l63;
if((V59<=21)) goto l64;
if((V59<=26)) goto l65;
if((V59<=32)) goto l66;
if((V59<=42)) goto l67;
x[jvj+115]=607 ;z[jvj+115]=607;
l223:pile[v[22]]=jvj+115; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=9; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+115,206,Z,9,36)*/
l239:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(0,117,jvj+20)*/
pile[v[22]]=509; pile[WZ1]=ND; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(509,ND,jvj+16)*/
l70:if((x[jvj+16]>0)) goto l71;
pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l236;     /*FNDC0(117,jvj+20,V70)*/
V70=pile[WZ2]; 
x[jvj+116]=incon;
if((V70==1)) goto l74;
if((V70<2)) goto l236;
if((V70<=3)) goto l75;
if((V70<=6)) goto l76;
if((V70<=9)) goto l77;
x[jvj+116]=607 ;z[jvj+116]=607;
l224:pile[v[22]]=jvj+116; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=10; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+116,602,Z,10,36)*/
l236:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
pile[v[22]]=509; pile[WZ1]=ND; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(509,ND,jvj+3)*/
l38:if((x[jvj+3]>0)) goto l39;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l226;     /*FNDC0(117,jvj+7,V37)*/
V37=pile[WZ2]; 
x[jvj+117]=incon;
if((V37==1)) goto l42;
if((V37<2)) goto l226;
if((V37<=3)) goto l43;
if((V37<=6)) goto l44;
if((V37<=9)) goto l45;
x[jvj+117]=607 ;z[jvj+117]=607;
l225:pile[v[22]]=jvj+117; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=7; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+117,602,Z,7,36)*/
l226:x[jvj+48]=vo[14];z[jvj+48]=vz[14];
pile[v[22]]=1305; pile[WZ1]=jvj+48; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(1305,jvj+48,jvj+118)*/
l227:if((x[jvj+118]>0)) goto l228;
l235:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V2=(-1);
goto l221;
l3:x[jvj+112]=607 ;z[jvj+112]=607;
goto l1;
l4:x[jvj+112]=602 ;z[jvj+112]=602;
goto l1;
l5:x[jvj+112]=603 ;z[jvj+112]=603;
goto l1;
l6:x[jvj+112]=206 ;z[jvj+112]=206;
goto l1;
l7:x[jvj+112]=604 ;z[jvj+112]=604;
goto l1;
l8:x[jvj+112]=605 ;z[jvj+112]=605;
goto l1;
l9:x[jvj+67]=607 ;z[jvj+67]=607;
goto l185;
l10:x[jvj+67]=206 ;z[jvj+67]=206;
goto l185;
l12:x[jvj+78]=607 ;z[jvj+78]=607;
l196:pile[v[22]]=868; pile[WZ1]=jvj+71; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l197;     /*FNDO0(868,jvj+71,jvj+77)*/
if((x[jvj+77]!=25)) goto l197;
pile[v[22]]=jvj+78; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+78,602,Z,3,36)*/
l197:pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l210;     /*FNDO0(111,jvj+71,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l210;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]!=625)) goto l203;
x[jvj+82]=incon;
if((V189==1)) goto l29;
if((V189==2)) goto l30;
if((V189==3)) goto l31;
if((V189<4)) goto l35;
if((V189<=5)) goto l32;
if((V189<=8)) goto l33;
if((V189<=12)) goto l34;
if((V189>15)) goto l35;
x[jvj+82]=606 ;z[jvj+82]=606;
l198:pile[v[22]]=160; pile[WZ1]=jvj+71; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l200;     /*FNDO0(160,jvj+71,jvj+81)*/
pile[v[22]]=130; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l200;     /*FNDC0(130,jvj+81,V33)*/
V33=pile[WZ2]; 
K=V33;
V24=incon;
if((K<5)) goto l26;
if((K<12)) goto l27;
if((K<40)) goto l28;
V24=3;
l199:pile[v[22]]=V24; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[1552])( );     /*PROG0(V24,jvj+82,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=6; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+83,603,Z,6,36)*/
l200:if((V189!=2)) goto l203;
pile[v[22]]=160; pile[WZ1]=jvj+71; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l204;     /*FNDO0(160,jvj+71,jvj+84)*/
pile[v[22]]=130; pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l204;     /*FNDC0(130,jvj+84,V134)*/
V134=pile[WZ2]; 
V121=V134;
V123=incon;
if((V121<=10)) goto l101;
V123=10;
l100:x[jvj+128]=x[jvj+72] ;z[jvj+128]=z[jvj+72];
l99:if((x[jvj+128]<=0)) goto l204;
x[jvj+85]=s[x[jvj+128]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+128];
if((x[jvj+85]!=x[ND])) goto l201;
x[jvj+128]=t[x[jvj+128]];
goto l99;
l13:x[jvj+78]=602 ;z[jvj+78]=602;
goto l196;
l14:x[jvj+78]=603 ;z[jvj+78]=603;
goto l196;
l15:x[jvj+78]=206 ;z[jvj+78]=206;
goto l196;
l16:x[jvj+78]=604 ;z[jvj+78]=604;
goto l196;
l17:x[jvj+78]=605 ;z[jvj+78]=605;
goto l196;
l18:x[jvj+78]=(-99999998);
goto l197;
l19:x[jvj+70]=605 ;z[jvj+70]=605;
goto l189;
l20:x[jvj+70]=604 ;z[jvj+70]=604;
goto l189;
l21:x[jvj+70]=206 ;z[jvj+70]=206;
goto l189;
l22:x[jvj+70]=603 ;z[jvj+70]=603;
goto l189;
l23:x[jvj+70]=602 ;z[jvj+70]=602;
goto l189;
l24:x[jvj+68]=602 ;z[jvj+68]=602;
goto l187;
l25:x[jvj+68]=206 ;z[jvj+68]=206;
goto l187;
l26:V24=0;
goto l199;
l27:V24=1;
goto l199;
l28:V24=2;
goto l199;
l29:x[jvj+82]=607 ;z[jvj+82]=607;
goto l198;
l30:x[jvj+82]=602 ;z[jvj+82]=602;
goto l198;
l31:x[jvj+82]=603 ;z[jvj+82]=603;
goto l198;
l32:x[jvj+82]=206 ;z[jvj+82]=206;
goto l198;
l33:x[jvj+82]=604 ;z[jvj+82]=604;
goto l198;
l34:x[jvj+82]=605 ;z[jvj+82]=605;
goto l198;
l35:x[jvj+82]=(-99999998);
goto l200;
l36:V39=3;
l41:pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V39; 
(*f[186])( );     /*BTC0(jvj+7,117,V39)*/
l40:x[jvj+3]=t[x[jvj+3]];
goto l38;
l37:V39=2;
goto l41;
l39:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=868; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(868,jvj+4,jvj+5)*/
if(x[jvj+5]!=25&&x[jvj+5]!=625) goto l40;
pile[v[22]]=258; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(258,jvj+4,jvj+6)*/
for(i=x[jvj+6],V43=0;i>0;i=t[i],V43++)  ;
if((V43>3)) goto l40;
V39=incon;
if((V43==1)) goto l36;
if((V43==2)) goto l37;
V39=1;
goto l41;
l42:x[jvj+117]=606 ;z[jvj+117]=606;
goto l225;
l43:x[jvj+117]=604 ;z[jvj+117]=604;
goto l225;
l44:x[jvj+117]=603 ;z[jvj+117]=603;
goto l225;
l45:x[jvj+117]=602 ;z[jvj+117]=602;
goto l225;
l46:V50=3;
l51:pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=V50; 
(*f[186])( );     /*BTC0(jvj+11,117,V50)*/
l50:x[jvj+8]=t[x[jvj+8]];
goto l48;
l47:V50=2;
goto l51;
l49:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=258; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(258,jvj+9,jvj+10)*/
for(i=x[jvj+10],V53=0;i>0;i=t[i],V53++)  ;
if((V53>3)) goto l50;
V50=incon;
if((V53==1)) goto l46;
if((V53==2)) goto l47;
V50=1;
goto l51;
l52:x[jvj+114]=606 ;z[jvj+114]=606;
goto l222;
l53:x[jvj+114]=604 ;z[jvj+114]=604;
goto l222;
l54:x[jvj+114]=603 ;z[jvj+114]=603;
goto l222;
l55:x[jvj+114]=602 ;z[jvj+114]=602;
goto l222;
l56:V61=3;
l61:pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=V61; 
(*f[186])( );     /*BTC0(jvj+15,117,V61)*/
l60:x[jvj+12]=t[x[jvj+12]];
goto l58;
l57:V61=2;
goto l61;
l59:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=258; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(258,jvj+13,jvj+14)*/
for(i=x[jvj+14],V64=0;i>0;i=t[i],V64++)  ;
if((V64>3)) goto l60;
V61=incon;
if((V64==1)) goto l56;
if((V64==2)) goto l57;
V61=1;
goto l61;
l62:x[jvj+115]=606 ;z[jvj+115]=606;
goto l223;
l63:x[jvj+115]=605 ;z[jvj+115]=605;
goto l223;
l64:x[jvj+115]=604 ;z[jvj+115]=604;
goto l223;
l65:x[jvj+115]=206 ;z[jvj+115]=206;
goto l223;
l66:x[jvj+115]=603 ;z[jvj+115]=603;
goto l223;
l67:x[jvj+115]=602 ;z[jvj+115]=602;
goto l223;
l68:V72=3;
l73:pile[v[22]]=jvj+20; pile[WZ1]=117; pile[WZ2]=V72; 
(*f[186])( );     /*BTC0(jvj+20,117,V72)*/
l72:x[jvj+16]=t[x[jvj+16]];
goto l70;
l69:V72=2;
goto l73;
l71:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=258; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(258,jvj+17,jvj+18)*/
for(i=x[jvj+18],V75=0;i>0;i=t[i],V75++)  ;
if((V75!=1)) goto l72;
pile[v[22]]=868; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(868,jvj+17,jvj+19)*/
V69=x[jvj+19];
V72=incon;
if((V69==25)) goto l68;
if((V69==625)) goto l69;
V72=1;
goto l73;
l74:x[jvj+116]=606 ;z[jvj+116]=606;
goto l224;
l75:x[jvj+116]=604 ;z[jvj+116]=604;
goto l224;
l76:x[jvj+116]=603 ;z[jvj+116]=603;
goto l224;
l77:x[jvj+116]=602 ;z[jvj+116]=602;
goto l224;
l79:x[jvj+26]=s[x[jvj+125]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+125];
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[jvj+26]) goto l80;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+26)*/
l80:x[jvj+125]=t[x[jvj+125]];
l78:if((x[jvj+125]>0)) goto l79;
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[ND]) goto l216;
l108:x[jvj+35]=0 ;z[jvj+35]=0;
x[jvj+32]=vo[14];z[jvj+32]=vz[14];
pile[v[22]]=1232; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1232,jvj+32,jvj+33)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+34; 
(*f[887])( );     /*VARND0(jvj+23,jvj+34)*/
x[jvj+129]=x[jvj+34] ;z[jvj+129]=z[jvj+34];
l109:if((x[jvj+129]>0)) goto l110;
for(i=x[jvj+35],V157=0;i>0;i=t[i],V157++)  ;
if((V157!=1)) goto l215;
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[ND]) goto l117;
l215:x[jvj+98]=t[x[jvj+98]];
l214:if((x[jvj+98]<=0)) goto l192;
x[jvj+99]=s[x[jvj+98]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+98];
pile[v[22]]=jvj+99; pile[WZ1]=jvj+71; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l215;     /*FNDO0(jvj+99,jvj+71,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l215;     /*FNDO0(111,jvj+44,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l215;     /*FNDO0(101,jvj+100,jvj+101)*/
if((x[jvj+101]!=485)) goto l215;
pile[v[22]]=268; pile[WZ1]=jvj+99; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l215;     /*FNDO0(268,jvj+99,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+71; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l215;     /*FNDO0(jvj+102,jvj+71,jvj+23)*/
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+21]=vo[14];z[jvj+21]=vz[14];
pile[v[22]]=1232; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1232,jvj+21,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[887])( );     /*VARND0(jvj+23,jvj+24)*/
x[jvj+125]=x[jvj+24] ;z[jvj+125]=z[jvj+24];
goto l78;
l82:V288=t[V288];
l81:if((V288<=0)) goto l85;
W=s[V288];
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==W) goto l82;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+29)*/
l85:x[jvj+126]=t[x[jvj+126]];
l83:if((x[jvj+126]>0)) goto l84;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+104; 
(*f[892])( );     /*CALDETVAR0(jvj+31,jvj+104)*/
if((x[jvj+104]==0)) goto l108;
for(i=x[jvj+104],V107=0;i>0;i=t[i],V107++)  ;
V106=100*V107;
V85=V106/V108;
x[jvj+105]=incon;
if((V85<=14)) goto l86;
if((V85<=20)) goto l87;
if((V85<=28)) goto l88;
if((V85<=40)) goto l89;
if((V85<=61)) goto l90;
if((V85<=81)) goto l91;
x[jvj+105]=607 ;z[jvj+105]=607;
l217:pile[v[22]]=jvj+105; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=11; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+105,602,Z,11,36)*/
goto l108;
l84:x[jvj+29]=s[x[jvj+126]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+126];
x[jvj+27]=vo[14];z[jvj+27]=vz[14];
pile[v[22]]=1232; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1232,jvj+27,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[887])( );     /*VARND0(jvj+29,jvj+30)*/
V288=x[jvj+30];
goto l81;
l86:x[jvj+105]=606 ;z[jvj+105]=606;
goto l217;
l87:x[jvj+105]=605 ;z[jvj+105]=605;
goto l217;
l88:x[jvj+105]=604 ;z[jvj+105]=604;
goto l217;
l89:x[jvj+105]=206 ;z[jvj+105]=206;
goto l217;
l90:x[jvj+105]=603 ;z[jvj+105]=603;
goto l217;
l91:x[jvj+105]=602 ;z[jvj+105]=602;
goto l217;
l93:if((V111<=3)) goto l94;
if((V111<=7)) goto l95;
if((V111<=10)) goto l96;
if((V111<=16)) goto l97;
if((V111<=23)) goto l98;
x[jvj+95]=607 ;z[jvj+95]=607;
l212:pile[v[22]]=jvj+95; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=12; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+95,607,Z,12,36)*/
l213:pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l192;     /*FNDO0(111,jvj+71,jvj+96)*/
pile[v[22]]=101; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l192;     /*FNDO0(101,jvj+96,jvj+97)*/
if((x[jvj+97]!=25)) goto l192;
x[jvj+98]=d[20];z[jvj+98]=0;
goto l214;
l94:x[jvj+95]=606 ;z[jvj+95]=606;
goto l212;
l95:x[jvj+95]=604 ;z[jvj+95]=604;
goto l212;
l96:x[jvj+95]=206 ;z[jvj+95]=206;
goto l212;
l97:x[jvj+95]=603 ;z[jvj+95]=603;
goto l212;
l98:x[jvj+95]=602 ;z[jvj+95]=602;
goto l212;
l101:V123=V121;
goto l100;
l102:if((V122<=3)) goto l103;
if((V122<=7)) goto l104;
if((V122<=10)) goto l105;
if((V122<=16)) goto l106;
if((V122<=23)) goto l107;
x[jvj+87]=607 ;z[jvj+87]=607;
l202:pile[v[22]]=jvj+87; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=13; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+87,607,Z,13,36)*/
l204:V194=x[jvj+80];
if(V194!=25&&V194!=27&&V194!=28&&V194!=29&&V194!=30) goto l207;
pile[v[22]]=100; pile[WZ1]=jvj+71; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l207;     /*FNDO0(100,jvj+71,jvj+88)*/
if((x[jvj+88]!=22)) goto l207;
V196=incon;
if((V194==25)) goto l134;
V196=1;
l205:V201=x[jvj+72];
pile[v[22]]=1; pile[WZ1]=300; pile[WZ2]=V201; 
(*f[2069])( );if(v[102]) goto l207;     /*TAILLE0(1,300,V201,J)*/
J=pile[WZ3]; 
V195=J/V196;
x[jvj+89]=incon;
if((V195<=6)) goto l135;
if((V195<=9)) goto l136;
if((V195<=14)) goto l137;
if((V195<=20)) goto l138;
if((V195<=31)) goto l139;
if((V195<=44)) goto l140;
if((V195<=60)) goto l141;
x[jvj+89]=(-99999998);
l207:if((V189>15)) goto l213;
V209=x[jvj+80];
if(V209!=25&&V209!=27&&V209!=28&&V209!=29&&V209!=30) goto l210;
pile[v[22]]=100; pile[WZ1]=jvj+71; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l210;     /*FNDO0(100,jvj+71,jvj+90)*/
if((x[jvj+90]!=22)) goto l210;
V212=incon;
if((V209==25)) goto l142;
V212=1;
l208:V217=x[jvj+72];
pile[v[22]]=1; pile[WZ1]=50000; pile[WZ2]=V217; 
(*f[2069])( );if(v[102]) goto l210;     /*TAILLE0(1,50000,V217,V210)*/
V210=pile[WZ3]; 
V211=V210/V212;
x[jvj+91]=incon;
if((V211<=108)) goto l143;
if((V211<=254)) goto l144;
if((V211<=617)) goto l145;
if((V211<=1481)) goto l146;
if((V211<=3732)) goto l147;
if((V211<=8610)) goto l148;
if((V211<=10000)) goto l149;
x[jvj+91]=(-99999998);
l210:if((V189!=2)) goto l213;
pile[v[22]]=868; pile[WZ1]=jvj+71; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l213;     /*FNDO0(868,jvj+71,jvj+92)*/
if((x[jvj+92]!=25)) goto l213;
x[jvj+127]=x[jvj+72] ;z[jvj+127]=z[jvj+72];
l92:if((x[jvj+127]<=0)) goto l213;
x[jvj+93]=s[x[jvj+127]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+127];
if((x[jvj+93]!=x[ND])) goto l211;
x[jvj+127]=t[x[jvj+127]];
goto l92;
l103:x[jvj+87]=606 ;z[jvj+87]=606;
goto l202;
l104:x[jvj+87]=604 ;z[jvj+87]=604;
goto l202;
l105:x[jvj+87]=206 ;z[jvj+87]=206;
goto l202;
l106:x[jvj+87]=603 ;z[jvj+87]=603;
goto l202;
l107:x[jvj+87]=602 ;z[jvj+87]=602;
goto l202;
l110:x[jvj+36]=s[x[jvj+129]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+129];
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==x[jvj+36]) goto l111;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[68])( );     /*PLUE0(jvj+35,jvj+36)*/
l111:x[jvj+129]=t[x[jvj+129]];
goto l109;
l113:V293=t[V293];
l112:if((V293<=0)) goto l116;
WW=s[V293];
for(a=x[jvj+38];a>0;a=t[a]) if(s[a]==WW) goto l113;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+41,jvj+39)*/
l116:x[jvj+130]=t[x[jvj+130]];
l114:if((x[jvj+130]>0)) goto l115;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+107; 
(*f[892])( );     /*CALDETVAR0(jvj+41,jvj+107)*/
for(i=x[jvj+107],V159=0;i>0;i=t[i],V159++)  ;
if((V158==V159)) goto l218;
goto l215;
l115:x[jvj+39]=s[x[jvj+130]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+130];
x[jvj+37]=vo[14];z[jvj+37]=vz[14];
pile[v[22]]=1232; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(1232,jvj+37,jvj+38)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[887])( );     /*VARND0(jvj+39,jvj+40)*/
V293=x[jvj+40];
goto l112;
l117:x[jvj+46]=0 ;z[jvj+46]=0;
x[jvj+42]=vo[14];z[jvj+42]=vz[14];
pile[v[22]]=1232; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1232,jvj+42,jvj+43)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[887])( );     /*VARND0(jvj+44,jvj+45)*/
x[jvj+131]=x[jvj+45] ;z[jvj+131]=z[jvj+45];
l118:if((x[jvj+131]>0)) goto l119;
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==x[ND]) goto l215;
for(i=x[jvj+46],V158=0;i>0;i=t[i],V158++)  ;
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+106; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+106)*/
x[jvj+41]=0 ;z[jvj+41]=0;
x[jvj+130]=x[jvj+106] ;z[jvj+130]=z[jvj+106];
goto l114;
l119:x[jvj+47]=s[x[jvj+131]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+131];
for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==x[jvj+47]) goto l120;
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[68])( );     /*PLUE0(jvj+46,jvj+47)*/
l120:x[jvj+131]=t[x[jvj+131]];
goto l118;
l121:if((V154<=3)) goto l122;
if((V154<=7)) goto l123;
if((V154<=10)) goto l124;
if((V154<=16)) goto l125;
if((V154<=23)) goto l126;
x[jvj+110]=607 ;z[jvj+110]=607;
l220:pile[v[22]]=jvj+110; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=14; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+110,607,Z,14,36)*/
l219:x[jvj+46]=t[x[jvj+46]];
l218:if((x[jvj+46]<=0)) goto l215;
x[jvj+108]=s[x[jvj+46]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+46];
pile[v[22]]=365; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(365,jvj+108,jvj+109)*/
for(i=x[jvj+109],V154=0;i>0;i=t[i],V154++)  ;
x[jvj+110]=incon;
if((V154>=2)) goto l121;
x[jvj+110]=(-99999998);
goto l219;
l122:x[jvj+110]=606 ;z[jvj+110]=606;
goto l220;
l123:x[jvj+110]=604 ;z[jvj+110]=604;
goto l220;
l124:x[jvj+110]=206 ;z[jvj+110]=206;
goto l220;
l125:x[jvj+110]=603 ;z[jvj+110]=603;
goto l220;
l126:x[jvj+110]=602 ;z[jvj+110]=602;
goto l220;
l128:x[jvj+76]=607 ;z[jvj+76]=607;
l195:pile[v[22]]=447; pile[WZ1]=jvj+71; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+71,jvj+75)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+75; pile[WZ2]=Z; pile[WZ3]=15; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+76,jvj+75,Z,15,36)*/
l11:x[jvj+78]=incon;
if((V189==1)) goto l12;
if((V189==2)) goto l13;
if((V189==3)) goto l14;
if((V189<4)) goto l18;
if((V189<=5)) goto l15;
if((V189<=8)) goto l16;
if((V189<=12)) goto l17;
if((V189>15)) goto l18;
x[jvj+78]=606 ;z[jvj+78]=606;
goto l196;
l129:x[jvj+76]=603 ;z[jvj+76]=603;
goto l195;
l130:x[jvj+76]=604 ;z[jvj+76]=604;
goto l195;
l131:x[jvj+76]=605 ;z[jvj+76]=605;
goto l195;
l132:x[jvj+73]=607 ;z[jvj+73]=607;
l193:pile[v[22]]=jvj+73; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=16; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+73,604,Z,16,36)*/
x[jvj+74]=incon;
if((V189==5)) goto l178;
if((V189==6)) goto l179;
if((V189==7)) goto l180;
if((V189==8)) goto l181;
if((V189==9)) goto l182;
if((V189==10)) goto l183;
if((V189==11)) goto l184;
x[jvj+74]=(-99999998);
l127:x[jvj+76]=incon;
if((V189<=2)) goto l128;
if((V189<=4)) goto l129;
if((V189<=6)) goto l130;
if((V189<=8)) goto l131;
x[jvj+76]=606 ;z[jvj+76]=606;
goto l195;
l133:x[jvj+73]=604 ;z[jvj+73]=604;
goto l193;
l134:V196=5;
goto l205;
l135:x[jvj+89]=607 ;z[jvj+89]=607;
l206:pile[v[22]]=jvj+89; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=17; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+89,206,Z,17,36)*/
goto l207;
l136:x[jvj+89]=602 ;z[jvj+89]=602;
goto l206;
l137:x[jvj+89]=603 ;z[jvj+89]=603;
goto l206;
l138:x[jvj+89]=206 ;z[jvj+89]=206;
goto l206;
l139:x[jvj+89]=604 ;z[jvj+89]=604;
goto l206;
l140:x[jvj+89]=605 ;z[jvj+89]=605;
goto l206;
l141:x[jvj+89]=606 ;z[jvj+89]=606;
goto l206;
l142:V212=5;
goto l208;
l143:x[jvj+91]=607 ;z[jvj+91]=607;
l209:pile[v[22]]=jvj+91; pile[WZ1]=605; pile[WZ2]=Z; pile[WZ3]=18; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+91,605,Z,18,36)*/
goto l210;
l144:x[jvj+91]=602 ;z[jvj+91]=602;
goto l209;
l145:x[jvj+91]=603 ;z[jvj+91]=603;
goto l209;
l146:x[jvj+91]=206 ;z[jvj+91]=206;
goto l209;
l147:x[jvj+91]=604 ;z[jvj+91]=604;
goto l209;
l148:x[jvj+91]=605 ;z[jvj+91]=605;
goto l209;
l149:x[jvj+91]=606 ;z[jvj+91]=606;
goto l209;
l150:pile[v[22]]=1304; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(1304,jvj+48,jvj+49)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[887])( );     /*VARND0(jvj+50,jvj+51)*/
V296=x[jvj+51];
l151:if((V296>0)) goto l152;
pile[v[22]]=jvj+124; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=19; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+124,602,Z,19,36)*/
l234:x[jvj+134]=t[x[jvj+134]];
l232:if((x[jvj+134]<=0)) goto l229;
x[jvj+50]=s[x[jvj+134]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+134];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+123; 
(*f[887])( );     /*VARND0(jvj+50,jvj+123)*/
for(a=x[jvj+123];a>0;a=t[a]) if(s[a]==x[ND]) goto l150;
goto l234;
l152:V225=s[V296];
if((V225==x[ND])) goto l153;
for(a=x[jvj+49];a>0;a=t[a]) if(s[a]==V225) goto l153;
goto l234;
l153:V296=t[V296];
goto l151;
l155:V227=s[V297];
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==V227) goto l156;
l159:x[jvj+132]=t[x[jvj+132]];
l157:if((x[jvj+132]>0)) goto l158;
pile[v[22]]=117; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l229;     /*FNDC0(117,jvj+55,V243)*/
V243=pile[WZ2]; 
V230=V243;
x[jvj+124]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l163;     /*FNDO0(145,jvj+56,jvj+57)*/
if((x[jvj+57]!=25)) goto l160;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l160;     /*FNDC0(117,jvj+56,V252)*/
V252=pile[WZ2]; 
if((V230<V252)) goto l160;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l160;     /*FNDC0(515,jvj+56,V251)*/
V251=pile[WZ2]; 
V250=V251-V230;
if((V250>V252)) goto l160;
x[jvj+124]=607 ;z[jvj+124]=607;
l160:if(x[jvj+57]!=30&&x[jvj+57]!=25) goto l161;
pile[v[22]]=117; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l161;     /*FNDC0(117,jvj+56,V244)*/
V244=pile[WZ2]; 
if((V230<V244)) goto l161;
x[jvj+124]=206 ;z[jvj+124]=206;
l161:if(x[jvj+57]!=25&&x[jvj+57]!=28) goto l162;
pile[v[22]]=117; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l162;     /*FNDC0(117,jvj+56,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l162;     /*FNDC0(515,jvj+56,V247)*/
V247=pile[WZ2]; 
V246=V247-V230;
if((V246>V248)) goto l162;
x[jvj+124]=206 ;z[jvj+124]=206;
l233:x[jvj+134]=x[jvj+122] ;z[jvj+134]=z[jvj+122];
goto l232;
l156:V297=t[V297];
l154:if((V297>0)) goto l155;
pile[v[22]]=jvj+55; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+55,117,1)*/
goto l159;
l158:x[jvj+53]=s[x[jvj+132]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+132];
pile[v[22]]=1304; pile[WZ1]=jvj+48; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(1304,jvj+48,jvj+52)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[887])( );     /*VARND0(jvj+53,jvj+54)*/
V297=x[jvj+54];
goto l154;
l162:if(x[jvj+124]==incon) goto l163;
if((x[jvj+124]!=(-99999998))) goto l233;
l229:x[jvj+118]=t[x[jvj+118]];
goto l227;
l163:x[jvj+124]=(-99999998);
goto l229;
l165:V=s[V299];
for(a=x[jvj+58];a>0;a=t[a]) if(s[a]==V) goto l166;
pile[v[22]]=jvj+61; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+61,117,1)*/
l166:V299=t[V299];
l164:if((V299>0)) goto l165;
pile[v[22]]=117; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l171;     /*FNDC0(117,jvj+61,V275)*/
V275=pile[WZ2]; 
V262=V275;
V265=incon;
if((V262==1)) goto l167;
if((V262==2)) goto l168;
V265=(-99999998);
l171:x[jvj+133]=t[x[jvj+133]];
l169:if((x[jvj+133]>0)) goto l170;
pile[v[22]]=117; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l231;     /*FNDC0(117,jvj+64,V276)*/
V276=pile[WZ2]; 
V259=V276;
x[jvj+120]=incon;
if((V259==1)) goto l175;
if((V259>=2)) goto l176;
x[jvj+120]=(-99999998);
l231:pile[v[22]]=350; pile[WZ1]=jvj+56; pile[WZ2]=jvj+122; 
(*f[33])( );     /*FNDE0(350,jvj+56,jvj+122)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+55; 
(*f[46])( );     /*TRI0(0,117,jvj+55)*/
x[jvj+132]=x[jvj+122] ;z[jvj+132]=z[jvj+122];
goto l157;
l167:V265=3;
l172:pile[v[22]]=jvj+64; pile[WZ1]=117; pile[WZ2]=V265; 
(*f[186])( );     /*BTC0(jvj+64,117,V265)*/
goto l171;
l168:V265=1;
goto l172;
l170:x[jvj+59]=s[x[jvj+133]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+133];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+63; 
(*f[887])( );     /*VARND0(jvj+59,jvj+63)*/
for(a=x[jvj+63];a>0;a=t[a]) if(s[a]==x[ND]) goto l241;
goto l171;
l173:V267=incon;
pile[v[22]]=145; pile[WZ1]=jvj+56; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l174;     /*FNDO0(145,jvj+56,jvj+65)*/
if((x[jvj+65]!=25)) goto l174;
V267=3;
l240:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+64; 
(*f[46])( );     /*TRI0(0,117,jvj+64)*/
pile[v[22]]=350; pile[WZ1]=jvj+56; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(350,jvj+56,jvj+62)*/
x[jvj+133]=x[jvj+62] ;z[jvj+133]=z[jvj+62];
goto l169;
l174:V267=0;
goto l240;
l175:x[jvj+120]=606 ;z[jvj+120]=606;
l230:pile[v[22]]=V267; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[1552])( );     /*PROG0(V267,jvj+120,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=606; pile[WZ2]=Z; pile[WZ3]=20; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+121,606,Z,20,36)*/
goto l231;
l176:if((V259<=3)) goto l177;
x[jvj+120]=603 ;z[jvj+120]=603;
goto l230;
l177:x[jvj+120]=604 ;z[jvj+120]=604;
goto l230;
l178:x[jvj+74]=607 ;z[jvj+74]=607;
l194:pile[v[22]]=jvj+74; pile[WZ1]=606; pile[WZ2]=Z; pile[WZ3]=21; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+74,606,Z,21,36)*/
goto l127;
l179:x[jvj+74]=602 ;z[jvj+74]=602;
goto l194;
l180:x[jvj+74]=603 ;z[jvj+74]=603;
goto l194;
l181:x[jvj+74]=206 ;z[jvj+74]=206;
goto l194;
l182:x[jvj+74]=604 ;z[jvj+74]=604;
goto l194;
l183:x[jvj+74]=605 ;z[jvj+74]=605;
goto l194;
l184:x[jvj+74]=606 ;z[jvj+74]=606;
goto l194;
l191:x[jvj+71]=s[x[jvj+69]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+69];
pile[v[22]]=258; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(258,jvj+71,jvj+72)*/
for(i=x[jvj+72],V189=0;i>0;i=t[i],V189++)  ;
x[jvj+73]=incon;
if((V189<=1)) goto l132;
if((V189<=3)) goto l133;
x[jvj+73]=606 ;z[jvj+73]=606;
goto l193;
l192:x[jvj+69]=t[x[jvj+69]];
goto l190;
l201:pile[v[22]]=365; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(365,jvj+85,jvj+86)*/
for(i=x[jvj+86],V137=0;i>0;i=t[i],V137++)  ;
V136=V123*V137;
V122=V136/10;
x[jvj+87]=incon;
if((V122>=2)) goto l102;
x[jvj+87]=(-99999998);
goto l204;
l203:if((V189<=6)) goto l204;
goto l207;
l211:pile[v[22]]=365; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[33])( );     /*FNDE0(365,jvj+93,jvj+94)*/
for(i=x[jvj+94],V111=0;i>0;i=t[i],V111++)  ;
x[jvj+95]=incon;
if((V111>=2)) goto l93;
x[jvj+95]=(-99999998);
goto l213;
l216:if((x[jvj+25]==0)) goto l108;
for(i=x[jvj+25],V108=0;i>0;i=t[i],V108++)  ;
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+103)*/
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+126]=x[jvj+103] ;z[jvj+126]=z[jvj+103];
goto l83;
l228:x[jvj+56]=s[x[jvj+118]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+118];
pile[v[22]]=258; pile[WZ1]=jvj+56; pile[WZ2]=jvj+119; 
(*f[33])( );     /*FNDE0(258,jvj+56,jvj+119)*/
for(a=x[jvj+119];a>0;a=t[a]) if(s[a]==x[ND]) goto l173;
goto l229;
l241:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+61; 
(*f[46])( );     /*TRI0(0,117,jvj+61)*/
pile[v[22]]=1304; pile[WZ1]=jvj+48; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(1304,jvj+48,jvj+58)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[887])( );     /*VARND0(jvj+59,jvj+60)*/
V299=x[jvj+60];
goto l164;
}
