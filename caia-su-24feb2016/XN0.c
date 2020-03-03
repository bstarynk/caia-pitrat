#include "dx.h"
void XN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V39=0,V40=0,V41=0,V46=0,V47=0,V28=0,V35=0,V76=0,L=0,K=0,V70=0,V71=0,V4=0,V57=0,V100=0,V101=0,V102=0,V73=0,V74=0,V104=0,V105=0,V106=0,V107=0,V85=0,V86=0,V87=0,V88=0,V89=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V52=0,V94=0,V95=0,V96=0,V97=0,V98=0,V91=0,V92=0,V24=0,M=0,V109=0,V110=0,V27=0,V112=0,V113=0;
int X,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,X,jvj+5)*/
if((x[jvj+5]==185)) goto l4;
pile[v[22]]=I; pile[WZ1]=60; 
(*f[38])( );     /*SPC0(I,60,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=V91; pile[WZ1]=X; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(V91,X,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=V92; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V92,62,L)*/
L=pile[WZ2]; 
l17:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,X,jvj+18)*/
pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,X,jvj+19)*/
pile[v[22]]=L; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(L,91,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=V109; pile[WZ1]=jvj+19; 
(*f[223])( );if(v[102]) goto l21;     /*XX0(V109,jvj+19,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=V110; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V110,93,M)*/
M=pile[WZ2]; 
c[v[1]][M]=32;
l19:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(120,X,jvj+20)*/
V27=M+1;
c[v[1]][M]=32;
pile[v[22]]=jvj+20; pile[WZ1]=V27; 
(*f[636])( );if(v[102]) goto l20;     /*XN0(jvj+20,V27,J)*/
J=pile[WZ2]; 
l22:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; v[102]=0;return;
l2:pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l12;     /*FNDC2(162,jvj+2,V46)*/
V46=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l12;     /*FNDC2(162,jvj+3,V47)*/
V47=pile[WZ2]; 
l1:pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l13;     /*FNDC2(162,jvj+3,V41)*/
V41=pile[WZ2]; 
if((V41==36)) goto l15;
l13:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,X,jvj+14)*/
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l14;     /*FNDC2(162,jvj+2,V39)*/
V39=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l14;     /*FNDC2(162,jvj+3,V40)*/
V40=pile[WZ2]; 
l15:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(160,X,jvj+15)*/
pile[v[22]]=162; pile[WZ1]=jvj+15; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(162,jvj+15,V52)*/
V52=pile[WZ2]; 
if((V52!=36)) goto l16;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+16)*/
pile[v[22]]=107; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,X,jvj+17)*/
pile[v[22]]=I; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(I,91,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=V94; pile[WZ1]=jvj+17; pile[WZ2]=44; 
(*f[640])( );     /*XL0(V94,jvj+17,44,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V95,93,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=V96; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V96,40,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=V97; pile[WZ1]=jvj+16; 
(*f[223])( );if(v[102]) goto l16;     /*XX0(V97,jvj+16,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=V98; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V98,41,L)*/
L=pile[WZ2]; 
goto l17;
l3:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,X,jvj+4)*/
goto l1;
l4:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,X,jvj+2)*/
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l9;     /*FNDC2(162,jvj+2,V28)*/
V28=pile[WZ2]; 
if((V28==68)) goto l6;
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(160,X,jvj+6)*/
pile[v[22]]=162; pile[WZ1]=jvj+6; 
(*f[219])( );if(v[102]) goto l6;     /*FNDC2(162,jvj+6,V35)*/
V35=pile[WZ2]; 
if((V35!=46)) goto l6;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,X,jvj+1)*/
l6:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,X,jvj+7)*/
pile[v[22]]=162; pile[WZ1]=jvj+7; 
(*f[219])( );if(v[102]) goto l8;     /*FNDC2(162,jvj+7,K)*/
K=pile[WZ2]; 
if(K!=46&&K!=43) goto l8;
if((V28!=68)) goto l7;
if((K!=46)) goto l7;
l8:if((V28!=68)) goto l9;
pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,X,jvj+9)*/
pile[v[22]]=162; pile[WZ1]=jvj+9; 
(*f[219])( );if(v[102]) goto l9;     /*FNDC2(162,jvj+9,V4)*/
V4=pile[WZ2]; 
if((V4!=46)) goto l9;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,X,jvj+10)*/
pile[v[22]]=I; pile[WZ1]=jvj+10; 
(*f[223])( );if(v[102]) goto l9;     /*XX0(I,jvj+10,L)*/
L=pile[WZ2]; 
goto l17;
l5:pile[v[22]]=I; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(I,46,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=V28; 
(*f[38])( );     /*SPC0(V76,V28,L)*/
L=pile[WZ2]; 
goto l17;
l7:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+8)*/
pile[v[22]]=I; pile[WZ1]=K; 
(*f[38])( );     /*SPC0(I,K,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V70; pile[WZ1]=V28; 
(*f[38])( );     /*SPC0(V70,V28,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=jvj+8; 
(*f[344])( );if(v[102]) goto l8;     /*XX1(V71,jvj+8,L)*/
L=pile[WZ2]; 
goto l17;
l9:pile[v[22]]=160; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(160,X,jvj+3)*/
pile[v[22]]=162; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l3;     /*FNDC2(162,jvj+3,V57)*/
V57=pile[WZ2]; 
if((V57!=37)) goto l10;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,X,jvj+11)*/
pile[v[22]]=I; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(I,46,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=V100; pile[WZ1]=37; 
(*f[38])( );     /*SPC0(V100,37,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=V101; pile[WZ1]=jvj+2; 
(*f[344])( );if(v[102]) goto l10;     /*XX1(V101,jvj+2,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=V102; pile[WZ1]=jvj+11; 
(*f[344])( );if(v[102]) goto l10;     /*XX1(V102,jvj+11,L)*/
L=pile[WZ2]; 
goto l17;
l10:if(V57!=38&&V57!=124&&V57!=95&&V57!=47&&V57!=33&&V57!=(-89)&&V57!=126) goto l11;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,X,jvj+12)*/
pile[v[22]]=I; pile[WZ1]=V57; 
(*f[38])( );     /*SPC0(I,V57,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=jvj+2; 
(*f[223])( );if(v[102]) goto l11;     /*XX0(V73,jvj+2,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=jvj+12; 
(*f[344])( );if(v[102]) goto l11;     /*XX1(V74,jvj+12,L)*/
L=pile[WZ2]; 
goto l17;
l11:if(V57!=35&&V57!=33) goto l3;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,X,jvj+13)*/
pile[v[22]]=I; pile[WZ1]=V57; 
(*f[38])( );     /*SPC0(I,V57,V104)*/
V104=pile[WZ2]; 
pile[v[22]]=V104; pile[WZ1]=jvj+13; 
(*f[344])( );if(v[102]) goto l3;     /*XX1(V104,jvj+13,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V105,91,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=V106; pile[WZ1]=jvj+2; 
(*f[223])( );if(v[102]) goto l3;     /*XX0(V106,jvj+2,V107)*/
V107=pile[WZ2]; 
pile[v[22]]=V107; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V107,93,L)*/
L=pile[WZ2]; 
goto l17;
l12:pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=jvj+3; 
(*f[223])( );if(v[102]) goto l1;     /*XX0(V85,jvj+3,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=V86; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V86,125,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=V87; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V87,123,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=jvj+2; 
(*f[223])( );if(v[102]) goto l1;     /*XX0(V88,jvj+2,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V89,125,L)*/
L=pile[WZ2]; 
goto l17;
l14:pile[v[22]]=I; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(I,123,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=jvj+3; 
(*f[223])( );if(v[102]) goto l15;     /*XX0(V78,jvj+3,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V79,125,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V80,123,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V81; pile[WZ1]=jvj+2; 
(*f[223])( );if(v[102]) goto l15;     /*XX0(V81,jvj+2,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V82,125,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; pile[WZ1]=jvj+14; 
(*f[344])( );if(v[102]) goto l15;     /*XX1(V83,jvj+14,L)*/
L=pile[WZ2]; 
goto l17;
l16:V24=x[X];
L=0;
V112=v[200];
pile[v[22]]=41; pile[WZ1]=V112; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V112,0,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; 
(*f[40])( );     /*SLG0(V113)*/
fflush(stdout);
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l18:M=L;
goto l19;
l20:J=M;
goto l22;
l21:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
