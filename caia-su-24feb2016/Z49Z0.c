#include "dx.h"
void Z49Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V446=0,V436=0,V351=0,V342=0,II=0,V275=0,V284=0,V58=0,V428=0,V375=0,V354=0,V456=0,V512=0,V457=0,V513=0,V35=0,V43=0,I=0,V312=0,V246=0,V253=0,V328=0,V217=0,V213=0,V224=0,V85=0,V87=0,V160=0,V149=0,V522=0,V133=0,V108=0,V523=0,V109=0,V524=0,V110=0,V525=0,V188=0,V177=0,V527=0;
int EXEXEX,RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=164;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=x[RRRT] ;z[jvj+29]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]==1280)) goto l16;
if((x[jvj+31]==625)) goto l19;
if((x[jvj+31]==408)) goto l26;
if((x[jvj+31]!=25)) goto l43;
x[jvj+64]=vo[16];z[jvj+64]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(498,jvj+64,jvj+65)*/
pile[v[22]]=1182; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(1182,jvj+65,jvj+66)*/
if((68!=x[jvj+66])) goto l30;
x[jvj+67]=d[20];z[jvj+67]=0;
l27:if((x[jvj+67]<=0)) goto l30;
x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=268; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(268,jvj+68,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+29; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+69,jvj+29,jvj+70)*/
pile[v[22]]=111; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+70,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+71,jvj+72)*/
if((x[jvj+72]!=63)) goto l28;
pile[v[22]]=102; pile[WZ1]=jvj+70; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+70,jvj+73)*/
pile[v[22]]=130; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+73,V375)*/
V375=pile[WZ2]; 
V354=V375;
if((V354<0)) goto l28;
pile[v[22]]=jvj+68; pile[WZ1]=jvj+29; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(jvj+68,jvj+29,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+74,jvj+75)*/
if((x[jvj+75]!=484)) goto l28;
pile[v[22]]=103; pile[WZ1]=jvj+70; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+70,jvj+76)*/
pile[v[22]]=EXEXEX; pile[WZ1]=555; 
(*f[207])( );     /*PLUE2(EXEXEX,555)*/
l28:x[jvj+67]=t[x[jvj+67]];
goto l27;
l1:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+4)*/
x[jvj+152]=x[jvj+4] ;z[jvj+152]=z[jvj+4];
l2:if((x[jvj+152]<=0)) goto l4;
x[jvj+5]=s[x[jvj+152]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+152];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]==484)) goto l36;
l3:x[jvj+152]=t[x[jvj+152]];
goto l2;
l4:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+1,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=486)) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+9)*/
x[jvj+153]=x[jvj+9] ;z[jvj+153]=z[jvj+9];
l5:if((x[jvj+153]<=0)) goto l31;
x[jvj+10]=s[x[jvj+153]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+153];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]==41)) goto l36;
l6:x[jvj+153]=t[x[jvj+153]];
goto l5;
l7:pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=486)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
x[jvj+154]=x[jvj+15] ;z[jvj+154]=z[jvj+15];
l8:if((x[jvj+154]<=0)) goto l10;
x[jvj+16]=s[x[jvj+154]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+154];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]==484)) goto l41;
l9:x[jvj+154]=t[x[jvj+154]];
goto l8;
l10:pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+12,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=486)) goto l39;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+20)*/
x[jvj+155]=x[jvj+20] ;z[jvj+155]=z[jvj+20];
l11:if((x[jvj+155]<=0)) goto l39;
x[jvj+21]=s[x[jvj+155]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+155];
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]==41)) goto l41;
l12:x[jvj+155]=t[x[jvj+155]];
goto l11;
l14:if((V436<0)) goto l18;
l43:if(x[jvj+31]!=29&&x[jvj+31]!=30) goto l58;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+29,jvj+96)*/
if((x[jvj+96]!=22)) goto l58;
pile[v[22]]=103; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+29,jvj+97)*/
pile[v[22]]=130; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+97,V312)*/
V312=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+29,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+98,jvj+99)*/
if((x[jvj+99]!=484)) goto l44;
x[jvj+100]=vo[16];z[jvj+100]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(498,jvj+100,jvj+101)*/
pile[v[22]]=1182; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(1182,jvj+101,jvj+102)*/
if((68!=x[jvj+102])) goto l44;
pile[v[22]]=EXEXEX; pile[WZ1]=348; 
(*f[207])( );     /*PLUE2(EXEXEX,348)*/
l44:if((V312!=0)) goto l49;
pile[v[22]]=111; pile[WZ1]=jvj+98; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+98,jvj+103)*/
pile[v[22]]=101; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+103,jvj+104)*/
if((x[jvj+104]!=485)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+98; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(107,jvj+98,jvj+105)*/
for(i=x[jvj+105],V246=0;i>0;i=t[i],V246++)  ;
if((V246!=2)) goto l49;
x[jvj+106]=vo[16];z[jvj+106]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(498,jvj+106,jvj+107)*/
pile[v[22]]=1182; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(1182,jvj+107,jvj+108)*/
if((68!=x[jvj+108])) goto l49;
x[jvj+158]=x[jvj+105] ;z[jvj+158]=z[jvj+105];
l45:if((x[jvj+158]<=0)) goto l49;
x[jvj+109]=s[x[jvj+158]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+158];
pile[v[22]]=100; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+109,jvj+110)*/
if((x[jvj+110]!=484)) goto l46;
x[jvj+159]=x[jvj+105] ;z[jvj+159]=z[jvj+105];
l47:if((x[jvj+159]<=0)) goto l46;
x[jvj+111]=s[x[jvj+159]] ;z[jvj+111]=(x[jvj+111]<=sepcte) ? x[jvj+111] : z[jvj+159];
if((x[jvj+109]==x[jvj+111])) goto l48;
pile[v[22]]=130; pile[WZ1]=jvj+111; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+111,V253)*/
V253=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=519; 
(*f[207])( );     /*PLUE2(EXEXEX,519)*/
l48:x[jvj+159]=t[x[jvj+159]];
goto l47;
l15:if((V85>=0)) goto l56;
l58:if(x[jvj+31]!=29&&x[jvj+31]!=30&&x[jvj+31]!=25) goto l75;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(100,jvj+29,jvj+129)*/
if((x[jvj+129]!=22)) goto l75;
pile[v[22]]=102; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(102,jvj+29,jvj+130)*/
pile[v[22]]=111; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,jvj+130,jvj+131)*/
pile[v[22]]=101; pile[WZ1]=jvj+131; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+131,jvj+132)*/
if((x[jvj+132]!=486)) goto l70;
pile[v[22]]=107; pile[WZ1]=jvj+130; pile[WZ2]=jvj+133; 
(*f[33])( );     /*FNDE0(107,jvj+130,jvj+133)*/
for(i=x[jvj+133],V160=0;i>0;i=t[i],V160++)  ;
if((V160!=2)) goto l70;
x[jvj+134]=vo[16];z[jvj+134]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(498,jvj+134,jvj+135)*/
pile[v[22]]=1182; pile[WZ1]=jvj+135; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(1182,jvj+135,jvj+136)*/
if((68!=x[jvj+136])) goto l70;
pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(103,jvj+29,jvj+137)*/
x[jvj+162]=x[jvj+133] ;z[jvj+162]=z[jvj+133];
l59:if((x[jvj+162]<=0)) goto l70;
x[jvj+138]=s[x[jvj+162]] ;z[jvj+138]=(x[jvj+138]<=sepcte) ? x[jvj+138] : z[jvj+162];
pile[v[22]]=100; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(100,jvj+138,jvj+139)*/
if((x[jvj+139]!=484)) goto l63;
V522=x[jvj+133];
l61:if((V522<=0)) goto l63;
V149=s[V522];
if((x[jvj+138]==V149)) goto l62;
pile[v[22]]=EXEXEX; pile[WZ1]=375; 
(*f[207])( );     /*PLUE2(EXEXEX,375)*/
l62:V522=t[V522];
goto l61;
l16:pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,jvj+29,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+32,V446)*/
V446=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(160,jvj+29,jvj+33)*/
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+33,V436)*/
V436=pile[WZ2]; 
if((V436==0)) goto l43;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+29,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=484)) goto l17;
pile[v[22]]=EXEXEX; pile[WZ1]=654; 
(*f[207])( );     /*PLUE2(EXEXEX,654)*/
l17:if((V436==999)) goto l43;
if((V446==2)) goto l14;
if((V446>2)) goto l18;
goto l43;
l18:pile[v[22]]=EXEXEX; pile[WZ1]=432; 
(*f[207])( );     /*PLUE2(EXEXEX,432)*/
goto l43;
l19:pile[v[22]]=160; pile[WZ1]=jvj+29; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(160,jvj+29,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+36,V351)*/
V351=pile[WZ2]; 
x[jvj+37]=d[20];z[jvj+37]=0;
l20:if((x[jvj+37]>0)) goto l21;
pile[v[22]]=870; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(870,jvj+29,V58)*/
V58=pile[WZ2]; 
if((V58!=1)) goto l43;
pile[v[22]]=1300; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(1300,jvj+29,jvj+53)*/
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==63) goto l43;
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==596) goto l43;
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+29,jvj+23)*/
pile[v[22]]=103; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,jvj+29,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l13;
pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]==41)) goto l43;
l13:pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+25,jvj+27)*/
if((x[jvj+27]!=484)) goto l25;
pile[WZ1]=jvj+23; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+23,jvj+28)*/
if((x[jvj+28]==41)) goto l43;
l25:pile[v[22]]=EXEXEX; pile[WZ1]=546; 
(*f[207])( );     /*PLUE2(EXEXEX,546)*/
goto l43;
l21:x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+29; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+38,jvj+29,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=484)) goto l24;
pile[v[22]]=268; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+38,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+29; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+41,jvj+29,jvj+42)*/
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+42,V342)*/
V342=pile[WZ2]; 
II=V342;
if((II==0)) goto l23;
pile[v[22]]=EXEXEX; pile[WZ1]=630; 
(*f[207])( );     /*PLUE2(EXEXEX,630)*/
l23:pile[v[22]]=EXEXEX; pile[WZ1]=504; 
(*f[207])( );     /*PLUE2(EXEXEX,504)*/
x[jvj+43]=vo[16];z[jvj+43]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(498,jvj+43,jvj+44)*/
pile[v[22]]=1182; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(1182,jvj+44,jvj+45)*/
if((68!=x[jvj+45])) goto l24;
pile[v[22]]=EXEXEX; pile[WZ1]=507; 
(*f[207])( );     /*PLUE2(EXEXEX,507)*/
l24:pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+39,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=596)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+39,jvj+48)*/
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+48,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+39; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+39,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=484)) goto l22;
pile[v[22]]=268; pile[WZ1]=jvj+38; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+38,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+29; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+51,jvj+29,jvj+52)*/
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+52,V284)*/
V284=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=666; 
(*f[207])( );     /*PLUE2(EXEXEX,666)*/
l22:x[jvj+37]=t[x[jvj+37]];
goto l20;
l26:pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+29,jvj+54)*/
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=596)) goto l43;
pile[v[22]]=102; pile[WZ1]=jvj+54; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+54,jvj+57)*/
pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+57,V428)*/
V428=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+54; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,jvj+54,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+58,jvj+59)*/
if((x[jvj+59]!=484)) goto l43;
x[jvj+60]=vo[16];z[jvj+60]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(498,jvj+60,jvj+61)*/
pile[v[22]]=1182; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(1182,jvj+61,jvj+62)*/
if((68!=x[jvj+62])) goto l43;
pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(103,jvj+29,jvj+63)*/
pile[v[22]]=EXEXEX; pile[WZ1]=690; 
(*f[207])( );     /*PLUE2(EXEXEX,690)*/
goto l43;
l30:x[jvj+77]=d[20];z[jvj+77]=0;
l29:if((x[jvj+77]<=0)) goto l43;
x[jvj+78]=s[x[jvj+77]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+77];
pile[v[22]]=jvj+78; pile[WZ1]=jvj+29; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+78,jvj+29,jvj+1)*/
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+1,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]!=486)) goto l35;
pile[v[22]]=268; pile[WZ1]=jvj+78; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(268,jvj+78,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+29; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+81,jvj+29,jvj+82)*/
pile[v[22]]=111; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+82,jvj+83)*/
pile[v[22]]=101; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+83,jvj+84)*/
if((x[jvj+84]!=486)) goto l35;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+85)*/
pile[WZ1]=jvj+82; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(107,jvj+82,jvj+86)*/
V512=x[jvj+85];
l32:if((V512<=0)) goto l35;
V456=s[V512];
V513=x[jvj+86];
l33:if((V513>0)) goto l34;
V512=t[V512];
goto l32;
l34:V457=s[V513];
pile[v[22]]=EXEXEX; pile[WZ1]=135; 
(*f[207])( );     /*PLUE2(EXEXEX,135)*/
V513=t[V513];
goto l33;
l35:pile[v[22]]=268; pile[WZ1]=jvj+78; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(268,jvj+78,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+29; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+87,jvj+29,jvj+88)*/
pile[v[22]]=111; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+88,jvj+89)*/
pile[v[22]]=101; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+89,jvj+90)*/
if((x[jvj+90]!=485)) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+88; pile[WZ2]=jvj+91; 
(*f[33])( );     /*FNDE0(107,jvj+88,jvj+91)*/
for(i=x[jvj+91],V35=0;i>0;i=t[i],V35++)  ;
if((V35!=2)) goto l31;
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+1,jvj+92)*/
if((x[jvj+92]==484)) goto l36;
if((x[jvj+92]==22)) goto l1;
if((x[jvj+92]==22)) goto l4;
l31:x[jvj+77]=t[x[jvj+77]];
goto l29;
l36:pile[v[22]]=jvj+1; pile[WZ1]=jvj+93; 
(*f[1446])( );     /*NONUL0(jvj+1,jvj+93)*/
if((x[jvj+93]==135)) goto l38;
goto l31;
l38:x[jvj+164]=x[jvj+91] ;z[jvj+164]=z[jvj+91];
l37:if((x[jvj+164]<=0)) goto l31;
x[jvj+156]=s[x[jvj+164]] ;z[jvj+156]=(x[jvj+156]<=sepcte) ? x[jvj+156] : z[jvj+164];
x[jvj+12]=x[jvj+156] ;z[jvj+12]=z[jvj+156];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(100,jvj+12,jvj+94)*/
if((x[jvj+94]==484)) goto l41;
if((x[jvj+94]==22)) goto l7;
if((x[jvj+94]==22)) goto l10;
l39:x[jvj+164]=t[x[jvj+164]];
goto l37;
l41:x[jvj+157]=x[jvj+91] ;z[jvj+157]=z[jvj+91];
l40:if((x[jvj+157]<=0)) goto l39;
x[jvj+95]=s[x[jvj+157]] ;z[jvj+95]=(x[jvj+95]<=sepcte) ? x[jvj+95] : z[jvj+157];
if((x[jvj+156]==x[jvj+95])) goto l42;
pile[v[22]]=130; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+95,V43)*/
V43=pile[WZ2]; 
I=V43;
if(I!=1&&I!=(-1)) goto l42;
pile[v[22]]=EXEXEX; pile[WZ1]=132; 
(*f[207])( );     /*PLUE2(EXEXEX,132)*/
l42:x[jvj+157]=t[x[jvj+157]];
goto l40;
l46:x[jvj+158]=t[x[jvj+158]];
goto l45;
l49:pile[v[22]]=100; pile[WZ1]=jvj+97; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+97,jvj+112)*/
if((x[jvj+112]!=484)) goto l50;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+29,jvj+113)*/
pile[v[22]]=130; pile[WZ1]=jvj+113; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(130,jvj+113,V328)*/
V328=pile[WZ2]; 
x[jvj+114]=vo[16];z[jvj+114]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(498,jvj+114,jvj+115)*/
pile[v[22]]=1182; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(1182,jvj+115,jvj+116)*/
if((68!=x[jvj+116])) goto l50;
pile[v[22]]=EXEXEX; pile[WZ1]=351; 
(*f[207])( );     /*PLUE2(EXEXEX,351)*/
l50:pile[v[22]]=111; pile[WZ1]=jvj+97; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+97,jvj+117)*/
pile[v[22]]=101; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+117,jvj+118)*/
if((x[jvj+118]==485)) goto l51;
if((x[jvj+118]!=486)) goto l58;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+29,jvj+127)*/
pile[v[22]]=130; pile[WZ1]=jvj+127; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+127,V85)*/
V85=pile[WZ2]; 
if((x[jvj+31]==29)) goto l15;
if((x[jvj+31]!=30)) goto l58;
if((V85>0)) goto l56;
goto l58;
l51:pile[v[22]]=107; pile[WZ1]=jvj+97; pile[WZ2]=jvj+119; 
(*f[33])( );     /*FNDE0(107,jvj+97,jvj+119)*/
for(i=x[jvj+119],V217=0;i>0;i=t[i],V217++)  ;
if((V217!=2)) goto l58;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+29,jvj+120)*/
pile[v[22]]=130; pile[WZ1]=jvj+120; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+120,V213)*/
V213=pile[WZ2]; 
if((V213!=0)) goto l58;
x[jvj+121]=vo[16];z[jvj+121]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(498,jvj+121,jvj+122)*/
pile[v[22]]=1182; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(1182,jvj+122,jvj+123)*/
if((68!=x[jvj+123])) goto l58;
x[jvj+160]=x[jvj+119] ;z[jvj+160]=z[jvj+119];
l52:if((x[jvj+160]<=0)) goto l58;
x[jvj+124]=s[x[jvj+160]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+160];
pile[v[22]]=100; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,jvj+124,jvj+125)*/
if((x[jvj+125]!=484)) goto l53;
x[jvj+161]=x[jvj+119] ;z[jvj+161]=z[jvj+119];
l54:if((x[jvj+161]<=0)) goto l53;
x[jvj+126]=s[x[jvj+161]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+161];
if((x[jvj+124]==x[jvj+126])) goto l55;
pile[v[22]]=130; pile[WZ1]=jvj+126; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+126,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=516; 
(*f[207])( );     /*PLUE2(EXEXEX,516)*/
l55:x[jvj+161]=t[x[jvj+161]];
goto l54;
l53:x[jvj+160]=t[x[jvj+160]];
goto l52;
l56:pile[v[22]]=107; pile[WZ1]=jvj+97; pile[WZ2]=jvj+128; 
(*f[33])( );     /*FNDE0(107,jvj+97,jvj+128)*/
l57:if((x[jvj+128]<=0)) goto l58;
V87=s[x[jvj+128]];
pile[v[22]]=EXEXEX; pile[WZ1]=606; 
(*f[207])( );     /*PLUE2(EXEXEX,606)*/
x[jvj+128]=t[x[jvj+128]];
goto l57;
l60:x[jvj+162]=t[x[jvj+162]];
goto l59;
l63:pile[v[22]]=111; pile[WZ1]=jvj+137; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+137,jvj+140)*/
pile[v[22]]=101; pile[WZ1]=jvj+140; pile[WZ2]=jvj+141; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+140,jvj+141)*/
if((x[jvj+141]!=486)) goto l60;
pile[v[22]]=107; pile[WZ1]=jvj+137; pile[WZ2]=jvj+142; 
(*f[33])( );     /*FNDE0(107,jvj+137,jvj+142)*/
for(i=x[jvj+142],V133=0;i>0;i=t[i],V133++)  ;
if((V133!=2)) goto l60;
V523=x[jvj+133];
l64:if((V523<=0)) goto l60;
V108=s[V523];
if((x[jvj+138]==V108)) goto l65;
V524=x[jvj+142];
l66:if((V524<=0)) goto l65;
V109=s[V524];
V525=x[jvj+142];
l67:if((V525>0)) goto l68;
V524=t[V524];
goto l66;
l65:V523=t[V523];
goto l64;
l68:V110=s[V525];
if((V109==V110)) goto l69;
pile[v[22]]=EXEXEX; pile[WZ1]=300; 
(*f[207])( );     /*PLUE2(EXEXEX,300)*/
l69:V525=t[V525];
goto l67;
l70:pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(103,jvj+29,jvj+143)*/
pile[v[22]]=111; pile[WZ1]=jvj+143; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(111,jvj+143,jvj+144)*/
pile[v[22]]=101; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(101,jvj+144,jvj+145)*/
if((x[jvj+145]!=486)) goto l75;
pile[v[22]]=107; pile[WZ1]=jvj+143; pile[WZ2]=jvj+146; 
(*f[33])( );     /*FNDE0(107,jvj+143,jvj+146)*/
for(i=x[jvj+146],V188=0;i>0;i=t[i],V188++)  ;
if((V188!=2)) goto l75;
x[jvj+147]=vo[16];z[jvj+147]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+147; pile[WZ2]=jvj+148; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(498,jvj+147,jvj+148)*/
pile[v[22]]=1182; pile[WZ1]=jvj+148; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(1182,jvj+148,jvj+149)*/
if((68!=x[jvj+149])) goto l75;
x[jvj+163]=x[jvj+146] ;z[jvj+163]=z[jvj+146];
l71:if((x[jvj+163]<=0)) goto l75;
x[jvj+150]=s[x[jvj+163]] ;z[jvj+150]=(x[jvj+150]<=sepcte) ? x[jvj+150] : z[jvj+163];
pile[v[22]]=100; pile[WZ1]=jvj+150; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(100,jvj+150,jvj+151)*/
if((x[jvj+151]!=484)) goto l72;
V527=x[jvj+146];
l73:if((V527<=0)) goto l72;
V177=s[V527];
if((x[jvj+150]==V177)) goto l74;
pile[v[22]]=EXEXEX; pile[WZ1]=378; 
(*f[207])( );     /*PLUE2(EXEXEX,378)*/
l74:V527=t[V527];
goto l73;
l72:x[jvj+163]=t[x[jvj+163]];
goto l71;
l75:v[0]=jvj; v[22]-=2; return;
}
