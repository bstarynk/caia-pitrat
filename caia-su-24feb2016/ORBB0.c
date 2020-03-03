#include "dx.h"
void ORBB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V75=0,V19=0,WW=0,N=0,V5=0,V44=0,V33=0,V49=0,BK=0,V35=0,V54=0,V69=0,V74=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V70=0,V72=0,V73=0,V48=0,V6=0,V3=0,V97=0,V106=0,V92=0;
int E,F,XN,CB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=69;
x[jvj+1]=10698;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1836&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; F=pile[v[22]+1]; XN=pile[v[22]+2]; CB=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+40]=x[E] ;z[jvj+40]=z[E];
l1:x[jvj+15]=0 ;z[jvj+15]=0;
x[jvj+59]=x[jvj+40] ;z[jvj+59]=z[jvj+40];
l11:if((x[jvj+59]>0)) goto l12;
x[jvj+17]=0 ;z[jvj+17]=0;
V6=incon;
x[jvj+60]=x[jvj+15] ;z[jvj+60]=z[jvj+15];
l16:if((x[jvj+60]>0)) goto l17;
if((x[jvj+17]>0)) goto l20;
if((x[jvj+40]==0)) goto l44;
x[jvj+65]=x[jvj+40] ;z[jvj+65]=z[jvj+40];
l33:if((x[jvj+65]<=0)) goto l44;
x[jvj+25]=s[x[jvj+65]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+65];
pile[v[22]]=263; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(263,jvj+25,jvj+26)*/
x[jvj+63]=x[jvj+40] ;z[jvj+63]=z[jvj+40];
l27:if((x[jvj+63]>0)) goto l28;
x[jvj+65]=t[x[jvj+65]];
goto l33;
l4:for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l3;
for(a=x[F];a>0;a=t[a]) if(s[a]==V) goto l3;
l13:x[jvj+59]=t[x[jvj+59]];
goto l11;
l6:x[jvj+57]=x[jvj+40] ;z[jvj+57]=z[jvj+40];
l5:if((x[jvj+57]<=0)) goto l10;
x[jvj+8]=s[x[jvj+57]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+57];
pile[v[22]]=263; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(263,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==WW) goto l13;
x[jvj+57]=t[x[jvj+57]];
goto l5;
l7:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+10)*/
x[jvj+58]=x[jvj+10] ;z[jvj+58]=z[jvj+10];
l8:if((x[jvj+58]>0)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+42)*/
l47:if((x[jvj+42]>0)) goto l55;
V3=134;
l14:if((V3==134)) goto l15;
goto l13;
l9:x[jvj+11]=s[x[jvj+58]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+58];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=225)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+11,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+14,V19)*/
V19=pile[WZ2]; 
WW=V19;
for(a=x[F];a>0;a=t[a]) if(s[a]==WW) goto l6;
goto l13;
l10:x[jvj+58]=t[x[jvj+58]];
goto l8;
l12:x[jvj+2]=s[x[jvj+59]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+59];
pile[v[22]]=263; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(263,jvj+2,jvj+3)*/
pile[v[22]]=253; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(253,jvj+2,jvj+4)*/
x[jvj+5]=vo[15];z[jvj+5]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(297,jvj+5,jvj+6)*/
pile[v[22]]=147; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(147,jvj+6,jvj+7)*/
V75=x[jvj+4];
l2:if((V75<=0)) goto l7;
V=s[V75];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V) goto l4;
l3:V75=t[V75];
goto l2;
l15:pile[v[22]]=jvj+15; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+2)*/
goto l13;
l17:x[jvj+16]=s[x[jvj+60]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+60];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1993])( );if(v[102]) goto l18;     /*ORKH0(jvj+15,jvj+16,N)*/
N=pile[WZ2]; 
V5=N;
if(V6==incon) goto l45;
if((V5==V6)) goto l19;
if((V5>=V6)) goto l45;
l18:x[jvj+60]=t[x[jvj+60]];
goto l16;
l20:x[jvj+61]=s[x[jvj+17]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+17];
x[jvj+18]=x[jvj+61] ;z[jvj+18]=z[jvj+61];
x[jvj+69]=x[jvj+15] ;z[jvj+69]=z[jvj+15];
x[jvj+41]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=42)) goto l23;
pile[v[22]]=105; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(105,jvj+18,jvj+20)*/
l21:if((x[jvj+20]<=0)) goto l23;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=82)) goto l22;
x[jvj+41]=68 ;z[jvj+41]=68;
l26:x[jvj+62]=x[jvj+69] ;z[jvj+62]=z[jvj+69];
l24:if((x[jvj+62]>0)) goto l25;
pile[v[22]]=XN; pile[WZ1]=CB; pile[WZ2]=jvj+18; pile[WZ3]=jvj+40; pile[WZ4]=208; pile[WZ5]=jvj+41; 
(*f[1995])( );     /*ORE0(XN,CB,jvj+18,jvj+40,208,jvj+41)*/
l44:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l22:x[jvj+20]=t[x[jvj+20]];
goto l21;
l23:x[jvj+41]=67 ;z[jvj+41]=67;
goto l26;
l25:x[jvj+24]=s[x[jvj+62]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+62];
pile[v[22]]=jvj+24; pile[WZ1]=237; pile[WZ2]=F; 
(*f[34])( );     /*CHGC0(jvj+24,237,F)*/
pile[WZ1]=XN; pile[WZ2]=CB; 
(*f[1994])( );     /*ORD0(jvj+24,XN,CB)*/
x[jvj+62]=t[x[jvj+62]];
goto l24;
l28:x[jvj+27]=s[x[jvj+63]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+63];
if((x[jvj+27]==x[jvj+25])) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+28)*/
x[jvj+64]=x[jvj+28] ;z[jvj+64]=z[jvj+28];
l30:if((x[jvj+64]<=0)) goto l29;
x[jvj+29]=s[x[jvj+64]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+64];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=225)) goto l31;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+29,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+32,V44)*/
V44=pile[WZ2]; 
V33=V44;
for(a=x[F];a>0;a=t[a]) if(s[a]==V33) goto l32;
l31:x[jvj+64]=t[x[jvj+64]];
goto l30;
l29:x[jvj+63]=t[x[jvj+63]];
goto l27;
l32:for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==V33) goto l34;
goto l31;
l34:x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+66]=x[jvj+40] ;z[jvj+66]=z[jvj+40];
l35:if((x[jvj+66]>0)) goto l36;
V48=g[417];
if((V48<=0)) goto l46;
V49=vg[417];
if((V49!=0)) goto l38;
if((V48<3)) goto l41;
l38:pile[v[22]]=417; pile[WZ1]=10698; pile[WZ2]=0; pile[WZ3]=31; pile[WZ4]=jvj+25; pile[WZ5]=jvj+35; 
(*f[232])( );     /*INTERP3(417,10698,0,31,jvj+25,jvj+35)*/
if((x[jvj+35]==135)) goto l40;
l46:x[jvj+40]=x[jvj+33] ;z[jvj+40]=z[jvj+33];
goto l1;
l36:x[jvj+34]=s[x[jvj+66]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+66];
if((x[jvj+34]==x[jvj+25])) goto l37;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+34)*/
l37:x[jvj+66]=t[x[jvj+66]];
goto l35;
l39:BK=s[x[jvj+37]];
V35=BK;
l42:V69=x[jvj+39];
V74=V35;
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=10698; 
(*f[98])( );     /*SRA3(135,V61,10698,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V62,125,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=7; pile[WZ1]=V63; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(7,V63,64,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=(-4415); 
(*f[37])( );     /*SRA0(V64,(-4415),V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=jvj+38; 
(*f[344])( );if(v[102]) goto l43;     /*XX1(V65,jvj+38,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V66,(-740),V67)*/
V67=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V69; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V69,V67,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V54; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(41,V54,V68,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V70,(-1318),V72)*/
V72=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V74; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(20,V74,V72,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; 
(*f[40])( );     /*SLG0(V73)*/
l43:if((V48!=2)) goto l46;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l46;
l40:if((V48<4)) goto l41;
goto l46;
l41:x[jvj+36]=vo[15];z[jvj+36]=vz[15];
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+36,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=208; pile[WZ1]=jvj+25; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(208,jvj+25,jvj+38)*/
pile[v[22]]=583; pile[WZ1]=jvj+36; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(583,jvj+36,jvj+39)*/
V35=incon;
pile[v[22]]=313; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(313,jvj+36,jvj+37)*/
if((x[jvj+37]>0)) goto l39;
V35=66;
goto l42;
l45:V6=V5;
x[jvj+17]=0 ;z[jvj+17]=0;
l19:pile[v[22]]=jvj+17; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+16)*/
goto l18;
l49:x[jvj+43]=s[x[jvj+67]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+67];
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+43,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=178)) goto l50;
pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+43,jvj+46)*/
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+46,V97)*/
V97=pile[WZ2]; 
if((V92!=V97)) goto l50;
pile[v[22]]=374; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(374,jvj+43,jvj+47)*/
if((x[jvj+47]==178)) goto l51;
l50:x[jvj+67]=t[x[jvj+67]];
l48:if((x[jvj+67]>0)) goto l49;
V3=135;
goto l14;
l53:pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+50)*/
x[jvj+67]=x[jvj+50] ;z[jvj+67]=z[jvj+50];
goto l48;
l54:x[jvj+42]=t[x[jvj+42]];
goto l47;
l55:x[jvj+51]=s[x[jvj+42]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+42];
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=178)) goto l54;
x[jvj+54]=x[jvj+51] ;z[jvj+54]=z[jvj+51];
pile[v[22]]=374; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(374,jvj+54,jvj+55)*/
if((x[jvj+55]!=178)) goto l54;
pile[v[22]]=102; pile[WZ1]=jvj+51; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,jvj+51,jvj+56)*/
pile[v[22]]=140; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(140,jvj+56,V106)*/
V106=pile[WZ2]; 
V92=V106;
x[jvj+68]=x[jvj+40] ;z[jvj+68]=z[jvj+40];
l52:if((x[jvj+68]<=0)) goto l54;
x[jvj+48]=s[x[jvj+68]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+68];
if((x[jvj+48]==x[jvj+2])) goto l51;
pile[v[22]]=263; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(263,jvj+48,jvj+49)*/
for(a=x[jvj+49];a>0;a=t[a]) if(s[a]==V92) goto l53;
l51:x[jvj+68]=t[x[jvj+68]];
goto l52;
}
