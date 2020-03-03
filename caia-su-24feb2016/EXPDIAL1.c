#include "dx.h"
void EXPDIAL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,KR=0,R=0,RK=0,F=0,V15=0,KK=0,V18=0,V17=0,DX=0,V22=0,V=0,V9=0,V52=0,V48=0,V49=0,V50=0,V51=0,RS=0,V39=0,V40=0,V42=0,V70=0;
int E,T,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=56;
x[jvj+1]=10579;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==431&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; T=pile[v[22]+1]; C=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V70=x[T];
l71:x[jvj+19]=R=x[jvj+4]=RK=x[jvj+23]=x[jvj+25]=x[jvj+3]=incon;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
V1=bh[v[1]][0];
V2=bh[v[1]][1];
KR=V1;
if((KR==73)) goto l20;
if((KR!=80)) goto l21;
if((x[C]!=1185)) goto l21;
vv[16]=2;
l21:if(KR!=77&&KR!=88&&KR!=65&&KR!=81&&KR!=68&&KR!=71&&KR!=116&&KR!=99&&KR!=101&&KR!=108&&KR!=113) goto l23;
x[jvj+44]=incon;
if((KR==77)) goto l1;
if((KR==88)) goto l2;
if((KR==65)) goto l3;
if((KR==81)) goto l4;
if((KR==68)) goto l5;
if((KR==71)) goto l6;
if((KR==116)) goto l7;
if((KR==99)) goto l8;
if((KR==101)) goto l9;
if((KR==108)) goto l10;
if((KR!=113)) goto l23;
x[jvj+44]=860 ;z[jvj+44]=860;
l22:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+4; 
(*f[78])( );if(v[102]) goto l23;     /*SMA0(1,64,67,jvj+4)*/
x[jvj+19]=x[jvj+44] ;z[jvj+19]=z[jvj+44];
l25:if((KR==86)) goto l26;
if((KR==72)) goto l28;
if((KR==74)) goto l29;
if((KR!=79)) goto l37;
pile[v[22]]=1; 
(*f[126])( );     /*LND2(1,V15,KK)*/
V15=pile[WZ1]; KK=pile[WZ2]; 
V18=KK+1;
V17=bh[v[1]][V18];
if((V17!=123)) goto l31;
pile[v[22]]=V18; pile[WZ1]=jvj+12; 
(*f[79])( );if(v[102]) goto l37;     /*LEXP0(V18,jvj+12,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=V22; 
(*f[258])( );     /*SMV1(V22,V)*/
V=pile[WZ1]; 
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
x[jvj+49]=x[E] ;z[jvj+49]=z[E];
l33:if((x[jvj+49]<=0)) goto l37;
x[jvj+14]=s[x[jvj+49]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+49];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=1050; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+43; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,1050,102,jvj+13,jvj+43,jvj+41)*/
pile[v[22]]=698; pile[WZ1]=jvj+41; pile[WZ2]=1110; pile[WZ3]=V15; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(698,jvj+41,1110,V15,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=1025; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+14,1025,jvj+15)*/
x[jvj+49]=t[x[jvj+49]];
goto l33;
l1:x[jvj+44]=948 ;z[jvj+44]=948;
goto l22;
l2:x[jvj+44]=978 ;z[jvj+44]=978;
goto l22;
l3:x[jvj+44]=1002 ;z[jvj+44]=1002;
goto l22;
l4:x[jvj+44]=844 ;z[jvj+44]=844;
goto l22;
l5:x[jvj+44]=247 ;z[jvj+44]=247;
goto l22;
l6:x[jvj+44]=1062 ;z[jvj+44]=1062;
goto l22;
l7:x[jvj+44]=1241 ;z[jvj+44]=1241;
goto l22;
l8:x[jvj+44]=1256 ;z[jvj+44]=1256;
goto l22;
l9:x[jvj+44]=1254 ;z[jvj+44]=1254;
goto l22;
l10:x[jvj+44]=1257 ;z[jvj+44]=1257;
goto l22;
l11:x[jvj+45]=493 ;z[jvj+45]=493;
l18:if(KR==84||KR==85) goto l19;
if(x[jvj+45]==incon) goto l25;
if((x[jvj+45]!=(-99999998))) goto l24;
goto l25;
l12:x[jvj+45]=683 ;z[jvj+45]=683;
goto l18;
l13:x[jvj+45]=1058 ;z[jvj+45]=1058;
goto l18;
l14:x[jvj+45]=1167 ;z[jvj+45]=1167;
goto l18;
l15:x[jvj+45]=529 ;z[jvj+45]=529;
goto l18;
l16:x[jvj+45]=947 ;z[jvj+45]=947;
goto l18;
l17:x[jvj+45]=731 ;z[jvj+45]=731;
goto l18;
l19:x[jvj+45]=936 ;z[jvj+45]=936;
l24:pile[v[22]]=2; 
(*f[135])( );     /*LND3(2,R)*/
R=pile[WZ1]; 
x[jvj+19]=x[jvj+45] ;z[jvj+19]=z[jvj+45];
goto l25;
l20:pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l21;     /*SMA0(1,36,67,jvj+3)*/
x[jvj+25]=901 ;z[jvj+25]=901;
goto l21;
l23:if(KR!=84&&KR!=76&&KR!=78&&KR!=85&&KR!=82&&KR!=89&&KR!=87&&KR!=70&&KR!=66&&KR!=75) goto l25;
x[jvj+45]=incon;
if((KR==76)) goto l11;
if((KR==78)) goto l12;
if((KR==82)) goto l13;
if((KR==89)) goto l14;
if((KR==87)) goto l15;
if((KR==70)) goto l16;
if((KR==66)) goto l17;
if((KR!=75)) goto l18;
x[jvj+45]=1335 ;z[jvj+45]=1335;
goto l18;
l26:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l37;     /*SMA0(1,64,67,jvj+5)*/
x[jvj+46]=x[E] ;z[jvj+46]=z[E];
l27:if((x[jvj+46]<=0)) goto l37;
x[jvj+6]=s[x[jvj+46]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+46];
pile[v[22]]=jvj+6; pile[WZ1]=1056; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+6,1056,jvj+5)*/
x[jvj+46]=t[x[jvj+46]];
goto l27;
l28:pile[v[22]]=1; 
(*f[135])( );     /*LND3(1,RK)*/
RK=pile[WZ1]; 
x[jvj+23]=616 ;z[jvj+23]=616;
l37:if(x[jvj+19]!=incon) goto l38;
l46:if(RK!=incon) goto l47;
l50:if(x[jvj+25]!=incon) goto l51;
l61:if((KR!=90)) goto l65;
x[jvj+55]=x[E] ;z[jvj+55]=z[E];
l62:if((x[jvj+55]<=0)) goto l65;
x[jvj+31]=s[x[jvj+55]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+55];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[378])( );     /*CPI0(jvj+31,jvj+32)*/
pile[v[22]]=109; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(109,jvj+31,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[430])( );     /*POSPROG0(jvj+33,jvj+34)*/
if((x[jvj+34]==68)) goto l64;
l63:x[jvj+55]=t[x[jvj+55]];
goto l62;
l29:pile[v[22]]=1; pile[WZ1]=jvj+7; 
(*f[335])( );if(v[102]) goto l37;     /*LANT0(1,jvj+7,F)*/
F=pile[WZ2]; 
x[jvj+47]=x[E] ;z[jvj+47]=z[E];
l30:if((x[jvj+47]<=0)) goto l37;
x[jvj+8]=s[x[jvj+47]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+47];
pile[v[22]]=jvj+8; pile[WZ1]=1081; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+8,1081,jvj+7)*/
x[jvj+47]=t[x[jvj+47]];
goto l30;
l31:pile[v[22]]=KK; pile[WZ1]=jvj+9; 
(*f[79])( );if(v[102]) goto l37;     /*LEXP0(KK,jvj+9,DX)*/
DX=pile[WZ2]; 
x[jvj+48]=x[E] ;z[jvj+48]=z[E];
l32:if((x[jvj+48]<=0)) goto l37;
x[jvj+10]=s[x[jvj+48]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+48];
pile[v[22]]=698; pile[WZ1]=jvj+9; pile[WZ2]=1110; pile[WZ3]=V15; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(698,jvj+9,1110,V15,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=1025; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+10,1025,jvj+11)*/
x[jvj+48]=t[x[jvj+48]];
goto l32;
l34:V9=67;
l45:RS=V9;
if((RS==68)) goto l36;
if((RS!=67)) goto l44;
pile[v[22]]=109; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(109,jvj+16,jvj+20)*/
V52=x[jvj+20];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=616; 
(*f[42])( );     /*SRA1(135,0,616,V48)*/
V48=pile[WZ3]; 
pile[WZ1]=V48; pile[WZ2]=jvj+19; 
(*f[42])( );     /*SRA1(135,V48,jvj+19,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V49,(-9543),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V52,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
l44:x[jvj+51]=t[x[jvj+51]];
l42:if((x[jvj+51]<=0)) goto l46;
x[jvj+16]=s[x[jvj+51]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+51];
V9=incon;
if((x[jvj+19]!=948)) goto l35;
pile[v[22]]=109; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(109,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[430])( );     /*POSPROG0(jvj+17,jvj+18)*/
if((x[jvj+18]==67)) goto l34;
l35:V9=68;
goto l45;
l36:pile[v[22]]=jvj+16; pile[WZ1]=jvj+19; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+16,jvj+19,jvj+4)*/
goto l44;
l38:if(R!=incon) goto l40;
l41:if(x[jvj+4]!=incon) goto l43;
goto l46;
l40:x[jvj+50]=x[E] ;z[jvj+50]=z[E];
l39:if((x[jvj+50]<=0)) goto l41;
x[jvj+21]=s[x[jvj+50]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+50];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+19; pile[WZ2]=R; 
(*f[43])( );     /*CHGC2(jvj+21,jvj+19,R)*/
x[jvj+50]=t[x[jvj+50]];
goto l39;
l43:x[jvj+51]=x[E] ;z[jvj+51]=z[E];
goto l42;
l47:if(x[jvj+23]!=incon) goto l49;
goto l50;
l49:x[jvj+52]=x[E] ;z[jvj+52]=z[E];
l48:if((x[jvj+52]<=0)) goto l50;
x[jvj+22]=s[x[jvj+52]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+52];
pile[v[22]]=RK; pile[WZ1]=jvj+23; pile[WZ2]=jvj+22; 
(*f[235])( );     /*PLUSC2(RK,jvj+23,jvj+22)*/
x[jvj+52]=t[x[jvj+52]];
goto l48;
l51:if(x[jvj+3]!=incon) goto l53;
goto l61;
l53:x[jvj+53]=x[E] ;z[jvj+53]=z[E];
l52:if((x[jvj+53]<=0)) goto l61;
x[jvj+24]=s[x[jvj+53]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+53];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+24,jvj+25,jvj+3)*/
x[jvj+53]=t[x[jvj+53]];
goto l52;
l56:if(x[jvj+39]==incon) goto l57;
l58:pile[v[22]]=948; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(948,jvj+26,jvj+29)*/
if((x[jvj+29]!=68)) goto l59;
pile[v[22]]=jvj+26; pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+26,1056,1060)*/
l59:pile[v[22]]=1058; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(1058,jvj+26,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(936,jvj+26,V40)*/
V40=pile[WZ2]; 
if((V39<=V40)) goto l60;
pile[v[22]]=jvj+26; pile[WZ1]=1058; pile[WZ2]=V40; 
(*f[43])( );     /*CHGC2(jvj+26,1058,V40)*/
l60:for(i=x[jvj+38],V42=0;i>0;i=t[i],V42++)  ;
if((V42!=1)) goto l68;
if((x[jvj+38]<=0)) goto l68;
x[jvj+30]=s[x[jvj+38]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+38];
pile[v[22]]=jvj+26; pile[WZ1]=247; pile[WZ2]=jvj+30; 
(*f[35])( );     /*CHGC1(jvj+26,247,jvj+30)*/
l68:pile[v[22]]=jvj+26; pile[WZ1]=860; pile[WZ2]=jvj+39; 
(*f[35])( );     /*CHGC1(jvj+26,860,jvj+39)*/
pile[v[22]]=C; pile[WZ1]=935; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(C,935,jvj+40)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+40; 
(*f[432])( );     /*AJEXP0(jvj+26,jvj+40)*/
l67:x[jvj+56]=t[x[jvj+56]];
l66:if((x[jvj+56]<=0)) goto l69;
x[jvj+26]=s[x[jvj+56]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+56];
pile[v[22]]=109; pile[WZ1]=jvj+26; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(109,jvj+26,jvj+37)*/
pile[v[22]]=896; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(896,jvj+37,jvj+38)*/
x[jvj+39]=incon;
if((x[jvj+38]==0)) goto l54;
x[jvj+39]=228 ;z[jvj+39]=228;
l54:pile[v[22]]=948; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(948,jvj+26,jvj+27)*/
if((x[jvj+27]!=68)) goto l55;
x[jvj+39]=954 ;z[jvj+39]=954;
l55:pile[v[22]]=860; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(860,jvj+26,jvj+28)*/
x[jvj+54]=x[jvj+28] ;z[jvj+54]=z[jvj+28];
x[jvj+39]=x[jvj+54] ;z[jvj+39]=z[jvj+54];
goto l58;
l57:x[jvj+39]=530 ;z[jvj+39]=530;
goto l58;
l64:x[jvj+35]=x[jvj+32] ;z[jvj+35]=z[jvj+32];
pile[v[22]]=jvj+35; pile[WZ1]=948; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+35,948,68)*/
pile[WZ1]=860; pile[WZ2]=954; 
(*f[35])( );     /*CHGC1(jvj+35,860,954)*/
pile[v[22]]=C; pile[WZ1]=935; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(C,935,jvj+36)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[432])( );     /*AJEXP0(jvj+35,jvj+36)*/
goto l63;
l65:if(KR!=83&&KR!=90) goto l69;
x[jvj+56]=x[E] ;z[jvj+56]=z[E];
goto l66;
l69:if(KR!=83&&KR!=90) goto l72;
l70:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l72:V70=67;
goto l71;
}
