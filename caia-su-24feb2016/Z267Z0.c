#include "dx.h"
void Z267Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V34=0,V121=0,V186=0,V166=0,V185=0,V183=0,V182=0,V184=0,V165=0,V163=0,V315=0,V314=0,J=0,V336=0,V335=0,V328=0,V385=0,V242=0,V41=0,K=0,V228=0,V232=0,V240=0,V137=0,V149=0,V124=0,V136=0,V78=0,V54=0,V65=0,V114=0,KK=0,V102=0,V88=0,V122=0,V167=0,V168=0,V345=0,V329=0,V19=0,I=0,V52=0,V534=0,V535=0,V536=0,V537=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=202;
x[jvj+1]=15768;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1892&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(111,NNNY,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=408)) goto l80;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(102,NNNY,jvj+32)*/
pile[v[22]]=103; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(103,NNNY,jvj+33)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+33,jvj+34)*/
if((x[jvj+34]==135)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+33,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]==486)) goto l23;
if((x[jvj+37]!=485)) goto l51;
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+32,jvj+58)*/
if((x[jvj+58]!=484)) goto l51;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+59; 
(*f[1446])( );     /*NONUL0(jvj+32,jvj+59)*/
if((x[jvj+59]==135)) goto l35;
l51:pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+33,V41)*/
V41=pile[WZ2]; 
if((V41!=0)) goto l53;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+83; 
(*f[1446])( );     /*NONUL0(jvj+32,jvj+83)*/
if((x[jvj+83]==135)) goto l52;
l53:pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+32,K)*/
K=pile[WZ2]; 
if((K==0)) goto l55;
x[jvj+134]=incon;
V34=V41%K;
if((V34==0)) goto l4;
x[jvj+134]=134 ;z[jvj+134]=134;
l54:NNNT=139;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+134; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+134,jvj+85)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+85; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+85,NNNX)*/
l81:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+118]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+118];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1446])( );     /*NONUL0(jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l82;
l3:x[jvj+118]=t[x[jvj+118]];
l1:if((x[jvj+118]>0)) goto l2;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+119; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+119)*/
NNNT=131;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=111; pile[WZ2]=jvj+168; 
(*f[54])( );     /*TRI1(jvj+167,111,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=jvj+119; pile[WZ2]=107; pile[WZ3]=jvj+169; 
(*f[301])( );     /*TRI11(jvj+168,jvj+119,107,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+120; 
(*f[58])( );     /*TRI3(jvj+169,22,100,jvj+120)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+120; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+120,NNNX)*/
goto l81;
l4:x[jvj+134]=135 ;z[jvj+134]=135;
goto l54;
l9:x[jvj+20]=s[x[jvj+111]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+111];
if((x[jvj+20]==x[jvj+19])) goto l10;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[760])( );     /*MEMEX0(jvj+19,jvj+20,jvj+21)*/
if((x[jvj+21]==134)) goto l72;
l10:x[jvj+111]=t[x[jvj+111]];
l8:if((x[jvj+111]>0)) goto l9;
NNNT=152;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+160)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V163; pile[WZ4]=jvj+163; 
(*f[192])( );     /*QUADRI4(100,41,130,V163,jvj+163)*/
pile[v[22]]=jvj+160; pile[WZ1]=111; pile[WZ2]=jvj+161; 
(*f[54])( );     /*TRI1(jvj+160,111,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+162; 
(*f[58])( );     /*TRI3(jvj+161,jvj+19,103,jvj+162)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+163; pile[WZ4]=jvj+162; pile[WZ5]=jvj+113; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+163,jvj+162,jvj+113)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+113; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+113,NNNX)*/
goto l81;
l11:V166=V182;
l15:pile[v[22]]=V166; pile[WZ1]=V184; 
(*f[1006])( );if(v[102]) goto l14;     /*POWER0(V166,V184,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=117; pile[WZ2]=V165; 
(*f[818])( );     /*MTC0(jvj+23,117,V165)*/
l14:x[jvj+112]=t[x[jvj+112]];
l12:if((x[jvj+112]>0)) goto l13;
pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(117,jvj+23,V163)*/
V163=pile[WZ2]; 
if((x[jvj+111]<=0)) goto l72;
x[jvj+19]=s[x[jvj+111]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+111];
goto l8;
l13:x[jvj+22]=s[x[jvj+112]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+112];
pile[v[22]]=515; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(515,jvj+22,V183)*/
V183=pile[WZ2]; 
V182=V183/V168;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+22,V184)*/
V184=pile[WZ2]; 
V166=incon;
V186=V183%V168;
if((V186==0)) goto l11;
V185=V182+1;
V166=V185;
goto l15;
l17:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+26,V314)*/
V314=pile[WZ2]; 
J=V314;
if((J==0)) goto l56;
V315=V41%J;
if((V315!=0)) goto l56;
l18:x[jvj+25]=t[x[jvj+25]];
l16:if((x[jvj+25]>0)) goto l17;
NNNT=209;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+88)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+88; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+88,NNNX)*/
goto l81;
l20:x[jvj+29]=s[x[jvj+185]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+185];
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+29,V335)*/
V335=pile[WZ2]; 
V328=V335;
if((V328==0)) goto l76;
V336=V329%V328;
if((V336!=0)) goto l76;
l21:x[jvj+185]=t[x[jvj+185]];
l19:if((x[jvj+185]>0)) goto l20;
NNNT=210;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+127; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+127)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+127; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+127,NNNX)*/
goto l81;
l22:NNNT=195;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+35)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+35; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+35,NNNX)*/
goto l81;
l23:pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+38)*/
x[jvj+186]=x[jvj+38] ;z[jvj+186]=z[jvj+38];
l24:if((x[jvj+186]>0)) goto l25;
x[jvj+187]=x[jvj+38] ;z[jvj+187]=z[jvj+38];
l27:if((x[jvj+187]<=0)) goto l29;
x[jvj+42]=s[x[jvj+187]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+187];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+42,jvj+43)*/
if((x[jvj+43]==135)) goto l28;
x[jvj+187]=t[x[jvj+187]];
goto l27;
l25:x[jvj+39]=s[x[jvj+186]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+186];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+39,jvj+40)*/
if((x[jvj+40]==135)) goto l26;
x[jvj+186]=t[x[jvj+186]];
goto l24;
l26:NNNT=153;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+41)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+41; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+41,NNNX)*/
goto l81;
l28:NNNT=194;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+44)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+44; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+44,NNNX)*/
goto l81;
l30:x[jvj+38]=t[x[jvj+38]];
l29:if((x[jvj+38]<=0)) goto l51;
x[jvj+45]=s[x[jvj+38]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+38];
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=484)) goto l30;
x[jvj+47]=x[jvj+45] ;z[jvj+47]=z[jvj+45];
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(jvj+47,jvj+48)*/
pile[v[22]]=509; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(509,jvj+48,jvj+49)*/
x[jvj+188]=x[jvj+49] ;z[jvj+188]=z[jvj+49];
l31:if((x[jvj+188]<=0)) goto l30;
x[jvj+50]=s[x[jvj+188]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+188];
pile[v[22]]=111; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+50,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+51,jvj+52)*/
if((x[jvj+52]!=408)) goto l32;
pile[v[22]]=102; pile[WZ1]=jvj+50; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+50,jvj+53)*/
pile[v[22]]=103; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,jvj+50,jvj+54)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+53; pile[WZ2]=jvj+55; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+53,jvj+55)*/
if((x[jvj+55]==135)) goto l33;
l32:x[jvj+188]=t[x[jvj+188]];
goto l31;
l33:pile[v[22]]=jvj+45; pile[WZ1]=jvj+54; pile[WZ2]=jvj+56; 
(*f[760])( );     /*MEMEX0(jvj+45,jvj+54,jvj+56)*/
if((x[jvj+56]==135)) goto l34;
goto l32;
l34:NNNT=158;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+57)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+57; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+57,NNNX)*/
goto l81;
l35:pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+60)*/
x[jvj+189]=x[jvj+60] ;z[jvj+189]=z[jvj+60];
l36:if((x[jvj+189]>0)) goto l37;
x[jvj+190]=x[jvj+60] ;z[jvj+190]=z[jvj+60];
l39:if((x[jvj+190]>0)) goto l40;
x[jvj+191]=x[jvj+60] ;z[jvj+191]=z[jvj+60];
l43:if((x[jvj+191]<=0)) goto l47;
x[jvj+68]=s[x[jvj+191]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+191];
pile[v[22]]=111; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+68,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=486)) goto l44;
V242=x[jvj+68];
pile[v[22]]=107; pile[WZ1]=jvj+68; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(107,jvj+68,jvj+71)*/
x[jvj+192]=x[jvj+71] ;z[jvj+192]=z[jvj+71];
l45:if((x[jvj+192]<=0)) goto l44;
x[jvj+72]=s[x[jvj+192]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+192];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+72,jvj+73)*/
if((x[jvj+73]==135)) goto l46;
x[jvj+192]=t[x[jvj+192]];
goto l45;
l37:x[jvj+61]=s[x[jvj+189]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+189];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+61,jvj+62)*/
if((x[jvj+62]==135)) goto l38;
x[jvj+189]=t[x[jvj+189]];
goto l36;
l38:x[NNNX]=x[jvj+33] ;z[NNNX]=z[jvj+33];
NNNT=193;
V534=x[jvj+61];
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=V534; 
(*f[134])( );     /*OTA0(107,jvj+33,V534)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+33)*/
goto l81;
l40:x[jvj+63]=s[x[jvj+190]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+190];
pile[v[22]]=111; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+63,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]!=52)) goto l41;
V385=x[jvj+63];
pile[v[22]]=102; pile[WZ1]=jvj+63; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,jvj+63,jvj+66)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+66,jvj+67)*/
if((x[jvj+67]==135)) goto l42;
l41:x[jvj+190]=t[x[jvj+190]];
goto l39;
l42:x[NNNX]=x[jvj+33] ;z[NNNX]=z[jvj+33];
NNNT=213;
V535=V385;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=V535; 
(*f[134])( );     /*OTA0(107,jvj+33,V535)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+33)*/
goto l81;
l44:x[jvj+191]=t[x[jvj+191]];
goto l43;
l46:x[NNNX]=x[jvj+33] ;z[NNNX]=z[jvj+33];
NNNT=192;
V536=V242;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=V536; 
(*f[134])( );     /*OTA0(107,jvj+33,V536)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+33)*/
goto l81;
l48:x[jvj+60]=t[x[jvj+60]];
l47:if((x[jvj+60]<=0)) goto l51;
x[jvj+74]=s[x[jvj+60]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+60];
pile[v[22]]=111; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+74,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+76]!=52)) goto l48;
pile[v[22]]=102; pile[WZ1]=jvj+74; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+74,jvj+77)*/
pile[v[22]]=111; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+77,jvj+78)*/
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]!=486)) goto l48;
pile[v[22]]=107; pile[WZ1]=jvj+77; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(107,jvj+77,jvj+80)*/
x[jvj+193]=x[jvj+80] ;z[jvj+193]=z[jvj+80];
l49:if((x[jvj+193]<=0)) goto l48;
x[jvj+81]=s[x[jvj+193]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+193];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+81,jvj+82)*/
if((x[jvj+82]==135)) goto l50;
x[jvj+193]=t[x[jvj+193]];
goto l49;
l50:x[NNNX]=x[jvj+33] ;z[NNNX]=z[jvj+33];
NNNT=212;
V537=x[jvj+74];
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=V537; 
(*f[134])( );     /*OTA0(107,jvj+33,V537)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+33)*/
goto l81;
l52:NNNT=140;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+84)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+84; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+84,NNNX)*/
goto l81;
l55:pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(100,jvj+32,jvj+86)*/
if((x[jvj+86]!=484)) goto l56;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l56;     /*NDD0(jvj+32,jvj+24)*/
pile[v[22]]=202; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(202,jvj+24,jvj+87)*/
if((x[jvj+87]!=68)) goto l56;
pile[v[22]]=365; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(365,jvj+24,jvj+25)*/
goto l16;
l56:pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(130,jvj+32,V228)*/
V228=pile[WZ2]; 
if((V228==0)) goto l71;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+89; 
(*f[887])( );     /*VARND0(jvj+33,jvj+89)*/
for(i=x[jvj+89],V232=0;i>0;i=t[i],V232++)  ;
if((V232==1)) goto l57;
V137=abs(V228);
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(111,jvj+33,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(101,jvj+91,jvj+92)*/
if((x[jvj+92]==485)) goto l58;
if((x[jvj+92]!=486)) goto l71;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+105; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+105)*/
x[jvj+196]=x[jvj+105] ;z[jvj+196]=z[jvj+105];
l68:if((x[jvj+196]<=0)) goto l71;
x[jvj+106]=s[x[jvj+196]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+196];
pile[v[22]]=130; pile[WZ1]=jvj+106; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(130,jvj+106,V114)*/
V114=pile[WZ2]; 
KK=V114;
if((KK==0)) goto l69;
V102=abs(KK);
pile[v[22]]=V137; pile[WZ1]=V102; 
(*f[1011])( );     /*PGCD0(V137,V102,V88)*/
V88=pile[WZ2]; 
if((V88==1)) goto l69;
x[jvj+13]=0 ;z[jvj+13]=0;
V121=V102/V88;
x[jvj+11]=d[29];z[jvj+11]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V121; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,V121,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+12,jvj+13)*/
x[jvj+199]=x[jvj+105] ;z[jvj+199]=z[jvj+105];
l89:if((x[jvj+199]>0)) goto l90;
l70:pile[v[22]]=jvj+13; pile[WZ1]=jvj+107; 
(*f[299])( );     /*COPEL0(jvj+13,jvj+107)*/
V122=V137/V88;
NNNT=150;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+152; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+152)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V122; pile[WZ4]=jvj+156; 
(*f[192])( );     /*QUADRI4(100,41,130,V122,jvj+156)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+157; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+157)*/
pile[v[22]]=jvj+157; pile[WZ1]=111; pile[WZ2]=jvj+158; 
(*f[54])( );     /*TRI1(jvj+157,111,jvj+158)*/
pile[v[22]]=jvj+158; pile[WZ1]=jvj+107; pile[WZ2]=107; pile[WZ3]=jvj+159; 
(*f[301])( );     /*TRI11(jvj+158,jvj+107,107,jvj+159)*/
pile[v[22]]=jvj+159; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+154; 
(*f[58])( );     /*TRI3(jvj+159,22,100,jvj+154)*/
pile[v[22]]=jvj+152; pile[WZ1]=111; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+152,111,jvj+153)*/
pile[v[22]]=jvj+153; pile[WZ1]=jvj+154; pile[WZ2]=103; pile[WZ3]=jvj+155; 
(*f[58])( );     /*TRI3(jvj+153,jvj+154,103,jvj+155)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+156; pile[WZ4]=jvj+155; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+156,jvj+155,jvj+108)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+108; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+108,NNNX)*/
goto l81;
l57:V240=abs(V228);
NNNT=177;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+137; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+137)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+139; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+139)*/
pile[WZ3]=V240; pile[WZ4]=jvj+135; 
(*f[192])( );     /*QUADRI4(100,41,130,V240,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=160; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+135,160,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; pile[WZ2]=111; pile[WZ3]=jvj+138; 
(*f[58])( );     /*TRI3(jvj+136,jvj+137,111,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; pile[WZ2]=103; pile[WZ3]=jvj+140; 
(*f[58])( );     /*TRI3(jvj+138,jvj+139,103,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+140; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+140,jvj+90)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+90; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+90,NNNX)*/
goto l81;
l58:pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+93)*/
x[jvj+194]=x[jvj+93] ;z[jvj+194]=z[jvj+93];
l59:if((x[jvj+194]>0)) goto l60;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+97)*/
l63:if((x[jvj+97]<=0)) goto l71;
x[jvj+98]=s[x[jvj+97]] ;z[jvj+98]=(x[jvj+98]<=sepcte) ? x[jvj+98] : z[jvj+97];
pile[v[22]]=111; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(111,jvj+98,jvj+99)*/
pile[v[22]]=101; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(101,jvj+99,jvj+100)*/
if((x[jvj+100]!=486)) goto l64;
pile[v[22]]=107; pile[WZ1]=jvj+98; pile[WZ2]=jvj+101; 
(*f[33])( );     /*FNDE0(107,jvj+98,jvj+101)*/
x[jvj+195]=x[jvj+101] ;z[jvj+195]=z[jvj+101];
l65:if((x[jvj+195]<=0)) goto l64;
x[jvj+102]=s[x[jvj+195]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+195];
pile[v[22]]=130; pile[WZ1]=jvj+102; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+102,V78)*/
V78=pile[WZ2]; 
V54=V78;
V65=V54%V137;
if((V65==V54)) goto l66;
x[jvj+9]=0 ;z[jvj+9]=0;
x[jvj+7]=d[29];z[jvj+7]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V65; pile[WZ4]=jvj+8; 
(*f[192])( );     /*QUADRI4(100,41,130,V65,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,jvj+9)*/
x[jvj+197]=x[jvj+101] ;z[jvj+197]=z[jvj+101];
l83:if((x[jvj+197]>0)) goto l84;
l67:pile[v[22]]=jvj+9; pile[WZ1]=jvj+103; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+103)*/
NNNT=149;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+149; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=111; pile[WZ2]=jvj+150; 
(*f[54])( );     /*TRI1(jvj+149,111,jvj+150)*/
pile[v[22]]=jvj+150; pile[WZ1]=jvj+103; pile[WZ2]=107; pile[WZ3]=jvj+151; 
(*f[301])( );     /*TRI11(jvj+150,jvj+103,107,jvj+151)*/
pile[v[22]]=jvj+151; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+104; 
(*f[58])( );     /*TRI3(jvj+151,22,100,jvj+104)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+104; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+98,jvj+104,NNNX)*/
goto l81;
l60:x[jvj+94]=s[x[jvj+194]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+194];
pile[v[22]]=130; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(130,jvj+94,V149)*/
V149=pile[WZ2]; 
V124=V149;
V136=V124%V137;
if((V136==V124)) goto l61;
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+15]=d[29];z[jvj+15]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V136; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V136,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[196])( );     /*PLUF0(jvj+15,jvj+16,jvj+17)*/
x[jvj+201]=x[jvj+93] ;z[jvj+201]=z[jvj+93];
l95:if((x[jvj+201]>0)) goto l96;
l62:pile[v[22]]=jvj+17; pile[WZ1]=jvj+95; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+95)*/
NNNT=151;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+141)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V137; pile[WZ4]=jvj+145; 
(*f[192])( );     /*QUADRI4(100,41,130,V137,jvj+145)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+146; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=111; pile[WZ2]=jvj+147; 
(*f[54])( );     /*TRI1(jvj+146,111,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+95; pile[WZ2]=107; pile[WZ3]=jvj+148; 
(*f[301])( );     /*TRI11(jvj+147,jvj+95,107,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+143; 
(*f[58])( );     /*TRI3(jvj+148,22,100,jvj+143)*/
pile[v[22]]=jvj+141; pile[WZ1]=111; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,111,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; pile[WZ2]=103; pile[WZ3]=jvj+144; 
(*f[58])( );     /*TRI3(jvj+142,jvj+143,103,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+145; pile[WZ4]=jvj+144; pile[WZ5]=jvj+96; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+145,jvj+144,jvj+96)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+96; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+96,NNNX)*/
goto l81;
l61:x[jvj+194]=t[x[jvj+194]];
goto l59;
l64:x[jvj+97]=t[x[jvj+97]];
goto l63;
l66:x[jvj+195]=t[x[jvj+195]];
goto l65;
l69:x[jvj+196]=t[x[jvj+196]];
goto l68;
l71:V167=abs(V228);
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(111,jvj+33,jvj+109)*/
pile[v[22]]=101; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(101,jvj+109,jvj+110)*/
if((x[jvj+110]!=486)) goto l72;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+111; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+111)*/
for(i=x[jvj+111],V168=0;i>0;i=t[i],V168++)  ;
pile[v[22]]=V167; pile[WZ1]=jvj+112; 
(*f[1007])( );if(v[102]) goto l72;     /*DECFACTPREM0(V167,jvj+112)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(1,117,jvj+23)*/
goto l12;
l72:pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(111,jvj+32,jvj+114)*/
pile[v[22]]=101; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(101,jvj+114,jvj+115)*/
if((x[jvj+115]==52)) goto l73;
if((x[jvj+115]!=486)) goto l74;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+118; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+118)*/
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+2]=d[76];z[jvj+2]=0;
goto l1;
l73:pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(102,jvj+32,jvj+116)*/
NNNT=214;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=111; pile[WZ2]=jvj+165; 
(*f[54])( );     /*TRI1(jvj+164,111,jvj+165)*/
pile[v[22]]=jvj+165; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+166; 
(*f[58])( );     /*TRI3(jvj+165,jvj+33,103,jvj+166)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+116; pile[WZ4]=jvj+166; pile[WZ5]=jvj+117; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+116,jvj+166,jvj+117)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+117; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+117,NNNX)*/
goto l81;
l74:pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(111,jvj+33,jvj+121)*/
pile[v[22]]=101; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(101,jvj+121,jvj+122)*/
if((x[jvj+122]!=486)) goto l77;
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(100,jvj+32,jvj+123)*/
if((x[jvj+123]!=484)) goto l77;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+124; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+124)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+27; 
(*f[200])( );if(v[102]) goto l77;     /*NDD0(jvj+32,jvj+27)*/
pile[v[22]]=202; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(202,jvj+27,jvj+125)*/
if((x[jvj+125]==68)) goto l75;
l77:pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(130,jvj+32,V19)*/
V19=pile[WZ2]; 
if((V19!=1)) goto l78;
NNNT=138;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+128; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+128)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+128; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+128,NNNX)*/
goto l81;
l76:x[jvj+124]=t[x[jvj+124]];
l75:if((x[jvj+124]<=0)) goto l77;
x[jvj+126]=s[x[jvj+124]] ;z[jvj+126]=(x[jvj+126]<=sepcte) ? x[jvj+126] : z[jvj+124];
pile[v[22]]=130; pile[WZ1]=jvj+126; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(130,jvj+126,V345)*/
V345=pile[WZ2]; 
V329=V345;
pile[v[22]]=365; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(365,jvj+27,jvj+28)*/
x[jvj+185]=x[jvj+28] ;z[jvj+185]=z[jvj+28];
goto l19;
l78:pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(103,NNNY,jvj+129)*/
pile[v[22]]=130; pile[WZ1]=jvj+129; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(130,jvj+129,I)*/
I=pile[WZ2]; 
if((I>=0)) goto l80;
V52=(-I);
NNNT=148;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V52; pile[WZ4]=jvj+130; 
(*f[192])( );     /*QUADRI4(100,41,130,V52,jvj+130)*/
pile[v[22]]=jvj+129; pile[WZ1]=jvj+130; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+129,jvj+130,NNNX)*/
goto l81;
l80:x[NNNX]=NNNT=incon;
l79:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l82:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+131; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=111; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+131,111,jvj+132)*/
pile[v[22]]=jvj+132; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+133; 
(*f[58])( );     /*TRI3(jvj+132,jvj+33,103,jvj+133)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+133; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+133,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+5,jvj+6)*/
goto l3;
l84:x[jvj+170]=s[x[jvj+197]] ;z[jvj+170]=(x[jvj+170]<=sepcte) ? x[jvj+170] : z[jvj+197];
pile[v[22]]=jvj+170; pile[WZ1]=jvj+102; pile[WZ2]=jvj+171; 
(*f[760])( );     /*MEMEX0(jvj+170,jvj+102,jvj+171)*/
if((x[jvj+171]==135)) goto l85;
x[jvj+197]=t[x[jvj+197]];
goto l83;
l85:x[jvj+172]=0 ;z[jvj+172]=0;
x[jvj+198]=x[jvj+101] ;z[jvj+198]=z[jvj+101];
l86:if((x[jvj+198]>0)) goto l87;
x[jvj+182]=x[jvj+172] ;z[jvj+182]=z[jvj+172];
l5:if((x[jvj+182]<=0)) goto l67;
x[jvj+10]=s[x[jvj+182]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+182];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
x[jvj+182]=t[x[jvj+182]];
goto l5;
l87:x[jvj+173]=s[x[jvj+198]] ;z[jvj+173]=(x[jvj+173]<=sepcte) ? x[jvj+173] : z[jvj+198];
if((x[jvj+173]==x[jvj+170])) goto l88;
pile[v[22]]=jvj+172; pile[WZ1]=jvj+173; 
(*f[68])( );     /*PLUE0(jvj+172,jvj+173)*/
l88:x[jvj+198]=t[x[jvj+198]];
goto l86;
l90:x[jvj+174]=s[x[jvj+199]] ;z[jvj+174]=(x[jvj+174]<=sepcte) ? x[jvj+174] : z[jvj+199];
pile[v[22]]=jvj+174; pile[WZ1]=jvj+106; pile[WZ2]=jvj+175; 
(*f[760])( );     /*MEMEX0(jvj+174,jvj+106,jvj+175)*/
if((x[jvj+175]==135)) goto l91;
x[jvj+199]=t[x[jvj+199]];
goto l89;
l91:x[jvj+176]=0 ;z[jvj+176]=0;
x[jvj+200]=x[jvj+105] ;z[jvj+200]=z[jvj+105];
l92:if((x[jvj+200]>0)) goto l93;
x[jvj+183]=x[jvj+176] ;z[jvj+183]=z[jvj+176];
l6:if((x[jvj+183]<=0)) goto l70;
x[jvj+14]=s[x[jvj+183]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+183];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
x[jvj+183]=t[x[jvj+183]];
goto l6;
l93:x[jvj+177]=s[x[jvj+200]] ;z[jvj+177]=(x[jvj+177]<=sepcte) ? x[jvj+177] : z[jvj+200];
if((x[jvj+177]==x[jvj+174])) goto l94;
pile[v[22]]=jvj+176; pile[WZ1]=jvj+177; 
(*f[68])( );     /*PLUE0(jvj+176,jvj+177)*/
l94:x[jvj+200]=t[x[jvj+200]];
goto l92;
l96:x[jvj+178]=s[x[jvj+201]] ;z[jvj+178]=(x[jvj+178]<=sepcte) ? x[jvj+178] : z[jvj+201];
pile[v[22]]=jvj+178; pile[WZ1]=jvj+94; pile[WZ2]=jvj+179; 
(*f[760])( );     /*MEMEX0(jvj+178,jvj+94,jvj+179)*/
if((x[jvj+179]==135)) goto l97;
x[jvj+201]=t[x[jvj+201]];
goto l95;
l97:x[jvj+180]=0 ;z[jvj+180]=0;
x[jvj+202]=x[jvj+93] ;z[jvj+202]=z[jvj+93];
l98:if((x[jvj+202]>0)) goto l99;
x[jvj+184]=x[jvj+180] ;z[jvj+184]=z[jvj+180];
l7:if((x[jvj+184]<=0)) goto l62;
x[jvj+18]=s[x[jvj+184]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+184];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
x[jvj+184]=t[x[jvj+184]];
goto l7;
l99:x[jvj+181]=s[x[jvj+202]] ;z[jvj+181]=(x[jvj+181]<=sepcte) ? x[jvj+181] : z[jvj+202];
if((x[jvj+181]==x[jvj+178])) goto l100;
pile[v[22]]=jvj+180; pile[WZ1]=jvj+181; 
(*f[68])( );     /*PLUE0(jvj+180,jvj+181)*/
l100:x[jvj+202]=t[x[jvj+202]];
goto l98;
}
