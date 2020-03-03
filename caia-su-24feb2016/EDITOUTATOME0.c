#include "dx.h"
void EDITOUTATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V69=0,V68=0,V73=0,V71=0,V72=0,V75=0,V81=0,V80=0,V104=0,V103=0,V63=0,V39=0,V43=0,V42=0,V=0,V61=0,V64=0,I=0,V118=0,V119=0,MM=0,V31=0,V106=0,V109=0,V105=0,V107=0,V108=0,V99=0,V102=0,V98=0,V100=0,V101=0,V84=0,V89=0,V83=0,V85=0,V86=0,V87=0,V88=0,V97=0,V90=0,V92=0,V93=0,V94=0,V95=0,V96=0,V111=0,V51=0,V116=0,V110=0,V112=0,V113=0,V114=0,V115=0;
int NR,K;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=73;
x[jvj+1]=10921;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==162&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; K=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=incon;
if((NR>2)) goto l5;
pile[v[22]]=K; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l5;     /*SMA0(K,64,67,jvj+5)*/
l5:if(NR!=3&&NR!=4) goto l1;
V81=K+1;
V80=bh[v[1]][V81];
if((V80==32)) goto l1;
pile[v[22]]=K; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(K,36,67,jvj+6)*/
pile[v[22]]=20; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[409])( );     /*TRI14(20,jvj+6,jvj+7)*/
l15:if((NR!=4)) goto l16;
MM=1;
l14:x[jvj+21]=d[26];z[jvj+21]=0;
l12:if((x[jvj+21]>0)) goto l13;
MM++;
if((MM<=2)) goto l14;
pile[v[22]]=3; pile[WZ1]=jvj+7; 
(*f[538])( );     /*EDITOUTATOME1(3,jvj+7)*/
l16:if(x[jvj+5]!=incon) goto l17;
l41:if((NR!=3)) goto l47;
x[jvj+71]=x[jvj+7] ;z[jvj+71]=z[jvj+7];
l42:if((x[jvj+71]<=0)) goto l47;
x[jvj+15]=s[x[jvj+71]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+71];
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+15,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+52,jvj+53)*/
if((x[jvj+53]!=69)) goto l43;
pile[v[22]]=108; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(108,jvj+52,jvj+54)*/
pile[v[22]]=184; pile[WZ1]=jvj+15; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(184,jvj+15,jvj+55)*/
V111=x[jvj+15];
x[jvj+72]=x[jvj+54] ;z[jvj+72]=z[jvj+54];
l44:if((x[jvj+72]<=0)) goto l43;
x[jvj+56]=s[x[jvj+72]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+72];
pile[v[22]]=103; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+56,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l45;     /*FNDC1(140,jvj+57,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+56; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+56,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=576)) goto l45;
V=V51;
x[jvj+73]=x[jvj+55] ;z[jvj+73]=z[jvj+55];
l46:if((x[jvj+73]<=0)) goto l45;
x[jvj+14]=s[x[jvj+73]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+73];
pile[v[22]]=V; pile[WZ1]=jvj+14; pile[WZ2]=jvj+60; 
(*f[536])( );     /*ALLURV0(V,jvj+14,jvj+60)*/
V116=x[jvj+60];
pile[v[22]]=20; pile[WZ1]=V111; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V111,0,V110)*/
V110=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V110; pile[WZ2]=576; 
(*f[42])( );     /*SRA1(135,V110,576,V112)*/
V112=pile[WZ3]; 
pile[v[22]]=V112; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V112,V,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=V113; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V113,58,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V116; pile[WZ2]=V114; 
(*f[39])( );     /*SDX0(20,V116,V114,V115)*/
V115=pile[WZ3]; 
pile[v[22]]=V115; 
(*f[40])( );     /*SLG0(V115)*/
x[jvj+12]=d[25];z[jvj+12]=0;
l8:if((x[jvj+12]>0)) goto l9;
x[jvj+73]=t[x[jvj+73]];
goto l46;
l1:if((NR<=2)) goto l2;
V69=K+1;
V68=bh[v[1]][V69];
if((V68!=32)) goto l47;
if(NR==3||NR==4) goto l2;
l47:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1484,854,V73)*/
V73=pile[WZ2]; 
V71=sepfacts+1;
V72=sepfacts+V73;
l3:if((V71>V72)) goto l6;
V75=r[V71];
if((V75!=1)) goto l4;
x[jvj+4]=V71 ;z[jvj+4]=(V71<=sepcte) ? V71 : 0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
l4:V71++;
goto l3;
l6:x[jvj+7]=x[jvj+3] ;z[jvj+7]=z[jvj+3];
goto l15;
l7:V42=V43;
l11:pile[v[22]]=V42; pile[WZ1]=I; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V42,I,41,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=V119; 
(*f[40])( );     /*SLG0(V119)*/
l10:x[jvj+12]=t[x[jvj+12]];
goto l8;
l9:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=V; pile[WZ2]=jvj+14; pile[WZ3]=jvj+15; pile[WZ4]=jvj+16; 
(*f[537])( );if(v[102]) goto l10;     /*TROUVAL0(jvj+13,V,jvj+14,jvj+15,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=22)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+16,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+18,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+16,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+19,jvj+20)*/
x[jvj+11]=x[jvj+20] ;z[jvj+11]=z[jvj+20];
pile[v[22]]=331; pile[WZ1]=jvj+11; 
(*f[219])( );if(v[102]) goto l10;     /*FNDC2(331,jvj+11,V64)*/
V64=pile[WZ2]; 
I=V61;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+13; 
(*f[42])( );     /*SRA1(135,0,jvj+13,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=V118; pile[WZ1]=V64; 
(*f[38])( );     /*SPC0(V118,V64,V43)*/
V43=pile[WZ2]; 
V42=incon;
pile[v[22]]=332; pile[WZ1]=jvj+11; 
(*f[219])( );if(v[102]) goto l7;     /*FNDC2(332,jvj+11,V63)*/
V63=pile[WZ2]; 
V39=V63;
pile[v[22]]=V43; pile[WZ1]=V39; 
(*f[38])( );     /*SPC0(V43,V39,V42)*/
V42=pile[WZ2]; 
goto l11;
l13:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=MM; pile[WZ1]=jvj+7; pile[WZ2]=jvj+22; 
(*f[539])( );     /*EDITOUTATOME2(MM,jvj+7,jvj+22)*/
x[jvj+21]=t[x[jvj+21]];
goto l12;
l17:if((NR==2)) goto l18;
if((NR!=1)) goto l41;
x[jvj+67]=x[jvj+7] ;z[jvj+67]=z[jvj+7];
l32:if((x[jvj+67]<=0)) goto l47;
x[jvj+38]=s[x[jvj+67]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+67];
pile[v[22]]=184; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(184,jvj+38,jvj+39)*/
V84=x[jvj+38];
x[jvj+68]=x[jvj+39] ;z[jvj+68]=z[jvj+39];
l33:if((x[jvj+68]>0)) goto l34;
x[jvj+67]=t[x[jvj+67]];
goto l32;
l18:pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(117,jvj+5,V31)*/
V31=pile[WZ2]; 
if((V31!=0)) goto l26;
x[jvj+61]=x[jvj+7] ;z[jvj+61]=z[jvj+7];
l19:if((x[jvj+61]<=0)) goto l26;
x[jvj+23]=s[x[jvj+61]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+61];
pile[v[22]]=184; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(184,jvj+23,jvj+24)*/
V106=x[jvj+23];
x[jvj+62]=x[jvj+24] ;z[jvj+62]=z[jvj+24];
l20:if((x[jvj+62]>0)) goto l21;
x[jvj+61]=t[x[jvj+61]];
goto l19;
l21:x[jvj+25]=s[x[jvj+62]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+62];
pile[v[22]]=105; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(105,jvj+25,jvj+26)*/
x[jvj+63]=x[jvj+26] ;z[jvj+63]=z[jvj+26];
l22:if((x[jvj+63]>0)) goto l23;
x[jvj+62]=t[x[jvj+62]];
goto l20;
l23:x[jvj+27]=s[x[jvj+63]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+63];
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=73)) goto l24;
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+27,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+5]!=x[jvj+30])) goto l24;
V109=x[jvj+27];
pile[v[22]]=20; pile[WZ1]=V106; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V106,0,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V105; pile[WZ2]=105; 
(*f[42])( );     /*SRA1(135,V105,105,V107)*/
V107=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V109; pile[WZ2]=V107; 
(*f[39])( );     /*SDX0(20,V109,V107,V108)*/
V108=pile[WZ3]; 
pile[v[22]]=V108; 
(*f[40])( );     /*SLG0(V108)*/
l24:x[jvj+63]=t[x[jvj+63]];
goto l22;
l26:x[jvj+64]=x[jvj+7] ;z[jvj+64]=z[jvj+7];
l25:if((x[jvj+64]<=0)) goto l47;
x[jvj+31]=s[x[jvj+64]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+64];
pile[v[22]]=184; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(184,jvj+31,jvj+32)*/
V99=x[jvj+31];
x[jvj+65]=x[jvj+32] ;z[jvj+65]=z[jvj+32];
l27:if((x[jvj+65]>0)) goto l28;
x[jvj+64]=t[x[jvj+64]];
goto l25;
l28:x[jvj+9]=s[x[jvj+65]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+65];
pile[v[22]]=105; pile[WZ1]=jvj+9; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(105,jvj+9,jvj+33)*/
x[jvj+66]=x[jvj+33] ;z[jvj+66]=z[jvj+33];
l29:if((x[jvj+66]>0)) goto l30;
x[jvj+65]=t[x[jvj+65]];
goto l27;
l30:x[jvj+34]=s[x[jvj+66]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+66];
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=73)) goto l31;
pile[v[22]]=111; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+34,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+5]!=x[jvj+37])) goto l31;
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+34,jvj+8)*/
V102=x[jvj+34];
pile[v[22]]=20; pile[WZ1]=V99; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V99,0,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V98; pile[WZ2]=105; 
(*f[42])( );     /*SRA1(135,V98,105,V100)*/
V100=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(20,V102,V100,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
if((x[jvj+5]!=576)) goto l31;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[535])( );     /*ALLURE0(jvj+8,jvj+9,jvj+10)*/
V104=x[jvj+10];
pile[v[22]]=20; pile[WZ1]=V104; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V104,0,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=V103; 
(*f[40])( );     /*SLG0(V103)*/
l31:x[jvj+66]=t[x[jvj+66]];
goto l29;
l34:x[jvj+40]=s[x[jvj+68]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+68];
pile[v[22]]=105; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(105,jvj+40,jvj+41)*/
x[jvj+69]=x[jvj+41] ;z[jvj+69]=z[jvj+41];
l35:if((x[jvj+69]>0)) goto l36;
pile[v[22]]=107; pile[WZ1]=jvj+40; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+40,jvj+49)*/
x[jvj+70]=x[jvj+49] ;z[jvj+70]=z[jvj+49];
l38:if((x[jvj+70]>0)) goto l39;
x[jvj+68]=t[x[jvj+68]];
goto l33;
l36:x[jvj+42]=s[x[jvj+69]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+69];
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=73)) goto l37;
pile[v[22]]=102; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+42,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+5]!=x[jvj+45])) goto l37;
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+42,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=262)) goto l37;
pile[v[22]]=160; pile[WZ1]=jvj+42; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(160,jvj+42,jvj+48)*/
V89=x[jvj+48];
pile[v[22]]=20; pile[WZ1]=V84; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V84,0,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V83; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V83,262,V85)*/
V85=pile[WZ3]; 
pile[WZ1]=V85; pile[WZ2]=jvj+5; 
(*f[42])( );     /*SRA1(135,V85,jvj+5,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=V86; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V86,61,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V89; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V89,V87,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
l37:x[jvj+69]=t[x[jvj+69]];
goto l35;
l39:x[jvj+50]=s[x[jvj+70]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+70];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+5; pile[WZ2]=jvj+51; 
(*f[534])( );if(v[102]) goto l40;     /*SQUELCOND0(jvj+50,jvj+5,jvj+51)*/
V97=x[jvj+51];
pile[v[22]]=20; pile[WZ1]=V84; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V84,0,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V90; pile[WZ2]=468; 
(*f[42])( );     /*SRA1(135,V90,468,V92)*/
V92=pile[WZ3]; 
pile[WZ1]=V92; pile[WZ2]=jvj+5; 
(*f[42])( );     /*SRA1(135,V92,jvj+5,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V93,(-740),V94)*/
V94=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V94; pile[WZ2]=433; 
(*f[42])( );     /*SRA1(135,V94,433,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V97; pile[WZ2]=V95; 
(*f[39])( );     /*SDX0(20,V97,V95,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
l40:x[jvj+70]=t[x[jvj+70]];
goto l38;
l43:x[jvj+71]=t[x[jvj+71]];
goto l42;
l45:x[jvj+72]=t[x[jvj+72]];
goto l44;
}
