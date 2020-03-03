#include "dx.h"
void SRA4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V42=0,V88=0,V82=0,V83=0,V84=0,V85=0,V86=0,V87=0,V41=0,V1=0,V2=0,X=0,V53=0,V3=0,V4=0,V9=0,V12=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V8=0,V24=0,V75=0,V27=0,V29=0,V78=0,V17=0,V68=0,V69=0,V70=0,V71=0,V72=0,V14=0,V73=0,V74=0,V16=0,V33=0,V37=0,L=0,V47=0,V46=0,V48=0,JJ=0,V49=0,V57=0,V56=0,V58=0,V6=0,V39=0,V93=0,V89=0,V91=0;
int XX,I;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

XX=pile[v[22]]; I=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
X=J=x[jvj+5]=L=incon;
if((I<40000)) goto l5;
J=I;
l5:V1=x[XX];
if((V1>sepcte)) goto l6;
if((V2=w[x[XX]][0])==incon) goto l6;
X=V2;
l7:if(X!=incon) goto l8;
if(J==incon) goto l27;
l30:V39=x[XX];
if((V39<=sepcte)) goto l31;
pile[v[22]]=100; pile[WZ1]=XX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,XX,jvj+1)*/
if((x[jvj+1]==508)) goto l31;
l4:V41=g[72];
if((V41<=0)) goto l31;
V42=vg[72];
if((V42!=0)) goto l1;
if((V41<3)) goto l3;
l1:pile[v[22]]=72; pile[WZ1]=10008; pile[WZ2]=4; pile[WZ3]=(-664); pile[WZ4]=XX; pile[WZ5]=jvj+2; 
(*f[232])( );     /*INTERP3(72,10008,4,(-664),XX,jvj+2)*/
if((x[jvj+2]==135)) goto l2;
l31:v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l2:if((V41<4)) goto l3;
goto l31;
l3:V88=x[XX];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V82; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V82,10008,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(41,3,V83,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V84,125,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=25; pile[WZ1]=V85; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(25,V85,126,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V88; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(41,V88,V86,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; 
(*f[40])( );     /*SLG0(V87)*/
if((V41!=2)) goto l31;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l31;
l6:if((V1<=sepcte)) goto l7;
pile[v[22]]=100; pile[WZ1]=XX; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,XX,jvj+3)*/
if((x[jvj+3]!=508)) goto l7;
pile[v[22]]=218; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,XX,jvj+4)*/
if((V53=w[x[jvj+4]][0])==incon) goto l7;
X=V53;
goto l7;
l8:V3=X;
if((V3>=0)) goto l13;
V4=(-V3);
pile[v[22]]=V4; pile[WZ1]=jvj+5; 
(*f[90])( );if(v[102]) goto l12;     /*SRF0(V4,jvj+5)*/
l13:if(J==incon) goto l14;
l20:if(x[jvj+5]!=incon) goto l19;
l22:if(J==incon) goto l23;
l28:if(x[jvj+5]!=incon) goto l29;
goto l30;
l10:if((V8<4)) goto l11;
goto l13;
l11:V12=x[XX];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V60,10008,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,1,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V62,125,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=(-4419); 
(*f[37])( );     /*SRA0(V63,(-4419),V64)*/
V64=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(41,V12,V64,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
if((V8!=2)) goto l13;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l13;
l12:V8=g[70];
if((V8<=0)) goto l13;
V9=vg[70];
if((V9!=0)) goto l9;
if((V8<3)) goto l11;
l9:pile[v[22]]=70; pile[WZ1]=10008; pile[WZ2]=4; pile[WZ3]=(-664); pile[WZ4]=XX; pile[WZ5]=jvj+6; 
(*f[232])( );     /*INTERP3(70,10008,4,(-664),XX,jvj+6)*/
if((x[jvj+6]==135)) goto l10;
goto l13;
l14:if((V3<=0)) goto l15;
V24=V3-2000;
if((V24>=0)) goto l15;
pile[v[22]]=I; pile[WZ1]=86; 
(*f[38])( );     /*SPC0(I,86,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=V3; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V75,V3,41,J)*/
J=pile[WZ3]; 
goto l20;
l15:V27=V3-2000;
if((V27<0)) goto l20;
V29=V3-4000;
if((V29>=0)) goto l20;
pile[v[22]]=I; pile[WZ1]=108; 
(*f[38])( );     /*SPC0(I,108,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=V27; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V78,V27,41,J)*/
J=pile[WZ3]; 
goto l20;
l17:if((V16<4)) goto l18;
goto l22;
l18:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=10008; 
(*f[98])( );     /*SRA3(135,V68,10008,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,2,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V70,125,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=(-1448); 
(*f[37])( );     /*SRA0(V71,(-1448),V72)*/
V72=pile[WZ2]; 
pile[v[22]]=V72; pile[WZ1]=V14; 
(*f[37])( );     /*SRA0(V72,V14,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=X; 
(*f[37])( );     /*SRA0(V73,X,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
if((V16!=2)) goto l22;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l22;
l19:V33=incon;
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+5,V33)*/
V33=pile[WZ2]; 
V37=I+V33;
L=V37;
l21:pile[v[22]]=163; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(163,jvj+5,V14)*/
V14=pile[WZ2]; 
if((V14==X)) goto l22;
V16=g[71];
if((V16<=0)) goto l22;
V17=vg[71];
if((V17!=0)) goto l16;
if((V16<3)) goto l18;
l16:pile[v[22]]=71; pile[WZ1]=10008; pile[WZ2]=4; pile[WZ3]=(-620); pile[WZ4]=jvj+5; pile[WZ5]=(-596); pile[v[22]+6]=X; pile[v[22]+7]=jvj+7; 
(*f[218])( );     /*INTERP2(71,10008,4,(-620),jvj+5,(-596),X,jvj+7)*/
if((x[jvj+7]==135)) goto l17;
goto l22;
l23:if(L!=incon) goto l24;
l27:J=I;
goto l28;
l24:if((X==(-5598))) goto l25;
if((X==(-6231))) goto l26;
V6=L+1;
J=V6;
goto l28;
l25:V47=x[XX];
V46=V47-sepfacts;
V48=L+1;
pile[v[22]]=V46; pile[WZ1]=V48; 
(*f[221])( );     /*SRN0(V46,V48,JJ)*/
JJ=pile[WZ2]; 
V49=JJ+1;
J=V49;
c[v[1]][JJ]=84;
goto l28;
l26:V57=x[XX];
V56=V57-sephist;
V58=L+1;
pile[v[22]]=V56; pile[WZ1]=V58; 
(*f[221])( );     /*SRN0(V56,V58,J)*/
J=pile[WZ2]; 
goto l28;
l29:if(L!=incon) goto l32;
goto l30;
l32:V93=L;
x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
l33:pile[v[22]]=162; pile[WZ1]=jvj+8; 
(*f[219])( );if(v[102]) goto l34;     /*FNDC2(162,jvj+8,V89)*/
V89=pile[WZ2]; 
c[v[1]][V93]=V89;
l34:if((V93<=I)) goto l30;
pile[v[22]]=153; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(153,jvj+8,jvj+9)*/
V91=V93-1;
x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
V93=V91;
goto l33;
}
