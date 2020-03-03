#include "dx.h"
void Z142Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V61=0,V62=0,V42=0,V92=0,V93=0,V73=0,V181=0,V153=0,V158=0,V185=0,V156=0,V188=0,JJ=0,V162=0,V192=0,V160=0,V229=0,V198=0,V206=0,V233=0,V204=0,V236=0,V201=0,V210=0,V240=0,V208=0,V95=0,V98=0,V112=0,V51=0,I=0,V43=0,V123=0,V126=0,V140=0,V65=0,V86=0,V63=0,V74=0,V18=0,K=0,V28=0,L=0,V34=0,V155=0,V203=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=139;
x[jvj+1]=15643;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1880&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,NNNY,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=29)) goto l50;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,NNNY,jvj+28)*/
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(130,jvj+28,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,NNNY,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l42;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; 
(*f[200])( );if(v[102]) goto l42;     /*NDD0(jvj+29,jvj+31)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(280,jvj+31,V98)*/
V98=pile[WZ2]; 
if((V98<V95)) goto l41;
NNNT=75;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+32)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+32; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+32,NNNX)*/
l61:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:V42=V43;
l62:x[jvj+132]=x[jvj+36] ;z[jvj+132]=z[jvj+36];
l63:if((x[jvj+132]>0)) goto l64;
l44:x[jvj+128]=t[x[jvj+128]];
l43:if((x[jvj+128]<=0)) goto l45;
x[jvj+37]=s[x[jvj+128]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+128];
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+37,V51)*/
V51=pile[WZ2]; 
I=V51;
if((I<=0)) goto l44;
V43=V95/I;
V42=incon;
if((V95<=0)) goto l1;
V61=V95%I;
if((V61==0)) goto l1;
V62=V43+1;
V42=V62;
goto l62;
l2:V73=V74;
l69:x[jvj+134]=x[jvj+49] ;z[jvj+134]=z[jvj+49];
l70:if((x[jvj+134]>0)) goto l71;
l49:x[jvj+129]=t[x[jvj+129]];
l48:if((x[jvj+129]<=0)) goto l50;
x[jvj+50]=s[x[jvj+129]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+129];
pile[v[22]]=130; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+50,V86)*/
V86=pile[WZ2]; 
V63=V86;
if((V63<=0)) goto l49;
V74=V65/V63;
V73=incon;
if((V65>=0)) goto l2;
V92=V65%V63;
if((V92==0)) goto l2;
V93=V74-1;
V73=V93;
goto l69;
l4:if(V158==incon) goto l5;
l8:pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V158; 
(*f[186])( );     /*BTC0(jvj+7,117,V158)*/
x[jvj+126]=t[x[jvj+126]];
l6:if((x[jvj+126]>0)) goto l7;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(117,jvj+7,V156)*/
V156=pile[WZ2]; 
if((V156<(-900000))) goto l57;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(0,117,jvj+13)*/
l12:if((x[jvj+75]>0)) goto l13;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(117,jvj+13,V160)*/
V160=pile[WZ2]; 
if((V160>=900000)) goto l57;
x[jvj+108]=incon;
if((x[jvj+27]==29)) goto l15;
if((x[jvj+27]!=30)) goto l17;
if((V156>=V155)) goto l19;
l18:if((V160<V155)) goto l20;
l21:if(x[jvj+108]==incon) goto l57;
if((x[jvj+108]!=(-99999998))) goto l56;
l57:pile[v[22]]=130; pile[WZ1]=jvj+71; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(130,jvj+71,V203)*/
V203=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(102,NNNY,jvj+77)*/
pile[v[22]]=111; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+77,jvj+78)*/
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]!=485)) goto l60;
pile[v[22]]=107; pile[WZ1]=jvj+77; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(107,jvj+77,jvj+80)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(0,117,jvj+19)*/
x[jvj+127]=x[jvj+80] ;z[jvj+127]=z[jvj+80];
l25:if((x[jvj+127]>0)) goto l26;
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+19,V204)*/
V204=pile[WZ2]; 
if((V204<(-900000))) goto l60;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(0,117,jvj+25)*/
l31:if((x[jvj+80]>0)) goto l32;
pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+25,V208)*/
V208=pile[WZ2]; 
if((V208>=900000)) goto l60;
x[jvj+109]=incon;
if((x[jvj+27]==29)) goto l34;
if((x[jvj+27]!=30)) goto l36;
if((V204>V203)) goto l38;
l37:if((V208<=V203)) goto l39;
l40:if(x[jvj+109]==incon) goto l60;
if((x[jvj+109]!=(-99999998))) goto l58;
l60:x[NNNX]=NNNT=incon;
l59:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l5:V158=(-999999);
goto l8;
l7:x[jvj+2]=s[x[jvj+126]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+126];
V158=incon;
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+2,V181)*/
V181=pile[WZ2]; 
V153=V181;
V158=V153;
l3:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=484)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+4,jvj+5)*/
if(x[jvj+5]!=96&&x[jvj+5]!=89&&x[jvj+5]!=41&&x[jvj+5]!=20&&x[jvj+5]!=128&&x[jvj+5]!=570&&x[jvj+5]!=1317) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+2,jvj+6)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(280,jvj+6,V185)*/
V185=pile[WZ2]; 
V158=V185;
goto l8;
l10:if(V162==incon) goto l11;
l14:pile[v[22]]=jvj+13; pile[WZ1]=117; pile[WZ2]=V162; 
(*f[186])( );     /*BTC0(jvj+13,117,V162)*/
x[jvj+75]=t[x[jvj+75]];
goto l12;
l11:V162=999999;
goto l14;
l13:x[jvj+8]=s[x[jvj+75]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+75];
V162=incon;
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+8,V188)*/
V188=pile[WZ2]; 
JJ=V188;
V162=JJ;
l9:pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+8,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+10,jvj+11)*/
if(x[jvj+11]!=96&&x[jvj+11]!=89&&x[jvj+11]!=41&&x[jvj+11]!=20&&x[jvj+11]!=128&&x[jvj+11]!=570&&x[jvj+11]!=1317) goto l10;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l10;     /*NDD0(jvj+8,jvj+12)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(164,jvj+12,V192)*/
V192=pile[WZ2]; 
V162=V192;
goto l14;
l15:if((V156>V155)) goto l19;
l16:if((V160<=V155)) goto l20;
goto l21;
l19:x[jvj+108]=135 ;z[jvj+108]=135;
if((x[jvj+27]==29)) goto l16;
l17:if((x[jvj+27]==30)) goto l18;
goto l21;
l20:x[jvj+108]=134 ;z[jvj+108]=134;
l56:NNNT=127;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+108; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+108,jvj+76)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+76; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+76,NNNX)*/
goto l61;
l23:if(V206==incon) goto l24;
l27:pile[v[22]]=jvj+19; pile[WZ1]=117; pile[WZ2]=V206; 
(*f[186])( );     /*BTC0(jvj+19,117,V206)*/
x[jvj+127]=t[x[jvj+127]];
goto l25;
l24:V206=(-999999);
goto l27;
l26:x[jvj+14]=s[x[jvj+127]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+127];
V206=incon;
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+14,V229)*/
V229=pile[WZ2]; 
V198=V229;
V206=V198;
l22:pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l23;
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+14,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+16,jvj+17)*/
if(x[jvj+17]!=96&&x[jvj+17]!=89&&x[jvj+17]!=41&&x[jvj+17]!=20&&x[jvj+17]!=128&&x[jvj+17]!=570&&x[jvj+17]!=1317) goto l23;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l23;     /*NDD0(jvj+14,jvj+18)*/
pile[v[22]]=280; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(280,jvj+18,V233)*/
V233=pile[WZ2]; 
V206=V233;
goto l27;
l29:if(V210==incon) goto l30;
l33:pile[v[22]]=jvj+25; pile[WZ1]=117; pile[WZ2]=V210; 
(*f[186])( );     /*BTC0(jvj+25,117,V210)*/
x[jvj+80]=t[x[jvj+80]];
goto l31;
l30:V210=999999;
goto l33;
l32:x[jvj+20]=s[x[jvj+80]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+80];
V210=incon;
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+20,V236)*/
V236=pile[WZ2]; 
V201=V236;
V210=V201;
l28:pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=484)) goto l29;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+22,jvj+23)*/
if(x[jvj+23]!=96&&x[jvj+23]!=89&&x[jvj+23]!=41&&x[jvj+23]!=20&&x[jvj+23]!=128&&x[jvj+23]!=570&&x[jvj+23]!=1317) goto l29;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l29;     /*NDD0(jvj+20,jvj+24)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(164,jvj+24,V240)*/
V240=pile[WZ2]; 
V210=V240;
goto l33;
l34:if((V204>=V203)) goto l38;
l35:if((V208<V203)) goto l39;
goto l40;
l38:x[jvj+109]=134 ;z[jvj+109]=134;
if((x[jvj+27]==29)) goto l35;
l36:if((x[jvj+27]==30)) goto l37;
goto l40;
l39:x[jvj+109]=135 ;z[jvj+109]=135;
l58:NNNT=128;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+109; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+109,jvj+81)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+81; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+81,NNNX)*/
goto l61;
l41:pile[v[22]]=164; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(164,jvj+31,V112)*/
V112=pile[WZ2]; 
if((V112>=V95)) goto l42;
NNNT=76;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+33)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+33; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+33,NNNX)*/
goto l61;
l42:pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+29,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=486)) goto l45;
pile[v[22]]=107; pile[WZ1]=jvj+29; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+29,jvj+36)*/
x[jvj+128]=x[jvj+36] ;z[jvj+128]=z[jvj+36];
goto l43;
l45:pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,jvj+28,jvj+41)*/
if((x[jvj+41]!=484)) goto l47;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,NNNY,jvj+42)*/
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+42,V123)*/
V123=pile[WZ2]; 
pile[v[22]]=jvj+28; pile[WZ1]=jvj+43; 
(*f[200])( );if(v[102]) goto l47;     /*NDD0(jvj+28,jvj+43)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(164,jvj+43,V126)*/
V126=pile[WZ2]; 
if((V126>V123)) goto l46;
NNNT=77;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+44)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+44; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+44,NNNX)*/
goto l61;
l46:pile[v[22]]=280; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(280,jvj+43,V140)*/
V140=pile[WZ2]; 
if((V140<=V123)) goto l47;
NNNT=78;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+45)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+45; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+45,NNNX)*/
goto l61;
l47:pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+28,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=486)) goto l50;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,NNNY,jvj+48)*/
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(130,jvj+48,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+49)*/
x[jvj+129]=x[jvj+49] ;z[jvj+129]=z[jvj+49];
goto l48;
l50:if(x[jvj+27]!=25&&x[jvj+27]!=26&&x[jvj+27]!=27&&x[jvj+27]!=28&&x[jvj+27]!=29&&x[jvj+27]!=30) goto l55;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(100,NNNY,jvj+54)*/
if((x[jvj+54]!=22)) goto l55;
pile[v[22]]=102; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(102,NNNY,jvj+55)*/
pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(111,jvj+55,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=485)) goto l55;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(103,NNNY,jvj+58)*/
pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(111,jvj+58,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]!=485)) goto l55;
pile[v[22]]=107; pile[WZ1]=jvj+55; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(107,jvj+55,jvj+61)*/
pile[WZ1]=jvj+58; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(107,jvj+58,jvj+62)*/
x[jvj+130]=x[jvj+61] ;z[jvj+130]=z[jvj+61];
l51:if((x[jvj+130]<=0)) goto l55;
x[jvj+63]=s[x[jvj+130]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+130];
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(130,jvj+63,V18)*/
V18=pile[WZ2]; 
K=V18;
if((K==0)) goto l52;
x[jvj+136]=x[jvj+61] ;z[jvj+136]=z[jvj+61];
l76:if((x[jvj+136]>0)) goto l77;
l52:x[jvj+130]=t[x[jvj+130]];
goto l51;
l55:if(x[jvj+27]!=29&&x[jvj+27]!=30) goto l60;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(100,NNNY,jvj+70)*/
if((x[jvj+70]!=22)) goto l60;
pile[v[22]]=103; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(103,NNNY,jvj+71)*/
pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+71,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]!=485)) goto l57;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,NNNY,jvj+74)*/
pile[v[22]]=130; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(130,jvj+74,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+71; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(107,jvj+71,jvj+75)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
x[jvj+126]=x[jvj+75] ;z[jvj+126]=z[jvj+75];
goto l6;
l64:x[jvj+110]=s[x[jvj+132]] ;z[jvj+110]=(x[jvj+110]<=sepcte) ? x[jvj+110] : z[jvj+132];
pile[v[22]]=jvj+110; pile[WZ1]=jvj+37; pile[WZ2]=jvj+111; 
(*f[760])( );     /*MEMEX0(jvj+110,jvj+37,jvj+111)*/
if((x[jvj+111]==135)) goto l65;
x[jvj+132]=t[x[jvj+132]];
goto l63;
l65:x[jvj+112]=0 ;z[jvj+112]=0;
x[jvj+133]=x[jvj+36] ;z[jvj+133]=z[jvj+36];
l66:if((x[jvj+133]>0)) goto l67;
x[jvj+38]=x[jvj+112] ;z[jvj+38]=z[jvj+112];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[299])( );     /*COPEL0(jvj+38,jvj+39)*/
NNNT=73;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+82)*/
pile[WZ3]=486; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+39; pile[WZ2]=107; pile[WZ3]=jvj+89; 
(*f[301])( );     /*TRI11(jvj+88,jvj+39,107,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+89,22,100,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V42; pile[WZ4]=jvj+84; 
(*f[192])( );     /*QUADRI4(100,41,130,V42,jvj+84)*/
pile[v[22]]=jvj+82; pile[WZ1]=111; pile[WZ2]=jvj+83; 
(*f[54])( );     /*TRI1(jvj+82,111,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+84; pile[WZ2]=103; pile[WZ3]=jvj+85; 
(*f[58])( );     /*TRI3(jvj+83,jvj+84,103,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+85; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+86,jvj+85,jvj+40)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+40; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+40,NNNX)*/
goto l61;
l67:x[jvj+113]=s[x[jvj+133]] ;z[jvj+113]=(x[jvj+113]<=sepcte) ? x[jvj+113] : z[jvj+133];
if((x[jvj+113]==x[jvj+110])) goto l68;
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; 
(*f[68])( );     /*PLUE0(jvj+112,jvj+113)*/
l68:x[jvj+133]=t[x[jvj+133]];
goto l66;
l71:x[jvj+114]=s[x[jvj+134]] ;z[jvj+114]=(x[jvj+114]<=sepcte) ? x[jvj+114] : z[jvj+134];
pile[v[22]]=jvj+114; pile[WZ1]=jvj+50; pile[WZ2]=jvj+115; 
(*f[760])( );     /*MEMEX0(jvj+114,jvj+50,jvj+115)*/
if((x[jvj+115]==135)) goto l72;
x[jvj+134]=t[x[jvj+134]];
goto l70;
l72:x[jvj+116]=0 ;z[jvj+116]=0;
x[jvj+135]=x[jvj+49] ;z[jvj+135]=z[jvj+49];
l73:if((x[jvj+135]>0)) goto l74;
x[jvj+51]=x[jvj+116] ;z[jvj+51]=z[jvj+116];
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[299])( );     /*COPEL0(jvj+51,jvj+52)*/
NNNT=74;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+90)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V73; pile[WZ4]=jvj+94; 
(*f[192])( );     /*QUADRI4(100,41,130,V73,jvj+94)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+52; pile[WZ2]=107; pile[WZ3]=jvj+97; 
(*f[301])( );     /*TRI11(jvj+96,jvj+52,107,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+92; 
(*f[58])( );     /*TRI3(jvj+97,22,100,jvj+92)*/
pile[v[22]]=jvj+90; pile[WZ1]=111; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+90,111,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; pile[WZ2]=103; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+91,jvj+92,103,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+93; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+93,jvj+53)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+53; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+53,NNNX)*/
goto l61;
l74:x[jvj+117]=s[x[jvj+135]] ;z[jvj+117]=(x[jvj+117]<=sepcte) ? x[jvj+117] : z[jvj+135];
if((x[jvj+117]==x[jvj+114])) goto l75;
pile[v[22]]=jvj+116; pile[WZ1]=jvj+117; 
(*f[68])( );     /*PLUE0(jvj+116,jvj+117)*/
l75:x[jvj+135]=t[x[jvj+135]];
goto l73;
l77:x[jvj+118]=s[x[jvj+136]] ;z[jvj+118]=(x[jvj+118]<=sepcte) ? x[jvj+118] : z[jvj+136];
pile[v[22]]=jvj+118; pile[WZ1]=jvj+63; pile[WZ2]=jvj+119; 
(*f[760])( );     /*MEMEX0(jvj+118,jvj+63,jvj+119)*/
if((x[jvj+119]==135)) goto l78;
x[jvj+136]=t[x[jvj+136]];
goto l76;
l78:x[jvj+120]=0 ;z[jvj+120]=0;
x[jvj+137]=x[jvj+61] ;z[jvj+137]=z[jvj+61];
l79:if((x[jvj+137]>0)) goto l80;
x[jvj+64]=x[jvj+120] ;z[jvj+64]=z[jvj+120];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; 
(*f[299])( );     /*COPEL0(jvj+64,jvj+65)*/
x[jvj+131]=x[jvj+62] ;z[jvj+131]=z[jvj+62];
l53:if((x[jvj+131]<=0)) goto l52;
x[jvj+66]=s[x[jvj+131]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+131];
pile[v[22]]=130; pile[WZ1]=jvj+66; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+66,V28)*/
V28=pile[WZ2]; 
L=V28;
if((L==0)) goto l54;
x[jvj+138]=x[jvj+62] ;z[jvj+138]=z[jvj+62];
l82:if((x[jvj+138]>0)) goto l83;
l54:x[jvj+131]=t[x[jvj+131]];
goto l53;
l80:x[jvj+121]=s[x[jvj+137]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+137];
if((x[jvj+121]==x[jvj+118])) goto l81;
pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; 
(*f[68])( );     /*PLUE0(jvj+120,jvj+121)*/
l81:x[jvj+137]=t[x[jvj+137]];
goto l79;
l83:x[jvj+122]=s[x[jvj+138]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+138];
pile[v[22]]=jvj+122; pile[WZ1]=jvj+66; pile[WZ2]=jvj+123; 
(*f[760])( );     /*MEMEX0(jvj+122,jvj+66,jvj+123)*/
if((x[jvj+123]==135)) goto l84;
x[jvj+138]=t[x[jvj+138]];
goto l82;
l84:x[jvj+124]=0 ;z[jvj+124]=0;
x[jvj+139]=x[jvj+62] ;z[jvj+139]=z[jvj+62];
l85:if((x[jvj+139]>0)) goto l86;
x[jvj+67]=x[jvj+124] ;z[jvj+67]=z[jvj+124];
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; 
(*f[299])( );     /*COPEL0(jvj+67,jvj+68)*/
V34=K-L;
NNNT=28;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+98)*/
pile[WZ3]=485; pile[WZ4]=jvj+103; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+103)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V34; pile[WZ4]=jvj+104; 
(*f[192])( );     /*QUADRI4(100,41,130,V34,jvj+104)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+103,jvj+102)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+102; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+65,jvj+102,107)*/
pile[v[22]]=jvj+102; pile[WZ1]=107; pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+102,107,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+68; pile[WZ2]=107; pile[WZ3]=jvj+107; 
(*f[301])( );     /*TRI11(jvj+106,jvj+68,107,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+100; 
(*f[58])( );     /*TRI3(jvj+107,22,100,jvj+100)*/
pile[v[22]]=jvj+98; pile[WZ1]=111; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,111,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; pile[WZ2]=103; pile[WZ3]=jvj+101; 
(*f[58])( );     /*TRI3(jvj+99,jvj+100,103,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+102,jvj+101,jvj+69)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+69; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+69,NNNX)*/
goto l61;
l86:x[jvj+125]=s[x[jvj+139]] ;z[jvj+125]=(x[jvj+125]<=sepcte) ? x[jvj+125] : z[jvj+139];
if((x[jvj+125]==x[jvj+122])) goto l87;
pile[v[22]]=jvj+124; pile[WZ1]=jvj+125; 
(*f[68])( );     /*PLUE0(jvj+124,jvj+125)*/
l87:x[jvj+139]=t[x[jvj+139]];
goto l85;
}
