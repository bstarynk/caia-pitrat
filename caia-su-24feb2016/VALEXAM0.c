#include "dx.h"
void VALEXAM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V24=0,V71=0,V70=0,V73=0,V72=0,V77=0,V78=0,V61=0,V81=0,V80=0,V60=0,V69=0,V58=0,V85=0,V87=0,V94=0,V86=0,V97=0,V98=0,V96=0,V128=0,V130=0,V137=0,V129=0,V149=0,V164=0,V168=0,V160=0,V162=0,V189=0,V181=0,V183=0,V193=0,V191=0,V196=0,V197=0,V209=0,V220=0,V222=0,V237=0,V143=0,V139=0,V187=0,N=0,NN=0,V158=0,V150=0,V147=0,V179=0,V178=0,V177=0,V172=0,KK=0,V52=0,V92=0,V135=0,V101=0,V116=0,V118=0,V117=0,I=0,V64=0,V63=0,V3=0,V9=0,V200=0,V199=0,V238=0,V210=0,V233=0,V223=0,V218=0;
int M,K,F,PR,MC;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=142;
x[jvj+1]=11507;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1304&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; K=pile[v[22]+1]; F=pile[v[22]+2]; PR=pile[v[22]+3]; MC=pile[v[22]+4]; Z=pile[v[22]+5]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=M; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(M,274,Z)*/
x[jvj+52]=incon;
if((K<8)) goto l191;
if((K<=9)) goto l43;
if((K<=12)) goto l44;
if((K<=14)) goto l45;
if((K<=16)) goto l46;
if((K<=18)) goto l47;
x[jvj+52]=607 ;z[jvj+52]=607;
l48:x[jvj+53]=incon;
if((x[F]!=25)) goto l49;
if((K>=40)) goto l49;
x[jvj+53]=603 ;z[jvj+53]=603;
l230:pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=Z; pile[WZ3]=6; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+52,jvj+53,Z,6,52)*/
l191:x[jvj+54]=incon;
if((K==2)) goto l192;
if((K==3)) goto l193;
if((K==4)) goto l194;
if((K==5)) goto l195;
if((K==6)) goto l196;
if((K!=7)) goto l1;
x[jvj+54]=606 ;z[jvj+54]=606;
l197:x[jvj+55]=incon;
if((K<=7)) goto l198;
if((K<=15)) goto l199;
x[jvj+55]=604 ;z[jvj+55]=604;
l231:pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=Z; pile[WZ3]=22; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+54,jvj+55,Z,22,36)*/
l1:x[jvj+56]=incon;
if((K==2)) goto l2;
if((K==3)) goto l3;
if((K==4)) goto l4;
if((K==5)) goto l5;
if((K==6)) goto l6;
if((K!=7)) goto l177;
x[jvj+56]=606 ;z[jvj+56]=606;
l7:x[jvj+57]=incon;
if((x[F]==25)) goto l8;
if((x[F]==625)) goto l10;
if((x[F]!=1280)) goto l11;
x[jvj+57]=206 ;z[jvj+57]=206;
l11:if(x[F]==27||x[F]==28||x[F]==29||x[F]==30) goto l12;
if(x[jvj+57]==incon) goto l177;
if((x[jvj+57]!=(-99999998))) goto l232;
l177:x[jvj+58]=incon;
if((K<16)) goto l234;
if((K<=21)) goto l178;
if((K<=27)) goto l179;
if((K<=35)) goto l180;
if((K<=49)) goto l181;
if((K<=63)) goto l182;
if((K<=86)) goto l183;
x[jvj+58]=607 ;z[jvj+58]=607;
l175:V191=incon;
pile[v[22]]=472; pile[WZ1]=PR; 
(*f[26])( );if(v[102]) goto l176;     /*FNDC0(472,PR,V193)*/
V193=pile[WZ2]; 
if((V193!=1)) goto l176;
V191=0;
l233:pile[v[22]]=V191; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[1552])( );     /*PROG0(V191,jvj+58,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=20; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+59,607,Z,20,52)*/
l234:pile[v[22]]=509; pile[WZ1]=MC; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(509,MC,jvj+60)*/
for(i=x[jvj+60],V143=0;i>0;i=t[i],V143++)  ;
x[jvj+61]=incon;
if((V143==1)) goto l134;
if((V143<2)) goto l236;
if((V143<=4)) goto l135;
if((V143<=7)) goto l136;
if((V143<=11)) goto l137;
if((V143<=18)) goto l138;
x[jvj+61]=607 ;z[jvj+61]=607;
l235:pile[v[22]]=jvj+61; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=15; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+61,604,Z,15,36)*/
l236:if((x[jvj+60]>0)) goto l237;
pile[v[22]]=868; pile[WZ1]=M; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l271;     /*FNDO0(868,M,jvj+78)*/
if((x[jvj+78]!=55)) goto l271;
pile[v[22]]=M; pile[WZ1]=25; 
(*f[1550])( );if(v[102]) goto l253;     /*COMPTET0(M,25,KK)*/
KK=pile[WZ2]; 
x[jvj+80]=incon;
if((KK<=1)) goto l33;
if((KK<=4)) goto l34;
if((KK<=7)) goto l35;
if((KK<=11)) goto l36;
if((KK<=18)) goto l37;
x[jvj+80]=607 ;z[jvj+80]=607;
l251:pile[v[22]]=1294; pile[WZ1]=M; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(1294,M,jvj+79)*/
for(a=x[jvj+79];a>0;a=t[a]) if(s[a]==1291) goto l252;
l253:pile[v[22]]=M; pile[WZ1]=625; 
(*f[1550])( );if(v[102]) goto l256;     /*COMPTET0(M,625,V52)*/
V52=pile[WZ2]; 
x[jvj+82]=incon;
if((V52<=1)) goto l50;
if((V52<=4)) goto l51;
if((V52<=7)) goto l52;
if((V52<=11)) goto l53;
if((V52<=18)) goto l54;
x[jvj+82]=607 ;z[jvj+82]=607;
l254:pile[v[22]]=1294; pile[WZ1]=M; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(1294,M,jvj+81)*/
for(a=x[jvj+81];a>0;a=t[a]) if(s[a]==1291) goto l255;
l256:if((K<=0)) goto l261;
V85=999999;
pile[v[22]]=M; pile[WZ1]=jvj+29; 
(*f[887])( );     /*VARND0(M,jvj+29)*/
l78:if((x[jvj+29]>0)) goto l79;
if((V85==999999)) goto l113;
V92=V85/K;
x[jvj+85]=incon;
if((V92<=3)) goto l88;
if((V92<=5)) goto l89;
x[jvj+85]=603 ;z[jvj+85]=603;
l81:x[jvj+84]=incon;
if((V92<=2)) goto l82;
if((V92==3)) goto l83;
if((V92==4)) goto l84;
if((V92==5)) goto l85;
if((V92<6)) goto l113;
if((V92<=7)) goto l86;
if((V92<=9)) goto l87;
if((V92!=10)) goto l113;
x[jvj+84]=606 ;z[jvj+84]=606;
l257:pile[v[22]]=1300; pile[WZ1]=M; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(1300,M,jvj+83)*/
for(a=x[jvj+83];a>0;a=t[a]) if(s[a]==1280) goto l258;
l113:V128=999999;
pile[v[22]]=M; pile[WZ1]=jvj+43; 
(*f[887])( );     /*VARND0(M,jvj+43)*/
l115:if((x[jvj+43]>0)) goto l116;
if((V128==999999)) goto l261;
V135=V128/K;
if((V135<=10)) goto l261;
x[jvj+87]=incon;
if((V135<=12)) goto l118;
if((V135<=16)) goto l119;
if((V135<=20)) goto l120;
if((V135<=25)) goto l121;
if((V135<=31)) goto l122;
if((V135<=39)) goto l123;
x[jvj+87]=607 ;z[jvj+87]=607;
l124:x[jvj+88]=incon;
if((V135<15)) goto l125;
if((V135<40)) goto l126;
if((V135<60)) goto l127;
x[jvj+88]=607 ;z[jvj+88]=607;
l259:pile[v[22]]=1300; pile[WZ1]=M; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(1300,M,jvj+86)*/
for(a=x[jvj+86];a>0;a=t[a]) if(s[a]==1280) goto l260;
l261:if((x[F]!=25)) goto l265;
pile[v[22]]=1581; pile[WZ1]=M; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(1581,M,jvj+89)*/
for(i=x[jvj+89],V101=0;i>0;i=t[i],V101++)  ;
x[jvj+90]=incon;
if((V101==1)) goto l95;
if((V101==2)) goto l96;
if((V101<=2)) goto l263;
x[jvj+90]=607 ;z[jvj+90]=607;
l90:V96=incon;
V97=999999;
x[jvj+134]=x[jvj+89] ;z[jvj+134]=z[jvj+89];
l91:if((x[jvj+134]>0)) goto l92;
if((V97!=999999)) goto l94;
V96=9999;
l97:x[jvj+91]=incon;
if((V96<=3)) goto l98;
if((V96<=7)) goto l99;
if((V96<=14)) goto l100;
if((V96<=25)) goto l101;
if((V96<=49)) goto l102;
if((V96<=86)) goto l103;
x[jvj+91]=606 ;z[jvj+91]=606;
l262:pile[v[22]]=jvj+90; pile[WZ1]=jvj+91; pile[WZ2]=Z; pile[WZ3]=11; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+90,jvj+91,Z,11,36)*/
l263:for(i=x[jvj+89],V116=0;i>0;i=t[i],V116++)  ;
if((V116<=0)) goto l265;
pile[v[22]]=jvj+89; pile[WZ1]=jvj+92; 
(*f[1551])( );     /*DEDUIT0(jvj+89,jvj+92)*/
x[jvj+41]=0 ;z[jvj+41]=0;
x[jvj+39]=0 ;z[jvj+39]=0;
x[jvj+136]=x[jvj+92] ;z[jvj+136]=z[jvj+92];
l107:if((x[jvj+136]>0)) goto l108;
x[jvj+37]=0 ;z[jvj+37]=0;
l104:if((x[jvj+92]<=0)) goto l110;
x[jvj+35]=s[x[jvj+92]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+92];
pile[v[22]]=1366; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1366,jvj+35,jvj+36)*/
x[jvj+135]=x[jvj+36] ;z[jvj+135]=z[jvj+36];
l105:if((x[jvj+135]>0)) goto l106;
x[jvj+92]=t[x[jvj+92]];
goto l104;
l2:x[jvj+56]=607 ;z[jvj+56]=607;
goto l7;
l3:x[jvj+56]=603 ;z[jvj+56]=603;
goto l7;
l4:x[jvj+56]=206 ;z[jvj+56]=206;
goto l7;
l5:x[jvj+56]=604 ;z[jvj+56]=604;
goto l7;
l6:x[jvj+56]=605 ;z[jvj+56]=605;
goto l7;
l8:if((K<=25)) goto l9;
if((K>80)) goto l10;
x[jvj+57]=603 ;z[jvj+57]=603;
goto l11;
l9:x[jvj+57]=607 ;z[jvj+57]=607;
goto l11;
l10:x[jvj+57]=604 ;z[jvj+57]=604;
goto l11;
l12:x[jvj+57]=606 ;z[jvj+57]=606;
l232:pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+56,jvj+57,Z,1,36)*/
goto l177;
l13:x[jvj+101]=607 ;z[jvj+101]=607;
l15:x[jvj+102]=incon;
if((x[F]!=25)) goto l19;
x[jvj+102]=607 ;z[jvj+102]=607;
l19:if(x[F]!=27&&x[F]!=28&&x[F]!=29&&x[F]!=30) goto l20;
x[jvj+102]=604 ;z[jvj+102]=604;
l20:if((x[F]!=625)) goto l21;
pile[v[22]]=M; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(M,jvj+2)*/
l16:if((x[jvj+2]>0)) goto l17;
x[jvj+102]=603 ;z[jvj+102]=603;
l272:pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+101,jvj+102,Z,2,36)*/
l273:pile[v[22]]=688; pile[WZ1]=PR; 
(*f[26])( );if(v[102]) goto l275;     /*FNDC0(688,PR,V9)*/
V9=pile[WZ2]; 
x[jvj+103]=incon;
if((V9==1)) goto l23;
if((V9==2)) goto l24;
if((V9!=3)) goto l275;
x[jvj+103]=605 ;z[jvj+103]=605;
l25:x[jvj+104]=incon;
if((x[F]!=25)) goto l29;
x[jvj+104]=602 ;z[jvj+104]=602;
l29:if(x[F]!=27&&x[F]!=28&&x[F]!=29&&x[F]!=30) goto l30;
x[jvj+104]=605 ;z[jvj+104]=605;
l30:if((x[F]!=625)) goto l31;
pile[v[22]]=M; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(M,jvj+5)*/
l26:if((x[jvj+5]>0)) goto l27;
x[jvj+104]=206 ;z[jvj+104]=206;
l274:pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+103,jvj+104,Z,3,36)*/
l275:if((K<=0)) goto l278;
pile[v[22]]=1280; pile[WZ1]=M; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l278;     /*FNDO0(1280,M,jvj+105)*/
if((x[jvj+105]!=480)) goto l278;
V196=999999;
pile[v[22]]=1310; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1310,M,jvj+50)*/
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==x[Z]) goto l184;
l276:if((V196<=0)) goto l278;
if((V196==999999)) goto l278;
V200=100*V196;
V199=V200/K;
x[jvj+106]=incon;
if((V199<=3)) goto l185;
if((V199<=5)) goto l186;
if((V199<=8)) goto l187;
if((V199<=14)) goto l188;
if((V199<=21)) goto l189;
if((V199<=34)) goto l190;
x[jvj+106]=606 ;z[jvj+106]=606;
l277:pile[v[22]]=jvj+106; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=21; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+106,603,Z,21,36)*/
l278:pile[v[22]]=1280; pile[WZ1]=M; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l299;     /*FNDO0(1280,M,jvj+107)*/
if((x[jvj+107]!=481)) goto l299;
pile[v[22]]=365; pile[WZ2]=jvj+108; 
(*f[33])( );     /*FNDE0(365,M,jvj+108)*/
V237=incon;
if((K<=2)) goto l220;
if((K==3)) goto l221;
if((K==4)) goto l222;
if((K==5)) goto l223;
V237=(-4);
l281:x[jvj+139]=x[jvj+108] ;z[jvj+139]=z[jvj+108];
l279:if((x[jvj+139]>0)) goto l280;
V209=incon;
if((K<=2)) goto l200;
if((K<=4)) goto l201;
V209=0;
l286:x[jvj+140]=x[jvj+108] ;z[jvj+140]=z[jvj+108];
l284:if((x[jvj+140]>0)) goto l285;
V220=incon;
if((K<=2)) goto l209;
if((K<=4)) goto l210;
V220=0;
l291:if((x[jvj+108]<=0)) goto l299;
x[jvj+119]=s[x[jvj+108]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+108];
pile[v[22]]=509; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[33])( );     /*FNDE0(509,jvj+119,jvj+120)*/
x[jvj+142]=x[jvj+120] ;z[jvj+142]=z[jvj+120];
l292:if((x[jvj+142]>0)) goto l293;
x[jvj+108]=t[x[jvj+108]];
goto l291;
l14:x[jvj+101]=206 ;z[jvj+101]=206;
goto l15;
l17:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=1347; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1347,jvj+3,jvj+4)*/
l21:if(x[jvj+102]==incon) goto l22;
goto l272;
l18:x[jvj+2]=t[x[jvj+2]];
goto l16;
l22:x[jvj+102]=616 ;z[jvj+102]=616;
goto l272;
l23:x[jvj+103]=602 ;z[jvj+103]=602;
goto l25;
l24:x[jvj+103]=206 ;z[jvj+103]=206;
goto l25;
l27:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=1347; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1347,jvj+6,jvj+7)*/
l31:if(x[jvj+104]==incon) goto l32;
goto l274;
l28:x[jvj+5]=t[x[jvj+5]];
goto l26;
l32:x[jvj+104]=616 ;z[jvj+104]=616;
goto l274;
l33:x[jvj+80]=606 ;z[jvj+80]=606;
goto l251;
l34:x[jvj+80]=604 ;z[jvj+80]=604;
goto l251;
l35:x[jvj+80]=206 ;z[jvj+80]=206;
goto l251;
l36:x[jvj+80]=603 ;z[jvj+80]=603;
goto l251;
l37:x[jvj+80]=602 ;z[jvj+80]=602;
goto l251;
l43:x[jvj+52]=606 ;z[jvj+52]=606;
goto l48;
l44:x[jvj+52]=604 ;z[jvj+52]=604;
goto l48;
l45:x[jvj+52]=206 ;z[jvj+52]=206;
goto l48;
l46:x[jvj+52]=603 ;z[jvj+52]=603;
goto l48;
l47:x[jvj+52]=602 ;z[jvj+52]=602;
goto l48;
l49:x[jvj+53]=607 ;z[jvj+53]=607;
goto l230;
l50:x[jvj+82]=606 ;z[jvj+82]=606;
goto l254;
l51:x[jvj+82]=604 ;z[jvj+82]=604;
goto l254;
l52:x[jvj+82]=206 ;z[jvj+82]=206;
goto l254;
l53:x[jvj+82]=603 ;z[jvj+82]=603;
goto l254;
l54:x[jvj+82]=602 ;z[jvj+82]=602;
goto l254;
l56:x[jvj+130]=t[x[jvj+130]];
l55:if((x[jvj+130]<=0)) goto l64;
x[jvj+21]=s[x[jvj+130]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+130];
pile[v[22]]=204; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(204,jvj+21,V70)*/
V70=pile[WZ2]; 
if((V70<=V71)) goto l56;
x[jvj+21];
x[jvj+131]=t[x[jvj+131]];
l57:if((x[jvj+131]<=0)) goto l66;
x[jvj+20]=s[x[jvj+131]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+131];
pile[v[22]]=204; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(204,jvj+20,V71)*/
V71=pile[WZ2]; 
x[jvj+130]=x[jvj+27] ;z[jvj+130]=z[jvj+27];
goto l55;
l61:x[jvj+133]=t[x[jvj+133]];
l60:if((x[jvj+133]<=0)) goto l66;
x[jvj+22]=s[x[jvj+133]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+133];
if((x[jvj+22]==x[jvj+20])) goto l61;
pile[v[22]]=204; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l62;     /*FNDC0(204,jvj+22,V73)*/
V73=pile[WZ2]; 
x[jvj+132]=x[jvj+27] ;z[jvj+132]=z[jvj+27];
l58:if((x[jvj+132]<=0)) goto l62;
x[jvj+23]=s[x[jvj+132]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+132];
if((x[jvj+23]==x[jvj+20])) goto l59;
pile[v[22]]=204; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(204,jvj+23,V72)*/
V72=pile[WZ2]; 
if((V72>V73)) goto l61;
l59:x[jvj+132]=t[x[jvj+132]];
goto l58;
l62:V61=incon;
pile[v[22]]=204; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(204,jvj+22,V77)*/
V77=pile[WZ2]; 
if((V77<=0)) goto l63;
V78=V77/2;
V61=V78;
l65:V80=V81+V61;
V60=V80;
l70:pile[v[22]]=jvj+28; pile[WZ1]=117; pile[WZ2]=V60; 
(*f[186])( );     /*BTC0(jvj+28,117,V60)*/
l69:x[jvj+95]=t[x[jvj+95]];
l67:if((x[jvj+95]>0)) goto l68;
pile[v[22]]=117; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l271;     /*FNDC0(117,jvj+28,V58)*/
V58=pile[WZ2]; 
V63=V58/V64;
x[jvj+100]=incon;
if((V63<=68905)) goto l71;
if((V63<=102581)) goto l72;
if((V63<=157773)) goto l73;
if((V63<=239019)) goto l74;
if((V63<=379465)) goto l75;
if((V63<=551542)) goto l76;
x[jvj+100]=607 ;z[jvj+100]=607;
l270:pile[v[22]]=jvj+100; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=9; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+100,607,Z,9,36)*/
l271:pile[v[22]]=472; pile[WZ1]=PR; 
(*f[26])( );if(v[102]) goto l273;     /*FNDC0(472,PR,V3)*/
V3=pile[WZ2]; 
x[jvj+101]=incon;
if((V3==1)) goto l13;
if((V3==2)) goto l14;
if((V3!=3)) goto l273;
x[jvj+101]=605 ;z[jvj+101]=605;
goto l15;
l63:V61=0;
goto l65;
l64:pile[v[22]]=204; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(204,jvj+20,V81)*/
V81=pile[WZ2]; 
x[jvj+133]=x[jvj+27] ;z[jvj+133]=z[jvj+27];
goto l60;
l66:pile[v[22]]=204; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(204,jvj+24,V69)*/
V69=pile[WZ2]; 
V60=V69;
goto l70;
l68:x[jvj+24]=s[x[jvj+95]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+95];
V60=incon;
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=48)) goto l66;
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+27)*/
x[jvj+131]=x[jvj+27] ;z[jvj+131]=z[jvj+27];
goto l57;
l71:x[jvj+100]=606 ;z[jvj+100]=606;
goto l270;
l72:x[jvj+100]=605 ;z[jvj+100]=605;
goto l270;
l73:x[jvj+100]=604 ;z[jvj+100]=604;
goto l270;
l74:x[jvj+100]=206 ;z[jvj+100]=206;
goto l270;
l75:x[jvj+100]=603 ;z[jvj+100]=603;
goto l270;
l76:x[jvj+100]=602 ;z[jvj+100]=602;
goto l270;
l77:V87=1000;
l80:V86=V87;
if(V86<V85) V85=V86;
x[jvj+29]=t[x[jvj+29]];
goto l78;
l79:x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=365; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(365,jvj+30,jvj+31)*/
for(i=x[jvj+31],V94=0;i>0;i=t[i],V94++)  ;
V87=incon;
if((V94==0)) goto l77;
V87=V94;
goto l80;
l82:x[jvj+84]=607 ;z[jvj+84]=607;
goto l257;
l83:x[jvj+84]=602 ;z[jvj+84]=602;
goto l257;
l84:x[jvj+84]=603 ;z[jvj+84]=603;
goto l257;
l85:x[jvj+84]=206 ;z[jvj+84]=206;
goto l257;
l86:x[jvj+84]=604 ;z[jvj+84]=604;
goto l257;
l87:x[jvj+84]=605 ;z[jvj+84]=605;
goto l257;
l88:x[jvj+85]=607 ;z[jvj+85]=607;
goto l81;
l89:x[jvj+85]=602 ;z[jvj+85]=602;
goto l81;
l92:x[jvj+32]=s[x[jvj+134]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+134];
pile[v[22]]=202; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(202,jvj+32,jvj+33)*/
if((x[jvj+33]!=68)) goto l93;
pile[v[22]]=365; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(365,jvj+32,jvj+34)*/
for(i=x[jvj+34],V98=0;i>0;i=t[i],V98++)  ;
if(V98<V97) V97=V98;
l93:x[jvj+134]=t[x[jvj+134]];
goto l91;
l94:V96=V97;
goto l97;
l95:x[jvj+90]=603 ;z[jvj+90]=603;
goto l90;
l96:x[jvj+90]=602 ;z[jvj+90]=602;
goto l90;
l98:x[jvj+91]=607 ;z[jvj+91]=607;
goto l262;
l99:x[jvj+91]=602 ;z[jvj+91]=602;
goto l262;
l100:x[jvj+91]=603 ;z[jvj+91]=603;
goto l262;
l101:x[jvj+91]=206 ;z[jvj+91]=206;
goto l262;
l102:x[jvj+91]=604 ;z[jvj+91]=604;
goto l262;
l103:x[jvj+91]=605 ;z[jvj+91]=605;
goto l262;
l106:x[jvj+38]=s[x[jvj+135]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+135];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
x[jvj+135]=t[x[jvj+135]];
goto l105;
l108:x[jvj+40]=s[x[jvj+136]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+136];
for(a=x[jvj+89];a>0;a=t[a]) if(s[a]==x[jvj+40]) goto l109;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[68])( );     /*PLUE0(jvj+39,jvj+40)*/
l109:x[jvj+136]=t[x[jvj+136]];
goto l107;
l111:x[jvj+42]=s[x[jvj+39]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+39];
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==x[jvj+42]) goto l112;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[68])( );     /*PLUE0(jvj+41,jvj+42)*/
l112:x[jvj+39]=t[x[jvj+39]];
l110:if((x[jvj+39]>0)) goto l111;
for(i=x[jvj+41],V118=0;i>0;i=t[i],V118++)  ;
V117=V116+V118;
if((V117<=3)) goto l265;
I=4;
l264:if((I>V117)) goto l265;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=12; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,12,36)*/
I++;
goto l264;
l114:V130=1000;
l117:V129=V130;
if(V129<V128) V128=V129;
x[jvj+43]=t[x[jvj+43]];
goto l115;
l116:x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=365; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(365,jvj+44,jvj+45)*/
for(i=x[jvj+45],V137=0;i>0;i=t[i],V137++)  ;
V130=incon;
if((V137==0)) goto l114;
V130=V137;
goto l117;
l118:x[jvj+87]=606 ;z[jvj+87]=606;
goto l124;
l119:x[jvj+87]=605 ;z[jvj+87]=605;
goto l124;
l120:x[jvj+87]=604 ;z[jvj+87]=604;
goto l124;
l121:x[jvj+87]=206 ;z[jvj+87]=206;
goto l124;
l122:x[jvj+87]=603 ;z[jvj+87]=603;
goto l124;
l123:x[jvj+87]=602 ;z[jvj+87]=602;
goto l124;
l125:x[jvj+88]=206 ;z[jvj+88]=206;
goto l259;
l126:x[jvj+88]=603 ;z[jvj+88]=603;
goto l259;
l127:x[jvj+88]=602 ;z[jvj+88]=602;
goto l259;
l128:x[jvj+64]=607 ;z[jvj+64]=607;
l238:pile[v[22]]=jvj+64; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=14; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+64,603,Z,14,36)*/
l239:pile[v[22]]=1292; pile[WZ1]=jvj+62; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l242;     /*FNDO0(1292,jvj+62,jvj+65)*/
if((x[MC]!=x[jvj+65])) goto l242;
pile[v[22]]=1293; 
(*f[26])( );if(v[102]) goto l242;     /*FNDC0(1293,jvj+62,V187)*/
V187=pile[WZ2]; 
N=V187;
V181=incon;
if((N>10)) goto l163;
V181=N;
l240:NN=V181;
x[jvj+66]=incon;
if((NN>=1)) goto l169;
x[jvj+66]=(-99999998);
l242:pile[v[22]]=111; pile[WZ1]=jvj+62; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l245;     /*FNDO0(111,jvj+62,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l245;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=625)) goto l245;
pile[v[22]]=160; pile[WZ1]=jvj+62; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l245;     /*FNDO0(160,jvj+62,jvj+71)*/
pile[v[22]]=130; pile[WZ1]=jvj+71; 
(*f[26])( );if(v[102]) goto l245;     /*FNDC0(130,jvj+71,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=870; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l245;     /*FNDC0(870,jvj+62,V150)*/
V150=pile[WZ2]; 
x[jvj+72]=incon;
if((V150==2)) goto l142;
if((V150<3)) goto l147;
if((V150<=4)) goto l143;
if((V150<=6)) goto l144;
if((V150<=8)) goto l145;
if((V150<=12)) goto l146;
if((V150>15)) goto l147;
x[jvj+72]=606 ;z[jvj+72]=606;
l243:V147=V158;
V149=incon;
if((V147<5)) goto l139;
if((V147<12)) goto l140;
if((V147<40)) goto l141;
V149=3;
l244:pile[v[22]]=V149; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[1552])( );     /*PROG0(V149,jvj+72,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=16; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+73,603,Z,16,36)*/
l245:pile[v[22]]=1231; pile[WZ1]=jvj+62; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(1231,jvj+62,jvj+74)*/
x[jvj+137]=x[jvj+74] ;z[jvj+137]=z[jvj+74];
l246:if((x[jvj+137]>0)) goto l247;
x[jvj+60]=t[x[jvj+60]];
goto l236;
l129:if((V139<=4)) goto l130;
if((V139<=6)) goto l131;
if((V139<=9)) goto l132;
if((V139<=12)) goto l133;
x[jvj+64]=606 ;z[jvj+64]=606;
goto l238;
l130:x[jvj+64]=603 ;z[jvj+64]=603;
goto l238;
l131:x[jvj+64]=206 ;z[jvj+64]=206;
goto l238;
l132:x[jvj+64]=604 ;z[jvj+64]=604;
goto l238;
l133:x[jvj+64]=605 ;z[jvj+64]=605;
goto l238;
l134:x[jvj+61]=606 ;z[jvj+61]=606;
goto l235;
l135:x[jvj+61]=604 ;z[jvj+61]=604;
goto l235;
l136:x[jvj+61]=206 ;z[jvj+61]=206;
goto l235;
l137:x[jvj+61]=603 ;z[jvj+61]=603;
goto l235;
l138:x[jvj+61]=602 ;z[jvj+61]=602;
goto l235;
l139:V149=0;
goto l244;
l140:V149=1;
goto l244;
l141:V149=2;
goto l244;
l142:x[jvj+72]=602 ;z[jvj+72]=602;
goto l243;
l143:x[jvj+72]=603 ;z[jvj+72]=603;
goto l243;
l144:x[jvj+72]=206 ;z[jvj+72]=206;
goto l243;
l145:x[jvj+72]=604 ;z[jvj+72]=604;
goto l243;
l146:x[jvj+72]=605 ;z[jvj+72]=605;
goto l243;
l147:x[jvj+72]=(-99999998);
goto l245;
l148:V164=2;
l152:pile[v[22]]=jvj+49; pile[WZ1]=117; pile[WZ2]=V164; 
(*f[186])( );     /*BTC0(jvj+49,117,V164)*/
l151:x[jvj+46]=t[x[jvj+46]];
l149:if((x[jvj+46]>0)) goto l150;
pile[v[22]]=117; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l298;     /*FNDC0(117,jvj+49,V162)*/
V162=pile[WZ2]; 
x[jvj+128]=incon;
if((V162==1)) goto l153;
if((V162<2)) goto l298;
if((V162<=3)) goto l154;
if((V162<=6)) goto l155;
if((V162<=9)) goto l156;
x[jvj+128]=607 ;z[jvj+128]=607;
l297:pile[v[22]]=jvj+128; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=17; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+128,602,Z,17,36)*/
l298:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l150:x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=868; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l151;     /*FNDO0(868,jvj+47,jvj+48)*/
if(x[jvj+48]!=25&&x[jvj+48]!=625) goto l151;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l151;     /*FNDC0(870,jvj+47,V168)*/
V168=pile[WZ2]; 
V160=V168;
if((V160>3)) goto l151;
V164=incon;
if((V160==2)) goto l148;
V164=1;
goto l152;
l153:x[jvj+128]=606 ;z[jvj+128]=606;
goto l297;
l154:x[jvj+128]=604 ;z[jvj+128]=604;
goto l297;
l155:x[jvj+128]=603 ;z[jvj+128]=603;
goto l297;
l156:x[jvj+128]=602 ;z[jvj+128]=602;
goto l297;
l157:x[jvj+77]=606 ;z[jvj+77]=606;
l250:pile[v[22]]=jvj+77; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=18; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+77,602,Z,18,36)*/
l248:x[jvj+137]=t[x[jvj+137]];
goto l246;
l158:x[jvj+77]=605 ;z[jvj+77]=605;
goto l250;
l159:x[jvj+77]=604 ;z[jvj+77]=604;
goto l250;
l160:x[jvj+77]=206 ;z[jvj+77]=206;
goto l250;
l161:x[jvj+77]=603 ;z[jvj+77]=603;
goto l250;
l162:x[jvj+77]=602 ;z[jvj+77]=602;
goto l250;
l163:V189=N-10;
V181=V189;
goto l240;
l165:V183=4;
l241:pile[v[22]]=V183; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[1552])( );     /*PROG0(V183,jvj+66,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=Z; pile[WZ3]=19; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+67,jvj+68,Z,19,36)*/
goto l242;
l166:V183=3;
goto l241;
l167:V183=2;
goto l241;
l168:V183=1;
goto l241;
l169:if((NN<=2)) goto l170;
if((NN<=4)) goto l171;
if((NN<=9)) goto l172;
x[jvj+66]=602 ;z[jvj+66]=602;
l173:x[jvj+68]=incon;
if((N>10)) goto l174;
x[jvj+68]=602 ;z[jvj+68]=602;
l164:V183=incon;
if((K==2)) goto l165;
if((K==3)) goto l166;
if((K==4)) goto l167;
if((K==5)) goto l168;
V183=0;
goto l241;
l170:x[jvj+66]=604 ;z[jvj+66]=604;
goto l173;
l171:x[jvj+66]=206 ;z[jvj+66]=206;
goto l173;
l172:x[jvj+66]=603 ;z[jvj+66]=603;
goto l173;
l174:x[jvj+68]=607 ;z[jvj+68]=607;
goto l164;
l176:V191=1;
goto l233;
l178:x[jvj+58]=606 ;z[jvj+58]=606;
goto l175;
l179:x[jvj+58]=605 ;z[jvj+58]=605;
goto l175;
l180:x[jvj+58]=604 ;z[jvj+58]=604;
goto l175;
l181:x[jvj+58]=206 ;z[jvj+58]=206;
goto l175;
l182:x[jvj+58]=603 ;z[jvj+58]=603;
goto l175;
l183:x[jvj+58]=602 ;z[jvj+58]=602;
goto l175;
l184:pile[v[22]]=195; pile[WZ1]=Z; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(195,Z,jvj+51)*/
for(i=x[jvj+51],V197=0;i>0;i=t[i],V197++)  ;
if(V197<V196) V196=V197;
goto l276;
l185:x[jvj+106]=607 ;z[jvj+106]=607;
goto l277;
l186:x[jvj+106]=602 ;z[jvj+106]=602;
goto l277;
l187:x[jvj+106]=603 ;z[jvj+106]=603;
goto l277;
l188:x[jvj+106]=206 ;z[jvj+106]=206;
goto l277;
l189:x[jvj+106]=604 ;z[jvj+106]=604;
goto l277;
l190:x[jvj+106]=605 ;z[jvj+106]=605;
goto l277;
l192:x[jvj+54]=607 ;z[jvj+54]=607;
goto l197;
l193:x[jvj+54]=603 ;z[jvj+54]=603;
goto l197;
l194:x[jvj+54]=206 ;z[jvj+54]=206;
goto l197;
l195:x[jvj+54]=604 ;z[jvj+54]=604;
goto l197;
l196:x[jvj+54]=605 ;z[jvj+54]=605;
goto l197;
l198:x[jvj+55]=607 ;z[jvj+55]=607;
goto l231;
l199:x[jvj+55]=603 ;z[jvj+55]=603;
goto l231;
l200:V209=2;
goto l286;
l201:V209=1;
goto l286;
l202:x[jvj+117]=607 ;z[jvj+117]=607;
l290:pile[v[22]]=V209; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[1552])( );     /*PROG0(V209,jvj+117,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=23; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+118,604,Z,23,36)*/
l289:x[jvj+141]=t[x[jvj+141]];
l287:if((x[jvj+141]>0)) goto l288;
x[jvj+140]=t[x[jvj+140]];
goto l284;
l203:x[jvj+117]=602 ;z[jvj+117]=602;
goto l290;
l204:x[jvj+117]=603 ;z[jvj+117]=603;
goto l290;
l205:x[jvj+117]=206 ;z[jvj+117]=206;
goto l290;
l206:x[jvj+117]=604 ;z[jvj+117]=604;
goto l290;
l207:x[jvj+117]=605 ;z[jvj+117]=605;
goto l290;
l208:x[jvj+117]=(-99999998);
goto l289;
l209:V220=2;
goto l291;
l210:V220=1;
goto l291;
l211:V222=0;
l296:pile[v[22]]=V222; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[1552])( );     /*PROG0(V222,jvj+125,jvj+126)*/
pile[v[22]]=V220; pile[WZ1]=jvj+126; pile[WZ2]=jvj+127; 
(*f[1552])( );     /*PROG0(V220,jvj+126,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=24; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+127,604,Z,24,36)*/
l294:x[jvj+142]=t[x[jvj+142]];
goto l292;
l212:V222=1;
goto l296;
l213:V222=2;
goto l296;
l214:x[jvj+125]=602 ;z[jvj+125]=602;
l295:V218=V233;
V222=incon;
if((V218<5)) goto l211;
if((V218<12)) goto l212;
if((V218<40)) goto l213;
V222=3;
goto l296;
l215:x[jvj+125]=603 ;z[jvj+125]=603;
goto l295;
l216:x[jvj+125]=206 ;z[jvj+125]=206;
goto l295;
l217:x[jvj+125]=604 ;z[jvj+125]=604;
goto l295;
l218:x[jvj+125]=605 ;z[jvj+125]=605;
goto l295;
l219:x[jvj+125]=(-99999998);
goto l294;
l220:V237=1;
goto l281;
l221:V237=0;
goto l281;
l222:V237=(-1);
goto l281;
l223:V237=(-2);
goto l281;
l224:x[jvj+111]=605 ;z[jvj+111]=605;
l283:pile[v[22]]=V237; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[1552])( );     /*PROG0(V237,jvj+111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=25; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+112,604,Z,25,36)*/
l282:x[jvj+139]=t[x[jvj+139]];
goto l279;
l225:if((V238<=3)) goto l226;
if((V238<=6)) goto l227;
if((V238<=11)) goto l228;
if((V238<=20)) goto l229;
x[jvj+111]=607 ;z[jvj+111]=607;
goto l283;
l226:x[jvj+111]=604 ;z[jvj+111]=604;
goto l283;
l227:x[jvj+111]=206 ;z[jvj+111]=206;
goto l283;
l228:x[jvj+111]=603 ;z[jvj+111]=603;
goto l283;
l229:x[jvj+111]=602 ;z[jvj+111]=602;
goto l283;
l237:x[jvj+62]=s[x[jvj+60]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+60];
pile[v[22]]=868; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l239;     /*FNDO0(868,jvj+62,jvj+63)*/
if((x[jvj+63]!=25)) goto l239;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l239;     /*FNDC0(870,jvj+62,V139)*/
V139=pile[WZ2]; 
x[jvj+64]=incon;
if((V139==2)) goto l128;
if((V139>=3)) goto l129;
x[jvj+64]=(-99999998);
goto l239;
l247:x[jvj+75]=s[x[jvj+137]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+137];
pile[v[22]]=1260; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(1260,jvj+75,jvj+76)*/
for(a=x[jvj+76];a>0;a=t[a]) if(s[a]==x[MC]) goto l249;
goto l248;
l249:pile[v[22]]=510; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l248;     /*FNDC0(510,jvj+75,V179)*/
V179=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l248;     /*FNDC0(515,jvj+75,V178)*/
V178=pile[WZ2]; 
V177=100*V178;
V172=V177/V179;
x[jvj+77]=incon;
if((V172<=6)) goto l157;
if((V172<=11)) goto l158;
if((V172<=19)) goto l159;
if((V172<=31)) goto l160;
if((V172<=50)) goto l161;
if((V172<=86)) goto l162;
x[jvj+77]=607 ;z[jvj+77]=607;
goto l250;
l252:pile[v[22]]=jvj+80; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+80,607,Z,4,36)*/
goto l253;
l255:pile[v[22]]=jvj+82; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=8; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+82,603,Z,8,36)*/
goto l256;
l258:pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=Z; pile[WZ3]=10; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+84,jvj+85,Z,10,36)*/
goto l113;
l260:pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; pile[WZ2]=Z; pile[WZ3]=13; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+87,jvj+88,Z,13,52)*/
goto l261;
l265:pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l271;     /*FNDO0(111,M,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l271;     /*FNDO0(101,jvj+93,jvj+94)*/
if((x[jvj+94]!=55)) goto l271;
pile[v[22]]=107; pile[WZ1]=M; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(107,M,jvj+95)*/
x[jvj+138]=x[jvj+95] ;z[jvj+138]=z[jvj+95];
l266:if((x[jvj+138]>0)) goto l267;
if((x[jvj+95]==0)) goto l271;
for(i=x[jvj+95],V64=0;i>0;i=t[i],V64++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(0,117,jvj+28)*/
goto l67;
l267:x[jvj+8]=s[x[jvj+138]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+138];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+8,jvj+96)*/
if((x[jvj+96]!=22)) goto l38;
pile[v[22]]=111; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+8,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+97,jvj+98)*/
if((x[jvj+98]!=408)) goto l38;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+8,jvj+99)*/
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=7; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,7,52)*/
l38:pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==48)) goto l42;
l39:pile[v[22]]=jvj+8; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(jvj+8,jvj+11)*/
for(i=x[jvj+11],V23=0;i>0;i=t[i],V23++)  ;
if((V23>3)) goto l269;
l42:pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l268;     /*FNDO0(111,jvj+8,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l268;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=48)) goto l268;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+19)*/
if(x[F]!=25&&x[F]!=625) goto l269;
x[jvj+129]=x[jvj+19] ;z[jvj+129]=z[jvj+19];
l40:if((x[jvj+129]<=0)) goto l269;
x[jvj+12]=s[x[jvj+129]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+129];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=22)) goto l41;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+12,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[F]!=x[jvj+15])) goto l41;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(jvj+12,jvj+16)*/
for(i=x[jvj+16],V24=0;i>0;i=t[i],V24++)  ;
if((V24<=3)) goto l268;
l41:x[jvj+129]=t[x[jvj+129]];
goto l40;
l269:pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,5,52)*/
l268:x[jvj+138]=t[x[jvj+138]];
goto l266;
l280:x[jvj+109]=s[x[jvj+139]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+139];
pile[v[22]]=509; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[33])( );     /*FNDE0(509,jvj+109,jvj+110)*/
for(i=x[jvj+110],V238=0;i>0;i=t[i],V238++)  ;
x[jvj+111]=incon;
if((V238==1)) goto l224;
if((V238>=2)) goto l225;
x[jvj+111]=(-99999998);
goto l282;
l285:x[jvj+113]=s[x[jvj+140]] ;z[jvj+113]=(x[jvj+113]<=sepcte) ? x[jvj+113] : z[jvj+140];
pile[v[22]]=509; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[33])( );     /*FNDE0(509,jvj+113,jvj+114)*/
x[jvj+141]=x[jvj+114] ;z[jvj+141]=z[jvj+114];
goto l287;
l288:x[jvj+115]=s[x[jvj+141]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+141];
pile[v[22]]=868; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l289;     /*FNDO0(868,jvj+115,jvj+116)*/
if((x[jvj+116]!=25)) goto l289;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l289;     /*FNDC0(870,jvj+115,V210)*/
V210=pile[WZ2]; 
x[jvj+117]=incon;
if((V210==2)) goto l202;
if((V210==3)) goto l203;
if((V210==4)) goto l204;
if((V210<5)) goto l208;
if((V210<=6)) goto l205;
if((V210<=9)) goto l206;
if((V210<=12)) goto l207;
if((V210>15)) goto l208;
x[jvj+117]=606 ;z[jvj+117]=606;
goto l290;
l293:x[jvj+121]=s[x[jvj+142]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+142];
pile[v[22]]=111; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l294;     /*FNDO0(111,jvj+121,jvj+122)*/
pile[v[22]]=101; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l294;     /*FNDO0(101,jvj+122,jvj+123)*/
if((x[jvj+123]!=625)) goto l294;
pile[v[22]]=160; pile[WZ1]=jvj+121; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l294;     /*FNDO0(160,jvj+121,jvj+124)*/
pile[v[22]]=130; pile[WZ1]=jvj+124; 
(*f[26])( );if(v[102]) goto l294;     /*FNDC0(130,jvj+124,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=870; pile[WZ1]=jvj+121; 
(*f[26])( );if(v[102]) goto l294;     /*FNDC0(870,jvj+121,V223)*/
V223=pile[WZ2]; 
x[jvj+125]=incon;
if((V223==2)) goto l214;
if((V223<3)) goto l219;
if((V223<=4)) goto l215;
if((V223<=6)) goto l216;
if((V223<=8)) goto l217;
if((V223<=12)) goto l218;
if((V223>15)) goto l219;
x[jvj+125]=606 ;z[jvj+125]=606;
goto l295;
l299:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(0,117,jvj+49)*/
pile[v[22]]=509; pile[WZ1]=MC; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(509,MC,jvj+46)*/
goto l149;
}
