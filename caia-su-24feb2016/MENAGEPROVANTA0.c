#include "dx.h"
void MENAGEPROVANTA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V144=0,V142=0,V110=0,V109=0,V126=0,V165=0,V148=0,V147=0,V184=0,V48=0,L=0,V43=0,V=0,AT=0,V16=0,V22=0,K=0,V104=0,V54=0,V99=0,V56=0,V55=0,V72=0,V78=0,V53=0;
int X,Y;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=64;
x[jvj+1]=11550;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1224&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1489; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1489,Y,jvj+2)*/
x[jvj+63]=x[jvj+2] ;z[jvj+63]=z[jvj+2];
l1:if((x[jvj+63]>0)) goto l2;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+63]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+63];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=26)) goto l3;
V144=x[jvj+3];
x[jvj+64]=x[jvj+2] ;z[jvj+64]=z[jvj+2];
l4:if((x[jvj+64]<=0)) goto l3;
x[jvj+6]=s[x[jvj+64]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+64];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==300)) goto l6;
if((x[jvj+8]==25)) goto l10;
if((x[jvj+8]==30)) goto l14;
if((x[jvj+8]!=28)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+6,jvj+48)*/
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+48,V104)*/
V104=pile[WZ2]; 
V54=V104;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=43)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+49,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+51,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+49,jvj+52)*/
V56=V99;
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+52,jvj+53)*/
V55=x[jvj+53];
x[jvj+54]=d[20];z[jvj+54]=0;
l17:if((x[jvj+54]<=0)) goto l5;
x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=jvj+55; pile[WZ1]=jvj+3; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+55,jvj+3,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+56,jvj+57)*/
if((x[jvj+57]!=43)) goto l18;
pile[v[22]]=103; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+56,jvj+58)*/
pile[v[22]]=140; pile[WZ1]=jvj+58; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+58,V72)*/
V72=pile[WZ2]; 
if((V56!=V72)) goto l18;
pile[v[22]]=102; pile[WZ1]=jvj+56; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+56,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+59,jvj+60)*/
if((V55!=x[jvj+60])) goto l18;
pile[v[22]]=268; pile[WZ1]=jvj+55; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(268,jvj+55,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+3; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+61,jvj+3,jvj+62)*/
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+62,V78)*/
V78=pile[WZ2]; 
V53=V78;
if((V53>=V54)) goto l18;
pile[v[22]]=1489; pile[WZ1]=Y; pile[WZ2]=V144; 
(*f[134])( );     /*OTA0(1489,Y,V144)*/
l18:x[jvj+54]=t[x[jvj+54]];
goto l17;
l3:x[jvj+63]=t[x[jvj+63]];
goto l1;
l5:x[jvj+64]=t[x[jvj+64]];
goto l4;
l6:pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+6,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+9,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+10)*/
V110=V142;
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
V109=x[jvj+11];
x[jvj+12]=d[20];z[jvj+12]=0;
l7:if((x[jvj+12]<=0)) goto l5;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+13,jvj+3,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=43)) goto l8;
pile[v[22]]=103; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+14,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+16,V126)*/
V126=pile[WZ2]; 
if((V110!=V126)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+14,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+17,jvj+18)*/
if((V109!=x[jvj+18])) goto l8;
pile[v[22]]=1489; pile[WZ1]=Y; pile[WZ2]=V144; 
(*f[134])( );     /*OTA0(1489,Y,V144)*/
l8:x[jvj+12]=t[x[jvj+12]];
goto l7;
l10:x[jvj+19]=d[20];z[jvj+19]=0;
l9:if((x[jvj+19]<=0)) goto l5;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+20,jvj+3,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=43)) goto l11;
pile[v[22]]=103; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+21,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+23,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+21,jvj+24)*/
V148=V165;
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+24,jvj+25)*/
V147=x[jvj+25];
x[jvj+26]=d[20];z[jvj+26]=0;
l12:if((x[jvj+26]<=0)) goto l11;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+6; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+27,jvj+6,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=43)) goto l13;
pile[v[22]]=103; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+28,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+30,V184)*/
V184=pile[WZ2]; 
if((V148!=V184)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+28,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+31,jvj+32)*/
if((V147!=x[jvj+32])) goto l13;
pile[v[22]]=1489; pile[WZ1]=Y; pile[WZ2]=V144; 
(*f[134])( );     /*OTA0(1489,Y,V144)*/
l13:x[jvj+26]=t[x[jvj+26]];
goto l12;
l11:x[jvj+19]=t[x[jvj+19]];
goto l9;
l14:pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+6,jvj+33)*/
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+33,V48)*/
V48=pile[WZ2]; 
L=V48;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=43)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+34,jvj+36)*/
pile[v[22]]=140; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+36,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+34,jvj+37)*/
V=V43;
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+37,jvj+38)*/
AT=x[jvj+38];
x[jvj+39]=d[20];z[jvj+39]=0;
l15:if((x[jvj+39]<=0)) goto l5;
x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+3; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+40,jvj+3,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=43)) goto l16;
pile[v[22]]=103; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+41,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+43,V16)*/
V16=pile[WZ2]; 
if((V!=V16)) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+41; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+41,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+44,jvj+45)*/
if((AT!=x[jvj+45])) goto l16;
pile[v[22]]=268; pile[WZ1]=jvj+40; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+40,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+3; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+46,jvj+3,jvj+47)*/
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+47,V22)*/
V22=pile[WZ2]; 
K=V22;
if((K<=L)) goto l16;
pile[v[22]]=1489; pile[WZ1]=Y; pile[WZ2]=V144; 
(*f[134])( );     /*OTA0(1489,Y,V144)*/
l16:x[jvj+39]=t[x[jvj+39]];
goto l15;
}
