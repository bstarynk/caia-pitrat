#include "dx.h"
void ATOME610T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V84=0,V20=0,V27=0,V30=0,V86=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=82;
x[jvj+1]=20610;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3960&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(642,jvj+12,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(202,V,jvj+2)*/
if((x[jvj+2]==68)) goto l29;
l7:pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=jvj+13; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+13)*/
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(454,jvj+6,jvj+7)*/
l1:if((x[jvj+7]>0)) goto l2;
pile[v[22]]=V; pile[WZ1]=jvj+14; 
(*f[1003])( );     /*ESTCEINFINI0(V,jvj+14)*/
if((x[jvj+14]==135)) goto l8;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=480; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(480,jvj+8,jvj+9)*/
x[jvj+76]=x[jvj+9] ;z[jvj+76]=z[jvj+9];
l3:if((x[jvj+76]>0)) goto l4;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+3]=s[x[jvj+76]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+76];
pile[v[22]]=489; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(489,jvj+3,jvj+10)*/
if((x[jvj+10]!=0)) goto l5;
pile[v[22]]=498; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=1348; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1348,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l5;
l6:pile[v[22]]=jvj+11; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+3)*/
l5:x[jvj+76]=t[x[jvj+76]];
goto l3;
l9:x[jvj+13]=t[x[jvj+13]];
l8:if((x[jvj+13]<=0)) goto l29;
x[jvj+15]=s[x[jvj+13]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+13];
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=50)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+18)*/
for(i=x[jvj+18],V20=0;i>0;i=t[i],V20++)  ;
if((V20!=2)) goto l9;
x[jvj+19]=d[20];z[jvj+19]=0;
l10:if((x[jvj+19]<=0)) goto l9;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=268; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+20,jvj+21)*/
x[jvj+22]=d[20];z[jvj+22]=0;
l12:if((x[jvj+22]<=0)) goto l11;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+23,jvj+24)*/
x[jvj+77]=x[jvj+18] ;z[jvj+77]=z[jvj+18];
l14:if((x[jvj+77]<=0)) goto l13;
x[jvj+25]=s[x[jvj+77]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+77];
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+25,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=44)) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+25,jvj+28)*/
x[jvj+78]=x[jvj+18] ;z[jvj+78]=z[jvj+18];
l16:if((x[jvj+78]<=0)) goto l15;
x[jvj+29]=s[x[jvj+78]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+78];
if((x[jvj+25]==x[jvj+29])) goto l17;
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=50)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+29,jvj+32)*/
for(i=x[jvj+32],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=1)) goto l17;
x[jvj+79]=x[jvj+32] ;z[jvj+79]=z[jvj+32];
l18:if((x[jvj+79]<=0)) goto l17;
x[jvj+33]=s[x[jvj+79]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+79];
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=54)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+36)*/
for(i=x[jvj+36],V30=0;i>0;i=t[i],V30++)  ;
if((V30!=3)) goto l19;
pile[v[22]]=436; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(436,jvj+33,jvj+37)*/
x[jvj+80]=x[jvj+36] ;z[jvj+80]=z[jvj+36];
l20:if((x[jvj+80]<=0)) goto l19;
x[jvj+38]=s[x[jvj+80]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+80];
pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+38,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=44)) goto l21;
pile[v[22]]=103; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+38,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=43)) goto l21;
pile[v[22]]=102; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+41,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+44]!=1601)) goto l21;
;
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+38,jvj+45)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+45,jvj+46)*/
if((x[jvj+46]==135)) goto l23;
l21:x[jvj+80]=t[x[jvj+80]];
goto l20;
l11:x[jvj+19]=t[x[jvj+19]];
goto l10;
l13:x[jvj+22]=t[x[jvj+22]];
goto l12;
l15:x[jvj+77]=t[x[jvj+77]];
goto l14;
l17:x[jvj+78]=t[x[jvj+78]];
goto l16;
l19:x[jvj+79]=t[x[jvj+79]];
goto l18;
l23:x[jvj+81]=x[jvj+36] ;z[jvj+81]=z[jvj+36];
l22:if((x[jvj+81]<=0)) goto l21;
x[jvj+47]=s[x[jvj+81]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+81];
if((x[jvj+38]==x[jvj+47])) goto l24;
pile[v[22]]=111; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+47,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=25)) goto l24;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+47; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+20,jvj+47,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=43)) goto l24;
pile[v[22]]=102; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+50,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=1879)) goto l24;
pile[v[22]]=jvj+47; pile[WZ1]=jvj+21; pile[WZ3]=jvj+54; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+47,jvj+21,V86,jvj+54)*/
V86=pile[WZ2]; 
x[jvj+56]=V86 ;z[jvj+56]=(x[jvj+54]==20&&V86<=sepcte) ? V86 : (x[jvj+54]==41) ? (-1000) : 0;
pile[v[22]]=103; pile[WZ1]=jvj+50; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+50,jvj+55)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+56,jvj+57)*/
if((x[jvj+57]==135)) goto l25;
l24:x[jvj+81]=t[x[jvj+81]];
goto l22;
l25:pile[v[22]]=jvj+37; pile[WZ1]=jvj+55; pile[WZ2]=jvj+58; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+55,jvj+58)*/
if((x[jvj+58]==135)) goto l27;
goto l24;
l27:x[jvj+82]=x[jvj+36] ;z[jvj+82]=z[jvj+36];
l26:if((x[jvj+82]<=0)) goto l24;
x[jvj+59]=s[x[jvj+82]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+82];
if((x[jvj+38]==x[jvj+59])) goto l28;
if((x[jvj+47]==x[jvj+59])) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+59,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+60,jvj+61)*/
if((x[jvj+61]!=25)) goto l28;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+59; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+24,jvj+59,jvj+62)*/
if((x[V]!=x[jvj+62])) goto l28;
pile[v[22]]=jvj+23; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+23,jvj+59,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+63,jvj+64)*/
if((x[jvj+64]!=43)) goto l28;
pile[v[22]]=102; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+63,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]!=1888)) goto l28;
pile[v[22]]=103; pile[WZ1]=jvj+63; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+63,jvj+67)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+67,jvj+68)*/
if((x[jvj+68]==135)) goto l30;
l28:x[jvj+82]=t[x[jvj+82]];
goto l26;
l30:pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+74)*/
pile[v[22]]=V84; pile[WZ1]=858; pile[WZ2]=jvj+70; 
(*f[46])( );     /*TRI0(V84,858,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+71; 
(*f[189])( );     /*TRI4(jvj+70,v[13],642,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=3960; pile[WZ2]=246; pile[WZ3]=jvj+72; 
(*f[189])( );     /*TRI4(jvj+71,3960,246,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=20610; pile[WZ2]=218; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+72,20610,218,jvj+73)*/
pile[v[22]]=jvj+74; pile[WZ1]=(-20); pile[WZ2]=jvj+73; pile[WZ3]=159; pile[WZ4]=jvj+75; 
(*f[298])( );     /*TRIENS1(jvj+74,(-20),jvj+73,159,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+75,1,158,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=489; pile[WZ2]=V; pile[WZ3]=1350; 
(*f[1753])( );     /*LIER1(jvj+69,489,V,1350)*/
goto l28;
}
