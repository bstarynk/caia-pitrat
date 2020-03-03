#include "dx.h"
void GEREDQ1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V7=0,V8=0,V11=0,V53=0,V52=0,V63=0,V71=0,V59=0,V61=0,V60=0,V14=0,V26=0,V30=0,V28=0,V29=0,V32=0,V25=0,V75=0,V73=0,V74=0,V20=0,V19=0,V22=0,V21=0,V39=0,V82=0,V78=0,V79=0,V81=0,V48=0,V50=0,V=0,V24=0,V23=0,V43=0,V42=0,V85=0,EA=0,V90=0,V84=0,V86=0,V87=0,V88=0,V89=0,NM=0,K=0,V54=0,NRR=0,V9=0,V64=0,V66=0,V94=0,V70=0,V92=0,V72=0,V96=0,V95=0;
int KR,NR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=59;
x[jvj+1]=11670;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1180&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
KR=pile[v[22]]; NR=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+25]=incon;
if((KR==71)) goto l20;
if((KR!=76)) goto l14;
pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+23)*/
l21:if((x[jvj+23]<=0)) goto l14;
x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=jvj+24; 
(*f[1202])( );     /*GEREDL0(jvj+24)*/
x[jvj+23]=t[x[jvj+23]];
goto l21;
l1:pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l50;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2!=NR)) goto l3;
V9=x[jvj+4];
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(457,324,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=V9; 
(*f[134])( );     /*OTA0(1567,1576,V9)*/
l50:if(x[jvj+25]!=incon) goto l51;
l52:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+3]=t[x[jvj+3]];
goto l2;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=983; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(983,jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=878; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(878,jvj+8,jvj+9)*/
x[jvj+54]=x[jvj+9] ;z[jvj+54]=z[jvj+9];
l7:if((x[jvj+54]<=0)) goto l6;
x[jvj+10]=s[x[jvj+54]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+54];
pile[v[22]]=1543; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1543,jvj+10,jvj+11)*/
x[jvj+55]=x[jvj+11] ;z[jvj+55]=z[jvj+11];
l8:if((x[jvj+55]>0)) goto l9;
x[jvj+54]=t[x[jvj+54]];
goto l7;
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l9:x[jvj+12]=s[x[jvj+55]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+55];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+12,V7)*/
V7=pile[WZ2]; 
if((V7!=NR)) goto l10;
V8=x[jvj+12];
pile[v[22]]=1543; pile[WZ1]=jvj+10; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(1543,jvj+10,V8)*/
l10:x[jvj+55]=t[x[jvj+55]];
goto l8;
l11:pile[v[22]]=1567; pile[WZ1]=1576; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1567,1576,jvj+13)*/
l12:if((x[jvj+13]<=0)) goto l50;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+14,V11)*/
V11=pile[WZ2]; 
if((V11!=NR)) goto l13;
pile[v[22]]=jvj+14; 
(*f[872])( );     /*SORED0(jvj+14)*/
goto l50;
l13:x[jvj+13]=t[x[jvj+13]];
goto l12;
l16:x[jvj+15]=t[x[jvj+15]];
l15:if((x[jvj+15]<=0)) goto l41;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=162; pile[WZ1]=jvj+16; 
(*f[219])( );if(v[102]) goto l16;     /*FNDC2(162,jvj+16,V52)*/
V52=pile[WZ2]; 
if((V52!=V53)) goto l16;
x[jvj+25]=x[jvj+16] ;z[jvj+25]=z[jvj+16];
l41:if((KR==65)) goto l11;
if((KR==67)) goto l42;
if((KR==69)) goto l1;
if((KR!=82)) goto l50;
V64=bh[v[1]][1];
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(457,324,jvj+45)*/
pile[v[22]]=1016; pile[WZ1]=211; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1016,211,jvj+17)*/
l17:if((x[jvj+17]<=0)) goto l50;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=332; pile[WZ1]=jvj+18; 
(*f[219])( );if(v[102]) goto l18;     /*FNDC2(332,jvj+18,V63)*/
V63=pile[WZ2]; 
if((V63==V64)) goto l43;
l18:x[jvj+17]=t[x[jvj+17]];
goto l17;
l19:V60=V61;
l49:pile[v[22]]=41; pile[WZ1]=V96; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(41,V96,V60,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; 
(*f[40])( );     /*SLG0(V95)*/
l48:x[jvj+59]=t[x[jvj+59]];
l46:if((x[jvj+59]>0)) goto l47;
x[jvj+58]=t[x[jvj+58]];
l45:if((x[jvj+58]<=0)) goto l44;
x[jvj+19]=s[x[jvj+58]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+58];
pile[v[22]]=1543; pile[WZ1]=jvj+19; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1543,jvj+19,jvj+50)*/
x[jvj+59]=x[jvj+50] ;z[jvj+59]=z[jvj+50];
goto l46;
l20:V14=20000+NR;
x[jvj+20]=V14 ;z[jvj+20]=(V14<=sepcte) ? V14 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(983,jvj+20,jvj+21)*/
pile[v[22]]=1580; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1580,jvj+21,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+20; 
(*f[1182])( );     /*SORGERED0(jvj+22,jvj+20)*/
l14:V53=bh[v[1]][1];
pile[v[22]]=898; pile[WZ1]=905; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(898,905,jvj+15)*/
goto l15;
l24:pile[v[22]]=983; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(983,jvj+26,jvj+27)*/
pile[v[22]]=1580; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1580,jvj+27,jvj+28)*/
V75=x[jvj+26];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V75; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(20,V75,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+26; 
(*f[1182])( );     /*SORGERED0(jvj+28,jvj+26)*/
l23:V28++;
l22:if((V28>V29)) goto l27;
V32=r[V28];
if((V32!=1)) goto l23;
x[jvj+26]=V28 ;z[jvj+26]=(V28<=sepcte) ? V28 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(905,jvj+26,V25)*/
V25=pile[WZ2]; 
if((V25==(-9113))) goto l24;
pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(905,jvj+25,V26)*/
V26=pile[WZ2]; 
if((V25==V26)) goto l24;
goto l23;
l25:V19=V20;
l31:pile[v[22]]=41; pile[WZ1]=V39; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(41,V39,V19,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V79,(-4670),V22)*/
V22=pile[WZ2]; 
V21=incon;
if((V39>1)) goto l26;
V21=V22;
l32:pile[v[22]]=23; pile[WZ1]=V82; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(23,V82,V21,V81)*/
V81=pile[WZ3]; 
pile[v[22]]=V81; 
(*f[40])( );     /*SLG0(V81)*/
l30:x[jvj+32]=t[x[jvj+32]];
l28:if((x[jvj+32]>0)) goto l29;
pile[v[22]]=905; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(905,jvj+25,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(457,324,jvj+39)*/
l36:if((x[jvj+39]<=0)) goto l52;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=905; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(905,jvj+40,V42)*/
V42=pile[WZ2]; 
if((V42!=V43)) goto l37;
pile[v[22]]=983; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(983,jvj+40,jvj+41)*/
x[jvj+42]=x[jvj+41] ;z[jvj+42]=z[jvj+41];
pile[v[22]]=878; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(878,jvj+42,jvj+43)*/
V85=x[jvj+40];
x[jvj+57]=x[jvj+43] ;z[jvj+57]=z[jvj+43];
l38:if((x[jvj+57]<=0)) goto l37;
x[jvj+35]=s[x[jvj+57]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+57];
pile[v[22]]=972; pile[WZ1]=jvj+35; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(972,jvj+35,jvj+44)*/
pile[v[22]]=1543; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(1543,jvj+35,jvj+36)*/
x[jvj+56]=x[jvj+36] ;z[jvj+56]=z[jvj+36];
l33:if((x[jvj+56]<=0)) goto l39;
x[jvj+37]=s[x[jvj+56]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+56];
pile[v[22]]=642; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(642,jvj+37,V48)*/
V48=pile[WZ2]; 
if((V48!=0)) goto l34;
pile[v[22]]=893; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(893,jvj+37,jvj+38)*/
if((x[jvj+38]!=1000)) goto l34;
EA=x[jvj+44];
V90=EA;
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V84)*/
V84=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V85; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(20,V85,V84,V24)*/
V24=pile[WZ3]; 
V23=incon;
pile[v[22]]=163; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(163,jvj+35,V50)*/
V50=pile[WZ2]; 
V=V50;
pile[v[22]]=V24; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V24,V,V23)*/
V23=pile[WZ2]; 
l40:pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=854; 
(*f[42])( );     /*SRA1(135,V23,854,V86)*/
V86=pile[WZ3]; 
pile[WZ1]=V86; pile[WZ2]=1032; 
(*f[42])( );     /*SRA1(135,V86,1032,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V87,58,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V90; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(23,V90,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
l39:x[jvj+57]=t[x[jvj+57]];
goto l38;
l26:pile[v[22]]=V22; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V22,83,V21)*/
V21=pile[WZ2]; 
goto l32;
l27:pile[v[22]]=763; pile[WZ1]=1576; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(763,1576,jvj+32)*/
goto l28;
l29:x[jvj+29]=s[x[jvj+32]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+32];
pile[v[22]]=252; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(252,jvj+29,jvj+33)*/
for(i=x[jvj+33],V39=0;i>0;i=t[i],V39++)  ;
pile[v[22]]=218; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(218,jvj+29,jvj+34)*/
V82=x[jvj+33];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V78; pile[WZ2]=jvj+34; 
(*f[42])( );     /*SRA1(135,V78,jvj+34,V20)*/
V20=pile[WZ3]; 
V19=incon;
pile[v[22]]=447; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(447,jvj+29,jvj+30)*/
x[jvj+31]=x[jvj+30] ;z[jvj+31]=z[jvj+30];
if((x[jvj+31]==250)) goto l25;
pile[v[22]]=135; pile[WZ1]=V20; pile[WZ2]=jvj+31; 
(*f[42])( );     /*SRA1(135,V20,jvj+31,V19)*/
V19=pile[WZ3]; 
goto l31;
l34:x[jvj+56]=t[x[jvj+56]];
goto l33;
l35:V23=V24;
goto l40;
l37:x[jvj+39]=t[x[jvj+39]];
goto l36;
l42:pile[v[22]]=2; 
(*f[126])( );     /*LND2(2,NM,K)*/
NM=pile[WZ1]; K=pile[WZ2]; 
V54=K+1;
pile[v[22]]=V54; 
(*f[135])( );     /*LND3(V54,NRR)*/
NRR=pile[WZ1]; 
pile[v[22]]=NM; pile[WZ1]=NRR; 
(*f[1203])( );     /*COMPRED0(NM,NRR)*/
goto l50;
l44:x[jvj+45]=t[x[jvj+45]];
l43:if((x[jvj+45]<=0)) goto l50;
x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=905; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(905,jvj+46,V66)*/
V66=pile[WZ2]; 
if((V66!=(-9009))) goto l44;
pile[v[22]]=983; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(983,jvj+46,jvj+47)*/
x[jvj+48]=x[jvj+47] ;z[jvj+48]=z[jvj+47];
pile[v[22]]=878; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(878,jvj+48,jvj+49)*/
V94=x[jvj+46];
x[jvj+58]=x[jvj+49] ;z[jvj+58]=z[jvj+49];
goto l45;
l47:x[jvj+51]=s[x[jvj+59]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+59];
pile[v[22]]=642; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(642,jvj+51,V70)*/
V70=pile[WZ2]; 
if((V70!=NR)) goto l48;
pile[v[22]]=jvj+51; pile[WZ1]=jvj+18; pile[WZ3]=jvj+52; 
(*f[45])( );if(v[102]) goto l48;     /*FNDZ0(jvj+51,jvj+18,V92,jvj+52)*/
V92=pile[WZ2]; 
V72=V92;
V96=V72;
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V94,0,V61)*/
V61=pile[WZ3]; 
V60=incon;
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(163,jvj+19,V71)*/
V71=pile[WZ2]; 
V59=V71;
pile[v[22]]=V61; pile[WZ1]=V59; 
(*f[37])( );     /*SRA0(V61,V59,V60)*/
V60=pile[WZ2]; 
goto l49;
l51:if((KR!=84)) goto l52;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(250,158,jvj+53)*/
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(1484,854,V30)*/
V30=pile[WZ2]; 
V28=sepfacts+1;
V29=sepfacts+V30;
goto l22;
}
