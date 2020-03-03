#include "dx.h"
void Z89Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V130=0,V134=0,V160=0,V170=0,V307=0,V306=0,V216=0,V215=0,V45=0,V282=0,V441=0,V274=0,V455=0,V277=0,V276=0,V84=0,V91=0,V439=0,V406=0,V399=0,V458=0,V188=0,V200=0,V176=0,V460=0,V178=0,V462=0,V179=0,V463=0;
int EXEXEX,RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=147;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[RRRT] ;z[jvj+5]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==30)) goto l5;
if((x[jvj+7]==25)) goto l18;
if((x[jvj+7]==625)) goto l42;
if((x[jvj+7]!=29)) goto l51;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,jvj+5,jvj+108)*/
pile[v[22]]=111; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+108,jvj+109)*/
pile[v[22]]=101; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+109,jvj+110)*/
if((x[jvj+110]!=485)) goto l51;
pile[v[22]]=107; pile[WZ1]=jvj+108; pile[WZ2]=jvj+111; 
(*f[33])( );     /*FNDE0(107,jvj+108,jvj+111)*/
for(i=x[jvj+111],V406=0;i>0;i=t[i],V406++)  ;
if((V406!=2)) goto l51;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+5,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+112,jvj+113)*/
if((x[jvj+113]!=484)) goto l51;
V458=x[jvj+111];
l47:if((V458<=0)) goto l51;
V399=s[V458];
x[jvj+140]=x[jvj+111] ;z[jvj+140]=z[jvj+111];
l48:if((x[jvj+140]>0)) goto l49;
V458=t[V458];
goto l47;
l2:x[jvj+1]=s[x[jvj+128]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+128];
if((x[jvj+1]==x[jvj+137])) goto l3;
if((x[jvj+1]==x[jvj+138])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==649)) goto l3;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
l3:x[jvj+128]=t[x[jvj+128]];
l1:if((x[jvj+128]>0)) goto l2;
pile[v[22]]=EXEXEX; pile[WZ1]=1785; 
(*f[207])( );     /*PLUE2(EXEXEX,1785)*/
l36:x[jvj+147]=t[x[jvj+147]];
l35:if((x[jvj+147]<=0)) goto l34;
x[jvj+138]=s[x[jvj+147]] ;z[jvj+138]=(x[jvj+138]<=sepcte) ? x[jvj+138] : z[jvj+147];
if((x[jvj+137]==x[jvj+138])) goto l36;
x[jvj+75]=x[jvj+138] ;z[jvj+75]=z[jvj+138];
pile[v[22]]=100; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+75,jvj+76)*/
if((x[jvj+76]!=484)) goto l36;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+128]=x[jvj+64] ;z[jvj+128]=z[jvj+64];
goto l1;
l5:pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+5,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]==484)) goto l6;
if((x[jvj+9]!=41)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+5,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=484)) goto l7;
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+17,jvj+18)*/
pile[v[22]]=1182; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+18,jvj+19)*/
if((68!=x[jvj+19])) goto l7;
pile[v[22]]=EXEXEX; pile[WZ1]=1662; 
(*f[207])( );     /*PLUE2(EXEXEX,1662)*/
l7:pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+8,V130)*/
V130=pile[WZ2]; 
if((V130!=0)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+5,jvj+20)*/
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=485)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+20,jvj+23)*/
for(i=x[jvj+23],V134=0;i>0;i=t[i],V134++)  ;
if((V134!=2)) goto l12;
x[jvj+24]=vo[16];z[jvj+24]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[1948])( );if(v[102]) goto l12;     /*FNDOND0(498,jvj+24,jvj+25)*/
pile[v[22]]=1182; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1182,jvj+25,jvj+26)*/
if((68!=x[jvj+26])) goto l12;
x[jvj+142]=x[jvj+23] ;z[jvj+142]=z[jvj+23];
l8:if((x[jvj+142]<=0)) goto l12;
x[jvj+129]=s[x[jvj+142]] ;z[jvj+129]=(x[jvj+129]<=sepcte) ? x[jvj+129] : z[jvj+142];
x[jvj+27]=x[jvj+129] ;z[jvj+27]=z[jvj+129];
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l9;
x[jvj+130]=x[jvj+23] ;z[jvj+130]=z[jvj+23];
l10:if((x[jvj+130]<=0)) goto l9;
x[jvj+29]=s[x[jvj+130]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+130];
if((x[jvj+129]==x[jvj+29])) goto l11;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=41)) goto l11;
pile[v[22]]=EXEXEX; pile[WZ1]=1731; 
(*f[207])( );     /*PLUE2(EXEXEX,1731)*/
l11:x[jvj+130]=t[x[jvj+130]];
goto l10;
l6:pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+5,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=41)) goto l7;
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+12,jvj+13)*/
pile[v[22]]=1182; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+13,jvj+14)*/
if((68!=x[jvj+14])) goto l7;
pile[v[22]]=EXEXEX; pile[WZ1]=1659; 
(*f[207])( );     /*PLUE2(EXEXEX,1659)*/
goto l7;
l9:x[jvj+142]=t[x[jvj+142]];
goto l8;
l12:pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+8,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=485)) goto l51;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+33)*/
for(i=x[jvj+33],V160=0;i>0;i=t[i],V160++)  ;
if((V160!=2)) goto l51;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,jvj+5,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+34,V170)*/
V170=pile[WZ2]; 
if((V170!=0)) goto l51;
x[jvj+35]=vo[16];z[jvj+35]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[1948])( );if(v[102]) goto l51;     /*FNDOND0(498,jvj+35,jvj+36)*/
pile[v[22]]=1182; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1182,jvj+36,jvj+37)*/
if((68!=x[jvj+37])) goto l51;
x[jvj+143]=x[jvj+33] ;z[jvj+143]=z[jvj+33];
l13:if((x[jvj+143]<=0)) goto l51;
x[jvj+131]=s[x[jvj+143]] ;z[jvj+131]=(x[jvj+131]<=sepcte) ? x[jvj+131] : z[jvj+143];
x[jvj+38]=x[jvj+131] ;z[jvj+38]=z[jvj+131];
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=484)) goto l14;
x[jvj+132]=x[jvj+33] ;z[jvj+132]=z[jvj+33];
l15:if((x[jvj+132]<=0)) goto l14;
x[jvj+40]=s[x[jvj+132]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+132];
if((x[jvj+131]==x[jvj+40])) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=41)) goto l16;
pile[v[22]]=EXEXEX; pile[WZ1]=1737; 
(*f[207])( );     /*PLUE2(EXEXEX,1737)*/
l16:x[jvj+132]=t[x[jvj+132]];
goto l15;
l14:x[jvj+143]=t[x[jvj+143]];
goto l13;
l18:x[jvj+42]=d[20];z[jvj+42]=0;
l17:if((x[jvj+42]<=0)) goto l51;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+5; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+43,jvj+5,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=484)) goto l20;
pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(268,jvj+43,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+5; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+46,jvj+5,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+47,jvj+48)*/
if((x[jvj+48]!=41)) goto l20;
pile[v[22]]=EXEXEX; pile[WZ1]=1626; 
(*f[207])( );     /*PLUE2(EXEXEX,1626)*/
l20:pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+44,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==1215)) goto l21;
if((x[jvj+50]!=1273)) goto l37;
pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(268,jvj+43,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+5; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+54,jvj+5,jvj+55)*/
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+55,V216)*/
V216=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+56)*/
for(i=x[jvj+56],V215=0;i>0;i=t[i],V215++)  ;
if((V215!=V216)) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+44,jvj+57)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1749; 
(*f[207])( );     /*PLUE2(EXEXEX,1749)*/
l22:if((V215!=2)) goto l27;
if((V216!=1)) goto l27;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+44,jvj+58)*/
x[jvj+144]=x[jvj+56] ;z[jvj+144]=z[jvj+56];
l23:if((x[jvj+144]<=0)) goto l27;
x[jvj+133]=s[x[jvj+144]] ;z[jvj+133]=(x[jvj+133]<=sepcte) ? x[jvj+133] : z[jvj+144];
x[jvj+59]=x[jvj+133] ;z[jvj+59]=z[jvj+133];
pile[v[22]]=100; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+59,jvj+60)*/
if((x[jvj+60]!=484)) goto l24;
x[jvj+134]=x[jvj+56] ;z[jvj+134]=z[jvj+56];
l25:if((x[jvj+134]<=0)) goto l24;
x[jvj+61]=s[x[jvj+134]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+134];
if((x[jvj+133]==x[jvj+61])) goto l26;
pile[v[22]]=100; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+61,jvj+62)*/
if((x[jvj+62]!=484)) goto l26;
pile[v[22]]=EXEXEX; pile[WZ1]=1770; 
(*f[207])( );     /*PLUE2(EXEXEX,1770)*/
pile[WZ1]=1773; 
(*f[207])( );     /*PLUE2(EXEXEX,1773)*/
l26:x[jvj+134]=t[x[jvj+134]];
goto l25;
l19:x[jvj+42]=t[x[jvj+42]];
goto l17;
l21:pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(268,jvj+43,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+5; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+51,jvj+5,jvj+52)*/
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+52,V307)*/
V307=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+53)*/
for(i=x[jvj+53],V306=0;i>0;i=t[i],V306++)  ;
if((V306!=V307)) goto l37;
pile[v[22]]=EXEXEX; pile[WZ1]=1743; 
(*f[207])( );     /*PLUE2(EXEXEX,1743)*/
l37:pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+43,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+5; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+77,jvj+5,jvj+78)*/
pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+78,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]!=485)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+78; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(107,jvj+78,jvj+81)*/
for(i=x[jvj+81],V282=0;i>0;i=t[i],V282++)  ;
if((V282!=2)) goto l19;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+43; pile[WZ3]=jvj+82; 
(*f[45])( );if(v[102]) goto l19;     /*FNDZ0(jvj+5,jvj+43,V441,jvj+82)*/
V441=pile[WZ2]; 
V455=x[jvj+81];
l38:if((V455<=0)) goto l19;
V274=s[V455];
x[jvj+139]=x[jvj+81] ;z[jvj+139]=z[jvj+81];
l39:if((x[jvj+139]>0)) goto l40;
V455=t[V455];
goto l38;
l24:x[jvj+144]=t[x[jvj+144]];
goto l23;
l27:pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+55,jvj+63)*/
if((x[jvj+63]!=41)) goto l37;
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+64)*/
for(i=x[jvj+64],V45=0;i>0;i=t[i],V45++)  ;
if((V45!=2)) goto l32;
pile[v[22]]=102; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+44,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+65,jvj+66)*/
if((x[jvj+66]!=41)) goto l32;
x[jvj+145]=x[jvj+64] ;z[jvj+145]=z[jvj+64];
l28:if((x[jvj+145]<=0)) goto l32;
x[jvj+135]=s[x[jvj+145]] ;z[jvj+135]=(x[jvj+135]<=sepcte) ? x[jvj+135] : z[jvj+145];
x[jvj+67]=x[jvj+135] ;z[jvj+67]=z[jvj+135];
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=484)) goto l29;
x[jvj+136]=x[jvj+64] ;z[jvj+136]=z[jvj+64];
l30:if((x[jvj+136]<=0)) goto l29;
x[jvj+69]=s[x[jvj+136]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+136];
if((x[jvj+135]==x[jvj+69])) goto l31;
pile[v[22]]=100; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+69,jvj+70)*/
if((x[jvj+70]!=484)) goto l31;
pile[v[22]]=EXEXEX; pile[WZ1]=1782; 
(*f[207])( );     /*PLUE2(EXEXEX,1782)*/
l31:x[jvj+136]=t[x[jvj+136]];
goto l30;
l29:x[jvj+145]=t[x[jvj+145]];
goto l28;
l32:pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,jvj+44,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+71,jvj+72)*/
if((x[jvj+72]!=41)) goto l37;
x[jvj+146]=x[jvj+64] ;z[jvj+146]=z[jvj+64];
l33:if((x[jvj+146]<=0)) goto l37;
x[jvj+137]=s[x[jvj+146]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+146];
x[jvj+73]=x[jvj+137] ;z[jvj+73]=z[jvj+137];
pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=484)) goto l34;
x[jvj+147]=x[jvj+64] ;z[jvj+147]=z[jvj+64];
goto l35;
l34:x[jvj+146]=t[x[jvj+146]];
goto l33;
l40:x[jvj+83]=s[x[jvj+139]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+139];
if((V274==x[jvj+83])) goto l41;
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+83,V277)*/
V277=pile[WZ2]; 
V276=abs(V277);
if((V276!=1)) goto l41;
pile[v[22]]=EXEXEX; pile[WZ1]=1842; 
(*f[207])( );     /*PLUE2(EXEXEX,1842)*/
l41:x[jvj+139]=t[x[jvj+139]];
goto l39;
l42:pile[v[22]]=160; pile[WZ1]=jvj+5; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(160,jvj+5,jvj+84)*/
x[jvj+85]=d[20];z[jvj+85]=0;
l43:if((x[jvj+85]<=0)) goto l51;
x[jvj+86]=s[x[jvj+85]] ;z[jvj+86]=(x[jvj+86]<=sepcte) ? x[jvj+86] : z[jvj+85];
pile[v[22]]=jvj+86; pile[WZ1]=jvj+5; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(jvj+86,jvj+5,jvj+87)*/
pile[v[22]]=100; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+87,jvj+88)*/
if((x[jvj+88]!=484)) goto l45;
pile[v[22]]=268; pile[WZ1]=jvj+86; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(268,jvj+86,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+5; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(jvj+89,jvj+5,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+90,jvj+91)*/
if((x[jvj+91]!=41)) goto l45;
pile[v[22]]=EXEXEX; pile[WZ1]=1578; 
(*f[207])( );     /*PLUE2(EXEXEX,1578)*/
pile[v[22]]=100; pile[WZ1]=jvj+84; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+84,jvj+92)*/
if((x[jvj+92]!=41)) goto l45;
pile[v[22]]=EXEXEX; pile[WZ1]=1806; 
(*f[207])( );     /*PLUE2(EXEXEX,1806)*/
l45:pile[v[22]]=111; pile[WZ1]=jvj+87; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+87,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+93,jvj+94)*/
if((x[jvj+94]!=596)) goto l46;
pile[v[22]]=100; pile[WZ1]=jvj+84; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+84,jvj+95)*/
if((x[jvj+95]!=41)) goto l46;
pile[v[22]]=103; pile[WZ1]=jvj+87; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(103,jvj+87,jvj+96)*/
pile[v[22]]=130; pile[WZ1]=jvj+96; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+96,V84)*/
V84=pile[WZ2]; 
if((V84<=0)) goto l46;
pile[v[22]]=268; pile[WZ1]=jvj+86; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(268,jvj+86,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+5; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(jvj+97,jvj+5,jvj+98)*/
pile[v[22]]=130; pile[WZ1]=jvj+98; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+98,V91)*/
V91=pile[WZ2]; 
if((V91!=0)) goto l46;
pile[v[22]]=102; pile[WZ1]=jvj+87; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,jvj+87,jvj+99)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1641; 
(*f[207])( );     /*PLUE2(EXEXEX,1641)*/
l46:pile[v[22]]=100; pile[WZ1]=jvj+84; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+84,jvj+100)*/
if((x[jvj+100]!=41)) goto l44;
pile[v[22]]=268; pile[WZ1]=jvj+86; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(268,jvj+86,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(jvj+101,jvj+5,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+102,jvj+103)*/
if((x[jvj+103]!=41)) goto l44;
x[jvj+104]=vo[16];z[jvj+104]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[1948])( );if(v[102]) goto l44;     /*FNDOND0(498,jvj+104,jvj+105)*/
pile[v[22]]=1182; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(1182,jvj+105,jvj+106)*/
if((68!=x[jvj+106])) goto l44;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+86; pile[WZ3]=jvj+107; 
(*f[45])( );if(v[102]) goto l44;     /*FNDZ0(jvj+5,jvj+86,V439,jvj+107)*/
V439=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=1569; 
(*f[207])( );     /*PLUE2(EXEXEX,1569)*/
l44:x[jvj+85]=t[x[jvj+85]];
goto l43;
l49:x[jvj+114]=s[x[jvj+140]] ;z[jvj+114]=(x[jvj+114]<=sepcte) ? x[jvj+114] : z[jvj+140];
if((V399==x[jvj+114])) goto l50;
pile[v[22]]=100; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+114,jvj+115)*/
if((x[jvj+115]!=41)) goto l50;
pile[v[22]]=EXEXEX; pile[WZ1]=1518; 
(*f[207])( );     /*PLUE2(EXEXEX,1518)*/
pile[WZ1]=1521; 
(*f[207])( );     /*PLUE2(EXEXEX,1521)*/
l50:x[jvj+140]=t[x[jvj+140]];
goto l48;
l51:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+5,jvj+116)*/
if((x[jvj+116]!=22)) goto l61;
pile[v[22]]=102; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(102,jvj+5,jvj+117)*/
pile[v[22]]=111; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+117,jvj+118)*/
pile[v[22]]=101; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+118,jvj+119)*/
if((x[jvj+119]!=486)) goto l61;
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(103,jvj+5,jvj+120)*/
pile[v[22]]=111; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,jvj+120,jvj+121)*/
pile[v[22]]=101; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+121,jvj+122)*/
if((x[jvj+122]!=486)) goto l61;
pile[v[22]]=107; pile[WZ1]=jvj+117; pile[WZ2]=jvj+123; 
(*f[33])( );     /*FNDE0(107,jvj+117,jvj+123)*/
for(i=x[jvj+123],V188=0;i>0;i=t[i],V188++)  ;
if((V188!=2)) goto l61;
pile[WZ1]=jvj+120; pile[WZ2]=jvj+124; 
(*f[33])( );     /*FNDE0(107,jvj+120,jvj+124)*/
for(i=x[jvj+124],V200=0;i>0;i=t[i],V200++)  ;
if((V200!=2)) goto l61;
pile[v[22]]=1940; pile[WZ1]=145; pile[WZ2]=jvj+125; 
(*f[33])( );     /*FNDE0(1940,145,jvj+125)*/
for(a=x[jvj+125];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l53;
l61:v[0]=jvj; v[22]-=2; return;
l53:V460=x[jvj+123];
l52:if((V460<=0)) goto l61;
V176=s[V460];
x[jvj+141]=x[jvj+123] ;z[jvj+141]=z[jvj+123];
l54:if((x[jvj+141]>0)) goto l55;
V460=t[V460];
goto l52;
l55:x[jvj+126]=s[x[jvj+141]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+141];
if((V176==x[jvj+126])) goto l56;
pile[v[22]]=100; pile[WZ1]=jvj+126; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+126,jvj+127)*/
if((x[jvj+127]!=484)) goto l56;
V462=x[jvj+124];
l57:if((V462<=0)) goto l56;
V178=s[V462];
V463=x[jvj+124];
l58:if((V463>0)) goto l59;
V462=t[V462];
goto l57;
l56:x[jvj+141]=t[x[jvj+141]];
goto l54;
l59:V179=s[V463];
if((V178==V179)) goto l60;
pile[v[22]]=EXEXEX; pile[WZ1]=1857; 
(*f[207])( );     /*PLUE2(EXEXEX,1857)*/
l60:V463=t[V463];
goto l58;
}
