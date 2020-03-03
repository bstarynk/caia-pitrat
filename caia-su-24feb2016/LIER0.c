#include "dx.h"
void LIER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V69=0,J=0,V55=0,V62=0,V64=0,V54=0,V57=0,V56=0,V66=0,V2=0,V269=0,V14=0,V271=0,V17=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0,V26=0,V27=0,FF=0,V41=0,V273=0,V275=0,F=0,V53=0,V268=0,V92=0,V95=0,V285=0,V289=0,V291=0,V279=0,V280=0,V281=0,V283=0,V284=0,V286=0,V287=0,V288=0,V290=0,V292=0,V91=0,V101=0,V104=0,V296=0,V298=0,V294=0,V295=0,V297=0,V299=0,V103=0,V133=0,V134=0,V132=0,V113=0,V143=0,V138=0,V140=0,V135=0,V117=0,V118=0,V153=0,V167=0,V173=0,V300=0,V302=0,V184=0,V304=0,V186=0,V306=0,V189=0,V239=0,V319=0,V321=0,V317=0,V318=0,V320=0,V322=0,V238=0,V98=0,V157=0,V160=0,I=0,V196=0,V213=0,V312=0,V314=0,V308=0,V310=0,V236=0,V108=0,V244=0,V266=0,V262=0,V372=0,V371=0;
int A,B,C,HIST,HH;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=208;
x[jvj+1]=10205;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1568&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; HIST=pile[v[22]+3]; HH=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=x[jvj+15]=x[jvj+56]=x[jvj+3]=x[jvj+169]=x[jvj+170]=x[jvj+4]=incon;
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=C; pile[WZ3]=jvj+3; pile[WZ4]=jvj+4; 
(*f[1766])( );if(v[102]) goto l70;     /*METORDRE0(A,B,C,jvj+3,jvj+4)*/
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
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+47,jvj+49,V273,jvj+50)*/
V273=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ3]=jvj+51; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+3,jvj+49,V275,jvj+51)*/
V275=pile[WZ2]; 
if((V273!=V275)) goto l26;
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
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+33,jvj+35,V269,jvj+36)*/
V269=pile[WZ2]; 
V14=V269;
pile[v[22]]=jvj+29; pile[WZ3]=jvj+37; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+29,jvj+35,V271,jvj+37)*/
V271=pile[WZ2]; 
V17=V271;
if((V14==V17)) goto l27;
l26:x[jvj+55]=t[x[jvj+55]];
goto l25;
l10:V55=1;
l19:x[jvj+27]=vo[14];z[jvj+27]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l70;     /*FNDC0(642,jvj+27,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(498,jvj+3,jvj+28)*/
V56=incon;
x[jvj+204]=x[jvj+15] ;z[jvj+204]=z[jvj+15];
l13:if((x[jvj+204]>0)) goto l14;
V56=1;
l20:pile[v[22]]=jvj+28; pile[WZ1]=V56; pile[WZ2]=jvj+29; 
(*f[1765])( );     /*AJARR0(jvj+28,V56,jvj+29)*/
pile[v[22]]=V66; pile[WZ1]=858; pile[WZ2]=jvj+175; 
(*f[46])( );     /*TRI0(V66,858,jvj+175)*/
pile[v[22]]=jvj+175; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+176; 
(*f[189])( );     /*TRI4(jvj+175,v[13],642,jvj+176)*/
pile[v[22]]=jvj+176; pile[WZ1]=1568; pile[WZ2]=246; pile[WZ3]=jvj+177; 
(*f[189])( );     /*TRI4(jvj+176,1568,246,jvj+177)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+177; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+177,jvj+30)*/
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
l14:x[jvj+22]=s[x[jvj+204]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+204];
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
l15:x[jvj+204]=t[x[jvj+204]];
goto l13;
l17:if(x[jvj+15]!=incon) goto l18;
l70:if((x[A]==489)) goto l114;
l87:x[jvj+169]=250 ;z[jvj+169]=250;
x[jvj+170]=250 ;z[jvj+170]=250;
l88:if(x[jvj+56]!=incon) goto l89;
l94:x[jvj+161]=vo[14];z[jvj+161]=vz[14];
pile[v[22]]=jvj+161; pile[WZ1]=865; pile[WZ2]=HH; 
(*f[35])( );     /*CHGC1(jvj+161,865,HH)*/
pile[v[22]]=927; pile[WZ1]=jvj+161; 
(*f[26])( );if(v[102]) goto l95;     /*FNDC0(927,jvj+161,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=HH; pile[WZ1]=987; pile[WZ2]=V108; 
(*f[43])( );     /*CHGC2(HH,987,V108)*/
l95:pile[v[22]]=220; pile[WZ1]=jvj+161; 
(*f[26])( );if(v[102]) goto l96;     /*FNDC0(220,jvj+161,V244)*/
V244=pile[WZ2]; 
pile[v[22]]=jvj+161; pile[WZ1]=1572; pile[WZ2]=V244; 
(*f[43])( );     /*CHGC2(jvj+161,1572,V244)*/
l96:if(x[jvj+4]!=incon) goto l97;
l99:x[jvj+208]=0 ;z[jvj+208]=0;
x[jvj+164]=x[jvj+208] ;z[jvj+164]=z[jvj+208];
l100:if(x[jvj+56]!=incon) goto l101;
l110:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l18:pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(277,jvj+4,jvj+26)*/
if((x[jvj+26]!=1350)) goto l70;
pile[v[22]]=202; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(202,jvj+3,jvj+21)*/
if((x[jvj+21]==68)) goto l70;
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
goto l70;
l33:x[jvj+57]=vo[14];z[jvj+57]=vz[14];
pile[v[22]]=865; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(865,jvj+57,jvj+58)*/
V268=v[14];
pile[v[22]]=jvj+58; pile[WZ1]=891; pile[WZ2]=V268; 
(*f[43])( );     /*CHGC2(jvj+58,891,V268)*/
z[jvj+56]=(-1);
pile[v[22]]=jvj+56; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+56,A,jvj+29)*/
if(x[A]!=365&&x[A]!=489) goto l35;
z[jvj+29]=(-1);
pile[v[22]]=jvj+29; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+29,A,jvj+56)*/
l35:if((x[A]!=489)) goto l87;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+63; 
(*f[1290])( );if(v[102]) goto l114;     /*DEPEXP0(jvj+56,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; 
(*f[255])( );     /*COPEXP0(jvj+63,jvj+64)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+65; 
(*f[1291])( );if(v[102]) goto l114;     /*CONVEXP0(jvj+4,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(jvj+65,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=111; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,111,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+174; 
(*f[58])( );     /*TRI3(jvj+173,jvj+66,103,jvj+174)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+174; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+64,jvj+174,jvj+60)*/
pile[v[22]]=509; pile[WZ1]=jvj+56; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(509,jvj+56,jvj+59)*/
l34:if((x[jvj+59]<=0)) goto l114;
x[jvj+61]=s[x[jvj+59]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+59];
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[760])( );     /*MEMEX0(jvj+60,jvj+61,jvj+62)*/
if((x[jvj+62]==135)) goto l36;
x[jvj+59]=t[x[jvj+59]];
goto l34;
l36:pile[v[22]]=jvj+61; pile[WZ1]=HIST; pile[WZ2]=68; 
(*f[1752])( );     /*ELIMINE1(jvj+61,HIST,68)*/
l114:x[jvj+201]=vo[13];z[jvj+201]=vz[13];
pile[v[22]]=1028; pile[WZ1]=jvj+201; pile[WZ2]=jvj+202; 
(*f[33])( );     /*FNDE0(1028,jvj+201,jvj+202)*/
l115:if((x[jvj+202]>0)) goto l116;
if(x[jvj+56]!=incon) goto l71;
if(x[jvj+29]!=incon) goto l81;
goto l87;
l38:if((V91<4)) goto l39;
l81:if(x[jvj+3]!=incon) goto l82;
l85:if(x[jvj+169]==incon) goto l86;
goto l88;
l39:pile[v[22]]=866; pile[WZ1]=HH; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(866,HH,V95)*/
V95=pile[WZ2]; 
V285=v[14];
V289=x[jvj+56];
V291=x[jvj+29];
pile[v[22]]=0; pile[WZ1]=3; 
(*f[178])( );     /*SPLO0(0,3,V279)*/
V279=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V279; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(10,V279,42,V280)*/
V280=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V95; pile[WZ2]=V280; 
(*f[39])( );     /*SDX0(41,V95,V280,V281)*/
V281=pile[WZ3]; 
pile[v[22]]=V281; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V281,40,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=V283; pile[WZ1]=V285; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V283,V285,41,V284)*/
V284=pile[WZ3]; 
pile[v[22]]=V284; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V284,41,V286)*/
V286=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V286; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,V286,A,V287)*/
V287=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V289; pile[WZ2]=V287; 
(*f[39])( );     /*SDX0(20,V289,V287,V288)*/
V288=pile[WZ3]; 
pile[WZ1]=V291; pile[WZ2]=V288; 
(*f[39])( );     /*SDX0(20,V291,V288,V290)*/
V290=pile[WZ3]; 
pile[v[22]]=V290; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l40;     /*SORHIST1(V290,HIST,V292)*/
V292=pile[WZ2]; 
pile[v[22]]=V292; 
(*f[40])( );     /*SLG0(V292)*/
l40:if((V91!=2)) goto l81;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l81;
l41:V91=g[325];
if((V91<=0)) goto l81;
V92=vg[325];
if((V92!=0)) goto l37;
if((V91<3)) goto l39;
l37:pile[v[22]]=325; pile[WZ1]=10205; pile[WZ2]=0; pile[WZ3]=(-743); pile[WZ4]=HH; pile[WZ5]=(-598); pile[v[22]+6]=A; pile[v[22]+7]=(-4024); pile[v[22]+8]=jvj+56; pile[v[22]+9]=(-9265); pile[v[22]+10]=jvj+29; pile[v[22]+11]=jvj+67; 
(*f[1341])( );     /*INTERP17(325,10205,0,(-743),HH,(-598),A,(-4024),jvj+56,(-9265),jvj+29,jvj+67)*/
if((x[jvj+67]==135)) goto l38;
goto l81;
l44:if((V103<4)) goto l45;
l93:if((v[247]<=0)) goto l94;
pile[v[22]]=218; pile[WZ1]=HIST; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(218,HIST,jvj+160)*/
pile[v[22]]=jvj+160; pile[WZ1]=902; pile[WZ2]=A; 
(*f[1769])( );     /*AJMEMA1(jvj+160,902,A)*/
goto l94;
l45:V296=x[jvj+56];
V298=x[jvj+29];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,0,A,V294)*/
V294=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V296; pile[WZ2]=V294; 
(*f[39])( );     /*SDX0(20,V296,V294,V295)*/
V295=pile[WZ3]; 
pile[WZ1]=V298; pile[WZ2]=V295; 
(*f[39])( );     /*SDX0(20,V298,V295,V297)*/
V297=pile[WZ3]; 
pile[v[22]]=V297; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l46;     /*SORHIST1(V297,HIST,V299)*/
V299=pile[WZ2]; 
pile[v[22]]=V299; 
(*f[40])( );     /*SLG0(V299)*/
l46:if((V103!=2)) goto l93;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l93;
l48:pile[v[22]]=466; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(466,jvj+56,V113)*/
V113=pile[WZ2]; 
l57:pile[v[22]]=jvj+75; pile[WZ1]=466; pile[WZ2]=V113; 
(*f[43])( );     /*CHGC2(jvj+75,466,V113)*/
pile[v[22]]=jvj+71; 
(*f[43])( );     /*CHGC2(jvj+71,466,V113)*/
pile[v[22]]=jvj+75; pile[WZ1]=235; pile[WZ2]=jvj+71; 
(*f[35])( );     /*CHGC1(jvj+75,235,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ2]=jvj+75; 
(*f[35])( );     /*CHGC1(jvj+71,235,jvj+75)*/
pile[v[22]]=472; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(472,jvj+79,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=473; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(473,jvj+79,V140)*/
V140=pile[WZ2]; 
if((V138!=V140)) goto l51;
pile[v[22]]=480; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(480,jvj+79,jvj+80)*/
for(i=x[jvj+80],V135=0;i>0;i=t[i],V135++)  ;
if((V135<=V113)) goto l51;
if((x[jvj+75]!=x[jvj+56])) goto l49;
if((x[jvj+71]!=x[jvj+70])) goto l49;
l51:pile[v[22]]=473; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l111;     /*FNDC0(473,jvj+79,V117)*/
V117=pile[WZ2]; 
l75:x[jvj+169]=x[jvj+70] ;z[jvj+169]=z[jvj+70];
x[jvj+170]=x[jvj+127] ;z[jvj+170]=z[jvj+127];
l76:pile[v[22]]=436; pile[WZ1]=jvj+79; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(436,jvj+79,jvj+130)*/
pile[v[22]]=140; pile[WZ1]=jvj+130; 
(*f[44])( );if(v[102]) goto l80;     /*FNDC1(140,jvj+130,V160)*/
V160=pile[WZ2]; 
x[jvj+131]=vo[16];z[jvj+131]=vz[16];
pile[v[22]]=1189; pile[WZ1]=jvj+131; pile[WZ2]=jvj+132; 
(*f[33])( );     /*FNDE0(1189,jvj+131,jvj+132)*/
l77:if((x[jvj+132]<=0)) goto l80;
I=s[x[jvj+132]];
x[jvj+92]=vo[12];z[jvj+92]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+92; pile[WZ2]=jvj+197; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(109,jvj+92,jvj+197)*/
pile[v[22]]=983; pile[WZ1]=jvj+197; pile[WZ2]=jvj+198; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(983,jvj+197,jvj+198)*/
pile[v[22]]=878; pile[WZ1]=jvj+198; pile[WZ2]=jvj+199; 
(*f[33])( );     /*FNDE0(878,jvj+198,jvj+199)*/
l112:if((x[jvj+199]<=0)) goto l78;
x[jvj+200]=s[x[jvj+199]] ;z[jvj+200]=(x[jvj+200]<=sepcte) ? x[jvj+200] : z[jvj+199];
pile[v[22]]=163; pile[WZ1]=jvj+200; 
(*f[44])( );if(v[102]) goto l113;     /*FNDC1(163,jvj+200,V372)*/
V372=pile[WZ2]; 
pile[WZ1]=jvj+92; 
(*f[44])( );if(v[102]) goto l113;     /*FNDC1(163,jvj+92,V371)*/
V371=pile[WZ2]; 
if((V372==V371)) goto l113;
x[jvj+199]=t[x[jvj+199]];
goto l112;
l49:pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; 
(*f[1576])( );if(v[102]) goto l51;     /*SYMET0(jvj+71,jvj+72)*/
pile[v[22]]=365; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(365,jvj+72,jvj+73)*/
for(a=x[jvj+73];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l50;
goto l51;
l50:x[jvj+74]=vo[14];z[jvj+74]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(642,jvj+74,V143)*/
V143=pile[WZ2]; 
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; 
(*f[1576])( );if(v[102]) goto l51;     /*SYMET0(jvj+75,jvj+76)*/
pile[v[22]]=V143; pile[WZ1]=858; pile[WZ2]=jvj+178; 
(*f[46])( );     /*TRI0(V143,858,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+179; 
(*f[189])( );     /*TRI4(jvj+178,v[13],642,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=1568; pile[WZ2]=246; pile[WZ3]=jvj+180; 
(*f[189])( );     /*TRI4(jvj+179,1568,246,jvj+180)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+180; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+180,jvj+77)*/
pile[v[22]]=365; pile[WZ1]=jvj+75; pile[WZ2]=jvj+72; pile[WZ3]=jvj+77; 
(*f[1569])( );     /*DELIER0(365,jvj+75,jvj+72,jvj+77)*/
pile[v[22]]=V143; pile[WZ1]=858; pile[WZ2]=jvj+181; 
(*f[46])( );     /*TRI0(V143,858,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+182; 
(*f[189])( );     /*TRI4(jvj+181,v[13],642,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=1568; pile[WZ2]=246; pile[WZ3]=jvj+183; 
(*f[189])( );     /*TRI4(jvj+182,1568,246,jvj+183)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+183; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+183,jvj+78)*/
pile[v[22]]=365; pile[WZ1]=jvj+71; pile[WZ2]=jvj+76; pile[WZ3]=jvj+78; 
(*f[1569])( );     /*DELIER0(365,jvj+71,jvj+76,jvj+78)*/
goto l51;
l53:x[jvj+82]=s[x[jvj+81]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+81];
pile[v[22]]=489; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(489,jvj+82,jvj+83)*/
if((x[jvj+83]==0)) goto l54;
pile[v[22]]=jvj+84; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+84,117,1)*/
l54:x[jvj+81]=t[x[jvj+81]];
l52:if((x[jvj+81]>0)) goto l53;
pile[v[22]]=117; pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(117,jvj+84,V118)*/
V118=pile[WZ2]; 
if((V118<=V113)) goto l75;
if((x[jvj+75]!=x[jvj+56])) goto l55;
if((x[jvj+71]!=x[jvj+70])) goto l55;
goto l75;
l55:pile[v[22]]=jvj+71; pile[WZ1]=jvj+85; 
(*f[1576])( );if(v[102]) goto l75;     /*SYMET0(jvj+71,jvj+85)*/
pile[v[22]]=365; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(365,jvj+85,jvj+86)*/
for(a=x[jvj+86];a>0;a=t[a]) if(s[a]==x[jvj+75]) goto l56;
goto l75;
l56:x[jvj+87]=vo[14];z[jvj+87]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(642,jvj+87,V153)*/
V153=pile[WZ2]; 
pile[v[22]]=jvj+75; pile[WZ1]=jvj+88; 
(*f[1576])( );if(v[102]) goto l75;     /*SYMET0(jvj+75,jvj+88)*/
pile[v[22]]=V153; pile[WZ1]=858; pile[WZ2]=jvj+184; 
(*f[46])( );     /*TRI0(V153,858,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+185; 
(*f[189])( );     /*TRI4(jvj+184,v[13],642,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=1568; pile[WZ2]=246; pile[WZ3]=jvj+186; 
(*f[189])( );     /*TRI4(jvj+185,1568,246,jvj+186)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+186; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+186,jvj+89)*/
pile[v[22]]=365; pile[WZ1]=jvj+75; pile[WZ2]=jvj+85; pile[WZ3]=jvj+89; 
(*f[1569])( );     /*DELIER0(365,jvj+75,jvj+85,jvj+89)*/
pile[v[22]]=V153; pile[WZ1]=858; pile[WZ2]=jvj+187; 
(*f[46])( );     /*TRI0(V153,858,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+188; 
(*f[189])( );     /*TRI4(jvj+187,v[13],642,jvj+188)*/
pile[v[22]]=jvj+188; pile[WZ1]=1568; pile[WZ2]=246; pile[WZ3]=jvj+189; 
(*f[189])( );     /*TRI4(jvj+188,1568,246,jvj+189)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+189; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+189,jvj+90)*/
pile[v[22]]=365; pile[WZ1]=jvj+71; pile[WZ2]=jvj+88; pile[WZ3]=jvj+90; 
(*f[1569])( );     /*DELIER0(365,jvj+71,jvj+88,jvj+90)*/
goto l75;
l59:x[jvj+205]=t[x[jvj+205]];
l58:if((x[jvj+205]<=0)) goto l78;
x[jvj+95]=s[x[jvj+205]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+205];
pile[v[22]]=117; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l59;     /*FNDC0(117,jvj+95,V167)*/
V167=pile[WZ2]; 
if((V167!=I)) goto l59;
pile[v[22]]=1179; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(1179,jvj+95,jvj+96)*/
x[jvj+206]=x[jvj+96] ;z[jvj+206]=z[jvj+96];
l60:if((x[jvj+206]<=0)) goto l78;
x[jvj+97]=s[x[jvj+206]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+206];
pile[v[22]]=447; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(447,jvj+97,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+98,jvj+99)*/
if((x[jvj+99]!=484)) goto l61;
pile[v[22]]=111; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+98,jvj+100)*/
pile[v[22]]=140; pile[WZ1]=jvj+100; 
(*f[44])( );if(v[102]) goto l61;     /*FNDC1(140,jvj+100,V173)*/
V173=pile[WZ2]; 
if((V160!=V173)) goto l61;
pile[v[22]]=102; pile[WZ1]=jvj+98; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,jvj+98,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+101,jvj+102)*/
if((x[jvj+103]=w[x[jvj+102]][3])==incon) goto l61;
pile[v[22]]=jvj+101; pile[WZ1]=jvj+103; pile[WZ3]=jvj+104; 
(*f[45])( );if(v[102]) goto l61;     /*FNDZ0(jvj+101,jvj+103,V300,jvj+104)*/
V300=pile[WZ2]; 
pile[v[22]]=jvj+56; pile[WZ3]=jvj+105; 
(*f[45])( );if(v[102]) goto l61;     /*FNDZ0(jvj+56,jvj+103,V302,jvj+105)*/
V302=pile[WZ2]; 
if((V300!=V302)) goto l61;
pile[v[22]]=459; pile[WZ1]=jvj+97; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(459,jvj+97,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+106,jvj+107)*/
if((x[jvj+107]!=484)) goto l79;
pile[v[22]]=111; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(111,jvj+106,jvj+108)*/
pile[v[22]]=140; pile[WZ1]=jvj+108; 
(*f[44])( );if(v[102]) goto l79;     /*FNDC1(140,jvj+108,V184)*/
V184=pile[WZ2]; 
if((V160!=V184)) goto l79;
pile[v[22]]=102; pile[WZ1]=jvj+106; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(102,jvj+106,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(100,jvj+109,jvj+110)*/
if((x[jvj+111]=w[x[jvj+110]][3])==incon) goto l79;
pile[v[22]]=jvj+109; pile[WZ1]=jvj+111; pile[WZ3]=jvj+112; 
(*f[45])( );if(v[102]) goto l79;     /*FNDZ0(jvj+109,jvj+111,V304,jvj+112)*/
V304=pile[WZ2]; 
V186=V304;
pile[v[22]]=jvj+56; pile[WZ3]=jvj+113; 
(*f[45])( );if(v[102]) goto l79;     /*FNDZ0(jvj+56,jvj+111,V306,jvj+113)*/
V306=pile[WZ2]; 
V189=V306;
if((V186==V189)) goto l78;
l79:pile[v[22]]=1189; pile[WZ1]=jvj+131; pile[WZ2]=I; 
(*f[134])( );     /*OTA0(1189,jvj+131,I)*/
l78:x[jvj+132]=t[x[jvj+132]];
goto l77;
l61:x[jvj+206]=t[x[jvj+206]];
goto l60;
l63:if((V238<4)) goto l64;
l42:x[jvj+68]=vo[16];z[jvj+68]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+68; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(905,jvj+68,V101)*/
V101=pile[WZ2]; 
if((V101==(-9009))) goto l93;
l47:V103=g[340];
if((V103<=0)) goto l93;
V104=vg[340];
if((V104!=0)) goto l43;
if((V103<3)) goto l45;
l43:pile[v[22]]=340; pile[WZ1]=10205; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-4024); pile[v[22]+6]=jvj+56; pile[v[22]+7]=(-9265); pile[v[22]+8]=jvj+29; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+69; 
(*f[1341])( );     /*INTERP17(340,10205,0,(-598),A,(-4024),jvj+56,(-9265),jvj+29,(-6231),HIST,jvj+69)*/
if((x[jvj+69]==135)) goto l44;
goto l93;
l64:V319=x[jvj+56];
V321=x[jvj+29];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=A; 
(*f[42])( );     /*SRA1(135,0,A,V317)*/
V317=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V319; pile[WZ2]=V317; 
(*f[39])( );     /*SDX0(20,V319,V317,V318)*/
V318=pile[WZ3]; 
pile[WZ1]=V321; pile[WZ2]=V318; 
(*f[39])( );     /*SDX0(20,V321,V318,V320)*/
V320=pile[WZ3]; 
pile[v[22]]=V320; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l65;     /*SORHIST1(V320,HIST,V322)*/
V322=pile[WZ2]; 
pile[v[22]]=V322; 
(*f[40])( );     /*SLG0(V322)*/
l65:if((V238!=2)) goto l42;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l42;
l67:x[jvj+119]=s[x[jvj+207]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+207];
pile[v[22]]=447; pile[WZ1]=jvj+119; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(447,jvj+119,jvj+115)*/
pile[v[22]]=498; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(498,jvj+115,jvj+116)*/
pile[v[22]]=1348; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(1348,jvj+116,jvj+117)*/
if((x[jvj+117]==68)) goto l68;
l69:pile[v[22]]=jvj+115; pile[WZ1]=jvj+120; 
(*f[1290])( );if(v[102]) goto l68;     /*DEPEXP0(jvj+115,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=jvj+121; 
(*f[255])( );     /*COPEXP0(jvj+120,jvj+121)*/
pile[v[22]]=459; pile[WZ1]=jvj+119; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(459,jvj+119,jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=jvj+123; 
(*f[255])( );     /*COPEXP0(jvj+122,jvj+123)*/
x[jvj+193]=x[jvj+121] ;z[jvj+193]=z[jvj+121];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+190; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=111; pile[WZ2]=jvj+191; 
(*f[54])( );     /*TRI1(jvj+190,111,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=jvj+123; pile[WZ2]=103; pile[WZ3]=jvj+192; 
(*f[58])( );     /*TRI3(jvj+191,jvj+123,103,jvj+192)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+193; pile[WZ4]=jvj+192; pile[WZ5]=jvj+124; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+193,jvj+192,jvj+124)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[196])( );     /*PLUF0(jvj+118,jvj+124,jvj+125)*/
l68:x[jvj+207]=t[x[jvj+207]];
l66:if((x[jvj+207]>0)) goto l67;
x[jvj+164]=x[jvj+125] ;z[jvj+164]=z[jvj+125];
goto l100;
l71:pile[v[22]]=498; pile[WZ1]=jvj+56; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(498,jvj+56,jvj+79)*/
pile[v[22]]=472; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(472,jvj+79,V98)*/
V98=pile[WZ2]; 
if((V98!=1)) goto l72;
pile[v[22]]=jvj+56; 
(*f[1321])( );     /*ENLISENVNOM0(jvj+56)*/
l72:if(x[jvj+29]!=incon) goto l73;
goto l76;
l73:pile[v[22]]=688; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(688,jvj+79,V157)*/
V157=pile[WZ2]; 
if((V157!=1)) goto l74;
pile[v[22]]=jvj+29; 
(*f[1321])( );     /*ENLISENVNOM0(jvj+29)*/
l74:pile[v[22]]=844; pile[WZ1]=jvj+79; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(844,jvj+79,jvj+126)*/
if((x[jvj+126]!=68)) goto l76;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+127; 
(*f[1576])( );if(v[102]) goto l76;     /*SYMET0(jvj+56,jvj+127)*/
pile[v[22]]=489; pile[WZ2]=jvj+128; 
(*f[33])( );     /*FNDE0(489,jvj+127,jvj+128)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+70; 
(*f[1576])( );if(v[102]) goto l76;     /*SYMET0(jvj+29,jvj+70)*/
for(a=x[jvj+128];a>0;a=t[a]) if(s[a]==x[jvj+70]) goto l76;
pile[v[22]]=489; pile[WZ2]=jvj+129; 
(*f[33])( );     /*FNDE0(489,jvj+70,jvj+129)*/
for(a=x[jvj+129];a>0;a=t[a]) if(s[a]==x[jvj+127]) goto l76;
pile[v[22]]=462; pile[WZ1]=jvj+79; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(462,jvj+79,jvj+91)*/
if((x[jvj+91]!=68)) goto l75;
pile[v[22]]=235; pile[WZ1]=jvj+56; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(235,jvj+56,jvj+75)*/
pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(235,jvj+70,jvj+71)*/
V113=incon;
if((x[jvj+56]==x[jvj+71])) goto l48;
pile[v[22]]=466; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(466,jvj+56,V133)*/
V133=pile[WZ2]; 
pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(466,jvj+70,V134)*/
V134=pile[WZ2]; 
V132=V133+V134;
V113=V132;
goto l57;
l80:if(x[jvj+29]!=incon) goto l41;
goto l85;
l82:x[jvj+133]=vo[12];z[jvj+133]=vz[12];
pile[v[22]]=576; pile[WZ1]=jvj+133; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(576,jvj+133,jvj+134)*/
pile[v[22]]=111; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(111,jvj+134,jvj+135)*/
pile[v[22]]=101; pile[WZ1]=jvj+135; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(101,jvj+135,jvj+136)*/
if((x[jvj+136]!=25)) goto l85;
x[jvj+137]=vo[13];z[jvj+137]=vz[13];
pile[v[22]]=907; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[33])( );     /*FNDE0(907,jvj+137,jvj+138)*/
if((x[jvj+138]!=0)) goto l85;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(498,jvj+3,jvj+139)*/
pile[v[22]]=436; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(436,jvj+139,jvj+140)*/
pile[v[22]]=140; pile[WZ1]=jvj+140; 
(*f[44])( );if(v[102]) goto l85;     /*FNDC1(140,jvj+140,V196)*/
V196=pile[WZ2]; 
x[jvj+141]=vo[14];z[jvj+141]=vz[14];
x[jvj+142]=d[20];z[jvj+142]=0;
l83:if((x[jvj+142]<=0)) goto l85;
x[jvj+143]=s[x[jvj+142]] ;z[jvj+143]=(x[jvj+143]<=sepcte) ? x[jvj+143] : z[jvj+142];
pile[v[22]]=jvj+143; pile[WZ1]=jvj+134; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(jvj+143,jvj+134,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(100,jvj+144,jvj+145)*/
if((x[jvj+145]!=484)) goto l84;
pile[v[22]]=111; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(111,jvj+144,jvj+146)*/
pile[v[22]]=140; pile[WZ1]=jvj+146; 
(*f[44])( );if(v[102]) goto l84;     /*FNDC1(140,jvj+146,V213)*/
V213=pile[WZ2]; 
if((V196!=V213)) goto l84;
pile[v[22]]=102; pile[WZ1]=jvj+144; pile[WZ2]=jvj+147; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(102,jvj+144,jvj+147)*/
pile[v[22]]=100; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(100,jvj+147,jvj+148)*/
if((x[jvj+149]=w[x[jvj+148]][3])==incon) goto l84;
pile[v[22]]=jvj+147; pile[WZ1]=jvj+149; pile[WZ3]=jvj+150; 
(*f[45])( );if(v[102]) goto l84;     /*FNDZ0(jvj+147,jvj+149,V312,jvj+150)*/
V312=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ3]=jvj+151; 
(*f[45])( );if(v[102]) goto l84;     /*FNDZ0(jvj+3,jvj+149,V314,jvj+151)*/
V314=pile[WZ2]; 
if((V312!=V314)) goto l84;
pile[v[22]]=268; pile[WZ1]=jvj+143; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(268,jvj+143,jvj+152)*/
pile[v[22]]=jvj+152; pile[WZ1]=jvj+134; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(jvj+152,jvj+134,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=jvj+153; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(100,jvj+153,jvj+154)*/
if((x[jvj+155]=w[x[jvj+154]][3])==incon) goto l84;
pile[v[22]]=jvj+153; pile[WZ1]=jvj+155; pile[WZ3]=jvj+156; 
(*f[45])( );if(v[102]) goto l84;     /*FNDZ0(jvj+153,jvj+155,V308,jvj+156)*/
V308=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ3]=jvj+157; 
(*f[45])( );if(v[102]) goto l84;     /*FNDZ0(jvj+29,jvj+155,V310,jvj+157)*/
V310=pile[WZ2]; 
if((V308!=V310)) goto l84;
pile[v[22]]=jvj+3; 
(*f[1313])( );     /*SAUVEPOS0(jvj+3)*/
pile[v[22]]=jvj+141; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+141,893,12)*/
l84:x[jvj+142]=t[x[jvj+142]];
goto l83;
l86:if(x[jvj+170]==incon) goto l87;
goto l88;
l89:if(x[jvj+29]!=incon) goto l90;
goto l93;
l90:if(x[jvj+4]!=incon) goto l91;
l92:if((x[A]!=365)) goto l93;
x[jvj+159]=vo[16];z[jvj+159]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+159; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(905,jvj+159,V236)*/
V236=pile[WZ2]; 
if((V236!=(-9009))) goto l42;
V238=g[340];
if((V238<=0)) goto l42;
V239=vg[340];
if((V239!=0)) goto l62;
if((V238<3)) goto l64;
l62:pile[v[22]]=340; pile[WZ1]=10205; pile[WZ2]=0; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-4024); pile[v[22]+6]=jvj+56; pile[v[22]+7]=(-9265); pile[v[22]+8]=jvj+29; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+114; 
(*f[1341])( );     /*INTERP17(340,10205,0,(-598),A,(-4024),jvj+56,(-9265),jvj+29,(-6231),HIST,jvj+114)*/
if((x[jvj+114]==135)) goto l63;
goto l42;
l91:if((v[111]!=0)) goto l92;
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l92;     /*FNDO0(277,jvj+4,jvj+158)*/
if((x[jvj+158]==1350)) goto l92;
pile[v[22]]=A; pile[WZ1]=HIST; pile[WZ2]=jvj+56; pile[WZ3]=jvj+29; 
(*f[1767])( );     /*ARCHIVE3(A,HIST,jvj+56,jvj+29)*/
goto l92;
l97:if(x[jvj+15]!=incon) goto l98;
goto l99;
l98:pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+162; 
(*f[32])( );if(v[102]) goto l99;     /*FNDO0(277,jvj+4,jvj+162)*/
if((x[jvj+162]!=1350)) goto l99;
x[jvj+125]=0 ;z[jvj+125]=0;
x[jvj+118]=d[76];z[jvj+118]=0;
x[jvj+207]=x[jvj+15] ;z[jvj+207]=z[jvj+15];
goto l66;
l101:if(x[jvj+4]!=incon) goto l102;
l103:if(x[jvj+29]!=incon) goto l104;
goto l110;
l102:if((v[111]!=0)) goto l103;
pile[v[22]]=277; pile[WZ1]=jvj+4; pile[WZ2]=jvj+163; 
(*f[32])( );if(v[102]) goto l103;     /*FNDO0(277,jvj+4,jvj+163)*/
if((x[jvj+163]!=1350)) goto l103;
pile[v[22]]=A; pile[WZ1]=HIST; pile[WZ2]=jvj+56; pile[WZ3]=jvj+164; 
(*f[1768])( );     /*ARCHIVE4(A,HIST,jvj+56,jvj+164)*/
goto l103;
l104:if((x[A]!=365)) goto l105;
x[jvj+171]=vo[16];z[jvj+171]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+171; 
(*f[44])( );if(v[102]) goto l105;     /*FNDC1(905,jvj+171,V262)*/
V262=pile[WZ2]; 
if(V262!=(-9009)&&V262!=(-11721)) goto l105;
pile[v[22]]=699; pile[WZ1]=jvj+56; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(699,jvj+56,HIST)*/
pile[v[22]]=701; pile[WZ1]=jvj+29; 
(*f[1365])( );     /*AJOUTER0(701,jvj+29,HIST)*/
l105:if(x[jvj+3]!=incon) goto l106;
goto l110;
l106:if(x[jvj+169]!=incon) goto l107;
goto l110;
l107:if(x[jvj+170]!=incon) goto l108;
goto l110;
l108:if((x[A]!=489)) goto l110;
x[jvj+165]=vo[14];z[jvj+165]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+165; pile[WZ2]=jvj+166; 
(*f[32])( );if(v[102]) goto l109;     /*FNDO0(1418,jvj+165,jvj+166)*/
if((x[jvj+166]!=68)) goto l109;
pile[v[22]]=jvj+3; 
(*f[1595])( );     /*CRETUND0(jvj+3)*/
l109:pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
pile[v[22]]=702; pile[WZ1]=jvj+56; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(702,jvj+56,HIST)*/
pile[v[22]]=704; pile[WZ1]=jvj+29; 
(*f[1365])( );     /*AJOUTER0(704,jvj+29,HIST)*/
if((x[jvj+169]==250)) goto l110;
x[jvj+167]=vo[14];z[jvj+167]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+167; 
(*f[26])( );if(v[102]) goto l110;     /*FNDC0(642,jvj+167,V266)*/
V266=pile[WZ2]; 
pile[v[22]]=V266; pile[WZ1]=858; pile[WZ2]=jvj+194; 
(*f[46])( );     /*TRI0(V266,858,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+195; 
(*f[189])( );     /*TRI4(jvj+194,v[13],642,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=1568; pile[WZ2]=246; pile[WZ3]=jvj+196; 
(*f[189])( );     /*TRI4(jvj+195,1568,246,jvj+196)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10205; pile[WZ4]=jvj+196; pile[WZ5]=jvj+168; 
(*f[269])( );     /*QUADRI6(158,1,218,10205,jvj+196,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=489; pile[WZ2]=jvj+169; pile[WZ3]=jvj+170; 
(*f[1753])( );     /*LIER1(jvj+168,489,jvj+169,jvj+170)*/
pile[v[22]]=HIST; 
(*f[1323])( );     /*ESTCEFINI0(HIST)*/
goto l110;
l111:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+84; 
(*f[46])( );     /*TRI0(0,117,jvj+84)*/
pile[v[22]]=480; pile[WZ1]=jvj+79; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(480,jvj+79,jvj+81)*/
goto l52;
l113:x[jvj+93]=x[jvj+200] ;z[jvj+93]=z[jvj+200];
pile[v[22]]=1179; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[33])( );     /*FNDE0(1179,jvj+93,jvj+94)*/
x[jvj+205]=x[jvj+94] ;z[jvj+205]=z[jvj+94];
goto l58;
l116:x[jvj+203]=s[x[jvj+202]] ;z[jvj+203]=(x[jvj+203]<=sepcte) ? x[jvj+203] : z[jvj+202];
pile[v[22]]=jvj+203; pile[WZ1]=117; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+203,117,0)*/
x[jvj+202]=t[x[jvj+202]];
goto l115;
}
