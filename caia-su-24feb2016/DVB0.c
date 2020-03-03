#include "dx.h"
void DVB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V=0,V110=0,V16=0,V21=0,V11=0,V78=0,V80=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V79=0,V20=0,V34=0,V39=0,V29=0,V45=0,V89=0,V91=0,V94=0,V82=0,V83=0,V84=0,V85=0,V86=0,V87=0,V88=0,V90=0,V92=0,V93=0,V38=0,V53=0,V62=0,V49=0,V67=0,V101=0,V105=0,V107=0,V96=0,V97=0,V98=0,V99=0,V100=0,V102=0,V103=0,V104=0,V106=0,V61=0,V115=0,V116=0,V118=0;
int TL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=10475;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1642&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l47:pile[v[22]]=67; pile[WZ1]=173; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(67,173,jvj+7)*/
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(283,TL,jvj+10)*/
x[jvj+41]=x[jvj+10] ;z[jvj+41]=z[jvj+10];
l6:if((x[jvj+41]>0)) goto l7;
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(283,TL,jvj+34)*/
x[jvj+45]=x[jvj+34] ;z[jvj+45]=z[jvj+34];
l33:if((x[jvj+45]>0)) goto l34;
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(283,TL,jvj+37)*/
x[jvj+46]=x[jvj+37] ;z[jvj+46]=z[jvj+37];
l41:if((x[jvj+46]>0)) goto l42;
pile[v[22]]=173; pile[WZ1]=jvj+7; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(173,jvj+7,jvj+39)*/
if((x[jvj+39]==68)) goto l47;
l46:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+40]=t[x[jvj+40]];
l1:if((x[jvj+40]<=0)) goto l10;
x[jvj+2]=s[x[jvj+40]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+40];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V5!=V)) goto l2;
pile[v[22]]=158; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+2,jvj+3)*/
l4:pile[v[22]]=158; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,jvj+5,jvj+8)*/
if((x[jvj+8]!=23)) goto l10;
pile[v[22]]=176; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(176,jvj+2,jvj+4)*/
l10:V110=t[V110];
l8:if((V110>0)) goto l9;
x[jvj+41]=t[x[jvj+41]];
goto l6;
l3:pile[v[22]]=158; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+5,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=158; 
(*f[35])( );     /*CHGC1(jvj+2,158,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=173; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+7,173,68)*/
goto l4;
l5:pile[v[22]]=176; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(176,jvj+5,jvj+9)*/
pile[v[22]]=jvj+2; pile[WZ1]=176; 
(*f[35])( );     /*CHGC1(jvj+2,176,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=173; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+7,173,68)*/
goto l10;
l7:x[jvj+5]=s[x[jvj+41]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+41];
pile[v[22]]=305; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(305,jvj+5,jvj+11)*/
V110=x[jvj+11];
goto l8;
l9:V=s[V110];
x[jvj+40]=x[jvj+10] ;z[jvj+40]=z[jvj+10];
goto l1;
l12:x[jvj+42]=t[x[jvj+42]];
l11:if((x[jvj+42]<=0)) goto l37;
x[jvj+12]=s[x[jvj+42]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+42];
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+12,V16)*/
V16=pile[WZ2]; 
if((V16!=V11)) goto l12;
pile[v[22]]=158; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(158,jvj+13,jvj+15)*/
l17:pile[v[22]]=158; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(158,jvj+13,jvj+17)*/
pile[v[22]]=176; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(176,jvj+12,jvj+18)*/
if((x[jvj+17]==x[jvj+18])) goto l37;
V20=g[4];
if((V20<=0)) goto l37;
V21=vg[4];
if((V21!=0)) goto l13;
if((V20<3)) goto l15;
l13:pile[v[22]]=4; pile[WZ1]=10475; pile[WZ2]=0; pile[WZ3]=10; pile[WZ4]=jvj+13; pile[WZ5]=12; pile[v[22]+6]=jvj+12; pile[v[22]+7]=11; pile[v[22]+8]=V11; pile[v[22]+9]=jvj+14; 
(*f[318])( );     /*INTERP6(4,10475,0,10,jvj+13,12,jvj+12,11,V11,jvj+14)*/
if((x[jvj+14]==135)) goto l14;
l37:V115=t[V115];
l35:if((V115>0)) goto l36;
pile[v[22]]=376; pile[WZ1]=jvj+13; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(376,jvj+13,jvj+36)*/
V116=x[jvj+36];
l38:if((V116>0)) goto l39;
x[jvj+45]=t[x[jvj+45]];
goto l33;
l14:if((V20<4)) goto l15;
goto l37;
l15:V78=x[jvj+17];
V80=x[jvj+18];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=10475; 
(*f[98])( );     /*SRA3(135,V72,10475,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(41,2,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V74,125,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=V11; 
(*f[37])( );     /*SRA0(V75,V11,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V78; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(20,V78,V76,V77)*/
V77=pile[WZ3]; 
pile[WZ1]=V80; pile[WZ2]=V77; 
(*f[39])( );     /*SDX0(20,V80,V77,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; 
(*f[40])( );     /*SLG0(V79)*/
if((V20!=2)) goto l37;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l37;
l16:pile[v[22]]=176; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(176,jvj+12,jvj+16)*/
pile[v[22]]=jvj+13; pile[WZ1]=158; 
(*f[35])( );     /*CHGC1(jvj+13,158,jvj+16)*/
pile[v[22]]=jvj+7; pile[WZ1]=173; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+7,173,68)*/
goto l17;
l19:x[jvj+43]=t[x[jvj+43]];
l18:if((x[jvj+43]<=0)) goto l40;
x[jvj+19]=s[x[jvj+43]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+43];
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+19,V34)*/
V34=pile[WZ2]; 
if((V34!=V29)) goto l19;
pile[v[22]]=176; pile[WZ1]=jvj+13; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(176,jvj+13,jvj+22)*/
l25:pile[v[22]]=158; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(158,jvj+19,jvj+24)*/
pile[v[22]]=176; pile[WZ1]=jvj+13; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(176,jvj+13,jvj+25)*/
if((x[jvj+24]==x[jvj+25])) goto l40;
V38=g[5];
if((V38<=0)) goto l40;
V39=vg[5];
if((V39!=0)) goto l20;
if((V38<3)) goto l22;
l20:pile[v[22]]=5; pile[WZ1]=10475; pile[WZ2]=0; pile[WZ3]=28; pile[WZ4]=jvj+13; pile[WZ5]=29; pile[v[22]+6]=V29; pile[v[22]+7]=30; pile[v[22]+8]=jvj+19; pile[v[22]+9]=(-662); pile[v[22]+10]=TL; pile[v[22]+11]=jvj+20; 
(*f[1830])( );     /*INTERP23(5,10475,0,28,jvj+13,29,V29,30,jvj+19,(-662),TL,jvj+20)*/
if((x[jvj+20]==135)) goto l21;
l40:V116=t[V116];
goto l38;
l21:if((V38<4)) goto l22;
goto l40;
l22:pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+13,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(583,TL,jvj+21)*/
V89=x[jvj+25];
V91=x[jvj+24];
V94=x[jvj+21];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V82; pile[WZ2]=10475; 
(*f[98])( );     /*SRA3(135,V82,10475,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(41,3,V83,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V84,125,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=V45; 
(*f[37])( );     /*SRA0(V85,V45,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=V29; 
(*f[37])( );     /*SRA0(V86,V29,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V89; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V89,V87,V88)*/
V88=pile[WZ3]; 
pile[WZ1]=V91; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V91,V88,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V90,(-740),V92)*/
V92=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=V92; 
(*f[39])( );     /*SDX0(20,V94,V92,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; 
(*f[40])( );     /*SLG0(V93)*/
l23:if((V38!=2)) goto l40;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l40;
l24:pile[v[22]]=158; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(158,jvj+19,jvj+23)*/
pile[v[22]]=jvj+13; pile[WZ1]=176; 
(*f[35])( );     /*CHGC1(jvj+13,176,jvj+23)*/
pile[v[22]]=jvj+7; pile[WZ1]=173; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+7,173,68)*/
goto l25;
l27:x[jvj+44]=t[x[jvj+44]];
l26:if((x[jvj+44]<=0)) goto l45;
x[jvj+26]=s[x[jvj+44]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+44];
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+26,V53)*/
V53=pile[WZ2]; 
if((V53!=V49)) goto l27;
pile[v[22]]=158; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(158,jvj+27,jvj+30)*/
pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(158,jvj+26,jvj+31)*/
if((x[jvj+30]==x[jvj+31])) goto l32;
pile[v[22]]=10475; pile[WZ1]=V49; pile[WZ2]=(-4383); pile[WZ3]=jvj+30; pile[WZ4]=jvj+31; 
(*f[1825])( );     /*FAUTE8(10475,V49,(-4383),jvj+30,jvj+31)*/
l32:pile[v[22]]=176; pile[WZ1]=jvj+27; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(176,jvj+27,jvj+32)*/
pile[WZ1]=jvj+26; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(176,jvj+26,jvj+33)*/
if((x[jvj+32]==x[jvj+33])) goto l45;
V61=g[3];
if((V61<=0)) goto l45;
V62=vg[3];
if((V62!=0)) goto l28;
if((V61<3)) goto l30;
l28:pile[v[22]]=3; pile[WZ1]=10475; pile[WZ2]=0; pile[WZ3]=(-662); pile[WZ4]=TL; pile[WZ5]=49; pile[v[22]+6]=V49; pile[v[22]+7]=48; pile[v[22]+8]=jvj+27; pile[v[22]+9]=50; pile[v[22]+10]=jvj+26; pile[v[22]+11]=jvj+28; 
(*f[1830])( );     /*INTERP23(3,10475,0,(-662),TL,49,V49,48,jvj+27,50,jvj+26,jvj+28)*/
if((x[jvj+28]==135)) goto l29;
l45:V118=t[V118];
l43:if((V118>0)) goto l44;
x[jvj+46]=t[x[jvj+46]];
goto l41;
l29:if((V61<4)) goto l30;
goto l45;
l30:pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+27,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(583,TL,jvj+29)*/
V101=x[jvj+29];
V105=x[jvj+32];
V107=x[jvj+33];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V96; pile[WZ2]=10475; 
(*f[98])( );     /*SRA3(135,V96,10475,V97)*/
V97=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,1,V97,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V98,125,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V101; pile[WZ2]=V99; 
(*f[39])( );     /*SDX0(20,V101,V99,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; pile[WZ1]=V67; 
(*f[37])( );     /*SRA0(V100,V67,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=V49; 
(*f[37])( );     /*SRA0(V102,V49,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V105; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(20,V105,V103,V104)*/
V104=pile[WZ3]; 
pile[WZ1]=V107; pile[WZ2]=V104; 
(*f[39])( );     /*SDX0(20,V107,V104,V106)*/
V106=pile[WZ3]; 
pile[v[22]]=V106; 
(*f[40])( );     /*SLG0(V106)*/
l31:if((V61!=2)) goto l45;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l45;
l34:x[jvj+13]=s[x[jvj+45]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+45];
pile[v[22]]=375; pile[WZ1]=jvj+13; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(375,jvj+13,jvj+35)*/
V115=x[jvj+35];
goto l35;
l36:V11=s[V115];
x[jvj+42]=x[jvj+34] ;z[jvj+42]=z[jvj+34];
goto l11;
l39:V29=s[V116];
x[jvj+43]=x[jvj+34] ;z[jvj+43]=z[jvj+34];
goto l18;
l42:x[jvj+27]=s[x[jvj+46]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+46];
pile[v[22]]=305; pile[WZ1]=jvj+27; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(305,jvj+27,jvj+38)*/
V118=x[jvj+38];
goto l43;
l44:V49=s[V118];
x[jvj+44]=x[jvj+37] ;z[jvj+44]=z[jvj+37];
goto l26;
}
