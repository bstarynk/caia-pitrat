#include "dx.h"
void COMPSQUELETTES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V30=0,V109=0,V31=0,V33=0,V75=0,V122=0,K=0,V64=0,V66=0,V51=0,V57=0,V58=0;
int SX,SY,T;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=96;
x[jvj+1]=10850;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1580&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
SX=pile[v[22]]; SY=pile[v[22]+1]; T=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=x[SY] ;z[jvj+15]=z[SY];
x[jvj+2]=x[SX] ;z[jvj+2]=z[SX];
l40:x[R]=x[jvj+95]=x[jvj+96]=incon;
pile[v[22]]=576; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(576,jvj+2,jvj+3)*/
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l6;
pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(763,T,jvj+6)*/
x[jvj+7]=d[20];z[jvj+7]=0;
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,jvj+3,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l2;
x[jvj+90]=x[jvj+6] ;z[jvj+90]=z[jvj+6];
l3:if((x[jvj+90]<=0)) goto l2;
x[jvj+11]=s[x[jvj+90]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+90];
if((x[jvj+11]==x[jvj+2])) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=22)) goto l4;
V14=x[jvj+11];
pile[v[22]]=102; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+11,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l5;
l4:x[jvj+90]=t[x[jvj+90]];
goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l5:pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=V14; 
(*f[134])( );     /*OTA0(763,T,V14)*/
goto l4;
l6:pile[v[22]]=576; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(576,jvj+15,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=25)) goto l18;
pile[v[22]]=159; pile[WZ1]=T; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(159,T,jvj+19)*/
x[jvj+20]=d[20];z[jvj+20]=0;
l7:if((x[jvj+20]<=0)) goto l18;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=jvj+16; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+21,jvj+16,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l8;
x[jvj+91]=x[jvj+19] ;z[jvj+91]=z[jvj+19];
l9:if((x[jvj+91]<=0)) goto l8;
x[jvj+24]=s[x[jvj+91]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+91];
if((x[jvj+24]==x[jvj+15])) goto l10;
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=22)) goto l10;
V30=x[jvj+24];
pile[v[22]]=102; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+24,jvj+26)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+26,jvj+27)*/
if((x[jvj+27]==135)) goto l11;
l10:x[jvj+91]=t[x[jvj+91]];
goto l9;
l8:x[jvj+20]=t[x[jvj+20]];
goto l7;
l11:pile[v[22]]=159; pile[WZ1]=T; pile[WZ2]=V30; 
(*f[134])( );     /*OTA0(159,T,V30)*/
goto l10;
l12:if((x[jvj+68]<=0)) goto l35;
x[jvj+71]=s[x[jvj+68]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+68];
pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(763,T,jvj+70)*/
if((x[jvj+70]==0)) goto l35;
pile[v[22]]=576; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(576,jvj+71,jvj+72)*/
x[jvj+95]=x[jvj+71] ;z[jvj+95]=z[jvj+71];
x[jvj+96]=x[jvj+15] ;z[jvj+96]=z[jvj+15];
pile[v[22]]=T; pile[WZ1]=258; 
(*f[36])( );     /*PLUSC0(T,258,jvj+72)*/
pile[WZ1]=763; 
(*f[36])( );     /*PLUSC0(T,763,jvj+72)*/
l35:if(x[R]==incon) goto l36;
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l14:x[jvj+28]=s[x[jvj+92]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+92];
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=25)) goto l15;
x[jvj+31]=d[20];z[jvj+31]=0;
l16:if((x[jvj+31]<=0)) goto l15;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=268; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+32,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+28; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+33,jvj+28,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+34,V109)*/
V109=pile[WZ2]; 
if((K!=V109)) goto l17;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+28; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+32,jvj+28,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+35; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+36,jvj+35,jvj+37)*/
if((x[jvj+37]==135)) goto l25;
l17:x[jvj+31]=t[x[jvj+31]];
goto l16;
l15:x[jvj+92]=t[x[jvj+92]];
l13:if((x[jvj+92]>0)) goto l14;
x[jvj+89]=x[jvj+62] ;z[jvj+89]=z[jvj+62];
x[jvj+63]=d[20];z[jvj+63]=0;
l26:if((x[jvj+63]<=0)) goto l25;
x[jvj+64]=s[x[jvj+63]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+63];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+48; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+64,jvj+48,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+65,jvj+66)*/
if((x[jvj+66]!=484)) goto l27;
pile[v[22]]=jvj+58; pile[WZ2]=jvj+67; 
(*f[760])( );     /*MEMEX0(jvj+58,jvj+65,jvj+67)*/
if((x[jvj+67]==135)) goto l42;
l27:x[jvj+63]=t[x[jvj+63]];
goto l26;
l18:pile[v[22]]=226; pile[WZ1]=jvj+2; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(226,jvj+2,jvj+38)*/
if((x[jvj+38]!=0)) goto l19;
pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(763,T,jvj+39)*/
if((x[jvj+39]!=0)) goto l19;
pile[v[22]]=226; pile[WZ1]=jvj+15; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(226,jvj+15,jvj+40)*/
if((x[jvj+40]==0)) goto l19;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,20,101,134,R)*/
l28:pile[v[22]]=226; pile[WZ1]=jvj+2; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(226,jvj+2,jvj+68)*/
for(i=x[jvj+68],V64=0;i>0;i=t[i],V64++)  ;
if((V64==1)) goto l29;
if((V64<=1)) goto l35;
pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(763,T,jvj+77)*/
if((x[jvj+77]!=0)) goto l35;
pile[v[22]]=159; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(159,T,jvj+78)*/
if((x[jvj+78]!=0)) goto l35;
pile[v[22]]=226; pile[WZ1]=jvj+15; pile[WZ2]=jvj+79; 
(*f[33])( );     /*FNDE0(226,jvj+15,jvj+79)*/
for(i=x[jvj+79],V51=0;i>0;i=t[i],V51++)  ;
if((V51==V64)) goto l30;
goto l35;
l19:for(i=x[jvj+38],V31=0;i>0;i=t[i],V31++)  ;
if((V31==1)) goto l20;
if((V31<=1)) goto l28;
pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(763,T,jvj+44)*/
if((x[jvj+44]!=0)) goto l28;
pile[v[22]]=226; pile[WZ1]=jvj+15; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(226,jvj+15,jvj+45)*/
for(i=x[jvj+45],V75=0;i>0;i=t[i],V75++)  ;
if((V75<=1)) goto l21;
pile[v[22]]=159; pile[WZ1]=T; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(159,T,jvj+46)*/
if((x[jvj+46]==0)) goto l21;
if((x[jvj+46]<=0)) goto l21;
x[jvj+93]=s[x[jvj+46]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+46];
x[R]=x[jvj+93] ;z[R]=z[jvj+93];
goto l28;
l20:pile[v[22]]=763; pile[WZ1]=T; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(763,T,jvj+41)*/
if((x[jvj+41]!=0)) goto l28;
pile[v[22]]=226; pile[WZ1]=jvj+15; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(226,jvj+15,jvj+42)*/
for(i=x[jvj+42],V33=0;i>0;i=t[i],V33++)  ;
if((V33<=1)) goto l28;
if((x[jvj+38]<=0)) goto l28;
x[jvj+43]=s[x[jvj+38]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+38];
pile[v[22]]=576; pile[WZ1]=jvj+43; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(576,jvj+43,R)*/
goto l28;
l21:if((V75<=V31)) goto l28;
if((x[jvj+38]<=0)) goto l28;
x[jvj+47]=s[x[jvj+38]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+38];
pile[v[22]]=576; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(576,jvj+47,jvj+48)*/
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=25)) goto l28;
pile[v[22]]=159; pile[WZ1]=T; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(159,T,jvj+51)*/
if((x[jvj+51]==0)) goto l22;
goto l28;
l23:x[jvj+45]=t[x[jvj+45]];
l22:if((x[jvj+45]<=0)) goto l28;
x[jvj+52]=s[x[jvj+45]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+45];
pile[v[22]]=576; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(576,jvj+52,jvj+53)*/
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=25)) goto l23;
x[jvj+56]=d[20];z[jvj+56]=0;
l24:if((x[jvj+56]<=0)) goto l23;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=jvj+57; pile[WZ1]=jvj+53; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+57,jvj+53,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+58,jvj+59)*/
if((x[jvj+59]!=484)) goto l25;
pile[v[22]]=268; pile[WZ1]=jvj+57; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(268,jvj+57,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+53; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+60,jvj+53,jvj+61)*/
pile[v[22]]=130; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+61,V122)*/
V122=pile[WZ2]; 
x[jvj+36]=x[jvj+58] ;z[jvj+36]=z[jvj+58];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+62; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+62)*/
K=V122;
x[jvj+92]=x[jvj+38] ;z[jvj+92]=z[jvj+38];
goto l13;
l25:x[jvj+56]=t[x[jvj+56]];
goto l24;
l29:pile[v[22]]=226; pile[WZ1]=jvj+15; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(226,jvj+15,jvj+69)*/
for(i=x[jvj+69],V66=0;i>0;i=t[i],V66++)  ;
if((V66>1)) goto l12;
if((V66!=1)) goto l35;
if((x[jvj+68]<=0)) goto l35;
x[jvj+73]=s[x[jvj+68]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+68];
if((x[jvj+69]<=0)) goto l35;
x[jvj+75]=s[x[jvj+69]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+69];
pile[v[22]]=576; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(576,jvj+73,jvj+74)*/
pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(576,jvj+75,jvj+76)*/
x[jvj+95]=x[jvj+73] ;z[jvj+95]=z[jvj+73];
x[jvj+96]=x[jvj+75] ;z[jvj+96]=z[jvj+75];
pile[v[22]]=T; pile[WZ1]=763; pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(T,763,jvj+74)*/
pile[WZ1]=159; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(T,159,jvj+76)*/
pile[WZ1]=258; pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(T,258,jvj+74)*/
goto l35;
l31:x[jvj+68]=t[x[jvj+68]];
l30:if((x[jvj+68]<=0)) goto l35;
x[jvj+80]=s[x[jvj+68]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+68];
pile[v[22]]=876; pile[WZ1]=jvj+80; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(876,jvj+80,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=576; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(576,jvj+80,jvj+81)*/
x[jvj+94]=x[jvj+79] ;z[jvj+94]=z[jvj+79];
l32:if((x[jvj+94]<=0)) goto l31;
x[jvj+82]=s[x[jvj+94]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+94];
pile[v[22]]=876; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(876,jvj+82,V58)*/
V58=pile[WZ2]; 
if((V57>=V58)) goto l33;
pile[v[22]]=576; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(576,jvj+82,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[760])( );     /*MEMEX0(jvj+81,jvj+83,jvj+84)*/
if((x[jvj+84]==135)) goto l34;
l33:x[jvj+94]=t[x[jvj+94]];
goto l32;
l34:x[jvj+95]=x[jvj+80] ;z[jvj+95]=z[jvj+80];
x[jvj+96]=x[jvj+82] ;z[jvj+96]=z[jvj+82];
pile[v[22]]=T; pile[WZ1]=258; pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(T,258,jvj+81)*/
goto l35;
l36:if(x[jvj+95]!=incon) goto l37;
l38:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l37:if(x[jvj+96]!=incon) goto l41;
goto l38;
l41:x[jvj+2]=x[jvj+95] ;z[jvj+2]=z[jvj+95];
x[jvj+15]=x[jvj+96] ;z[jvj+15]=z[jvj+96];
goto l40;
l42:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+85)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+87; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+87)*/
pile[v[22]]=jvj+85; pile[WZ1]=111; pile[WZ2]=jvj+86; 
(*f[54])( );     /*TRI1(jvj+85,111,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; pile[WZ2]=103; pile[WZ3]=jvj+88; 
(*f[58])( );     /*TRI3(jvj+86,jvj+87,103,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+89; pile[WZ4]=jvj+88; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+89,jvj+88,R)*/
goto l28;
}
