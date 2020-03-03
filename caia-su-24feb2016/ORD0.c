#include "dx.h"
void ORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V21=0,W=0,V33=0,VV=0,V15=0,V=0,V40=0,WW=0,V61=0,VB=0,V51=0,VA=0,V2=0,V122=0,V124=0,V126=0,V118=0,V119=0,V120=0,V121=0,V123=0,V125=0,V1=0,V77=0,V69=0,V138=0,V84=0,V85=0,V65=0,V141=0,V99=0,V142=0,V102=0,V90=0,V109=0,V110=0,B=0,V147=0,V115=0,V127=0,V95=0,V148=0;
int R,XN,CB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=87;
x[jvj+1]=10676;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1994&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; XN=pile[v[22]+1]; CB=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; 
(*f[2088])( );     /*ORC0(R)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=237; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(237,R,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,R,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
x[jvj+12]=d[10];z[jvj+12]=0;
l9:if((x[jvj+12]>0)) goto l10;
x[jvj+24]=x[jvj+3] ;z[jvj+24]=z[jvj+3];
x[jvj+21]=d[10];z[jvj+21]=0;
l17:if((x[jvj+21]>0)) goto l18;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,R,jvj+25)*/
pile[v[22]]=237; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(237,R,jvj+26)*/
l21:if((x[jvj+25]>0)) goto l22;
V1=g[130];
if((V1<=0)) goto l57;
V2=vg[130];
if((V2!=0)) goto l27;
if((V1<3)) goto l29;
l27:pile[v[22]]=130; pile[WZ1]=10676; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=R; pile[WZ5]=(-3063); pile[v[22]+6]=jvj+24; pile[v[22]+7]=jvj+36; 
(*f[943])( );     /*INTERP10(130,10676,0,(-601),R,(-3063),jvj+24,jvj+36)*/
if((x[jvj+36]==135)) goto l28;
l57:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(107,R,jvj+70)*/
l58:if((x[jvj+70]>0)) goto l59;
x[jvj+74]=d[10];z[jvj+74]=0;
l61:if((x[jvj+74]>0)) goto l62;
pile[v[22]]=R; 
(*f[2090])( );     /*ORT0(R)*/
l67:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:V10=s[x[jvj+2]];
pile[v[22]]=jvj+3; pile[WZ1]=V10; 
(*f[331])( );     /*PLUE3(jvj+3,V10)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==25)) goto l7;
if((x[jvj+7]!=44)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+5,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+11,V33)*/
V33=pile[WZ2]; 
VV=V33;
pile[v[22]]=jvj+3; pile[WZ1]=VV; 
(*f[331])( );     /*PLUE3(jvj+3,VV)*/
l5:x[jvj+4]=t[x[jvj+4]];
goto l3;
l7:x[jvj+8]=d[20];z[jvj+8]=0;
l6:if((x[jvj+8]<=0)) goto l5;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+9,jvj+5,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+10,V21)*/
V21=pile[WZ2]; 
W=V21;
pile[v[22]]=jvj+3; pile[WZ1]=W; 
(*f[331])( );     /*PLUE3(jvj+3,W)*/
l8:x[jvj+8]=t[x[jvj+8]];
goto l6;
l10:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(jvj+13,R,jvj+14)*/
x[jvj+78]=x[jvj+14] ;z[jvj+78]=z[jvj+14];
l11:if((x[jvj+78]>0)) goto l12;
x[jvj+12]=t[x[jvj+12]];
goto l9;
l12:x[jvj+15]=s[x[jvj+78]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+78];
pile[v[22]]=436; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(436,jvj+15,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+16,V15)*/
V15=pile[WZ2]; 
V=V15;
pile[v[22]]=jvj+3; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+3,V)*/
l14:pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+15,jvj+17)*/
if((x[jvj+17]!=39)) goto l13;
pile[v[22]]=113; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(113,jvj+15,jvj+18)*/
x[jvj+79]=x[jvj+18] ;z[jvj+79]=z[jvj+18];
l15:if((x[jvj+79]<=0)) goto l13;
x[jvj+19]=s[x[jvj+79]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+79];
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+19,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+20,V40)*/
V40=pile[WZ2]; 
WW=V40;
pile[v[22]]=jvj+3; pile[WZ1]=WW; 
(*f[331])( );     /*PLUE3(jvj+3,WW)*/
l16:x[jvj+79]=t[x[jvj+79]];
goto l15;
l13:x[jvj+78]=t[x[jvj+78]];
goto l11;
l18:x[jvj+13]=s[x[jvj+21]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+21];
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(jvj+13,R,jvj+22)*/
x[jvj+80]=x[jvj+22] ;z[jvj+80]=z[jvj+22];
l19:if((x[jvj+80]>0)) goto l20;
x[jvj+21]=t[x[jvj+21]];
goto l17;
l20:x[jvj+23]=s[x[jvj+80]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+80];
pile[v[22]]=jvj+23; pile[WZ1]=R; pile[WZ2]=jvj+23; pile[WZ3]=jvj+24; 
(*f[2086])( );     /*ORA0(jvj+23,R,jvj+23,jvj+24)*/
x[jvj+80]=t[x[jvj+80]];
goto l19;
l22:x[jvj+27]=s[x[jvj+25]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+25];
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=179)) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+27,jvj+30)*/
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=734)) goto l23;
pile[v[22]]=436; pile[WZ1]=jvj+27; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(436,jvj+27,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+33,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+34)*/
VB=V61;
x[jvj+81]=x[jvj+34] ;z[jvj+81]=z[jvj+34];
l24:if((x[jvj+81]<=0)) goto l23;
x[jvj+35]=s[x[jvj+81]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+81];
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+35,V51)*/
V51=pile[WZ2]; 
VA=V51;
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==VA) goto l26;
l25:x[jvj+81]=t[x[jvj+81]];
goto l24;
l23:x[jvj+25]=t[x[jvj+25]];
goto l21;
l26:pile[v[22]]=R; pile[WZ1]=jvj+27; pile[WZ2]=VB; pile[WZ3]=VA; pile[WZ4]=jvj+30; 
(*f[2087])( );     /*ORI0(R,jvj+27,VB,VA,jvj+30)*/
goto l25;
l28:if((V1<4)) goto l29;
goto l57;
l29:V122=x[R];
V124=x[R];
V126=x[jvj+24];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V118; pile[WZ2]=10676; 
(*f[98])( );     /*SRA3(135,V118,10676,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=V119; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V119,125,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V122; pile[WZ2]=V120; 
(*f[39])( );     /*SDX0(41,V122,V120,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V124; pile[WZ2]=V121; 
(*f[39])( );     /*SDX0(20,V124,V121,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V126; pile[WZ2]=V123; 
(*f[39])( );     /*SDX0(23,V126,V123,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; 
(*f[40])( );     /*SLG0(V125)*/
if((V1!=2)) goto l57;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l57;
l30:x[jvj+47]=incon;
if((x[jvj+49]==54)) goto l31;
x[jvj+47]=x[jvj+24] ;z[jvj+47]=z[jvj+24];
l68:pile[v[22]]=XN; pile[WZ1]=498; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(XN,498,jvj+48)*/
pile[v[22]]=20; pile[WZ1]=jvj+37; pile[WZ2]=jvj+46; 
(*f[409])( );     /*TRI14(20,jvj+37,jvj+46)*/
pile[v[22]]=jvj+37; pile[WZ1]=237; pile[WZ2]=jvj+47; 
(*f[34])( );     /*CHGC0(jvj+37,237,jvj+47)*/
pile[WZ1]=428; pile[WZ2]=jvj+48; 
(*f[35])( );     /*CHGC1(jvj+37,428,jvj+48)*/
pile[WZ1]=jvj+48; pile[WZ2]=CB; 
(*f[1994])( );     /*ORD0(jvj+37,jvj+48,CB)*/
pile[v[22]]=jvj+48; pile[WZ1]=250; pile[WZ2]=jvj+37; pile[WZ3]=jvj+46; pile[WZ4]=jvj+49; pile[WZ5]=68; 
(*f[1995])( );     /*ORE0(jvj+48,250,jvj+37,jvj+46,jvj+49,68)*/
pile[v[22]]=159; pile[WZ1]=jvj+37; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(159,jvj+37,jvj+43)*/
x[jvj+83]=x[jvj+43] ;z[jvj+83]=z[jvj+43];
l37:if((x[jvj+83]>0)) goto l38;
pile[v[22]]=251; pile[WZ1]=jvj+37; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(251,jvj+37,jvj+50)*/
V141=x[jvj+50];
l40:if((V141<=0)) goto l60;
V65=s[V141];
pile[v[22]]=R; pile[WZ1]=251; pile[WZ2]=V65; 
(*f[735])( );     /*PLUSC4(R,251,V65)*/
V141=t[V141];
goto l40;
l31:x[jvj+40]=0 ;z[jvj+40]=0;
pile[v[22]]=436; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(436,jvj+37,jvj+39)*/
pile[v[22]]=140; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+39,V77)*/
V77=pile[WZ2]; 
V138=x[jvj+24];
l32:if((V138<=0)) goto l34;
V69=s[V138];
if((V69==V77)) goto l33;
pile[v[22]]=jvj+40; pile[WZ1]=V69; 
(*f[331])( );     /*PLUE3(jvj+40,V69)*/
l33:V138=t[V138];
goto l32;
l34:x[jvj+47]=x[jvj+40] ;z[jvj+47]=z[jvj+40];
goto l68;
l36:x[jvj+82]=t[x[jvj+82]];
l35:if((x[jvj+82]<=0)) goto l39;
x[jvj+42]=s[x[jvj+82]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+82];
pile[v[22]]=110; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(110,jvj+42,V84)*/
V84=pile[WZ2]; 
if((V85!=V84)) goto l36;
pile[v[22]]=R; pile[WZ1]=V85; pile[WZ2]=333; pile[WZ3]=jvj+37; 
(*f[2089])( );     /*ORZ0(R,V85,333,jvj+37)*/
l39:x[jvj+83]=t[x[jvj+83]];
goto l37;
l38:x[jvj+44]=s[x[jvj+83]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+83];
pile[v[22]]=333; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(333,jvj+44,jvj+45)*/
if((x[jvj+45]==0)) goto l39;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(110,jvj+44,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(159,R,jvj+41)*/
x[jvj+82]=x[jvj+41] ;z[jvj+82]=z[jvj+41];
goto l35;
l42:V99=s[V142];
if((V99==V90)) goto l43;
pile[v[22]]=jvj+53; pile[WZ1]=V99; 
(*f[331])( );     /*PLUE3(jvj+53,V99)*/
l43:V142=t[V142];
l41:if((V142>0)) goto l42;
x[jvj+67]=x[jvj+53] ;z[jvj+67]=z[jvj+53];
l69:pile[v[22]]=XN; pile[WZ1]=498; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(XN,498,jvj+64)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; 
(*f[1652])( );     /*ORB0(jvj+67,jvj+68,jvj+64)*/
pile[v[22]]=jvj+51; pile[WZ1]=428; 
(*f[35])( );     /*CHGC1(jvj+51,428,jvj+64)*/
x[jvj+85]=x[jvj+68] ;z[jvj+85]=z[jvj+68];
l47:if((x[jvj+85]>0)) goto l48;
x[jvj+61]=d[108];z[jvj+61]=0;
l52:if((x[jvj+61]>0)) goto l53;
pile[v[22]]=251; pile[WZ1]=jvj+51; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(251,jvj+51,jvj+69)*/
V148=x[jvj+69];
l56:if((V148<=0)) goto l65;
V95=s[V148];
pile[v[22]]=R; pile[WZ1]=251; pile[WZ2]=V95; 
(*f[735])( );     /*PLUSC4(R,251,V95)*/
V148=t[V148];
goto l56;
l44:x[jvj+67]=x[jvj+24] ;z[jvj+67]=z[jvj+24];
goto l69;
l46:x[jvj+84]=t[x[jvj+84]];
l45:if((x[jvj+84]<=0)) goto l51;
x[jvj+56]=s[x[jvj+84]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+84];
pile[v[22]]=110; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(110,jvj+56,V109)*/
V109=pile[WZ2]; 
if((V110!=V109)) goto l46;
pile[v[22]]=R; pile[WZ1]=V110; pile[WZ2]=333; pile[WZ3]=jvj+51; 
(*f[2089])( );     /*ORZ0(R,V110,333,jvj+51)*/
l51:x[jvj+86]=t[x[jvj+86]];
l49:if((x[jvj+86]>0)) goto l50;
x[jvj+85]=t[x[jvj+85]];
goto l47;
l48:x[jvj+57]=s[x[jvj+85]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+85];
pile[v[22]]=159; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(159,jvj+57,jvj+58)*/
x[jvj+86]=x[jvj+58] ;z[jvj+86]=z[jvj+58];
goto l49;
l50:x[jvj+59]=s[x[jvj+86]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+86];
pile[v[22]]=333; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(333,jvj+59,jvj+60)*/
if((x[jvj+60]==0)) goto l51;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(110,jvj+59,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=R; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(159,R,jvj+55)*/
x[jvj+84]=x[jvj+55] ;z[jvj+84]=z[jvj+55];
goto l45;
l53:x[jvj+62]=s[x[jvj+61]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+61];
pile[v[22]]=122; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(122,jvj+62,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(jvj+63,jvj+64,jvj+65)*/
pile[v[22]]=144; pile[WZ1]=jvj+62; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(144,jvj+62,jvj+66)*/
V147=x[jvj+65];
l55:if((V147<=0)) goto l54;
B=s[V147];
V115=B;
V127=B;
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=V115; 
(*f[134])( );     /*OTA0(jvj+63,jvj+64,V115)*/
pile[v[22]]=V127; pile[WZ1]=jvj+66; pile[WZ2]=jvj+64; 
(*f[235])( );     /*PLUSC2(V127,jvj+66,jvj+64)*/
V147=t[V147];
goto l55;
l54:x[jvj+61]=t[x[jvj+61]];
goto l52;
l59:x[jvj+37]=s[x[jvj+70]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+70];
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(100,jvj+37,jvj+71)*/
if((x[jvj+71]!=22)) goto l60;
pile[v[22]]=111; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+37,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+72,jvj+73)*/
x[jvj+49]=x[jvj+73] ;z[jvj+49]=z[jvj+73];
if(x[jvj+49]!=55&&x[jvj+49]!=48&&x[jvj+49]!=50&&x[jvj+49]!=54) goto l60;
pile[v[22]]=428; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(428,jvj+37,jvj+38)*/
l60:x[jvj+70]=t[x[jvj+70]];
goto l58;
l62:x[jvj+75]=s[x[jvj+74]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+74];
pile[v[22]]=jvj+75; pile[WZ1]=R; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(jvj+75,R,jvj+76)*/
x[jvj+87]=x[jvj+76] ;z[jvj+87]=z[jvj+76];
l63:if((x[jvj+87]>0)) goto l64;
x[jvj+74]=t[x[jvj+74]];
goto l61;
l64:x[jvj+51]=s[x[jvj+87]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+87];
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(100,jvj+51,jvj+77)*/
if((x[jvj+77]!=47)) goto l65;
pile[v[22]]=428; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(428,jvj+51,jvj+52)*/
l65:x[jvj+87]=t[x[jvj+87]];
goto l63;
l66:pile[v[22]]=184; pile[WZ1]=jvj+51; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(184,jvj+51,jvj+68)*/
x[jvj+67]=incon;
pile[v[22]]=436; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(436,jvj+51,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+54,V102)*/
V102=pile[WZ2]; 
V90=V102;
x[jvj+53]=0 ;z[jvj+53]=0;
V142=x[jvj+24];
goto l41;
}
