#include "dx.h"
void EDITOUTATOME2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V85=0,V84=0,V62=0,V38=0,V42=0,V41=0,V=0,V60=0,V63=0,I=0,V99=0,V100=0,MM=0,V30=0,V87=0,V90=0,V86=0,V88=0,V89=0,V80=0,V83=0,V79=0,V81=0,V82=0,V65=0,V70=0,V64=0,V66=0,V67=0,V68=0,V69=0,V78=0,V71=0,V73=0,V74=0,V75=0,V76=0,V77=0,V92=0,V50=0,V97=0,V91=0,V93=0,V94=0,V95=0,V96=0;
int NR,EA,A;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=10921;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==539&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; EA=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((NR==4)) goto l6;
if((NR==2)) goto l10;
if((NR==1)) goto l25;
if((NR!=3)) goto l39;
x[jvj+66]=x[EA] ;z[jvj+66]=z[EA];
l34:if((x[jvj+66]<=0)) goto l39;
x[jvj+10]=s[x[jvj+66]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+66];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,jvj+10,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+47,jvj+48)*/
if((x[jvj+48]!=69)) goto l35;
pile[v[22]]=108; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(108,jvj+47,jvj+49)*/
pile[v[22]]=184; pile[WZ1]=jvj+10; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(184,jvj+10,jvj+50)*/
V92=x[jvj+10];
x[jvj+67]=x[jvj+49] ;z[jvj+67]=z[jvj+49];
l36:if((x[jvj+67]<=0)) goto l35;
x[jvj+51]=s[x[jvj+67]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+67];
pile[v[22]]=103; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(103,jvj+51,jvj+52)*/
pile[v[22]]=140; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(140,jvj+52,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+51; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+51,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=576)) goto l37;
V=V50;
x[jvj+68]=x[jvj+50] ;z[jvj+68]=z[jvj+50];
l38:if((x[jvj+68]<=0)) goto l37;
x[jvj+9]=s[x[jvj+68]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+68];
pile[v[22]]=V; pile[WZ1]=jvj+9; pile[WZ2]=jvj+55; 
(*f[536])( );     /*ALLURV0(V,jvj+9,jvj+55)*/
V97=x[jvj+55];
pile[v[22]]=20; pile[WZ1]=V92; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V92,0,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V91; pile[WZ2]=576; 
(*f[42])( );     /*SRA1(135,V91,576,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V93,V,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V94,58,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V97; pile[WZ2]=V95; 
(*f[39])( );     /*SDX0(20,V97,V95,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
x[jvj+7]=d[25];z[jvj+7]=0;
l2:if((x[jvj+7]>0)) goto l3;
x[jvj+68]=t[x[jvj+68]];
goto l38;
l1:V41=V42;
l5:pile[v[22]]=V41; pile[WZ1]=I; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V41,I,41,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=V100; 
(*f[40])( );     /*SLG0(V100)*/
l4:x[jvj+7]=t[x[jvj+7]];
goto l2;
l3:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=V; pile[WZ2]=jvj+9; pile[WZ3]=jvj+10; pile[WZ4]=jvj+11; 
(*f[537])( );if(v[102]) goto l4;     /*TROUVAL0(jvj+8,V,jvj+9,jvj+10,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=22)) goto l4;
pile[v[22]]=103; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+11,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+13,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+11,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+14,jvj+15)*/
x[jvj+6]=x[jvj+15] ;z[jvj+6]=z[jvj+15];
pile[v[22]]=331; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(331,jvj+6,V63)*/
V63=pile[WZ2]; 
I=V60;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,0,jvj+8,V99)*/
V99=pile[WZ3]; 
pile[v[22]]=V99; pile[WZ1]=V63; 
(*f[38])( );     /*SPC0(V99,V63,V42)*/
V42=pile[WZ2]; 
V41=incon;
pile[v[22]]=332; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l1;     /*FNDC2(332,jvj+6,V62)*/
V62=pile[WZ2]; 
V38=V62;
pile[v[22]]=V42; pile[WZ1]=V38; 
(*f[38])( );     /*SPC0(V42,V38,V41)*/
V41=pile[WZ2]; 
goto l5;
l6:MM=1;
l9:x[jvj+16]=d[26];z[jvj+16]=0;
l7:if((x[jvj+16]>0)) goto l8;
MM++;
if((MM<=2)) goto l9;
pile[v[22]]=3; pile[WZ1]=EA; 
(*f[538])( );     /*EDITOUTATOME1(3,EA)*/
l39:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l8:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=MM; pile[WZ1]=EA; pile[WZ2]=jvj+17; 
(*f[539])( );     /*EDITOUTATOME2(MM,EA,jvj+17)*/
x[jvj+16]=t[x[jvj+16]];
goto l7;
l10:pile[v[22]]=117; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,A,V30)*/
V30=pile[WZ2]; 
if((V30!=0)) goto l18;
x[jvj+56]=x[EA] ;z[jvj+56]=z[EA];
l11:if((x[jvj+56]<=0)) goto l18;
x[jvj+18]=s[x[jvj+56]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+56];
pile[v[22]]=184; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(184,jvj+18,jvj+19)*/
V87=x[jvj+18];
x[jvj+57]=x[jvj+19] ;z[jvj+57]=z[jvj+19];
l12:if((x[jvj+57]>0)) goto l13;
x[jvj+56]=t[x[jvj+56]];
goto l11;
l13:x[jvj+20]=s[x[jvj+57]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+57];
pile[v[22]]=105; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(105,jvj+20,jvj+21)*/
x[jvj+58]=x[jvj+21] ;z[jvj+58]=z[jvj+21];
l14:if((x[jvj+58]>0)) goto l15;
x[jvj+57]=t[x[jvj+57]];
goto l12;
l15:x[jvj+22]=s[x[jvj+58]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+58];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=73)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+22,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[A]!=x[jvj+25])) goto l16;
V90=x[jvj+22];
pile[v[22]]=20; pile[WZ1]=V87; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V87,0,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V86; pile[WZ2]=105; 
(*f[42])( );     /*SRA1(135,V86,105,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V90; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V90,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
l16:x[jvj+58]=t[x[jvj+58]];
goto l14;
l18:x[jvj+59]=x[EA] ;z[jvj+59]=z[EA];
l17:if((x[jvj+59]<=0)) goto l39;
x[jvj+26]=s[x[jvj+59]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+59];
pile[v[22]]=184; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(184,jvj+26,jvj+27)*/
V80=x[jvj+26];
x[jvj+60]=x[jvj+27] ;z[jvj+60]=z[jvj+27];
l19:if((x[jvj+60]>0)) goto l20;
x[jvj+59]=t[x[jvj+59]];
goto l17;
l20:x[jvj+4]=s[x[jvj+60]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+60];
pile[v[22]]=105; pile[WZ1]=jvj+4; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(105,jvj+4,jvj+28)*/
x[jvj+61]=x[jvj+28] ;z[jvj+61]=z[jvj+28];
l21:if((x[jvj+61]>0)) goto l22;
x[jvj+60]=t[x[jvj+60]];
goto l19;
l22:x[jvj+29]=s[x[jvj+61]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+61];
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=73)) goto l23;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+29,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[A]!=x[jvj+32])) goto l23;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+29,jvj+3)*/
V83=x[jvj+29];
pile[v[22]]=20; pile[WZ1]=V80; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V80,0,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V79; pile[WZ2]=105; 
(*f[42])( );     /*SRA1(135,V79,105,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V83; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(20,V83,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; 
(*f[40])( );     /*SLG0(V82)*/
if((x[A]!=576)) goto l23;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[535])( );     /*ALLURE0(jvj+3,jvj+4,jvj+5)*/
V85=x[jvj+5];
pile[v[22]]=20; pile[WZ1]=V85; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V85,0,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; 
(*f[40])( );     /*SLG0(V84)*/
l23:x[jvj+61]=t[x[jvj+61]];
goto l21;
l25:x[jvj+62]=x[EA] ;z[jvj+62]=z[EA];
l24:if((x[jvj+62]<=0)) goto l39;
x[jvj+33]=s[x[jvj+62]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+62];
pile[v[22]]=184; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(184,jvj+33,jvj+34)*/
V65=x[jvj+33];
x[jvj+63]=x[jvj+34] ;z[jvj+63]=z[jvj+34];
l26:if((x[jvj+63]>0)) goto l27;
x[jvj+62]=t[x[jvj+62]];
goto l24;
l27:x[jvj+35]=s[x[jvj+63]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+63];
pile[v[22]]=105; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(105,jvj+35,jvj+36)*/
x[jvj+64]=x[jvj+36] ;z[jvj+64]=z[jvj+36];
l28:if((x[jvj+64]>0)) goto l29;
pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+44)*/
x[jvj+65]=x[jvj+44] ;z[jvj+65]=z[jvj+44];
l31:if((x[jvj+65]>0)) goto l32;
x[jvj+63]=t[x[jvj+63]];
goto l26;
l29:x[jvj+37]=s[x[jvj+64]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+64];
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=73)) goto l30;
pile[v[22]]=102; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,jvj+37,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[A]!=x[jvj+40])) goto l30;
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+37,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=262)) goto l30;
pile[v[22]]=160; pile[WZ1]=jvj+37; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(160,jvj+37,jvj+43)*/
V70=x[jvj+43];
pile[v[22]]=20; pile[WZ1]=V65; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V65,0,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V64; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V64,262,V66)*/
V66=pile[WZ3]; 
pile[WZ1]=V66; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,V66,A,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V67,61,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V70; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(20,V70,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; 
(*f[40])( );     /*SLG0(V69)*/
l30:x[jvj+64]=t[x[jvj+64]];
goto l28;
l32:x[jvj+45]=s[x[jvj+65]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+65];
pile[v[22]]=jvj+45; pile[WZ1]=A; pile[WZ2]=jvj+46; 
(*f[534])( );if(v[102]) goto l33;     /*SQUELCOND0(jvj+45,A,jvj+46)*/
V78=x[jvj+46];
pile[v[22]]=20; pile[WZ1]=V65; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V65,0,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V71; pile[WZ2]=468; 
(*f[42])( );     /*SRA1(135,V71,468,V73)*/
V73=pile[WZ3]; 
pile[WZ1]=V73; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,V73,A,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V74,(-740),V75)*/
V75=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V75; pile[WZ2]=433; 
(*f[42])( );     /*SRA1(135,V75,433,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V78; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(20,V78,V76,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; 
(*f[40])( );     /*SLG0(V77)*/
l33:x[jvj+65]=t[x[jvj+65]];
goto l31;
l35:x[jvj+66]=t[x[jvj+66]];
goto l34;
l37:x[jvj+67]=t[x[jvj+67]];
goto l36;
}
