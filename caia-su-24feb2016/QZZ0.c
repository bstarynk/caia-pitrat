#include "dx.h"
void QZZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V16=0,NT=0,V8=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V23=0,V29=0,V31=0,V33=0,V69=0,V70=0,V71=0,V72=0,V89=0,V88=0,V53=0,V55=0,V57=0,RR=0,V91=0,V93=0,V96=0,V95=0,V94=0,V120=0,V121=0,V122=0,V106=0,V109=0,V129=0,V125=0,V126=0,V127=0,V128=0,V130=0,V105=0,V104=0,V98=0,V97=0,V115=0,V114=0,V133=0,V134=0,V135=0,V136=0,V137=0,V138=0,V99=0;
int BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=62;
x[jvj+1]=10864;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1562&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V16=(time(tzt)-inccc);
NT=V16;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=jvj+3; pile[WZ1]=954; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,954,68)*/
V8=x[jvj+3];
pile[WZ1]=0; pile[WZ2]=V8; pile[WZ3]=291; 
(*f[285])( );     /*ENLY0(jvj+3,0,V8,291,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=728; 
(*f[285])( );     /*ENLY0(jvj+3,V2,V1,728,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=1232; 
(*f[285])( );     /*ENLY0(jvj+3,V4,V3,1232,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=322; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(322,jvj+2,V13)*/
V13=pile[WZ2]; 
l2:
(*f[1759])( );     /*QZZA0()*/
pile[v[22]]=0; pile[WZ1]=642; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(0,642,jvj+35)*/
(*f[1760])( );     /*QO0()*/
(*f[1762])( );     /*ORDONNE0()*/
x[jvj+38]=vo[14];z[jvj+38]=vz[14];
pile[v[22]]=jvj+38; pile[WZ1]=18; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+38,18,1)*/
pile[WZ1]=322; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+38,322,0)*/
pile[WZ1]=405; 
(*f[43])( );     /*CHGC2(jvj+38,405,0)*/
pile[WZ1]=937; 
(*f[43])( );     /*CHGC2(jvj+38,937,0)*/
pile[WZ1]=945; 
(*f[43])( );     /*CHGC2(jvj+38,945,0)*/
pile[WZ1]=273; pile[WZ2]=(-5009); 
(*f[735])( );     /*PLUSC4(jvj+38,273,(-5009))*/
pile[WZ2]=(-5008); 
(*f[735])( );     /*PLUSC4(jvj+38,273,(-5008))*/
pile[WZ2]=(-7482); 
(*f[735])( );     /*PLUSC4(jvj+38,273,(-7482))*/
pile[WZ2]=(-4983); 
(*f[735])( );     /*PLUSC4(jvj+38,273,(-4983))*/
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(509,jvj+4,jvj+5)*/
l3:if((x[jvj+5]>0)) goto l4;
pile[v[22]]=jvj+38; pile[WZ1]=221; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+38,221,jvj+6)*/
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(454,jvj+13,jvj+14)*/
l8:if((x[jvj+14]>0)) goto l9;
pile[v[22]]=jvj+38; pile[WZ1]=291; pile[WZ2]=jvj+18; 
(*f[34])( );     /*CHGC0(jvj+38,291,jvj+18)*/
x[jvj+39]=vo[20];z[jvj+39]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(719,jvj+39,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=109; pile[WZ2]=10290; 
(*f[35])( );     /*CHGC1(jvj+40,109,10290)*/
l27:x[jvj+28]=vo[16];z[jvj+28]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+28; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(509,jvj+28,jvj+41)*/
l28:if((x[jvj+41]>0)) goto l29;
pile[v[22]]=454; pile[WZ1]=jvj+28; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(454,jvj+28,jvj+44)*/
l32:if((x[jvj+44]>0)) goto l33;
pile[v[22]]=498; pile[WZ1]=jvj+28; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(498,jvj+28,jvj+47)*/
if(x[jvj+47]!=26147&&x[jvj+47]!=26169) goto l5;
pile[v[22]]=454; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(454,jvj+28,jvj+29)*/
if((x[jvj+29]<=0)) goto l5;
x[jvj+48]=s[x[jvj+29]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+29];
pile[v[22]]=480; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(480,jvj+48,jvj+49)*/
for(i=x[jvj+49],V91=0;i>0;i=t[i],V91++)  ;
if((V91<=10)) goto l5;
x[jvj+60]=x[jvj+49] ;z[jvj+60]=z[jvj+49];
l24:if((x[jvj+60]<=0)) goto l5;
x[jvj+30]=s[x[jvj+60]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+60];
pile[v[22]]=489; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(489,jvj+30,jvj+33)*/
if((x[jvj+33]!=0)) goto l25;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+30,V89)*/
V89=pile[WZ2]; 
x[jvj+59]=x[jvj+49] ;z[jvj+59]=z[jvj+49];
l22:if((x[jvj+59]<=0)) goto l38;
x[jvj+31]=s[x[jvj+59]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+59];
pile[v[22]]=489; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(489,jvj+31,jvj+32)*/
if((x[jvj+32]!=0)) goto l23;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+31,V88)*/
V88=pile[WZ2]; 
if((V88<V89)) goto l25;
l23:x[jvj+59]=t[x[jvj+59]];
goto l22;
l1:pile[v[22]]=jvj+2; pile[WZ1]=322; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+2,322,0)*/
goto l2;
l4:x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l3;
l7:x[jvj+8]=t[x[jvj+8]];
l6:if((x[jvj+8]<=0)) goto l50;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+9,V23)*/
V23=pile[WZ2]; 
if((V23!=0)) goto l7;
vo[15]=x[jvj+9];vz[15]=x[BL];
pile[v[22]]=jvj+9; pile[WZ1]=323; pile[WZ2]=2000; 
(*f[43])( );     /*CHGC2(jvj+9,323,2000)*/
l50:pile[v[22]]=642; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(642,jvj+35,V99)*/
V99=pile[WZ2]; 
if((V99>400)) goto l51;
x[jvj+50]=vo[20];z[jvj+50]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+50; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(719,jvj+50,jvj+54)*/
x[jvj+52]=vo[14];z[jvj+52]=vz[14];
(*f[1763])( );     /*QTT0()*/
(*f[1764])( );     /*QG0()*/
pile[v[22]]=937; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(937,jvj+52,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=1099; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1099,jvj+50,jvj+51)*/
if((x[jvj+51]!=68)) goto l40;
pile[v[22]]=994; pile[WZ1]=937; pile[WZ2]=V94; 
(*f[186])( );     /*BTC0(994,937,V94)*/
l40:pile[v[22]]=20; pile[WZ1]=10290; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10290,0,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=V120; pile[WZ1]=(-9935); 
(*f[37])( );     /*SRA0(V120,(-9935),V121)*/
V121=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V94; pile[WZ2]=V121; 
(*f[39])( );     /*SDX0(41,V94,V121,V122)*/
V122=pile[WZ3]; 
pile[v[22]]=V122; pile[WZ1]=(-9938); 
(*f[37])( );     /*SRA0(V122,(-9938),V96)*/
V96=pile[WZ2]; 
V95=incon;
if((V94>1)) goto l39;
V95=V96;
l41:pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
l46:V104=vv[33];
if((V104!=0)) goto l48;
V105=g[491];
if((V105<=0)) goto l48;
V106=vg[491];
if((V106!=0)) goto l42;
if((V105<3)) goto l44;
l42:pile[v[22]]=491; pile[WZ1]=10864; pile[WZ2]=0; pile[WZ3]=(-604); pile[WZ4]=BL; pile[WZ5]=jvj+53; 
(*f[232])( );     /*INTERP3(491,10864,0,(-604),BL,jvj+53)*/
if((x[jvj+53]==135)) goto l43;
l48:V115=(time(tzt)-inccc);
V114=V115-NT;
pile[v[22]]=0; pile[WZ1]=(-9722); 
(*f[37])( );     /*SRA0(0,(-9722),V133)*/
V133=pile[WZ2]; 
pile[v[22]]=V133; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V133,(-9543),V134)*/
V134=pile[WZ2]; 
pile[v[22]]=V134; pile[WZ1]=(-9942); 
(*f[37])( );     /*SRA0(V134,(-9942),V135)*/
V135=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10290; pile[WZ2]=V135; 
(*f[39])( );     /*SDX0(20,10290,V135,V136)*/
V136=pile[WZ3]; 
pile[v[22]]=V136; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V136,58,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V114; pile[WZ2]=V137; 
(*f[39])( );     /*SDX0(41,V114,V137,V138)*/
V138=pile[WZ3]; 
pile[v[22]]=V138; pile[WZ1]=(-9522); 
(*f[37])( );     /*SRA0(V138,(-9522),V98)*/
V98=pile[WZ2]; 
V97=incon;
if((V114>1)) goto l47;
V97=V98;
l49:pile[v[22]]=V97; 
(*f[40])( );     /*SLG0(V97)*/
pile[v[22]]=109; pile[WZ1]=jvj+54; 
(*f[71])( );     /*ENLV0(109,jvj+54)*/
pile[v[22]]=954; pile[WZ1]=jvj+52; 
(*f[71])( );     /*ENLV0(954,jvj+52)*/
l51:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=436; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(436,jvj+15,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+16,V33)*/
V33=pile[WZ2]; 
if((V33==(-8106))) goto l10;
pile[v[22]]=480; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(480,jvj+15,jvj+17)*/
x[jvj+55]=x[jvj+17] ;z[jvj+55]=z[jvj+17];
l11:if((x[jvj+55]<=0)) goto l10;
x[jvj+10]=s[x[jvj+55]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+55];
pile[v[22]]=489; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(489,jvj+10,jvj+11)*/
for(i=x[jvj+11],V29=0;i>0;i=t[i],V29++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(498,jvj+10,jvj+12)*/
pile[v[22]]=473; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(473,jvj+12,V31)*/
V31=pile[WZ2]; 
if((V29>=V31)) goto l12;
l13:pile[v[22]]=jvj+18; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+10)*/
l12:x[jvj+55]=t[x[jvj+55]];
goto l11;
l10:x[jvj+14]=t[x[jvj+14]];
goto l8;
l15:x[jvj+22]=s[x[jvj+56]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+56];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+22)*/
x[jvj+56]=t[x[jvj+56]];
l14:if((x[jvj+56]>0)) goto l15;
pile[v[22]]=jvj+19; pile[WZ1]=258; pile[WZ2]=jvj+21; 
(*f[34])( );     /*CHGC0(jvj+19,258,jvj+21)*/
x[jvj+41]=t[x[jvj+41]];
goto l28;
l17:x[jvj+25]=s[x[jvj+57]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+57];
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+25,V70)*/
V70=pile[WZ2]; 
if(V70<V69) V69=V70;
l18:x[jvj+57]=t[x[jvj+57]];
l16:if((x[jvj+57]>0)) goto l17;
if((V69==999999)) goto l37;
V71=(-999999);
pile[v[22]]=365; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(365,jvj+23,jvj+26)*/
x[jvj+58]=x[jvj+26] ;z[jvj+58]=z[jvj+26];
l19:if((x[jvj+58]>0)) goto l20;
if((V71==(-999999))) goto l37;
pile[v[22]]=jvj+23; pile[WZ1]=280; pile[WZ2]=V69; 
(*f[43])( );     /*CHGC2(jvj+23,280,V69)*/
pile[WZ1]=164; pile[WZ2]=V71; 
(*f[43])( );     /*CHGC2(jvj+23,164,V71)*/
l37:x[jvj+62]=t[x[jvj+62]];
l35:if((x[jvj+62]>0)) goto l36;
x[jvj+34]=vo[12];z[jvj+34]=vz[12];
pile[v[22]]=1257; pile[WZ1]=jvj+34; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(1257,jvj+34,jvj+46)*/
if((x[jvj+46]!=68)) goto l34;
pile[v[22]]=529; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(529,jvj+34,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=164; pile[WZ1]=529; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(164,529,V55)*/
V55=pile[WZ2]; 
if((V53>V55)) goto l34;
l26:pile[v[22]]=642; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(642,jvj+35,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(480,jvj+36,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=V57; 
(*f[1761])( );     /*NUMEROTENS2(jvj+37,V57,RR)*/
RR=pile[WZ2]; 
pile[v[22]]=jvj+35; pile[WZ1]=642; pile[WZ2]=RR; 
(*f[43])( );     /*CHGC2(jvj+35,642,RR)*/
l34:x[jvj+44]=t[x[jvj+44]];
goto l32;
l20:x[jvj+27]=s[x[jvj+58]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+58];
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+27,V72)*/
V72=pile[WZ2]; 
if(V72>V71) V71=V72;
l21:x[jvj+58]=t[x[jvj+58]];
goto l19;
l25:x[jvj+60]=t[x[jvj+60]];
goto l24;
l29:x[jvj+19]=s[x[jvj+41]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+41];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+42; 
(*f[887])( );     /*VARND0(jvj+19,jvj+42)*/
x[jvj+61]=x[jvj+42] ;z[jvj+61]=z[jvj+42];
l30:if((x[jvj+61]>0)) goto l31;
x[jvj+21]=0 ;z[jvj+21]=0;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[887])( );     /*VARND0(jvj+19,jvj+20)*/
x[jvj+56]=x[jvj+20] ;z[jvj+56]=z[jvj+20];
goto l14;
l31:x[jvj+43]=s[x[jvj+61]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+61];
pile[v[22]]=jvj+43; pile[WZ1]=509; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+43,509,jvj+19)*/
x[jvj+61]=t[x[jvj+61]];
goto l30;
l33:x[jvj+36]=s[x[jvj+44]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+44];
pile[v[22]]=480; pile[WZ1]=jvj+36; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(480,jvj+36,jvj+45)*/
x[jvj+62]=x[jvj+45] ;z[jvj+62]=z[jvj+45];
goto l35;
l36:x[jvj+23]=s[x[jvj+62]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+62];
V69=999999;
pile[v[22]]=365; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(365,jvj+23,jvj+24)*/
x[jvj+57]=x[jvj+24] ;z[jvj+57]=z[jvj+24];
goto l16;
l38:pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+30,V93)*/
V93=pile[WZ2]; 
v[190]=V93;
v[191]=(-630);
l5:pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,BL,jvj+8)*/
goto l6;
l39:pile[v[22]]=V96; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V96,83,V95)*/
V95=pile[WZ2]; 
goto l41;
l43:if((V105<4)) goto l44;
goto l48;
l44:pile[v[22]]=322; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(322,jvj+52,V109)*/
V109=pile[WZ2]; 
V129=x[BL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V125; pile[WZ2]=10864; 
(*f[98])( );     /*SRA3(135,V125,10864,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=V126; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V126,125,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V129; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(20,V129,V127,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V109; pile[WZ2]=V128; 
(*f[39])( );     /*SDX0(41,V109,V128,V130)*/
V130=pile[WZ3]; 
pile[v[22]]=V130; 
(*f[40])( );     /*SLG0(V130)*/
l45:if((V105!=2)) goto l48;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l48;
l47:pile[v[22]]=V98; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V98,83,V97)*/
V97=pile[WZ2]; 
goto l49;
}
