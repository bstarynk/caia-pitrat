#include "dx.h"
void ATOME91T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V97=0,V69=0,IA=0,V78=0,IB=0,V89=0,V25=0,V26=0,V95=0,V31=0,V49=0,I=0,V28=0,V32=0,V30=0,V29=0,V88=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=92;
x[jvj+1]=20091;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3182&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,RR,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=55)) goto l24;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,R,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=25)) goto l24;
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1142,R,jvj+39)*/
if((x[jvj+39]!=68)) goto l24;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(870,R,V25)*/
V25=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(870,RR,V26)*/
V26=pile[WZ2]; 
if((V25>V26)) goto l24;
x[jvj+40]=vo[14];z[jvj+40]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+40,V95)*/
V95=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=RR; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,RR,jvj+41)*/
x[jvj+42]=d[20];z[jvj+42]=0;
l17:if((x[jvj+42]<=0)) goto l24;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=jvj+43; pile[WZ1]=R; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+43,R,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=485)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+47)*/
for(i=x[jvj+47],V31=0;i>0;i=t[i],V31++)  ;
pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(268,jvj+43,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=R; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+48,R,jvj+49)*/
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+49,V49)*/
V49=pile[WZ2]; 
I=V49;
x[jvj+89]=x[jvj+41] ;z[jvj+89]=z[jvj+41];
l19:if((x[jvj+89]<=0)) goto l18;
x[jvj+2]=s[x[jvj+89]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+89];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+50; 
(*f[887])( );     /*VARND0(jvj+2,jvj+50)*/
for(i=x[jvj+50],V28=0;i>0;i=t[i],V28++)  ;
if((V25>V28)) goto l20;
pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(jvj+2,jvj+3)*/
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(R,jvj+4)*/
V97=x[jvj+4];
l1:if((V97>0)) goto l2;
x[jvj+59]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+2,jvj+5)*/
if((x[jvj+5]!=22)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+2,jvj+6)*/
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=485)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+2,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+9,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
x[jvj+58]=x[jvj+11] ;z[jvj+58]=z[jvj+11];
if(x[jvj+58]!=25&&x[jvj+58]!=26&&x[jvj+58]!=29&&x[jvj+58]!=30&&x[jvj+58]!=27&&x[jvj+58]!=28) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+12)*/
IA=V69;
pile[v[22]]=jvj+12; pile[WZ1]=1260; pile[WZ2]=jvj+56; 
(*f[300])( );     /*TRI10(jvj+12,1260,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=IA; pile[WZ2]=510; pile[WZ3]=jvj+57; 
(*f[189])( );     /*TRI4(jvj+56,IA,510,jvj+57)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+59; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+58,jvj+57,jvj+59)*/
l4:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+2,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=485)) goto l5;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+2,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+16,jvj+17)*/
x[jvj+62]=x[jvj+17] ;z[jvj+62]=z[jvj+17];
if(x[jvj+62]!=25&&x[jvj+62]!=26&&x[jvj+62]!=29&&x[jvj+62]!=30&&x[jvj+62]!=27&&x[jvj+62]!=28) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+18)*/
IB=V78;
pile[v[22]]=jvj+18; pile[WZ1]=1260; pile[WZ2]=jvj+60; 
(*f[300])( );     /*TRI10(jvj+18,1260,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=IB; pile[WZ2]=510; pile[WZ3]=jvj+61; 
(*f[189])( );     /*TRI4(jvj+60,IB,510,jvj+61)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+59; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+62,jvj+61,jvj+59)*/
l21:if((x[jvj+59]==(-99999998))) goto l20;
x[jvj+23]=x[jvj+59] ;z[jvj+23]=z[jvj+59];
pile[v[22]]=1260; pile[WZ1]=jvj+23; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(1260,jvj+23,jvj+51)*/
for(i=x[jvj+51],V32=0;i>0;i=t[i],V32++)  ;
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+87]=x[jvj+51] ;z[jvj+87]=z[jvj+51];
l9:if((x[jvj+87]>0)) goto l10;
for(i=x[jvj+22],V30=0;i>0;i=t[i],V30++)  ;
V29=V30+V31;
if((V29!=V32)) goto l20;
x[jvj+31]=0 ;z[jvj+31]=0;
l14:if((x[jvj+22]>0)) goto l15;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+72; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+72)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+71; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+71,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=107; pile[WZ2]=jvj+72; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+72)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+66; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+31,jvj+66,107)*/
pile[v[22]]=510; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+23,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V88; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V88,jvj+25)*/
x[jvj+67]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+23,V89)*/
V89=pile[WZ2]; 
if((V89==0)) goto l12;
if((V89!=1)) goto l13;
pile[v[22]]=447; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,jvj+23,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+69,jvj+66,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+70; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+70,jvj+67)*/
l22:if((x[jvj+67]==(-99999998))) goto l20;
x[jvj+33]=x[jvj+67] ;z[jvj+33]=z[jvj+67];
x[jvj+32]=0 ;z[jvj+32]=0;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+33)*/
x[jvj+90]=x[jvj+41] ;z[jvj+90]=z[jvj+41];
l25:if((x[jvj+90]>0)) goto l26;
l23:pile[v[22]]=jvj+32; pile[WZ1]=jvj+52; 
(*f[299])( );     /*COPEL0(jvj+32,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+52; pile[WZ2]=107; pile[WZ3]=jvj+75; 
(*f[301])( );     /*TRI11(jvj+74,jvj+52,107,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+75,22,100,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[799])( );if(v[102]) goto l20;     /*NORME0(jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+79)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+80)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+81)*/
pile[v[22]]=V95; pile[WZ1]=858; pile[WZ2]=jvj+76; 
(*f[46])( );     /*TRI0(V95,858,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+77; 
(*f[189])( );     /*TRI4(jvj+76,v[13],642,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=3182; pile[WZ2]=246; pile[WZ3]=jvj+78; 
(*f[189])( );     /*TRI4(jvj+77,3182,246,jvj+78)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20091; pile[WZ4]=jvj+78; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(158,1,218,20091,jvj+78,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=159; pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+55,159,jvj+79)*/
pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(jvj+55,159,jvj+80)*/
pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(jvj+55,159,jvj+81)*/
pile[v[22]]=RR; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+54,jvj+55)*/
l20:x[jvj+89]=t[x[jvj+89]];
goto l19;
l2:VV=s[V97];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VV) goto l3;
goto l20;
l3:V97=t[V97];
goto l1;
l5:if(x[jvj+59]==incon) goto l6;
goto l21;
l6:x[jvj+59]=(-99999998);
goto l20;
l8:x[jvj+20]=s[x[jvj+86]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+86];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[760])( );     /*MEMEX0(jvj+19,jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l11;
x[jvj+86]=t[x[jvj+86]];
l7:if((x[jvj+86]>0)) goto l8;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+19)*/
l11:x[jvj+87]=t[x[jvj+87]];
goto l9;
l10:x[jvj+19]=s[x[jvj+87]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+87];
x[jvj+86]=x[jvj+47] ;z[jvj+86]=z[jvj+47];
goto l7;
l12:pile[v[22]]=447; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,jvj+23,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+24; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+24,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+64,jvj+26,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+65; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+66,jvj+65,jvj+67)*/
goto l22;
l13:x[jvj+67]=(-99999998);
goto l20;
l15:x[jvj+29]=s[x[jvj+22]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+22];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+30)*/
x[jvj+22]=t[x[jvj+22]];
goto l14;
l18:x[jvj+42]=t[x[jvj+42]];
goto l17;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l26:x[jvj+82]=s[x[jvj+90]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+90];
pile[v[22]]=jvj+82; pile[WZ1]=jvj+2; pile[WZ2]=jvj+83; 
(*f[760])( );     /*MEMEX0(jvj+82,jvj+2,jvj+83)*/
if((x[jvj+83]==135)) goto l27;
x[jvj+90]=t[x[jvj+90]];
goto l25;
l27:x[jvj+84]=0 ;z[jvj+84]=0;
x[jvj+91]=x[jvj+41] ;z[jvj+91]=z[jvj+41];
l28:if((x[jvj+91]>0)) goto l29;
x[jvj+92]=x[jvj+84] ;z[jvj+92]=z[jvj+84];
x[jvj+88]=x[jvj+92] ;z[jvj+88]=z[jvj+92];
l16:if((x[jvj+88]<=0)) goto l23;
x[jvj+34]=s[x[jvj+88]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+88];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+34)*/
x[jvj+88]=t[x[jvj+88]];
goto l16;
l29:x[jvj+85]=s[x[jvj+91]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+91];
if((x[jvj+85]==x[jvj+82])) goto l30;
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; 
(*f[68])( );     /*PLUE0(jvj+84,jvj+85)*/
l30:x[jvj+91]=t[x[jvj+91]];
goto l28;
}
