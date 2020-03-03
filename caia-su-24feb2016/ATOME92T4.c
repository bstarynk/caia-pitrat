#include "dx.h"
void ATOME92T4(void )
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
v[0]+=88;
x[jvj+1]=20092;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3403&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,RR,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=55)) goto l24;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,R,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=25)) goto l24;
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1142,R,jvj+40)*/
if((x[jvj+40]!=68)) goto l24;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(870,R,V24)*/
V24=pile[WZ2]; 
if((V24<=2)) goto l24;
V23=V24-1;
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(870,RR,V25)*/
V25=pile[WZ2]; 
if((V23>V25)) goto l24;
pile[v[22]]=107; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,RR,jvj+41)*/
x[jvj+42]=vo[14];z[jvj+42]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+42,V92)*/
V92=pile[WZ2]; 
x[jvj+43]=d[20];z[jvj+43]=0;
l18:if((x[jvj+43]<=0)) goto l24;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=R; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+44,R,jvj+45)*/
pile[v[22]]=111; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+45,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=485)) goto l19;
pile[v[22]]=268; pile[WZ1]=jvj+44; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+44,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=R; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+48,R,jvj+49)*/
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+49,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+45; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+45,jvj+50)*/
I=V46;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+27)*/
x[jvj+88]=x[jvj+41] ;z[jvj+88]=z[jvj+41];
l20:if((x[jvj+88]<=0)) goto l19;
x[jvj+4]=s[x[jvj+88]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+88];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+51; 
(*f[887])( );     /*VARND0(jvj+4,jvj+51)*/
for(i=x[jvj+51],V28=0;i>0;i=t[i],V28++)  ;
V27=V28+1;
if((V24!=V27)) goto l21;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V94=x[jvj+5];
l1:if((V94>0)) goto l2;
x[jvj+61]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+4,jvj+6)*/
if((x[jvj+6]!=22)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=485)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+4,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+10,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+4,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
x[jvj+60]=x[jvj+12] ;z[jvj+60]=z[jvj+12];
if(x[jvj+60]!=25&&x[jvj+60]!=26&&x[jvj+60]!=29&&x[jvj+60]!=30&&x[jvj+60]!=27&&x[jvj+60]!=28) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+13)*/
IA=V66;
pile[v[22]]=jvj+13; pile[WZ1]=1260; pile[WZ2]=jvj+58; 
(*f[300])( );     /*TRI10(jvj+13,1260,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=IA; pile[WZ2]=510; pile[WZ3]=jvj+59; 
(*f[189])( );     /*TRI4(jvj+58,IA,510,jvj+59)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+61; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+60,jvj+59,jvj+61)*/
l4:pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+7,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+4,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=485)) goto l5;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+17,jvj+18)*/
x[jvj+64]=x[jvj+18] ;z[jvj+64]=z[jvj+18];
if(x[jvj+64]!=25&&x[jvj+64]!=26&&x[jvj+64]!=29&&x[jvj+64]!=30&&x[jvj+64]!=27&&x[jvj+64]!=28) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+19)*/
IB=V75;
pile[v[22]]=jvj+19; pile[WZ1]=1260; pile[WZ2]=jvj+62; 
(*f[300])( );     /*TRI10(jvj+19,1260,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=IB; pile[WZ2]=510; pile[WZ3]=jvj+63; 
(*f[189])( );     /*TRI4(jvj+62,IB,510,jvj+63)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+61; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+64,jvj+63,jvj+61)*/
l22:if((x[jvj+61]==(-99999998))) goto l21;
x[jvj+20]=x[jvj+61] ;z[jvj+20]=z[jvj+61];
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+86]=x[jvj+50] ;z[jvj+86]=z[jvj+50];
l9:if((x[jvj+86]>0)) goto l10;
for(i=x[jvj+25],V29=0;i>0;i=t[i],V29++)  ;
if((V29!=1)) goto l21;
if((x[jvj+25]<=0)) goto l21;
x[jvj+52]=s[x[jvj+25]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+25];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+52,jvj+53)*/
pile[v[22]]=510; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(510,jvj+20,V85)*/
V85=pile[WZ2]; 
x[jvj+75]=x[jvj+53] ;z[jvj+75]=z[jvj+53];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+73)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V85; pile[WZ4]=jvj+74; 
(*f[192])( );     /*QUADRI4(100,41,130,V85,jvj+74)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+73; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+73,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=107; pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(jvj+67,107,jvj+74)*/
pile[WZ2]=jvj+75; 
(*f[36])( );     /*PLUSC0(jvj+67,107,jvj+75)*/
x[jvj+69]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+20,V86)*/
V86=pile[WZ2]; 
if((V86==0)) goto l12;
if((V86!=1)) goto l13;
pile[v[22]]=447; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,jvj+20,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+71,jvj+30,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+72; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+72,jvj+69)*/
l23:if((x[jvj+69]==(-99999998))) goto l21;
x[jvj+34]=x[jvj+69] ;z[jvj+34]=z[jvj+69];
x[jvj+33]=0 ;z[jvj+33]=0;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+34)*/
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+87]=x[jvj+41] ;z[jvj+87]=z[jvj+41];
l14:if((x[jvj+87]<=0)) goto l16;
x[jvj+32]=s[x[jvj+87]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+87];
if((x[jvj+32]==x[jvj+4])) goto l15;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+32)*/
l15:x[jvj+87]=t[x[jvj+87]];
goto l14;
l2:VV=s[V94];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VV) goto l3;
l21:x[jvj+88]=t[x[jvj+88]];
goto l20;
l3:V94=t[V94];
goto l1;
l5:if(x[jvj+61]==incon) goto l6;
goto l22;
l6:x[jvj+61]=(-99999998);
goto l21;
l8:x[jvj+23]=s[x[jvj+85]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+85];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+23,jvj+24)*/
if((x[jvj+24]==135)) goto l11;
x[jvj+85]=t[x[jvj+85]];
l7:if((x[jvj+85]>0)) goto l8;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+22)*/
l11:x[jvj+86]=t[x[jvj+86]];
goto l9;
l10:x[jvj+22]=s[x[jvj+86]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+86];
pile[v[22]]=1260; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1260,jvj+20,jvj+21)*/
x[jvj+85]=x[jvj+21] ;z[jvj+85]=z[jvj+21];
goto l7;
l12:pile[v[22]]=447; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,jvj+20,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+26; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+26,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; pile[WZ2]=103; pile[WZ3]=jvj+68; 
(*f[58])( );     /*TRI3(jvj+66,jvj+67,103,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+68; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+68,jvj+69)*/
goto l23;
l13:x[jvj+69]=(-99999998);
goto l21;
l17:x[jvj+35]=s[x[jvj+31]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+31];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+35)*/
x[jvj+31]=t[x[jvj+31]];
l16:if((x[jvj+31]>0)) goto l17;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+54; 
(*f[299])( );     /*COPEL0(jvj+33,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+54; pile[WZ2]=107; pile[WZ3]=jvj+78; 
(*f[301])( );     /*TRI11(jvj+77,jvj+54,107,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+78,22,100,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[799])( );if(v[102]) goto l21;     /*NORME0(jvj+55,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+82; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+82)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+83; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+83)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+84; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+84)*/
pile[v[22]]=V92; pile[WZ1]=858; pile[WZ2]=jvj+79; 
(*f[46])( );     /*TRI0(V92,858,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+80; 
(*f[189])( );     /*TRI4(jvj+79,v[13],642,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=3403; pile[WZ2]=246; pile[WZ3]=jvj+81; 
(*f[189])( );     /*TRI4(jvj+80,3403,246,jvj+81)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20092; pile[WZ4]=jvj+81; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(158,1,218,20092,jvj+81,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=159; pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+57,159,jvj+82)*/
pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(jvj+57,159,jvj+83)*/
pile[WZ2]=jvj+84; 
(*f[36])( );     /*PLUSC0(jvj+57,159,jvj+84)*/
pile[v[22]]=RR; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+56,jvj+57)*/
goto l21;
l19:x[jvj+43]=t[x[jvj+43]];
goto l18;
l24:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
