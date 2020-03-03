#include "dx.h"
void SRA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V43=0,V89=0,V83=0,V84=0,V85=0,V86=0,V87=0,V88=0,V42=0,V1=0,V2=0,X=0,V54=0,V33=0,I=0,V3=0,V4=0,V9=0,V12=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V8=0,V24=0,V76=0,V27=0,V29=0,V79=0,V17=0,V69=0,V70=0,V71=0,V72=0,V73=0,V14=0,V74=0,V75=0,V16=0,V37=0,V36=0,V34=0,V38=0,L=0,V48=0,V47=0,V49=0,JJ=0,V50=0,V58=0,V57=0,V59=0,V6=0,V40=0,V94=0,V90=0,V92=0;
int KP,II,XX;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

KP=pile[v[22]]; II=pile[v[22]+1]; XX=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
X=J=x[jvj+5]=L=incon;
if((II<40000)) goto l5;
J=II;
l5:V1=x[XX];
if((V1>sepcte)) goto l6;
if((V2=w[x[XX]][0])==incon) goto l6;
X=V2;
l7:if((II>0)) goto l8;
I=0;
l9:if(X!=incon) goto l10;
if(J==incon) goto l31;
l34:V40=x[XX];
if((V40<=sepcte)) goto l35;
pile[v[22]]=100; pile[WZ1]=XX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,XX,jvj+1)*/
if((x[jvj+1]==508)) goto l35;
l4:V42=g[72];
if((V42<=0)) goto l35;
V43=vg[72];
if((V43!=0)) goto l1;
if((V42<3)) goto l3;
l1:pile[v[22]]=72; pile[WZ1]=10008; pile[WZ2]=1; pile[WZ3]=(-664); pile[WZ4]=XX; pile[WZ5]=jvj+2; 
(*f[232])( );     /*INTERP3(72,10008,1,(-664),XX,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
l35:v[0]=jvj; v[22]-=4; pile[v[22]+3]=J; return;
l2:if((V42<4)) goto l3;
goto l35;
l3:V89=x[XX];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V83; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V83,10008,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(41,3,V84,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=V85; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V85,125,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=25; pile[WZ1]=V86; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(25,V86,126,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V89; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(41,V89,V87,V88)*/
V88=pile[WZ3]; 
pile[v[22]]=V88; 
(*f[40])( );     /*SLG0(V88)*/
if((V42!=2)) goto l35;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l35;
l6:if((V1<=sepcte)) goto l7;
pile[v[22]]=100; pile[WZ1]=XX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,XX,jvj+3)*/
if((x[jvj+3]!=508)) goto l7;
pile[v[22]]=218; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,XX,jvj+4)*/
if((V54=w[x[jvj+4]][0])==incon) goto l7;
X=V54;
goto l7;
l8:V33=II+1;
I=V33;
c[v[1]][II]=32;
goto l9;
l10:V3=X;
if((V3>=0)) goto l15;
V4=(-V3);
pile[v[22]]=V4; pile[WZ1]=jvj+5; 
(*f[90])( );if(v[102]) goto l14;     /*SRF0(V4,jvj+5)*/
l15:if(J==incon) goto l16;
l23:if(x[jvj+5]!=incon) goto l21;
l26:if(J==incon) goto l27;
l32:if(x[jvj+5]!=incon) goto l33;
goto l34;
l12:if((V8<4)) goto l13;
goto l15;
l13:V12=x[XX];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V61; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V61,10008,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,1,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V63,125,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=(-4419); 
(*f[37])( );     /*SRA0(V64,(-4419),V65)*/
V65=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(41,V12,V65,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
if((V8!=2)) goto l15;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l15;
l14:V8=g[70];
if((V8<=0)) goto l15;
V9=vg[70];
if((V9!=0)) goto l11;
if((V8<3)) goto l13;
l11:pile[v[22]]=70; pile[WZ1]=10008; pile[WZ2]=1; pile[WZ3]=(-664); pile[WZ4]=XX; pile[WZ5]=jvj+6; 
(*f[232])( );     /*INTERP3(70,10008,1,(-664),XX,jvj+6)*/
if((x[jvj+6]==135)) goto l12;
goto l15;
l16:if((V3<=0)) goto l17;
V24=V3-2000;
if((V24>=0)) goto l17;
pile[v[22]]=I; pile[WZ1]=86; 
(*f[38])( );     /*SPC0(I,86,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=V76; pile[WZ1]=V3; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V76,V3,41,J)*/
J=pile[WZ3]; 
goto l23;
l17:V27=V3-2000;
if((V27<0)) goto l23;
V29=V3-4000;
if((V29>=0)) goto l23;
pile[v[22]]=I; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(I,108,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=V79; pile[WZ1]=V27; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V79,V27,41,J)*/
J=pile[WZ3]; 
goto l23;
l19:if((V16<4)) goto l20;
goto l26;
l20:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V69,10008,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(41,2,V70,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V71,125,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=(-1448); 
(*f[37])( );     /*SRA0(V72,(-1448),V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=V14; 
(*f[37])( );     /*SRA0(V73,V14,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=X; 
(*f[37])( );     /*SRA0(V74,X,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; 
(*f[40])( );     /*SLG0(V75)*/
if((V16!=2)) goto l26;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l26;
l21:V34=incon;
if((x[KP]!=135)) goto l22;
if(X==(-5598)||X==(-6231)) goto l22;
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+5,V37)*/
V37=pile[WZ2]; 
V36=V37-1;
V34=V36;
l24:V38=I+V34;
L=V38;
l25:pile[v[22]]=163; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(163,jvj+5,V14)*/
V14=pile[WZ2]; 
if((V14==X)) goto l26;
V16=g[71];
if((V16<=0)) goto l26;
V17=vg[71];
if((V17!=0)) goto l18;
if((V16<3)) goto l20;
l18:pile[v[22]]=71; pile[WZ1]=10008; pile[WZ2]=1; pile[WZ3]=(-620); pile[WZ4]=jvj+5; pile[WZ5]=(-596); pile[v[22]+6]=X; pile[v[22]+7]=jvj+7; 
(*f[218])( );     /*INTERP2(71,10008,1,(-620),jvj+5,(-596),X,jvj+7)*/
if((x[jvj+7]==135)) goto l19;
goto l26;
l22:pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+5,V34)*/
V34=pile[WZ2]; 
goto l24;
l27:if(L!=incon) goto l28;
l31:J=I;
goto l32;
l28:if((X==(-5598))) goto l29;
if((X==(-6231))) goto l30;
V6=L+1;
J=V6;
goto l32;
l29:V48=x[XX];
V47=V48-sepfacts;
V49=L+1;
pile[v[22]]=V47; pile[WZ1]=V49; 
(*f[221])( );     /*SRN0(V47,V49,JJ)*/
JJ=pile[WZ2]; 
V50=JJ+1;
J=V50;
c[v[1]][JJ]=84;
goto l32;
l30:V58=x[XX];
V57=V58-sephist;
V59=L+1;
pile[v[22]]=V57; pile[WZ1]=V59; 
(*f[221])( );     /*SRN0(V57,V59,J)*/
J=pile[WZ2]; 
goto l32;
l33:if(L!=incon) goto l36;
goto l34;
l36:V94=L;
x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
l37:pile[v[22]]=162; pile[WZ1]=jvj+8; 
(*f[219])( );if(v[102]) goto l38;     /*FNDC2(162,jvj+8,V90)*/
V90=pile[WZ2]; 
c[v[1]][V94]=V90;
l38:if((V94<=I)) goto l34;
pile[v[22]]=153; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(153,jvj+8,jvj+9)*/
V92=V94-1;
x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
V94=V92;
goto l37;
}
