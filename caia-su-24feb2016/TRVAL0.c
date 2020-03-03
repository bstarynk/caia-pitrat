#include "dx.h"
void TRVAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V197=0,V134=0,V196=0,V198=0,V199=0,V200=0,V201=0,V246=0,V203=0,V204=0,V210=0,V317=0,V251=0,V338=0,V316=0,V318=0,V319=0,V320=0,V321=0,V105=0,V30=0,V45=0,V58=0,V52=0,V66=0,V149=0,V164=0,V169=0,V194=0,V136=0,V181=0,V269=0,V284=0,V314=0,V254=0,V289=0,V252=0,V294=0,V213=0,V238=0,V205=0,V225=0,V212=0,V73=0,J=0,V98=0,V90=0,A=0,V128=0,V328=0,V330=0,V332=0,V324=0,V325=0,V326=0,V327=0,V329=0,V331=0,V127=0,V369=0,V367=0,V372=0,V370=0;
int RR,X;
int E,RS;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=171;
x[jvj+1]=11381;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3693&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; X=pile[v[22]+1]; E=pile[v[22]+2]; RS=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[E]=x[RS]=x[jvj+143]=incon;
pile[v[22]]=RR; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(RR,jvj+19)*/
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,X,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=48)) goto l5;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,X,jvj+4)*/
x[jvj+5]=d[205];z[jvj+5]=0;
l1:if((x[jvj+4]<=0)) goto l5;
x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l2;
x[jvj+9]=d[20];z[jvj+9]=0;
l3:if((x[jvj+9]<=0)) goto l2;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+10,jvj+6,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=484)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+10,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+6; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+13,jvj+6,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+14,jvj+15)*/
if(x[jvj+15]!=96&&x[jvj+15]!=89&&x[jvj+15]!=41&&x[jvj+15]!=20&&x[jvj+15]!=128&&x[jvj+15]!=570&&x[jvj+15]!=1317) goto l4;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+11,jvj+16)*/
pile[v[22]]=274; pile[WZ2]=319; pile[WZ3]=jvj+14; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(274,jvj+16,319,jvj+14,jvj+17)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+17,jvj+18)*/
l4:x[jvj+9]=t[x[jvj+9]];
goto l3;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:pile[v[22]]=jvj+19; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[798])( );     /*INSTANTIE0(jvj+19,jvj+18,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[799])( );if(v[102]) goto l89;     /*NORME0(jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+21,jvj+27)*/
if((x[jvj+27]!=134)) goto l13;
x[jvj+149]=0 ;z[jvj+149]=0;
x[RS]=134 ;z[RS]=134;
x[E]=x[jvj+149] ;z[E]=z[jvj+149];
l68:pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(111,jvj+21,jvj+127)*/
pile[v[22]]=101; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(101,jvj+127,jvj+128)*/
if((x[jvj+128]!=25)) goto l78;
x[jvj+129]=d[20];z[jvj+129]=0;
l69:if((x[jvj+129]<=0)) goto l78;
x[jvj+130]=s[x[jvj+129]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+129];
pile[v[22]]=jvj+130; pile[WZ1]=jvj+21; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(jvj+130,jvj+21,jvj+131)*/
pile[v[22]]=111; pile[WZ1]=jvj+131; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(111,jvj+131,jvj+132)*/
pile[v[22]]=101; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(101,jvj+132,jvj+133)*/
if((x[jvj+133]!=486)) goto l70;
pile[v[22]]=107; pile[WZ1]=jvj+131; pile[WZ2]=jvj+134; 
(*f[33])( );     /*FNDE0(107,jvj+131,jvj+134)*/
for(i=x[jvj+134],V73=0;i>0;i=t[i],V73++)  ;
if((V73!=2)) goto l70;
pile[v[22]]=268; pile[WZ1]=jvj+130; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(268,jvj+130,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=jvj+21; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(jvj+135,jvj+21,jvj+136)*/
x[jvj+167]=x[jvj+134] ;z[jvj+167]=z[jvj+134];
l71:if((x[jvj+167]<=0)) goto l70;
x[jvj+137]=s[x[jvj+167]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+167];
pile[v[22]]=100; pile[WZ1]=jvj+137; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(100,jvj+137,jvj+138)*/
if((x[jvj+138]!=484)) goto l72;
x[jvj+168]=x[jvj+134] ;z[jvj+168]=z[jvj+134];
l73:if((x[jvj+168]<=0)) goto l72;
x[jvj+139]=s[x[jvj+168]] ;z[jvj+139]=(x[jvj+139]<=sepcte) ? x[jvj+139] : z[jvj+168];
if((x[jvj+137]==x[jvj+139])) goto l74;
pile[v[22]]=100; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(100,jvj+139,jvj+140)*/
if((x[jvj+140]!=484)) goto l74;
x[jvj+143]=x[jvj+136] ;z[jvj+143]=z[jvj+136];
l78:if(x[E]==incon) goto l79;
if(x[RS]!=incon) goto l90;
l89:x[E]=x[RS]=incon;
l88:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l9:x[jvj+24]=s[x[jvj+148]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+148];
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+24,V246)*/
V246=pile[WZ2]; 
V203=V246;
pile[v[22]]=V204; pile[WZ1]=V203; 
(*f[1011])( );     /*PGCD0(V204,V203,V210)*/
V210=pile[WZ2]; 
if((V210!=V205)) goto l10;
pile[v[22]]=jvj+25; 
(*f[207])( );     /*PLUE2(jvj+25,V203)*/
l10:x[jvj+148]=t[x[jvj+148]];
l8:if((x[jvj+148]>0)) goto l9;
for(i=x[jvj+25],V212=0;i>0;i=t[i],V212++)  ;
if((V212>=V213)) goto l67;
x[E]=x[jvj+25] ;z[E]=z[jvj+25];
l21:x[RS]=135 ;z[RS]=135;
goto l68;
l13:pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(111,jvj+21,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l68;
x[jvj+152]=0 ;z[jvj+152]=0;
x[jvj+30]=d[20];z[jvj+30]=0;
l14:if((x[jvj+30]>0)) goto l15;
x[jvj+43]=d[20];z[jvj+43]=0;
l22:if((x[jvj+43]>0)) goto l23;
x[jvj+49]=d[20];z[jvj+49]=0;
l25:if((x[jvj+49]>0)) goto l26;
x[jvj+60]=d[20];z[jvj+60]=0;
l32:if((x[jvj+60]>0)) goto l33;
x[jvj+86]=d[20];z[jvj+86]=0;
l48:if((x[jvj+86]>0)) goto l49;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+23; 
(*f[887])( );     /*VARND0(jvj+21,jvj+23)*/
if((x[jvj+23]<=0)) goto l68;
x[jvj+111]=s[x[jvj+23]] ;z[jvj+111]=(x[jvj+111]<=sepcte) ? x[jvj+111] : z[jvj+23];
pile[v[22]]=202; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(202,jvj+111,jvj+112)*/
if((x[jvj+112]!=68)) goto l68;
pile[v[22]]=365; pile[WZ2]=jvj+113; 
(*f[33])( );     /*FNDE0(365,jvj+111,jvj+113)*/
for(i=x[jvj+113],V213=0;i>0;i=t[i],V213++)  ;
x[jvj+114]=d[20];z[jvj+114]=0;
l64:if((x[jvj+114]<=0)) goto l68;
x[jvj+115]=s[x[jvj+114]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+114];
pile[v[22]]=jvj+115; pile[WZ1]=jvj+21; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(jvj+115,jvj+21,jvj+116)*/
pile[v[22]]=111; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(111,jvj+116,jvj+117)*/
pile[v[22]]=101; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(101,jvj+117,jvj+118)*/
if((x[jvj+118]!=636)) goto l65;
pile[v[22]]=268; pile[WZ1]=jvj+115; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(268,jvj+115,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+21; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(jvj+119,jvj+21,jvj+120)*/
pile[v[22]]=130; pile[WZ1]=jvj+120; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+120,V238)*/
V238=pile[WZ2]; 
V205=V238;
x[jvj+121]=d[20];z[jvj+121]=0;
l66:if((x[jvj+121]<=0)) goto l65;
x[jvj+122]=s[x[jvj+121]] ;z[jvj+122]=(x[jvj+122]<=sepcte) ? x[jvj+122] : z[jvj+121];
pile[v[22]]=jvj+122; pile[WZ1]=jvj+116; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(jvj+122,jvj+116,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(100,jvj+123,jvj+124)*/
if((x[jvj+124]!=484)) goto l67;
pile[v[22]]=268; pile[WZ1]=jvj+122; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(268,jvj+122,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+116; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(jvj+125,jvj+116,jvj+126)*/
pile[v[22]]=130; pile[WZ1]=jvj+126; 
(*f[26])( );if(v[102]) goto l67;     /*FNDC0(130,jvj+126,V225)*/
V225=pile[WZ2]; 
V204=V225;
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+148]=x[jvj+113] ;z[jvj+148]=z[jvj+113];
goto l8;
l15:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+21; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+31,jvj+21,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=486)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+35)*/
for(i=x[jvj+35],V105=0;i>0;i=t[i],V105++)  ;
if((V105!=2)) goto l16;
pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+31,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+21; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+36,jvj+21,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=41)) goto l16;
x[jvj+150]=x[jvj+35] ;z[jvj+150]=z[jvj+35];
l17:if((x[jvj+150]<=0)) goto l16;
x[jvj+39]=s[x[jvj+150]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+150];
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=41)) goto l18;
x[jvj+151]=x[jvj+35] ;z[jvj+151]=z[jvj+35];
l19:if((x[jvj+151]<=0)) goto l18;
x[jvj+41]=s[x[jvj+151]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+151];
if((x[jvj+39]==x[jvj+41])) goto l20;
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=484)) goto l20;
x[E]=x[jvj+152] ;z[E]=z[jvj+152];
goto l21;
l16:x[jvj+30]=t[x[jvj+30]];
goto l14;
l18:x[jvj+150]=t[x[jvj+150]];
goto l17;
l20:x[jvj+151]=t[x[jvj+151]];
goto l19;
l23:x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+21; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+44,jvj+21,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=484)) goto l24;
pile[v[22]]=268; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+44,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+21; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+47,jvj+21,jvj+48)*/
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+48,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V30; pile[WZ2]=E; 
(*f[445])( );     /*TRI15(41,V30,E)*/
goto l21;
l24:x[jvj+43]=t[x[jvj+43]];
goto l22;
l26:x[jvj+50]=s[x[jvj+49]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+49];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+21; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+50,jvj+21,jvj+51)*/
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=485)) goto l27;
pile[v[22]]=107; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(107,jvj+51,jvj+54)*/
for(i=x[jvj+54],V45=0;i>0;i=t[i],V45++)  ;
if((V45!=2)) goto l27;
pile[v[22]]=268; pile[WZ1]=jvj+50; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(268,jvj+50,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+21; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+55,jvj+21,jvj+56)*/
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+56,V58)*/
V58=pile[WZ2]; 
if((V58!=0)) goto l27;
x[jvj+153]=x[jvj+54] ;z[jvj+153]=z[jvj+54];
l28:if((x[jvj+153]<=0)) goto l27;
x[jvj+57]=s[x[jvj+153]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+153];
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+57,jvj+58)*/
if((x[jvj+58]!=484)) goto l29;
x[jvj+154]=x[jvj+54] ;z[jvj+154]=z[jvj+54];
l30:if((x[jvj+154]<=0)) goto l29;
x[jvj+59]=s[x[jvj+154]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+154];
if((x[jvj+57]==x[jvj+59])) goto l31;
pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+59,V52)*/
V52=pile[WZ2]; 
V66=(-V52);
pile[v[22]]=41; pile[WZ1]=V66; pile[WZ2]=E; 
(*f[445])( );     /*TRI15(41,V66,E)*/
goto l21;
l27:x[jvj+49]=t[x[jvj+49]];
goto l25;
l29:x[jvj+153]=t[x[jvj+153]];
goto l28;
l31:x[jvj+154]=t[x[jvj+154]];
goto l30;
l33:x[jvj+61]=s[x[jvj+60]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+60];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+21; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+61,jvj+21,jvj+62)*/
pile[v[22]]=111; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+62,jvj+63)*/
pile[v[22]]=101; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+63,jvj+64)*/
if((x[jvj+64]!=486)) goto l34;
pile[v[22]]=107; pile[WZ1]=jvj+62; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(107,jvj+62,jvj+65)*/
for(i=x[jvj+65],V149=0;i>0;i=t[i],V149++)  ;
if((V149!=2)) goto l34;
pile[v[22]]=268; pile[WZ1]=jvj+61; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+61,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+21; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+66,jvj+21,jvj+67)*/
pile[v[22]]=111; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+67,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]!=485)) goto l34;
pile[v[22]]=107; pile[WZ1]=jvj+67; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(107,jvj+67,jvj+70)*/
for(i=x[jvj+70],V164=0;i>0;i=t[i],V164++)  ;
if((V164!=2)) goto l34;
x[jvj+155]=x[jvj+65] ;z[jvj+155]=z[jvj+65];
l35:if((x[jvj+155]<=0)) goto l34;
x[jvj+71]=s[x[jvj+155]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+155];
pile[v[22]]=100; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+71,jvj+72)*/
if((x[jvj+72]!=484)) goto l36;
x[jvj+156]=x[jvj+65] ;z[jvj+156]=z[jvj+65];
l37:if((x[jvj+156]<=0)) goto l36;
x[jvj+73]=s[x[jvj+156]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+156];
if((x[jvj+71]==x[jvj+73])) goto l38;
pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=484)) goto l38;
x[jvj+157]=x[jvj+70] ;z[jvj+157]=z[jvj+70];
l39:if((x[jvj+157]<=0)) goto l38;
x[jvj+75]=s[x[jvj+157]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+157];
pile[v[22]]=111; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+75,jvj+76)*/
pile[v[22]]=101; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+76,jvj+77)*/
if((x[jvj+77]!=486)) goto l40;
pile[v[22]]=107; pile[WZ1]=jvj+75; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(107,jvj+75,jvj+78)*/
for(i=x[jvj+78],V169=0;i>0;i=t[i],V169++)  ;
if((V169!=2)) goto l40;
x[jvj+79]=x[jvj+75] ;z[jvj+79]=z[jvj+75];
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[3627])( );if(v[102]) goto l40;     /*CARREDE0(jvj+79,jvj+80)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+80,V194)*/
V194=pile[WZ2]; 
V136=V194;
x[jvj+158]=x[jvj+78] ;z[jvj+158]=z[jvj+78];
l41:if((x[jvj+158]<=0)) goto l40;
x[jvj+81]=s[x[jvj+158]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+158];
pile[v[22]]=100; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+81,jvj+82)*/
if((x[jvj+82]!=41)) goto l42;
x[jvj+159]=x[jvj+78] ;z[jvj+159]=z[jvj+78];
l43:if((x[jvj+159]<=0)) goto l42;
x[jvj+83]=s[x[jvj+159]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+159];
if((x[jvj+81]==x[jvj+83])) goto l44;
pile[v[22]]=100; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+83,jvj+84)*/
if((x[jvj+84]!=41)) goto l44;
x[jvj+160]=x[jvj+70] ;z[jvj+160]=z[jvj+70];
l45:if((x[jvj+160]<=0)) goto l44;
x[jvj+85]=s[x[jvj+160]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+160];
if((x[jvj+75]==x[jvj+85])) goto l46;
pile[v[22]]=130; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+85,V181)*/
V181=pile[WZ2]; 
x[jvj+22]=0 ;z[jvj+22]=0;
V197=2*V136;
V369=abs(V181);
V367=V369;
pile[v[22]]=V367; pile[WZ1]=jvj+146; 
(*f[991])( );if(v[102]) goto l47;     /*ENSFACT0(V367,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=V367; 
(*f[207])( );     /*PLUE2(jvj+146,V367)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+146,1)*/
l6:if((x[jvj+146]<=0)) goto l47;
V134=s[x[jvj+146]];
V196=V181/V134;
V198=V134-V196;
if((V197!=V198)) goto l7;
V199=V134+V196;
V200=V199%2;
if((V200!=0)) goto l7;
V201=V199/2;
pile[v[22]]=jvj+22; pile[WZ1]=V201; 
(*f[207])( );     /*PLUE2(jvj+22,V201)*/
l7:x[jvj+146]=t[x[jvj+146]];
goto l6;
l34:x[jvj+60]=t[x[jvj+60]];
goto l32;
l36:x[jvj+155]=t[x[jvj+155]];
goto l35;
l38:x[jvj+156]=t[x[jvj+156]];
goto l37;
l40:x[jvj+157]=t[x[jvj+157]];
goto l39;
l42:x[jvj+158]=t[x[jvj+158]];
goto l41;
l44:x[jvj+159]=t[x[jvj+159]];
goto l43;
l46:x[jvj+160]=t[x[jvj+160]];
goto l45;
l47:x[RS]=135 ;z[RS]=135;
x[E]=x[jvj+22] ;z[E]=z[jvj+22];
goto l68;
l49:x[jvj+87]=s[x[jvj+86]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+86];
pile[v[22]]=jvj+87; pile[WZ1]=jvj+21; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(jvj+87,jvj+21,jvj+88)*/
pile[v[22]]=111; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+88,jvj+89)*/
pile[v[22]]=101; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+89,jvj+90)*/
if((x[jvj+90]!=486)) goto l50;
pile[v[22]]=107; pile[WZ1]=jvj+88; pile[WZ2]=jvj+91; 
(*f[33])( );     /*FNDE0(107,jvj+88,jvj+91)*/
for(i=x[jvj+91],V269=0;i>0;i=t[i],V269++)  ;
if((V269!=2)) goto l50;
pile[v[22]]=268; pile[WZ1]=jvj+87; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(268,jvj+87,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+21; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(jvj+92,jvj+21,jvj+93)*/
pile[v[22]]=111; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+93,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+94,jvj+95)*/
if((x[jvj+95]!=485)) goto l50;
pile[v[22]]=107; pile[WZ1]=jvj+93; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(107,jvj+93,jvj+96)*/
for(i=x[jvj+96],V284=0;i>0;i=t[i],V284++)  ;
if((V284!=2)) goto l50;
pile[v[22]]=jvj+88; pile[WZ1]=jvj+97; 
(*f[3627])( );if(v[102]) goto l50;     /*CARREDE0(jvj+88,jvj+97)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(130,jvj+97,V314)*/
V314=pile[WZ2]; 
V254=V314;
x[jvj+161]=x[jvj+91] ;z[jvj+161]=z[jvj+91];
l51:if((x[jvj+161]<=0)) goto l50;
x[jvj+98]=s[x[jvj+161]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+161];
pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(100,jvj+98,jvj+99)*/
if((x[jvj+99]!=41)) goto l52;
x[jvj+162]=x[jvj+91] ;z[jvj+162]=z[jvj+91];
l53:if((x[jvj+162]<=0)) goto l52;
x[jvj+100]=s[x[jvj+162]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+162];
if((x[jvj+98]==x[jvj+100])) goto l54;
pile[v[22]]=100; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+100,jvj+101)*/
if((x[jvj+101]!=41)) goto l54;
x[jvj+163]=x[jvj+96] ;z[jvj+163]=z[jvj+96];
l55:if((x[jvj+163]<=0)) goto l54;
x[jvj+102]=s[x[jvj+163]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+163];
pile[v[22]]=130; pile[WZ1]=jvj+102; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+102,V289)*/
V289=pile[WZ2]; 
V252=V289;
x[jvj+26]=0 ;z[jvj+26]=0;
V317=2*V254;
V372=abs(V252);
V370=V372;
pile[v[22]]=V370; pile[WZ1]=jvj+147; 
(*f[991])( );if(v[102]) goto l58;     /*ENSFACT0(V370,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=V370; 
(*f[207])( );     /*PLUE2(jvj+147,V370)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+147,1)*/
V338=x[jvj+147];
l11:if((V338<=0)) goto l58;
V251=s[V338];
V316=V252/V251;
V318=V251+V316;
if((V317!=V318)) goto l12;
V319=V251-V316;
V320=V319%2;
if((V320!=0)) goto l12;
V321=V319/2;
pile[v[22]]=jvj+26; pile[WZ1]=V321; 
(*f[207])( );     /*PLUE2(jvj+26,V321)*/
l12:V338=t[V338];
goto l11;
l50:x[jvj+86]=t[x[jvj+86]];
goto l48;
l52:x[jvj+161]=t[x[jvj+161]];
goto l51;
l54:x[jvj+162]=t[x[jvj+162]];
goto l53;
l56:x[jvj+163]=t[x[jvj+163]];
goto l55;
l58:x[jvj+164]=x[jvj+96] ;z[jvj+164]=z[jvj+96];
l57:if((x[jvj+164]<=0)) goto l56;
x[jvj+103]=s[x[jvj+164]] ;z[jvj+103]=(x[jvj+103]<=sepcte) ? x[jvj+103] : z[jvj+164];
if((x[jvj+102]==x[jvj+103])) goto l59;
pile[v[22]]=111; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,jvj+103,jvj+104)*/
pile[v[22]]=101; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+104,jvj+105)*/
if((x[jvj+105]!=486)) goto l59;
pile[v[22]]=107; pile[WZ1]=jvj+103; pile[WZ2]=jvj+106; 
(*f[33])( );     /*FNDE0(107,jvj+103,jvj+106)*/
for(i=x[jvj+106],V294=0;i>0;i=t[i],V294++)  ;
if((V294!=2)) goto l59;
x[jvj+165]=x[jvj+106] ;z[jvj+165]=z[jvj+106];
l60:if((x[jvj+165]<=0)) goto l59;
x[jvj+107]=s[x[jvj+165]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+165];
pile[v[22]]=100; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+107,jvj+108)*/
if((x[jvj+108]!=484)) goto l61;
x[jvj+166]=x[jvj+106] ;z[jvj+166]=z[jvj+106];
l62:if((x[jvj+166]<=0)) goto l61;
x[jvj+109]=s[x[jvj+166]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+166];
if((x[jvj+107]==x[jvj+109])) goto l63;
pile[v[22]]=100; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(100,jvj+109,jvj+110)*/
if((x[jvj+110]!=484)) goto l63;
x[RS]=135 ;z[RS]=135;
x[E]=x[jvj+26] ;z[E]=z[jvj+26];
goto l68;
l59:x[jvj+164]=t[x[jvj+164]];
goto l57;
l61:x[jvj+165]=t[x[jvj+165]];
goto l60;
l63:x[jvj+166]=t[x[jvj+166]];
goto l62;
l65:x[jvj+114]=t[x[jvj+114]];
goto l64;
l67:x[jvj+121]=t[x[jvj+121]];
goto l66;
l70:x[jvj+129]=t[x[jvj+129]];
goto l69;
l72:x[jvj+167]=t[x[jvj+167]];
goto l71;
l74:x[jvj+168]=t[x[jvj+168]];
goto l73;
l76:J=s[x[jvj+141]];
V98=J*A;
pile[v[22]]=jvj+142; pile[WZ1]=V98; 
(*f[207])( );     /*PLUE2(jvj+142,V98)*/
x[jvj+141]=t[x[jvj+141]];
l75:if((x[jvj+141]>0)) goto l76;
x[jvj+169]=x[jvj+142] ;z[jvj+169]=z[jvj+142];
l82:x[E]=x[jvj+169] ;z[E]=z[jvj+169];
x[RS]=135 ;z[RS]=135;
l90:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l77:x[jvj+171]=0 ;z[jvj+171]=0;
x[jvj+169]=x[jvj+171] ;z[jvj+169]=z[jvj+171];
goto l82;
l79:if(x[RS]==incon) goto l80;
goto l89;
l80:if(x[jvj+143]!=incon) goto l81;
l87:x[jvj+170]=0 ;z[jvj+170]=0;
x[RS]=178 ;z[RS]=178;
x[E]=x[jvj+170] ;z[E]=z[jvj+170];
if((v[231]<=0)) goto l90;
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+144; 
(*f[32])( );if(v[102]) goto l86;     /*FNDO0(101,jvj+21,jvj+144)*/
if((x[jvj+144]==135)) goto l90;
l86:V127=g[623];
if((V127<=0)) goto l90;
V128=vg[623];
if((V128!=0)) goto l83;
if((V127<3)) goto l85;
l83:pile[v[22]]=623; pile[WZ1]=11381; pile[WZ2]=0; pile[WZ3]=(-596); pile[WZ4]=X; pile[WZ5]=(-631); pile[v[22]+6]=RR; pile[v[22]+7]=(-601); pile[v[22]+8]=jvj+21; pile[v[22]+9]=jvj+145; 
(*f[188])( );     /*INTERP1(623,11381,0,(-596),X,(-631),RR,(-601),jvj+21,jvj+145)*/
if((x[jvj+145]==135)) goto l84;
goto l90;
l81:pile[v[22]]=130; pile[WZ1]=jvj+143; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(130,jvj+143,V90)*/
V90=pile[WZ2]; 
x[jvj+169]=incon;
pile[v[22]]=V90; 
(*f[627])( );if(v[102]) goto l77;     /*RACINEXACTE0(V90,A)*/
A=pile[WZ1]; 
x[jvj+142]=0 ;z[jvj+142]=0;
x[jvj+141]=d[136];z[jvj+141]=0;
goto l75;
l84:if((V127<4)) goto l85;
goto l90;
l85:V328=x[X];
V330=x[RR];
V332=x[jvj+21];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V324)*/
V324=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V324; pile[WZ2]=11381; 
(*f[98])( );     /*SRA3(135,V324,11381,V325)*/
V325=pile[WZ3]; 
pile[v[22]]=V325; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V325,125,V326)*/
V326=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V328; pile[WZ2]=V326; 
(*f[39])( );     /*SDX0(20,V328,V326,V327)*/
V327=pile[WZ3]; 
pile[WZ1]=V330; pile[WZ2]=V327; 
(*f[39])( );     /*SDX0(20,V330,V327,V329)*/
V329=pile[WZ3]; 
pile[WZ1]=V332; pile[WZ2]=V329; 
(*f[39])( );     /*SDX0(20,V332,V329,V331)*/
V331=pile[WZ3]; 
pile[v[22]]=V331; 
(*f[40])( );     /*SLG0(V331)*/
if((V127!=2)) goto l90;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l90;
}
