#include "dx.h"
void CALCULABLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int FA=0,V65=0,V47=0,V115=0,V167=0,V195=0,V=0,V124=0;
int A,B,XP,XD;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=162;
x[jvj+1]=11749;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1498&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; XP=pile[v[22]+2]; XD=pile[v[22]+3]; R=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,A,jvj+2)*/
if((x[jvj+2]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=729; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(729,jvj+4,jvj+5)*/
if(x[jvj+5]!=228&&x[jvj+5]!=729) goto l1;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,A,jvj+6)*/
x[jvj+156]=129 ;z[jvj+156]=129;
l9:if((x[XD]!=228)) goto l11;
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+6,jvj+30)*/
if((x[jvj+30]!=22)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+6,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+31,jvj+28)*/
pile[v[22]]=1834; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1834,jvj+28,jvj+29)*/
if((x[jvj+29]==129)) goto l11;
l10:x[R]=67 ;z[R]=67;
l82:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:x[jvj+6]=x[A] ;z[jvj+6]=z[A];
x[jvj+156]=x[XP] ;z[jvj+156]=z[XP];
goto l9;
l2:pile[v[22]]=1738; pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1738,B,jvj+7)*/
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+8)*/
l3:if((x[jvj+8]<=0)) goto l14;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=25)) goto l4;
x[jvj+12]=d[20];z[jvj+12]=0;
l5:if((x[jvj+12]<=0)) goto l4;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+14,jvj+9,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+15,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+17,jvj+18)*/
FA=x[jvj+18];
if(FA!=267&&FA!=156) goto l6;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+9; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+13,jvj+9,jvj+19)*/
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+15,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=B; pile[WZ2]=jvj+21; pile[WZ3]=jvj+22; 
(*f[1496])( );     /*TYPEXPR0(jvj+20,B,jvj+21,jvj+22)*/
if(x[jvj+22]!=129&&x[jvj+22]!=1881) goto l6;
if((x[jvj+21]==250)) goto l6;
x[R]=68 ;z[R]=68;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+43)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[35])( );     /*CHGC1(jvj+6,111,jvj+43)*/
goto l82;
l4:x[jvj+8]=t[x[jvj+8]];
goto l3;
l6:x[jvj+12]=t[x[jvj+12]];
goto l5;
l8:x[jvj+23]=s[x[jvj+158]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+158];
pile[v[22]]=jvj+23; pile[WZ1]=B; pile[WZ2]=jvj+25; pile[WZ3]=jvj+26; pile[WZ4]=jvj+24; 
(*f[1708])( );     /*TYPEXPR2(jvj+23,B,jvj+25,jvj+26,jvj+24)*/
if((x[jvj+26]==23)) goto l14;
if((x[jvj+25]!=1881)) goto l14;
if((x[jvj+24]!=41)) goto l14;
pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+27; 
(*f[1498])( );     /*CALCULABLE0(jvj+23,B,1881,XD,jvj+27)*/
if((x[jvj+27]==67)) goto l14;
x[jvj+158]=t[x[jvj+158]];
l7:if((x[jvj+158]>0)) goto l8;
x[R]=68 ;z[R]=68;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+6; pile[WZ2]=jvj+37; pile[WZ3]=B; pile[WZ4]=XD; 
(*f[1709])( );     /*CRENONVAR0(jvj+36,jvj+6,jvj+37,B,XD)*/
pile[v[22]]=107; 
(*f[71])( );     /*ENLV0(107,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+38)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[35])( );     /*CHGC1(jvj+6,111,jvj+38)*/
goto l82;
l11:pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+6,jvj+32)*/
if((x[jvj+32]!=22)) goto l56;
pile[v[22]]=111; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(111,jvj+6,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(101,jvj+33,jvj+34)*/
pile[v[22]]=1883; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1883,jvj+34,jvj+35)*/
if((x[jvj+35]!=1881)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+36)*/
for(i=x[jvj+36],V65=0;i>0;i=t[i],V65++)  ;
if((V65>1)) goto l12;
if((V65!=1)) goto l14;
pile[v[22]]=1899; pile[WZ1]=jvj+34; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1899,jvj+34,jvj+39)*/
if((x[jvj+36]<=0)) goto l14;
x[jvj+19]=s[x[jvj+36]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+36];
pile[v[22]]=jvj+19; pile[WZ1]=B; pile[WZ2]=jvj+40; pile[WZ3]=jvj+41; pile[WZ4]=jvj+42; 
(*f[1708])( );     /*TYPEXPR2(jvj+19,B,jvj+40,jvj+41,jvj+42)*/
if((x[jvj+40]==129)) goto l13;
l14:pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+44)*/
for(i=x[jvj+44],V47=0;i>0;i=t[i],V47++)  ;
if((V47!=2)) goto l56;
pile[v[22]]=1564; pile[WZ1]=1714; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1564,1714,jvj+45)*/
for(a=x[jvj+45];a>0;a=t[a]) if(s[a]==x[jvj+34]) goto l15;
l56:pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(100,jvj+6,jvj+101)*/
if(x[jvj+101]==96||x[jvj+101]==89||x[jvj+101]==41||x[jvj+101]==20||x[jvj+101]==128||x[jvj+101]==570||x[jvj+101]==1317) goto l57;
if((x[jvj+101]==73)) goto l58;
if((x[jvj+101]==43)) goto l62;
if((x[jvj+101]!=22)) goto l80;
pile[v[22]]=111; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(111,jvj+6,jvj+119)*/
pile[v[22]]=101; pile[WZ1]=jvj+119; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(101,jvj+119,jvj+59)*/
pile[v[22]]=118; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(118,jvj+59,V195)*/
V195=pile[WZ2]; 
if((V195==1)) goto l64;
if((V195==3)) goto l67;
if((V195!=2)) goto l48;
pile[v[22]]=1841; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(1841,jvj+59,jvj+139)*/
if((x[jvj+139]!=68)) goto l48;
pile[v[22]]=11; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(11,jvj+59,jvj+140)*/
if((x[jvj+140]!=135)) goto l48;
if((x[jvj+156]!=1881)) goto l74;
pile[v[22]]=1834; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(1834,jvj+59,jvj+82)*/
if((x[jvj+82]!=129)) goto l74;
pile[v[22]]=1876; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(1876,jvj+59,jvj+81)*/
l74:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+6,jvj+141)*/
pile[v[22]]=103; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+6,jvj+142)*/
pile[v[22]]=jvj+141; pile[WZ1]=B; pile[WZ2]=jvj+143; pile[WZ3]=jvj+144; 
(*f[1496])( );     /*TYPEXPR0(jvj+141,B,jvj+143,jvj+144)*/
if((x[jvj+144]!=129)) goto l75;
if((x[jvj+143]!=250)) goto l75;
pile[v[22]]=1835; pile[WZ1]=jvj+59; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(1835,jvj+59,jvj+85)*/
if((x[jvj+85]==1881)) goto l48;
l75:pile[v[22]]=jvj+142; pile[WZ1]=B; pile[WZ2]=jvj+145; pile[WZ3]=jvj+146; 
(*f[1496])( );     /*TYPEXPR0(jvj+142,B,jvj+145,jvj+146)*/
if((x[XP]!=228)) goto l40;
if((x[jvj+144]!=129)) goto l43;
if(x[jvj+143]==250||x[jvj+143]==1814) goto l48;
l43:if((x[jvj+146]!=129)) goto l40;
if(x[jvj+145]==250||x[jvj+145]==1814) goto l48;
l40:if((x[jvj+144]!=129)) goto l41;
if((x[jvj+143]!=250)) goto l41;
if((x[jvj+146]!=1881)) goto l41;
pile[v[22]]=1656; pile[WZ1]=jvj+59; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(1656,jvj+59,jvj+83)*/
if((x[jvj+83]==68)) goto l48;
l76:pile[v[22]]=jvj+141; pile[WZ1]=B; pile[WZ2]=jvj+144; pile[WZ3]=XD; pile[WZ4]=jvj+147; 
(*f[1498])( );     /*CALCULABLE0(jvj+141,B,jvj+144,XD,jvj+147)*/
if((x[jvj+147]==68)) goto l44;
l48:pile[v[22]]=1916; pile[WZ1]=1714; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(1916,1714,jvj+90)*/
for(a=x[jvj+90];a>0;a=t[a]) if(s[a]==x[jvj+59]) goto l49;
pile[v[22]]=1901; pile[WZ2]=jvj+91; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+91)*/
for(a=x[jvj+91];a>0;a=t[a]) if(s[a]==x[jvj+59]) goto l49;
l39:pile[v[22]]=1656; pile[WZ1]=jvj+59; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l79;     /*FNDO0(1656,jvj+59,jvj+78)*/
if((x[jvj+78]==68)) goto l80;
l79:pile[v[22]]=1916; pile[WZ1]=1714; pile[WZ2]=jvj+154; 
(*f[33])( );     /*FNDE0(1916,1714,jvj+154)*/
for(a=x[jvj+154];a>0;a=t[a]) if(s[a]==x[jvj+59]) goto l80;
pile[v[22]]=1901; pile[WZ2]=jvj+155; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+155)*/
for(a=x[jvj+155];a>0;a=t[a]) if(s[a]==x[jvj+59]) goto l80;
pile[v[22]]=118; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(118,jvj+59,V115)*/
V115=pile[WZ2]; 
if((V115!=2)) goto l37;
pile[v[22]]=1841; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(1841,jvj+59,jvj+79)*/
if((x[jvj+79]!=68)) goto l37;
pile[v[22]]=11; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(11,jvj+59,jvj+80)*/
if((x[jvj+80]==135)) goto l80;
l37:pile[v[22]]=1841; pile[WZ1]=jvj+59; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(1841,jvj+59,jvj+76)*/
if((x[jvj+76]==68)) goto l28;
l38:pile[v[22]]=1045; pile[WZ1]=jvj+59; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(1045,jvj+59,jvj+77)*/
if((x[jvj+77]==68)) goto l28;
l80:pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l81;     /*FNDC1(140,jvj+6,V)*/
V=pile[WZ2]; 
pile[v[22]]=jvj+156; pile[WZ1]=V; pile[WZ2]=B; pile[WZ3]=jvj+157; 
(*f[1710])( );     /*ACCORDXP0(jvj+156,V,B,jvj+157)*/
if((x[jvj+157]==68)) goto l57;
l81:pile[v[22]]=140; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+6,V124)*/
V124=pile[WZ2]; 
if((V124==(-3629))) goto l57;
goto l10;
l12:pile[v[22]]=1796; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1796,jvj+34,jvj+37)*/
x[jvj+158]=x[jvj+36] ;z[jvj+158]=z[jvj+36];
goto l7;
l13:if((x[jvj+41]==23)) goto l2;
goto l14;
l15:pile[v[22]]=145; pile[WZ1]=jvj+34; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(145,jvj+34,jvj+46)*/
x[jvj+162]=x[jvj+44] ;z[jvj+162]=z[jvj+44];
l16:if((x[jvj+162]<=0)) goto l56;
x[jvj+159]=s[x[jvj+162]] ;z[jvj+159]=(x[jvj+159]<=sepcte) ? x[jvj+159] : z[jvj+162];
x[jvj+47]=x[jvj+159] ;z[jvj+47]=z[jvj+159];
pile[v[22]]=jvj+47; pile[WZ1]=B; pile[WZ2]=jvj+48; pile[WZ3]=jvj+49; 
(*f[1496])( );     /*TYPEXPR0(jvj+47,B,jvj+48,jvj+49)*/
if((x[jvj+49]==1881)) goto l18;
if((x[jvj+48]!=250)) goto l18;
l17:x[jvj+162]=t[x[jvj+162]];
goto l16;
l18:pile[v[22]]=jvj+47; pile[WZ1]=B; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+50; 
(*f[1498])( );     /*CALCULABLE0(jvj+47,B,1881,XD,jvj+50)*/
if((x[jvj+50]==68)) goto l20;
goto l17;
l20:x[jvj+160]=x[jvj+44] ;z[jvj+160]=z[jvj+44];
l19:if((x[jvj+160]<=0)) goto l17;
x[jvj+51]=s[x[jvj+160]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+160];
if((x[jvj+159]==x[jvj+51])) goto l21;
pile[v[22]]=jvj+51; pile[WZ1]=B; pile[WZ2]=jvj+52; pile[WZ3]=jvj+53; 
(*f[1496])( );     /*TYPEXPR0(jvj+51,B,jvj+52,jvj+53)*/
if((x[jvj+53]==1881)) goto l22;
if((x[jvj+52]!=250)) goto l22;
l21:x[jvj+160]=t[x[jvj+160]];
goto l19;
l22:pile[v[22]]=jvj+51; pile[WZ1]=B; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+54; 
(*f[1498])( );     /*CALCULABLE0(jvj+51,B,1881,XD,jvj+54)*/
if((x[jvj+54]==68)) goto l23;
goto l21;
l23:x[R]=68 ;z[R]=68;
pile[v[22]]=107; pile[WZ1]=jvj+6; 
(*f[71])( );     /*ENLV0(107,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+46; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+46,jvj+55)*/
pile[v[22]]=jvj+6; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[35])( );     /*CHGC1(jvj+6,111,jvj+55)*/
pile[WZ1]=102; pile[WZ2]=jvj+47; 
(*f[35])( );     /*CHGC1(jvj+6,102,jvj+47)*/
pile[WZ1]=103; pile[WZ2]=jvj+51; 
(*f[35])( );     /*CHGC1(jvj+6,103,jvj+51)*/
goto l82;
l24:x[jvj+58]=incon;
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+56,jvj+57)*/
pile[v[22]]=1835; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1835,jvj+57,jvj+58)*/
l63:pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(103,jvj+6,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=B; pile[WZ2]=jvj+58; pile[WZ3]=XD; pile[WZ4]=jvj+118; 
(*f[1498])( );     /*CALCULABLE0(jvj+117,B,jvj+58,XD,jvj+118)*/
if((x[jvj+118]==68)) goto l57;
goto l80;
l25:x[jvj+58]=129 ;z[jvj+58]=129;
goto l63;
l26:if((x[jvj+62]!=1881)) goto l80;
l27:pile[v[22]]=jvj+61; pile[WZ1]=B; pile[WZ2]=jvj+64; pile[WZ3]=XD; pile[WZ4]=jvj+65; 
(*f[1498])( );     /*CALCULABLE0(jvj+61,B,jvj+64,XD,jvj+65)*/
if((x[jvj+65]==67)) goto l80;
l31:x[jvj+161]=t[x[jvj+161]];
l29:if((x[jvj+161]>0)) goto l30;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+75)*/
pile[v[22]]=1883; pile[WZ1]=jvj+59; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(1883,jvj+59,jvj+73)*/
l36:if((x[jvj+75]<=0)) goto l57;
x[jvj+69]=s[x[jvj+75]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+75];
if((x[jvj+73]!=1881)) goto l35;
pile[v[22]]=jvj+69; pile[WZ1]=B; pile[WZ2]=jvj+70; pile[WZ3]=jvj+71; pile[WZ4]=jvj+72; 
(*f[1708])( );     /*TYPEXPR2(jvj+69,B,jvj+70,jvj+71,jvj+72)*/
if((x[jvj+70]==129)) goto l33;
l35:pile[v[22]]=jvj+69; pile[WZ1]=B; pile[WZ2]=jvj+73; pile[WZ3]=XD; pile[WZ4]=jvj+74; 
(*f[1498])( );     /*CALCULABLE0(jvj+69,B,jvj+73,XD,jvj+74)*/
if((x[jvj+74]==67)) goto l80;
x[jvj+75]=t[x[jvj+75]];
goto l36;
l28:x[jvj+161]=w[1659][9];
goto l29;
l30:x[jvj+66]=s[x[jvj+161]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+161];
if((x[jvj+66]!=103)) goto l32;
pile[v[22]]=1045; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1045,jvj+59,jvj+60)*/
if((x[jvj+60]==68)) goto l31;
l32:pile[v[22]]=1877; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1877,jvj+66,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+59; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+67,jvj+59,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+6; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+66,jvj+6,jvj+61)*/
x[jvj+64]=x[jvj+68] ;z[jvj+64]=z[jvj+68];
if((x[jvj+64]!=1881)) goto l27;
pile[v[22]]=jvj+61; pile[WZ1]=B; pile[WZ2]=jvj+63; pile[WZ3]=jvj+62; 
(*f[1496])( );     /*TYPEXPR0(jvj+61,B,jvj+63,jvj+62)*/
if((x[jvj+63]==250)) goto l26;
goto l27;
l33:if((x[jvj+71]==23)) goto l34;
goto l35;
l34:if((x[jvj+72]==250)) goto l80;
goto l35;
l41:if((x[jvj+146]!=129)) goto l76;
if((x[jvj+145]!=250)) goto l76;
if((x[jvj+144]!=1881)) goto l42;
pile[v[22]]=1656; pile[WZ1]=jvj+59; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1656,jvj+59,jvj+84)*/
if((x[jvj+84]==68)) goto l48;
l42:pile[v[22]]=1836; pile[WZ1]=jvj+59; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(1836,jvj+59,jvj+86)*/
if((x[jvj+86]==1881)) goto l48;
goto l76;
l44:x[jvj+148]=incon;
if((x[jvj+146]!=250)) goto l45;
pile[v[22]]=1656; pile[WZ1]=jvj+59; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1656,jvj+59,jvj+87)*/
if((x[jvj+87]!=68)) goto l45;
x[jvj+148]=x[jvj+144] ;z[jvj+148]=z[jvj+144];
l77:pile[v[22]]=jvj+142; pile[WZ1]=B; pile[WZ2]=jvj+148; pile[WZ3]=XD; pile[WZ4]=jvj+149; 
(*f[1498])( );     /*CALCULABLE0(jvj+142,B,jvj+148,XD,jvj+149)*/
if((x[jvj+149]==68)) goto l57;
goto l48;
l45:x[jvj+148]=x[jvj+146] ;z[jvj+148]=z[jvj+146];
goto l77;
l47:x[jvj+88]=s[x[jvj+150]] ;z[jvj+88]=(x[jvj+88]<=sepcte) ? x[jvj+88] : z[jvj+150];
pile[v[22]]=jvj+88; pile[WZ1]=B; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+89; 
(*f[1498])( );     /*CALCULABLE0(jvj+88,B,1881,XD,jvj+89)*/
if((x[jvj+89]==67)) goto l39;
x[jvj+150]=t[x[jvj+150]];
l46:if((x[jvj+150]>0)) goto l47;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(102,jvj+6,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=B; pile[WZ2]=jvj+152; pile[WZ3]=XD; pile[WZ4]=jvj+153; 
(*f[1498])( );     /*CALCULABLE0(jvj+151,B,jvj+152,XD,jvj+153)*/
if((x[jvj+153]==68)) goto l57;
goto l39;
l49:x[jvj+152]=incon;
pile[v[22]]=1835; pile[WZ1]=jvj+59; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(1835,jvj+59,jvj+92)*/
x[jvj+152]=x[jvj+92] ;z[jvj+152]=z[jvj+92];
l50:pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+93)*/
for(a=x[jvj+93];a>0;a=t[a]) if(s[a]==x[jvj+59]) goto l51;
if(x[jvj+152]==incon) goto l39;
l78:if((x[jvj+152]==(-99999998))) goto l39;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+150; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+150)*/
goto l46;
l51:x[jvj+152]=x[XP] ;z[jvj+152]=z[XP];
goto l78;
l52:if((x[jvj+131]!=129)) goto l53;
if(x[jvj+130]==250||x[jvj+130]==1814) goto l48;
l53:if((x[jvj+133]!=129)) goto l54;
if(x[jvj+132]==250||x[jvj+132]==1814) goto l48;
l54:if((x[jvj+135]!=129)) goto l71;
if(x[jvj+134]==250||x[jvj+134]==1814) goto l48;
l55:if((x[jvj+134]!=250)) goto l71;
pile[v[22]]=1837; pile[WZ1]=jvj+59; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(1837,jvj+59,jvj+100)*/
if((x[jvj+100]==1881)) goto l48;
l71:pile[v[22]]=jvj+129; pile[WZ1]=B; pile[WZ2]=jvj+133; pile[WZ3]=XD; pile[WZ4]=jvj+136; 
(*f[1498])( );     /*CALCULABLE0(jvj+129,B,jvj+133,XD,jvj+136)*/
if((x[jvj+136]==68)) goto l72;
goto l48;
l57:x[R]=68 ;z[R]=68;
goto l82;
l58:pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(111,jvj+6,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(101,jvj+102,jvj+103)*/
pile[v[22]]=117; pile[WZ1]=jvj+103; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(117,jvj+103,V167)*/
V167=pile[WZ2]; 
if((V167==1)) goto l59;
if((V167!=3)) goto l80;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(102,jvj+6,jvj+107)*/
pile[v[22]]=103; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(103,jvj+6,jvj+108)*/
pile[v[22]]=160; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(160,jvj+6,jvj+109)*/
pile[v[22]]=1835; pile[WZ1]=jvj+103; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(1835,jvj+103,jvj+110)*/
pile[v[22]]=jvj+107; pile[WZ1]=B; pile[WZ3]=XD; pile[WZ4]=jvj+111; 
(*f[1498])( );     /*CALCULABLE0(jvj+107,B,jvj+110,XD,jvj+111)*/
if((x[jvj+111]==68)) goto l60;
goto l80;
l59:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(102,jvj+6,jvj+104)*/
pile[v[22]]=1835; pile[WZ1]=jvj+103; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(1835,jvj+103,jvj+105)*/
pile[v[22]]=jvj+104; pile[WZ1]=B; pile[WZ3]=XD; pile[WZ4]=jvj+106; 
(*f[1498])( );     /*CALCULABLE0(jvj+104,B,jvj+105,XD,jvj+106)*/
if((x[jvj+106]==68)) goto l57;
goto l80;
l60:pile[v[22]]=1836; pile[WZ1]=jvj+103; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(1836,jvj+103,jvj+112)*/
pile[v[22]]=jvj+108; pile[WZ1]=B; pile[WZ3]=XD; pile[WZ4]=jvj+113; 
(*f[1498])( );     /*CALCULABLE0(jvj+108,B,jvj+112,XD,jvj+113)*/
if((x[jvj+113]==68)) goto l61;
goto l80;
l61:pile[v[22]]=1837; pile[WZ1]=jvj+103; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(1837,jvj+103,jvj+114)*/
pile[v[22]]=jvj+109; pile[WZ1]=B; pile[WZ3]=XD; pile[WZ4]=jvj+115; 
(*f[1498])( );     /*CALCULABLE0(jvj+109,B,jvj+114,XD,jvj+115)*/
if((x[jvj+115]==68)) goto l57;
goto l80;
l62:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(102,jvj+6,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=B; pile[WZ2]=1881; pile[WZ3]=XD; pile[WZ4]=jvj+116; 
(*f[1498])( );     /*CALCULABLE0(jvj+56,B,1881,XD,jvj+116)*/
if((x[jvj+116]==68)) goto l24;
goto l80;
l64:pile[v[22]]=1841; pile[WZ1]=jvj+59; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(1841,jvj+59,jvj+120)*/
if((x[jvj+120]!=68)) goto l48;
pile[v[22]]=155; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(155,jvj+59,jvj+95)*/
if((x[jvj+95]==68)) goto l48;
l65:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+6,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=B; pile[WZ2]=jvj+122; pile[WZ3]=jvj+123; 
(*f[1496])( );     /*TYPEXPR0(jvj+121,B,jvj+122,jvj+123)*/
if((x[jvj+123]!=129)) goto l66;
if((x[jvj+122]!=250)) goto l66;
pile[v[22]]=1835; pile[WZ1]=jvj+59; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(1835,jvj+59,jvj+94)*/
if((x[jvj+94]==1881)) goto l48;
l66:pile[v[22]]=jvj+121; pile[WZ1]=B; pile[WZ2]=jvj+123; pile[WZ3]=XD; pile[WZ4]=jvj+124; 
(*f[1498])( );     /*CALCULABLE0(jvj+121,B,jvj+123,XD,jvj+124)*/
if((x[jvj+124]==68)) goto l57;
goto l48;
l67:pile[v[22]]=1841; pile[WZ1]=jvj+59; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(1841,jvj+59,jvj+125)*/
if((x[jvj+125]!=68)) goto l48;
pile[v[22]]=11; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(11,jvj+59,jvj+126)*/
if((x[jvj+126]!=135)) goto l48;
if((x[jvj+156]!=1881)) goto l68;
pile[v[22]]=1834; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(1834,jvj+59,jvj+97)*/
if((x[jvj+97]!=129)) goto l68;
pile[v[22]]=1876; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(1876,jvj+59,jvj+96)*/
l68:pile[v[22]]=160; pile[WZ1]=jvj+6; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(160,jvj+6,jvj+127)*/
pile[v[22]]=102; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+6,jvj+128)*/
pile[v[22]]=103; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+6,jvj+129)*/
pile[v[22]]=jvj+128; pile[WZ1]=B; pile[WZ2]=jvj+130; pile[WZ3]=jvj+131; 
(*f[1496])( );     /*TYPEXPR0(jvj+128,B,jvj+130,jvj+131)*/
if((x[jvj+131]!=129)) goto l69;
if((x[jvj+130]!=250)) goto l69;
pile[v[22]]=1835; pile[WZ1]=jvj+59; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(1835,jvj+59,jvj+98)*/
if((x[jvj+98]==1881)) goto l48;
l69:pile[v[22]]=jvj+129; pile[WZ1]=B; pile[WZ2]=jvj+132; pile[WZ3]=jvj+133; 
(*f[1496])( );     /*TYPEXPR0(jvj+129,B,jvj+132,jvj+133)*/
if((x[jvj+133]!=129)) goto l70;
if((x[jvj+132]!=250)) goto l70;
pile[v[22]]=1836; pile[WZ1]=jvj+59; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(1836,jvj+59,jvj+99)*/
if((x[jvj+99]==1881)) goto l48;
l70:pile[v[22]]=jvj+127; pile[WZ1]=B; pile[WZ2]=jvj+134; pile[WZ3]=jvj+135; 
(*f[1496])( );     /*TYPEXPR0(jvj+127,B,jvj+134,jvj+135)*/
if((x[XP]==228)) goto l52;
if((x[jvj+135]==129)) goto l55;
goto l71;
l72:pile[v[22]]=jvj+128; pile[WZ1]=B; pile[WZ2]=jvj+131; pile[WZ3]=XD; pile[WZ4]=jvj+137; 
(*f[1498])( );     /*CALCULABLE0(jvj+128,B,jvj+131,XD,jvj+137)*/
if((x[jvj+137]==68)) goto l73;
goto l48;
l73:pile[v[22]]=jvj+127; pile[WZ1]=B; pile[WZ2]=jvj+135; pile[WZ3]=XD; pile[WZ4]=jvj+138; 
(*f[1498])( );     /*CALCULABLE0(jvj+127,B,jvj+135,XD,jvj+138)*/
if((x[jvj+138]==68)) goto l57;
goto l48;
}
