#include "dx.h"
void EVLA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,TT2=0,TT1=0,TZZ=0,TZA=0,V22=0,V23=0,V24=0,V45=0,V110=0,V112=0,V132=0,V129=0,V140=0,V120=0,V124=0,V40=0,V41=0,V43=0,V105=0,V36=0,N=0,V26=0,V30=0,V29=0,V38=0,V72=0,V54=0,V56=0,V61=0,V60=0,V75=0,V91=0,V77=0,V79=0,V94=0;
int Z,X;
int HV;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=56;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; X=pile[v[22]+1]; HV=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,Z,jvj+22)*/
if((x[jvj+22]==85)) goto l21;
if((x[jvj+22]==86)) goto l22;
if((x[jvj+22]==73)) goto l23;
if((x[jvj+22]==435)) goto l27;
if((x[jvj+22]!=69)) goto l28;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(250,158,jvj+1)*/
pile[v[22]]=108; pile[WZ1]=Z; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(108,Z,jvj+38)*/
x[jvj+55]=x[jvj+38] ;z[jvj+55]=z[jvj+38];
l2:if((x[jvj+55]>0)) goto l3;
x[HV]=x[jvj+1] ;z[HV]=z[jvj+1];
l5:if((x[jvj+38]>0)) goto l6;
pile[v[22]]=158; pile[WZ1]=jvj+1; 
(*f[71])( );     /*ENLV0(158,jvj+1)*/
l32:v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ2]=TT2; 
(*f[43])( );     /*CHGC2(jvj+1,jvj+2,TT2)*/
l4:x[jvj+55]=t[x[jvj+55]];
goto l2;
l3:x[jvj+3]=s[x[jvj+55]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+55];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=X; pile[WZ3]=jvj+5; 
(*f[80])( );if(v[102]) goto l4;     /*EVL1(jvj+4,X,TT1,jvj+5,TZZ)*/
TT1=pile[WZ2]; TZZ=pile[WZ4]; 
x[jvj+2]=TT1 ;z[jvj+2]=(TT1<=sepcte) ? TT1 : 0;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+3,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=X; pile[WZ3]=jvj+7; 
(*f[80])( );if(v[102]) goto l4;     /*EVL1(jvj+6,X,TT2,jvj+7,TZA)*/
TT2=pile[WZ2]; TZA=pile[WZ4]; 
if((V7=w[x[jvj+2]][1])==incon) goto l4;
if((V7!=23)) goto l1;
if((x[jvj+7]==23)) goto l1;
pile[v[22]]=TT2; pile[WZ1]=jvj+2; pile[WZ2]=jvj+1; 
(*f[235])( );     /*PLUSC2(TT2,jvj+2,jvj+1)*/
goto l4;
l6:x[jvj+8]=s[x[jvj+38]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+38];
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==158)) goto l32;
l7:x[jvj+38]=t[x[jvj+38]];
goto l5;
l8:pile[v[22]]=277; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(277,jvj+11,jvj+12)*/
if((x[jvj+12]!=68)) goto l26;
if((x[jvj+11]!=507)) goto l28;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,Z,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+31,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(128,X,jvj+16)*/
l13:if((x[jvj+16]<=0)) goto l28;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+17,V45)*/
V45=pile[WZ2]; 
if((V45!=V40)) goto l14;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,Z,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=X; pile[WZ3]=jvj+33; 
(*f[80])( );if(v[102]) goto l28;     /*EVL1(jvj+32,X,V43,jvj+33,V41)*/
V43=pile[WZ2]; V41=pile[WZ4]; 
x[HV]=135 ;z[HV]=135;
pile[v[22]]=jvj+17; pile[WZ1]=416; pile[WZ2]=V43; 
(*f[43])( );     /*CHGC2(jvj+17,416,V43)*/
goto l32;
l10:x[jvj+24]=t[x[jvj+24]];
l9:if((x[jvj+24]<=0)) goto l32;
x[jvj+14]=s[x[jvj+24]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+24];
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+14,V22)*/
V22=pile[WZ2]; 
x[jvj+56]=x[jvj+13] ;z[jvj+56]=z[jvj+13];
l11:if((x[jvj+56]<=0)) goto l10;
x[jvj+15]=s[x[jvj+56]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+56];
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+15,V23)*/
V23=pile[WZ2]; 
if((V22!=V23)) goto l12;
V24=x[jvj+15];
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=V24; 
(*f[134])( );     /*OTA0(128,X,V24)*/
l12:x[jvj+56]=t[x[jvj+56]];
goto l11;
l14:x[jvj+16]=t[x[jvj+16]];
goto l13;
l16:x[jvj+18]=t[x[jvj+18]];
l15:if((x[jvj+18]<=0)) goto l8;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+19,V110)*/
V110=pile[WZ2]; 
if((V110!=V120)) goto l16;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(128,X,jvj+20)*/
l17:if((x[jvj+20]<=0)) goto l8;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+21,V112)*/
V112=pile[WZ2]; 
if((V112!=V124)) goto l18;
x[HV]=135 ;z[HV]=135;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+21,V132)*/
V132=pile[WZ2]; 
pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(130,jvj+19,V129)*/
V129=pile[WZ2]; 
if((x[jvj+30]==533)) goto l19;
if((x[jvj+30]!=532)) goto l32;
if((V132<V129)) goto l20;
goto l32;
l18:x[jvj+20]=t[x[jvj+20]];
goto l17;
l19:if((V132>V129)) goto l20;
goto l32;
l20:pile[v[22]]=jvj+19; pile[WZ1]=130; pile[WZ2]=V132; 
(*f[43])( );     /*CHGC2(jvj+19,130,V132)*/
goto l32;
l21:x[HV]=134 ;z[HV]=134;
goto l32;
l22:x[HV]=135 ;z[HV]=135;
goto l32;
l23:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,Z,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+23,jvj+11)*/
if((x[jvj+11]==255)) goto l24;
if((x[jvj+11]==431)) goto l25;
if((x[jvj+11]!=534)) goto l8;
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,Z,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+27,V120)*/
V120=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=Z; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,Z,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+28,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,Z,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+29,jvj+30)*/
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,X,jvj+18)*/
goto l15;
l24:pile[v[22]]=128; pile[WZ1]=Z; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(128,Z,jvj+24)*/
x[HV]=135 ;z[HV]=135;
pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(128,X,jvj+13)*/
goto l9;
l25:pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,Z,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+25,V140)*/
V140=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=Z; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,Z,jvj+26)*/
pile[v[22]]=X; pile[WZ1]=jvj+26; pile[WZ2]=V140; pile[WZ3]=431; pile[WZ4]=HV; 
(*f[625])( );     /*EVLW1(X,jvj+26,V140,431,HV)*/
goto l32;
l26:x[HV]=135 ;z[HV]=135;
pile[v[22]]=Z; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[623])( );     /*EVLO0(Z,X,jvj+11)*/
goto l32;
l27:pile[v[22]]=436; pile[WZ1]=Z; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(436,Z,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+34,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,Z,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+35,jvj+36)*/
if(x[jvj+36]!=179&&x[jvj+36]!=82&&x[jvj+36]!=500&&x[jvj+36]!=599) goto l28;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,Z,jvj+37)*/
pile[v[22]]=X; pile[WZ1]=jvj+37; pile[WZ2]=V105; pile[WZ3]=jvj+36; pile[WZ4]=HV; 
(*f[625])( );     /*EVLW1(X,jvj+37,V105,jvj+36,HV)*/
goto l32;
l28:pile[v[22]]=111; pile[WZ1]=Z; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,Z,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]==79)) goto l29;
if((x[jvj+40]!=78)) goto l31;
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,Z,jvj+45)*/
pile[v[22]]=111; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+45,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]==183)) goto l30;
if((x[jvj+47]!=87)) goto l31;
pile[v[22]]=436; pile[WZ1]=Z; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(436,Z,jvj+52)*/
pile[v[22]]=140; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+52,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+45; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+45,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=X; pile[WZ3]=jvj+54; 
(*f[80])( );if(v[102]) goto l31;     /*EVL1(jvj+53,X,V77,jvj+54,V79)*/
V77=pile[WZ2]; V79=pile[WZ4]; 
V94=V77+1;
x[HV]=135 ;z[HV]=135;
pile[v[22]]=X; pile[WZ1]=V91; pile[WZ2]=41; pile[WZ3]=V94; pile[WZ4]=V79; 
(*f[624])( );     /*EVLW0(X,V91,41,V94,V79)*/
goto l32;
l29:pile[v[22]]=436; pile[WZ1]=Z; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(436,Z,jvj+41)*/
pile[v[22]]=140; pile[WZ1]=jvj+41; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+41,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Z; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,Z,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=X; pile[WZ3]=jvj+43; 
(*f[80])( );if(v[102]) goto l31;     /*EVL1(jvj+42,X,N,jvj+43,V26)*/
N=pile[WZ2]; V26=pile[WZ4]; 
V30=r[N];
V29=(-V30);
x[jvj+44]=V29 ;z[jvj+44]=(V29<=sepcte) ? V29 : 0;
V38=s[N];
x[HV]=135 ;z[HV]=135;
pile[v[22]]=X; pile[WZ1]=V36; pile[WZ2]=jvj+44; pile[WZ3]=V38; pile[WZ4]=V26; 
(*f[624])( );     /*EVLW0(X,V36,jvj+44,V38,V26)*/
goto l32;
l30:pile[v[22]]=436; pile[WZ1]=Z; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(436,Z,jvj+48)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+48,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+45; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+45,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=X; pile[WZ3]=jvj+50; 
(*f[80])( );if(v[102]) goto l31;     /*EVL1(jvj+49,X,V54,jvj+50,V56)*/
V54=pile[WZ2]; V56=pile[WZ4]; 
V61=r[V54];
V60=(-V61);
x[jvj+51]=V60 ;z[jvj+51]=(V60<=sepcte) ? V60 : 0;
V75=t[V54];
x[HV]=135 ;z[HV]=135;
pile[v[22]]=X; pile[WZ1]=V72; pile[WZ2]=jvj+51; pile[WZ3]=V75; pile[WZ4]=V56; 
(*f[624])( );     /*EVLW0(X,V72,jvj+51,V75,V56)*/
goto l32;
l31:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
