#include "dx.h"
void APPRV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V83=0,V145=0,V172=0,V171=0,V167=0,V166=0,V169=0,V135=0,V168=0,V134=0,V125=0,V126=0,V106=0,V87=0;
int A,BT,B;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=73;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; BT=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=1215)) goto l1;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,A,jvj+3)*/
if((x[jvj+3]!=0)) goto l1;
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+10]=d[72];z[jvj+10]=0;
x[jvj+73]=x[jvj+3] ;z[jvj+73]=z[jvj+3];
l9:if((x[jvj+73]>0)) goto l41;
pile[v[22]]=jvj+11; pile[WZ1]=1260; pile[WZ2]=jvj+12; 
(*f[300])( );     /*TRI10(jvj+11,1260,jvj+12)*/
pile[v[22]]=1260; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1260,jvj+12,jvj+13)*/
l10:if((x[jvj+13]>0)) goto l36;
x[jvj+36]=0 ;z[jvj+36]=0;
pile[v[22]]=1260; pile[WZ1]=jvj+12; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1260,jvj+12,jvj+14)*/
l11:if((x[jvj+14]>0)) goto l20;
V83=x[jvj+36];
if((V83==0)) goto l8;
x[jvj+15]=0 ;z[jvj+15]=0;
x[jvj+68]=x[jvj+3] ;z[jvj+68]=z[jvj+3];
l12:if((x[jvj+68]>0)) goto l14;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+16)*/
for(i=V83,V145=0;i>0;i=t[i],V145++)  ;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+17)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V145; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V145,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1215; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+21; 
(*f[301])( );     /*TRI11(jvj+20,jvj+16,107,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,22,100,jvj+22)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+17; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+17,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+18)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+23,107,jvj+22)*/
if((V172=w[x[BT]][1])==incon) goto l8;
if((V172!=23)) goto l13;
V171=x[A];
pile[v[22]]=BT; pile[WZ1]=B; pile[WZ2]=V171; 
(*f[134])( );     /*OTA0(BT,B,V171)*/
pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(B,BT,jvj+23)*/
l8:v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+4)*/
x[jvj+65]=w[x[jvj+4]][9];
l2:if((x[jvj+65]>0)) goto l3;
x[jvj+66]=w[x[jvj+4]][8];
l5:if((x[jvj+66]<=0)) goto l8;
x[jvj+7]=s[x[jvj+66]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+66];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,A,jvj+8)*/
x[jvj+67]=x[jvj+8] ;z[jvj+67]=z[jvj+8];
l6:if((x[jvj+67]>0)) goto l7;
x[jvj+66]=t[x[jvj+66]];
goto l5;
l3:x[jvj+5]=s[x[jvj+65]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+65];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+5,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; pile[WZ2]=A; 
(*f[1549])( );     /*APPRV1(jvj+6,jvj+5,A)*/
l4:x[jvj+65]=t[x[jvj+65]];
goto l2;
l7:x[jvj+9]=s[x[jvj+67]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+67];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+7; pile[WZ2]=A; 
(*f[1549])( );     /*APPRV1(jvj+9,jvj+7,A)*/
x[jvj+67]=t[x[jvj+67]];
goto l6;
l13:pile[v[22]]=B; pile[WZ1]=BT; pile[WZ2]=jvj+23; 
(*f[35])( );     /*CHGC1(B,BT,jvj+23)*/
goto l8;
l14:x[jvj+25]=s[x[jvj+68]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+68];
pile[v[22]]=1260; pile[WZ1]=jvj+12; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1260,jvj+12,jvj+24)*/
x[jvj+69]=x[jvj+24] ;z[jvj+69]=z[jvj+24];
l15:if((x[jvj+69]>0)) goto l19;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+25)*/
l16:x[jvj+68]=t[x[jvj+68]];
goto l12;
l18:pile[v[22]]=1261; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1261,jvj+26,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==x[jvj+25]) goto l16;
l17:x[jvj+69]=t[x[jvj+69]];
goto l15;
l19:x[jvj+26]=s[x[jvj+69]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+69];
pile[v[22]]=447; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(447,jvj+26,jvj+28)*/
for(a=V83;a>0;a=t[a]) if(s[a]==x[jvj+28]) goto l18;
goto l17;
l20:x[jvj+29]=s[x[jvj+14]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+14];
pile[v[22]]=447; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(447,jvj+29,jvj+30)*/
x[jvj+46]=0 ;z[jvj+46]=0;
pile[v[22]]=1261; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1261,jvj+29,jvj+31)*/
x[jvj+71]=x[jvj+31] ;z[jvj+71]=z[jvj+31];
l21:if((x[jvj+71]>0)) goto l32;
x[jvj+32]=x[jvj+30] ;z[jvj+32]=z[jvj+30];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+32,jvj+33)*/
if((x[jvj+33]<=0)) goto l25;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
x[jvj+38]=0 ;z[jvj+38]=0;
pile[v[22]]=365; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(365,jvj+34,jvj+35)*/
x[jvj+70]=x[jvj+35] ;z[jvj+70]=z[jvj+35];
l22:if((x[jvj+70]>0)) goto l30;
for(i=x[jvj+46],V167=0;i>0;i=t[i],V167++)  ;
for(i=x[jvj+38],V166=0;i>0;i=t[i],V166++)  ;
if((V167!=V166)) goto l27;
V169=x[jvj+46];
l23:if((V169>0)) goto l29;
V135=135;
l24:if((V135==135)) goto l26;
l25:x[jvj+14]=t[x[jvj+14]];
goto l11;
l26:pile[v[22]]=jvj+36; pile[WZ1]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+32)*/
goto l25;
l28:V169=t[V169];
goto l23;
l29:V168=s[V169];
for(a=x[jvj+38];a>0;a=t[a]) if(s[a]==V168) goto l28;
l27:V135=134;
goto l24;
l30:x[jvj+37]=s[x[jvj+70]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+70];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[1738])( );if(v[102]) goto l31;     /*EVLM0(jvj+32,jvj+34,jvj+37,V134)*/
V134=pile[WZ3]; 
pile[v[22]]=jvj+38; pile[WZ1]=V134; 
(*f[207])( );     /*PLUE2(jvj+38,V134)*/
l31:x[jvj+70]=t[x[jvj+70]];
goto l22;
l32:x[jvj+39]=s[x[jvj+71]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+71];
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=25)) goto l35;
x[jvj+42]=d[20];z[jvj+42]=0;
l33:if((x[jvj+42]<=0)) goto l35;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+43,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+39; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+44,jvj+39,jvj+45)*/
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+45,V125)*/
V125=pile[WZ2]; 
V126=V125;
pile[v[22]]=jvj+46; pile[WZ1]=V126; 
(*f[207])( );     /*PLUE2(jvj+46,V126)*/
l34:x[jvj+42]=t[x[jvj+42]];
goto l33;
l35:x[jvj+71]=t[x[jvj+71]];
goto l21;
l36:x[jvj+47]=s[x[jvj+13]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+13];
pile[v[22]]=447; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(447,jvj+47,jvj+48)*/
pile[v[22]]=459; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(459,jvj+47,jvj+49)*/
x[jvj+72]=t[x[jvj+13]];
l37:if((x[jvj+72]<=0)) goto l40;
x[jvj+50]=s[x[jvj+72]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+72];
pile[v[22]]=447; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(447,jvj+50,jvj+51)*/
V106=x[jvj+50];
pile[v[22]]=459; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(459,jvj+50,jvj+52)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[760])( );     /*MEMEX0(jvj+49,jvj+52,jvj+53)*/
if((x[jvj+53]==135)) goto l39;
l38:x[jvj+72]=t[x[jvj+72]];
goto l37;
l39:pile[v[22]]=1260; pile[WZ1]=jvj+12; pile[WZ2]=V106; 
(*f[134])( );     /*OTA0(1260,jvj+12,V106)*/
pile[v[22]]=jvj+47; pile[WZ1]=1261; pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+47,1261,jvj+48)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+47,1261,jvj+51)*/
goto l38;
l40:x[jvj+13]=t[x[jvj+13]];
goto l10;
l41:x[jvj+54]=s[x[jvj+73]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+73];
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=25)) goto l44;
x[jvj+57]=d[20];z[jvj+57]=0;
l42:if((x[jvj+57]<=0)) goto l44;
x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=268; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(268,jvj+58,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+54; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(jvj+59,jvj+54,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=41)) goto l43;
pile[v[22]]=jvj+58; pile[WZ1]=jvj+54; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(jvj+58,jvj+54,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[887])( );     /*VARND0(jvj+62,jvj+63)*/
for(i=x[jvj+63],V87=0;i>0;i=t[i],V87++)  ;
if((V87!=1)) goto l43;
pile[v[22]]=447; pile[WZ1]=jvj+54; pile[WZ2]=459; pile[WZ3]=jvj+62; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(447,jvj+54,459,jvj+62,jvj+64)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+64; pile[WZ2]=jvj+11; 
(*f[196])( );     /*PLUF0(jvj+10,jvj+64,jvj+11)*/
l43:x[jvj+57]=t[x[jvj+57]];
goto l42;
l44:x[jvj+73]=t[x[jvj+73]];
goto l9;
}
