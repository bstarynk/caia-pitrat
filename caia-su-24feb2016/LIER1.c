#include "dx.h"
void LIER1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V69=0,J=0,V55=0,V62=0,V64=0,V54=0,V57=0,V56=0,V66=0,V2=0,V277=0,V14=0,V279=0,V17=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0,V26=0,V27=0,FF=0,V41=0,V281=0,V283=0,F=0,V53=0,V276=0,V107=0,V110=0,V304=0,V306=0,V302=0,V303=0,V305=0,V307=0,V109=0,V140=0,V141=0,V139=0,V120=0,V150=0,V145=0,V147=0,V142=0,V124=0,V125=0,V160=0,V175=0,V181=0,V308=0,V310=0,V192=0,V312=0,V194=0,V314=0,V197=0,V247=0,V327=0,V329=0,V325=0,V326=0,V328=0,V330=0,V246=0,V98=0,V164=0,V168=0,I=0,V204=0,V221=0,V320=0,V322=0,V316=0,V318=0,V244=0,V252=0,K=0,V103=0,V92=0,V95=0,V293=0,V297=0,V299=0,V287=0,V288=0,V289=0,V291=0,V292=0,V294=0,V295=0,V296=0,V298=0,V300=0,V91=0,V114=0,V274=0,V270=0,V383=0,V382=0;
int HIST,A,B,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=216;
x[jvj+1]=10205;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1753&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=x[jvj+15]=x[jvj+56]=x[jvj+3]=x[jvj+174]=x[jvj+175]=x[jvj+4]=incon;
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=C; pile[WZ3]=jvj+3; pile[WZ4]=jvj+4; 
(*f[1766])( );if(v[102]) goto l65;     /*METORDRE0(A,B,C,jvj+3,jvj+4)*/
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(277,jvj+4,jvj+16)*/
if((x[jvj+16]!=1350)) goto l4;
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+17)*/
l5:if((x[jvj+17]<=0)) goto l7;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+18,V69)*/
V69=pile[WZ2]; 
if((V69!=1)) goto l6;
x[jvj+29]=x[jvj+18] ;z[jvj+29]=z[jvj+18];
l7:if((x[jvj+4]!=1350)) goto l8;
pile[v[22]]=jvj+3; pile[WZ1]=447; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+3,447,jvj+20)*/
pile[v[22]]=20; pile[WZ1]=jvj+20; pile[WZ2]=jvj+15; 
(*f[409])( );     /*TRI14(20,jvj+20,jvj+15)*/
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=1601; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1601,jvj+8,jvj+9)*/
x[jvj+10]=d[72];z[jvj+10]=0;
l1:if((x[jvj+9]<=0)) goto l16;
x[jvj+5]=s[x[jvj+9]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+9];
pile[v[22]]=1888; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1888,jvj+5,jvj+11)*/
if((x[jvj+11]!=x[jvj+3])) goto l2;
pile[v[22]]=498; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,jvj+5,jvj+6)*/
pile[v[22]]=1348; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1348,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l2;
l3:pile[v[22]]=1879; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1879,jvj+5,jvj+12)*/
pile[v[22]]=1880; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1880,jvj+5,jvj+13)*/
pile[v[22]]=447; pile[WZ1]=jvj+12; pile[WZ2]=459; pile[WZ3]=jvj+13; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(447,jvj+12,459,jvj+13,jvj+14)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[196])( );     /*PLUF0(jvj+10,jvj+14,jvj+15)*/
l2:x[jvj+9]=t[x[jvj+9]];
goto l1;
l4:x[jvj+29]=x[jvj+4] ;z[jvj+29]=z[jvj+4];
goto l7;
l6:x[jvj+17]=t[x[jvj+17]];
goto l5;
l8:pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(277,jvj+4,jvj+19)*/
if((x[jvj+19]!=1350)) goto l16;
pile[v[22]]=1260; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1260,jvj+4,jvj+15)*/
l16:if(x[jvj+29]==incon) goto l17;
l28:pile[v[22]]=A; pile[WZ1]=jvj+3; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(A,jvj+3,jvj+53)*/
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==x[jvj+29]) goto l30;
if((x[A]!=489)) goto l29;
pile[v[22]]=498; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(498,A,jvj+31)*/
pile[v[22]]=905; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(905,jvj+31,V2)*/
V2=pile[WZ2]; 
if((V2!=(-5963))) goto l29;
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==x[jvj+29]) goto l29;
l31:x[jvj+52]=vo[13];z[jvj+52]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+52; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(963,jvj+52,jvj+54)*/
pile[v[22]]=907; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(907,jvj+52,jvj+55)*/
if((x[jvj+55]==0)) goto l32;
pile[v[22]]=jvj+52; pile[WZ1]=963; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+52,963,67)*/
if((x[jvj+54]!=68)) goto l32;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(498,jvj+3,jvj+38)*/
pile[v[22]]=436; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(436,jvj+38,jvj+39)*/
pile[v[22]]=140; pile[WZ1]=jvj+39; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+39,FF)*/
FF=pile[WZ2]; 
l25:if((x[jvj+55]<=0)) goto l32;
x[jvj+40]=s[x[jvj+55]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+55];
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=22)) goto l26;
pile[v[22]]=111; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+40,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+42,jvj+43)*/
pile[v[22]]=102; pile[WZ1]=jvj+40; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+40,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=484)) goto l26;
pile[v[22]]=111; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+44,jvj+46)*/
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+46,V41)*/
V41=pile[WZ2]; 
if((FF!=V41)) goto l26;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+44,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+47,jvj+48)*/
if((x[jvj+49]=w[x[jvj+48]][3])==incon) goto l26;
pile[v[22]]=jvj+47; pile[WZ1]=jvj+49; pile[WZ3]=jvj+50; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+47,jvj+49,V281,jvj+50)*/
V281=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ3]=jvj+51; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+3,jvj+49,V283,jvj+51)*/
V283=pile[WZ2]; 
if((V281!=V283)) goto l26;
pile[v[22]]=103; pile[WZ1]=jvj+40; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(103,jvj+40,jvj+33)*/
F=x[jvj+43];
if((F==30)) goto l21;
if((F==27)) goto l22;
if((F==29)) goto l23;
if((F==28)) goto l24;
if((F!=25)) goto l26;
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+35]=w[x[jvj+34]][3])==incon) goto l26;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+35; pile[WZ3]=jvj+36; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+33,jvj+35,V277,jvj+36)*/
V277=pile[WZ2]; 
V14=V277;
pile[v[22]]=jvj+29; pile[WZ3]=jvj+37; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+29,jvj+35,V279,jvj+37)*/
V279=pile[WZ2]; 
V17=V279;
if((V14==V17)) goto l27;
l26:x[jvj+55]=t[x[jvj+55]];
goto l25;
l10:V55=1;
l19:x[jvj+27]=vo[14];z[jvj+27]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(642,jvj+27,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(498,jvj+3,jvj+28)*/
V56=incon;
x[jvj+212]=x[jvj+15] ;z[jvj+212]=z[jvj+15];
l13:if((x[jvj+212]>0)) goto l14;
V56=1;
l20:pile[v[22]]=jvj+28; pile[WZ1]=V56; pile[WZ2]=jvj+29; 
(*f[1765])( );     /*AJARR0(jvj+28,V56,jvj+29)*/
pile[v[22]]=V66; pile[WZ1]=858; pile[WZ2]=jvj+183; 
(*f[46])( );     /*TRI0(V66,858,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+184; 
(*f[189])( );     /*TRI4(jvj+183,v[13],642,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=1753; pile[WZ2]=246; pile[WZ3]=jvj+185; 
(*f[189])( );     /*TRI4(jvj+184,1753,246,jvj+185)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+185; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+185,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=365; pile[WZ2]=jvj+3; pile[WZ3]=jvj+29; 
(*f[1753])( );     /*LIER1(jvj+30,365,jvj+3,jvj+29)*/
goto l28;
l12:V54++;
l11:if((V54>V64)) goto l15;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V54; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V54,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+3; pile[WZ2]=jvj+25; 
(*f[1738])( );if(v[102]) goto l12;     /*EVLM0(jvj+24,jvj+3,jvj+25,V57)*/
V57=pile[WZ3]; 
if((V57<V62)) goto l12;
V56=V54;
goto l20;
l14:x[jvj+22]=s[x[jvj+212]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+212];
pile[v[22]]=447; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(447,jvj+22,jvj+23)*/
pile[v[22]]=280; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(280,jvj+23,V62)*/
V62=pile[WZ2]; 
V64=V55+10;
pile[v[22]]=459; pile[WZ1]=jvj+22; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(459,jvj+22,jvj+24)*/
V54=V55;
goto l11;
l15:x[jvj+212]=t[x[jvj+212]];
goto l13;
l17:if(x[jvj+15]!=incon) goto l18;
l65:if((x[A]==489)) goto l115;
l82:x[jvj+174]=250 ;z[jvj+174]=250;
x[jvj+175]=250 ;z[jvj+175]=250;
l83:if(x[jvj+56]!=incon) goto l84;
l89:x[jvj+160]=vo[14];z[jvj+160]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+160; 
(*f[26])( );if(v[102]) goto l90;     /*FNDC0(220,jvj+160,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=jvj+160; pile[WZ1]=1572; pile[WZ2]=V252; 
(*f[43])( );     /*CHGC2(jvj+160,1572,V252)*/
l90:if(x[jvj+4]!=incon) goto l91;
l93:x[jvj+216]=0 ;z[jvj+216]=0;
x[jvj+164]=x[jvj+216] ;z[jvj+164]=z[jvj+216];
l94:if(x[jvj+56]!=incon) goto l95;
l111:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l18:pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(277,jvj+4,jvj+26)*/
if((x[jvj+26]!=1350)) goto l65;
pile[v[22]]=202; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(202,jvj+3,jvj+21)*/
if((x[jvj+21]==68)) goto l65;
l9:V55=incon;
pile[v[22]]=280; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(280,jvj+3,J)*/
J=pile[WZ2]; 
V55=J;
goto l19;
l21:pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+29,V20)*/
V20=pile[WZ2]; 
pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+33,V21)*/
V21=pile[WZ2]; 
if((V20<=V21)) goto l27;
goto l26;
l22:pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+29,V22)*/
V22=pile[WZ2]; 
pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+33,V23)*/
V23=pile[WZ2]; 
if((V22>V23)) goto l27;
goto l26;
l23:pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+29,V24)*/
V24=pile[WZ2]; 
pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+33,V25)*/
V25=pile[WZ2]; 
if((V24<V25)) goto l27;
goto l26;
l24:pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+29,V26)*/
V26=pile[WZ2]; 
pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+33,V27)*/
V27=pile[WZ2]; 
if((V26>=V27)) goto l27;
goto l26;
l27:V53=x[jvj+40];
pile[v[22]]=907; pile[WZ1]=jvj+52; pile[WZ2]=V53; 
(*f[134])( );     /*OTA0(907,jvj+52,V53)*/
pile[v[22]]=jvj+52; pile[WZ1]=963; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+52,963,68)*/
goto l26;
l29:x[jvj+56]=x[jvj+3] ;z[jvj+56]=z[jvj+3];
l30:if((x[A]==489)) goto l31;
l32:if(x[jvj+56]!=incon) goto l33;
goto l65;
l33:x[jvj+57]=vo[14];z[jvj+57]=vz[14];
pile[v[22]]=865; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(865,jvj+57,jvj+58)*/
V276=v[14];
pile[v[22]]=jvj+58; pile[WZ1]=891; pile[WZ2]=V276; 
(*f[43])( );     /*CHGC2(jvj+58,891,V276)*/
z[jvj+56]=(-1);
pile[v[22]]=jvj+56; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+56,A,jvj+29)*/
if(x[A]!=365&&x[A]!=489) goto l35;
z[jvj+29]=(-1);
pile[v[22]]=jvj+29; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+29,A,jvj+56)*/
l35:if((x[A]!=489)) goto l82;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+63; 
(*f[1290])( );if(v[102]) goto l115;     /*DEPEXP0(jvj+56,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; 
(*f[255])( );     /*COPEXP0(jvj+63,jvj+64)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+65; 
(*f[1291])( );if(v[102]) goto l115;     /*CONVEXP0(jvj+4,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(jvj+65,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+177; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+177)*/
pile[v[22]]=jvj+177; pile[WZ1]=111; pile[WZ2]=jvj+178; 
(*f[54])( );     /*TRI1(jvj+177,111,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+179; 
(*f[58])( );     /*TRI3(jvj+178,jvj+66,103,jvj+179)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+179; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+64,jvj+179,jvj+60)*/
pile[v[22]]=509; pile[WZ1]=jvj+56; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(509,jvj+56,jvj+59)*/
l34:if((x[jvj+59]<=0)) goto l115;
x[jvj+61]=s[x[jvj+59]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+59];
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[760])( );     /*MEMEX0(jvj+60,jvj+61,jvj+62)*/
if((x[jvj+62]==135)) goto l36;
x[jvj+59]=t[x[jvj+59]];
goto l34;
l36:pile[v[22]]=jvj+61; pile[WZ1]=HIST; pile[WZ2]=68; 
(*f[1752])( );     /*ELIMINE1(jvj+61,HIST,68)*/
l115:x[jvj+209]=vo[13];z[jvj+209]=vz[13];
pile[v[22]]=1028; pile[WZ1]=jvj+209; pile[WZ2]=jvj+210; 
(*f[33])( );     /*FNDE0(1028,jvj+209,jvj+210)*/
l116:if((x[jvj+210]>0)) goto l117;
if(x[jvj+56]!=incon) goto l66;
l75:if(x[jvj+29]!=incon) goto l76;
l80:if(x[jvj+174]==incon) goto l81;
goto l83;
l39:if((V109<4)) goto l40;
l88:if((v[247]<=0)) goto l89;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+159; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(218,HIST,jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=902; pile[WZ2]=A; 
(*f[1769])( );     /*AJMEMA1(jvj+159,902,A)*/
goto l89;
l40:V304=x[jvj+56];
V306=x[jvj+29];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,0,A,V302)*/
V302=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V304; pile[WZ2]=V302; 
(*f[39])( );     /*SDX0(20,V304,V302,V303)*/
V303=pile[WZ3]; 
pile[WZ1]=V306; pile[WZ2]=V303; 
(*f[39])( );     /*SDX0(20,V306,V303,V305)*/
V305=pile[WZ3]; 
pile[v[22]]=V305; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l41;     /*SORHIST1(V305,HIST,V307)*/
V307=pile[WZ2]; 
pile[v[22]]=V307; 
(*f[40])( );     /*SLG0(V307)*/
l41:if((V109!=2)) goto l88;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l88;
l43:pile[v[22]]=466; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(466,jvj+56,V120)*/
V120=pile[WZ2]; 
l52:pile[v[22]]=jvj+74; pile[WZ1]=466; pile[WZ2]=V120; 
(*f[43])( );     /*CHGC2(jvj+74,466,V120)*/
pile[v[22]]=jvj+70; 
(*f[43])( );     /*CHGC2(jvj+70,466,V120)*/
pile[v[22]]=jvj+74; pile[WZ1]=235; pile[WZ2]=jvj+70; 
(*f[35])( );     /*CHGC1(jvj+74,235,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ2]=jvj+74; 
(*f[35])( );     /*CHGC1(jvj+70,235,jvj+74)*/
pile[v[22]]=472; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(472,jvj+78,V145)*/
V145=pile[WZ2]; 
pile[v[22]]=473; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(473,jvj+78,V147)*/
V147=pile[WZ2]; 
if((V145!=V147)) goto l46;
pile[v[22]]=480; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(480,jvj+78,jvj+79)*/
for(i=x[jvj+79],V142=0;i>0;i=t[i],V142++)  ;
if((V142<=V120)) goto l46;
if((x[jvj+74]!=x[jvj+56])) goto l44;
if((x[jvj+70]!=x[jvj+69])) goto l44;
l46:pile[v[22]]=473; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l112;     /*FNDC0(473,jvj+78,V124)*/
V124=pile[WZ2]; 
l70:x[jvj+174]=x[jvj+69] ;z[jvj+174]=z[jvj+69];
x[jvj+175]=x[jvj+126] ;z[jvj+175]=z[jvj+126];
l71:pile[v[22]]=436; pile[WZ1]=jvj+78; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(436,jvj+78,jvj+129)*/
pile[v[22]]=140; pile[WZ1]=jvj+129; 
(*f[44])( );if(v[102]) goto l75;     /*FNDC1(140,jvj+129,V168)*/
V168=pile[WZ2]; 
x[jvj+130]=vo[16];z[jvj+130]=vz[16];
pile[v[22]]=1189; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[33])( );     /*FNDE0(1189,jvj+130,jvj+131)*/
l72:if((x[jvj+131]<=0)) goto l75;
I=s[x[jvj+131]];
x[jvj+91]=vo[12];z[jvj+91]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+91; pile[WZ2]=jvj+205; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(109,jvj+91,jvj+205)*/
pile[v[22]]=983; pile[WZ1]=jvj+205; pile[WZ2]=jvj+206; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(983,jvj+205,jvj+206)*/
pile[v[22]]=878; pile[WZ1]=jvj+206; pile[WZ2]=jvj+207; 
(*f[33])( );     /*FNDE0(878,jvj+206,jvj+207)*/
l113:if((x[jvj+207]<=0)) goto l73;
x[jvj+208]=s[x[jvj+207]] ;z[jvj+208]=(x[jvj+208]<=sepcte) ? x[jvj+208] : z[jvj+207];
pile[v[22]]=163; pile[WZ1]=jvj+208; 
(*f[44])( );if(v[102]) goto l114;     /*FNDC1(163,jvj+208,V383)*/
V383=pile[WZ2]; 
pile[WZ1]=jvj+91; 
(*f[44])( );if(v[102]) goto l114;     /*FNDC1(163,jvj+91,V382)*/
V382=pile[WZ2]; 
if((V383==V382)) goto l114;
x[jvj+207]=t[x[jvj+207]];
goto l113;
l44:pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[1576])( );if(v[102]) goto l46;     /*SYMET0(jvj+70,jvj+71)*/
pile[v[22]]=365; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(365,jvj+71,jvj+72)*/
for(a=x[jvj+72];a>0;a=t[a]) if(s[a]==x[jvj+74]) goto l45;
goto l46;
l45:x[jvj+73]=vo[14];z[jvj+73]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(642,jvj+73,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[1576])( );if(v[102]) goto l46;     /*SYMET0(jvj+74,jvj+75)*/
pile[v[22]]=V150; pile[WZ1]=858; pile[WZ2]=jvj+186; 
(*f[46])( );     /*TRI0(V150,858,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+187; 
(*f[189])( );     /*TRI4(jvj+186,v[13],642,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=1753; pile[WZ2]=246; pile[WZ3]=jvj+188; 
(*f[189])( );     /*TRI4(jvj+187,1753,246,jvj+188)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+188; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+188,jvj+76)*/
pile[v[22]]=365; pile[WZ1]=jvj+74; pile[WZ2]=jvj+71; pile[WZ3]=jvj+76; 
(*f[1569])( );     /*DELIER0(365,jvj+74,jvj+71,jvj+76)*/
pile[v[22]]=V150; pile[WZ1]=858; pile[WZ2]=jvj+189; 
(*f[46])( );     /*TRI0(V150,858,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+190; 
(*f[189])( );     /*TRI4(jvj+189,v[13],642,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=1753; pile[WZ2]=246; pile[WZ3]=jvj+191; 
(*f[189])( );     /*TRI4(jvj+190,1753,246,jvj+191)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+191; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+191,jvj+77)*/
pile[v[22]]=365; pile[WZ1]=jvj+70; pile[WZ2]=jvj+75; pile[WZ3]=jvj+77; 
(*f[1569])( );     /*DELIER0(365,jvj+70,jvj+75,jvj+77)*/
goto l46;
l48:x[jvj+81]=s[x[jvj+80]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+80];
pile[v[22]]=489; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(489,jvj+81,jvj+82)*/
if((x[jvj+82]==0)) goto l49;
pile[v[22]]=jvj+83; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+83,117,1)*/
l49:x[jvj+80]=t[x[jvj+80]];
l47:if((x[jvj+80]>0)) goto l48;
pile[v[22]]=117; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(117,jvj+83,V125)*/
V125=pile[WZ2]; 
if((V125<=V120)) goto l70;
if((x[jvj+74]!=x[jvj+56])) goto l50;
if((x[jvj+70]!=x[jvj+69])) goto l50;
goto l70;
l50:pile[v[22]]=jvj+70; pile[WZ1]=jvj+84; 
(*f[1576])( );if(v[102]) goto l70;     /*SYMET0(jvj+70,jvj+84)*/
pile[v[22]]=365; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(365,jvj+84,jvj+85)*/
for(a=x[jvj+85];a>0;a=t[a]) if(s[a]==x[jvj+74]) goto l51;
goto l70;
l51:x[jvj+86]=vo[14];z[jvj+86]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+86; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(642,jvj+86,V160)*/
V160=pile[WZ2]; 
pile[v[22]]=jvj+74; pile[WZ1]=jvj+87; 
(*f[1576])( );if(v[102]) goto l70;     /*SYMET0(jvj+74,jvj+87)*/
pile[v[22]]=V160; pile[WZ1]=858; pile[WZ2]=jvj+192; 
(*f[46])( );     /*TRI0(V160,858,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+193; 
(*f[189])( );     /*TRI4(jvj+192,v[13],642,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=1753; pile[WZ2]=246; pile[WZ3]=jvj+194; 
(*f[189])( );     /*TRI4(jvj+193,1753,246,jvj+194)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+194; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+194,jvj+88)*/
pile[v[22]]=365; pile[WZ1]=jvj+74; pile[WZ2]=jvj+84; pile[WZ3]=jvj+88; 
(*f[1569])( );     /*DELIER0(365,jvj+74,jvj+84,jvj+88)*/
pile[v[22]]=V160; pile[WZ1]=858; pile[WZ2]=jvj+195; 
(*f[46])( );     /*TRI0(V160,858,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+196; 
(*f[189])( );     /*TRI4(jvj+195,v[13],642,jvj+196)*/
pile[v[22]]=jvj+196; pile[WZ1]=1753; pile[WZ2]=246; pile[WZ3]=jvj+197; 
(*f[189])( );     /*TRI4(jvj+196,1753,246,jvj+197)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+197; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+197,jvj+89)*/
pile[v[22]]=365; pile[WZ1]=jvj+70; pile[WZ2]=jvj+87; pile[WZ3]=jvj+89; 
(*f[1569])( );     /*DELIER0(365,jvj+70,jvj+87,jvj+89)*/
goto l70;
l54:x[jvj+213]=t[x[jvj+213]];
l53:if((x[jvj+213]<=0)) goto l73;
x[jvj+94]=s[x[jvj+213]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+213];
pile[v[22]]=117; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(117,jvj+94,V175)*/
V175=pile[WZ2]; 
if((V175!=I)) goto l54;
pile[v[22]]=1179; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(1179,jvj+94,jvj+95)*/
x[jvj+214]=x[jvj+95] ;z[jvj+214]=z[jvj+95];
l55:if((x[jvj+214]<=0)) goto l73;
x[jvj+96]=s[x[jvj+214]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+214];
pile[v[22]]=447; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(447,jvj+96,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+97,jvj+98)*/
if((x[jvj+98]!=484)) goto l56;
pile[v[22]]=111; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+97,jvj+99)*/
pile[v[22]]=140; pile[WZ1]=jvj+99; 
(*f[44])( );if(v[102]) goto l56;     /*FNDC1(140,jvj+99,V181)*/
V181=pile[WZ2]; 
if((V168!=V181)) goto l56;
pile[v[22]]=102; pile[WZ1]=jvj+97; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(102,jvj+97,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+100,jvj+101)*/
if((x[jvj+102]=w[x[jvj+101]][3])==incon) goto l56;
pile[v[22]]=jvj+100; pile[WZ1]=jvj+102; pile[WZ3]=jvj+103; 
(*f[45])( );if(v[102]) goto l56;     /*FNDZ0(jvj+100,jvj+102,V308,jvj+103)*/
V308=pile[WZ2]; 
pile[v[22]]=jvj+56; pile[WZ3]=jvj+104; 
(*f[45])( );if(v[102]) goto l56;     /*FNDZ0(jvj+56,jvj+102,V310,jvj+104)*/
V310=pile[WZ2]; 
if((V308!=V310)) goto l56;
pile[v[22]]=459; pile[WZ1]=jvj+96; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(459,jvj+96,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(100,jvj+105,jvj+106)*/
if((x[jvj+106]!=484)) goto l74;
pile[v[22]]=111; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(111,jvj+105,jvj+107)*/
pile[v[22]]=140; pile[WZ1]=jvj+107; 
(*f[44])( );if(v[102]) goto l74;     /*FNDC1(140,jvj+107,V192)*/
V192=pile[WZ2]; 
if((V168!=V192)) goto l74;
pile[v[22]]=102; pile[WZ1]=jvj+105; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(102,jvj+105,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(100,jvj+108,jvj+109)*/
if((x[jvj+110]=w[x[jvj+109]][3])==incon) goto l74;
pile[v[22]]=jvj+108; pile[WZ1]=jvj+110; pile[WZ3]=jvj+111; 
(*f[45])( );if(v[102]) goto l74;     /*FNDZ0(jvj+108,jvj+110,V312,jvj+111)*/
V312=pile[WZ2]; 
V194=V312;
pile[v[22]]=jvj+56; pile[WZ3]=jvj+112; 
(*f[45])( );if(v[102]) goto l74;     /*FNDZ0(jvj+56,jvj+110,V314,jvj+112)*/
V314=pile[WZ2]; 
V197=V314;
if((V194==V197)) goto l73;
l74:pile[v[22]]=1189; pile[WZ1]=jvj+130; pile[WZ2]=I; 
(*f[134])( );     /*OTA0(1189,jvj+130,I)*/
l73:x[jvj+131]=t[x[jvj+131]];
goto l72;
l56:x[jvj+214]=t[x[jvj+214]];
goto l55;
l58:if((V246<4)) goto l59;
l37:x[jvj+67]=vo[16];z[jvj+67]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+67; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(905,jvj+67,V107)*/
V107=pile[WZ2]; 
if((V107==(-9009))) goto l88;
l42:V109=g[340];
if((V109<=0)) goto l88;
V110=vg[340];
if((V110!=0)) goto l38;
if((V109<3)) goto l40;
l38:pile[v[22]]=340; pile[WZ1]=10205; pile[WZ2]=1; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-4024); pile[v[22]+6]=jvj+56; pile[v[22]+7]=(-9265); pile[v[22]+8]=jvj+29; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+68; 
(*f[1341])( );     /*INTERP17(340,10205,1,(-598),A,(-4024),jvj+56,(-9265),jvj+29,(-6231),HIST,jvj+68)*/
if((x[jvj+68]==135)) goto l39;
goto l88;
l59:V327=x[jvj+56];
V329=x[jvj+29];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,0,A,V325)*/
V325=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V327; pile[WZ2]=V325; 
(*f[39])( );     /*SDX0(20,V327,V325,V326)*/
V326=pile[WZ3]; 
pile[WZ1]=V329; pile[WZ2]=V326; 
(*f[39])( );     /*SDX0(20,V329,V326,V328)*/
V328=pile[WZ3]; 
pile[v[22]]=V328; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l60;     /*SORHIST1(V328,HIST,V330)*/
V330=pile[WZ2]; 
pile[v[22]]=V330; 
(*f[40])( );     /*SLG0(V330)*/
l60:if((V246!=2)) goto l37;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l37;
l62:x[jvj+118]=s[x[jvj+215]] ;z[jvj+118]=(x[jvj+118]<=sepcte) ? x[jvj+118] : z[jvj+215];
pile[v[22]]=447; pile[WZ1]=jvj+118; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(447,jvj+118,jvj+114)*/
pile[v[22]]=498; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(498,jvj+114,jvj+115)*/
pile[v[22]]=1348; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(1348,jvj+115,jvj+116)*/
if((x[jvj+116]==68)) goto l63;
l64:pile[v[22]]=jvj+114; pile[WZ1]=jvj+119; 
(*f[1290])( );if(v[102]) goto l63;     /*DEPEXP0(jvj+114,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; 
(*f[255])( );     /*COPEXP0(jvj+119,jvj+120)*/
pile[v[22]]=459; pile[WZ1]=jvj+118; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(459,jvj+118,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; 
(*f[255])( );     /*COPEXP0(jvj+121,jvj+122)*/
x[jvj+201]=x[jvj+120] ;z[jvj+201]=z[jvj+120];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+198; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+198)*/
pile[v[22]]=jvj+198; pile[WZ1]=111; pile[WZ2]=jvj+199; 
(*f[54])( );     /*TRI1(jvj+198,111,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=jvj+122; pile[WZ2]=103; pile[WZ3]=jvj+200; 
(*f[58])( );     /*TRI3(jvj+199,jvj+122,103,jvj+200)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+201; pile[WZ4]=jvj+200; pile[WZ5]=jvj+123; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+201,jvj+200,jvj+123)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[196])( );     /*PLUF0(jvj+117,jvj+123,jvj+124)*/
l63:x[jvj+215]=t[x[jvj+215]];
l61:if((x[jvj+215]>0)) goto l62;
x[jvj+164]=x[jvj+124] ;z[jvj+164]=z[jvj+124];
goto l94;
l66:pile[v[22]]=498; pile[WZ1]=jvj+56; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(498,jvj+56,jvj+78)*/
pile[v[22]]=472; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(472,jvj+78,V98)*/
V98=pile[WZ2]; 
if((V98!=1)) goto l67;
pile[v[22]]=jvj+56; 
(*f[1321])( );     /*ENLISENVNOM0(jvj+56)*/
l67:if(x[jvj+29]!=incon) goto l68;
goto l71;
l68:pile[v[22]]=688; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(688,jvj+78,V164)*/
V164=pile[WZ2]; 
if((V164!=1)) goto l69;
pile[v[22]]=jvj+29; 
(*f[1321])( );     /*ENLISENVNOM0(jvj+29)*/
l69:pile[v[22]]=844; pile[WZ1]=jvj+78; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(844,jvj+78,jvj+125)*/
if((x[jvj+125]!=68)) goto l71;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+126; 
(*f[1576])( );if(v[102]) goto l71;     /*SYMET0(jvj+56,jvj+126)*/
pile[v[22]]=489; pile[WZ2]=jvj+127; 
(*f[33])( );     /*FNDE0(489,jvj+126,jvj+127)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+69; 
(*f[1576])( );if(v[102]) goto l71;     /*SYMET0(jvj+29,jvj+69)*/
for(a=x[jvj+127];a>0;a=t[a]) if(s[a]==x[jvj+69]) goto l71;
pile[v[22]]=489; pile[WZ2]=jvj+128; 
(*f[33])( );     /*FNDE0(489,jvj+69,jvj+128)*/
for(a=x[jvj+128];a>0;a=t[a]) if(s[a]==x[jvj+126]) goto l71;
pile[v[22]]=462; pile[WZ1]=jvj+78; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(462,jvj+78,jvj+90)*/
if((x[jvj+90]!=68)) goto l70;
pile[v[22]]=235; pile[WZ1]=jvj+56; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(235,jvj+56,jvj+74)*/
pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(235,jvj+69,jvj+70)*/
V120=incon;
if((x[jvj+56]==x[jvj+70])) goto l43;
pile[v[22]]=466; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(466,jvj+56,V140)*/
V140=pile[WZ2]; 
pile[WZ1]=jvj+69; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(466,jvj+69,V141)*/
V141=pile[WZ2]; 
V139=V140+V141;
V120=V139;
goto l52;
l76:if(x[jvj+3]!=incon) goto l77;
goto l80;
l77:x[jvj+132]=vo[12];z[jvj+132]=vz[12];
pile[v[22]]=576; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(576,jvj+132,jvj+133)*/
pile[v[22]]=111; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(111,jvj+133,jvj+134)*/
pile[v[22]]=101; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(101,jvj+134,jvj+135)*/
if((x[jvj+135]!=25)) goto l80;
x[jvj+136]=vo[13];z[jvj+136]=vz[13];
pile[v[22]]=907; pile[WZ1]=jvj+136; pile[WZ2]=jvj+137; 
(*f[33])( );     /*FNDE0(907,jvj+136,jvj+137)*/
if((x[jvj+137]!=0)) goto l80;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(498,jvj+3,jvj+138)*/
pile[v[22]]=436; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(436,jvj+138,jvj+139)*/
pile[v[22]]=140; pile[WZ1]=jvj+139; 
(*f[44])( );if(v[102]) goto l80;     /*FNDC1(140,jvj+139,V204)*/
V204=pile[WZ2]; 
x[jvj+140]=vo[14];z[jvj+140]=vz[14];
x[jvj+141]=d[20];z[jvj+141]=0;
l78:if((x[jvj+141]<=0)) goto l80;
x[jvj+142]=s[x[jvj+141]] ;z[jvj+142]=(x[jvj+142]<=sepcte) ? x[jvj+142] : z[jvj+141];
pile[v[22]]=jvj+142; pile[WZ1]=jvj+133; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+142,jvj+133,jvj+143)*/
pile[v[22]]=100; pile[WZ1]=jvj+143; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+143,jvj+144)*/
if((x[jvj+144]!=484)) goto l79;
pile[v[22]]=111; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(111,jvj+143,jvj+145)*/
pile[v[22]]=140; pile[WZ1]=jvj+145; 
(*f[44])( );if(v[102]) goto l79;     /*FNDC1(140,jvj+145,V221)*/
V221=pile[WZ2]; 
if((V204!=V221)) goto l79;
pile[v[22]]=102; pile[WZ1]=jvj+143; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(102,jvj+143,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=jvj+146; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+146,jvj+147)*/
if((x[jvj+148]=w[x[jvj+147]][3])==incon) goto l79;
pile[v[22]]=jvj+146; pile[WZ1]=jvj+148; pile[WZ3]=jvj+149; 
(*f[45])( );if(v[102]) goto l79;     /*FNDZ0(jvj+146,jvj+148,V320,jvj+149)*/
V320=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ3]=jvj+150; 
(*f[45])( );if(v[102]) goto l79;     /*FNDZ0(jvj+3,jvj+148,V322,jvj+150)*/
V322=pile[WZ2]; 
if((V320!=V322)) goto l79;
pile[v[22]]=268; pile[WZ1]=jvj+142; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(268,jvj+142,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=jvj+133; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(jvj+151,jvj+133,jvj+152)*/
pile[v[22]]=100; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+152,jvj+153)*/
if((x[jvj+154]=w[x[jvj+153]][3])==incon) goto l79;
pile[v[22]]=jvj+152; pile[WZ1]=jvj+154; pile[WZ3]=jvj+155; 
(*f[45])( );if(v[102]) goto l79;     /*FNDZ0(jvj+152,jvj+154,V316,jvj+155)*/
V316=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ3]=jvj+156; 
(*f[45])( );if(v[102]) goto l79;     /*FNDZ0(jvj+29,jvj+154,V318,jvj+156)*/
V318=pile[WZ2]; 
if((V316!=V318)) goto l79;
pile[v[22]]=jvj+3; 
(*f[1313])( );     /*SAUVEPOS0(jvj+3)*/
pile[v[22]]=jvj+140; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+140,893,12)*/
l79:x[jvj+141]=t[x[jvj+141]];
goto l78;
l81:if(x[jvj+175]==incon) goto l82;
goto l83;
l84:if(x[jvj+29]!=incon) goto l85;
goto l88;
l85:if(x[jvj+4]!=incon) goto l86;
l87:if((x[A]!=365)) goto l88;
x[jvj+158]=vo[16];z[jvj+158]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+158; 
(*f[44])( );if(v[102]) goto l37;     /*FNDC1(905,jvj+158,V244)*/
V244=pile[WZ2]; 
if((V244!=(-9009))) goto l37;
V246=g[340];
if((V246<=0)) goto l37;
V247=vg[340];
if((V247!=0)) goto l57;
if((V246<3)) goto l59;
l57:pile[v[22]]=340; pile[WZ1]=10205; pile[WZ2]=1; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-4024); pile[v[22]+6]=jvj+56; pile[v[22]+7]=(-9265); pile[v[22]+8]=jvj+29; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+113; 
(*f[1341])( );     /*INTERP17(340,10205,1,(-598),A,(-4024),jvj+56,(-9265),jvj+29,(-6231),HIST,jvj+113)*/
if((x[jvj+113]==135)) goto l58;
goto l37;
l86:if((v[111]!=0)) goto l87;
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(277,jvj+4,jvj+157)*/
if((x[jvj+157]==1350)) goto l87;
pile[v[22]]=A; pile[WZ1]=HIST; pile[WZ2]=jvj+56; pile[WZ3]=jvj+29; 
(*f[1767])( );     /*ARCHIVE3(A,HIST,jvj+56,jvj+29)*/
goto l87;
l91:if(x[jvj+15]!=incon) goto l92;
goto l93;
l92:pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l93;     /*FNDO0(277,jvj+4,jvj+161)*/
if((x[jvj+161]!=1350)) goto l93;
x[jvj+124]=0 ;z[jvj+124]=0;
x[jvj+117]=d[76];z[jvj+117]=0;
x[jvj+215]=x[jvj+15] ;z[jvj+215]=z[jvj+15];
goto l61;
l95:if(x[jvj+4]!=incon) goto l96;
if(x[jvj+29]!=incon) goto l105;
goto l111;
l96:if((v[111]!=0)) goto l97;
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+165; 
(*f[32])( );if(v[102]) goto l97;     /*FNDO0(277,jvj+4,jvj+165)*/
if((x[jvj+165]!=1350)) goto l97;
pile[v[22]]=A; pile[WZ1]=HIST; pile[WZ2]=jvj+56; pile[WZ3]=jvj+164; 
(*f[1768])( );     /*ARCHIVE4(A,HIST,jvj+56,jvj+164)*/
l97:if(x[jvj+29]!=incon) goto l98;
goto l111;
l98:if((x[A]!=489)) goto l105;
x[jvj+166]=vo[14];z[jvj+166]=vz[14];
pile[v[22]]=865; pile[WZ1]=jvj+166; pile[WZ2]=jvj+167; 
(*f[32])( );if(v[102]) goto l106;     /*FNDO0(865,jvj+166,jvj+167)*/
pile[v[22]]=866; pile[WZ1]=jvj+167; 
(*f[26])( );if(v[102]) goto l106;     /*FNDC0(866,jvj+167,K)*/
K=pile[WZ2]; 
V103=K+1;
pile[v[22]]=178; pile[WZ1]=867; pile[WZ2]=jvj+180; 
(*f[54])( );     /*TRI1(178,867,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=V103; pile[WZ2]=866; pile[WZ3]=jvj+181; 
(*f[189])( );     /*TRI4(jvj+180,V103,866,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+167; pile[WZ2]=498; pile[WZ3]=jvj+182; 
(*f[58])( );     /*TRI3(jvj+181,jvj+167,498,jvj+182)*/
pile[v[22]]=80; pile[WZ1]=jvj+29; pile[WZ2]=287; pile[WZ3]=jvj+56; pile[WZ4]=jvj+182; pile[WZ5]=jvj+163; 
(*f[269])( );     /*QUADRI6(80,jvj+29,287,jvj+56,jvj+182,jvj+163)*/
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(277,jvj+4,jvj+162)*/
if((x[jvj+162]!=1350)) goto l99;
pile[v[22]]=jvj+163; pile[WZ1]=509; pile[WZ2]=jvj+164; 
(*f[34])( );     /*CHGC0(jvj+163,509,jvj+164)*/
l99:pile[v[22]]=jvj+167; pile[WZ1]=226; pile[WZ2]=jvj+163; 
(*f[36])( );     /*PLUSC0(jvj+167,226,jvj+163)*/
pile[v[22]]=jvj+166; pile[WZ1]=977; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+166,977,1)*/
V91=g[325];
if((V91<=0)) goto l104;
V92=vg[325];
if((V92!=0)) goto l100;
if((V91<3)) goto l102;
l100:pile[v[22]]=325; pile[WZ1]=10205; pile[WZ2]=1; pile[WZ3]=(-743); pile[WZ4]=jvj+163; pile[WZ5]=(-598); pile[v[22]+6]=A; pile[v[22]+7]=(-4024); pile[v[22]+8]=jvj+56; pile[v[22]+9]=(-9265); pile[v[22]+10]=jvj+29; pile[v[22]+11]=jvj+168; 
(*f[1341])( );     /*INTERP17(325,10205,1,(-743),jvj+163,(-598),A,(-4024),jvj+56,(-9265),jvj+29,jvj+168)*/
if((x[jvj+168]==135)) goto l101;
l104:x[jvj+169]=vo[14];z[jvj+169]=vz[14];
pile[v[22]]=jvj+169; pile[WZ1]=865; pile[WZ2]=jvj+163; 
(*f[35])( );     /*CHGC1(jvj+169,865,jvj+163)*/
pile[v[22]]=927; pile[WZ1]=jvj+169; 
(*f[26])( );if(v[102]) goto l106;     /*FNDC0(927,jvj+169,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=jvj+163; pile[WZ1]=987; pile[WZ2]=V114; 
(*f[43])( );     /*CHGC2(jvj+163,987,V114)*/
l106:if(x[jvj+3]!=incon) goto l107;
goto l111;
l101:if((V91<4)) goto l102;
goto l104;
l102:pile[v[22]]=866; pile[WZ1]=jvj+163; 
(*f[26])( );if(v[102]) goto l103;     /*FNDC0(866,jvj+163,V95)*/
V95=pile[WZ2]; 
V293=v[14];
V297=x[jvj+56];
V299=x[jvj+29];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V287)*/
V287=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V287; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,V287,42,V288)*/
V288=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V95; pile[WZ2]=V288; 
(*f[39])( );     /*SDX0(41,V95,V288,V289)*/
V289=pile[WZ3]; 
pile[v[22]]=V289; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V289,40,V291)*/
V291=pile[WZ2]; 
pile[v[22]]=V291; pile[WZ1]=V293; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V291,V293,41,V292)*/
V292=pile[WZ3]; 
pile[v[22]]=V292; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V292,41,V294)*/
V294=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V294; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,V294,A,V295)*/
V295=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V297; pile[WZ2]=V295; 
(*f[39])( );     /*SDX0(20,V297,V295,V296)*/
V296=pile[WZ3]; 
pile[WZ1]=V299; pile[WZ2]=V296; 
(*f[39])( );     /*SDX0(20,V299,V296,V298)*/
V298=pile[WZ3]; 
pile[v[22]]=V298; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l103;     /*SORHIST1(V298,HIST,V300)*/
V300=pile[WZ2]; 
pile[v[22]]=V300; 
(*f[40])( );     /*SLG0(V300)*/
l103:if((V91!=2)) goto l104;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l104;
l105:if((x[A]!=365)) goto l106;
x[jvj+176]=vo[16];z[jvj+176]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+176; 
(*f[44])( );if(v[102]) goto l106;     /*FNDC1(905,jvj+176,V270)*/
V270=pile[WZ2]; 
if(V270!=(-9009)&&V270!=(-11721)) goto l106;
pile[v[22]]=699; pile[WZ1]=jvj+56; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(699,jvj+56,HIST)*/
pile[v[22]]=701; pile[WZ1]=jvj+29; 
(*f[1365])( );     /*AJOUTER0(701,jvj+29,HIST)*/
goto l106;
l107:if(x[jvj+174]!=incon) goto l108;
goto l111;
l108:if(x[jvj+175]!=incon) goto l109;
goto l111;
l109:if((x[A]!=489)) goto l111;
x[jvj+170]=vo[14];z[jvj+170]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+170; pile[WZ2]=jvj+171; 
(*f[32])( );if(v[102]) goto l110;     /*FNDO0(1418,jvj+170,jvj+171)*/
if((x[jvj+171]!=68)) goto l110;
pile[v[22]]=jvj+3; 
(*f[1595])( );     /*CRETUND0(jvj+3)*/
l110:pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
pile[v[22]]=702; pile[WZ1]=jvj+56; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(702,jvj+56,HIST)*/
pile[v[22]]=704; pile[WZ1]=jvj+29; 
(*f[1365])( );     /*AJOUTER0(704,jvj+29,HIST)*/
if((x[jvj+174]==250)) goto l111;
x[jvj+172]=vo[14];z[jvj+172]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+172; 
(*f[26])( );if(v[102]) goto l111;     /*FNDC0(642,jvj+172,V274)*/
V274=pile[WZ2]; 
pile[v[22]]=V274; pile[WZ1]=858; pile[WZ2]=jvj+202; 
(*f[46])( );     /*TRI0(V274,858,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+203; 
(*f[189])( );     /*TRI4(jvj+202,v[13],642,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=1753; pile[WZ2]=246; pile[WZ3]=jvj+204; 
(*f[189])( );     /*TRI4(jvj+203,1753,246,jvj+204)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+204; pile[WZ5]=jvj+173; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+204,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=489; pile[WZ2]=jvj+174; pile[WZ3]=jvj+175; 
(*f[1753])( );     /*LIER1(jvj+173,489,jvj+174,jvj+175)*/
pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
goto l111;
l112:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+83; 
(*f[46])( );     /*TRI0(0,117,jvj+83)*/
pile[v[22]]=480; pile[WZ1]=jvj+78; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(480,jvj+78,jvj+80)*/
goto l47;
l114:x[jvj+92]=x[jvj+208] ;z[jvj+92]=z[jvj+208];
pile[v[22]]=1179; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(1179,jvj+92,jvj+93)*/
x[jvj+213]=x[jvj+93] ;z[jvj+213]=z[jvj+93];
goto l53;
l117:x[jvj+211]=s[x[jvj+210]] ;z[jvj+211]=(x[jvj+211]<=sepcte) ? x[jvj+211] : z[jvj+210];
pile[v[22]]=jvj+211; pile[WZ1]=117; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+211,117,0)*/
x[jvj+210]=t[x[jvj+210]];
goto l116;
}
