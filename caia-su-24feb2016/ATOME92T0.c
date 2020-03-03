#include "dx.h"
void ATOME92T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V94=0,V66=0,IA=0,V75=0,IB=0,V86=0,V24=0,V23=0,V25=0,V92=0,V46=0,I=0,V28=0,V27=0,V29=0,V85=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=87;
x[jvj+1]=20092;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3184&&v[97]==0) {
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
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(870,R,V24)*/
V24=pile[WZ2]; 
if((V24<=2)) goto l24;
V23=V24-1;
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(870,RR,V25)*/
V25=pile[WZ2]; 
if((V23>V25)) goto l24;
pile[v[22]]=107; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,RR,jvj+40)*/
x[jvj+41]=vo[14];z[jvj+41]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+41,V92)*/
V92=pile[WZ2]; 
x[jvj+42]=d[20];z[jvj+42]=0;
l18:if((x[jvj+42]<=0)) goto l24;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=jvj+43; pile[WZ1]=R; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+43,R,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=485)) goto l19;
pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+43,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=R; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+47,R,jvj+48)*/
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+48,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+49)*/
I=V46;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+26)*/
x[jvj+87]=x[jvj+40] ;z[jvj+87]=z[jvj+40];
l20:if((x[jvj+87]<=0)) goto l19;
x[jvj+3]=s[x[jvj+87]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+87];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+50; 
(*f[887])( );     /*VARND0(jvj+3,jvj+50)*/
for(i=x[jvj+50],V28=0;i>0;i=t[i],V28++)  ;
V27=V28+1;
if((V24!=V27)) goto l21;
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
V94=x[jvj+4];
l1:if((V94>0)) goto l2;
x[jvj+60]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+3,jvj+5)*/
if((x[jvj+5]!=22)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=485)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+3,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+9,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+3,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
x[jvj+59]=x[jvj+11] ;z[jvj+59]=z[jvj+11];
if(x[jvj+59]!=25&&x[jvj+59]!=26&&x[jvj+59]!=29&&x[jvj+59]!=30&&x[jvj+59]!=27&&x[jvj+59]!=28) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+12)*/
IA=V66;
pile[v[22]]=jvj+12; pile[WZ1]=1260; pile[WZ2]=jvj+57; 
(*f[300])( );     /*TRI10(jvj+12,1260,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=IA; pile[WZ2]=510; pile[WZ3]=jvj+58; 
(*f[189])( );     /*TRI4(jvj+57,IA,510,jvj+58)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+60; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+59,jvj+58,jvj+60)*/
l4:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+3,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=485)) goto l5;
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+3,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+16,jvj+17)*/
x[jvj+63]=x[jvj+17] ;z[jvj+63]=z[jvj+17];
if(x[jvj+63]!=25&&x[jvj+63]!=26&&x[jvj+63]!=29&&x[jvj+63]!=30&&x[jvj+63]!=27&&x[jvj+63]!=28) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+18)*/
IB=V75;
pile[v[22]]=jvj+18; pile[WZ1]=1260; pile[WZ2]=jvj+61; 
(*f[300])( );     /*TRI10(jvj+18,1260,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=IB; pile[WZ2]=510; pile[WZ3]=jvj+62; 
(*f[189])( );     /*TRI4(jvj+61,IB,510,jvj+62)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+60; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+63,jvj+62,jvj+60)*/
l22:if((x[jvj+60]==(-99999998))) goto l21;
x[jvj+19]=x[jvj+60] ;z[jvj+19]=z[jvj+60];
x[jvj+24]=0 ;z[jvj+24]=0;
x[jvj+85]=x[jvj+49] ;z[jvj+85]=z[jvj+49];
l9:if((x[jvj+85]>0)) goto l10;
for(i=x[jvj+24],V29=0;i>0;i=t[i],V29++)  ;
if((V29!=1)) goto l21;
if((x[jvj+24]<=0)) goto l21;
x[jvj+51]=s[x[jvj+24]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+24];
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+51,jvj+52)*/
pile[v[22]]=510; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(510,jvj+19,V85)*/
V85=pile[WZ2]; 
x[jvj+74]=x[jvj+52] ;z[jvj+74]=z[jvj+52];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+72)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V85; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,V85,jvj+73)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+72; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+72,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=107; pile[WZ2]=jvj+73; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+73)*/
pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(jvj+66,107,jvj+74)*/
x[jvj+68]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+19,V86)*/
V86=pile[WZ2]; 
if((V86==0)) goto l12;
if((V86!=1)) goto l13;
pile[v[22]]=447; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,jvj+19,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+28; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+28,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+70,jvj+29,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+66; pile[WZ4]=jvj+71; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+66,jvj+71,jvj+68)*/
l23:if((x[jvj+68]==(-99999998))) goto l21;
x[jvj+33]=x[jvj+68] ;z[jvj+33]=z[jvj+68];
x[jvj+32]=0 ;z[jvj+32]=0;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+33)*/
x[jvj+30]=0 ;z[jvj+30]=0;
x[jvj+86]=x[jvj+40] ;z[jvj+86]=z[jvj+40];
l14:if((x[jvj+86]<=0)) goto l16;
x[jvj+31]=s[x[jvj+86]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+86];
if((x[jvj+31]==x[jvj+3])) goto l15;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+30,jvj+31)*/
l15:x[jvj+86]=t[x[jvj+86]];
goto l14;
l2:VV=s[V94];
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==VV) goto l3;
l21:x[jvj+87]=t[x[jvj+87]];
goto l20;
l3:V94=t[V94];
goto l1;
l5:if(x[jvj+60]==incon) goto l6;
goto l22;
l6:x[jvj+60]=(-99999998);
goto l21;
l8:x[jvj+22]=s[x[jvj+84]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+84];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(jvj+21,jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l11;
x[jvj+84]=t[x[jvj+84]];
l7:if((x[jvj+84]>0)) goto l8;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+24,jvj+21)*/
l11:x[jvj+85]=t[x[jvj+85]];
goto l9;
l10:x[jvj+21]=s[x[jvj+85]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+85];
pile[v[22]]=1260; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1260,jvj+19,jvj+20)*/
x[jvj+84]=x[jvj+20] ;z[jvj+84]=z[jvj+20];
goto l7;
l12:pile[v[22]]=447; pile[WZ1]=jvj+19; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,jvj+19,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+25; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=111; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,111,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+65,jvj+66,103,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+67; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+67,jvj+68)*/
goto l23;
l13:x[jvj+68]=(-99999998);
goto l21;
l17:x[jvj+34]=s[x[jvj+30]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+30];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+34)*/
x[jvj+30]=t[x[jvj+30]];
l16:if((x[jvj+30]>0)) goto l17;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+53; 
(*f[299])( );     /*COPEL0(jvj+32,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+53; pile[WZ2]=107; pile[WZ3]=jvj+77; 
(*f[301])( );     /*TRI11(jvj+76,jvj+53,107,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+77,22,100,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[799])( );if(v[102]) goto l21;     /*NORME0(jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+81)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+82)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+83)*/
pile[v[22]]=V92; pile[WZ1]=858; pile[WZ2]=jvj+78; 
(*f[46])( );     /*TRI0(V92,858,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+79; 
(*f[189])( );     /*TRI4(jvj+78,v[13],642,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=3184; pile[WZ2]=246; pile[WZ3]=jvj+80; 
(*f[189])( );     /*TRI4(jvj+79,3184,246,jvj+80)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20092; pile[WZ4]=jvj+80; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(158,1,218,20092,jvj+80,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=159; pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(jvj+56,159,jvj+81)*/
pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+56,159,jvj+82)*/
pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(jvj+56,159,jvj+83)*/
pile[v[22]]=RR; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+55,jvj+56)*/
goto l21;
l19:x[jvj+42]=t[x[jvj+42]];
goto l18;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
