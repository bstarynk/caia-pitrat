#include "dx.h"
void ISL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V50=0,V=0,V54=0,V37=0,NN=0,BL=0,V56=0,V58=0,V96=0,V87=0;
int TL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=63;
x[jvj+1]=10520;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1658&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=TL; 
(*f[1845])( );     /*ISO0(TL)*/
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(302,TL,jvj+16)*/
x[jvj+60]=x[jvj+16] ;z[jvj+60]=z[jvj+16];
l4:if((x[jvj+60]>0)) goto l5;
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(302,TL,jvj+51)*/
l23:if((x[jvj+51]>0)) goto l24;
pile[v[22]]=TL; 
(*f[1851])( );     /*ISS0(TL)*/
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=s[x[jvj+59]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+59];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=113)) goto l12;
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+4,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+2,jvj+5)*/
V=V50;
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+5,V54)*/
V54=pile[WZ2]; 
if((V!=V54)) goto l12;
x[jvj+59]=t[x[jvj+59]];
l1:if((x[jvj+59]>0)) goto l2;
pile[v[22]]=134; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(134,jvj+6,jvj+7)*/
pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(134,jvj+6,jvj+13)*/
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]==86)) goto l11;
l3:pile[v[22]]=134; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(134,jvj+6,jvj+8)*/
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+8,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=73)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==255)) goto l11;
l12:pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+20,jvj+32)*/
if((x[jvj+32]!=492)) goto l13;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+20,jvj+33)*/
pile[v[22]]=103; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+20,jvj+34)*/
pile[v[22]]=436; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(436,jvj+20,jvj+35)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=jvj+21; pile[WZ3]=jvj+33; pile[WZ4]=jvj+6; 
(*f[1848])( );     /*ITD0(jvj+34,jvj+35,jvj+21,jvj+33,jvj+6)*/
l13:pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+20,jvj+36)*/
if((x[jvj+36]==39)) goto l14;
if((x[jvj+36]==435)) goto l17;
if((x[jvj+36]!=435)) goto l21;
l6:x[jvj+60]=t[x[jvj+60]];
goto l4;
l5:x[jvj+6]=s[x[jvj+60]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+60];
pile[v[22]]=248; pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(248,jvj+6,jvj+17)*/
x[jvj+61]=x[jvj+17] ;z[jvj+61]=z[jvj+17];
l7:if((x[jvj+61]>0)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+6,jvj+20)*/
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=599)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+20,jvj+23)*/
pile[v[22]]=jvj+23; 
(*f[1849])( );if(v[102]) goto l10;     /*IZE0(jvj+23,NN)*/
NN=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NN; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,NN,jvj+24)*/
pile[v[22]]=jvj+20; pile[WZ1]=102; pile[WZ2]=jvj+24; 
(*f[35])( );     /*CHGC1(jvj+20,102,jvj+24)*/
l10:BL=x[jvj+22];
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(583,TL,jvj+25)*/
if((BL!=x[jvj+25])) goto l12;
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+20,jvj+26)*/
if((x[jvj+26]!=39)) goto l12;
pile[v[22]]=135; pile[WZ1]=jvj+6; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(135,jvj+6,jvj+27)*/
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=85)) goto l12;
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+20,V56)*/
V56=pile[WZ2]; 
pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,TL,V58)*/
V58=pile[WZ2]; 
if((V56!=V58)) goto l12;
pile[v[22]]=287; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(287,TL,jvj+30)*/
pile[v[22]]=113; pile[WZ1]=jvj+20; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(113,jvj+20,jvj+31)*/
x[jvj+59]=x[jvj+31] ;z[jvj+59]=z[jvj+31];
goto l1;
l8:x[jvj+18]=s[x[jvj+61]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+61];
pile[v[22]]=161; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(161,jvj+18,jvj+19)*/
if((x[jvj+19]==x[TL])) goto l9;
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[jvj+19]) goto l9;
V37=x[jvj+18];
pile[v[22]]=248; pile[WZ1]=jvj+6; pile[WZ2]=V37; 
(*f[134])( );     /*OTA0(248,jvj+6,V37)*/
l9:x[jvj+61]=t[x[jvj+61]];
goto l7;
l11:pile[v[22]]=135; pile[WZ1]=jvj+6; pile[WZ2]=jvj+30; 
(*f[1380])( );     /*RECZ0(135,jvj+6,jvj+30)*/
pile[v[22]]=TL; pile[WZ2]=jvj+6; 
(*f[1847])( );     /*JRA0(TL,jvj+6,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+6,TL)*/
goto l12;
l14:pile[v[22]]=114; pile[WZ1]=jvj+20; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(114,jvj+20,jvj+37)*/
x[jvj+62]=x[jvj+37] ;z[jvj+62]=z[jvj+37];
l15:if((x[jvj+62]<=0)) goto l21;
x[jvj+38]=s[x[jvj+62]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+62];
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+38,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=69)) goto l16;
pile[v[22]]=jvj+6; pile[WZ1]=TL; pile[WZ2]=102; pile[WZ3]=jvj+38; 
(*f[1846])( );     /*ISM0(jvj+6,TL,102,jvj+38)*/
l16:x[jvj+62]=t[x[jvj+62]];
goto l15;
l17:pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+20,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=69)) goto l6;
pile[v[22]]=108; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(108,jvj+41,jvj+43)*/
x[jvj+63]=x[jvj+43] ;z[jvj+63]=z[jvj+43];
l18:if((x[jvj+63]<=0)) goto l6;
x[jvj+44]=s[x[jvj+63]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+63];
pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+44,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=69)) goto l19;
pile[v[22]]=jvj+6; pile[WZ1]=TL; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[1846])( );     /*ISM0(jvj+6,TL,103,jvj+44)*/
l19:x[jvj+63]=t[x[jvj+63]];
goto l18;
l21:x[jvj+47]=d[6];z[jvj+47]=0;
l20:if((x[jvj+47]<=0)) goto l6;
x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+20; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+48,jvj+20,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=69)) goto l22;
pile[v[22]]=jvj+6; pile[WZ1]=TL; pile[WZ2]=jvj+48; pile[WZ3]=jvj+20; 
(*f[1846])( );     /*ISM0(jvj+6,TL,jvj+48,jvj+20)*/
l22:x[jvj+47]=t[x[jvj+47]];
goto l20;
l24:x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=102; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+52,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+53,jvj+54)*/
if((x[jvj+54]!=435)) goto l25;
pile[v[22]]=436; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(436,jvj+53,jvj+55)*/
pile[v[22]]=140; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+55,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+53,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+56,jvj+57)*/
if((x[jvj+57]!=69)) goto l25;
pile[v[22]]=108; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(108,jvj+56,jvj+58)*/
if((x[jvj+58]==0)) goto l25;
V87=V96;
pile[v[22]]=jvj+56; pile[WZ1]=jvj+52; pile[WZ2]=V87; 
(*f[1850])( );     /*ISLAK0(jvj+56,jvj+52,V87)*/
pile[v[22]]=jvj+52; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(jvj+52,TL)*/
l25:x[jvj+51]=t[x[jvj+51]];
goto l23;
}
