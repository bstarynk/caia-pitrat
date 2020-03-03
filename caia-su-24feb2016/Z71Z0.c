#include "dx.h"
void Z71Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V128=0,V40=0,V130=0,V43=0,V90=0,V91=0,V92=0,V93=0,V114=0,V76=0,V58=0,V67=0,I=0,V62=0,V121=0,V109=0,V100=0,V84=0,V18=0,K=0,V28=0,L=0,V34=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=95;
x[jvj+1]=15572;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1877&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,NNNY,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=26)) goto l24;
x[jvj+17]=d[20];z[jvj+17]=0;
l9:if((x[jvj+17]>0)) goto l10;
x[jvj+27]=d[20];z[jvj+27]=0;
l14:if((x[jvj+27]>0)) goto l15;
x[jvj+35]=d[20];z[jvj+35]=0;
l17:if((x[jvj+35]>0)) goto l18;
x[jvj+43]=d[20];z[jvj+43]=0;
l21:if((x[jvj+43]<=0)) goto l24;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=NNNY; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+44,NNNY,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=484)) goto l22;
pile[v[22]]=268; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+44,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+47,NNNY,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+2,jvj+48)*/
if(x[jvj+48]!=96&&x[jvj+48]!=89&&x[jvj+48]!=41&&x[jvj+48]!=20&&x[jvj+48]!=128&&x[jvj+48]!=570&&x[jvj+48]!=1317) goto l22;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+49; 
(*f[200])( );if(v[102]) goto l22;     /*NDD0(jvj+45,jvj+49)*/
x[jvj+5]=x[jvj+49] ;z[jvj+5]=z[jvj+49];
pile[v[22]]=202; pile[WZ1]=jvj+5; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(202,jvj+5,jvj+50)*/
if((x[jvj+50]!=68)) goto l22;
if((x[jvj+3]=w[x[jvj+48]][3])==incon) goto l23;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l23;     /*FNDZ0(jvj+2,jvj+3,V128,jvj+4)*/
V128=pile[WZ2]; 
V40=V128;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
x[jvj+86]=x[jvj+6] ;z[jvj+86]=z[jvj+6];
l1:if((x[jvj+86]<=0)) goto l23;
x[jvj+7]=s[x[jvj+86]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+86];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ3]=jvj+8; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+7,jvj+3,V130,jvj+8)*/
V130=pile[WZ2]; 
V43=V130;
if((V40==V43)) goto l22;
l2:x[jvj+86]=t[x[jvj+86]];
goto l1;
l8:x[jvj+88]=t[x[jvj+88]];
l7:if((x[jvj+88]<=0)) goto l16;
x[jvj+14]=s[x[jvj+88]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+88];
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+14,V114)*/
V114=pile[WZ2]; 
if((V114!=V109)) goto l8;
NNNT=203;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+34)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+34; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+34,NNNX)*/
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l10:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=NNNY; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+18,NNNY,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=486)) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+22)*/
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+18,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=NNNY; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+23,NNNY,jvj+24)*/
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+24,V76)*/
V76=pile[WZ2]; 
V58=V76;
x[jvj+89]=x[jvj+22] ;z[jvj+89]=z[jvj+22];
l12:if((x[jvj+89]<=0)) goto l11;
x[jvj+25]=s[x[jvj+89]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+89];
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+25,V67)*/
V67=pile[WZ2]; 
I=V67;
if((I==0)) goto l13;
V62=V58%I;
if((V62==0)) goto l13;
NNNT=123;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+26)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+26; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+26,NNNX)*/
goto l31;
l11:x[jvj+17]=t[x[jvj+17]];
goto l9;
l13:x[jvj+89]=t[x[jvj+89]];
goto l12;
l15:x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=NNNY; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+28,NNNY,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l16;
pile[v[22]]=268; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+28,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=NNNY; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+31,NNNY,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+32,V121)*/
V121=pile[WZ2]; 
pile[v[22]]=jvj+29; pile[WZ1]=jvj+33; 
(*f[200])( );if(v[102]) goto l16;     /*NDD0(jvj+29,jvj+33)*/
V109=V121;
x[jvj+12]=x[jvj+33] ;z[jvj+12]=z[jvj+33];
pile[v[22]]=489; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(489,jvj+12,jvj+13)*/
x[jvj+88]=x[jvj+13] ;z[jvj+88]=z[jvj+13];
goto l7;
l16:x[jvj+27]=t[x[jvj+27]];
goto l14;
l18:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=jvj+36; pile[WZ1]=NNNY; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+36,NNNY,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+37,jvj+38)*/
if((x[jvj+38]!=484)) goto l19;
pile[v[22]]=268; pile[WZ1]=jvj+36; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+36,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=NNNY; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+39,NNNY,jvj+40)*/
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+40,V100)*/
V100=pile[WZ2]; 
pile[v[22]]=jvj+37; pile[WZ1]=jvj+41; 
(*f[200])( );if(v[102]) goto l19;     /*NDD0(jvj+37,jvj+41)*/
V84=V100;
x[jvj+9]=x[jvj+41] ;z[jvj+9]=z[jvj+41];
pile[v[22]]=280; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(280,jvj+9,V92)*/
V92=pile[WZ2]; 
if((V92>V84)) goto l20;
l6:pile[v[22]]=164; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(164,jvj+9,V93)*/
V93=pile[WZ2]; 
if((V93<V84)) goto l20;
l3:pile[v[22]]=1553; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1553,jvj+9,jvj+10)*/
x[jvj+87]=x[jvj+10] ;z[jvj+87]=z[jvj+10];
l4:if((x[jvj+87]<=0)) goto l19;
x[jvj+11]=s[x[jvj+87]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+87];
pile[v[22]]=280; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(280,jvj+11,V90)*/
V90=pile[WZ2]; 
if((V84<V90)) goto l5;
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(164,jvj+11,V91)*/
V91=pile[WZ2]; 
if((V84<=V91)) goto l20;
l5:x[jvj+87]=t[x[jvj+87]];
goto l4;
l19:x[jvj+35]=t[x[jvj+35]];
goto l17;
l20:NNNT=191;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+42)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+42; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+42,NNNX)*/
goto l31;
l22:x[jvj+43]=t[x[jvj+43]];
goto l21;
l23:NNNT=111;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+51)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+51; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+51,NNNX)*/
goto l31;
l24:if(x[jvj+16]!=25&&x[jvj+16]!=26&&x[jvj+16]!=27&&x[jvj+16]!=28&&x[jvj+16]!=29&&x[jvj+16]!=30) goto l30;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,NNNY,jvj+52)*/
if((x[jvj+52]!=22)) goto l30;
pile[v[22]]=102; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,NNNY,jvj+53)*/
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=485)) goto l30;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,NNNY,jvj+56)*/
pile[v[22]]=111; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,jvj+56,jvj+57)*/
pile[v[22]]=101; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+57,jvj+58)*/
if((x[jvj+58]!=485)) goto l30;
pile[v[22]]=107; pile[WZ1]=jvj+53; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(107,jvj+53,jvj+59)*/
pile[WZ1]=jvj+56; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(107,jvj+56,jvj+60)*/
x[jvj+90]=x[jvj+59] ;z[jvj+90]=z[jvj+59];
l25:if((x[jvj+90]<=0)) goto l30;
x[jvj+61]=s[x[jvj+90]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+90];
pile[v[22]]=130; pile[WZ1]=jvj+61; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+61,V18)*/
V18=pile[WZ2]; 
K=V18;
if((K==0)) goto l26;
x[jvj+92]=x[jvj+59] ;z[jvj+92]=z[jvj+59];
l32:if((x[jvj+92]>0)) goto l33;
l26:x[jvj+90]=t[x[jvj+90]];
goto l25;
l30:x[NNNX]=NNNT=incon;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l33:x[jvj+78]=s[x[jvj+92]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+92];
pile[v[22]]=jvj+78; pile[WZ1]=jvj+61; pile[WZ2]=jvj+79; 
(*f[760])( );     /*MEMEX0(jvj+78,jvj+61,jvj+79)*/
if((x[jvj+79]==135)) goto l34;
x[jvj+92]=t[x[jvj+92]];
goto l32;
l34:x[jvj+80]=0 ;z[jvj+80]=0;
x[jvj+93]=x[jvj+59] ;z[jvj+93]=z[jvj+59];
l35:if((x[jvj+93]>0)) goto l36;
x[jvj+62]=x[jvj+80] ;z[jvj+62]=z[jvj+80];
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[299])( );     /*COPEL0(jvj+62,jvj+63)*/
x[jvj+91]=x[jvj+60] ;z[jvj+91]=z[jvj+60];
l27:if((x[jvj+91]<=0)) goto l26;
x[jvj+64]=s[x[jvj+91]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+91];
pile[v[22]]=130; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(130,jvj+64,V28)*/
V28=pile[WZ2]; 
L=V28;
if((L==0)) goto l28;
x[jvj+94]=x[jvj+60] ;z[jvj+94]=z[jvj+60];
l38:if((x[jvj+94]>0)) goto l39;
l28:x[jvj+91]=t[x[jvj+91]];
goto l27;
l36:x[jvj+81]=s[x[jvj+93]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+93];
if((x[jvj+81]==x[jvj+78])) goto l37;
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; 
(*f[68])( );     /*PLUE0(jvj+80,jvj+81)*/
l37:x[jvj+93]=t[x[jvj+93]];
goto l35;
l39:x[jvj+82]=s[x[jvj+94]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+94];
pile[v[22]]=jvj+82; pile[WZ1]=jvj+64; pile[WZ2]=jvj+83; 
(*f[760])( );     /*MEMEX0(jvj+82,jvj+64,jvj+83)*/
if((x[jvj+83]==135)) goto l40;
x[jvj+94]=t[x[jvj+94]];
goto l38;
l40:x[jvj+84]=0 ;z[jvj+84]=0;
x[jvj+95]=x[jvj+60] ;z[jvj+95]=z[jvj+60];
l41:if((x[jvj+95]>0)) goto l42;
x[jvj+65]=x[jvj+84] ;z[jvj+65]=z[jvj+84];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[299])( );     /*COPEL0(jvj+65,jvj+66)*/
V34=K-L;
NNNT=28;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+16; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+16,jvj+68)*/
pile[WZ3]=485; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+73)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V34; pile[WZ4]=jvj+74; 
(*f[192])( );     /*QUADRI4(100,41,130,V34,jvj+74)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+73,jvj+72)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+72; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+63,jvj+72,107)*/
pile[v[22]]=jvj+72; pile[WZ1]=107; pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(jvj+72,107,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+66; pile[WZ2]=107; pile[WZ3]=jvj+77; 
(*f[301])( );     /*TRI11(jvj+76,jvj+66,107,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+77,22,100,jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+69,jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+72,jvj+71,jvj+67)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+67; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+67,NNNX)*/
goto l31;
l42:x[jvj+85]=s[x[jvj+95]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+95];
if((x[jvj+85]==x[jvj+82])) goto l43;
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; 
(*f[68])( );     /*PLUE0(jvj+84,jvj+85)*/
l43:x[jvj+95]=t[x[jvj+95]];
goto l41;
}
