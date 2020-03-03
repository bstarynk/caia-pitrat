#include "dx.h"
void EVL5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V206=0,V10=0,V9=0,TZ=0,V142=0,V27=0,V38=0,T=0,V43=0,V214=0,V46=0,V215=0,V82=0,V81=0,V154=0,RR=0,V169=0,V217=0,V159=0,V158=0,V172=0,TZA=0,TT1=0,TZZ=0,TT2=0,V208=0,V18=0,V17=0,V20=0,V62=0,F=0,V85=0,V86=0,V101=0,V94=0,V96=0,V98=0,V100=0,V102=0,V108=0,V117=0,V110=0,V112=0,V114=0,V116=0,V132=0,V125=0,V127=0,V129=0,V131=0,V133=0,V139=0,V44=0,V48=0,V50=0,V52=0,V57=0,V210=0,V23=0,V22=0,V219=0,V194=0,V193=0,V63=0,V65=0,V66=0,V=0,V36=0,V212=0,V32=0,V31=0,V140=0,V147=0,V145=0;
int Z;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=106;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=RES=TZ=incon;
pile[v[22]]=277; pile[WZ1]=Z; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(277,Z,jvj+1)*/
if((x[jvj+1]==480)) goto l1;
if((x[jvj+1]!=481)) goto l14;
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+4)*/
if((x[jvj+4]!=0)) goto l14;
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,Z,jvj+5)*/
if((x[jvj+6]=w[x[jvj+5]][3])==incon) goto l14;
pile[v[22]]=Z; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l14;     /*FNDZ0(Z,jvj+6,V206,jvj+7)*/
V206=pile[WZ2]; 
V10=V206;
V9=V10;
RES=V9;
TZ=0;
l14:x[jvj+30]=vo[16];z[jvj+30]=vz[16];
x[jvj+34]=x[jvj+30] ;z[jvj+34]=z[jvj+30];
if(x[jvj+5]==incon) goto l23;
if(RES!=incon) goto l52;
l51:v[0]=jvj; v[22]-=2; v[102]=1;return;
l1:pile[v[22]]=489; pile[WZ1]=Z; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(489,Z,jvj+2)*/
for(i=x[jvj+2],V2=0;i>0;i=t[i],V2++)  ;
if((V2==1)) goto l14;
V4=x[Z];
RES=V4;
x[jvj+5]=20 ;z[jvj+5]=20;
goto l14;
l4:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=274; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(274,jvj+12,jvj+13)*/
if((x[jvj+13]!=x[jvj+8])) goto l5;
pile[v[22]]=319; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(319,jvj+12,jvj+14)*/
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
l27:if((x[jvj+15]==(-99999998))) goto l29;
x[jvj+17]=incon;
pile[v[22]]=158; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(158,jvj+15,jvj+16)*/
x[jvj+17]=x[jvj+16] ;z[jvj+17]=z[jvj+16];
l28:x[jvj+5]=x[jvj+17] ;z[jvj+5]=z[jvj+17];
if((x[jvj+43]=w[x[jvj+5]][3])==incon) goto l51;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+43; pile[WZ3]=jvj+44; 
(*f[45])( );if(v[102]) goto l51;     /*FNDZ0(jvj+15,jvj+43,V215,jvj+44)*/
V215=pile[WZ2]; 
V82=V215;
V81=V82;
RES=V81;
l52:v[0]=jvj; v[22]-=2; pile[v[22]+1]=RES; v[102]=0;return;
l5:x[jvj+11]=t[x[jvj+11]];
l3:if((x[jvj+11]>0)) goto l4;
if(x[jvj+15]==incon) goto l29;
goto l27;
l6:pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+15,jvj+17)*/
goto l28;
l8:x[jvj+18]=t[x[jvj+18]];
l7:if((x[jvj+18]<=0)) goto l51;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+19,V142)*/
V142=pile[WZ2]; 
if((V142!=V140)) goto l8;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(117,jvj+19,V147)*/
V147=pile[WZ2]; 
x[jvj+104]=vo[V147];z[jvj+104]=vz[V147];
V145=x[jvj+104];
RES=V145;
goto l52;
l11:x[jvj+24]=s[x[jvj+23]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+23];
pile[v[22]]=274; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(274,jvj+24,jvj+25)*/
if((x[jvj+25]!=x[jvj+20])) goto l12;
pile[v[22]]=319; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(319,jvj+24,jvj+26)*/
x[jvj+27]=x[jvj+26] ;z[jvj+27]=z[jvj+26];
l45:if((x[jvj+27]==(-99999998))) goto l48;
x[jvj+29]=incon;
pile[v[22]]=158; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(158,jvj+27,jvj+28)*/
x[jvj+29]=x[jvj+28] ;z[jvj+29]=z[jvj+28];
l46:x[jvj+5]=x[jvj+29] ;z[jvj+5]=z[jvj+29];
if((x[jvj+97]=w[x[jvj+5]][3])==incon) goto l51;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+97; pile[WZ3]=jvj+98; 
(*f[45])( );if(v[102]) goto l51;     /*FNDZ0(jvj+27,jvj+97,V219,jvj+98)*/
V219=pile[WZ2]; 
V194=V219;
V193=V194;
RES=V193;
goto l52;
l12:x[jvj+23]=t[x[jvj+23]];
l10:if((x[jvj+23]>0)) goto l11;
if(x[jvj+27]==incon) goto l48;
goto l45;
l13:pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+27,jvj+29)*/
goto l46;
l15:pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+31,jvj+32)*/
pile[v[22]]=1815; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1815,jvj+32,jvj+33)*/
if((x[jvj+33]==68)) goto l33;
l32:pile[v[22]]=jvj+31; pile[WZ1]=jvj+34; pile[WZ3]=jvj+64; 
(*f[80])( );if(v[102]) goto l33;     /*EVL1(jvj+31,jvj+34,TT1,jvj+64,TZA)*/
TT1=pile[WZ2]; TZA=pile[WZ4]; 
x[jvj+68]=TT1 ;z[jvj+68]=(TT1<=sepcte) ? TT1 : 0;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,Z,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+34; pile[WZ3]=jvj+66; 
(*f[80])( );if(v[102]) goto l33;     /*EVL1(jvj+65,jvj+34,TT2,jvj+66,TZZ)*/
TT2=pile[WZ2]; TZZ=pile[WZ4]; 
x[jvj+67]=TT2 ;z[jvj+67]=(TT2<=sepcte) ? TT2 : 0;
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ3]=jvj+69; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+67,jvj+68,V208,jvj+69)*/
V208=pile[WZ2]; 
V18=V208;
V17=V18;
if((V20=w[x[jvj+68]][1])==incon) goto l33;
RES=V17;
goto l52;
l17:x[jvj+35]=t[x[jvj+35]];
l16:if((x[jvj+35]<=0)) goto l50;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+36,V27)*/
V27=pile[WZ2]; 
if((V27!=V)) goto l17;
pile[v[22]]=416; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(416,jvj+36,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=158; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(158,jvj+36,jvj+101)*/
if((x[jvj+102]=w[x[jvj+101]][3])==incon) goto l50;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+102; pile[WZ3]=jvj+103; 
(*f[45])( );if(v[102]) goto l50;     /*FNDZ0(jvj+36,jvj+102,V212,jvj+103)*/
V212=pile[WZ2]; 
V32=V212;
V31=V32;
RES=V31;
goto l52;
l19:x[jvj+37]=s[x[jvj+90]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+90];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+34; pile[WZ3]=jvj+38; 
(*f[80])( );if(v[102]) goto l20;     /*EVL1(jvj+37,jvj+34,T,jvj+38,V38)*/
T=pile[WZ2]; V38=pile[WZ4]; 
V43=T;
V214=V43;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+38; pile[WZ2]=V214; 
(*f[206])( );     /*PLUE1(jvj+39,jvj+38,V214)*/
l20:x[jvj+90]=t[x[jvj+90]];
l18:if((x[jvj+90]>0)) goto l19;
V44=x[jvj+39];
RES=V44;
goto l52;
l22:pile[v[22]]=jvj+40; pile[WZ1]=V46; 
(*f[207])( );     /*PLUE2(jvj+40,V46)*/
V46++;
l21:if((V46<=V50)) goto l22;
V57=x[jvj+40];
RES=V57;
goto l52;
l23:if(RES==incon) goto l24;
goto l52;
l24:pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,Z,jvj+41)*/
if((x[jvj+41]==484)) goto l25;
if((x[jvj+41]!=43)) goto l33;
pile[v[22]]=102; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,Z,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+31,jvj+60)*/
pile[v[22]]=1815; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1815,jvj+60,jvj+61)*/
if((x[jvj+61]!=68)) goto l15;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,Z,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+62; pile[WZ2]=jvj+34; pile[WZ3]=jvj+63; 
(*f[205])( );if(v[102]) goto l15;     /*EVLT0(jvj+60,jvj+62,jvj+34,jvj+63,RES)*/
RES=pile[WZ4]; 
goto l52;
l25:x[jvj+42]=vo[14];z[jvj+42]=vz[14];
pile[v[22]]=1380; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(1380,jvj+42,RES)*/
RES=pile[WZ2]; 
goto l52;
l26:pile[v[22]]=Z; pile[WZ1]=jvj+8; 
(*f[200])( );if(v[102]) goto l29;     /*NDD0(Z,jvj+8)*/
x[jvj+15]=incon;
pile[v[22]]=489; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(489,jvj+8,jvj+9)*/
if((x[jvj+9]<=0)) goto l2;
x[jvj+105]=s[x[jvj+9]] ;z[jvj+105]=(x[jvj+105]<=sepcte) ? x[jvj+105] : z[jvj+9];
x[jvj+15]=x[jvj+105] ;z[jvj+15]=z[jvj+105];
l2:x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(258,jvj+10,jvj+11)*/
goto l3;
l29:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,Z,jvj+45)*/
pile[v[22]]=140; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+45,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=1258; pile[WZ1]=jvj+34; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(1258,jvj+34,jvj+46)*/
if((x[jvj+46]==0)) goto l33;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,Z,jvj+47)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+47; pile[WZ3]=jvj+48; 
(*f[110])( );if(v[102]) goto l33;     /*EVL2(jvj+34,jvj+47,RR,jvj+48)*/
RR=pile[WZ2]; 
if((x[jvj+54]=w[x[jvj+48]][3])==incon) goto l33;
l30:if((x[jvj+46]<=0)) goto l33;
x[jvj+49]=s[x[jvj+46]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+46];
pile[v[22]]=436; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(436,jvj+49,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=484)) goto l31;
pile[v[22]]=111; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+50,jvj+52)*/
pile[v[22]]=140; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+52,V169)*/
V169=pile[WZ2]; 
if((V154!=V169)) goto l31;
pile[v[22]]=102; pile[WZ1]=jvj+50; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+50,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ3]=jvj+55; 
(*f[45])( );if(v[102]) goto l31;     /*FNDZ0(jvj+53,jvj+54,V217,jvj+55)*/
V217=pile[WZ2]; 
V159=V217;
V158=V159;
if((V158!=RR)) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+49; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+49,jvj+56)*/
x[jvj+57]=x[jvj+56] ;z[jvj+57]=z[jvj+56];
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+57,jvj+58)*/
x[jvj+5]=x[jvj+58] ;z[jvj+5]=z[jvj+58];
if((x[jvj+59]=w[x[jvj+5]][3])==incon) goto l31;
pile[v[22]]=jvj+59; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(jvj+59,jvj+57,V172)*/
V172=pile[WZ2]; 
RES=V172;
goto l52;
l31:x[jvj+46]=t[x[jvj+46]];
goto l30;
l33:if(x[jvj+41]!=435&&x[jvj+41]!=69&&x[jvj+41]!=73&&x[jvj+41]!=85&&x[jvj+41]!=86) goto l34;
pile[v[22]]=Z; pile[WZ1]=jvj+34; pile[WZ2]=jvj+70; 
(*f[199])( );if(v[102]) goto l34;     /*EVLA0(Z,jvj+34,jvj+70)*/
V62=x[jvj+70];
RES=V62;
goto l52;
l34:if((x[jvj+41]==22)) goto l35;
if((x[jvj+41]==531)) goto l36;
if((x[jvj+41]==453)) goto l37;
if((x[jvj+41]==979)) goto l38;
if((x[jvj+41]!=1027)) goto l39;
pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,Z,jvj+85)*/
pile[v[22]]=140; pile[WZ1]=jvj+85; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+85,V132)*/
V132=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,Z,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+34; pile[WZ3]=jvj+87; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+86,jvj+34,V127,jvj+87,V125)*/
V127=pile[WZ2]; V125=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,Z,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+34; pile[WZ3]=jvj+89; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+88,jvj+34,V131,jvj+89,V129)*/
V131=pile[WZ2]; V129=pile[WZ4]; 
pile[v[22]]=V131; pile[WZ1]=V127; pile[WZ2]=V132; 
(*f[202])( );if(v[102]) goto l39;     /*FMATRICE0(V131,V127,V132,V133)*/
V133=pile[WZ3]; 
V139=V133;
RES=V139;
goto l52;
l35:pile[v[22]]=Z; pile[WZ1]=jvj+34; pile[WZ2]=jvj+71; 
(*f[198])( );if(v[102]) goto l39;     /*EVLF0(Z,jvj+34,jvj+71,RES)*/
RES=pile[WZ3]; 
goto l52;
l36:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,Z,jvj+72)*/
pile[v[22]]=140; pile[WZ1]=jvj+72; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+72,F)*/
F=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,Z,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+34; pile[WZ3]=jvj+74; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+73,jvj+34,V86,jvj+74,V85)*/
V86=pile[WZ2]; V85=pile[WZ4]; 
pile[v[22]]=V86; pile[WZ1]=F; 
(*f[201])( );if(v[102]) goto l39;     /*FCOEFF0(V86,F,RES)*/
RES=pile[WZ2]; 
goto l52;
l37:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,Z,jvj+75)*/
pile[v[22]]=140; pile[WZ1]=jvj+75; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+75,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,Z,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+34; pile[WZ3]=jvj+77; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+76,jvj+34,V96,jvj+77,V94)*/
V96=pile[WZ2]; V94=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,Z,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+34; pile[WZ3]=jvj+79; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+78,jvj+34,V100,jvj+79,V98)*/
V100=pile[WZ2]; V98=pile[WZ4]; 
pile[v[22]]=V100; pile[WZ1]=V96; pile[WZ2]=V101; 
(*f[202])( );if(v[102]) goto l39;     /*FMATRICE0(V100,V96,V101,V102)*/
V102=pile[WZ3]; 
V108=V102;
RES=V108;
goto l52;
l38:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,Z,jvj+80)*/
pile[v[22]]=140; pile[WZ1]=jvj+80; 
(*f[44])( );if(v[102]) goto l39;     /*FNDC1(140,jvj+80,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,Z,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+34; pile[WZ3]=jvj+82; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+81,jvj+34,V112,jvj+82,V110)*/
V112=pile[WZ2]; V110=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(103,Z,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=jvj+34; pile[WZ3]=jvj+84; 
(*f[80])( );if(v[102]) goto l39;     /*EVL1(jvj+83,jvj+34,V116,jvj+84,V114)*/
V116=pile[WZ2]; V114=pile[WZ4]; 
pile[v[22]]=V116; pile[WZ1]=V112; pile[WZ2]=V117; 
(*f[203])( );if(v[102]) goto l39;     /*FTAB0(V116,V112,V117,RES)*/
RES=pile[WZ3]; 
goto l52;
l39:if(TZ==incon) goto l40;
l42:if(x[jvj+41]!=96&&x[jvj+41]!=89&&x[jvj+41]!=41&&x[jvj+41]!=20&&x[jvj+41]!=128&&x[jvj+41]!=570&&x[jvj+41]!=1317) goto l43;
if((x[jvj+95]=w[x[jvj+41]][3])==incon) goto l43;
pile[v[22]]=Z; pile[WZ1]=jvj+95; pile[WZ3]=jvj+96; 
(*f[45])( );if(v[102]) goto l43;     /*FNDZ0(Z,jvj+95,V210,jvj+96)*/
V210=pile[WZ2]; 
V23=V210;
V22=V23;
RES=V22;
goto l52;
l40:if((x[jvj+41]==128)) goto l41;
if((x[jvj+41]!=61)) goto l42;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,Z,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+34; pile[WZ3]=jvj+92; 
(*f[80])( );if(v[102]) goto l42;     /*EVL1(jvj+91,jvj+34,V46,jvj+92,V48)*/
V46=pile[WZ2]; V48=pile[WZ4]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,Z,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+34; pile[WZ3]=jvj+94; 
(*f[80])( );if(v[102]) goto l42;     /*EVL1(jvj+93,jvj+34,V50,jvj+94,V52)*/
V50=pile[WZ2]; V52=pile[WZ4]; 
x[jvj+40]=0 ;z[jvj+40]=0;
goto l21;
l41:pile[v[22]]=128; pile[WZ1]=Z; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(128,Z,jvj+90)*/
x[jvj+39]=0 ;z[jvj+39]=0;
goto l18;
l43:if(TZ==incon) goto l44;
goto l51;
l44:if((x[jvj+41]!=1050)) goto l48;
pile[v[22]]=Z; pile[WZ1]=jvj+20; 
(*f[204])( );     /*NDA0(Z,jvj+20)*/
x[jvj+27]=incon;
pile[v[22]]=489; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(489,jvj+20,jvj+21)*/
if((x[jvj+21]<=0)) goto l9;
x[jvj+106]=s[x[jvj+21]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+21];
x[jvj+27]=x[jvj+106] ;z[jvj+27]=z[jvj+106];
l9:x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(258,jvj+22,jvj+23)*/
goto l10;
l47:if(TZ==incon) goto l48;
goto l51;
l48:V63=((-6042));
pile[v[22]]=140; pile[WZ1]=Z; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(140,Z,V65)*/
V65=pile[WZ2]; 
if((V63!=V65)) goto l49;
pile[v[22]]=372; pile[WZ1]=jvj+34; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(372,jvj+34,jvj+99)*/
pile[v[22]]=102; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+99,jvj+100)*/
V66=x[jvj+100];
RES=V66;
goto l52;
l49:pile[v[22]]=140; pile[WZ1]=Z; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,Z,V)*/
V=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(128,jvj+34,jvj+35)*/
goto l16;
l50:pile[v[22]]=140; pile[WZ1]=Z; 
(*f[44])( );if(v[102]) goto l51;     /*FNDC1(140,Z,V140)*/
V140=pile[WZ2]; 
if(V140!=(-3629)&&V140!=(-4348)&&V140!=(-4349)&&V140!=(-6170)&&V140!=(-6470)&&V140!=(-10635)&&V140!=(-10974)) goto l51;
pile[v[22]]=258; pile[WZ1]=21; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(258,21,jvj+18)*/
goto l7;
}
