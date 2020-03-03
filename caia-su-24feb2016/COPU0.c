#include "dx.h"
void COPU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V17=0,V18=0,VV=0,V31=0,V34=0,V39=0,V25=0,V24=0,V20=0,V=0;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=10721;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1634&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=159; pile[WZ1]=S; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(159,S,jvj+33)*/
l22:if((x[jvj+33]>0)) goto l23;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+69]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+69];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+4,V6)*/
V6=pile[WZ2]; 
if(V6<V5) V5=V6;
l3:x[jvj+69]=t[x[jvj+69]];
l1:if((x[jvj+69]>0)) goto l2;
if((V5==999999)) goto l24;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+5)*/
x[jvj+70]=x[jvj+5] ;z[jvj+70]=z[jvj+5];
l4:if((x[jvj+70]>0)) goto l5;
x[jvj+68]=x[jvj+7] ;z[jvj+68]=z[jvj+7];
if((x[jvj+68]<=0)) goto l24;
x[jvj+18]=s[x[jvj+68]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+68];
for(i=x[jvj+7],V18=0;i>0;i=t[i],V18++)  ;
if((V18<=1)) goto l14;
x[jvj+71]=x[jvj+7] ;z[jvj+71]=z[jvj+7];
l7:if((x[jvj+71]<=0)) goto l14;
x[jvj+8]=s[x[jvj+71]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+71];
(*f[1817])( );     /*NOUV2(VV)*/
VV=pile[v[22]]; 
pile[v[22]]=jvj+8; pile[WZ1]=140; pile[WZ2]=VV; 
(*f[177])( );     /*CHGC4(jvj+8,140,VV)*/
x[jvj+71]=t[x[jvj+71]];
goto l7;
l5:x[jvj+6]=s[x[jvj+70]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+70];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+6,V17)*/
V17=pile[WZ2]; 
if((V17!=V5)) goto l6;
pile[v[22]]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
l6:x[jvj+70]=t[x[jvj+70]];
goto l4;
l9:x[jvj+10]=s[x[jvj+72]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+72];
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+10,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V31; pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(100,21,140,V31,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+11,jvj+12)*/
l10:x[jvj+72]=t[x[jvj+72]];
l8:if((x[jvj+72]>0)) goto l9;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+24; 
(*f[299])( );     /*COPEL0(jvj+12,jvj+24)*/
l11:if((x[jvj+7]>0)) goto l12;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=734; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,734,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+24; pile[WZ2]=107; pile[WZ3]=jvj+49; 
(*f[301])( );     /*TRI11(jvj+48,jvj+24,107,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+49,22,100,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V39; pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,V39,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=436; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,436,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=111; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,111,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+46,jvj+45,jvj+25)*/
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+25; 
(*f[1824])( );     /*COPV2(107,jvj+16,jvj+25)*/
l19:pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(110,jvj+2,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=258; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+26)*/
x[jvj+74]=x[jvj+26] ;z[jvj+74]=z[jvj+26];
l20:if((x[jvj+74]<=0)) goto l24;
x[jvj+27]=s[x[jvj+74]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+74];
pile[v[22]]=117; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+27,V20)*/
V20=pile[WZ2]; 
if((V20<=V5)) goto l21;
pile[v[22]]=218; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(218,jvj+27,jvj+28)*/
pile[v[22]]=444; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(444,jvj+27,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=436; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,436,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=111; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,111,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+53; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+30,jvj+53,jvj+31)*/
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[1824])( );     /*COPV2(107,jvj+28,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10247; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,10247,jvj+56)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V24; pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(100,21,140,V24,jvj+61)*/
pile[WZ3]=(-598); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=103; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,103,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+61,jvj+60,jvj+57)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+64)*/
pile[WZ3]=(-591); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=103; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+64,jvj+63,jvj+58)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+67)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+65; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=103; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+67,jvj+66,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+55; 
(*f[180])( );     /*TRIENS0(jvj+54,(-20),113,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+56,jvj+55,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=114; pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+32,114,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+32,114,jvj+58)*/
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+32; 
(*f[1824])( );     /*COPV2(107,jvj+28,jvj+32)*/
l21:x[jvj+74]=t[x[jvj+74]];
goto l20;
l12:x[jvj+13]=s[x[jvj+7]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+7];
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+13,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=444; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(444,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V34; pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,V34,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=436; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,436,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=111; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+37; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+15,jvj+37,jvj+17)*/
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1824])( );     /*COPV2(107,jvj+16,jvj+17)*/
l13:x[jvj+7]=t[x[jvj+7]];
goto l11;
l14:pile[v[22]]=218; pile[WZ1]=jvj+18; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(218,jvj+18,jvj+16)*/
pile[v[22]]=110; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(110,jvj+2,V39)*/
V39=pile[WZ2]; 
x[jvj+73]=x[jvj+7] ;z[jvj+73]=z[jvj+7];
l15:if((x[jvj+73]>0)) goto l16;
for(i=x[jvj+7],V25=0;i>0;i=t[i],V25++)  ;
if((V25==1)) goto l18;
if((V25<=1)) goto l19;
x[jvj+12]=0 ;z[jvj+12]=0;
x[jvj+9]=d[30];z[jvj+9]=0;
x[jvj+72]=x[jvj+7] ;z[jvj+72]=z[jvj+7];
goto l8;
l16:x[jvj+19]=s[x[jvj+73]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+73];
pile[v[22]]=218; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(218,jvj+19,jvj+20)*/
if((x[jvj+20]==x[jvj+16])) goto l17;
pile[v[22]]=10721; pile[WZ1]=V39; pile[WZ2]=(-4383); pile[WZ3]=jvj+20; pile[WZ4]=jvj+16; 
(*f[1825])( );     /*FAUTE8(10721,V39,(-4383),jvj+20,jvj+16)*/
l17:x[jvj+73]=t[x[jvj+73]];
goto l15;
l18:pile[v[22]]=444; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(444,jvj+18,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V39; pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,V39,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=436; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,436,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=111; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,111,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+41; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+22,jvj+41,jvj+23)*/
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+23; 
(*f[1824])( );     /*COPV2(107,jvj+16,jvj+23)*/
goto l19;
l23:x[jvj+2]=s[x[jvj+33]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+33];
V5=999999;
pile[v[22]]=258; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+3)*/
x[jvj+69]=x[jvj+3] ;z[jvj+69]=z[jvj+3];
goto l1;
l24:x[jvj+33]=t[x[jvj+33]];
goto l22;
}
