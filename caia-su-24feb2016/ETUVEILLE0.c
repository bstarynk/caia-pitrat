#include "dx.h"
void ETUVEILLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V1=0,V17=0,H=0,U=0,V6=0,V91=0,V92=0,V93=0,V94=0,V95=0,V5=0,V45=0,NB=0,V25=0,V24=0,V26=0,V50=0,V51=0,V28=0,V55=0,V54=0,V22=0,V34=0,V23=0,V33=0,V129=0,V130=0,V131=0,V132=0,V133=0,V32=0,V52=0,V30=0,V21=0,V136=0,V137=0,V138=0,V139=0,V140=0,V141=0,V142=0,V144=0,V145=0,V146=0,V148=0,V149=0,V150=0,V44=0,V128=0,V83=0,V84=0,V67=0,V89=0,V88=0,V64=0,V73=0,V65=0,V72=0,V152=0,V153=0,V154=0,V155=0,V156=0,V71=0,V14=0,SS=0,V98=0,V99=0,V100=0,V101=0,V102=0,V103=0,V104=0,V106=0,V107=0,V108=0,V110=0,V111=0,V112=0,V85=0,V69=0,V62=0,V86=0,V159=0,V160=0,V161=0,V162=0,V163=0,V164=0,V165=0,V166=0,V167=0,V168=0,V169=0,V171=0,V172=0,V173=0,V175=0,V176=0,V177=0,V114=0,V41=0,V42=0,V123=0,V124=0,V116=0,V117=0,V118=0,V119=0,V120=0,V121=0,V122=0,V187=0,V188=0,V192=0,V193=0,V197=0,V198=0,V202=0,V203=0,V207=0,V208=0,V212=0,V213=0,V220=0,V218=0,V221=0;
int X,QM,QL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=70;
x[jvj+1]=11530;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==558&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; QM=pile[v[22]+1]; QL=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=288; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(288,X,jvj+2)*/
if((x[jvj+2]!=187)) goto l1;
x[jvj+24]=1529 ;z[jvj+24]=1529;
l24:pile[v[22]]=jvj+24; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(jvj+24,X,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
pile[v[22]]=1521; pile[WZ1]=1447; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1521,1447,jvj+3)*/
pile[v[22]]=934; pile[WZ1]=QL; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(934,QL,jvj+4)*/
pile[v[22]]=248; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(248,jvj+4,jvj+5)*/
l2:if((x[jvj+3]<=0)) goto l5;
x[jvj+6]=s[x[jvj+3]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+3];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l1:x[jvj+24]=1527 ;z[jvj+24]=1527;
goto l24;
l4:pile[v[22]]=jvj+6; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(jvj+6,X,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V12; 
(*f[186])( );     /*BTC0(jvj+7,117,V12)*/
goto l3;
l5:pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,jvj+7,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=V1; 
(*f[913])( );if(v[102]) goto l26;     /*PMILLE0(V14,V1,SS)*/
SS=pile[WZ2]; 
pile[v[22]]=1246; pile[WZ1]=301; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(1246,301,jvj+58)*/
l48:if((x[jvj+58]>0)) goto l49;
l26:pile[v[22]]=1515; pile[WZ1]=1447; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+39)*/
pile[v[22]]=1514; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(1514,1447,jvj+40)*/
pile[v[22]]=1516; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+41)*/
pile[v[22]]=256; pile[WZ1]=X; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(256,X,jvj+42)*/
l27:if((x[jvj+42]>0)) goto l28;
pile[v[22]]=256; pile[WZ1]=X; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(256,X,jvj+46)*/
l31:if((x[jvj+46]>0)) goto l32;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l7:V24=V25;
l8:V26=incon;
pile[v[22]]=218; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(218,jvj+13,jvj+15)*/
x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
pile[v[22]]=jvj+14; pile[WZ1]=218; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+14,218,jvj+16)*/
pile[v[22]]=135; pile[WZ1]=V24; 
(*f[42])( );     /*SRA1(135,V24,jvj+16,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=jvj+14; pile[WZ1]=218; 
(*f[35])( );     /*CHGC1(jvj+14,218,jvj+16)*/
l18:pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(jvj+24,jvj+13,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(0,117,jvj+21)*/
pile[v[22]]=1521; pile[WZ1]=1447; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1521,1447,jvj+17)*/
pile[v[22]]=934; pile[WZ1]=QL; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(934,QL,jvj+18)*/
pile[v[22]]=248; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(248,jvj+18,jvj+19)*/
x[jvj+67]=x[jvj+17] ;z[jvj+67]=z[jvj+17];
l10:if((x[jvj+67]<=0)) goto l13;
x[jvj+20]=s[x[jvj+67]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+67];
for(a=x[jvj+19];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l12;
l11:x[jvj+67]=t[x[jvj+67]];
goto l10;
l9:V26=V24;
goto l18;
l12:pile[v[22]]=jvj+20; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(jvj+20,jvj+13,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=117; pile[WZ2]=V50; 
(*f[186])( );     /*BTC0(jvj+21,117,V50)*/
goto l11;
l13:pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(117,jvj+21,V51)*/
V51=pile[WZ2]; 
V28=V51;
pile[v[22]]=V52; pile[WZ1]=V28; 
(*f[913])( );if(v[102]) goto l54;     /*PMILLE0(V52,V28,V30)*/
V30=pile[WZ2]; 
V21=V30;
pile[v[22]]=1246; pile[WZ1]=301; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(1246,301,jvj+54)*/
l42:if((x[jvj+54]>0)) goto l43;
l54:x[jvj+62]=d[181];z[jvj+62]=0;
l55:if((x[jvj+62]>0)) goto l56;
pile[v[22]]=jvj+28; pile[WZ1]=258; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+28,258,jvj+14)*/
x[jvj+68]=t[x[jvj+68]];
l16:if((x[jvj+68]>0)) goto l17;
pile[v[22]]=QM; pile[WZ1]=256; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(QM,256,jvj+28)*/
l33:x[jvj+46]=t[x[jvj+46]];
goto l31;
l17:x[jvj+13]=s[x[jvj+68]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+68];
V44=1;
pile[v[22]]=V44; pile[WZ1]=1488; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V44,1488,jvj+14)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=3; 
(*f[42])( );     /*SRA1(135,0,3,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=V128; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V128,58,V25)*/
V25=pile[WZ2]; 
V24=incon;
pile[v[22]]=1106; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1106,jvj+13,V45)*/
V45=pile[WZ2]; 
NB=V45;
pile[v[22]]=jvj+14; pile[WZ1]=1106; pile[WZ2]=NB; 
(*f[43])( );     /*CHGC2(jvj+14,1106,NB)*/
pile[v[22]]=V25; pile[WZ1]=NB; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V25,NB,41,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=jvj+14; pile[WZ1]=1106; pile[WZ2]=NB; 
(*f[43])( );     /*CHGC2(jvj+14,1106,NB)*/
goto l8;
l21:pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(jvj+32,jvj+33,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=jvj+34; pile[WZ1]=117; pile[WZ2]=V83; 
(*f[186])( );     /*BTC0(jvj+34,117,V83)*/
l20:x[jvj+69]=t[x[jvj+69]];
l19:if((x[jvj+69]<=0)) goto l22;
x[jvj+32]=s[x[jvj+69]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+69];
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l21;
goto l20;
l22:pile[v[22]]=117; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+34,V84)*/
V84=pile[WZ2]; 
V67=V84;
pile[v[22]]=V85; pile[WZ1]=V67; 
(*f[913])( );if(v[102]) goto l29;     /*PMILLE0(V85,V67,V69)*/
V69=pile[WZ2]; 
V62=V69;
pile[v[22]]=1246; pile[WZ1]=301; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(1246,301,jvj+60)*/
l51:if((x[jvj+60]>0)) goto l52;
l29:x[jvj+42]=t[x[jvj+42]];
goto l27;
l28:x[jvj+33]=s[x[jvj+42]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+42];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(jvj+24,jvj+33,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(218,jvj+33,jvj+43)*/
x[jvj+44]=x[jvj+43] ;z[jvj+44]=z[jvj+43];
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==x[jvj+44]) goto l29;
for(a=x[jvj+40];a>0;a=t[a]) if(s[a]==x[jvj+44]) goto l29;
for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==x[jvj+44]) goto l29;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(0,117,jvj+34)*/
pile[v[22]]=1521; pile[WZ1]=1447; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1521,1447,jvj+29)*/
pile[v[22]]=934; pile[WZ1]=QL; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(934,QL,jvj+30)*/
pile[v[22]]=248; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(248,jvj+30,jvj+31)*/
x[jvj+69]=x[jvj+29] ;z[jvj+69]=z[jvj+29];
goto l19;
l32:x[jvj+26]=s[x[jvj+46]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+46];
pile[v[22]]=218; pile[WZ1]=jvj+26; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(218,jvj+26,jvj+47)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+24; pile[WZ3]=jvj+48; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+26,jvj+24,V114,jvj+48)*/
V114=pile[WZ2]; 
x[jvj+49]=x[jvj+47] ;z[jvj+49]=z[jvj+47];
pile[v[22]]=1515; pile[WZ1]=1447; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+49]) goto l34;
pile[v[22]]=1514; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1514,1447,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[jvj+49]) goto l34;
pile[v[22]]=1516; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+49]) goto l34;
goto l33;
l34:V41=1;
pile[v[22]]=V41; pile[WZ1]=1488; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V41,1488,jvj+28)*/
V42=V114;
V123=V42;
V124=V42;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V116; pile[WZ2]=43; 
(*f[42])( );     /*SRA1(135,V116,43,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V117,58,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=218; pile[WZ2]=jvj+49; 
(*f[35])( );     /*CHGC1(jvj+28,218,jvj+49)*/
pile[v[22]]=135; pile[WZ1]=V118; 
(*f[42])( );     /*SRA1(135,V118,jvj+49,V119)*/
V119=pile[WZ3]; 
pile[WZ1]=V119; pile[WZ2]=jvj+24; 
(*f[42])( );     /*SRA1(135,V119,jvj+24,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V120,58,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=jvj+24; pile[WZ2]=V123; 
(*f[43])( );     /*CHGC2(jvj+28,jvj+24,V123)*/
pile[v[22]]=V121; pile[WZ1]=V124; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V121,V124,41,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; 
(*f[40])( );     /*SLG0(V122)*/
pile[v[22]]=258; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(258,jvj+26,jvj+27)*/
x[jvj+68]=x[jvj+27] ;z[jvj+68]=z[jvj+27];
goto l16;
l37:x[jvj+51]=s[x[jvj+50]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+50];
pile[v[22]]=1469; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(1469,jvj+51,V187)*/
V187=pile[WZ2]; 
if((U<V187)) goto l38;
pile[v[22]]=1470; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(1470,jvj+51,V188)*/
V188=pile[WZ2]; 
if((U>V188)) goto l38;
x[jvj+9]=x[jvj+51] ;z[jvj+9]=z[jvj+51];
pile[v[22]]=135; pile[WZ1]=V6; pile[WZ2]=974; 
(*f[42])( );     /*SRA1(135,V6,974,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V91,58,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=QM; pile[WZ1]=974; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(QM,974,jvj+9)*/
pile[v[22]]=135; pile[WZ1]=V92; 
(*f[42])( );     /*SRA1(135,V92,jvj+9,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V93,40,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=QM; pile[WZ1]=1534; pile[WZ2]=U; 
(*f[43])( );     /*CHGC2(QM,1534,U)*/
pile[v[22]]=V94; pile[WZ1]=U; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V94,U,41,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V95,41,V5)*/
V5=pile[WZ2]; 
l25:pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
goto l26;
l38:x[jvj+50]=t[x[jvj+50]];
l36:if((x[jvj+50]>0)) goto l37;
l6:V5=V6;
goto l25;
l40:x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=1469; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(1469,jvj+53,V192)*/
V192=pile[WZ2]; 
if((V23<V192)) goto l41;
pile[v[22]]=1470; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(1470,jvj+53,V193)*/
V193=pile[WZ2]; 
if((V23>V193)) goto l41;
x[jvj+23]=x[jvj+53] ;z[jvj+23]=z[jvj+53];
pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=974; 
(*f[42])( );     /*SRA1(135,V33,974,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V129,58,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=974; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(jvj+14,974,jvj+23)*/
pile[v[22]]=135; pile[WZ1]=V130; 
(*f[42])( );     /*SRA1(135,V130,jvj+23,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=V131; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V131,40,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=1534; pile[WZ2]=V23; 
(*f[43])( );     /*CHGC2(jvj+14,1534,V23)*/
pile[v[22]]=V132; pile[WZ1]=V23; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V132,V23,41,V133)*/
V133=pile[WZ3]; 
pile[v[22]]=V133; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V133,41,V32)*/
V32=pile[WZ2]; 
l15:pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
goto l54;
l41:x[jvj+52]=t[x[jvj+52]];
l39:if((x[jvj+52]>0)) goto l40;
l14:V32=V33;
goto l15;
l43:x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=1469; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(1469,jvj+55,V197)*/
V197=pile[WZ2]; 
if((V21<V197)) goto l44;
pile[v[22]]=1470; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(1470,jvj+55,V198)*/
V198=pile[WZ2]; 
if((V21>V198)) goto l44;
x[jvj+25]=x[jvj+55] ;z[jvj+25]=z[jvj+55];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,0,986,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V136,58,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=986; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(jvj+14,986,jvj+25)*/
pile[v[22]]=135; pile[WZ1]=V137; 
(*f[42])( );     /*SRA1(135,V137,jvj+25,V138)*/
V138=pile[WZ3]; 
pile[v[22]]=V138; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V138,40,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V139; pile[WZ2]=1497; 
(*f[98])( );     /*SRA3(135,V139,1497,V140)*/
V140=pile[WZ3]; 
pile[v[22]]=V140; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V140,58,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=1497; pile[WZ2]=V21; 
(*f[43])( );     /*CHGC2(jvj+14,1497,V21)*/
pile[v[22]]=V141; pile[WZ1]=V21; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V141,V21,41,V142)*/
V142=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V142; pile[WZ2]=jvj+24; 
(*f[42])( );     /*SRA1(135,V142,jvj+24,V144)*/
V144=pile[WZ3]; 
pile[v[22]]=V144; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V144,58,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=jvj+24; pile[WZ2]=V52; 
(*f[43])( );     /*CHGC2(jvj+14,jvj+24,V52)*/
pile[v[22]]=V145; pile[WZ1]=V52; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V145,V52,41,V146)*/
V146=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V146; pile[WZ2]=18; 
(*f[42])( );     /*SRA1(135,V146,18,V148)*/
V148=pile[WZ3]; 
pile[v[22]]=V148; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V148,58,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=18; pile[WZ2]=V28; 
(*f[43])( );     /*CHGC2(jvj+14,18,V28)*/
pile[v[22]]=V149; pile[WZ1]=V28; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V149,V28,41,V150)*/
V150=pile[WZ3]; 
pile[v[22]]=V150; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V150,41,V33)*/
V33=pile[WZ2]; 
V32=incon;
pile[v[22]]=288; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(288,X,jvj+22)*/
if((x[jvj+22]!=187)) goto l14;
pile[v[22]]=1524; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1524,jvj+13,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=1529; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1529,jvj+13,V54)*/
V54=pile[WZ2]; 
V22=V54;
if((V22<=0)) goto l14;
pile[v[22]]=V22; pile[WZ1]=V55; 
(*f[913])( );if(v[102]) goto l14;     /*PMILLE0(V22,V55,V34)*/
V34=pile[WZ2]; 
V23=V34;
pile[v[22]]=1246; pile[WZ1]=301; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(1246,301,jvj+52)*/
goto l39;
l44:x[jvj+54]=t[x[jvj+54]];
goto l42;
l46:x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=1469; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(1469,jvj+57,V202)*/
V202=pile[WZ2]; 
if((V65<V202)) goto l47;
pile[v[22]]=1470; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(1470,jvj+57,V203)*/
V203=pile[WZ2]; 
if((V65>V203)) goto l47;
x[jvj+37]=x[jvj+57] ;z[jvj+37]=z[jvj+57];
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=974; 
(*f[42])( );     /*SRA1(135,V72,974,V152)*/
V152=pile[WZ3]; 
pile[v[22]]=V152; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V152,58,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=974; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(jvj+36,974,jvj+37)*/
pile[v[22]]=135; pile[WZ1]=V153; 
(*f[42])( );     /*SRA1(135,V153,jvj+37,V154)*/
V154=pile[WZ3]; 
pile[v[22]]=V154; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V154,40,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=1534; pile[WZ2]=V65; 
(*f[43])( );     /*CHGC2(jvj+36,1534,V65)*/
pile[v[22]]=V155; pile[WZ1]=V65; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V155,V65,41,V156)*/
V156=pile[WZ3]; 
pile[v[22]]=V156; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V156,41,V71)*/
V71=pile[WZ2]; 
l30:pile[v[22]]=V71; 
(*f[40])( );     /*SLG0(V71)*/
pile[v[22]]=QM; pile[WZ1]=256; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(QM,256,jvj+36)*/
goto l29;
l47:x[jvj+56]=t[x[jvj+56]];
l45:if((x[jvj+56]>0)) goto l46;
l23:V71=V72;
goto l30;
l49:x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=1469; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(1469,jvj+59,V207)*/
V207=pile[WZ2]; 
if((SS<V207)) goto l50;
pile[v[22]]=1470; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(1470,jvj+59,V208)*/
V208=pile[WZ2]; 
if((SS>V208)) goto l50;
x[jvj+38]=x[jvj+59] ;z[jvj+38]=z[jvj+59];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,0,986,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V98,58,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=QM; pile[WZ1]=986; pile[WZ2]=jvj+38; 
(*f[35])( );     /*CHGC1(QM,986,jvj+38)*/
pile[v[22]]=135; pile[WZ1]=V99; 
(*f[42])( );     /*SRA1(135,V99,jvj+38,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V100,40,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V101; pile[WZ2]=1497; 
(*f[98])( );     /*SRA3(135,V101,1497,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V102,58,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=QM; pile[WZ1]=1497; pile[WZ2]=SS; 
(*f[43])( );     /*CHGC2(QM,1497,SS)*/
pile[v[22]]=V103; pile[WZ1]=SS; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V103,SS,41,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V104; pile[WZ2]=jvj+24; 
(*f[42])( );     /*SRA1(135,V104,jvj+24,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V106,58,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=QM; pile[WZ1]=jvj+24; pile[WZ2]=V14; 
(*f[43])( );     /*CHGC2(QM,jvj+24,V14)*/
pile[v[22]]=V107; pile[WZ1]=V14; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V107,V14,41,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V108; pile[WZ2]=18; 
(*f[42])( );     /*SRA1(135,V108,18,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=V110; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V110,58,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=QM; pile[WZ1]=18; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(QM,18,V1)*/
pile[v[22]]=V111; pile[WZ1]=V1; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V111,V1,41,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V112,41,V6)*/
V6=pile[WZ2]; 
V5=incon;
pile[v[22]]=288; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(288,X,jvj+8)*/
if((x[jvj+8]!=187)) goto l6;
pile[v[22]]=1524; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1524,X,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=1529; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1529,X,H)*/
H=pile[WZ2]; 
if((H<=0)) goto l6;
pile[v[22]]=H; pile[WZ1]=V17; 
(*f[913])( );if(v[102]) goto l6;     /*PMILLE0(H,V17,U)*/
U=pile[WZ2]; 
pile[v[22]]=1246; pile[WZ1]=301; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1246,301,jvj+50)*/
goto l36;
l50:x[jvj+58]=t[x[jvj+58]];
goto l48;
l52:x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=1469; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(1469,jvj+61,V212)*/
V212=pile[WZ2]; 
if((V62<V212)) goto l53;
pile[v[22]]=1470; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(1470,jvj+61,V213)*/
V213=pile[WZ2]; 
if((V62>V213)) goto l53;
x[jvj+45]=x[jvj+61] ;z[jvj+45]=z[jvj+61];
V86=1;
pile[v[22]]=V86; pile[WZ1]=1488; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V86,1488,jvj+36)*/
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V159; pile[WZ2]=43; 
(*f[42])( );     /*SRA1(135,V159,43,V160)*/
V160=pile[WZ3]; 
pile[v[22]]=V160; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V160,58,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=218; pile[WZ2]=jvj+44; 
(*f[35])( );     /*CHGC1(jvj+36,218,jvj+44)*/
pile[v[22]]=135; pile[WZ1]=V161; 
(*f[42])( );     /*SRA1(135,V161,jvj+44,V162)*/
V162=pile[WZ3]; 
pile[v[22]]=V162; 
(*f[40])( );     /*SLG0(V162)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=986; 
(*f[42])( );     /*SRA1(135,0,986,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=V163; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V163,58,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=986; pile[WZ2]=jvj+45; 
(*f[35])( );     /*CHGC1(jvj+36,986,jvj+45)*/
pile[v[22]]=135; pile[WZ1]=V164; 
(*f[42])( );     /*SRA1(135,V164,jvj+45,V165)*/
V165=pile[WZ3]; 
pile[v[22]]=V165; pile[WZ1]=40; 
(*f[249])( );     /*SPC1(V165,40,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V166; pile[WZ2]=1497; 
(*f[98])( );     /*SRA3(135,V166,1497,V167)*/
V167=pile[WZ3]; 
pile[v[22]]=V167; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V167,58,V168)*/
V168=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=1497; pile[WZ2]=V62; 
(*f[43])( );     /*CHGC2(jvj+36,1497,V62)*/
pile[v[22]]=V168; pile[WZ1]=V62; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V168,V62,41,V169)*/
V169=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V169; pile[WZ2]=jvj+24; 
(*f[42])( );     /*SRA1(135,V169,jvj+24,V171)*/
V171=pile[WZ3]; 
pile[v[22]]=V171; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V171,58,V172)*/
V172=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=jvj+24; pile[WZ2]=V85; 
(*f[43])( );     /*CHGC2(jvj+36,jvj+24,V85)*/
pile[v[22]]=V172; pile[WZ1]=V85; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V172,V85,41,V173)*/
V173=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V173; pile[WZ2]=18; 
(*f[42])( );     /*SRA1(135,V173,18,V175)*/
V175=pile[WZ3]; 
pile[v[22]]=V175; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V175,58,V176)*/
V176=pile[WZ2]; 
pile[v[22]]=jvj+36; pile[WZ1]=18; pile[WZ2]=V67; 
(*f[43])( );     /*CHGC2(jvj+36,18,V67)*/
pile[v[22]]=V176; pile[WZ1]=V67; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V176,V67,41,V177)*/
V177=pile[WZ3]; 
pile[v[22]]=V177; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V177,41,V72)*/
V72=pile[WZ2]; 
V71=incon;
pile[v[22]]=288; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(288,X,jvj+35)*/
if((x[jvj+35]!=187)) goto l23;
pile[v[22]]=1524; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(1524,jvj+33,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=1529; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(1529,jvj+33,V88)*/
V88=pile[WZ2]; 
V64=V88;
if((V64<=0)) goto l23;
pile[v[22]]=V64; pile[WZ1]=V89; 
(*f[913])( );if(v[102]) goto l23;     /*PMILLE0(V64,V89,V73)*/
V73=pile[WZ2]; 
V65=V73;
pile[v[22]]=1246; pile[WZ1]=301; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1246,301,jvj+56)*/
goto l45;
l53:x[jvj+60]=t[x[jvj+60]];
goto l51;
l56:x[jvj+63]=s[x[jvj+62]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+62];
pile[v[22]]=jvj+63; pile[WZ1]=1447; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(jvj+63,1447,jvj+64)*/
x[jvj+70]=x[jvj+64] ;z[jvj+70]=z[jvj+64];
l57:if((x[jvj+70]>0)) goto l58;
x[jvj+62]=t[x[jvj+62]];
goto l55;
l58:x[jvj+65]=s[x[jvj+70]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+70];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+65; pile[WZ3]=jvj+66; 
(*f[45])( );if(v[102]) goto l59;     /*FNDZ0(jvj+13,jvj+65,V220,jvj+66)*/
V220=pile[WZ2]; 
V218=V220;
V221=V218;
pile[v[22]]=jvj+14; pile[WZ2]=V221; 
(*f[186])( );     /*BTC0(jvj+14,jvj+65,V221)*/
l59:x[jvj+70]=t[x[jvj+70]];
goto l57;
}
