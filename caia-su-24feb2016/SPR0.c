#include "dx.h"
void SPR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V151=0,V144=0,V145=0,V146=0,V164=0,V4=0,V3=0,V124=0,V118=0,V119=0,V120=0,V113=0,V104=0,V106=0,V107=0,V105=0,V108=0,V109=0,V139=0,V130=0,V132=0,V133=0,V131=0,V134=0,V135=0,V56=0,V57=0,V58=0,V86=0,V81=0,V82=0,V79=0,V80=0,V75=0,V65=0,V16=0,V17=0,V18=0,V19=0,V20=0,V39=0,V40=0,V41=0,V42=0,V43=0,V38=0,V44=0,V47=0,V48=0,V49=0,V45=0,V46=0,V93=0,V163=0,V155=0,V157=0,V158=0,V159=0,V160=0,V156=0,V154=0,V161=0,V162=0;
int X,I;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=10429;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2077&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
J=x[jvj+39]=incon;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,X,jvj+4)*/
if(x[jvj+4]!=85&&x[jvj+4]!=86) goto l1;
pile[v[22]]=I; 
(*f[2149])( );if(v[102]) goto l1;     /*SPFIN0(I,X,J)*/
J=pile[WZ2]; 
l18:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,X,jvj+36)*/
if((x[jvj+36]!=39)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,X,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]==10061)) goto l19;
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,X,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=jvj+38; pile[WZ1]=V93; pile[WZ2]=jvj+39; 
(*f[133])( );if(v[102]) goto l19;     /*TLDEBL1(jvj+38,V93,jvj+39)*/
l19:if(J==incon) goto l20;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l1:if((x[jvj+4]==484)) goto l2;
if((x[jvj+4]==21)) goto l5;
if((x[jvj+4]!=22)) goto l6;
pile[v[22]]=X; pile[WZ1]=I; 
(*f[2145])( );if(v[102]) goto l6;     /*SPF0(X,I,J)*/
J=pile[WZ2]; 
goto l18;
l2:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,X,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+5)*/
if(x[jvj+5]!=96&&x[jvj+5]!=89&&x[jvj+5]!=41&&x[jvj+5]!=20&&x[jvj+5]!=128&&x[jvj+5]!=570&&x[jvj+5]!=1317) goto l3;
x[jvj+6]=x[X] ;z[jvj+6]=z[X];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+6,jvj+7)*/
pile[v[22]]=I; 
(*f[1981])( );if(v[102]) goto l3;     /*SPSS0(I,jvj+7,J)*/
J=pile[WZ2]; 
goto l18;
l3:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+8,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if(x[jvj+3]==96||x[jvj+3]==89||x[jvj+3]==41||x[jvj+3]==20||x[jvj+3]==128||x[jvj+3]==570||x[jvj+3]==1317) goto l6;
l4:pile[v[22]]=V151; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V151,I,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=V144; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V144,91,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V145; 
(*f[2077])( );     /*SPR0(jvj+2,V145,V146)*/
V146=pile[WZ2]; 
pile[v[22]]=V146; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V146,93,J)*/
J=pile[WZ2]; 
goto l18;
l5:pile[v[22]]=I; pile[WZ1]=101; pile[WZ2]=X; 
(*f[2147])( );     /*SPP0(I,101,X,J)*/
J=pile[WZ3]; 
goto l18;
l6:if(x[jvj+4]!=96&&x[jvj+4]!=89&&x[jvj+4]!=41&&x[jvj+4]!=20&&x[jvj+4]!=128&&x[jvj+4]!=570&&x[jvj+4]!=1317) goto l7;
if((x[jvj+9]=w[x[jvj+4]][3])==incon) goto l7;
pile[v[22]]=X; pile[WZ1]=jvj+9; pile[WZ3]=jvj+10; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(X,jvj+9,V164,jvj+10)*/
V164=pile[WZ2]; 
V4=V164;
V3=V4;
pile[v[22]]=V3; pile[WZ1]=I; 
(*f[99])( );     /*SPM0(V3,I,J)*/
J=pile[WZ2]; 
goto l18;
l7:if((x[jvj+4]==73)) goto l8;
if((x[jvj+4]==531)) goto l9;
if((x[jvj+4]==435)) goto l10;
if((x[jvj+4]==979)) goto l11;
if((x[jvj+4]!=453)) goto l12;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+20,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,X,jvj+22)*/
pile[v[22]]=V139; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V139,I,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=V130; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V130,91,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=jvj+21; pile[WZ1]=V132; 
(*f[2077])( );     /*SPR0(jvj+21,V132,V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V133,93,V131)*/
V131=pile[WZ2]; 
pile[v[22]]=V131; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V131,91,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=jvj+22; pile[WZ1]=V134; 
(*f[2077])( );     /*SPR0(jvj+22,V134,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=V135; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V135,93,J)*/
J=pile[WZ2]; 
goto l18;
l8:pile[v[22]]=I; pile[WZ1]=X; 
(*f[2148])( );     /*SPOR0(I,X,J)*/
J=pile[WZ2]; 
goto l18;
l9:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+11,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+12)*/
pile[v[22]]=V124; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V124,I,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V118,91,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=V119; 
(*f[2077])( );     /*SPR0(jvj+12,V119,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=V120; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V120,93,J)*/
J=pile[WZ2]; 
goto l18;
l10:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+13,jvj+14)*/
if(x[jvj+14]!=179&&x[jvj+14]!=82) goto l12;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+15)*/
pile[v[22]]=436; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,X,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=I; 
(*f[2144])( );     /*SPD0(jvj+15,jvj+16,I,J)*/
J=pile[WZ3]; 
goto l18;
l11:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+17,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+18)*/
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,X,jvj+19)*/
pile[v[22]]=V113; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V113,I,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=V104; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V104,91,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=jvj+18; pile[WZ1]=V106; 
(*f[2077])( );     /*SPR0(jvj+18,V106,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V107,93,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V105,91,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=V108; 
(*f[2077])( );     /*SPR0(jvj+19,V108,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V109,93,J)*/
J=pile[WZ2]; 
goto l18;
l12:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,X,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]==79)) goto l13;
if((x[jvj+24]==10061)) goto l14;
if((x[jvj+24]==500)) goto l15;
if((x[jvj+24]==78)) goto l16;
if((x[jvj+24]!=599)) goto l18;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,X,jvj+34)*/
pile[v[22]]=436; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,X,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+35,I,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V39; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V39,61,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=(-1721); pile[WZ1]=V40; 
(*f[64])( );     /*SRA2((-1721),V40,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V41,91,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+34; pile[WZ1]=V42; 
(*f[2077])( );     /*SPR0(jvj+34,V42,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V43,93,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V38,59,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=(-1729); pile[WZ1]=V44; 
(*f[64])( );     /*SRA2((-1729),V44,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V47,91,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=3; pile[WZ2]=jvj+35; 
(*f[2147])( );     /*SPP0(V48,3,jvj+35,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V49,93,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=V45; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V45,61,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V46; 
(*f[99])( );     /*SPM0(0,V46,J)*/
J=pile[WZ2]; 
goto l18;
l13:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,X,jvj+25)*/
pile[v[22]]=436; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,X,jvj+26)*/
pile[v[22]]=X; pile[WZ1]=I; pile[WZ3]=jvj+25; 
(*f[2146])( );     /*SPBK0(X,I,jvj+26,jvj+25,J)*/
J=pile[WZ4]; 
goto l18;
l14:pile[v[22]]=(-2624); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2624),I,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V56,40,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V57,32,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V58,41,J)*/
J=pile[WZ2]; 
goto l18;
l15:pile[v[22]]=241; pile[WZ1]=25; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(241,25,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,X,jvj+27)*/
pile[v[22]]=436; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,X,jvj+28)*/
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=V81; 
(*f[2144])( );     /*SPD0(jvj+27,jvj+28,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V82,41,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=V79; 
(*f[64])( );     /*SRA2(V86,V79,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=(-1936); pile[WZ1]=V80; 
(*f[64])( );     /*SRA2((-1936),V80,J)*/
J=pile[WZ2]; 
goto l18;
l16:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,X,jvj+29)*/
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]==87)) goto l17;
if((x[jvj+31]!=183)) goto l18;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,X,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+33,I,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=V16; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V16,61,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=(-1728); pile[WZ1]=V17; 
(*f[64])( );     /*SRA2((-1728),V17,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=V18; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V18,91,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+33; pile[WZ1]=V19; 
(*f[2077])( );     /*SPR0(jvj+33,V19,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V20,93,J)*/
J=pile[WZ2]; 
goto l18;
l17:pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(241,87,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,X,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=I; 
(*f[2077])( );     /*SPR0(jvj+32,I,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=V65; 
(*f[64])( );     /*SRA2(V75,V65,J)*/
J=pile[WZ2]; 
goto l18;
l20:if(x[jvj+39]!=incon) goto l21;
l22:J=I;
pile[v[22]]=10429; pile[WZ1]=(-3412); pile[WZ2]=X; 
(*f[2016])( );     /*FAUTE10(10429,(-3412),X)*/
goto l23;
l21:pile[v[22]]=246; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(246,jvj+39,V163)*/
V163=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(I,40,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=(-2532); pile[WZ1]=V155; 
(*f[64])( );     /*SRA2((-2532),V155,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=(-3571); pile[WZ1]=V157; 
(*f[64])( );     /*SRA2((-3571),V157,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=V158; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V158,91,V159)*/
V159=pile[WZ2]; 
pile[v[22]]=V163; pile[WZ1]=V159; 
(*f[99])( );     /*SPM0(V163,V159,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V160,93,V156)*/
V156=pile[WZ2]; 
pile[v[22]]=V156; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V156,41,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=V154; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V154,40,V161)*/
V161=pile[WZ2]; 
pile[v[22]]=V161; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V161,32,V162)*/
V162=pile[WZ2]; 
pile[v[22]]=V162; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V162,41,J)*/
J=pile[WZ2]; 
goto l23;
}
