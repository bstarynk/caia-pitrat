#include "dx.h"
void TRANSFORME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V22=0,V23=0,V26=0,V21=0,V35=0,V33=0,V34=0,V37=0,V32=0,V13=0,V11=0,V12=0,V15=0,V16=0,V46=0,V44=0,V45=0,V48=0,V43=0,V5=0,V53=0,V55=0,V93=0,V92=0,V63=0,V65=0,V60=0,V103=0,V102=0,V72=0,V74=0,V77=0,V113=0,V112=0,V114=0,V115=0,V116=0,V82=0,V84=0,ZZ=0,V143=0,V129=0,V128=0,V127=0,V126=0,V88=0,V89=0,V90=0,V91=0,V94=0,V95=0,V96=0,V97=0,V98=0,V99=0,V100=0,V101=0,V104=0,V105=0,V106=0,V107=0,V108=0,V109=0,V110=0,V111=0,V118=0,V119=0,V120=0,V121=0,V122=0,V123=0,V124=0,V125=0,V145=0;
int UR,NR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=10746;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==166&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; NR=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[546])( );     /*ANASIMP0()*/
if((UR==84)) goto l1;
if((UR!=77)) goto l8;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1484,854,V35)*/
V35=pile[WZ2]; 
V33=sepfacts+1;
V34=sepfacts+V35;
l5:if((V33>V34)) goto l8;
V37=r[V33];
if((V37!=1)) goto l6;
x[jvj+5]=V33 ;z[jvj+5]=(V33<=sepcte) ? V33 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(905,jvj+5,V32)*/
V32=pile[WZ2]; 
if((V32!=(-5963))) goto l6;
pile[v[22]]=1145; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1145,jvj+5,jvj+6)*/
x[jvj+48]=x[jvj+6] ;z[jvj+48]=z[jvj+6];
l7:if((x[jvj+48]<=0)) goto l6;
x[jvj+7]=s[x[jvj+48]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+48];
pile[v[22]]=V32; pile[WZ1]=jvj+7; pile[WZ2]=jvj+5; 
(*f[548])( );     /*TRANSFORMA1(V32,jvj+7,jvj+5)*/
x[jvj+48]=t[x[jvj+48]];
goto l7;
l1:pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1484,854,V24)*/
V24=pile[WZ2]; 
V22=sepfacts+1;
V23=sepfacts+V24;
l2:if((V22>V23)) goto l8;
V26=r[V22];
if((V26!=1)) goto l3;
x[jvj+2]=V22 ;z[jvj+2]=(V22<=sepcte) ? V22 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(905,jvj+2,V21)*/
V21=pile[WZ2]; 
if((V21!=(-9009))) goto l3;
pile[v[22]]=1145; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1145,jvj+2,jvj+3)*/
x[jvj+47]=x[jvj+3] ;z[jvj+47]=z[jvj+3];
l4:if((x[jvj+47]<=0)) goto l3;
x[jvj+4]=s[x[jvj+47]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+47];
pile[v[22]]=V21; pile[WZ1]=jvj+4; pile[WZ2]=jvj+2; 
(*f[548])( );     /*TRANSFORMA1(V21,jvj+4,jvj+2)*/
x[jvj+47]=t[x[jvj+47]];
goto l4;
l3:V22++;
goto l2;
l6:V33++;
goto l5;
l8:if(UR!=32&&UR!=65) goto l12;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1484,854,V13)*/
V13=pile[WZ2]; 
V11=sepfacts+1;
V12=sepfacts+V13;
l9:if((V11>V12)) goto l12;
V15=r[V11];
if((V15!=1)) goto l10;
x[jvj+8]=V11 ;z[jvj+8]=(V11<=sepcte) ? V11 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(905,jvj+8,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=1145; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1145,jvj+8,jvj+9)*/
x[jvj+49]=x[jvj+9] ;z[jvj+49]=z[jvj+9];
l11:if((x[jvj+49]<=0)) goto l10;
x[jvj+10]=s[x[jvj+49]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+49];
pile[v[22]]=V16; pile[WZ1]=jvj+10; pile[WZ2]=jvj+8; 
(*f[548])( );     /*TRANSFORMA1(V16,jvj+10,jvj+8)*/
x[jvj+49]=t[x[jvj+49]];
goto l11;
l10:V11++;
goto l9;
l12:if(UR!=84&&UR!=77&&UR!=85) goto l16;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1484,854,V46)*/
V46=pile[WZ2]; 
V44=sepfacts+1;
V45=sepfacts+V46;
l13:if((V44>V45)) goto l16;
V48=r[V44];
if((V48!=1)) goto l14;
x[jvj+11]=V44 ;z[jvj+11]=(V44<=sepcte) ? V44 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(905,jvj+11,V43)*/
V43=pile[WZ2]; 
if((V43!=(-9113))) goto l14;
pile[v[22]]=1145; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1145,jvj+11,jvj+12)*/
x[jvj+50]=x[jvj+12] ;z[jvj+50]=z[jvj+12];
l15:if((x[jvj+50]<=0)) goto l14;
x[jvj+13]=s[x[jvj+50]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+50];
pile[v[22]]=V43; pile[WZ1]=jvj+13; pile[WZ2]=jvj+11; 
(*f[548])( );     /*TRANSFORMA1(V43,jvj+13,jvj+11)*/
x[jvj+50]=t[x[jvj+50]];
goto l15;
l14:V44++;
goto l13;
l16:if(UR!=32&&UR!=83) goto l46;
pile[v[22]]=565; pile[WZ1]=28013; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(565,28013,jvj+14)*/
l17:if((x[jvj+14]<=0)) goto l46;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+15,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+16,V5)*/
V5=pile[WZ2]; 
if((NR==0)) goto l19;
if((NR==V5)) goto l19;
l18:x[jvj+14]=t[x[jvj+14]];
goto l17;
l19:pile[v[22]]=1145; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1145,jvj+15,jvj+17)*/
x[jvj+51]=x[jvj+17] ;z[jvj+51]=z[jvj+17];
l20:if((x[jvj+51]<=0)) goto l18;
x[jvj+18]=s[x[jvj+51]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+51];
pile[v[22]]=(-5302); pile[WZ1]=jvj+18; pile[WZ2]=V5; 
(*f[547])( );     /*TRANSFORMA0((-5302),jvj+18,V5)*/
x[jvj+51]=t[x[jvj+51]];
goto l20;
l24:x[jvj+19]=s[x[jvj+24]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+24];
pile[v[22]]=1145; pile[WZ1]=jvj+19; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1145,jvj+19,jvj+25)*/
if((x[jvj+25]==0)) goto l25;
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+19,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+20,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=565; pile[WZ1]=28001; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(565,28001,jvj+21)*/
x[jvj+52]=x[jvj+21] ;z[jvj+52]=z[jvj+21];
l21:if((x[jvj+52]<=0)) goto l26;
x[jvj+22]=s[x[jvj+52]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+52];
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+22,jvj+23)*/
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+23,V55)*/
V55=pile[WZ2]; 
if((V53==V55)) goto l25;
l22:x[jvj+52]=t[x[jvj+52]];
goto l21;
l26:V93=x[jvj+19];
pile[v[22]]=20; pile[WZ1]=V93; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V93,0,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
l25:x[jvj+24]=t[x[jvj+24]];
l23:if((x[jvj+24]>0)) goto l24;
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=30; pile[WZ1]=V94; pile[WZ2]=34; 
(*f[41])( );     /*SRB0(30,V94,34,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V95; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V95,300,V96)*/
V96=pile[WZ3]; 
pile[WZ1]=V96; pile[WZ2]=1145; 
(*f[42])( );     /*SRA1(135,V96,1145,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=V97; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V97,(-1410),V98)*/
V98=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V98; pile[WZ2]=1402; 
(*f[42])( );     /*SRA1(135,V98,1402,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V99,(-740),V100)*/
V100=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=28001; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,28001,V100,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
pile[v[22]]=565; pile[WZ1]=28013; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(565,28013,jvj+31)*/
l30:if((x[jvj+31]>0)) goto l31;
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=30; pile[WZ1]=V104; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(30,V104,38,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V105; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V105,300,V106)*/
V106=pile[WZ3]; 
pile[WZ1]=V106; pile[WZ2]=1145; 
(*f[42])( );     /*SRA1(135,V106,1145,V107)*/
V107=pile[WZ3]; 
pile[WZ1]=V107; pile[WZ2]=8; 
(*f[42])( );     /*SRA1(135,V107,8,V108)*/
V108=pile[WZ3]; 
pile[WZ1]=V108; pile[WZ2]=1402; 
(*f[42])( );     /*SRA1(135,V108,1402,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=V109; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V109,(-740),V110)*/
V110=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=28001; pile[WZ2]=V110; 
(*f[39])( );     /*SDX0(20,28001,V110,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
pile[v[22]]=565; pile[WZ1]=28013; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(565,28013,jvj+38)*/
l36:if((x[jvj+38]>0)) goto l37;
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V118)*/
V118=pile[WZ2]; 
V119=0;
V145=V118;
if((V145<0)) goto l47;
pile[v[22]]=V145; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V145,3)*/
l47:pile[v[22]]=30; pile[WZ1]=V119; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(30,V119,38,V120)*/
V120=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V120; pile[WZ2]=8; 
(*f[42])( );     /*SRA1(135,V120,8,V121)*/
V121=pile[WZ3]; 
pile[WZ1]=V121; pile[WZ2]=1145; 
(*f[42])( );     /*SRA1(135,V121,1145,V122)*/
V122=pile[WZ3]; 
pile[WZ1]=V122; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V122,300,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=V123; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V123,(-740),V124)*/
V124=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=28001; pile[WZ2]=V124; 
(*f[39])( );     /*SDX0(20,28001,V124,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; 
(*f[40])( );     /*SLG0(V125)*/
pile[v[22]]=565; pile[WZ1]=28013; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(565,28013,jvj+45)*/
l43:if((x[jvj+45]<=0)) goto l48;
x[jvj+40]=s[x[jvj+45]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+45];
pile[v[22]]=1145; pile[WZ1]=jvj+40; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(1145,jvj+40,jvj+46)*/
if((x[jvj+46]==0)) goto l44;
pile[v[22]]=102; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+40,jvj+41)*/
pile[v[22]]=130; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(130,jvj+41,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=565; pile[WZ1]=28001; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(565,28001,jvj+42)*/
x[jvj+55]=x[jvj+42] ;z[jvj+55]=z[jvj+42];
l40:if((x[jvj+55]<=0)) goto l45;
x[jvj+43]=s[x[jvj+55]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+55];
pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+43,jvj+44)*/
pile[v[22]]=130; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+44,V84)*/
V84=pile[WZ2]; 
if((V82==V84)) goto l44;
l41:x[jvj+55]=t[x[jvj+55]];
goto l40;
l27:pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+26,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+27,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=565; pile[WZ1]=28001; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(565,28001,jvj+28)*/
x[jvj+53]=x[jvj+28] ;z[jvj+53]=z[jvj+28];
l28:if((x[jvj+53]<=0)) goto l33;
x[jvj+29]=s[x[jvj+53]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+53];
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+29,jvj+30)*/
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+30,V65)*/
V65=pile[WZ2]; 
if((V63==V65)) goto l32;
l29:x[jvj+53]=t[x[jvj+53]];
goto l28;
l31:x[jvj+26]=s[x[jvj+31]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+31];
pile[v[22]]=1145; pile[WZ1]=jvj+26; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(1145,jvj+26,jvj+32)*/
if((x[jvj+32]!=0)) goto l32;
pile[v[22]]=1402; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1402,jvj+26,V60)*/
V60=pile[WZ2]; 
l32:x[jvj+31]=t[x[jvj+31]];
goto l30;
l33:V103=x[jvj+26];
pile[v[22]]=20; pile[WZ1]=V103; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V103,0,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; 
(*f[40])( );     /*SLG0(V102)*/
goto l32;
l37:x[jvj+33]=s[x[jvj+38]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+38];
pile[v[22]]=1145; pile[WZ1]=jvj+33; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1145,jvj+33,jvj+39)*/
if((x[jvj+39]!=0)) goto l38;
pile[v[22]]=1402; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(1402,jvj+33,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,jvj+33,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,jvj+34,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=565; pile[WZ1]=28001; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(565,28001,jvj+35)*/
x[jvj+54]=x[jvj+35] ;z[jvj+54]=z[jvj+35];
l34:if((x[jvj+54]<=0)) goto l39;
x[jvj+36]=s[x[jvj+54]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+54];
pile[v[22]]=102; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+36,jvj+37)*/
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+37,V74)*/
V74=pile[WZ2]; 
if((V72==V74)) goto l38;
l35:x[jvj+54]=t[x[jvj+54]];
goto l34;
l39:V113=x[jvj+33];
pile[v[22]]=20; pile[WZ1]=V113; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V113,0,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; 
(*f[40])( );     /*SLG0(V112)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1402; 
(*f[42])( );     /*SRA1(135,0,1402,V114)*/
V114=pile[WZ3]; 
pile[v[22]]=V114; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V114,58,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V77; pile[WZ2]=V115; 
(*f[39])( );     /*SDX0(41,V77,V115,V116)*/
V116=pile[WZ3]; 
pile[v[22]]=V116; 
(*f[40])( );     /*SLG0(V116)*/
l38:x[jvj+38]=t[x[jvj+38]];
goto l36;
l44:x[jvj+45]=t[x[jvj+45]];
goto l43;
l45:V127=x[jvj+40];
pile[v[22]]=20; pile[WZ1]=V127; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V127,0,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=V126; 
(*f[40])( );     /*SLG0(V126)*/
V143=x[jvj+46];
l42:if((V143<=0)) goto l44;
ZZ=s[V143];
V129=ZZ;
pile[v[22]]=20; pile[WZ1]=V129; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V129,0,V128)*/
V128=pile[WZ3]; 
pile[v[22]]=V128; 
(*f[40])( );     /*SLG0(V128)*/
V143=t[V143];
goto l42;
l46:if((UR!=83)) goto l48;
if((NR!=0)) goto l48;
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=37; 
(*f[41])( );     /*SRB0(30,0,37,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V88; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V88,300,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V89,(-740),V90)*/
V90=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=28001; pile[WZ2]=V90; 
(*f[39])( );     /*SDX0(20,28001,V90,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; 
(*f[40])( );     /*SLG0(V91)*/
pile[v[22]]=565; pile[WZ1]=28013; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(565,28013,jvj+24)*/
goto l23;
l48:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
