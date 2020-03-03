#include "dx.h"
void FUSEPBSTAT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V20=0,V29=0,V25=0,V31=0,V26=0,V4=0,V28=0,V10=0,V=0,V61=0,V59=0,V62=0,V70=0,V68=0,V71=0,V79=0,V77=0,V80=0,V86=0;
int M,MT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=76;
x[jvj+1]=11518;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1213&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; MT=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=MT; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(218,MT,jvj+2)*/
x[jvj+34]=578 ;z[jvj+34]=578;
pile[v[22]]=jvj+34; pile[WZ1]=M; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(jvj+34,M,jvj+35)*/
l30:if((x[jvj+35]>0)) goto l32;
pile[v[22]]=jvj+2; pile[WZ1]=218; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(jvj+2,218,jvj+3)*/
pile[v[22]]=M; pile[WZ1]=jvj+34; 
(*f[36])( );     /*PLUSC0(M,jvj+34,jvj+3)*/
l22:x[jvj+25]=d[182];z[jvj+25]=0;
l20:if((x[jvj+25]>0)) goto l21;
pile[v[22]]=159; pile[WZ1]=MT; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(159,MT,jvj+30)*/
l26:if((x[jvj+30]<=0)) goto l29;
x[jvj+19]=s[x[jvj+30]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+30];
pile[v[22]]=110; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(110,jvj+19,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=288; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(288,jvj+19,jvj+31)*/
V=V10;
x[jvj+32]=x[jvj+31] ;z[jvj+32]=z[jvj+31];
x[jvj+33]=incon;
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+4)*/
x[jvj+68]=x[jvj+4] ;z[jvj+68]=z[jvj+4];
l1:if((x[jvj+68]>0)) goto l2;
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=288; pile[WZ3]=jvj+32; pile[WZ4]=jvj+33; 
(*f[692])( );     /*QUADRI13(110,V,288,jvj+32,jvj+33)*/
l28:x[jvj+22]=x[jvj+33] ;z[jvj+22]=z[jvj+33];
x[jvj+16]=d[181];z[jvj+16]=0;
l12:if((x[jvj+16]>0)) goto l13;
pile[v[22]]=256; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(256,jvj+19,jvj+23)*/
x[jvj+72]=x[jvj+23] ;z[jvj+72]=z[jvj+23];
l17:if((x[jvj+72]>0)) goto l18;
pile[v[22]]=jvj+3; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+3,159,jvj+22)*/
l27:x[jvj+30]=t[x[jvj+30]];
goto l26;
l2:x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
pile[v[22]]=110; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(110,jvj+5,V13)*/
V13=pile[WZ2]; 
if((V13!=V)) goto l3;
pile[v[22]]=288; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(288,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[jvj+32])) goto l3;
x[jvj+33]=x[jvj+5] ;z[jvj+33]=z[jvj+5];
goto l28;
l3:x[jvj+68]=t[x[jvj+68]];
goto l1;
l5:pile[v[22]]=258; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(258,jvj+10,jvj+11)*/
x[jvj+69]=x[jvj+11] ;z[jvj+69]=z[jvj+11];
l6:if((x[jvj+69]<=0)) goto l8;
x[jvj+12]=s[x[jvj+69]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+69];
pile[v[22]]=218; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,jvj+12,jvj+13)*/
x[jvj+38]=258 ;z[jvj+38]=258;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(jvj+38,jvj+39,jvj+40)*/
l33:if((x[jvj+40]>0)) goto l35;
pile[v[22]]=jvj+13; pile[WZ1]=218; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+13,218,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+39,jvj+38,jvj+41)*/
l39:x[jvj+49]=d[181];z[jvj+49]=0;
l40:if((x[jvj+49]>0)) goto l41;
l7:x[jvj+69]=t[x[jvj+69]];
goto l6;
l10:x[jvj+70]=x[jvj+14] ;z[jvj+70]=z[jvj+14];
l9:if((x[jvj+70]<=0)) goto l51;
x[jvj+15]=s[x[jvj+70]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+70];
pile[v[22]]=1106; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1106,jvj+15,V20)*/
V20=pile[WZ2]; 
x[jvj+65]=258 ;z[jvj+65]=258;
pile[v[22]]=jvj+65; pile[WZ1]=jvj+39; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(jvj+65,jvj+39,jvj+66)*/
l57:if((x[jvj+66]>0)) goto l59;
pile[v[22]]=V20; pile[WZ1]=1106; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(V20,1106,jvj+59)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+39,jvj+65,jvj+59)*/
l45:x[jvj+54]=d[181];z[jvj+54]=0;
l46:if((x[jvj+54]>0)) goto l47;
l11:x[jvj+70]=t[x[jvj+70]];
goto l9;
l13:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=1447; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,1447,jvj+18)*/
x[jvj+71]=x[jvj+18] ;z[jvj+71]=z[jvj+18];
l14:if((x[jvj+71]>0)) goto l15;
x[jvj+16]=t[x[jvj+16]];
goto l12;
l15:x[jvj+20]=s[x[jvj+71]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+71];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ3]=jvj+21; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+19,jvj+20,V29,jvj+21)*/
V29=pile[WZ2]; 
V25=V29;
V31=V25;
pile[v[22]]=jvj+22; pile[WZ2]=V31; 
(*f[186])( );     /*BTC0(jvj+22,jvj+20,V31)*/
l16:x[jvj+71]=t[x[jvj+71]];
goto l14;
l18:x[jvj+10]=s[x[jvj+72]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+72];
pile[v[22]]=218; pile[WZ1]=jvj+10; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+10,jvj+24)*/
x[jvj+46]=x[jvj+24] ;z[jvj+46]=z[jvj+24];
x[jvj+44]=256 ;z[jvj+44]=256;
pile[v[22]]=jvj+44; pile[WZ1]=jvj+22; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(jvj+44,jvj+22,jvj+45)*/
l36:if((x[jvj+45]>0)) goto l38;
pile[v[22]]=jvj+46; pile[WZ1]=218; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+46,218,jvj+39)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+22,jvj+44,jvj+39)*/
l4:pile[v[22]]=1515; pile[WZ1]=1447; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1515,1447,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+46]) goto l5;
l8:pile[v[22]]=258; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(258,jvj+10,jvj+14)*/
pile[v[22]]=1514; pile[WZ1]=1447; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1514,1447,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+46]) goto l10;
pile[v[22]]=1516; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1516,1447,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[jvj+46]) goto l10;
l51:x[jvj+60]=d[181];z[jvj+60]=0;
l52:if((x[jvj+60]>0)) goto l53;
l19:x[jvj+72]=t[x[jvj+72]];
goto l17;
l21:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=1447; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(jvj+26,1447,jvj+27)*/
x[jvj+73]=x[jvj+27] ;z[jvj+73]=z[jvj+27];
l23:if((x[jvj+73]>0)) goto l24;
x[jvj+25]=t[x[jvj+25]];
goto l20;
l24:x[jvj+28]=s[x[jvj+73]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+73];
pile[v[22]]=MT; pile[WZ1]=jvj+28; pile[WZ3]=jvj+29; 
(*f[45])( );if(v[102]) goto l25;     /*FNDZ0(MT,jvj+28,V26,jvj+29)*/
V26=pile[WZ2]; 
V4=V26;
V28=V4;
pile[v[22]]=jvj+3; pile[WZ2]=V28; 
(*f[186])( );     /*BTC0(jvj+3,jvj+28,V28)*/
l25:x[jvj+73]=t[x[jvj+73]];
goto l23;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l31:x[jvj+35]=t[x[jvj+35]];
goto l30;
l32:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=218; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(218,jvj+36,jvj+37)*/
if((x[jvj+37]!=x[jvj+2])) goto l31;
x[jvj+3]=x[jvj+36] ;z[jvj+3]=z[jvj+36];
goto l22;
l34:x[jvj+40]=t[x[jvj+40]];
goto l33;
l35:x[jvj+42]=s[x[jvj+40]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+40];
pile[v[22]]=218; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(218,jvj+42,jvj+43)*/
if((x[jvj+43]!=x[jvj+13])) goto l34;
x[jvj+41]=x[jvj+42] ;z[jvj+41]=z[jvj+42];
goto l39;
l37:x[jvj+45]=t[x[jvj+45]];
goto l36;
l38:x[jvj+47]=s[x[jvj+45]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+45];
pile[v[22]]=218; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(218,jvj+47,jvj+48)*/
if((x[jvj+48]!=x[jvj+46])) goto l37;
x[jvj+39]=x[jvj+47] ;z[jvj+39]=z[jvj+47];
goto l4;
l41:x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=jvj+50; pile[WZ1]=1447; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(jvj+50,1447,jvj+51)*/
x[jvj+74]=x[jvj+51] ;z[jvj+74]=z[jvj+51];
l42:if((x[jvj+74]>0)) goto l43;
x[jvj+49]=t[x[jvj+49]];
goto l40;
l43:x[jvj+52]=s[x[jvj+74]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+74];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+52; pile[WZ3]=jvj+53; 
(*f[45])( );if(v[102]) goto l44;     /*FNDZ0(jvj+12,jvj+52,V61,jvj+53)*/
V61=pile[WZ2]; 
V59=V61;
V62=V59;
pile[v[22]]=jvj+41; pile[WZ2]=V62; 
(*f[186])( );     /*BTC0(jvj+41,jvj+52,V62)*/
l44:x[jvj+74]=t[x[jvj+74]];
goto l42;
l47:x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=jvj+55; pile[WZ1]=1447; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(jvj+55,1447,jvj+56)*/
x[jvj+75]=x[jvj+56] ;z[jvj+75]=z[jvj+56];
l48:if((x[jvj+75]>0)) goto l49;
x[jvj+54]=t[x[jvj+54]];
goto l46;
l49:x[jvj+57]=s[x[jvj+75]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+75];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+57; pile[WZ3]=jvj+58; 
(*f[45])( );if(v[102]) goto l50;     /*FNDZ0(jvj+15,jvj+57,V70,jvj+58)*/
V70=pile[WZ2]; 
V68=V70;
V71=V68;
pile[v[22]]=jvj+59; pile[WZ2]=V71; 
(*f[186])( );     /*BTC0(jvj+59,jvj+57,V71)*/
l50:x[jvj+75]=t[x[jvj+75]];
goto l48;
l53:x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=jvj+61; pile[WZ1]=1447; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(jvj+61,1447,jvj+62)*/
x[jvj+76]=x[jvj+62] ;z[jvj+76]=z[jvj+62];
l54:if((x[jvj+76]>0)) goto l55;
x[jvj+60]=t[x[jvj+60]];
goto l52;
l55:x[jvj+63]=s[x[jvj+76]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+76];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+63; pile[WZ3]=jvj+64; 
(*f[45])( );if(v[102]) goto l56;     /*FNDZ0(jvj+10,jvj+63,V79,jvj+64)*/
V79=pile[WZ2]; 
V77=V79;
V80=V77;
pile[v[22]]=jvj+39; pile[WZ2]=V80; 
(*f[186])( );     /*BTC0(jvj+39,jvj+63,V80)*/
l56:x[jvj+76]=t[x[jvj+76]];
goto l54;
l58:x[jvj+66]=t[x[jvj+66]];
goto l57;
l59:x[jvj+67]=s[x[jvj+66]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+66];
pile[v[22]]=1106; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(1106,jvj+67,V86)*/
V86=pile[WZ2]; 
if((V86!=V20)) goto l58;
x[jvj+59]=x[jvj+67] ;z[jvj+59]=z[jvj+67];
goto l45;
}
