#include "dx.h"
void TAUTOLOGIE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V41=0,V32=0,J=0,V6=0,V55=0,V44=0,V57=0,V65=0,V67=0,V96=0,V103=0,V73=0,V105=0,V113=0,Q=0,V115=0,V122=0,V129=0,V131=0,V139=0,V141=0,V148=0,V155=0,V157=0,V165=0,V167=0,V174=0,V181=0,V183=0,V191=0,V193=0,V10=0,P=0,V11=0,V226=0,V227=0,V228=0;
int R;
int RR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=126;
x[jvj+1]=11514;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1155&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,R,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=55)) goto l47;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,R,jvj+19)*/
x[jvj+113]=x[jvj+19] ;z[jvj+113]=z[jvj+19];
l10:if((x[jvj+113]>0)) goto l11;
x[jvj+115]=x[jvj+19] ;z[jvj+115]=z[jvj+19];
l15:if((x[jvj+115]>0)) goto l16;
for(i=x[jvj+19],V10=0;i>0;i=t[i],V10++)  ;
x[jvj+111]=x[jvj+19] ;z[jvj+111]=z[jvj+19];
l1:if((x[jvj+111]<=0)) goto l47;
x[jvj+2]=s[x[jvj+111]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+111];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=625)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+2,jvj+103)*/
pile[v[22]]=101; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+103,jvj+104)*/
if((x[jvj+104]!=625)) goto l47;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(160,jvj+2,jvj+105)*/
pile[v[22]]=130; pile[WZ1]=jvj+105; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+105,P)*/
P=pile[WZ2]; 
if((V10<P)) goto l47;
x[jvj+106]=d[20];z[jvj+106]=0;
l45:if((x[jvj+106]<=0)) goto l47;
x[jvj+107]=s[x[jvj+106]] ;z[jvj+107]=(x[jvj+107]<=sepcte) ? x[jvj+107] : z[jvj+106];
pile[v[22]]=268; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(268,jvj+107,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+2; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(jvj+108,jvj+2,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+109,jvj+110)*/
if((x[jvj+110]!=41)) goto l46;
pile[v[22]]=jvj+107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(jvj+107,jvj+2,jvj+14)*/
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+112]=x[jvj+19] ;z[jvj+112]=z[jvj+19];
l3:if((x[jvj+112]>0)) goto l4;
for(i=x[jvj+16],V11=0;i>0;i=t[i],V11++)  ;
if((V11==P)) goto l49;
l46:x[jvj+106]=t[x[jvj+106]];
goto l45;
l2:x[jvj+111]=t[x[jvj+111]];
goto l1;
l4:x[jvj+5]=s[x[jvj+112]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+112];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=625)) goto l5;
pile[v[22]]=160; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,jvj+5,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+8,V41)*/
V41=pile[WZ2]; 
if((P!=V41)) goto l5;
x[jvj+9]=d[20];z[jvj+9]=0;
l6:if((x[jvj+9]<=0)) goto l5;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+11,jvj+5,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+12,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+10,jvj+5,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[760])( );     /*MEMEX0(jvj+14,jvj+13,jvj+15)*/
if((x[jvj+15]==135)) goto l8;
l7:x[jvj+9]=t[x[jvj+9]];
goto l6;
l5:x[jvj+112]=t[x[jvj+112]];
goto l3;
l8:J=V32;
V226=J%P;
V227=V226;
if((V227<0)) goto l50;
V6=V227;
l9:pile[v[22]]=jvj+16; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+16,V6)*/
goto l7;
l11:x[jvj+20]=s[x[jvj+113]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+113];
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=1280)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+20,jvj+23)*/
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+23,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+20; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(160,jvj+20,jvj+24)*/
V44=V55;
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+24,V57)*/
V57=pile[WZ2]; 
if((V57!=0)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+20,jvj+25)*/
x[jvj+114]=x[jvj+19] ;z[jvj+114]=z[jvj+19];
l13:if((x[jvj+114]<=0)) goto l12;
x[jvj+26]=s[x[jvj+114]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+114];
if((x[jvj+20]==x[jvj+26])) goto l14;
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=1280)) goto l14;
pile[v[22]]=103; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+26,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+29,V65)*/
V65=pile[WZ2]; 
if((V44!=V65)) goto l14;
pile[v[22]]=160; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(160,jvj+26,jvj+30)*/
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+30,V67)*/
V67=pile[WZ2]; 
if((V67!=(-1))) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+26,jvj+31)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+25,jvj+31,jvj+32)*/
if((x[jvj+32]==135)) goto l49;
l14:x[jvj+114]=t[x[jvj+114]];
goto l13;
l12:x[jvj+113]=t[x[jvj+113]];
goto l10;
l16:x[jvj+33]=s[x[jvj+115]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+115];
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=48)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+36)*/
for(i=x[jvj+36],V96=0;i>0;i=t[i],V96++)  ;
if((V96!=2)) goto l17;
x[jvj+116]=x[jvj+36] ;z[jvj+116]=z[jvj+36];
l18:if((x[jvj+116]<=0)) goto l17;
x[jvj+37]=s[x[jvj+116]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+116];
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=1280)) goto l19;
pile[v[22]]=103; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+37,jvj+40)*/
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+40,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(160,jvj+37,jvj+41)*/
V73=V103;
pile[v[22]]=130; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+41,V105)*/
V105=pile[WZ2]; 
if((V105!=0)) goto l19;
pile[v[22]]=102; pile[WZ1]=jvj+37; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+37,jvj+42)*/
x[jvj+117]=x[jvj+36] ;z[jvj+117]=z[jvj+36];
l20:if((x[jvj+117]<=0)) goto l19;
x[jvj+43]=s[x[jvj+117]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+117];
if((x[jvj+37]==x[jvj+43])) goto l21;
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+43,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=1280)) goto l21;
pile[v[22]]=103; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+43,jvj+46)*/
pile[v[22]]=130; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+46,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(160,jvj+43,jvj+47)*/
Q=V113;
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+47,V115)*/
V115=pile[WZ2]; 
if((V115!=(-1))) goto l21;
pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+43,jvj+48)*/
x[jvj+118]=x[jvj+19] ;z[jvj+118]=z[jvj+19];
l22:if((x[jvj+118]<=0)) goto l21;
x[jvj+49]=s[x[jvj+118]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+118];
if((x[jvj+33]==x[jvj+49])) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+49,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+50,jvj+51)*/
if((x[jvj+51]!=48)) goto l23;
pile[v[22]]=107; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(107,jvj+49,jvj+52)*/
for(i=x[jvj+52],V122=0;i>0;i=t[i],V122++)  ;
if((V122!=2)) goto l23;
x[jvj+119]=x[jvj+52] ;z[jvj+119]=z[jvj+52];
l24:if((x[jvj+119]<=0)) goto l23;
x[jvj+53]=s[x[jvj+119]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+119];
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=1280)) goto l25;
pile[v[22]]=103; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+53,jvj+56)*/
pile[v[22]]=130; pile[WZ1]=jvj+56; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+56,V129)*/
V129=pile[WZ2]; 
if((V73!=V129)) goto l25;
pile[v[22]]=160; pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,jvj+53,jvj+57)*/
pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+57,V131)*/
V131=pile[WZ2]; 
if((V131!=(-1))) goto l25;
pile[v[22]]=102; pile[WZ1]=jvj+53; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+53,jvj+58)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+58,jvj+59)*/
if((x[jvj+59]==135)) goto l27;
l25:x[jvj+119]=t[x[jvj+119]];
goto l24;
l17:x[jvj+115]=t[x[jvj+115]];
goto l15;
l19:x[jvj+116]=t[x[jvj+116]];
goto l18;
l21:x[jvj+117]=t[x[jvj+117]];
goto l20;
l23:x[jvj+118]=t[x[jvj+118]];
goto l22;
l27:x[jvj+120]=x[jvj+52] ;z[jvj+120]=z[jvj+52];
l26:if((x[jvj+120]<=0)) goto l25;
x[jvj+60]=s[x[jvj+120]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+120];
if((x[jvj+53]==x[jvj+60])) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+60,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+61,jvj+62)*/
if((x[jvj+62]!=1280)) goto l28;
pile[v[22]]=103; pile[WZ1]=jvj+60; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,jvj+60,jvj+63)*/
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+63,V139)*/
V139=pile[WZ2]; 
if((Q!=V139)) goto l28;
pile[v[22]]=160; pile[WZ1]=jvj+60; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(160,jvj+60,jvj+64)*/
pile[v[22]]=130; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+64,V141)*/
V141=pile[WZ2]; 
if((V141!=0)) goto l28;
pile[v[22]]=102; pile[WZ1]=jvj+60; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,jvj+60,jvj+65)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[760])( );     /*MEMEX0(jvj+48,jvj+65,jvj+66)*/
if((x[jvj+66]==135)) goto l30;
l28:x[jvj+120]=t[x[jvj+120]];
goto l26;
l30:x[jvj+121]=x[jvj+19] ;z[jvj+121]=z[jvj+19];
l29:if((x[jvj+121]<=0)) goto l28;
x[jvj+67]=s[x[jvj+121]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+121];
if((x[jvj+33]==x[jvj+67])) goto l31;
if((x[jvj+49]==x[jvj+67])) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+67,jvj+68)*/
pile[v[22]]=101; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+68,jvj+69)*/
if((x[jvj+69]!=48)) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+67; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(107,jvj+67,jvj+70)*/
for(i=x[jvj+70],V148=0;i>0;i=t[i],V148++)  ;
if((V148!=2)) goto l31;
x[jvj+122]=x[jvj+70] ;z[jvj+122]=z[jvj+70];
l32:if((x[jvj+122]<=0)) goto l31;
x[jvj+71]=s[x[jvj+122]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+122];
pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+71,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]!=1280)) goto l33;
pile[v[22]]=103; pile[WZ1]=jvj+71; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+71,jvj+74)*/
pile[v[22]]=130; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+74,V155)*/
V155=pile[WZ2]; 
if((V73!=V155)) goto l33;
pile[v[22]]=160; pile[WZ1]=jvj+71; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(160,jvj+71,jvj+75)*/
pile[v[22]]=130; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+75,V157)*/
V157=pile[WZ2]; 
if((V157!=(-1))) goto l33;
pile[v[22]]=102; pile[WZ1]=jvj+71; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+71,jvj+76)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+76,jvj+77)*/
if((x[jvj+77]==135)) goto l35;
l33:x[jvj+122]=t[x[jvj+122]];
goto l32;
l31:x[jvj+121]=t[x[jvj+121]];
goto l29;
l35:x[jvj+123]=x[jvj+70] ;z[jvj+123]=z[jvj+70];
l34:if((x[jvj+123]<=0)) goto l33;
x[jvj+78]=s[x[jvj+123]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+123];
if((x[jvj+71]==x[jvj+78])) goto l36;
pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+78,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]!=1280)) goto l36;
pile[v[22]]=103; pile[WZ1]=jvj+78; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+78,jvj+81)*/
pile[v[22]]=130; pile[WZ1]=jvj+81; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+81,V165)*/
V165=pile[WZ2]; 
if((Q!=V165)) goto l36;
pile[v[22]]=160; pile[WZ1]=jvj+78; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(160,jvj+78,jvj+82)*/
pile[v[22]]=130; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+82,V167)*/
V167=pile[WZ2]; 
if((V167!=(-1))) goto l36;
pile[v[22]]=102; pile[WZ1]=jvj+78; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+78,jvj+83)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[760])( );     /*MEMEX0(jvj+48,jvj+83,jvj+84)*/
if((x[jvj+84]==135)) goto l38;
l36:x[jvj+123]=t[x[jvj+123]];
goto l34;
l38:x[jvj+124]=x[jvj+19] ;z[jvj+124]=z[jvj+19];
l37:if((x[jvj+124]<=0)) goto l36;
x[jvj+85]=s[x[jvj+124]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+124];
if((x[jvj+33]==x[jvj+85])) goto l39;
if((x[jvj+49]==x[jvj+85])) goto l39;
if((x[jvj+67]==x[jvj+85])) goto l39;
pile[v[22]]=111; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+85,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+86,jvj+87)*/
if((x[jvj+87]!=48)) goto l39;
pile[v[22]]=107; pile[WZ1]=jvj+85; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(107,jvj+85,jvj+88)*/
for(i=x[jvj+88],V174=0;i>0;i=t[i],V174++)  ;
if((V174!=2)) goto l39;
x[jvj+125]=x[jvj+88] ;z[jvj+125]=z[jvj+88];
l40:if((x[jvj+125]<=0)) goto l39;
x[jvj+89]=s[x[jvj+125]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+125];
pile[v[22]]=111; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+89,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+90,jvj+91)*/
if((x[jvj+91]!=1280)) goto l41;
pile[v[22]]=103; pile[WZ1]=jvj+89; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(103,jvj+89,jvj+92)*/
pile[v[22]]=130; pile[WZ1]=jvj+92; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+92,V181)*/
V181=pile[WZ2]; 
if((V73!=V181)) goto l41;
pile[v[22]]=160; pile[WZ1]=jvj+89; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(160,jvj+89,jvj+93)*/
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+93,V183)*/
V183=pile[WZ2]; 
if((V183!=0)) goto l41;
pile[v[22]]=102; pile[WZ1]=jvj+89; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+89,jvj+94)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+94,jvj+95)*/
if((x[jvj+95]==135)) goto l43;
l41:x[jvj+125]=t[x[jvj+125]];
goto l40;
l39:x[jvj+124]=t[x[jvj+124]];
goto l37;
l43:x[jvj+126]=x[jvj+88] ;z[jvj+126]=z[jvj+88];
l42:if((x[jvj+126]<=0)) goto l41;
x[jvj+96]=s[x[jvj+126]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+126];
if((x[jvj+89]==x[jvj+96])) goto l44;
pile[v[22]]=111; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+96,jvj+97)*/
pile[v[22]]=101; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+97,jvj+98)*/
if((x[jvj+98]!=1280)) goto l44;
pile[v[22]]=103; pile[WZ1]=jvj+96; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+96,jvj+99)*/
pile[v[22]]=130; pile[WZ1]=jvj+99; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+99,V191)*/
V191=pile[WZ2]; 
if((Q!=V191)) goto l44;
pile[v[22]]=160; pile[WZ1]=jvj+96; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(160,jvj+96,jvj+100)*/
pile[v[22]]=130; pile[WZ1]=jvj+100; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+100,V193)*/
V193=pile[WZ2]; 
if((V193!=0)) goto l44;
pile[v[22]]=102; pile[WZ1]=jvj+96; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+96,jvj+101)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[760])( );     /*MEMEX0(jvj+48,jvj+101,jvj+102)*/
if((x[jvj+102]==135)) goto l49;
l44:x[jvj+126]=t[x[jvj+126]];
goto l42;
l47:x[RR]=x[R] ;z[RR]=z[R];
l48:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l49:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=RR; 
(*f[181])( );     /*QUADRI2(100,20,101,135,RR)*/
goto l48;
l50:V228=V227+P;
V6=V228;
goto l9;
}
