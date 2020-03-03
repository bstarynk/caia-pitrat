#include "dx.h"
void ORA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V99=0,V36=0,V63=0,V87=0,V93=0,V138=0,V144=0,V150=0,V16=0,V8=0,V125=0,V24=0,V18=0,V33=0,V27=0,V75=0,V69=0,V84=0,V78=0,V41=0,V54=0,V49=0,V102=0,V156=0;
int X,R,P;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=10300;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2208&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; R=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,X,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V99; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V99,333,P)*/
l1:pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,X,jvj+3)*/
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+3,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V36; pile[WZ2]=470; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V36,470,P)*/
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,X,jvj+4)*/
if((x[jvj+4]==435)) goto l3;
if((x[jvj+4]==61)) goto l4;
if((x[jvj+4]==73)) goto l6;
if((x[jvj+4]==22)) goto l9;
if((x[jvj+4]==39)) goto l13;
if((x[jvj+4]!=69)) goto l22;
pile[v[22]]=108; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(108,X,jvj+26)*/
l19:if((x[jvj+26]<=0)) goto l22;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+27,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+28,V75)*/
V75=pile[WZ2]; 
V69=V75;
pile[v[22]]=R; pile[WZ1]=V69; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V69,333,P)*/
l21:pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+27,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+29,V84)*/
V84=pile[WZ2]; 
V78=V84;
pile[v[22]]=R; pile[WZ1]=V78; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V78,333,P)*/
l20:x[jvj+26]=t[x[jvj+26]];
goto l19;
l3:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,X,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+5,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V63; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V63,333,P)*/
l22:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,X,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]==44)) goto l23;
if((x[jvj+31]!=25)) goto l28;
x[jvj+33]=d[20];z[jvj+33]=0;
l24:if((x[jvj+33]<=0)) goto l28;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=jvj+34; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+34,X,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+35,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+34; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(268,jvj+34,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=X; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+36,X,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=21)) goto l26;
V49=V54;
pile[v[22]]=R; pile[WZ1]=V49; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V49,334,P)*/
l26:if(x[jvj+38]!=96&&x[jvj+38]!=89&&x[jvj+38]!=41&&x[jvj+38]!=20&&x[jvj+38]!=128&&x[jvj+38]!=570&&x[jvj+38]!=1317) goto l27;
V102=V54;
pile[v[22]]=R; pile[WZ1]=V102; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V102,334,P)*/
l27:pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+37,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=24)) goto l25;
pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+37,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=41)) goto l25;
V156=V54;
pile[v[22]]=R; pile[WZ1]=V156; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V156,334,P)*/
l25:x[jvj+33]=t[x[jvj+33]];
goto l24;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,X,jvj+6)*/
pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+6,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V87; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V87,333,P)*/
l5:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,X,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+7,V93)*/
V93=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V93; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V93,333,P)*/
goto l22;
l6:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,X,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+8,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V138; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V138,333,P)*/
l7:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+9,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V144; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V144,333,P)*/
l8:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(160,X,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+10,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V150; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V150,333,P)*/
goto l22;
l9:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,X,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+11,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,X,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=20)) goto l10;
pile[v[22]]=R; pile[WZ1]=V16; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V16,333,P)*/
l10:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,X,jvj+14)*/
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+14,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,X,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==25)) goto l11;
pile[v[22]]=R; pile[WZ1]=V8; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V8,333,P)*/
l11:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,X,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+17,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,X,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+18,jvj+19)*/
if(x[jvj+19]==178||x[jvj+19]==44||x[jvj+19]==25) goto l12;
pile[v[22]]=R; pile[WZ1]=V125; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V125,333,P)*/
l12:if((x[jvj+19]==25)) goto l22;
pile[v[22]]=R; pile[WZ1]=V125; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V125,333,P)*/
goto l22;
l13:pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(114,X,jvj+20)*/
l14:if((x[jvj+20]>0)) goto l15;
pile[v[22]]=113; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(113,X,jvj+23)*/
l17:if((x[jvj+23]<=0)) goto l22;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+24,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+25,V33)*/
V33=pile[WZ2]; 
V27=V33;
pile[v[22]]=R; pile[WZ1]=V27; pile[WZ2]=470; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V27,470,P)*/
l18:x[jvj+23]=t[x[jvj+23]];
goto l17;
l15:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+21,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+22,V24)*/
V24=pile[WZ2]; 
V18=V24;
pile[v[22]]=R; pile[WZ1]=V18; pile[WZ2]=333; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V18,333,P)*/
l16:x[jvj+20]=t[x[jvj+20]];
goto l14;
l23:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,X,jvj+32)*/
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+32,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=V41; pile[WZ2]=334; pile[WZ3]=P; 
(*f[2089])( );     /*ORZ0(R,V41,334,P)*/
l28:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
}
