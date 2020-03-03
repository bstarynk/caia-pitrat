#include "dx.h"
void SPONS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V92=0,V94=0,V1=0,V29=0,V24=0,V49=0,V96=0,V98=0,V25=0,V5=0,V8=0,R=0,RS=0,V39=0,V33=0,W=0,K=0,V104=0,V68=0,V69=0,V71=0,V72=0,V73=0,V70=0,V66=0,V67=0,V65=0,V74=0,V91=0,V87=0,V84=0,V80=0,V81=0,V82=0,V78=0,V79=0,V77=0,V83=0,V63=0,V54=0,V55=0,V59=0,V60=0,V61=0,V57=0,V58=0,V105=0,V56=0,V52=0,V53=0,V51=0,V62=0,V75=0;
int P,M,NN,X,I;
int J;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=35;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; M=pile[v[22]+1]; NN=pile[v[22]+2]; X=pile[v[22]+3]; I=pile[v[22]+4]; v[22]+=6; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V105=P;
V104=I;
l31:K=x[jvj+4]=R=x[jvj+34]=incon;
if((V105>=M)) goto l17;
V5=vnd[NN][V105];
pile[v[22]]=114; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(114,X,jvj+19)*/
l7:if((x[jvj+19]>0)) goto l8;
pile[v[22]]=113; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(113,X,jvj+24)*/
l11:if((x[jvj+24]<=0)) goto l17;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=113)) goto l12;
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+25,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+27,V39)*/
V39=pile[WZ2]; 
if((V5!=V39)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+25,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+28,V33)*/
V33=pile[WZ2]; 
W=V33;
x[jvj+10]=vo[15];z[jvj+10]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(283,jvj+10,jvj+11)*/
x[jvj+35]=x[jvj+11] ;z[jvj+35]=z[jvj+11];
l3:if((x[jvj+35]<=0)) goto l12;
x[jvj+12]=s[x[jvj+35]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+35];
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+12,V29)*/
V29=pile[WZ2]; 
if((V29!=W)) goto l4;
V24=incon;
pile[v[22]]=158; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(158,jvj+12,jvj+13)*/
if(x[jvj+13]!=20&&x[jvj+13]!=23) goto l5;
V24=68;
l13:x[jvj+4]=x[jvj+28] ;z[jvj+4]=z[jvj+28];
R=V24;
V25=incon;
if((R!=68)) goto l6;
V49=gardevaleur[V105];
x[jvj+17]=V49 ;z[jvj+17]=(V49<=sepcte) ? V49 : 0;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+4,jvj+14)*/
if((x[jvj+15]=w[x[jvj+14]][3])==incon) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+15; pile[WZ3]=jvj+16; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+4,jvj+15,V96,jvj+16)*/
V96=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ3]=jvj+18; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+17,jvj+15,V98,jvj+18)*/
V98=pile[WZ2]; 
if((V96!=V98)) goto l6;
V25=68;
l14:RS=V25;
l15:if((RS==68)) goto l16;
if((R==67)) goto l18;
if((V105!=0)) goto l19;
if((R!=68)) goto l19;
pile[v[22]]=(-6004); pile[WZ1]=V104; 
(*f[64])( );     /*SRA2((-6004),V104,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=V68; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V68,91,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V69; 
(*f[64])( );     /*SRA2((-2491),V69,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V71,91,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V72; 
(*f[99])( );     /*SPM0(22,V72,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=V73; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V73,93,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=V70; 
(*f[38])( );     /*SPC0(V70,93,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=V66; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V66,61,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=V67; 
(*f[2200])( );     /*SPP1(jvj+4,V67,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V65,59,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V74,32,K)*/
K=pile[WZ2]; 
l20:V91=x[jvj+4];
gardevaleur[V105]=V91;
l17:x[jvj+29]=vo[20];z[jvj+29]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(719,jvj+29,jvj+30)*/
pile[v[22]]=109; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(109,jvj+30,jvj+31)*/
if(x[jvj+31]==10253||x[jvj+31]==10290) goto l24;
l21:pile[v[22]]=474; pile[WZ1]=21; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(474,21,jvj+32)*/
l22:if((x[jvj+32]<=0)) goto l24;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=117; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+33,V87)*/
V87=pile[WZ2]; 
if((V87!=V105)) goto l23;
x[jvj+34]=x[jvj+33] ;z[jvj+34]=z[jvj+33];
l24:if(K==incon) goto l25;
l29:V75=V105+1;
V104=K;
V105=V75;
goto l31;
l2:V1=67;
l10:R=68;
RS=V1;
goto l15;
l4:x[jvj+35]=t[x[jvj+35]];
goto l3;
l5:V24=67;
goto l13;
l6:V25=67;
goto l14;
l8:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=114)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+20,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+22,V8)*/
V8=pile[WZ2]; 
if((V5!=V8)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+20,jvj+23)*/
x[jvj+4]=x[jvj+23] ;z[jvj+4]=z[jvj+23];
V1=incon;
V20=gardevaleur[V105];
x[jvj+8]=V20 ;z[jvj+8]=(V20<=sepcte) ? V20 : 0;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+6]=w[x[jvj+5]][3])==incon) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+4,jvj+6,V92,jvj+7)*/
V92=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ3]=jvj+9; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+8,jvj+6,V94,jvj+9)*/
V94=pile[WZ2]; 
if((V92!=V94)) goto l2;
x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=719; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(719,jvj+1,jvj+2)*/
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+2,jvj+3)*/
if((x[jvj+3]==10290)) goto l2;
l1:V1=68;
goto l10;
l9:x[jvj+19]=t[x[jvj+19]];
goto l7;
l12:x[jvj+24]=t[x[jvj+24]];
goto l11;
l16:K=V104;
l19:if((R==68)) goto l20;
goto l17;
l18:K=V104;
goto l17;
l23:x[jvj+32]=t[x[jvj+32]];
goto l22;
l25:if(x[jvj+4]!=incon) goto l26;
l30:J=V104;
v[0]=jvj; v[22]-=6; pile[v[22]+5]=J; return;
l26:if(R!=incon) goto l27;
goto l30;
l27:if(x[jvj+34]!=incon) goto l28;
if((R!=68)) goto l30;
if((V105<=0)) goto l30;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(241,51,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V104; 
(*f[64])( );     /*SRA2((-6004),V104,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=V54; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V54,91,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=(-2491); pile[WZ1]=V55; 
(*f[64])( );     /*SRA2((-2491),V55,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=V59; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V59,91,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=22; pile[WZ1]=V60; 
(*f[99])( );     /*SPM0(22,V60,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V61,93,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V63; pile[WZ1]=V57; 
(*f[64])( );     /*SRA2(V63,V57,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V105; pile[WZ1]=V58; 
(*f[99])( );     /*SPM0(V105,V58,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V56,93,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=V52; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V52,61,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=V53; 
(*f[2200])( );     /*SPP1(jvj+4,V53,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=V51; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V51,59,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V62,32,K)*/
K=pile[WZ2]; 
goto l29;
l28:if((R!=68)) goto l30;
if((V105<=0)) goto l30;
pile[v[22]]=110; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(110,jvj+34,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=(-6004); pile[WZ1]=V104; 
(*f[64])( );     /*SRA2((-6004),V104,V80)*/
V80=pile[WZ2]; 
pile[v[22]]=V80; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V80,91,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=V84; pile[WZ1]=V81; 
(*f[64])( );     /*SRA2(V84,V81,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=V82; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V82,93,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=V78; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V78,61,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=V79; 
(*f[2200])( );     /*SPP1(jvj+4,V79,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V77,59,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=V83; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V83,32,K)*/
K=pile[WZ2]; 
goto l29;
}
