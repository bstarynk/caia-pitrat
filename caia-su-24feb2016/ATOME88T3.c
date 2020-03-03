#include "dx.h"
void ATOME88T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V23=0,V6=0,V14=0,V45=0,V49=0,V11=0,V12=0,V31=0,F=0,V13=0,V15=0,V16=0,V42=0,M=0,V48=0,V47=0,V20=0,V82=0,I=0,K=0,V131=0,V122=0,V111=0,V91=0,V87=0,V98=0,V102=0,V115=0,V116=0,V144=0,II=0,KK=0,V193=0,V184=0,V173=0,V153=0,V149=0,V160=0,V164=0,V177=0,V178=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=117;
x[jvj+1]=20088;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3442&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=1274; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1274,jvj+6,V23)*/
V23=pile[WZ2]; 
if((V23!=2)) goto l9;
pile[v[22]]=489; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(489,D,jvj+7)*/
for(i=x[jvj+7],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=1)) goto l9;
if((x[jvj+7]<=0)) goto l9;
x[jvj+9]=s[x[jvj+7]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+7];
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,D,V14)*/
V14=pile[WZ2]; 
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+8,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+9,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(509,jvj+6,jvj+10)*/
l3:if((x[jvj+10]<=0)) goto l9;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l4;
pile[v[22]]=1274; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1274,jvj+11,V11)*/
V11=pile[WZ2]; 
if((V11!=2)) goto l4;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,jvj+11,V12)*/
V12=pile[WZ2]; 
if((V12!=1)) goto l4;
x[jvj+14]=d[20];z[jvj+14]=0;
l5:if((x[jvj+14]<=0)) goto l4;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,jvj+11,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=484)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+16,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+18,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+15,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+11; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+19,jvj+11,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+20,jvj+21)*/
if(x[jvj+21]!=96&&x[jvj+21]!=89&&x[jvj+21]!=41&&x[jvj+21]!=20&&x[jvj+21]!=128&&x[jvj+21]!=570&&x[jvj+21]!=1317) goto l6;
F=V31;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+16,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+22,jvj+53)*/
if((x[jvj+53]!=484)) goto l30;
pile[v[22]]=111; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+22,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+54,V82)*/
V82=pile[WZ2]; 
if((F!=V82)) goto l30;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,jvj+22,jvj+55)*/
I=0;
l10:K=1;
l11:pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+55,jvj+56)*/
if((x[jvj+56]!=484)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+55,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+57,V131)*/
V131=pile[WZ2]; 
if((F!=V131)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+55; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+55,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(100,jvj+58,jvj+71)*/
if((x[jvj+71]!=484)) goto l52;
pile[v[22]]=111; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,jvj+58,jvj+72)*/
pile[v[22]]=140; pile[WZ1]=jvj+72; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(140,jvj+72,V144)*/
V144=pile[WZ2]; 
if((F!=V144)) goto l52;
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(102,jvj+58,jvj+73)*/
II=0;
l32:KK=1;
l33:pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=484)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+73,jvj+75)*/
pile[v[22]]=140; pile[WZ1]=jvj+75; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+75,V193)*/
V193=pile[WZ2]; 
if((F!=V193)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+73; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+73,jvj+23)*/
V13=V14-II;
V15=V13%KK;
if((V15!=0)) goto l6;
if((V13<0)) goto l6;
V16=V13/KK;
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+23,V42)*/
V42=pile[WZ2]; 
M=V42;
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,D,jvj+3)*/
pile[v[22]]=480; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(480,jvj+3,jvj+4)*/
x[jvj+88]=x[jvj+4] ;z[jvj+88]=z[jvj+4];
l1:if((x[jvj+88]<=0)) goto l6;
x[jvj+5]=s[x[jvj+88]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+88];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+5,V19)*/
V19=pile[WZ2]; 
if((V19!=M)) goto l2;
pile[v[22]]=365; pile[WZ2]=jvj+24; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+25)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+26)*/
V48=K*V49;
V47=V48+I;
x[jvj+89]=x[jvj+24] ;z[jvj+89]=z[jvj+24];
l7:if((x[jvj+89]<=0)) goto l6;
x[jvj+27]=s[x[jvj+89]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+89];
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+27,V20)*/
V20=pile[WZ2]; 
if((V16!=V20)) goto l8;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+34)*/
pile[v[22]]=V45; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V45,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=3442; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,3442,246,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=20088; pile[WZ2]=218; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,20088,218,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ2]=jvj+33; pile[WZ3]=159; pile[WZ4]=jvj+35; 
(*f[298])( );     /*TRIENS1(jvj+34,(-20),jvj+33,159,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+35,1,158,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+36)*/
pile[WZ3]=26; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=F; pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,F,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+45; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+25,jvj+45,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V16; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+42,jvj+37)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+46)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=F; pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(100,21,140,F,jvj+50)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V47; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,V47,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+52,jvj+51,jvj+49)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+47,jvj+26,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+38)*/
pile[WZ2]=111; pile[WZ3]=jvj+36; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+36,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+38)*/
pile[WZ1]=jvj+28; 
(*f[1296])( );     /*NOUVCONTR0(jvj+29,jvj+28)*/
l8:x[jvj+89]=t[x[jvj+89]];
goto l7;
l2:x[jvj+88]=t[x[jvj+88]];
goto l1;
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l13:x[jvj+91]=t[x[jvj+91]];
l14:if((x[jvj+91]<=0)) goto l15;
x[jvj+59]=s[x[jvj+91]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+91];
if((x[jvj+60]==x[jvj+59])) goto l13;
pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+59,V122)*/
V122=pile[WZ2]; 
x[jvj+55]=x[jvj+90] ;z[jvj+55]=z[jvj+90];
I=V122;
K=V116;
l12:if((K>0)) goto l11;
l6:x[jvj+14]=t[x[jvj+14]];
goto l5;
l15:x[jvj+97]=t[x[jvj+97]];
l16:if((x[jvj+97]>0)) goto l31;
x[jvj+112]=t[x[jvj+112]];
l17:if((x[jvj+112]<=0)) goto l18;
x[jvj+106]=s[x[jvj+112]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+112];
x[jvj+90]=x[jvj+106] ;z[jvj+90]=z[jvj+106];
x[jvj+97]=x[jvj+63] ;z[jvj+97]=z[jvj+63];
goto l16;
l18:x[jvj+92]=t[x[jvj+92]];
l19:if((x[jvj+92]<=0)) goto l6;
x[jvj+60]=s[x[jvj+92]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+92];
pile[v[22]]=111; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+60,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+61,jvj+62)*/
if((x[jvj+62]!=486)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+60; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(107,jvj+60,jvj+63)*/
for(i=x[jvj+63],V111=0;i>0;i=t[i],V111++)  ;
if((V111!=2)) goto l18;
x[jvj+112]=x[jvj+63] ;z[jvj+112]=z[jvj+63];
goto l17;
l21:x[jvj+107]=s[x[jvj+113]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+113];
x[jvj+94]=x[jvj+107] ;z[jvj+94]=z[jvj+107];
x[jvj+93]=x[jvj+65] ;z[jvj+93]=z[jvj+65];
l22:if((x[jvj+93]>0)) goto l23;
x[jvj+113]=t[x[jvj+113]];
l20:if((x[jvj+113]>0)) goto l21;
x[jvj+92]=x[jvj+65] ;z[jvj+92]=z[jvj+65];
goto l19;
l23:x[jvj+64]=s[x[jvj+93]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+93];
if((x[jvj+107]==x[jvj+64])) goto l24;
pile[v[22]]=130; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+64,V91)*/
V91=pile[WZ2]; 
x[jvj+55]=x[jvj+94] ;z[jvj+55]=z[jvj+94];
I=V91;
goto l10;
l24:x[jvj+93]=t[x[jvj+93]];
goto l22;
l25:pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+65)*/
for(i=x[jvj+65],V87=0;i>0;i=t[i],V87++)  ;
if((V87!=2)) goto l6;
x[jvj+113]=x[jvj+65] ;z[jvj+113]=z[jvj+65];
goto l20;
l28:x[jvj+67]=s[x[jvj+95]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+95];
if((x[jvj+108]==x[jvj+67])) goto l29;
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(130,jvj+67,V102)*/
V102=pile[WZ2]; 
x[jvj+55]=x[jvj+96] ;z[jvj+55]=z[jvj+96];
I=0;
K=V102;
goto l12;
l29:x[jvj+95]=t[x[jvj+95]];
l27:if((x[jvj+95]>0)) goto l28;
x[jvj+114]=t[x[jvj+114]];
l26:if((x[jvj+114]<=0)) goto l6;
x[jvj+108]=s[x[jvj+114]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+114];
x[jvj+96]=x[jvj+108] ;z[jvj+96]=z[jvj+108];
x[jvj+95]=x[jvj+66] ;z[jvj+95]=z[jvj+66];
goto l27;
l30:pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+22,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]==485)) goto l25;
if((x[jvj+69]!=486)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+66)*/
for(i=x[jvj+66],V98=0;i>0;i=t[i],V98++)  ;
if((V98!=2)) goto l6;
x[jvj+114]=x[jvj+66] ;z[jvj+114]=z[jvj+66];
goto l26;
l31:x[jvj+70]=s[x[jvj+97]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+97];
if((x[jvj+106]==x[jvj+70])) goto l15;
pile[v[22]]=130; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+70,V115)*/
V115=pile[WZ2]; 
V116=V115;
x[jvj+91]=x[jvj+65] ;z[jvj+91]=z[jvj+65];
goto l14;
l35:x[jvj+99]=t[x[jvj+99]];
l36:if((x[jvj+99]<=0)) goto l37;
x[jvj+76]=s[x[jvj+99]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+99];
if((x[jvj+77]==x[jvj+76])) goto l35;
pile[v[22]]=130; pile[WZ1]=jvj+76; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+76,V184)*/
V184=pile[WZ2]; 
x[jvj+73]=x[jvj+98] ;z[jvj+73]=z[jvj+98];
II=V184;
KK=V178;
l34:if((KK>0)) goto l33;
goto l6;
l37:x[jvj+105]=t[x[jvj+105]];
l38:if((x[jvj+105]>0)) goto l53;
x[jvj+115]=t[x[jvj+115]];
l39:if((x[jvj+115]<=0)) goto l40;
x[jvj+109]=s[x[jvj+115]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+115];
x[jvj+98]=x[jvj+109] ;z[jvj+98]=z[jvj+109];
x[jvj+105]=x[jvj+80] ;z[jvj+105]=z[jvj+80];
goto l38;
l40:x[jvj+100]=t[x[jvj+100]];
l41:if((x[jvj+100]<=0)) goto l6;
x[jvj+77]=s[x[jvj+100]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+100];
pile[v[22]]=111; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+77,jvj+78)*/
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]!=486)) goto l40;
pile[v[22]]=107; pile[WZ1]=jvj+77; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(107,jvj+77,jvj+80)*/
for(i=x[jvj+80],V173=0;i>0;i=t[i],V173++)  ;
if((V173!=2)) goto l40;
x[jvj+115]=x[jvj+80] ;z[jvj+115]=z[jvj+80];
goto l39;
l43:x[jvj+110]=s[x[jvj+116]] ;z[jvj+110]=(x[jvj+110]<=sepcte) ? x[jvj+110] : z[jvj+116];
x[jvj+102]=x[jvj+110] ;z[jvj+102]=z[jvj+110];
x[jvj+101]=x[jvj+82] ;z[jvj+101]=z[jvj+82];
l44:if((x[jvj+101]>0)) goto l45;
x[jvj+116]=t[x[jvj+116]];
l42:if((x[jvj+116]>0)) goto l43;
x[jvj+100]=x[jvj+82] ;z[jvj+100]=z[jvj+82];
goto l41;
l45:x[jvj+81]=s[x[jvj+101]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+101];
if((x[jvj+110]==x[jvj+81])) goto l46;
pile[v[22]]=130; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+81,V153)*/
V153=pile[WZ2]; 
x[jvj+73]=x[jvj+102] ;z[jvj+73]=z[jvj+102];
II=V153;
goto l32;
l46:x[jvj+101]=t[x[jvj+101]];
goto l44;
l47:pile[v[22]]=107; pile[WZ1]=jvj+58; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(107,jvj+58,jvj+82)*/
for(i=x[jvj+82],V149=0;i>0;i=t[i],V149++)  ;
if((V149!=2)) goto l6;
x[jvj+116]=x[jvj+82] ;z[jvj+116]=z[jvj+82];
goto l42;
l50:x[jvj+84]=s[x[jvj+103]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+103];
if((x[jvj+111]==x[jvj+84])) goto l51;
pile[v[22]]=130; pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+84,V164)*/
V164=pile[WZ2]; 
x[jvj+73]=x[jvj+104] ;z[jvj+73]=z[jvj+104];
II=0;
KK=V164;
goto l34;
l51:x[jvj+103]=t[x[jvj+103]];
l49:if((x[jvj+103]>0)) goto l50;
x[jvj+117]=t[x[jvj+117]];
l48:if((x[jvj+117]<=0)) goto l6;
x[jvj+111]=s[x[jvj+117]] ;z[jvj+111]=(x[jvj+111]<=sepcte) ? x[jvj+111] : z[jvj+117];
x[jvj+104]=x[jvj+111] ;z[jvj+104]=z[jvj+111];
x[jvj+103]=x[jvj+83] ;z[jvj+103]=z[jvj+83];
goto l49;
l52:pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+58,jvj+85)*/
pile[v[22]]=101; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+85,jvj+86)*/
if((x[jvj+86]==485)) goto l47;
if((x[jvj+86]!=486)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+58; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(107,jvj+58,jvj+83)*/
for(i=x[jvj+83],V160=0;i>0;i=t[i],V160++)  ;
if((V160!=2)) goto l6;
x[jvj+117]=x[jvj+83] ;z[jvj+117]=z[jvj+83];
goto l48;
l53:x[jvj+87]=s[x[jvj+105]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+105];
if((x[jvj+109]==x[jvj+87])) goto l37;
pile[v[22]]=130; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+87,V177)*/
V177=pile[WZ2]; 
V178=V177;
x[jvj+99]=x[jvj+82] ;z[jvj+99]=z[jvj+82];
goto l36;
}
