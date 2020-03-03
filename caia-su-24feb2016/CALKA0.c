#include "dx.h"
void CALKA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,V24=0,V15=0,V=0,V178=0,VA=0,W=0,V148=0,V139=0,V152=0,V155=0,V39=0,V51=0,V114=0,V96=0,V129=0,V119=0,V64=0,V90=0;
int Y,NA;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=11788;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1511&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; NA=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,Y,jvj+9)*/
if((x[jvj+9]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,Y,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=21)) goto l3;
pile[v[22]]=Y; pile[WZ1]=jvj+12; 
(*f[938])( );     /*USE0(Y,jvj+12)*/
for(i=x[jvj+12],V24=0;i>0;i=t[i],V24++)  ;
if((V24>1)) goto l2;
l3:pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+13)*/
pile[v[22]]=1666; pile[WZ1]=145; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1666,145,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l4;
l5:x[jvj+74]=w[209][9];
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(273,NA,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,Y,jvj+5)*/
if((x[jvj+5]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,Y,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+3)*/
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l19;
pile[v[22]]=1845; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1845,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l19;
l6:if((x[jvj+74]<=0)) goto l19;
x[jvj+17]=s[x[jvj+74]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+74];
pile[v[22]]=jvj+17; pile[WZ1]=Y; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+17,Y,jvj+18)*/
x[jvj+19]=x[jvj+18] ;z[jvj+19]=z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[938])( );     /*USE0(jvj+19,jvj+20)*/
V178=x[jvj+20];
l8:if((V178<=0)) goto l7;
V=s[V178];
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==V) goto l9;
l2:x[RES]=67 ;z[RES]=67;
l38:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l4:pile[v[22]]=Y; pile[WZ1]=jvj+15; 
(*f[938])( );     /*USE0(Y,jvj+15)*/
for(i=x[jvj+15],V15=0;i>0;i=t[i],V15++)  ;
if((V15<=1)) goto l5;
pile[v[22]]=1626; pile[WZ1]=145; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1626,145,jvj+7)*/
pile[v[22]]=Y; pile[WZ1]=jvj+8; 
(*f[1002])( );     /*FNDOBJ0(Y,jvj+8)*/
l1:if((x[jvj+7]<=0)) goto l2;
L=s[x[jvj+7]];
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==L) goto l5;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l7:x[jvj+74]=t[x[jvj+74]];
goto l6;
l9:V178=t[V178];
goto l8;
l11:VA=s[x[jvj+23]];
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==VA) goto l12;
l32:pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,Y,jvj+65)*/
if((x[jvj+65]==43)) goto l33;
if((x[jvj+65]!=39)) goto l34;
x[jvj+70]=0 ;z[jvj+70]=0;
pile[v[22]]=113; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(113,Y,jvj+69)*/
x[jvj+29]=0 ;z[jvj+29]=0;
l14:if((x[jvj+69]>0)) goto l15;
pile[v[22]]=Y; pile[WZ1]=jvj+70; pile[WZ2]=jvj+29; pile[WZ3]=NA; pile[WZ4]=jvj+71; 
(*f[1716])( );     /*CALKB0(Y,jvj+70,jvj+29,NA,jvj+71)*/
if((x[jvj+71]==68)) goto l20;
l34:pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(273,NA,jvj+72)*/
pile[v[22]]=Y; pile[WZ1]=jvj+73; 
(*f[938])( );     /*USE0(Y,jvj+73)*/
l35:if((x[jvj+73]<=0)) goto l20;
V90=s[x[jvj+73]];
for(a=x[jvj+72];a>0;a=t[a]) if(s[a]==V90) goto l36;
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l12:x[jvj+23]=t[x[jvj+23]];
l10:if((x[jvj+23]>0)) goto l11;
x[RES]=68 ;z[RES]=68;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[1715])( );     /*USETOTAL0(jvj+24,jvj+25)*/
l13:if((x[jvj+25]<=0)) goto l38;
W=s[x[jvj+25]];
pile[v[22]]=NA; pile[WZ1]=273; pile[WZ2]=W; 
(*f[735])( );     /*PLUSC4(NA,273,W)*/
x[jvj+25]=t[x[jvj+25]];
goto l13;
l15:x[jvj+26]=s[x[jvj+69]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+69];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=113)) goto l16;
pile[v[22]]=102; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+26,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+28,V148)*/
V148=pile[WZ2]; 
V139=V148;
pile[v[22]]=jvj+29; pile[WZ1]=V139; 
(*f[331])( );     /*PLUE3(jvj+29,V139)*/
l16:x[jvj+69]=t[x[jvj+69]];
goto l14;
l18:V155=s[x[jvj+31]];
pile[v[22]]=jvj+30; pile[WZ1]=V155; 
(*f[331])( );     /*PLUE3(jvj+30,V155)*/
x[jvj+31]=t[x[jvj+31]];
l17:if((x[jvj+31]>0)) goto l18;
pile[v[22]]=jvj+30; pile[WZ1]=273; pile[WZ2]=jvj+61; 
(*f[300])( );     /*TRI10(jvj+30,273,jvj+61)*/
pile[v[22]]=96; pile[WZ1]=V152; pile[WZ2]=jvj+60; 
(*f[328])( );     /*TRI12(96,V152,jvj+60)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+59; pile[WZ3]=jvj+61; pile[WZ4]=jvj+62; 
(*f[1716])( );     /*CALKB0(jvj+24,jvj+59,jvj+60,jvj+61,jvj+62)*/
if((x[jvj+62]==68)) goto l30;
l31:pile[v[22]]=1045; pile[WZ1]=jvj+33; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1045,jvj+33,jvj+64)*/
if((x[jvj+64]!=68)) goto l32;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,Y,jvj+22)*/
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(273,NA,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[938])( );     /*USE0(jvj+22,jvj+23)*/
goto l10;
l19:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,Y,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]==1597)) goto l20;
if((x[jvj+33]==1604)) goto l21;
if((x[jvj+33]!=1606)) goto l23;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,Y,jvj+36)*/
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+36,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=Y; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,Y,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=1708)) goto l22;
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(273,NA,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==V51) goto l20;
l22:if(x[jvj+38]!=1751&&x[jvj+38]!=1750) goto l23;
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(273,NA,jvj+40)*/
for(a=x[jvj+40];a>0;a=t[a]) if(s[a]==V51) goto l20;
l23:pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,Y,jvj+41)*/
if((x[jvj+41]!=22)) goto l32;
pile[v[22]]=103; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,Y,jvj+24)*/
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+24,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,Y,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=43)) goto l25;
pile[v[22]]=102; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+42,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+44,jvj+45)*/
if((V96=w[x[jvj+45]][1])==incon) goto l25;
pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(256,100,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==V96) goto l24;
l25:pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+24,jvj+48)*/
if((x[jvj+48]!=43)) goto l27;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,Y,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+49,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+24,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+50,jvj+51)*/
if((V119=w[x[jvj+51]][1])==incon) goto l27;
pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(256,100,jvj+52)*/
for(a=x[jvj+52];a>0;a=t[a]) if(s[a]==V119) goto l26;
l27:if(x[jvj+33]!=1698&&x[jvj+33]!=1725) goto l29;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,Y,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(140,jvj+54,V64)*/
V64=pile[WZ2]; 
x[jvj+56]=0 ;z[jvj+56]=0;
pile[v[22]]=96; pile[WZ1]=V64; pile[WZ2]=jvj+55; 
(*f[328])( );     /*TRI12(96,V64,jvj+55)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+56; pile[WZ3]=NA; pile[WZ4]=jvj+57; 
(*f[1716])( );     /*CALKB0(jvj+24,jvj+56,jvj+55,NA,jvj+57)*/
if((x[jvj+57]==68)) goto l28;
l29:if(x[jvj+33]!=1741&&x[jvj+33]!=1715) goto l31;
pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,Y,jvj+58)*/
pile[v[22]]=140; pile[WZ1]=jvj+58; 
(*f[44])( );if(v[102]) goto l31;     /*FNDC1(140,jvj+58,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(107,Y,jvj+59)*/
x[jvj+30]=0 ;z[jvj+30]=0;
pile[v[22]]=jvj+30; pile[WZ1]=V152; 
(*f[331])( );     /*PLUE3(jvj+30,V152)*/
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(273,NA,jvj+31)*/
goto l17;
l20:x[RES]=68 ;z[RES]=68;
goto l38;
l21:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,Y,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+34,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=273; pile[WZ1]=NA; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(273,NA,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==V39) goto l20;
goto l23;
l24:pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(1564,145,jvj+47)*/
for(a=x[jvj+47];a>0;a=t[a]) if(s[a]==x[jvj+33]) goto l20;
goto l25;
l26:pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(1564,145,jvj+53)*/
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==x[jvj+33]) goto l20;
goto l27;
l28:x[RES]=68 ;z[RES]=68;
pile[v[22]]=NA; pile[WZ1]=273; pile[WZ2]=V64; 
(*f[735])( );     /*PLUSC4(NA,273,V64)*/
goto l38;
l30:pile[v[22]]=273; pile[WZ1]=jvj+61; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(273,jvj+61,jvj+63)*/
x[RES]=68 ;z[RES]=68;
pile[v[22]]=NA; pile[WZ1]=273; 
(*f[34])( );     /*CHGC0(NA,273,jvj+63)*/
goto l38;
l33:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,Y,jvj+66)*/
pile[v[22]]=101; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+66,jvj+67)*/
pile[v[22]]=1815; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(1815,jvj+67,jvj+68)*/
if((x[jvj+68]==68)) goto l2;
goto l34;
l36:x[jvj+73]=t[x[jvj+73]];
goto l35;
}
