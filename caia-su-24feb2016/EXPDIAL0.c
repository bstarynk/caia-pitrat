#include "dx.h"
void EXPDIAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V5=0,KR=0,R=0,RK=0,F=0,V19=0,KK=0,V22=0,V21=0,DX=0,V26=0,V=0,V13=0,V56=0,V52=0,V53=0,V54=0,V55=0,RS=0,V43=0,V44=0,V46=0;
int E,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=59;
x[jvj+1]=10579;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==137&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; C=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+21]=R=x[jvj+6]=RK=x[jvj+25]=x[jvj+27]=x[jvj+5]=incon;
x[jvj+46]=x[E] ;z[jvj+46]=z[E];
l1:if((x[jvj+46]>0)) goto l2;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V4=bh[v[1]][0];
V5=bh[v[1]][1];
KR=V4;
if((KR==73)) goto l23;
if((KR!=80)) goto l24;
if((x[C]!=1185)) goto l24;
vv[16]=2;
l24:if(KR!=77&&KR!=88&&KR!=65&&KR!=81&&KR!=68&&KR!=71&&KR!=116&&KR!=99&&KR!=101&&KR!=108&&KR!=113) goto l26;
x[jvj+47]=incon;
if((KR==77)) goto l4;
if((KR==88)) goto l5;
if((KR==65)) goto l6;
if((KR==81)) goto l7;
if((KR==68)) goto l8;
if((KR==71)) goto l9;
if((KR==116)) goto l10;
if((KR==99)) goto l11;
if((KR==101)) goto l12;
if((KR==108)) goto l13;
if((KR!=113)) goto l26;
x[jvj+47]=860 ;z[jvj+47]=860;
l25:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l26;     /*SMA0(1,64,67,jvj+6)*/
x[jvj+21]=x[jvj+47] ;z[jvj+21]=z[jvj+47];
l28:if((KR==86)) goto l29;
if((KR==72)) goto l31;
if((KR==74)) goto l32;
if((KR!=79)) goto l40;
pile[v[22]]=1; 
(*f[126])( );     /*LND2(1,V19,KK)*/
V19=pile[WZ1]; KK=pile[WZ2]; 
V22=KK+1;
V21=bh[v[1]][V22];
if((V21!=123)) goto l34;
pile[v[22]]=V22; pile[WZ1]=jvj+14; 
(*f[79])( );if(v[102]) goto l40;     /*LEXP0(V22,jvj+14,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; 
(*f[258])( );     /*SMV1(V26,V)*/
V=pile[WZ1]; 
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
x[jvj+52]=x[E] ;z[jvj+52]=z[E];
l36:if((x[jvj+52]<=0)) goto l40;
x[jvj+16]=s[x[jvj+52]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+52];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=1050; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+45; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,1050,102,jvj+15,jvj+45,jvj+43)*/
pile[v[22]]=698; pile[WZ1]=jvj+43; pile[WZ2]=1110; pile[WZ3]=V19; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(698,jvj+43,1110,V19,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=1025; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+16,1025,jvj+17)*/
x[jvj+52]=t[x[jvj+52]];
goto l36;
l2:x[jvj+3]=s[x[jvj+46]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+46];
pile[v[22]]=jvj+3; 
(*f[429])( );     /*NOUVSAUVE0(jvj+3)*/
pile[WZ1]=1002; pile[WZ2]=607; 
(*f[35])( );     /*CHGC1(jvj+3,1002,607)*/
pile[WZ1]=1161; pile[WZ2]=924; 
(*f[35])( );     /*CHGC1(jvj+3,1161,924)*/
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+3,jvj+4)*/
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(683,jvj+4,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=683; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(jvj+3,683,V2)*/
l3:x[jvj+46]=t[x[jvj+46]];
goto l1;
l4:x[jvj+47]=948 ;z[jvj+47]=948;
goto l25;
l5:x[jvj+47]=978 ;z[jvj+47]=978;
goto l25;
l6:x[jvj+47]=1002 ;z[jvj+47]=1002;
goto l25;
l7:x[jvj+47]=844 ;z[jvj+47]=844;
goto l25;
l8:x[jvj+47]=247 ;z[jvj+47]=247;
goto l25;
l9:x[jvj+47]=1062 ;z[jvj+47]=1062;
goto l25;
l10:x[jvj+47]=1241 ;z[jvj+47]=1241;
goto l25;
l11:x[jvj+47]=1256 ;z[jvj+47]=1256;
goto l25;
l12:x[jvj+47]=1254 ;z[jvj+47]=1254;
goto l25;
l13:x[jvj+47]=1257 ;z[jvj+47]=1257;
goto l25;
l14:x[jvj+48]=493 ;z[jvj+48]=493;
l21:if(KR==84||KR==85) goto l22;
if(x[jvj+48]==incon) goto l28;
if((x[jvj+48]!=(-99999998))) goto l27;
goto l28;
l15:x[jvj+48]=683 ;z[jvj+48]=683;
goto l21;
l16:x[jvj+48]=1058 ;z[jvj+48]=1058;
goto l21;
l17:x[jvj+48]=1167 ;z[jvj+48]=1167;
goto l21;
l18:x[jvj+48]=529 ;z[jvj+48]=529;
goto l21;
l19:x[jvj+48]=947 ;z[jvj+48]=947;
goto l21;
l20:x[jvj+48]=731 ;z[jvj+48]=731;
goto l21;
l22:x[jvj+48]=936 ;z[jvj+48]=936;
l27:pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,R)*/
R=pile[WZ1]; 
x[jvj+21]=x[jvj+48] ;z[jvj+21]=z[jvj+48];
goto l28;
l23:pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l24;     /*SMA0(1,36,67,jvj+5)*/
x[jvj+27]=901 ;z[jvj+27]=901;
goto l24;
l26:if(KR!=84&&KR!=76&&KR!=78&&KR!=85&&KR!=82&&KR!=89&&KR!=87&&KR!=70&&KR!=66&&KR!=75) goto l28;
x[jvj+48]=incon;
if((KR==76)) goto l14;
if((KR==78)) goto l15;
if((KR==82)) goto l16;
if((KR==89)) goto l17;
if((KR==87)) goto l18;
if((KR==70)) goto l19;
if((KR==66)) goto l20;
if((KR!=75)) goto l21;
x[jvj+48]=1335 ;z[jvj+48]=1335;
goto l21;
l29:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+7; 
(*f[78])( );if(v[102]) goto l40;     /*SMA0(1,64,67,jvj+7)*/
x[jvj+49]=x[E] ;z[jvj+49]=z[E];
l30:if((x[jvj+49]<=0)) goto l40;
x[jvj+8]=s[x[jvj+49]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+49];
pile[v[22]]=jvj+8; pile[WZ1]=1056; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+8,1056,jvj+7)*/
x[jvj+49]=t[x[jvj+49]];
goto l30;
l31:pile[v[22]]=1; 
(*f[135])( );     /*LND3(1,RK)*/
RK=pile[WZ1]; 
x[jvj+25]=616 ;z[jvj+25]=616;
l40:if(x[jvj+21]!=incon) goto l41;
l49:if(RK!=incon) goto l50;
l53:if(x[jvj+27]!=incon) goto l54;
l64:if((KR!=90)) goto l68;
x[jvj+58]=x[E] ;z[jvj+58]=z[E];
l65:if((x[jvj+58]<=0)) goto l68;
x[jvj+33]=s[x[jvj+58]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+58];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[378])( );     /*CPI0(jvj+33,jvj+34)*/
pile[v[22]]=109; pile[WZ1]=jvj+33; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(109,jvj+33,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[430])( );     /*POSPROG0(jvj+35,jvj+36)*/
if((x[jvj+36]==68)) goto l67;
l66:x[jvj+58]=t[x[jvj+58]];
goto l65;
l32:pile[v[22]]=1; pile[WZ1]=jvj+9; 
(*f[335])( );if(v[102]) goto l40;     /*LANT0(1,jvj+9,F)*/
F=pile[WZ2]; 
x[jvj+50]=x[E] ;z[jvj+50]=z[E];
l33:if((x[jvj+50]<=0)) goto l40;
x[jvj+10]=s[x[jvj+50]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+50];
pile[v[22]]=jvj+10; pile[WZ1]=1081; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+10,1081,jvj+9)*/
x[jvj+50]=t[x[jvj+50]];
goto l33;
l34:pile[v[22]]=KK; pile[WZ1]=jvj+11; 
(*f[79])( );if(v[102]) goto l40;     /*LEXP0(KK,jvj+11,DX)*/
DX=pile[WZ2]; 
x[jvj+51]=x[E] ;z[jvj+51]=z[E];
l35:if((x[jvj+51]<=0)) goto l40;
x[jvj+12]=s[x[jvj+51]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+51];
pile[v[22]]=698; pile[WZ1]=jvj+11; pile[WZ2]=1110; pile[WZ3]=V19; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(698,jvj+11,1110,V19,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=1025; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+12,1025,jvj+13)*/
x[jvj+51]=t[x[jvj+51]];
goto l35;
l37:V13=67;
l48:RS=V13;
if((RS==68)) goto l39;
if((RS!=67)) goto l47;
pile[v[22]]=109; pile[WZ1]=jvj+18; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(109,jvj+18,jvj+22)*/
V56=x[jvj+22];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=616; 
(*f[42])( );     /*SRA1(135,0,616,V52)*/
V52=pile[WZ3]; 
pile[WZ1]=V52; pile[WZ2]=jvj+21; 
(*f[42])( );     /*SRA1(135,V52,jvj+21,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V53,(-9543),V54)*/
V54=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
l47:x[jvj+54]=t[x[jvj+54]];
l45:if((x[jvj+54]<=0)) goto l49;
x[jvj+18]=s[x[jvj+54]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+54];
V13=incon;
if((x[jvj+21]!=948)) goto l38;
pile[v[22]]=109; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(109,jvj+18,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[430])( );     /*POSPROG0(jvj+19,jvj+20)*/
if((x[jvj+20]==67)) goto l37;
l38:V13=68;
goto l48;
l39:pile[v[22]]=jvj+18; pile[WZ1]=jvj+21; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+18,jvj+21,jvj+6)*/
goto l47;
l41:if(R!=incon) goto l43;
l44:if(x[jvj+6]!=incon) goto l46;
goto l49;
l43:x[jvj+53]=x[E] ;z[jvj+53]=z[E];
l42:if((x[jvj+53]<=0)) goto l44;
x[jvj+23]=s[x[jvj+53]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+53];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+21; pile[WZ2]=R; 
(*f[43])( );     /*CHGC2(jvj+23,jvj+21,R)*/
x[jvj+53]=t[x[jvj+53]];
goto l42;
l46:x[jvj+54]=x[E] ;z[jvj+54]=z[E];
goto l45;
l50:if(x[jvj+25]!=incon) goto l52;
goto l53;
l52:x[jvj+55]=x[E] ;z[jvj+55]=z[E];
l51:if((x[jvj+55]<=0)) goto l53;
x[jvj+24]=s[x[jvj+55]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+55];
pile[v[22]]=RK; pile[WZ1]=jvj+25; pile[WZ2]=jvj+24; 
(*f[235])( );     /*PLUSC2(RK,jvj+25,jvj+24)*/
x[jvj+55]=t[x[jvj+55]];
goto l51;
l54:if(x[jvj+5]!=incon) goto l56;
goto l64;
l56:x[jvj+56]=x[E] ;z[jvj+56]=z[E];
l55:if((x[jvj+56]<=0)) goto l64;
x[jvj+26]=s[x[jvj+56]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+56];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+26,jvj+27,jvj+5)*/
x[jvj+56]=t[x[jvj+56]];
goto l55;
l59:if(x[jvj+41]==incon) goto l60;
l61:pile[v[22]]=948; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(948,jvj+28,jvj+31)*/
if((x[jvj+31]!=68)) goto l62;
pile[v[22]]=jvj+28; pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+28,1056,1060)*/
l62:pile[v[22]]=1058; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(1058,jvj+28,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(936,jvj+28,V44)*/
V44=pile[WZ2]; 
if((V43<=V44)) goto l63;
pile[v[22]]=jvj+28; pile[WZ1]=1058; pile[WZ2]=V44; 
(*f[43])( );     /*CHGC2(jvj+28,1058,V44)*/
l63:for(i=x[jvj+40],V46=0;i>0;i=t[i],V46++)  ;
if((V46!=1)) goto l71;
if((x[jvj+40]<=0)) goto l71;
x[jvj+32]=s[x[jvj+40]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+40];
pile[v[22]]=jvj+28; pile[WZ1]=247; pile[WZ2]=jvj+32; 
(*f[35])( );     /*CHGC1(jvj+28,247,jvj+32)*/
l71:pile[v[22]]=jvj+28; pile[WZ1]=860; pile[WZ2]=jvj+41; 
(*f[35])( );     /*CHGC1(jvj+28,860,jvj+41)*/
pile[v[22]]=C; pile[WZ1]=935; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(C,935,jvj+42)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+42; 
(*f[432])( );     /*AJEXP0(jvj+28,jvj+42)*/
l70:x[jvj+59]=t[x[jvj+59]];
l69:if((x[jvj+59]<=0)) goto l72;
x[jvj+28]=s[x[jvj+59]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+59];
pile[v[22]]=109; pile[WZ1]=jvj+28; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(109,jvj+28,jvj+39)*/
pile[v[22]]=896; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(896,jvj+39,jvj+40)*/
x[jvj+41]=incon;
if((x[jvj+40]==0)) goto l57;
x[jvj+41]=228 ;z[jvj+41]=228;
l57:pile[v[22]]=948; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(948,jvj+28,jvj+29)*/
if((x[jvj+29]!=68)) goto l58;
x[jvj+41]=954 ;z[jvj+41]=954;
l58:pile[v[22]]=860; pile[WZ1]=jvj+28; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(860,jvj+28,jvj+30)*/
x[jvj+57]=x[jvj+30] ;z[jvj+57]=z[jvj+30];
x[jvj+41]=x[jvj+57] ;z[jvj+41]=z[jvj+57];
goto l61;
l60:x[jvj+41]=530 ;z[jvj+41]=530;
goto l61;
l67:x[jvj+37]=x[jvj+34] ;z[jvj+37]=z[jvj+34];
pile[v[22]]=jvj+37; pile[WZ1]=948; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+37,948,68)*/
pile[WZ1]=860; pile[WZ2]=954; 
(*f[35])( );     /*CHGC1(jvj+37,860,954)*/
pile[v[22]]=C; pile[WZ1]=935; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(C,935,jvj+38)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[432])( );     /*AJEXP0(jvj+37,jvj+38)*/
goto l66;
l68:if(KR!=83&&KR!=90) goto l72;
x[jvj+59]=x[E] ;z[jvj+59]=z[E];
goto l69;
l72:if(KR==83||KR==90) goto l73;
pile[v[22]]=E; pile[WZ1]=67; pile[WZ2]=C; 
(*f[431])( );     /*EXPDIAL1(E,67,C)*/
l73:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
