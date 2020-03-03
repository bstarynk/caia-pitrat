#include "dx.h"
void SORCONTEXTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,N=0,V67=0,V68=0,V1=0,V16=0,V18=0,V74=0,A=0,V137=0,V77=0,V73=0,V75=0,V76=0,V79=0,V82=0,V78=0,V80=0,V81=0,V8=0,V83=0,V84=0,V85=0,V7=0,V91=0,V87=0,V88=0,V89=0,V9=0,V33=0,V108=0,V104=0,V105=0,V107=0,V26=0,V27=0,V93=0,V94=0,V96=0,V100=0,V103=0,V98=0,V99=0,V101=0,V102=0,V35=0,V109=0,V110=0,V111=0,V112=0,V113=0,V114=0,V92=0,V40=0,V123=0,V39=0,V141=0,V126=0,V122=0,V124=0,V125=0,V45=0,V38=0,V142=0,V121=0,V117=0,V119=0,V120=0,V133=0,V56=0,V143=0,V136=0,V132=0,V134=0,V135=0,V61=0,V55=0,V144=0,V131=0,V127=0,V129=0,V130=0,V59=0,V43=0,V72=0,V71=0,V116=0;
int UR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=43;
if(v[0]>99700) (*f[6])( );

UR=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR!=86)) goto l27;
if((v[178]<=0)) goto l27;
(*f[439])( );     /*VERIFTOTALE0()*/
l27:if(UR!=84&&UR!=78) goto l37;
x[jvj+27]=vo[16];z[jvj+27]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(498,jvj+27,jvj+28)*/
if(x[jvj+28]!=26147&&x[jvj+28]!=26169) goto l28;
(*f[438])( );     /*SORDNA0()*/
l28:pile[v[22]]=454; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(454,jvj+27,jvj+29)*/
l29:if((x[jvj+29]<=0)) goto l37;
x[jvj+20]=s[x[jvj+29]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+29];
pile[v[22]]=750; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(750,jvj+20,V59)*/
V59=pile[WZ2]; 
if((V59<1)) goto l33;
pile[v[22]]=481; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(481,jvj+20,jvj+30)*/
x[jvj+41]=x[jvj+30] ;z[jvj+41]=z[jvj+30];
l31:if((x[jvj+41]<=0)) goto l33;
x[jvj+24]=s[x[jvj+41]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+41];
pile[v[22]]=489; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(489,jvj+24,jvj+25)*/
V133=x[jvj+24];
V143=x[jvj+25];
l23:if((V143>0)) goto l24;
for(i=x[jvj+25],V61=0;i>0;i=t[i],V61++)  ;
if((V61>=V59)) goto l32;
pile[v[22]]=365; pile[WZ1]=jvj+24; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(365,jvj+24,jvj+26)*/
V144=x[jvj+26];
l25:if((V144<=0)) goto l32;
V55=s[V144];
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==V55) goto l26;
V131=V55;
pile[v[22]]=20; pile[WZ1]=V133; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V133,0,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=V127; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V127,58,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V131; pile[WZ2]=V129; 
(*f[39])( );     /*SDX0(20,V131,V129,V130)*/
V130=pile[WZ3]; 
pile[v[22]]=V130; 
(*f[40])( );     /*SLG0(V130)*/
l26:V144=t[V144];
goto l25;
l1:V1=0;
l39:V72=x[jvj+1];
pile[v[22]]=20; pile[WZ1]=V72; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(20,V72,V1,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; 
(*f[40])( );     /*SLG0(V71)*/
x[jvj+33]=t[x[jvj+33]];
l38:if((x[jvj+33]<=0)) goto l40;
x[jvj+1]=s[x[jvj+33]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+33];
V1=incon;
pile[v[22]]=929; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(929,jvj+1,V5)*/
V5=pile[WZ2]; 
N=V5;
pile[v[22]]=0; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(0,91,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=V67; pile[WZ1]=N; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V67,N,41,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V68,93,V1)*/
V1=pile[WZ2]; 
goto l39;
l5:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+6)*/
V79=x[jvj+2];
x[jvj+39]=x[jvj+6] ;z[jvj+39]=z[jvj+6];
l6:if((x[jvj+39]>0)) goto l7;
if((UR!=81)) goto l44;
V92=x[jvj+2];
pile[v[22]]=20; pile[WZ1]=V92; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V92,0,V8)*/
V8=pile[WZ3]; 
V7=incon;
pile[v[22]]=131; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(131,jvj+2,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=V8; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V8,44,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V83; pile[WZ2]=131; 
(*f[42])( );     /*SRA1(135,V83,131,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V84,58,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V85; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V85,jvj+8,V7)*/
V7=pile[WZ3]; 
l9:V9=incon;
pile[v[22]]=1287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1287,jvj+2,jvj+9)*/
if((x[jvj+9]!=0)) goto l10;
V9=V7;
l18:pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
pile[v[22]]=1474; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1474,jvj+2,jvj+12)*/
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,jvj+13,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+13,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=625; 
(*f[42])( );     /*SRA1(135,0,625,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V27; pile[WZ2]=V93; 
(*f[39])( );     /*SDX0(41,V27,V93,V94)*/
V94=pile[WZ3]; 
pile[WZ1]=V26; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(41,V26,V94,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
l13:pile[v[22]]=1435; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1435,jvj+2,jvj+14)*/
pile[v[22]]=1347; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1347,jvj+2,jvj+15)*/
V100=x[jvj+15];
V103=x[jvj+14];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1347; 
(*f[42])( );     /*SRA1(135,0,1347,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V100; pile[WZ2]=V98; 
(*f[39])( );     /*SDX0(20,V100,V98,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V99; pile[WZ2]=1435; 
(*f[42])( );     /*SRA1(135,V99,1435,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V103; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(20,V103,V101,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; 
(*f[40])( );     /*SLG0(V102)*/
l14:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+16)*/
if((x[jvj+16]!=0)) goto l17;
x[jvj+17]=d[13];z[jvj+17]=0;
l15:if((x[jvj+17]<=0)) goto l17;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(jvj+18,jvj+2,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+18; 
(*f[42])( );     /*SRA1(135,0,jvj+18,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=V109; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V109,40,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=V110; pile[WZ1]=jvj+2; 
(*f[226])( );     /*SDP0(V110,jvj+2,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=V111; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V111,41,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=V112; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V112,61,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V113; 
(*f[39])( );     /*SDX0(41,V35,V113,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; 
(*f[40])( );     /*SLG0(V114)*/
l16:x[jvj+17]=t[x[jvj+17]];
goto l15;
l7:x[jvj+8]=s[x[jvj+39]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+39];
V82=x[jvj+8];
pile[v[22]]=20; pile[WZ1]=V79; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V79,0,V78)*/
V78=pile[WZ3]; 
pile[v[22]]=V78; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V78,61,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V82; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(20,V82,V80,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
x[jvj+39]=t[x[jvj+39]];
goto l6;
l8:V7=V8;
goto l9;
l10:V91=x[jvj+9];
pile[v[22]]=V7; pile[WZ1]=44; 
(*f[38])( );     /*SPC0(V7,44,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V87; pile[WZ2]=1287; 
(*f[42])( );     /*SRA1(135,V87,1287,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V88,58,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V91; pile[WZ2]=V89; 
(*f[39])( );     /*SDX0(23,V91,V89,V9)*/
V9=pile[WZ3]; 
goto l18;
l17:pile[v[22]]=1310; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1310,jvj+2,jvj+19)*/
if((x[jvj+19]==0)) goto l44;
x[jvj+40]=x[jvj+19] ;z[jvj+40]=z[jvj+19];
l11:if((x[jvj+40]<=0)) goto l44;
x[jvj+10]=s[x[jvj+40]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+40];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+10,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=195; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(195,jvj+10,jvj+11)*/
V108=x[jvj+11];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1310; 
(*f[42])( );     /*SRA1(135,0,1310,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V33; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(41,V33,V104,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V108; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(23,V108,V105,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=V107; 
(*f[40])( );     /*SLG0(V107)*/
l12:x[jvj+40]=t[x[jvj+40]];
goto l11;
l20:V39=s[V141];
V126=V39;
pile[v[22]]=20; pile[WZ1]=V123; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V123,0,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V122,61,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V126; pile[WZ2]=V124; 
(*f[39])( );     /*SDX0(20,V126,V124,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; 
(*f[40])( );     /*SLG0(V125)*/
V141=t[V141];
l19:if((V141>0)) goto l20;
for(i=x[jvj+22],V45=0;i>0;i=t[i],V45++)  ;
if((V45>=V43)) goto l36;
pile[v[22]]=365; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(365,jvj+21,jvj+23)*/
V142=x[jvj+23];
l21:if((V142<=0)) goto l36;
V38=s[V142];
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==V38) goto l22;
V121=V38;
pile[v[22]]=20; pile[WZ1]=V123; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V123,0,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V117,58,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V121; pile[WZ2]=V119; 
(*f[39])( );     /*SDX0(20,V121,V119,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; 
(*f[40])( );     /*SLG0(V120)*/
l22:V142=t[V142];
goto l21;
l24:V56=s[V143];
V136=V56;
pile[v[22]]=20; pile[WZ1]=V133; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V133,0,V132)*/
V132=pile[WZ3]; 
pile[v[22]]=V132; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V132,61,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V136; pile[WZ2]=V134; 
(*f[39])( );     /*SDX0(20,V136,V134,V135)*/
V135=pile[WZ3]; 
pile[v[22]]=V135; 
(*f[40])( );     /*SLG0(V135)*/
V143=t[V143];
goto l23;
l32:x[jvj+41]=t[x[jvj+41]];
goto l31;
l33:pile[v[22]]=688; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(688,jvj+20,V43)*/
V43=pile[WZ2]; 
if((V43<1)) goto l30;
pile[v[22]]=750; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(750,jvj+20,V40)*/
V40=pile[WZ2]; 
l30:x[jvj+29]=t[x[jvj+29]];
goto l29;
l34:pile[v[22]]=481; pile[WZ1]=jvj+20; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(481,jvj+20,jvj+31)*/
x[jvj+42]=x[jvj+31] ;z[jvj+42]=z[jvj+31];
l35:if((x[jvj+42]<=0)) goto l30;
x[jvj+21]=s[x[jvj+42]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+42];
pile[v[22]]=489; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(489,jvj+21,jvj+22)*/
V123=x[jvj+21];
V141=x[jvj+22];
goto l19;
l36:x[jvj+42]=t[x[jvj+42]];
goto l35;
l37:if(UR!=84&&UR!=75&&UR!=70&&UR!=81) goto l40;
x[jvj+32]=vo[16];z[jvj+32]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(509,jvj+32,jvj+33)*/
goto l38;
l40:if(UR!=84&&UR!=78&&UR!=74&&UR!=81) goto l45;
x[jvj+34]=vo[16];z[jvj+34]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(498,jvj+34,jvj+35)*/
if(x[jvj+35]==26147||x[jvj+35]==26169) goto l45;
pile[v[22]]=454; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(454,jvj+34,jvj+36)*/
l41:if((x[jvj+36]<=0)) goto l45;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=480; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(480,jvj+37,jvj+38)*/
x[jvj+43]=x[jvj+38] ;z[jvj+43]=z[jvj+38];
l42:if((x[jvj+43]>0)) goto l43;
x[jvj+36]=t[x[jvj+36]];
goto l41;
l43:x[jvj+2]=s[x[jvj+43]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+43];
pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+4)*/
for(i=x[jvj+4],V16=0;i>0;i=t[i],V16++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,jvj+2,jvj+3)*/
pile[v[22]]=473; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(473,jvj+3,V18)*/
V18=pile[WZ2]; 
if((V16>=V18)) goto l5;
l2:pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+5)*/
V74=x[jvj+2];
V137=x[jvj+5];
l3:if((V137<=0)) goto l5;
A=s[V137];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==A) goto l4;
V77=A;
pile[v[22]]=20; pile[WZ1]=V74; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V74,0,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V73,32,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V77; pile[WZ2]=V75; 
(*f[39])( );     /*SDX0(20,V77,V75,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=V76; 
(*f[40])( );     /*SLG0(V76)*/
l4:V137=t[V137];
goto l3;
l44:pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; 
(*f[40])( );     /*SLG0(V116)*/
x[jvj+43]=t[x[jvj+43]];
goto l42;
l45:v[0]=jvj; v[22]-=1; return;
}
