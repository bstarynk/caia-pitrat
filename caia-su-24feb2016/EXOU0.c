#include "dx.h"
void EXOU0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RA=0,RB=0,V30=0,V45=0,V31=0,V48=0,V60=0,V61=0,V62=0,V57=0,V54=0,V55=0,V56=0,RES=0,V58=0;
int RN;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=11631;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1307&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RN=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+17]=vo[16];z[jvj+17]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(509,jvj+17,jvj+18)*/
l11:if((x[jvj+18]>0)) goto l12;
x[jvj+27]=vo[16];z[jvj+27]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(509,jvj+27,jvj+28)*/
l16:if((x[jvj+28]>0)) goto l17;
x[jvj+51]=vo[16];z[jvj+51]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(509,jvj+51,jvj+52)*/
l38:if((x[jvj+52]>0)) goto l39;
l42:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+5]=s[x[jvj+59]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+59];
pile[v[22]]=jvj+5; 
(*f[543])( );     /*ETUCONTR0(jvj+5)*/
pile[WZ1]=jvj+6; 
(*f[1553])( );     /*COUTREG0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[766])( );if(v[102]) goto l4;     /*VALGLO0(jvj+6,RA)*/
RA=pile[WZ1]; 
pile[v[22]]=jvj+5; 
(*f[1554])( );     /*CRETUCONTR0(jvj+5)*/
pile[WZ1]=204; pile[WZ2]=RA; 
(*f[43])( );     /*CHGC2(jvj+5,204,RA)*/
l4:x[jvj+59]=t[x[jvj+59]];
l2:if((x[jvj+59]>0)) goto l3;
x[jvj+60]=x[jvj+15] ;z[jvj+60]=z[jvj+15];
l5:if((x[jvj+60]>0)) goto l6;
pile[v[22]]=jvj+2; pile[WZ1]=1455; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+2,1455,67)*/
l7:pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==48)) goto l10;
l8:pile[v[22]]=jvj+9; 
(*f[543])( );     /*ETUCONTR0(jvj+9)*/
pile[WZ1]=jvj+16; 
(*f[1553])( );     /*COUTREG0(jvj+9,jvj+16)*/
pile[v[22]]=jvj+16; 
(*f[766])( );if(v[102]) goto l10;     /*VALGLO0(jvj+16,RB)*/
RB=pile[WZ1]; 
pile[v[22]]=jvj+9; 
(*f[1554])( );     /*CRETUCONTR0(jvj+9)*/
pile[WZ1]=204; pile[WZ2]=RB; 
(*f[43])( );     /*CHGC2(jvj+9,204,RB)*/
pile[v[22]]=1417; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1417,jvj+9,jvj+12)*/
if((x[jvj+12]!=0)) goto l10;
pile[v[22]]=jvj+2; pile[WZ1]=1455; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+2,1455,67)*/
l10:x[jvj+61]=t[x[jvj+61]];
l9:if((x[jvj+61]<=0)) goto l13;
x[jvj+9]=s[x[jvj+61]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+61];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+9,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=48)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+15)*/
x[jvj+59]=x[jvj+15] ;z[jvj+59]=z[jvj+15];
goto l2;
l6:x[jvj+7]=s[x[jvj+60]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+60];
pile[v[22]]=1417; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1417,jvj+7,jvj+8)*/
if((x[jvj+8]!=0)) goto l7;
x[jvj+60]=t[x[jvj+60]];
goto l5;
l12:x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+2,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=55)) goto l13;
pile[v[22]]=1594; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1594,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l13;
l1:pile[v[22]]=1455; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1455,jvj+2,jvj+4)*/
l13:x[jvj+18]=t[x[jvj+18]];
goto l11;
l14:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+21)*/
pile[v[22]]=jvj+2; pile[WZ1]=1455; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+2,1455,68)*/
x[jvj+61]=x[jvj+21] ;z[jvj+61]=z[jvj+21];
goto l9;
l17:x[jvj+22]=s[x[jvj+28]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+28];
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+22,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=55)) goto l18;
pile[v[22]]=1455; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1455,jvj+22,jvj+23)*/
if((x[jvj+23]==67)) goto l18;
l15:pile[v[22]]=1594; pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1594,jvj+22,jvj+26)*/
if((x[jvj+26]==68)) goto l18;
l19:pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+31)*/
x[jvj+62]=x[jvj+31] ;z[jvj+62]=z[jvj+31];
l20:if((x[jvj+62]<=0)) goto l18;
x[jvj+24]=s[x[jvj+62]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+62];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+24,jvj+25)*/
if((x[jvj+25]<=0)) goto l21;
x[jvj+32]=s[x[jvj+25]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+25];
pile[v[22]]=509; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(509,jvj+32,jvj+33)*/
x[jvj+63]=x[jvj+33] ;z[jvj+63]=z[jvj+33];
l22:if((x[jvj+63]<=0)) goto l21;
x[jvj+34]=s[x[jvj+63]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+63];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+24,jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l24;
l23:x[jvj+63]=t[x[jvj+63]];
goto l22;
l18:x[jvj+28]=t[x[jvj+28]];
goto l16;
l21:x[jvj+62]=t[x[jvj+62]];
goto l20;
l24:pile[v[22]]=jvj+22; pile[WZ1]=1455; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+22,1455,67)*/
goto l23;
l27:x[jvj+39]=s[x[jvj+64]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+64];
pile[v[22]]=jvj+39; 
(*f[1555])( );     /*CALCARDANT0(jvj+39,V30)*/
V30=pile[WZ1]; 
pile[v[22]]=jvj+40; pile[WZ1]=117; pile[WZ2]=V30; 
(*f[186])( );     /*BTC0(jvj+40,117,V30)*/
x[jvj+64]=t[x[jvj+64]];
l26:if((x[jvj+64]>0)) goto l27;
pile[v[22]]=117; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(117,jvj+40,V45)*/
V45=pile[WZ2]; 
V31=V45;
pile[v[22]]=jvj+36; pile[WZ1]=V31; pile[WZ2]=jvj+56; pile[WZ3]=jvj+57; pile[WZ4]=jvj+58; pile[WZ5]=jvj+50; 
(*f[1304])( );     /*VALEXAM0(jvj+36,V31,jvj+56,jvj+57,jvj+58,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=RN; 
(*f[1305])( );if(v[102]) goto l40;     /*VALGLO2(jvj+50,RN,RES)*/
RES=pile[WZ2]; 
if((v[29]<=0)) goto l36;
x[jvj+48]=vo[14];z[jvj+48]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(1226,jvj+48,jvj+49)*/
if((x[jvj+49]!=67)) goto l36;
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V60; pile[WZ2]=55; 
(*f[42])( );     /*SRA1(135,V60,55,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=30; pile[WZ1]=V61; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,V61,42,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
pile[v[22]]=jvj+36; 
(*f[868])( );     /*SORCONTR0(jvj+36)*/
l36:if((v[35]>0)) goto l37;
if((v[33]<=0)) goto l40;
x[jvj+46]=vo[14];z[jvj+46]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1226,jvj+46,jvj+47)*/
if((x[jvj+47]==67)) goto l37;
l40:x[jvj+52]=t[x[jvj+52]];
goto l38;
l29:x[jvj+56]=250 ;z[jvj+56]=250;
l30:x[jvj+57]=incon;
pile[v[22]]=1228; pile[WZ1]=jvj+36; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1228,jvj+36,jvj+42)*/
x[jvj+66]=x[jvj+42] ;z[jvj+66]=z[jvj+42];
x[jvj+57]=x[jvj+66] ;z[jvj+57]=z[jvj+66];
l32:x[jvj+58]=incon;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+45; 
(*f[887])( );     /*VARND0(jvj+36,jvj+45)*/
for(i=x[jvj+45],V48=0;i>0;i=t[i],V48++)  ;
if((V48!=1)) goto l33;
pile[WZ1]=jvj+43; 
(*f[887])( );     /*VARND0(jvj+36,jvj+43)*/
if((x[jvj+43]<=0)) goto l33;
x[jvj+67]=s[x[jvj+43]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+43];
x[jvj+58]=x[jvj+67] ;z[jvj+58]=z[jvj+67];
l33:pile[v[22]]=1581; pile[WZ1]=jvj+36; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1581,jvj+36,jvj+44)*/
if((x[jvj+44]>0)) goto l34;
if(x[jvj+58]==incon) goto l35;
l41:pile[v[22]]=107; pile[WZ1]=jvj+36; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(107,jvj+36,jvj+55)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(0,117,jvj+40)*/
x[jvj+64]=x[jvj+55] ;z[jvj+64]=z[jvj+55];
goto l26;
l31:x[jvj+57]=250 ;z[jvj+57]=250;
goto l32;
l34:x[jvj+68]=s[x[jvj+44]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+44];
x[jvj+58]=x[jvj+68] ;z[jvj+58]=z[jvj+68];
goto l41;
l35:x[jvj+58]=250 ;z[jvj+58]=250;
goto l41;
l37:V57=x[jvj+36];
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V54; pile[WZ2]=576; 
(*f[42])( );     /*SRA1(135,V54,576,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V57; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(20,V57,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=RES; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,RES,V56,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
pile[v[22]]=jvj+50; 
(*f[1306])( );     /*SORJGT0(jvj+50)*/
goto l40;
l39:x[jvj+36]=s[x[jvj+52]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+52];
pile[v[22]]=111; pile[WZ1]=jvj+36; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+36,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=55)) goto l40;
pile[v[22]]=1455; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1455,jvj+36,jvj+37)*/
if((x[jvj+37]==67)) goto l40;
l25:pile[v[22]]=1594; pile[WZ1]=jvj+36; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1594,jvj+36,jvj+38)*/
if((x[jvj+38]==68)) goto l40;
l28:x[jvj+56]=incon;
pile[v[22]]=1191; pile[WZ1]=jvj+36; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1191,jvj+36,jvj+41)*/
x[jvj+65]=x[jvj+41] ;z[jvj+65]=z[jvj+41];
x[jvj+56]=x[jvj+65] ;z[jvj+56]=z[jvj+65];
goto l30;
}
