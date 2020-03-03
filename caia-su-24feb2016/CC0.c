#include "dx.h"
void CC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V=0,V58=0,V18=0,V23=0,S=0,V33=0,V9=0,V47=0,V46=0,V55=0,V54=0;
int BL,TL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=52;
x[jvj+1]=10087;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1105&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; TL=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=TL; pile[WZ1]=323; pile[WZ2]=2000; 
(*f[43])( );     /*CHGC2(TL,323,2000)*/
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+49]=w[177][8];
l9:if((x[jvj+49]>0)) goto l10;
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(565,BL,jvj+12)*/
l12:if((x[jvj+12]>0)) goto l13;
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(565,BL,jvj+26)*/
l19:if((x[jvj+26]>0)) goto l20;
pile[v[22]]=TL; pile[WZ1]=292; pile[WZ2]=jvj+11; 
(*f[34])( );     /*CHGC0(TL,292,jvj+11)*/
pile[v[22]]=BL; pile[WZ1]=TL; 
(*f[1422])( );     /*CBA0(BL,TL,jvj+11)*/
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=256; pile[WZ1]=39; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(256,39,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
x[jvj+47]=x[jvj+8] ;z[jvj+47]=z[jvj+8];
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(357,TL,jvj+30)*/
l22:if((x[jvj+30]>0)) goto l23;
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(357,TL,jvj+32)*/
l24:if((x[jvj+32]>0)) goto l25;
pile[v[22]]=TL; 
(*f[1425])( );     /*DVZ0(TL)*/
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(357,TL,jvj+34)*/
l26:if((x[jvj+34]>0)) goto l27;
pile[v[22]]=TL; 
(*f[1427])( );     /*ENV0(TL)*/
pile[WZ1]=jvj+47; 
(*f[1428])( );     /*ISK0(TL,jvj+47)*/
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(583,TL,jvj+46)*/
if(x[jvj+46]==10547||x[jvj+46]==10169) goto l36;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(130,TL,V47)*/
V47=pile[WZ2]; 
x[jvj+36]=vo[20];z[jvj+36]=vz[20];
pile[v[22]]=209; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(209,jvj+36,jvj+37)*/
l28:if((x[jvj+37]<=0)) goto l30;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=117; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+38,V46)*/
V46=pile[WZ2]; 
if((V46!=V47)) goto l29;
pile[v[22]]=109; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(109,jvj+38,jvj+39)*/
if((x[jvj+39]==x[jvj+46])) goto l36;
l29:x[jvj+37]=t[x[jvj+37]];
goto l28;
l2:x[jvj+3]=s[x[jvj+48]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+48];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+3,V7)*/
V7=pile[WZ2]; 
if((V7!=V)) goto l3;
pile[v[22]]=158; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+3,jvj+4)*/
l8:V58=t[V58];
l6:if((V58>0)) goto l7;
x[jvj+5]=t[x[jvj+5]];
goto l4;
l3:x[jvj+48]=t[x[jvj+48]];
l1:if((x[jvj+48]>0)) goto l2;
pile[v[22]]=jvj+8; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+8,V)*/
goto l8;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=TL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+6,TL,jvj+7)*/
V58=x[jvj+7];
goto l6;
l7:V=s[V58];
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(283,TL,jvj+2)*/
x[jvj+48]=x[jvj+2] ;z[jvj+48]=z[jvj+2];
goto l1;
l10:x[jvj+9]=s[x[jvj+49]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+49];
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l11;
pile[v[22]]=190; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(190,jvj+9,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=V18; 
(*f[331])( );     /*PLUE3(jvj+11,V18)*/
l11:x[jvj+49]=t[x[jvj+49]];
goto l9;
l13:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1421])( );     /*Z237Z0(jvj+13,jvj+14)*/
x[jvj+50]=x[jvj+14] ;z[jvj+50]=z[jvj+14];
l14:if((x[jvj+50]>0)) goto l15;
x[jvj+12]=t[x[jvj+12]];
goto l12;
l15:x[jvj+15]=s[x[jvj+50]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+50];
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=531)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+15,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+17,V23)*/
V23=pile[WZ2]; 
S=V23;
pile[v[22]]=jvj+11; pile[WZ1]=S; 
(*f[331])( );     /*PLUE3(jvj+11,S)*/
l16:x[jvj+50]=t[x[jvj+50]];
goto l14;
l20:x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+18; 
(*f[378])( );     /*CPI0(jvj+27,jvj+18)*/
x[jvj+25]=0 ;z[jvj+25]=0;
pile[v[22]]=100; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=42)) goto l21;
pile[v[22]]=105; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(105,jvj+18,jvj+20)*/
x[jvj+51]=x[jvj+20] ;z[jvj+51]=z[jvj+20];
l17:if((x[jvj+51]<=0)) goto l21;
x[jvj+21]=s[x[jvj+51]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+51];
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=82)) goto l18;
pile[v[22]]=436; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,jvj+21,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+24,V33)*/
V33=pile[WZ2]; 
V9=V33;
pile[v[22]]=jvj+25; pile[WZ1]=V9; 
(*f[331])( );     /*PLUE3(jvj+25,V9)*/
l18:x[jvj+51]=t[x[jvj+51]];
goto l17;
l21:pile[v[22]]=jvj+18; pile[WZ1]=67; pile[WZ2]=jvj+28; pile[WZ3]=jvj+29; 
(*f[748])( );     /*USMC0(jvj+18,67,jvj+28,jvj+29)*/
pile[WZ1]=188; 
(*f[34])( );     /*CHGC0(jvj+18,188,jvj+28)*/
pile[v[22]]=TL; pile[WZ1]=357; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(TL,357,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=208; pile[WZ2]=jvj+27; 
(*f[35])( );     /*CHGC1(jvj+18,208,jvj+27)*/
pile[WZ1]=263; pile[WZ2]=jvj+25; 
(*f[34])( );     /*CHGC0(jvj+18,263,jvj+25)*/
pile[WZ1]=535; pile[WZ2]=jvj+29; 
(*f[34])( );     /*CHGC0(jvj+18,535,jvj+29)*/
x[jvj+26]=t[x[jvj+26]];
goto l19;
l23:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=TL; pile[WZ1]=BL; pile[WZ2]=jvj+31; 
(*f[1423])( );     /*CA0(TL,BL,jvj+31)*/
x[jvj+30]=t[x[jvj+30]];
goto l22;
l25:x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=jvj+33; 
(*f[1424])( );     /*VZ0(jvj+33)*/
x[jvj+32]=t[x[jvj+32]];
goto l24;
l27:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=jvj+35; pile[WZ1]=TL; pile[WZ2]=TL; pile[WZ3]=357; pile[WZ4]=jvj+35; 
(*f[1426])( );     /*DMP0(jvj+35,TL,TL,357,jvj+35)*/
x[jvj+34]=t[x[jvj+34]];
goto l26;
l30:pile[v[22]]=130; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,TL,V55)*/
V55=pile[WZ2]; 
x[jvj+40]=vo[20];z[jvj+40]=vz[20];
pile[v[22]]=209; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(209,jvj+40,jvj+41)*/
l31:if((x[jvj+41]<=0)) goto l35;
x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=252; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(252,jvj+42,jvj+43)*/
x[jvj+52]=x[jvj+43] ;z[jvj+52]=z[jvj+43];
l32:if((x[jvj+52]>0)) goto l33;
x[jvj+41]=t[x[jvj+41]];
goto l31;
l33:x[jvj+44]=s[x[jvj+52]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+52];
pile[v[22]]=117; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(117,jvj+44,V54)*/
V54=pile[WZ2]; 
if((V54!=V55)) goto l34;
pile[v[22]]=109; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(109,jvj+44,jvj+45)*/
if((x[jvj+45]==x[jvj+46])) goto l36;
l34:x[jvj+52]=t[x[jvj+52]];
goto l32;
l35:pile[v[22]]=TL; 
(*f[1070])( );     /*CE0(TL)*/
l36:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
