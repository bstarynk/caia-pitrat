#include "dx.h"
void Z48Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V436=0,V495=0,V442=0,V493=0,V348=0,V342=0,V431=0,V282=0,V515=0,V505=0,V507=0,V521=0,V523=0,V242=0,V511=0,V513=0,V91=0,V368=0,V525=0,V527=0,V219=0,V509=0,V212=0,V549=0,V42=0,V537=0,V539=0,V533=0,V535=0,V148=0,V147=0,V158=0,V157=0,V410=0,V108=0,V199=0,J=0,V124=0,V144=0,V263=0,V336=0,V470=0,V414=0,V260=0;
int EXEXEX,RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=129;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[RRRT] ;z[jvj+1]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,jvj+1,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==25)) goto l3;
if((x[jvj+7]==770)) goto l50;
if((x[jvj+7]==408)) goto l51;
if((x[jvj+7]==1280)) goto l57;
if((x[jvj+7]==55)) goto l59;
if((x[jvj+7]!=625)) goto l66;
pile[v[22]]=160; pile[WZ1]=jvj+1; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(160,jvj+1,jvj+127)*/
pile[v[22]]=130; pile[WZ1]=jvj+127; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+127,V260)*/
V260=pile[WZ2]; 
pile[v[22]]=1300; pile[WZ1]=jvj+1; pile[WZ2]=jvj+128; 
(*f[33])( );     /*FNDE0(1300,jvj+1,jvj+128)*/
for(a=x[jvj+128];a>0;a=t[a]) if(s[a]==596) goto l65;
l66:v[0]=jvj; v[22]-=2; return;
l3:pile[v[22]]=869; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(869,jvj+1,jvj+8)*/
if((x[jvj+8]!=769)) goto l7;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,jvj+1,V436)*/
V436=pile[WZ2]; 
if((V436>3)) goto l5;
pile[v[22]]=EXEXEX; pile[WZ1]=340; 
(*f[207])( );     /*PLUE2(EXEXEX,340)*/
l5:x[jvj+9]=d[20];z[jvj+9]=0;
l4:if((x[jvj+9]<=0)) goto l7;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+10,jvj+1,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=484)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+10,jvj+13)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+13; pile[WZ3]=jvj+14; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+1,jvj+13,V495,jvj+14)*/
V495=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=228; 
(*f[207])( );     /*PLUE2(EXEXEX,228)*/
l6:x[jvj+9]=t[x[jvj+9]];
goto l4;
l7:pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(870,jvj+1,V442)*/
V442=pile[WZ2]; 
if((V442==1)) goto l8;
if((V442==2)) goto l13;
if((V442<=1)) goto l25;
if((V442<=4)) goto l15;
l18:x[jvj+28]=d[20];z[jvj+28]=0;
l16:if((x[jvj+28]>0)) goto l17;
if((V442<2)) goto l25;
if((V442>=8)) goto l22;
x[jvj+33]=vo[16];z[jvj+33]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(498,jvj+33,jvj+34)*/
pile[v[22]]=1182; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1182,jvj+34,jvj+35)*/
if((68!=x[jvj+35])) goto l22;
x[jvj+36]=d[20];z[jvj+36]=0;
l20:if((x[jvj+36]<=0)) goto l22;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+37; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l21;     /*FNDZ0(jvj+1,jvj+37,V505,jvj+38)*/
V505=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(268,jvj+37,jvj+39)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+39; pile[WZ3]=jvj+40; 
(*f[45])( );if(v[102]) goto l21;     /*FNDZ0(jvj+1,jvj+39,V507,jvj+40)*/
V507=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=735; 
(*f[207])( );     /*PLUE2(EXEXEX,735)*/
l21:x[jvj+36]=t[x[jvj+36]];
goto l20;
l8:pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1358,jvj+1,jvj+15)*/
if((x[jvj+15]!=68)) goto l11;
pile[v[22]]=EXEXEX; pile[WZ1]=393; 
(*f[207])( );     /*PLUE2(EXEXEX,393)*/
pile[v[22]]=1188; pile[WZ1]=jvj+1; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1188,jvj+1,jvj+16)*/
if((x[jvj+16]!=68)) goto l11;
x[jvj+17]=d[20];z[jvj+17]=0;
l9:if((x[jvj+17]<=0)) goto l11;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+18,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+1; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+19,jvj+1,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[887])( );     /*VARND0(jvj+20,jvj+21)*/
if((x[jvj+21]!=0)) goto l10;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+18; pile[WZ3]=jvj+22; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+1,jvj+18,V493,jvj+22)*/
V493=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=636; 
(*f[207])( );     /*PLUE2(EXEXEX,636)*/
l10:x[jvj+17]=t[x[jvj+17]];
goto l9;
l11:pile[v[22]]=1101; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1101,jvj+1,V348)*/
V348=pile[WZ2]; 
if((V348<=2)) goto l25;
pile[v[22]]=1294; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1294,jvj+1,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==1327) goto l12;
l25:x[jvj+49]=vo[16];z[jvj+49]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(498,jvj+49,jvj+50)*/
pile[v[22]]=1182; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1182,jvj+50,jvj+51)*/
if((68!=x[jvj+51])) goto l28;
pile[v[22]]=1101; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(1101,jvj+1,V242)*/
V242=pile[WZ2]; 
if((V242<2)) goto l28;
x[jvj+52]=d[20];z[jvj+52]=0;
l26:if((x[jvj+52]<=0)) goto l28;
x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+53; pile[WZ3]=jvj+54; 
(*f[45])( );if(v[102]) goto l27;     /*FNDZ0(jvj+1,jvj+53,V511,jvj+54)*/
V511=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(268,jvj+53,jvj+55)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+55; pile[WZ3]=jvj+56; 
(*f[45])( );if(v[102]) goto l27;     /*FNDZ0(jvj+1,jvj+55,V513,jvj+56)*/
V513=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=586; 
(*f[207])( );     /*PLUE2(EXEXEX,586)*/
l27:x[jvj+52]=t[x[jvj+52]];
goto l26;
l12:pile[v[22]]=EXEXEX; pile[WZ1]=711; 
(*f[207])( );     /*PLUE2(EXEXEX,711)*/
goto l25;
l13:pile[v[22]]=1101; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1101,jvj+1,V342)*/
V342=pile[WZ2]; 
if((V342!=2)) goto l2;
pile[v[22]]=1105; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1105,jvj+1,jvj+24)*/
if((x[jvj+24]!=68)) goto l2;
pile[v[22]]=EXEXEX; pile[WZ1]=552; 
(*f[207])( );     /*PLUE2(EXEXEX,552)*/
l2:pile[v[22]]=869; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(869,jvj+1,jvj+5)*/
if((x[jvj+5]==769)) goto l15;
l14:pile[v[22]]=EXEXEX; pile[WZ1]=294; 
(*f[207])( );     /*PLUE2(EXEXEX,294)*/
l15:pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1358,jvj+1,jvj+25)*/
if((x[jvj+25]!=68)) goto l18;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1101,jvj+1,V431)*/
V431=pile[WZ2]; 
if((V431<=1)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+1,jvj+26)*/
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+1,jvj+27)*/
pile[v[22]]=EXEXEX; pile[WZ1]=372; 
(*f[207])( );     /*PLUE2(EXEXEX,372)*/
goto l18;
l17:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+29,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+1; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+30,jvj+1,jvj+31)*/
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+31,V282)*/
V282=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+29; pile[WZ3]=jvj+32; 
(*f[45])( );if(v[102]) goto l19;     /*FNDZ0(jvj+1,jvj+29,V515,jvj+32)*/
V515=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=366; 
(*f[207])( );     /*PLUE2(EXEXEX,366)*/
l19:x[jvj+28]=t[x[jvj+28]];
goto l16;
l22:x[jvj+41]=vo[16];z[jvj+41]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(498,jvj+41,jvj+42)*/
pile[v[22]]=1182; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1182,jvj+42,jvj+43)*/
if((68!=x[jvj+43])) goto l25;
x[jvj+44]=d[20];z[jvj+44]=0;
l23:if((x[jvj+44]<=0)) goto l25;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+45; pile[WZ3]=jvj+46; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+1,jvj+45,V521,jvj+46)*/
V521=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+45,jvj+47)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+47; pile[WZ3]=jvj+48; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+1,jvj+47,V523,jvj+48)*/
V523=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=399; 
(*f[207])( );     /*PLUE2(EXEXEX,399)*/
l24:x[jvj+44]=t[x[jvj+44]];
goto l23;
l28:if((V442>5)) goto l32;
pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1358,jvj+1,jvj+57)*/
if((x[jvj+57]!=68)) goto l32;
pile[v[22]]=1569; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1569,jvj+1,jvj+4)*/
if((x[jvj+4]==67)) goto l32;
l29:pile[v[22]]=EXEXEX; pile[WZ1]=642; 
(*f[207])( );     /*PLUE2(EXEXEX,642)*/
l32:x[jvj+58]=d[20];z[jvj+58]=0;
l30:if((x[jvj+58]>0)) goto l31;
x[jvj+96]=vo[16];z[jvj+96]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(498,jvj+96,jvj+97)*/
pile[v[22]]=1182; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(1182,jvj+97,jvj+98)*/
if((68!=x[jvj+98])) goto l66;
pile[v[22]]=869; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(869,jvj+1,jvj+2)*/
if((x[jvj+2]==769)) goto l1;
l48:pile[v[22]]=929; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(929,jvj+1,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=jvj+1; 
(*f[981])( );if(v[102]) goto l1;     /*CPTVAR0(jvj+1,V147)*/
V147=pile[WZ1]; 
if((V147>6)) goto l1;
pile[v[22]]=EXEXEX; pile[WZ1]=333; 
(*f[207])( );     /*PLUE2(EXEXEX,333)*/
l1:pile[v[22]]=869; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(869,jvj+1,jvj+3)*/
if((x[jvj+3]==769)) goto l66;
l49:pile[v[22]]=929; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(929,jvj+1,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=jvj+1; 
(*f[981])( );if(v[102]) goto l66;     /*CPTVAR0(jvj+1,V157)*/
V157=pile[WZ1]; 
if((V157>6)) goto l66;
pile[v[22]]=EXEXEX; pile[WZ1]=334; 
(*f[207])( );     /*PLUE2(EXEXEX,334)*/
goto l66;
l31:x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+1; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+59,jvj+1,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=484)) goto l34;
pile[v[22]]=268; pile[WZ1]=jvj+59; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+59,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+1; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+62,jvj+1,jvj+63)*/
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+63,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=318; 
(*f[207])( );     /*PLUE2(EXEXEX,318)*/
l34:pile[v[22]]=111; pile[WZ1]=jvj+60; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+60,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]!=636)) goto l37;
pile[v[22]]=268; pile[WZ1]=jvj+59; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(268,jvj+59,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+1; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(jvj+66,jvj+1,jvj+67)*/
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l37;     /*FNDC0(130,jvj+67,V368)*/
V368=pile[WZ2]; 
if((V368!=1)) goto l37;
x[jvj+68]=d[20];z[jvj+68]=0;
l35:if((x[jvj+68]<=0)) goto l37;
x[jvj+69]=s[x[jvj+68]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+68];
pile[v[22]]=jvj+60; pile[WZ1]=jvj+69; pile[WZ3]=jvj+70; 
(*f[45])( );if(v[102]) goto l36;     /*FNDZ0(jvj+60,jvj+69,V525,jvj+70)*/
V525=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(268,jvj+69,jvj+71)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+71; pile[WZ3]=jvj+72; 
(*f[45])( );if(v[102]) goto l36;     /*FNDZ0(jvj+60,jvj+71,V527,jvj+72)*/
V527=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=136; 
(*f[207])( );     /*PLUE2(EXEXEX,136)*/
pile[WZ1]=148; 
(*f[207])( );     /*PLUE2(EXEXEX,148)*/
l36:x[jvj+68]=t[x[jvj+68]];
goto l35;
l37:pile[v[22]]=268; pile[WZ1]=jvj+59; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+59,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+1; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(jvj+73,jvj+1,jvj+74)*/
pile[v[22]]=111; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+74,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+76]!=485)) goto l44;
pile[v[22]]=107; pile[WZ1]=jvj+74; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,jvj+74,jvj+77)*/
for(i=x[jvj+77],V219=0;i>0;i=t[i],V219++)  ;
if((V219!=2)) goto l44;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+59; pile[WZ3]=jvj+78; 
(*f[45])( );if(v[102]) goto l44;     /*FNDZ0(jvj+1,jvj+59,V509,jvj+78)*/
V509=pile[WZ2]; 
V549=x[jvj+77];
l38:if((V549<=0)) goto l44;
V212=s[V549];
x[jvj+129]=x[jvj+77] ;z[jvj+129]=z[jvj+77];
l39:if((x[jvj+129]>0)) goto l40;
V549=t[V549];
goto l38;
l40:x[jvj+81]=s[x[jvj+129]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+129];
if((V212==x[jvj+81])) goto l41;
x[jvj+79]=x[jvj+81] ;z[jvj+79]=z[jvj+81];
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[1353])( );     /*POSOUNUL0(jvj+79,jvj+80)*/
if((x[jvj+80]==135)) goto l42;
l43:pile[v[22]]=130; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+81,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=306; 
(*f[207])( );     /*PLUE2(EXEXEX,306)*/
pile[WZ1]=307; 
(*f[207])( );     /*PLUE2(EXEXEX,307)*/
l41:x[jvj+129]=t[x[jvj+129]];
goto l39;
l42:pile[v[22]]=EXEXEX; pile[WZ1]=303; 
(*f[207])( );     /*PLUE2(EXEXEX,303)*/
goto l43;
l44:pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1358,jvj+1,jvj+82)*/
if((x[jvj+82]!=68)) goto l45;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+59; pile[WZ3]=jvj+83; 
(*f[45])( );if(v[102]) goto l45;     /*FNDZ0(jvj+1,jvj+59,V537,jvj+83)*/
V537=pile[WZ2]; 
pile[WZ1]=jvj+73; pile[WZ3]=jvj+84; 
(*f[45])( );if(v[102]) goto l45;     /*FNDZ0(jvj+1,jvj+73,V539,jvj+84)*/
V539=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=529; 
(*f[207])( );     /*PLUE2(EXEXEX,529)*/
l45:pile[v[22]]=jvj+1; pile[WZ1]=jvj+59; pile[WZ3]=jvj+85; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+1,jvj+59,V533,jvj+85)*/
V533=pile[WZ2]; 
pile[WZ1]=jvj+73; pile[WZ3]=jvj+86; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+1,jvj+73,V535,jvj+86)*/
V535=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=jvj+1; pile[WZ2]=jvj+87; 
(*f[33])( );     /*FNDE0(1294,jvj+1,jvj+87)*/
for(a=x[jvj+87];a>0;a=t[a]) if(s[a]==1483) goto l46;
l47:x[jvj+92]=vo[16];z[jvj+92]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+92; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(498,jvj+92,jvj+93)*/
pile[v[22]]=1182; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(1182,jvj+93,jvj+94)*/
if((68!=x[jvj+94])) goto l33;
pile[v[22]]=1300; pile[WZ1]=jvj+1; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(1300,jvj+1,jvj+95)*/
for(a=x[jvj+95];a>0;a=t[a]) if(s[a]==636) goto l33;
pile[v[22]]=EXEXEX; pile[WZ1]=336; 
(*f[207])( );     /*PLUE2(EXEXEX,336)*/
l33:x[jvj+58]=t[x[jvj+58]];
goto l30;
l46:pile[v[22]]=EXEXEX; pile[WZ1]=505; 
(*f[207])( );     /*PLUE2(EXEXEX,505)*/
x[jvj+88]=vo[16];z[jvj+88]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(1353,jvj+88,jvj+89)*/
if((x[jvj+89]!=68)) goto l47;
pile[v[22]]=498; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(498,jvj+88,jvj+90)*/
pile[v[22]]=1182; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(1182,jvj+90,jvj+91)*/
if((68!=x[jvj+91])) goto l47;
pile[v[22]]=EXEXEX; pile[WZ1]=484; 
(*f[207])( );     /*PLUE2(EXEXEX,484)*/
goto l47;
l50:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,jvj+1,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(100,jvj+99,jvj+100)*/
if((x[jvj+100]!=484)) goto l66;
x[jvj+101]=vo[16];z[jvj+101]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(498,jvj+101,jvj+102)*/
pile[v[22]]=1182; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(1182,jvj+102,jvj+103)*/
if((68!=x[jvj+103])) goto l66;
pile[v[22]]=EXEXEX; pile[WZ1]=417; 
(*f[207])( );     /*PLUE2(EXEXEX,417)*/
goto l66;
l51:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,jvj+1,jvj+104)*/
pile[v[22]]=130; pile[WZ1]=jvj+104; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(130,jvj+104,V410)*/
V410=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(103,jvj+1,jvj+105)*/
pile[v[22]]=EXEXEX; pile[WZ1]=477; 
(*f[207])( );     /*PLUE2(EXEXEX,477)*/
l52:pile[v[22]]=100; pile[WZ1]=jvj+104; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+104,jvj+106)*/
if((x[jvj+106]!=484)) goto l54;
x[jvj+107]=vo[16];z[jvj+107]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(498,jvj+107,jvj+108)*/
pile[v[22]]=1182; pile[WZ1]=jvj+108; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1182,jvj+108,jvj+109)*/
if((68!=x[jvj+109])) goto l53;
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,jvj+1,jvj+110)*/
pile[v[22]]=EXEXEX; pile[WZ1]=309; 
(*f[207])( );     /*PLUE2(EXEXEX,309)*/
l53:pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(103,jvj+1,jvj+111)*/
pile[v[22]]=130; pile[WZ1]=jvj+111; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+111,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=441; 
(*f[207])( );     /*PLUE2(EXEXEX,441)*/
l54:pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(870,jvj+1,V199)*/
V199=pile[WZ2]; 
if((V199!=1)) goto l55;
pile[v[22]]=103; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(103,jvj+1,jvj+112)*/
pile[v[22]]=130; pile[WZ1]=jvj+112; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+112,J)*/
J=pile[WZ2]; 
if((J==0)) goto l55;
pile[v[22]]=EXEXEX; pile[WZ1]=315; 
(*f[207])( );     /*PLUE2(EXEXEX,315)*/
l55:pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(103,jvj+1,jvj+113)*/
pile[v[22]]=111; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(111,jvj+113,jvj+114)*/
pile[v[22]]=101; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(101,jvj+114,jvj+115)*/
if((x[jvj+115]!=486)) goto l66;
pile[v[22]]=107; pile[WZ1]=jvj+113; pile[WZ2]=jvj+116; 
(*f[33])( );     /*FNDE0(107,jvj+113,jvj+116)*/
l56:if((x[jvj+116]<=0)) goto l66;
V124=s[x[jvj+116]];
pile[v[22]]=EXEXEX; pile[WZ1]=147; 
(*f[207])( );     /*PLUE2(EXEXEX,147)*/
x[jvj+116]=t[x[jvj+116]];
goto l56;
l57:pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(103,jvj+1,jvj+117)*/
pile[v[22]]=130; pile[WZ1]=jvj+117; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+117,V144)*/
V144=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(102,jvj+1,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+118,jvj+119)*/
if((x[jvj+119]!=484)) goto l58;
pile[v[22]]=EXEXEX; pile[WZ1]=715; 
(*f[207])( );     /*PLUE2(EXEXEX,715)*/
l58:if((V144!=2)) goto l66;
pile[v[22]]=160; pile[WZ1]=jvj+1; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(160,jvj+1,jvj+120)*/
pile[v[22]]=130; pile[WZ1]=jvj+120; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+120,V263)*/
V263=pile[WZ2]; 
if((V263<=0)) goto l66;
pile[v[22]]=EXEXEX; pile[WZ1]=426; 
(*f[207])( );     /*PLUE2(EXEXEX,426)*/
goto l66;
l59:pile[v[22]]=1232; pile[WZ1]=jvj+1; pile[WZ2]=jvj+121; 
(*f[33])( );     /*FNDE0(1232,jvj+1,jvj+121)*/
if((x[jvj+121]==0)) goto l60;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+122; 
(*f[887])( );     /*VARND0(jvj+1,jvj+122)*/
for(i=x[jvj+122],V336=0;i>0;i=t[i],V336++)  ;
if((V336<=1)) goto l60;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+123; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+123)*/
pile[v[22]]=EXEXEX; pile[WZ1]=732; 
(*f[207])( );     /*PLUE2(EXEXEX,732)*/
l60:for(i=x[jvj+121],V470=0;i>0;i=t[i],V470++)  ;
if((V470<=1)) goto l61;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+124; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+124)*/
pile[v[22]]=EXEXEX; pile[WZ1]=693; 
(*f[207])( );     /*PLUE2(EXEXEX,693)*/
pile[WZ1]=696; 
(*f[207])( );     /*PLUE2(EXEXEX,696)*/
l61:pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+125; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+125)*/
pile[v[22]]=1294; pile[WZ2]=jvj+126; 
(*f[33])( );     /*FNDE0(1294,jvj+1,jvj+126)*/
for(a=x[jvj+126];a>0;a=t[a]) if(s[a]==1311) goto l62;
l63:pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(870,jvj+1,V414)*/
V414=pile[WZ2]; 
if((V414!=1)) goto l66;
for(a=x[jvj+126];a>0;a=t[a]) if(s[a]==1598) goto l64;
goto l66;
l62:pile[v[22]]=EXEXEX; pile[WZ1]=420; 
(*f[207])( );     /*PLUE2(EXEXEX,420)*/
pile[WZ1]=424; 
(*f[207])( );     /*PLUE2(EXEXEX,424)*/
goto l63;
l64:pile[v[22]]=EXEXEX; pile[WZ1]=699; 
(*f[207])( );     /*PLUE2(EXEXEX,699)*/
goto l66;
l65:pile[v[22]]=EXEXEX; pile[WZ1]=684; 
(*f[207])( );     /*PLUE2(EXEXEX,684)*/
goto l66;
}
