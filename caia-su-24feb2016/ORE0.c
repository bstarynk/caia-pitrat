#include "dx.h"
void ORE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V19=0,V33=0,V30=0,BK=0,V11=0,V10=0,V9=0,V6=0,V43=0,V46=0,V47=0,V206=0,V208=0,V205=0,V207=0,V209=0,V211=0,V42=0,V71=0,V50=0,V54=0,V216=0,V218=0,V214=0,V215=0,V217=0,V53=0,V63=0,V67=0,V225=0,V227=0,V220=0,V61=0,V221=0,V223=0,V224=0,V226=0,V62=0,V101=0,V=0,V59=0,V178=0,V181=0,V229=0,V230=0,V177=0,V175=0,V194=0,V195=0,V199=0,V191=0,V186=0,V270=0,V7=0;
int XN,CB,R,E,TY,NN;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=171;
x[jvj+1]=10689;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1995&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
XN=pile[v[22]]; CB=pile[v[22]+1]; R=pile[v[22]+2]; E=pile[v[22]+3]; TY=pile[v[22]+4]; NN=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+110]=x[jvj+59]=x[jvj+58]=x[jvj+56]=x[jvj+57]=x[jvj+55]=x[jvj+34]=x[jvj+120]=incon;
pile[v[22]]=256; pile[WZ1]=XN; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(256,XN,jvj+2)*/
pile[v[22]]=474; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(474,XN,jvj+3)*/
pile[v[22]]=256; 
(*f[71])( );     /*ENLV0(256,XN)*/
pile[v[22]]=474; 
(*f[71])( );     /*ENLV0(474,XN)*/
pile[v[22]]=R; 
(*f[2091])( );     /*ORG0(R)*/
for(i=x[E],V71=0;i>0;i=t[i],V71++)  ;
if((V71!=1)) goto l16;
x[jvj+110]=x[E] ;z[jvj+110]=z[E];
l16:x[jvj+136]=0 ;z[jvj+136]=0;
x[jvj+137]=0 ;z[jvj+137]=0;
x[jvj+74]=x[jvj+136] ;z[jvj+74]=z[jvj+136];
x[jvj+66]=x[jvj+137] ;z[jvj+66]=z[jvj+137];
x[jvj+26]=0 ;z[jvj+26]=0;
V7=incon;
pile[v[22]]=226; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(226,R,jvj+25)*/
x[jvj+135]=x[jvj+25] ;z[jvj+135]=z[jvj+25];
l7:if((x[jvj+135]>0)) goto l8;
if((x[jvj+26]<=0)) goto l100;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=218; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(218,jvj+27,jvj+29)*/
V50=x[jvj+27];
x[jvj+34]=x[jvj+27] ;z[jvj+34]=z[jvj+27];
pile[v[22]]=jvj+29; pile[WZ1]=R; 
(*f[2092])( );     /*ORR0(jvj+29,R)*/
V42=g[132];
if((V42<=0)) goto l17;
V43=vg[132];
if((V43!=0)) goto l12;
if((V42<3)) goto l14;
l12:pile[v[22]]=132; pile[WZ1]=10689; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=R; pile[WZ5]=(-702); pile[v[22]+6]=jvj+27; pile[v[22]+7]=jvj+28; 
(*f[187])( );     /*INTERP0(132,10689,0,(-601),R,(-702),jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l13;
l17:pile[v[22]]=226; pile[WZ1]=R; pile[WZ2]=V50; 
(*f[134])( );     /*OTA0(226,R,V50)*/
pile[v[22]]=218; pile[WZ1]=jvj+34; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l100;     /*FNDO0(218,jvj+34,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+38,jvj+51)*/
if((x[jvj+51]!=47)) goto l34;
pile[v[22]]=436; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(436,jvj+38,jvj+52)*/
pile[v[22]]=140; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+52,V)*/
V=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=225; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,225,jvj+130)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+132)*/
pile[v[22]]=jvj+130; pile[WZ1]=111; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,111,jvj+131)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+132; pile[WZ4]=jvj+131; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+132,jvj+131,jvj+53)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(R,107,jvj+53)*/
l34:pile[v[22]]=428; pile[WZ1]=jvj+38; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(428,jvj+38,jvj+54)*/
pile[v[22]]=287; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(287,jvj+54,jvj+55)*/
pile[v[22]]=187; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(187,jvj+54,jvj+56)*/
pile[v[22]]=234; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(234,jvj+54,jvj+57)*/
pile[v[22]]=258; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(258,jvj+54,jvj+58)*/
pile[v[22]]=159; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(159,jvj+54,jvj+59)*/
x[jvj+120]=x[CB] ;z[jvj+120]=z[CB];
l37:if(x[jvj+110]==incon) goto l38;
l39:if(x[jvj+59]!=incon) goto l40;
l51:if(x[jvj+58]!=incon) goto l52;
l63:if(x[jvj+56]!=incon) goto l64;
l78:if(x[jvj+57]!=incon) goto l79;
l93:if(x[jvj+55]!=incon) goto l96;
l100:if(x[jvj+110]==incon) goto l101;
l107:for(i=x[jvj+110],V175=0;i>0;i=t[i],V175++)  ;
if((V175!=1)) goto l109;
pile[v[22]]=447; pile[WZ1]=R; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(447,R,jvj+111)*/
if((x[jvj+111]==68)) goto l109;
l106:V177=g[146];
if((V177<=0)) goto l108;
V178=vg[146];
if((V178!=0)) goto l102;
if((V177<3)) goto l104;
l102:pile[v[22]]=146; pile[WZ1]=10689; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=R; pile[WZ5]=jvj+112; 
(*f[232])( );     /*INTERP3(146,10689,0,(-601),R,jvj+112)*/
if((x[jvj+112]==135)) goto l103;
l108:pile[v[22]]=R; pile[WZ1]=447; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,447,68)*/
l109:if(x[jvj+34]==incon) goto l18;
l131:if(x[jvj+120]!=incon) goto l111;
l132:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l2:pile[v[22]]=122; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(122,jvj+8,jvj+11)*/
if((x[jvj+11]!=105)) goto l10;
x[jvj+133]=x[jvj+25] ;z[jvj+133]=z[jvj+25];
l3:if((x[jvj+133]<=0)) goto l10;
x[jvj+4]=s[x[jvj+133]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+133];
pile[v[22]]=122; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(122,jvj+4,jvj+5)*/
if((x[jvj+5]==107)) goto l9;
l1:pile[v[22]]=218; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+4,jvj+6)*/
pile[v[22]]=123; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(123,jvj+6,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+7,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+8,jvj+9)*/
pile[v[22]]=123; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(123,jvj+9,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+10,V19)*/
V19=pile[WZ2]; 
if((V16>V19)) goto l9;
l4:x[jvj+133]=t[x[jvj+133]];
goto l3;
l6:x[jvj+134]=t[x[jvj+134]];
l5:if((x[jvj+134]<=0)) goto l2;
x[jvj+18]=s[x[jvj+134]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+134];
pile[v[22]]=218; pile[WZ1]=jvj+18; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+18,jvj+12)*/
pile[v[22]]=123; pile[WZ1]=jvj+12; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(123,jvj+12,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+19,V30)*/
V30=pile[WZ2]; 
if((V30!=V33)) goto l6;
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=39)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+12,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+14,jvj+15)*/
if((BK==x[jvj+15])) goto l6;
l9:x[jvj+135]=t[x[jvj+135]];
goto l7;
l8:x[jvj+8]=s[x[jvj+135]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+135];
pile[v[22]]=204; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(204,jvj+8,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=528; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(528,jvj+8,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+8,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+16,jvj+20)*/
if((x[jvj+20]!=39)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+16,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+21,jvj+22)*/
x[jvj+23]=vo[15];z[jvj+23]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(583,jvj+23,jvj+24)*/
BK=x[jvj+22];
if((BK!=x[jvj+24])) goto l2;
pile[v[22]]=123; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(123,jvj+16,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+17,V33)*/
V33=pile[WZ2]; 
x[jvj+134]=x[jvj+25] ;z[jvj+134]=z[jvj+25];
goto l5;
l10:V9=V10*10000;
V6=V9/V11;
if(V7==incon) goto l133;
if((V6==V7)) goto l11;
if((V6>=V7)) goto l133;
goto l9;
l13:if((V42<4)) goto l14;
goto l17;
l14:pile[v[22]]=204; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(204,jvj+27,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=528; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(528,jvj+27,V47)*/
V47=pile[WZ2]; 
V206=x[R];
V208=x[jvj+29];
pile[v[22]]=41; pile[WZ1]=V206; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V206,0,V205)*/
V205=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V208; pile[WZ2]=V205; 
(*f[39])( );     /*SDX0(20,V208,V205,V207)*/
V207=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V47; pile[WZ2]=V207; 
(*f[39])( );     /*SDX0(41,V47,V207,V209)*/
V209=pile[WZ3]; 
pile[WZ1]=V46; pile[WZ2]=V209; 
(*f[39])( );     /*SDX0(41,V46,V209,V211)*/
V211=pile[WZ3]; 
pile[v[22]]=V211; 
(*f[40])( );     /*SLG0(V211)*/
l15:if((V42!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l18:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,R,jvj+30)*/
if((x[jvj+30]!=0)) goto l22;
pile[v[22]]=105; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(105,R,jvj+31)*/
if((x[jvj+31]!=0)) goto l22;
goto l131;
l20:if((V53<4)) goto l21;
goto l131;
l21:V216=x[R];
V218=x[R];
pile[v[22]]=34; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(34,0,126,V214)*/
V214=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V216; pile[WZ2]=V214; 
(*f[39])( );     /*SDX0(41,V216,V214,V215)*/
V215=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V218; pile[WZ2]=V215; 
(*f[39])( );     /*SDX0(20,V218,V215,V217)*/
V217=pile[WZ3]; 
pile[v[22]]=V217; 
(*f[40])( );     /*SLG0(V217)*/
if((V53!=2)) goto l131;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l131;
l22:V53=g[133];
if((V53<=0)) goto l131;
V54=vg[133];
if((V54!=0)) goto l19;
if((V53<3)) goto l21;
l19:pile[v[22]]=133; pile[WZ1]=10689; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=R; pile[WZ5]=jvj+32; 
(*f[232])( );     /*INTERP3(133,10689,0,(-601),R,jvj+32)*/
if((x[jvj+32]==135)) goto l20;
goto l131;
l24:x[jvj+37]=0 ;z[jvj+37]=0;
l25:if((x[jvj+33]>0)) goto l26;
V225=x[jvj+38];
V227=x[jvj+37];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=238; 
(*f[42])( );     /*SRA1(135,0,238,V220)*/
V220=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V61; pile[WZ2]=V220; 
(*f[39])( );     /*SDX0(41,V61,V220,V221)*/
V221=pile[WZ3]; 
pile[v[22]]=V221; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V221,58,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V225; pile[WZ2]=V223; 
(*f[39])( );     /*SDX0(20,V225,V223,V224)*/
V224=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V227; pile[WZ2]=V224; 
(*f[39])( );     /*SDX0(23,V227,V224,V226)*/
V226=pile[WZ3]; 
pile[v[22]]=V226; 
(*f[40])( );     /*SLG0(V226)*/
if((V62!=2)) goto l39;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l39;
l26:x[jvj+36]=s[x[jvj+33]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+33];
pile[v[22]]=117; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+36,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=V67; 
(*f[207])( );     /*PLUE2(jvj+37,V67)*/
l27:x[jvj+33]=t[x[jvj+33]];
goto l25;
l28:if((V62<4)) goto l24;
goto l39;
l29:pile[v[22]]=428; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(428,jvj+38,jvj+39)*/
goto l37;
l30:pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+40,jvj+46)*/
if((x[jvj+46]!=20)) goto l33;
pile[v[22]]=11; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(11,jvj+43,jvj+47)*/
if((x[jvj+47]==135)) goto l32;
l33:x[jvj+138]=0 ;z[jvj+138]=0;
x[jvj+50]=x[jvj+138] ;z[jvj+50]=z[jvj+138];
l36:x[jvj+139]=0 ;z[jvj+139]=0;
x[jvj+140]=0 ;z[jvj+140]=0;
pile[v[22]]=20; pile[WZ1]=jvj+61; pile[WZ2]=jvj+56; 
(*f[409])( );     /*TRI14(20,jvj+61,jvj+56)*/
x[jvj+120]=x[jvj+60] ;z[jvj+120]=z[jvj+60];
x[jvj+55]=x[jvj+62] ;z[jvj+55]=z[jvj+62];
x[jvj+57]=x[jvj+139] ;z[jvj+57]=z[jvj+139];
x[jvj+58]=x[jvj+140] ;z[jvj+58]=z[jvj+140];
x[jvj+59]=x[jvj+50] ;z[jvj+59]=z[jvj+50];
goto l37;
l31:if((x[jvj+43]==500)) goto l32;
goto l33;
l32:pile[v[22]]=20; pile[WZ1]=jvj+48; pile[WZ2]=jvj+50; 
(*f[409])( );     /*TRI14(20,jvj+48,jvj+50)*/
goto l36;
l35:pile[v[22]]=jvj+38; pile[WZ1]=XN; pile[WZ2]=CB; pile[WZ3]=jvj+60; pile[WZ4]=jvj+61; pile[WZ5]=jvj+48; pile[v[22]+6]=jvj+62; 
(*f[2094])( );if(v[102]) goto l37;     /*ORJ0(jvj+38,XN,CB,jvj+60,jvj+61,jvj+48,jvj+62)*/
x[jvj+50]=incon;
pile[v[22]]=102; pile[WZ1]=jvj+48; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+48,jvj+42)*/
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+42,jvj+40)*/
pile[v[22]]=100; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+42,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+40,jvj+43)*/
if((x[jvj+49]==435)) goto l31;
if((x[jvj+49]==22)) goto l30;
if((x[jvj+49]!=39)) goto l33;
pile[v[22]]=100; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=20)) goto l33;
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+42,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=jvj+43; pile[WZ1]=V101; pile[WZ2]=jvj+44; 
(*f[133])( );if(v[102]) goto l33;     /*TLDEBL1(jvj+43,V101,jvj+44)*/
pile[v[22]]=371; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(371,jvj+44,jvj+45)*/
if((x[jvj+45]==67)) goto l32;
goto l33;
l38:for(i=x[E],V59=0;i>0;i=t[i],V59++)  ;
if((V59<=1)) goto l39;
pile[v[22]]=E; pile[WZ1]=R; pile[WZ2]=jvj+38; pile[WZ3]=TY; pile[WZ4]=NN; pile[WZ5]=jvj+33; 
(*f[2093])( );     /*ORN0(E,R,jvj+38,TY,NN,jvj+33)*/
for(i=x[jvj+33],V61=0;i>0;i=t[i],V61++)  ;
if((V61<=1)) goto l39;
x[jvj+110]=x[jvj+33] ;z[jvj+110]=z[jvj+33];
V62=g[137];
if((V62<=0)) goto l39;
V63=vg[137];
if((V63!=0)) goto l23;
if((V62<3)) goto l24;
l23:pile[v[22]]=137; pile[WZ1]=10689; pile[WZ2]=0; pile[WZ3]=(-624); pile[WZ4]=jvj+34; pile[WZ5]=(-625); pile[v[22]+6]=jvj+33; pile[v[22]+7]=jvj+35; 
(*f[943])( );     /*INTERP10(137,10689,0,(-624),jvj+34,(-625),jvj+33,jvj+35)*/
if((x[jvj+35]==135)) goto l28;
goto l39;
l40:if((x[CB]!=250)) goto l46;
if((x[TY]!=50)) goto l42;
x[jvj+141]=x[jvj+59] ;z[jvj+141]=z[jvj+59];
l41:if((x[jvj+141]<=0)) goto l42;
x[jvj+64]=s[x[jvj+141]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+141];
pile[v[22]]=XN; pile[WZ1]=234; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(XN,234,jvj+64)*/
x[jvj+141]=t[x[jvj+141]];
goto l41;
l42:if(x[TY]!=48&&x[TY]!=54) goto l44;
x[jvj+142]=x[jvj+59] ;z[jvj+142]=z[jvj+59];
l43:if((x[jvj+142]<=0)) goto l44;
x[jvj+65]=s[x[jvj+142]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+142];
pile[v[22]]=XN; pile[WZ1]=159; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(XN,159,jvj+65)*/
x[jvj+142]=t[x[jvj+142]];
goto l43;
l44:if((x[TY]!=208)) goto l46;
x[jvj+143]=x[jvj+59] ;z[jvj+143]=z[jvj+59];
l45:if((x[jvj+143]<=0)) goto l49;
x[jvj+67]=s[x[jvj+143]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+143];
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+66,jvj+67)*/
x[jvj+143]=t[x[jvj+143]];
goto l45;
l46:if((x[TY]!=55)) goto l49;
x[jvj+144]=x[jvj+59] ;z[jvj+144]=z[jvj+59];
l47:if((x[jvj+144]<=0)) goto l49;
x[jvj+68]=s[x[jvj+144]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+144];
pile[v[22]]=XN; pile[WZ1]=474; pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(XN,474,jvj+68)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(107,R,jvj+69)*/
if((x[jvj+69]!=0)) goto l48;
pile[v[22]]=105; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(105,R,jvj+70)*/
if((x[jvj+70]!=0)) goto l48;
pile[v[22]]=XN; pile[WZ1]=159; pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(XN,159,jvj+68)*/
l48:x[jvj+144]=t[x[jvj+144]];
goto l47;
l49:if(x[TY]!=48&&x[TY]!=54&&x[TY]!=208&&x[TY]!=50) goto l51;
if((x[CB]==250)) goto l51;
x[jvj+145]=x[jvj+59] ;z[jvj+145]=z[jvj+59];
l50:if((x[jvj+145]<=0)) goto l51;
x[jvj+71]=s[x[jvj+145]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+145];
pile[v[22]]=134; pile[WZ1]=jvj+71; pile[WZ2]=CB; 
(*f[1380])( );     /*RECZ0(134,jvj+71,CB)*/
x[jvj+145]=t[x[jvj+145]];
goto l50;
l52:if((x[CB]!=250)) goto l58;
if((x[TY]!=50)) goto l54;
x[jvj+146]=x[jvj+58] ;z[jvj+146]=z[jvj+58];
l53:if((x[jvj+146]<=0)) goto l54;
x[jvj+72]=s[x[jvj+146]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+146];
pile[v[22]]=XN; pile[WZ1]=187; pile[WZ2]=jvj+72; 
(*f[36])( );     /*PLUSC0(XN,187,jvj+72)*/
x[jvj+146]=t[x[jvj+146]];
goto l53;
l54:if(x[TY]!=48&&x[TY]!=54) goto l56;
x[jvj+147]=x[jvj+58] ;z[jvj+147]=z[jvj+58];
l55:if((x[jvj+147]<=0)) goto l56;
x[jvj+73]=s[x[jvj+147]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+147];
pile[v[22]]=XN; pile[WZ1]=258; pile[WZ2]=jvj+73; 
(*f[36])( );     /*PLUSC0(XN,258,jvj+73)*/
x[jvj+147]=t[x[jvj+147]];
goto l55;
l56:if((x[TY]!=208)) goto l58;
x[jvj+148]=x[jvj+58] ;z[jvj+148]=z[jvj+58];
l57:if((x[jvj+148]<=0)) goto l61;
x[jvj+75]=s[x[jvj+148]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+148];
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[68])( );     /*PLUE0(jvj+74,jvj+75)*/
x[jvj+148]=t[x[jvj+148]];
goto l57;
l58:if((x[TY]!=55)) goto l61;
x[jvj+149]=x[jvj+58] ;z[jvj+149]=z[jvj+58];
l59:if((x[jvj+149]<=0)) goto l61;
x[jvj+76]=s[x[jvj+149]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+149];
pile[v[22]]=XN; pile[WZ1]=256; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(XN,256,jvj+76)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,R,jvj+77)*/
if((x[jvj+77]!=0)) goto l60;
pile[v[22]]=105; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(105,R,jvj+78)*/
if((x[jvj+78]!=0)) goto l60;
pile[v[22]]=XN; pile[WZ1]=258; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(XN,258,jvj+76)*/
l60:x[jvj+149]=t[x[jvj+149]];
goto l59;
l61:if(x[TY]!=48&&x[TY]!=54&&x[TY]!=208&&x[TY]!=50) goto l63;
if((x[CB]==250)) goto l63;
x[jvj+150]=x[jvj+58] ;z[jvj+150]=z[jvj+58];
l62:if((x[jvj+150]<=0)) goto l63;
x[jvj+79]=s[x[jvj+150]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+150];
pile[v[22]]=135; pile[WZ1]=jvj+79; pile[WZ2]=CB; 
(*f[1380])( );     /*RECZ0(135,jvj+79,CB)*/
x[jvj+150]=t[x[jvj+150]];
goto l62;
l64:if((x[TY]!=55)) goto l66;
x[jvj+151]=x[jvj+56] ;z[jvj+151]=z[jvj+56];
l65:if((x[jvj+151]<=0)) goto l66;
x[jvj+80]=s[x[jvj+151]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+151];
pile[v[22]]=XN; pile[WZ1]=187; pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(XN,187,jvj+80)*/
x[jvj+151]=t[x[jvj+151]];
goto l65;
l66:if(x[TY]!=48&&x[TY]!=50&&x[TY]!=54) goto l68;
x[jvj+152]=x[jvj+56] ;z[jvj+152]=z[jvj+56];
l67:if((x[jvj+152]<=0)) goto l68;
x[jvj+81]=s[x[jvj+152]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+152];
pile[v[22]]=XN; pile[WZ1]=256; pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(XN,256,jvj+81)*/
x[jvj+152]=t[x[jvj+152]];
goto l67;
l68:if((x[TY]==208)) goto l69;
if((x[TY]!=50)) goto l76;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(107,R,jvj+88)*/
if((x[jvj+88]!=0)) goto l76;
pile[v[22]]=105; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(105,R,jvj+89)*/
if((x[jvj+89]!=0)) goto l76;
x[jvj+156]=x[jvj+56] ;z[jvj+156]=z[jvj+56];
l75:if((x[jvj+156]<=0)) goto l76;
x[jvj+90]=s[x[jvj+156]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+156];
pile[v[22]]=XN; pile[WZ1]=258; pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(XN,258,jvj+90)*/
x[jvj+156]=t[x[jvj+156]];
goto l75;
l69:pile[v[22]]=105; pile[WZ1]=R; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(105,R,jvj+82)*/
if((x[jvj+82]!=0)) goto l71;
if((x[NN]!=67)) goto l73;
if((x[CB]==250)) goto l73;
pile[v[22]]=107; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,R,jvj+84)*/
if((x[jvj+84]!=0)) goto l76;
x[jvj+154]=x[jvj+56] ;z[jvj+154]=z[jvj+56];
l72:if((x[jvj+154]<=0)) goto l76;
x[jvj+85]=s[x[jvj+154]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+154];
pile[v[22]]=135; pile[WZ1]=jvj+85; pile[WZ2]=CB; 
(*f[1380])( );     /*RECZ0(135,jvj+85,CB)*/
x[jvj+154]=t[x[jvj+154]];
goto l72;
l71:x[jvj+153]=x[jvj+56] ;z[jvj+153]=z[jvj+56];
l70:if((x[jvj+153]<=0)) goto l76;
x[jvj+83]=s[x[jvj+153]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+153];
pile[v[22]]=XN; pile[WZ1]=256; pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(XN,256,jvj+83)*/
x[jvj+153]=t[x[jvj+153]];
goto l70;
l73:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(107,R,jvj+86)*/
if((x[jvj+86]!=0)) goto l76;
x[jvj+155]=x[jvj+56] ;z[jvj+155]=z[jvj+56];
l74:if((x[jvj+155]<=0)) goto l76;
x[jvj+87]=s[x[jvj+155]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+155];
pile[v[22]]=jvj+74; pile[WZ1]=jvj+87; 
(*f[68])( );     /*PLUE0(jvj+74,jvj+87)*/
x[jvj+155]=t[x[jvj+155]];
goto l74;
l76:if(x[TY]!=54&&x[TY]!=48) goto l78;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+91; 
(*f[33])( );     /*FNDE0(107,R,jvj+91)*/
if((x[jvj+91]!=0)) goto l78;
pile[v[22]]=105; pile[WZ2]=jvj+92; 
(*f[33])( );     /*FNDE0(105,R,jvj+92)*/
if((x[jvj+92]!=0)) goto l78;
x[jvj+157]=x[jvj+56] ;z[jvj+157]=z[jvj+56];
l77:if((x[jvj+157]<=0)) goto l78;
x[jvj+93]=s[x[jvj+157]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+157];
pile[v[22]]=XN; pile[WZ1]=187; pile[WZ2]=jvj+93; 
(*f[36])( );     /*PLUSC0(XN,187,jvj+93)*/
x[jvj+157]=t[x[jvj+157]];
goto l77;
l79:if((x[TY]!=55)) goto l81;
x[jvj+158]=x[jvj+57] ;z[jvj+158]=z[jvj+57];
l80:if((x[jvj+158]<=0)) goto l81;
x[jvj+94]=s[x[jvj+158]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+158];
pile[v[22]]=XN; pile[WZ1]=234; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(XN,234,jvj+94)*/
x[jvj+158]=t[x[jvj+158]];
goto l80;
l81:if(x[TY]!=48&&x[TY]!=50&&x[TY]!=54) goto l83;
x[jvj+159]=x[jvj+57] ;z[jvj+159]=z[jvj+57];
l82:if((x[jvj+159]<=0)) goto l83;
x[jvj+95]=s[x[jvj+159]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+159];
pile[v[22]]=XN; pile[WZ1]=474; pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(XN,474,jvj+95)*/
x[jvj+159]=t[x[jvj+159]];
goto l82;
l83:if((x[TY]==208)) goto l84;
if((x[TY]!=50)) goto l91;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+102; 
(*f[33])( );     /*FNDE0(107,R,jvj+102)*/
if((x[jvj+102]!=0)) goto l91;
pile[v[22]]=105; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(105,R,jvj+103)*/
if((x[jvj+103]!=0)) goto l91;
x[jvj+163]=x[jvj+57] ;z[jvj+163]=z[jvj+57];
l90:if((x[jvj+163]<=0)) goto l91;
x[jvj+104]=s[x[jvj+163]] ;z[jvj+104]=(x[jvj+104]<=sepcte) ? x[jvj+104] : z[jvj+163];
pile[v[22]]=XN; pile[WZ1]=159; pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(XN,159,jvj+104)*/
x[jvj+163]=t[x[jvj+163]];
goto l90;
l84:pile[v[22]]=105; pile[WZ1]=R; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(105,R,jvj+96)*/
if((x[jvj+96]!=0)) goto l86;
if((x[NN]!=67)) goto l88;
if((x[CB]==250)) goto l88;
pile[v[22]]=107; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(107,R,jvj+98)*/
if((x[jvj+98]!=0)) goto l91;
x[jvj+161]=x[jvj+57] ;z[jvj+161]=z[jvj+57];
l87:if((x[jvj+161]<=0)) goto l91;
x[jvj+99]=s[x[jvj+161]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+161];
pile[v[22]]=134; pile[WZ1]=jvj+99; pile[WZ2]=CB; 
(*f[1380])( );     /*RECZ0(134,jvj+99,CB)*/
x[jvj+161]=t[x[jvj+161]];
goto l87;
l86:x[jvj+160]=x[jvj+57] ;z[jvj+160]=z[jvj+57];
l85:if((x[jvj+160]<=0)) goto l91;
x[jvj+97]=s[x[jvj+160]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+160];
pile[v[22]]=XN; pile[WZ1]=474; pile[WZ2]=jvj+97; 
(*f[36])( );     /*PLUSC0(XN,474,jvj+97)*/
x[jvj+160]=t[x[jvj+160]];
goto l85;
l88:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+100; 
(*f[33])( );     /*FNDE0(107,R,jvj+100)*/
if((x[jvj+100]!=0)) goto l91;
x[jvj+162]=x[jvj+57] ;z[jvj+162]=z[jvj+57];
l89:if((x[jvj+162]<=0)) goto l91;
x[jvj+101]=s[x[jvj+162]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+162];
pile[v[22]]=jvj+66; pile[WZ1]=jvj+101; 
(*f[68])( );     /*PLUE0(jvj+66,jvj+101)*/
x[jvj+162]=t[x[jvj+162]];
goto l89;
l91:if(x[TY]!=54&&x[TY]!=48) goto l93;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(107,R,jvj+105)*/
if((x[jvj+105]!=0)) goto l93;
pile[v[22]]=105; pile[WZ2]=jvj+106; 
(*f[33])( );     /*FNDE0(105,R,jvj+106)*/
if((x[jvj+106]!=0)) goto l93;
x[jvj+164]=x[jvj+57] ;z[jvj+164]=z[jvj+57];
l92:if((x[jvj+164]<=0)) goto l93;
x[jvj+107]=s[x[jvj+164]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+164];
pile[v[22]]=XN; pile[WZ1]=234; pile[WZ2]=jvj+107; 
(*f[36])( );     /*PLUSC0(XN,234,jvj+107)*/
x[jvj+164]=t[x[jvj+164]];
goto l92;
l95:x[jvj+108]=s[x[jvj+165]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+165];
pile[v[22]]=135; pile[WZ1]=jvj+108; pile[WZ2]=jvj+55; 
(*f[1380])( );     /*RECZ0(135,jvj+108,jvj+55)*/
x[jvj+165]=t[x[jvj+165]];
l94:if((x[jvj+165]>0)) goto l95;
x[jvj+166]=x[jvj+3] ;z[jvj+166]=z[jvj+3];
l97:if((x[jvj+166]>0)) goto l98;
pile[v[22]]=287; pile[WZ1]=XN; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(287,XN,jvj+63)*/
goto l100;
l96:x[jvj+165]=x[jvj+2] ;z[jvj+165]=z[jvj+2];
goto l94;
l98:x[jvj+109]=s[x[jvj+166]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+166];
pile[v[22]]=134; pile[WZ1]=jvj+109; pile[WZ2]=jvj+55; 
(*f[1380])( );     /*RECZ0(134,jvj+109,jvj+55)*/
x[jvj+166]=t[x[jvj+166]];
goto l97;
l99:pile[v[22]]=XN; pile[WZ1]=287; pile[WZ2]=jvj+55; 
(*f[35])( );     /*CHGC1(XN,287,jvj+55)*/
goto l100;
l101:pile[v[22]]=20; pile[WZ1]=R; pile[WZ2]=jvj+110; 
(*f[409])( );     /*TRI14(20,R,jvj+110)*/
goto l107;
l103:if((V177<4)) goto l104;
goto l108;
l104:pile[v[22]]=117; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l105;     /*FNDC0(117,R,V181)*/
V181=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=208; 
(*f[42])( );     /*SRA1(135,0,208,V229)*/
V229=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V181; pile[WZ2]=V229; 
(*f[39])( );     /*SDX0(41,V181,V229,V230)*/
V230=pile[WZ3]; 
pile[v[22]]=V230; 
(*f[40])( );     /*SLG0(V230)*/
l105:if((V177!=2)) goto l108;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l108;
l111:x[jvj+121]=incon;
for(i=x[jvj+110],V194=0;i>0;i=t[i],V194++)  ;
if((V194>1)) goto l112;
x[jvj+121]=x[jvj+120] ;z[jvj+121]=z[jvj+120];
l110:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+113; 
(*f[33])( );     /*FNDE0(107,R,jvj+113)*/
if((x[jvj+113]!=0)) goto l116;
pile[v[22]]=105; pile[WZ2]=jvj+114; 
(*f[33])( );     /*FNDE0(105,R,jvj+114)*/
if((x[jvj+114]!=0)) goto l116;
l119:x[jvj+168]=x[jvj+74] ;z[jvj+168]=z[jvj+74];
l117:if((x[jvj+168]>0)) goto l118;
x[jvj+169]=x[jvj+66] ;z[jvj+169]=z[jvj+66];
l120:if((x[jvj+169]>0)) goto l121;
x[jvj+124]=0 ;z[jvj+124]=0;
x[jvj+170]=x[E] ;z[jvj+170]=z[E];
l122:if((x[jvj+170]>0)) goto l123;
if((x[jvj+124]==0)) goto l132;
x[jvj+127]=0 ;z[jvj+127]=0;
pile[v[22]]=237; pile[WZ1]=R; pile[WZ2]=jvj+126; 
(*f[33])( );     /*FNDE0(237,R,jvj+126)*/
l125:if((x[jvj+126]>0)) goto l126;
x[jvj+171]=x[jvj+110] ;z[jvj+171]=z[jvj+110];
l127:if((x[jvj+171]>0)) goto l128;
pile[v[22]]=jvj+124; pile[WZ1]=jvj+127; pile[WZ2]=XN; pile[WZ3]=CB; 
(*f[1836])( );     /*ORBB0(jvj+124,jvj+127,XN,CB)*/
goto l132;
l112:x[jvj+121]=250 ;z[jvj+121]=250;
goto l110;
l114:x[jvj+115]=t[x[jvj+115]];
l113:if((x[jvj+115]<=0)) goto l119;
x[jvj+116]=s[x[jvj+115]] ;z[jvj+116]=(x[jvj+116]<=sepcte) ? x[jvj+116] : z[jvj+115];
pile[v[22]]=122; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(122,jvj+116,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=XN; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(jvj+117,XN,jvj+118)*/
x[jvj+167]=x[jvj+118] ;z[jvj+167]=z[jvj+118];
l115:if((x[jvj+167]<=0)) goto l114;
x[jvj+119]=s[x[jvj+167]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+167];
V199=x[jvj+119];
pile[v[22]]=jvj+116; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[1380])( );     /*RECZ0(jvj+116,jvj+119,jvj+120)*/
pile[v[22]]=jvj+117; pile[WZ1]=XN; pile[WZ2]=V199; 
(*f[134])( );     /*OTA0(jvj+117,XN,V199)*/
x[jvj+167]=t[x[jvj+167]];
goto l115;
l116:pile[v[22]]=XN; pile[WZ1]=jvj+121; pile[WZ2]=R; pile[WZ3]=jvj+110; pile[WZ4]=TY; pile[WZ5]=NN; 
(*f[1995])( );     /*ORE0(XN,jvj+121,R,jvj+110,TY,NN)*/
if((x[TY]!=208)) goto l119;
if((x[NN]!=67)) goto l119;
if((x[jvj+120]==250)) goto l119;
for(i=x[jvj+110],V195=0;i>0;i=t[i],V195++)  ;
if((V195<=1)) goto l119;
x[jvj+115]=d[108];z[jvj+115]=0;
goto l113;
l118:x[jvj+122]=s[x[jvj+168]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+168];
pile[v[22]]=XN; pile[WZ1]=256; pile[WZ2]=jvj+122; 
(*f[36])( );     /*PLUSC0(XN,256,jvj+122)*/
x[jvj+168]=t[x[jvj+168]];
goto l117;
l121:x[jvj+123]=s[x[jvj+169]] ;z[jvj+123]=(x[jvj+123]<=sepcte) ? x[jvj+123] : z[jvj+169];
pile[v[22]]=XN; pile[WZ1]=474; pile[WZ2]=jvj+123; 
(*f[36])( );     /*PLUSC0(XN,474,jvj+123)*/
x[jvj+169]=t[x[jvj+169]];
goto l120;
l123:x[jvj+125]=s[x[jvj+170]] ;z[jvj+125]=(x[jvj+125]<=sepcte) ? x[jvj+125] : z[jvj+170];
for(a=x[jvj+110];a>0;a=t[a]) if(s[a]==x[jvj+125]) goto l124;
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; 
(*f[68])( );     /*PLUE0(jvj+124,jvj+125)*/
l124:x[jvj+170]=t[x[jvj+170]];
goto l122;
l126:V191=s[x[jvj+126]];
pile[v[22]]=jvj+127; pile[WZ1]=V191; 
(*f[331])( );     /*PLUE3(jvj+127,V191)*/
x[jvj+126]=t[x[jvj+126]];
goto l125;
l128:x[jvj+128]=s[x[jvj+171]] ;z[jvj+128]=(x[jvj+128]<=sepcte) ? x[jvj+128] : z[jvj+171];
pile[v[22]]=263; pile[WZ1]=jvj+128; pile[WZ2]=jvj+129; 
(*f[33])( );     /*FNDE0(263,jvj+128,jvj+129)*/
V270=x[jvj+129];
l129:if((V270>0)) goto l130;
x[jvj+171]=t[x[jvj+171]];
goto l127;
l130:V186=s[V270];
pile[v[22]]=jvj+127; pile[WZ1]=V186; 
(*f[331])( );     /*PLUE3(jvj+127,V186)*/
V270=t[V270];
goto l129;
l133:V7=V6;
x[jvj+26]=0 ;z[jvj+26]=0;
l11:pile[v[22]]=jvj+26; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+8)*/
goto l9;
}
