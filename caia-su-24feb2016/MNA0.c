#include "dx.h"
void MNA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V=0,V12=0,V22=0,V33=0,V38=0,V6=0,W=0,V40=0,V52=0,V43=0,V54=0,V58=0,V74=0,V90=0,V75=0,V78=0,V79=0,V86=0;
int TL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=56;
x[jvj+1]=10582;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1387&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(583,TL,jvj+6)*/
vo[15]=x[TL];vz[15]=x[jvj+6];
pile[v[22]]=TL; 
(*f[1603])( );     /*KVX0(TL)*/
pile[v[22]]=441; pile[WZ1]=TL; 
(*f[71])( );     /*ENLV0(441,TL)*/
pile[v[22]]=222; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(222,TL,jvj+3)*/
pile[v[22]]=223; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(223,TL,jvj+4)*/
pile[v[22]]=440; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(440,TL,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l8;
V=s[x[jvj+5]];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l2;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V) goto l2;
pile[v[22]]=1; pile[WZ1]=TL; pile[WZ2]=117; 
(*f[1113])( );     /*INCM0(1,TL,117,V1)*/
V1=pile[WZ3]; 
pile[v[22]]=117; pile[WZ1]=V1; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+2; 
(*f[1606])( );     /*QUADRI17(117,V1,140,V,jvj+2)*/
pile[v[22]]=TL; pile[WZ1]=441; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(TL,441,jvj+2)*/
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:x[jvj+53]=t[x[jvj+53]];
l3:if((x[jvj+53]<=0)) goto l10;
x[jvj+8]=s[x[jvj+53]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+53];
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+8,V12)*/
V12=pile[WZ2]; 
if((V12!=W)) goto l4;
pile[v[22]]=158; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(158,jvj+8,jvj+9)*/
if(x[jvj+9]!=41&&x[jvj+9]!=89&&x[jvj+9]!=96&&x[jvj+9]!=1317) goto l4;
V40=V6;
pile[v[22]]=V6; pile[WZ1]=W; pile[WZ2]=jvj+19; pile[WZ3]=TL; pile[WZ4]=120; 
(*f[1604])( );     /*ISW0(V6,W,jvj+19,TL,120)*/
pile[v[22]]=299; pile[WZ1]=TL; pile[WZ2]=V40; 
(*f[134])( );     /*OTA0(299,TL,V40)*/
l10:x[jvj+55]=t[x[jvj+55]];
l9:if((x[jvj+55]<=0)) goto l17;
x[jvj+19]=s[x[jvj+55]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+55];
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+19,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=435)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=172)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+22,jvj+25)*/
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+25,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(436,jvj+20,jvj+26)*/
pile[v[22]]=140; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+26,V38)*/
V38=pile[WZ2]; 
V6=V38;
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==V6) goto l11;
goto l10;
l6:x[jvj+14]=s[x[jvj+54]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+54];
if((x[jvj+14]==x[jvj+19])) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+14,jvj+10)*/
pile[v[22]]=253; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(253,jvj+10,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V6) goto l10;
pile[v[22]]=100; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+10,jvj+12)*/
if((x[jvj+12]!=435)) goto l7;
pile[v[22]]=436; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(436,jvj+10,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+13,V22)*/
V22=pile[WZ2]; 
if((V6==V22)) goto l10;
l7:x[jvj+54]=t[x[jvj+54]];
l5:if((x[jvj+54]>0)) goto l6;
W=V33;
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(283,TL,jvj+7)*/
x[jvj+53]=x[jvj+7] ;z[jvj+53]=z[jvj+7];
goto l3;
l8:pile[v[22]]=297; pile[WZ1]=TL; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(297,TL,jvj+15)*/
pile[v[22]]=147; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(147,jvj+15,jvj+16)*/
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(302,TL,jvj+17)*/
pile[v[22]]=299; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(299,TL,jvj+18)*/
x[jvj+55]=x[jvj+17] ;z[jvj+55]=z[jvj+17];
goto l9;
l11:for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==V6) goto l10;
x[jvj+54]=x[jvj+17] ;z[jvj+54]=z[jvj+17];
goto l5;
l15:pile[v[22]]=248; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(248,jvj+27,jvj+36)*/
for(i=x[jvj+36],V52=0;i>0;i=t[i],V52++)  ;
if((V52>1)) goto l16;
x[jvj+32]=vo[20];z[jvj+32]=vz[20];
pile[v[22]]=617; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(617,jvj+32,jvj+33)*/
if((x[jvj+33]!=68)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+27,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+34,jvj+35)*/
if(x[jvj+35]==85||x[jvj+35]==86) goto l16;
l12:pile[v[22]]=248; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(248,jvj+27,jvj+28)*/
x[jvj+56]=x[jvj+28] ;z[jvj+56]=z[jvj+28];
l13:if((x[jvj+56]<=0)) goto l20;
x[jvj+29]=s[x[jvj+56]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+56];
pile[v[22]]=122; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(122,jvj+29,jvj+30)*/
if((x[jvj+30]!=135)) goto l14;
pile[v[22]]=161; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(161,jvj+29,jvj+31)*/
if((x[jvj+31]!=x[TL])) goto l16;
l14:x[jvj+56]=t[x[jvj+56]];
goto l13;
l16:pile[v[22]]=1; pile[WZ1]=TL; pile[WZ2]=323; 
(*f[1113])( );     /*INCM0(1,TL,323,V43)*/
V43=pile[WZ3]; 
V54=V43;
pile[v[22]]=jvj+27; pile[WZ1]=193; pile[WZ2]=V54; 
(*f[177])( );     /*CHGC4(jvj+27,193,V54)*/
l20:x[jvj+37]=t[x[jvj+37]];
l18:if((x[jvj+37]>0)) goto l19;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l17:pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(302,TL,jvj+37)*/
goto l18;
l19:x[jvj+27]=s[x[jvj+37]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+37];
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+27,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=39)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+38,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+40,jvj+41)*/
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+38,V58)*/
V58=pile[WZ2]; 
x[jvj+42]=x[jvj+41] ;z[jvj+42]=z[jvj+41];
pile[v[22]]=jvj+42; pile[WZ1]=V58; pile[WZ2]=jvj+43; 
(*f[133])( );if(v[102]) goto l15;     /*TLDEBL1(jvj+42,V58,jvj+43)*/
V74=0;
V90=V74;
x[jvj+52]=x[jvj+38] ;z[jvj+52]=z[jvj+38];
l22:pile[v[22]]=213; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(213,jvj+43,jvj+44)*/
l23:if((x[jvj+44]<=0)) goto l15;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+45,V75)*/
V75=pile[WZ2]; 
if((V75!=V90)) goto l26;
pile[v[22]]=122; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(122,jvj+45,jvj+46)*/
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+45,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=jvj+46; pile[WZ1]=jvj+38; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(jvj+46,jvj+38,jvj+47)*/
l24:if((x[jvj+47]<=0)) goto l15;
x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=103; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+48,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+49,V79)*/
V79=pile[WZ2]; 
if((V79!=V78)) goto l25;
pile[v[22]]=102; pile[WZ1]=jvj+48; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+48,jvj+50)*/
pile[WZ1]=jvj+50; pile[WZ2]=117; pile[WZ3]=V90; pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(102,jvj+50,117,V90,jvj+51)*/
V86=V90+1;
pile[v[22]]=jvj+52; pile[WZ1]=120; pile[WZ2]=jvj+51; 
(*f[35])( );     /*CHGC1(jvj+52,120,jvj+51)*/
pile[v[22]]=jvj+50; pile[WZ1]=122; pile[WZ2]=jvj+46; 
(*f[35])( );     /*CHGC1(jvj+50,122,jvj+46)*/
x[jvj+52]=x[jvj+51] ;z[jvj+52]=z[jvj+51];
V90=V86;
goto l22;
l25:x[jvj+47]=t[x[jvj+47]];
goto l24;
l26:x[jvj+44]=t[x[jvj+44]];
goto l23;
}
