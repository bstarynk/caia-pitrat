#include "dx.h"
void LIVEILLA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V68=0,V69=0,V70=0,V71=0,V15=0,ZZ=0,V7=0,V6=0,V12=0,V8=0,V14=0,J=0,V74=0,V76=0,V77=0,V79=0,V80=0,V10=0,V35=0,CC=0,V36=0,V27=0,V39=0,ZA=0,V40=0,V29=0,V56=0,NS=0,V57=0,V49=0,V60=0,V46=0,V61=0,V51=0,V52=0,V53=0,V54=0,V63=0,V89=0,V90=0,V91=0,V92=0,V30=0,V31=0,V32=0,V42=0,V83=0,V84=0,V85=0,V86=0,V93=0;
int MW,TX,QN,MV,MU;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=51;
x[jvj+1]=11516;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1221&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
MW=pile[v[22]]; TX=pile[v[22]+1]; QN=pile[v[22]+2]; MV=pile[v[22]+3]; MU=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+16]=x[jvj+7]=x[jvj+8]=incon;
pile[v[22]]=288; pile[WZ1]=MV; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(288,MV,jvj+7)*/
l6:pile[v[22]]=218; pile[WZ1]=MW; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,MW,jvj+8)*/
V1=0;
pile[v[22]]=V1; pile[WZ1]=1488; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(V1,1488,jvj+9)*/
x[jvj+16]=x[jvj+9] ;z[jvj+16]=z[jvj+9];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=43; 
(*f[42])( );     /*SRA1(135,V68,43,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V69,58,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=218; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(jvj+9,218,jvj+8)*/
pile[v[22]]=135; pile[WZ1]=V70; 
(*f[42])( );     /*SRA1(135,V70,jvj+8,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; 
(*f[40])( );     /*SLG0(V71)*/
pile[v[22]]=QN; pile[WZ1]=256; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(QN,256,jvj+9)*/
l1:x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=1526; pile[WZ1]=1447; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1526,1447,jvj+2)*/
l2:if((x[jvj+2]>0)) goto l3;
pile[v[22]]=1531; pile[WZ1]=1447; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1531,1447,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
x[jvj+45]=x[jvj+3] ;z[jvj+45]=z[jvj+3];
if(x[jvj+16]!=incon) goto l15;
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l3:x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+6)*/
x[jvj+5]=t[x[jvj+5]];
goto l4;
l7:x[jvj+14]=incon;
if((x[jvj+7]==187)) goto l8;
x[jvj+14]=1490 ;z[jvj+14]=1490;
l18:x[jvj+17]=d[171];z[jvj+17]=0;
l16:if((x[jvj+17]>0)) goto l17;
V52=TX%5;
if((V52==0)) goto l32;
if((x[jvj+7]==187)) goto l33;
l36:if(x[jvj+8]!=incon) goto l37;
goto l39;
l8:x[jvj+14]=1528 ;z[jvj+14]=1528;
goto l18;
l9:V6=ZZ;
l40:pile[v[22]]=117; pile[WZ1]=V6; pile[WZ2]=218; pile[WZ3]=jvj+11; pile[WZ4]=jvj+12; 
(*f[567])( );     /*QUADRI11(117,V6,218,jvj+11,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[196])( );     /*PLUF0(jvj+10,jvj+12,jvj+13)*/
l12:x[jvj+50]=t[x[jvj+50]];
l10:if((x[jvj+50]>0)) goto l11;
V14=0;
pile[v[22]]=V14; pile[WZ1]=1488; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(V14,1488,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=510; pile[WZ2]=J; 
(*f[43])( );     /*CHGC2(jvj+15,510,J)*/
pile[v[22]]=V8; pile[WZ1]=J; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V8,J,41,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V74,40,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=V15; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V76,V15,41,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V77,41,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=jvj+15; pile[WZ1]=763; pile[WZ2]=jvj+13; 
(*f[34])( );     /*CHGC0(jvj+15,763,jvj+13)*/
pile[v[22]]=V79; pile[WZ1]=jvj+13; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V79,jvj+13,44,V80)*/
V80=pile[WZ3]; 
pile[v[22]]=V80; 
(*f[40])( );     /*SLG0(V80)*/
pile[v[22]]=jvj+16; pile[WZ1]=1521; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+16,1521,jvj+15)*/
l19:x[jvj+17]=t[x[jvj+17]];
goto l16;
l11:x[jvj+11]=s[x[jvj+50]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+50];
pile[v[22]]=jvj+11; pile[WZ1]=MW; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(jvj+11,MW,V12)*/
V12=pile[WZ2]; 
ZZ=V12;
V6=incon;
if((J!=3)) goto l9;
pile[v[22]]=V15; pile[WZ1]=ZZ; 
(*f[913])( );if(v[102]) goto l9;     /*PMILLE0(V15,ZZ,V7)*/
V7=pile[WZ2]; 
V6=V7;
goto l40;
l13:pile[v[22]]=0; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(0,37,V8)*/
V8=pile[WZ2]; 
l14:pile[v[22]]=jvj+14; pile[WZ1]=MV; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(jvj+14,MV,V15)*/
V15=pile[WZ2]; 
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+10]=d[126];z[jvj+10]=0;
x[jvj+50]=x[jvj+45] ;z[jvj+50]=z[jvj+45];
goto l10;
l15:if(x[jvj+7]!=incon) goto l7;
goto l36;
l17:J=s[x[jvj+17]];
V10=TX%J;
if((V10!=0)) goto l19;
V8=incon;
if((J==3)) goto l13;
V8=0;
goto l14;
l21:x[jvj+20]=s[x[jvj+18]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+18];
pile[v[22]]=jvj+20; pile[WZ1]=MW; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(jvj+20,MW,V35)*/
V35=pile[WZ2]; 
CC=V35;
if((CC<=0)) goto l22;
pile[WZ1]=MV; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(jvj+20,MV,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=CC; 
(*f[913])( );if(v[102]) goto l22;     /*PMILLE0(V36,CC,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=CC; pile[WZ1]=405; pile[WZ2]=jvj+46; 
(*f[46])( );     /*TRI0(CC,405,jvj+46)*/
pile[v[22]]=117; pile[WZ1]=V27; pile[WZ2]=218; pile[WZ3]=jvj+20; pile[WZ4]=jvj+46; pile[WZ5]=jvj+21; 
(*f[725])( );     /*QUADRI14(117,V27,218,jvj+20,jvj+46,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[196])( );     /*PLUF0(jvj+19,jvj+21,jvj+22)*/
l22:x[jvj+18]=t[x[jvj+18]];
l20:if((x[jvj+18]>0)) goto l21;
x[jvj+28]=0 ;z[jvj+28]=0;
pile[v[22]]=1531; pile[WZ1]=1447; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1531,1447,jvj+23)*/
x[jvj+24]=d[172];z[jvj+24]=0;
l23:if((x[jvj+23]>0)) goto l24;
V42=0;
pile[v[22]]=V42; pile[WZ1]=1488; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(V42,1488,jvj+40)*/
pile[v[22]]=0; pile[WZ1]=33; 
(*f[38])( );     /*SPC0(0,33,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=jvj+40; pile[WZ1]=510; pile[WZ2]=5; 
(*f[43])( );     /*CHGC2(jvj+40,510,5)*/
pile[v[22]]=V83; pile[WZ1]=5; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V83,5,41,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=jvj+40; pile[WZ1]=1526; pile[WZ2]=jvj+22; 
(*f[34])( );     /*CHGC0(jvj+40,1526,jvj+22)*/
pile[v[22]]=V84; pile[WZ1]=jvj+22; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V84,jvj+22,44,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=jvj+40; pile[WZ1]=1531; pile[WZ2]=jvj+28; 
(*f[34])( );     /*CHGC0(jvj+40,1531,jvj+28)*/
pile[v[22]]=V85; pile[WZ1]=jvj+28; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V85,jvj+28,44,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; 
(*f[40])( );     /*SLG0(V86)*/
pile[v[22]]=jvj+16; pile[WZ1]=1521; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+16,1521,jvj+40)*/
goto l36;
l24:x[jvj+25]=s[x[jvj+23]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+23];
pile[v[22]]=jvj+25; pile[WZ1]=MW; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(jvj+25,MW,V39)*/
V39=pile[WZ2]; 
ZA=V39;
pile[v[22]]=218; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(218,jvj+25,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=MV; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(jvj+26,MV,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=ZA; 
(*f[913])( );if(v[102]) goto l25;     /*PMILLE0(V40,ZA,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=ZA; pile[WZ1]=405; pile[WZ2]=jvj+47; 
(*f[46])( );     /*TRI0(ZA,405,jvj+47)*/
pile[v[22]]=117; pile[WZ1]=V29; pile[WZ2]=218; pile[WZ3]=jvj+25; pile[WZ4]=jvj+47; pile[WZ5]=jvj+27; 
(*f[725])( );     /*QUADRI14(117,V29,218,jvj+25,jvj+47,jvj+27)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[196])( );     /*PLUF0(jvj+24,jvj+27,jvj+28)*/
l25:x[jvj+23]=t[x[jvj+23]];
goto l23;
l27:x[jvj+30]=s[x[jvj+51]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+51];
pile[v[22]]=jvj+30; pile[WZ1]=MW; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(jvj+30,MW,V56)*/
V56=pile[WZ2]; 
NS=V56;
if((NS<=0)) goto l28;
pile[WZ1]=MV; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(jvj+30,MV,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=NS; 
(*f[913])( );if(v[102]) goto l28;     /*PMILLE0(V57,NS,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=NS; pile[WZ1]=405; pile[WZ2]=jvj+48; 
(*f[46])( );     /*TRI0(NS,405,jvj+48)*/
pile[v[22]]=117; pile[WZ1]=V49; pile[WZ2]=218; pile[WZ3]=jvj+30; pile[WZ4]=jvj+48; pile[WZ5]=jvj+31; 
(*f[725])( );     /*QUADRI14(117,V49,218,jvj+30,jvj+48,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[196])( );     /*PLUF0(jvj+29,jvj+31,jvj+32)*/
l28:x[jvj+51]=t[x[jvj+51]];
l26:if((x[jvj+51]>0)) goto l27;
x[jvj+38]=0 ;z[jvj+38]=0;
pile[v[22]]=1531; pile[WZ1]=1447; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1531,1447,jvj+33)*/
x[jvj+34]=d[172];z[jvj+34]=0;
l29:if((x[jvj+33]>0)) goto l30;
V63=0;
pile[v[22]]=V63; pile[WZ1]=1488; pile[WZ2]=jvj+39; 
(*f[46])( );     /*TRI0(V63,1488,jvj+39)*/
pile[v[22]]=0; pile[WZ1]=33; 
(*f[38])( );     /*SPC0(0,33,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=jvj+39; pile[WZ1]=510; pile[WZ2]=5; 
(*f[43])( );     /*CHGC2(jvj+39,510,5)*/
pile[v[22]]=V89; pile[WZ1]=5; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V89,5,41,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=jvj+39; pile[WZ1]=763; pile[WZ2]=jvj+32; 
(*f[34])( );     /*CHGC0(jvj+39,763,jvj+32)*/
pile[v[22]]=V90; pile[WZ1]=jvj+32; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V90,jvj+32,44,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=jvj+39; pile[WZ1]=1531; pile[WZ2]=jvj+38; 
(*f[34])( );     /*CHGC0(jvj+39,1531,jvj+38)*/
pile[v[22]]=V91; pile[WZ1]=jvj+38; pile[WZ2]=44; 
(*f[566])( );     /*XQ0(V91,jvj+38,44,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; 
(*f[40])( );     /*SLG0(V92)*/
pile[v[22]]=jvj+16; pile[WZ1]=1531; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+16,1531,jvj+39)*/
goto l36;
l30:x[jvj+35]=s[x[jvj+33]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+33];
pile[v[22]]=jvj+35; pile[WZ1]=MW; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(jvj+35,MW,V60)*/
V60=pile[WZ2]; 
V46=V60;
pile[v[22]]=218; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(218,jvj+35,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=MV; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(jvj+36,MV,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=V46; 
(*f[913])( );if(v[102]) goto l31;     /*PMILLE0(V61,V46,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V46; pile[WZ1]=405; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(V46,405,jvj+49)*/
pile[v[22]]=117; pile[WZ1]=V51; pile[WZ2]=218; pile[WZ3]=jvj+35; pile[WZ4]=jvj+49; pile[WZ5]=jvj+37; 
(*f[725])( );     /*QUADRI14(117,V51,218,jvj+35,jvj+49,jvj+37)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[196])( );     /*PLUF0(jvj+34,jvj+37,jvj+38)*/
l31:x[jvj+33]=t[x[jvj+33]];
goto l29;
l32:if((x[jvj+7]==187)) goto l33;
pile[v[22]]=1490; pile[WZ1]=MW; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(1490,MW,V53)*/
V53=pile[WZ2]; 
pile[WZ1]=MV; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(1490,MV,V54)*/
V54=pile[WZ2]; 
if((V53>=V54)) goto l36;
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+29]=d[172];z[jvj+29]=0;
x[jvj+51]=x[jvj+45] ;z[jvj+51]=z[jvj+45];
goto l26;
l33:V30=TX%5;
if((V30!=0)) goto l36;
pile[v[22]]=1528; pile[WZ1]=MW; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(1528,MW,V31)*/
V31=pile[WZ2]; 
pile[WZ1]=MV; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(1528,MV,V32)*/
V32=pile[WZ2]; 
if((V31>=V32)) goto l36;
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=1526; pile[WZ1]=1447; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1526,1447,jvj+18)*/
x[jvj+19]=d[172];z[jvj+19]=0;
goto l20;
l34:if((v[213]!=0)) goto l35;
pile[v[22]]=1516; pile[WZ1]=1447; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+41)*/
for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l38;
l35:pile[v[22]]=1514; pile[WZ1]=1447; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(1514,1447,jvj+42)*/
for(a=x[jvj+42];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l38;
pile[v[22]]=1515; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+43)*/
for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l38;
pile[v[22]]=1518; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1518,1447,jvj+44)*/
for(a=x[jvj+44];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l38;
goto l39;
l37:if(x[jvj+7]!=incon) goto l34;
goto l39;
l38:pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=V93; 
(*f[40])( );     /*SLG0(V93)*/
pile[v[22]]=jvj+16; pile[WZ1]=MV; pile[WZ2]=MW; pile[WZ3]=jvj+45; pile[WZ4]=jvj+7; pile[WZ5]=TX; 
(*f[1486])( );     /*LIVEILLB0(jvj+16,MV,MW,jvj+45,jvj+7,TX)*/
goto l39;
}
