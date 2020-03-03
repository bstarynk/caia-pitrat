#include "dx.h"
void AJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DX=0,DY=0,DZ=0,DT=0,V115=0,V122=0,V134=0,V142=0,V141=0,V139=0,V110=0,V155=0,V163=0,V162=0,V160=0,V112=0,V176=0,V184=0,V183=0,V181=0,V114=0,V197=0,V205=0,V204=0,V202=0,V120=0,V118=0,V121=0,V129=0,V131=0,V133=0,V132=0,V137=0,V135=0,V136=0,V125=0,V124=0,V127=0,V150=0,V152=0,V154=0,V153=0,V158=0,V156=0,V157=0,V146=0,V145=0,V148=0,V171=0,V173=0,V175=0,V174=0,V179=0,V177=0,V178=0,V167=0,V166=0,V169=0,V192=0,V194=0,V196=0,V195=0,V200=0,V198=0,V199=0,V188=0,V187=0,V190=0;
int MA,N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11124;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==386&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
MA=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+3]=incon;
pile[v[22]]=N; 
(*f[365])( );     /*STK0(N)*/
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(1,64,67,jvj+2)*/
(*f[107])( );     /*CRC0(1,DX)*/
DX=pile[WZ1]; 
pile[v[22]]=DX; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(DX,64,67,jvj+3)*/
(*f[107])( );     /*CRC0(DX,DY)*/
DY=pile[WZ1]; 
pile[v[22]]=DY; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+4; 
(*f[78])( );if(v[102]) goto l1;     /*SMA0(DY,64,67,jvj+4)*/
(*f[107])( );     /*CRC0(DY,DZ)*/
DZ=pile[WZ1]; 
pile[v[22]]=DZ; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l2;     /*SMA0(DZ,64,67,jvj+5)*/
(*f[107])( );     /*CRC0(DZ,DT)*/
DT=pile[WZ1]; 
pile[v[22]]=DT; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+6; 
(*f[78])( );if(v[102]) goto l3;     /*SMA0(DT,64,67,jvj+6)*/
l6:pile[v[22]]=59; 
(*f[346])( );     /*LK1(59)*/
V115=bh[v[1]][0];
if((V115==32)) goto l11;
pile[v[22]]=250; pile[WZ1]=250; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(250,250,jvj+7)*/
V122=(-1);
if((V134=w[x[jvj+3]][1])==incon) goto l10;
if((V134==89)) goto l17;
if((V134==20)) goto l18;
if((V134==41)) goto l16;
if((V134!=96)) goto l10;
V142=V122+1;
V141=bh[v[1]][V142];
if((V141==32)) goto l10;
pile[v[22]]=V122; 
(*f[131])( );     /*SMV0(V122,V139,V110)*/
V139=pile[WZ1]; V110=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=V139; 
(*f[177])( );     /*CHGC4(jvj+7,jvj+3,V139)*/
l7:pile[v[22]]=250; pile[WZ1]=jvj+7; 
(*f[71])( );     /*ENLV0(250,jvj+7)*/
if((x[jvj+4]==250)) goto l10;
if((V155=w[x[jvj+4]][1])==incon) goto l10;
if((V155==89)) goto l23;
if((V155==20)) goto l24;
if((V155==41)) goto l22;
if((V155!=96)) goto l10;
V163=V110+1;
V162=bh[v[1]][V163];
if((V162==32)) goto l10;
pile[v[22]]=V110; 
(*f[131])( );     /*SMV0(V110,V160,V112)*/
V160=pile[WZ1]; V112=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; pile[WZ2]=V160; 
(*f[177])( );     /*CHGC4(jvj+7,jvj+4,V160)*/
l8:if((x[jvj+5]==250)) goto l10;
if((V176=w[x[jvj+5]][1])==incon) goto l10;
if((V176==89)) goto l29;
if((V176==20)) goto l30;
if((V176==41)) goto l28;
if((V176!=96)) goto l10;
V184=V112+1;
V183=bh[v[1]][V184];
if((V183==32)) goto l10;
pile[v[22]]=V112; 
(*f[131])( );     /*SMV0(V112,V181,V114)*/
V181=pile[WZ1]; V114=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; pile[WZ2]=V181; 
(*f[177])( );     /*CHGC4(jvj+7,jvj+5,V181)*/
l9:if((x[jvj+6]==250)) goto l10;
if((V197=w[x[jvj+6]][1])==incon) goto l10;
if((V197==89)) goto l35;
if((V197==20)) goto l36;
if((V197==41)) goto l34;
if((V197!=96)) goto l10;
V205=V114+1;
V204=bh[v[1]][V205];
if((V204==32)) goto l10;
pile[v[22]]=V114; 
(*f[131])( );     /*SMV0(V114,V202,V120)*/
V202=pile[WZ1]; V120=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; pile[WZ2]=V202; 
(*f[177])( );     /*CHGC4(jvj+7,jvj+6,V202)*/
l10:if((V118=w[x[jvj+2]][1])==incon) goto l11;
if((V118==20)) goto l12;
if((V118!=23)) goto l11;
pile[v[22]]=274; pile[WZ1]=MA; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(274,MA,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+8,jvj+2,jvj+7)*/
l11:V121=bh[v[1]][0];
if((V121!=32)) goto l6;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+4]=250 ;z[jvj+4]=250;
l2:x[jvj+5]=250 ;z[jvj+5]=250;
l3:x[jvj+6]=250 ;z[jvj+6]=250;
if(x[jvj+2]!=incon) goto l4;
goto l5;
l4:if(x[jvj+3]!=incon) goto l6;
goto l5;
l12:pile[v[22]]=274; pile[WZ1]=MA; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(274,MA,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(jvj+9,jvj+2,jvj+7)*/
goto l11;
l14:pile[v[22]]=V129; 
(*f[126])( );     /*LND2(V129,V131,V110)*/
V131=pile[WZ1]; V110=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=V131; 
(*f[43])( );     /*CHGC2(jvj+7,jvj+3,V131)*/
goto l7;
l15:V133=134;
l13:if((V133==135)) goto l14;
goto l10;
l16:V129=V122+1;
V132=bh[v[1]][V129];
if((V132<48)) goto l15;
if((V132>57)) goto l15;
V133=135;
goto l13;
l17:V136=V122+1;
V135=bh[v[1]][V136];
if((V135==32)) goto l10;
V137=V136+1;
V110=V137;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=V135; 
(*f[69])( );     /*CHGC3(jvj+7,jvj+3,V135)*/
goto l7;
l18:V127=V122+1;
V124=bh[v[1]][V127];
if((V124==32)) goto l10;
pile[v[22]]=V122; 
(*f[107])( );     /*CRC0(V122,V125)*/
V125=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+10; 
(*f[78])( );if(v[102]) goto l10;     /*SMA0(V122,64,67,jvj+10)*/
V110=V125;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+7,jvj+3,jvj+10)*/
goto l7;
l20:pile[v[22]]=V150; 
(*f[126])( );     /*LND2(V150,V152,V112)*/
V152=pile[WZ1]; V112=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; pile[WZ2]=V152; 
(*f[43])( );     /*CHGC2(jvj+7,jvj+4,V152)*/
goto l8;
l21:V154=134;
l19:if((V154==135)) goto l20;
goto l10;
l22:V150=V110+1;
V153=bh[v[1]][V150];
if((V153<48)) goto l21;
if((V153>57)) goto l21;
V154=135;
goto l19;
l23:V157=V110+1;
V156=bh[v[1]][V157];
if((V156==32)) goto l10;
V158=V157+1;
V112=V158;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; pile[WZ2]=V156; 
(*f[69])( );     /*CHGC3(jvj+7,jvj+4,V156)*/
goto l8;
l24:V148=V110+1;
V145=bh[v[1]][V148];
if((V145==32)) goto l10;
pile[v[22]]=V110; 
(*f[107])( );     /*CRC0(V110,V146)*/
V146=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+11; 
(*f[78])( );if(v[102]) goto l10;     /*SMA0(V110,64,67,jvj+11)*/
V112=V146;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+7,jvj+4,jvj+11)*/
goto l8;
l26:pile[v[22]]=V171; 
(*f[126])( );     /*LND2(V171,V173,V114)*/
V173=pile[WZ1]; V114=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; pile[WZ2]=V173; 
(*f[43])( );     /*CHGC2(jvj+7,jvj+5,V173)*/
goto l9;
l27:V175=134;
l25:if((V175==135)) goto l26;
goto l10;
l28:V171=V112+1;
V174=bh[v[1]][V171];
if((V174<48)) goto l27;
if((V174>57)) goto l27;
V175=135;
goto l25;
l29:V178=V112+1;
V177=bh[v[1]][V178];
if((V177==32)) goto l10;
V179=V178+1;
V114=V179;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; pile[WZ2]=V177; 
(*f[69])( );     /*CHGC3(jvj+7,jvj+5,V177)*/
goto l9;
l30:V169=V112+1;
V166=bh[v[1]][V169];
if((V166==32)) goto l10;
pile[v[22]]=V112; 
(*f[107])( );     /*CRC0(V112,V167)*/
V167=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+12; 
(*f[78])( );if(v[102]) goto l10;     /*SMA0(V112,64,67,jvj+12)*/
V114=V167;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+7,jvj+5,jvj+12)*/
goto l9;
l32:pile[v[22]]=V192; 
(*f[126])( );     /*LND2(V192,V194,V120)*/
V194=pile[WZ1]; V120=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; pile[WZ2]=V194; 
(*f[43])( );     /*CHGC2(jvj+7,jvj+6,V194)*/
goto l10;
l33:V196=134;
l31:if((V196==135)) goto l32;
goto l10;
l34:V192=V114+1;
V195=bh[v[1]][V192];
if((V195<48)) goto l33;
if((V195>57)) goto l33;
V196=135;
goto l31;
l35:V199=V114+1;
V198=bh[v[1]][V199];
if((V198==32)) goto l10;
V200=V199+1;
V120=V200;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; pile[WZ2]=V198; 
(*f[69])( );     /*CHGC3(jvj+7,jvj+6,V198)*/
goto l10;
l36:V190=V114+1;
V187=bh[v[1]][V190];
if((V187==32)) goto l10;
pile[v[22]]=V114; 
(*f[107])( );     /*CRC0(V114,V188)*/
V188=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+13; 
(*f[78])( );if(v[102]) goto l10;     /*SMA0(V114,64,67,jvj+13)*/
V120=V188;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+7,jvj+6,jvj+13)*/
goto l10;
}
