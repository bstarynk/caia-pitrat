#include "dx.h"
void NORME1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V123=0,V121=0,V122=0,NR=0,V22=0,V26=0,V89=0,V82=0,V83=0,V84=0,V85=0,V86=0,V87=0,MA=0,MB=0,V67=0,V60=0,DG=0,V79=0,V76=0,V140=0,V141=0,V143=0,V142=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=79;
x[jvj+1]=10743;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1157&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+25]=incon;
v[45]=0;
V22=x[A];
v[200]=V22;
vo[39]=x[B];vz[39]=0;
if((x[B]==129)) goto l6;
if((x[B]!=486)) goto l7;
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=jvj+19; pile[WZ1]=1330; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+19,1330,68)*/
l7:if((v[178]!=1)) goto l8;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(454,jvj+13,jvj+14)*/
l2:if((x[jvj+14]>0)) goto l3;
v[178]=2;
l8:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=1328; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1328,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==169) goto l1;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,A,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==408)) goto l1;
l11:v[20]=0;
pile[v[22]]=A; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(A,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=548; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,548,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+76; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+76,jvj+21)*/
if((v[177]<=0)) goto l10;
x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=jvj+20; pile[WZ1]=502; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(jvj+20,502,jvj+21)*/
l10:x[jvj+22]=vo[16];z[jvj+22]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(905,jvj+22,V26)*/
V26=pile[WZ2]; 
if((V26!=(-9009))) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+21,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=0; pile[WZ2]=102; pile[WZ3]=jvj+21; 
(*f[1147])( );     /*TREQM0(jvj+23,0,102,jvj+21)*/
l12:pile[v[22]]=jvj+21; 
(*f[1148])( );     /*METINV0(jvj+21)*/
(*f[1149])( );     /*BALAI0(jvj+21)*/
(*f[1150])( );     /*NETTOYREG0(jvj+21)*/
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+21,jvj+25)*/
l13:if((x[B]!=129)) goto l14;
x[jvj+26]=vo[13];z[jvj+26]=vz[13];
pile[v[22]]=129; pile[WZ1]=jvj+26; 
(*f[71])( );     /*ENLV0(129,jvj+26)*/
l14:x[jvj+27]=vo[14];z[jvj+27]=vz[14];
V89=x[jvj+27];
pile[v[22]]=jvj+27; pile[WZ1]=0; pile[WZ2]=V89; pile[WZ3]=1330; 
(*f[285])( );     /*ENLY0(jvj+27,0,V89,1330,V82,V83)*/
V82=pile[WZ4]; V83=pile[WZ5]; 
pile[WZ1]=V83; pile[WZ2]=V82; pile[WZ3]=1334; 
(*f[285])( );     /*ENLY0(jvj+27,V83,V82,1334,V84,V85)*/
V84=pile[WZ4]; V85=pile[WZ5]; 
pile[WZ1]=V85; pile[WZ2]=V84; pile[WZ3]=1354; 
(*f[285])( );     /*ENLY0(jvj+27,V85,V84,1354,V86,V87)*/
V86=pile[WZ4]; V87=pile[WZ5]; 
if(x[jvj+25]!=incon) goto l15;
l37:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:if((x[B]==300)) goto l9;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,A,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=408)) goto l9;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,A,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l9;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l9;     /*NDD0(jvj+9,jvj+11)*/
pile[v[22]]=1334; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1334,jvj+11,jvj+12)*/
pile[v[22]]=jvj+3; pile[WZ1]=1334; 
(*f[34])( );     /*CHGC0(jvj+3,1334,jvj+12)*/
l9:pile[v[22]]=jvj+3; pile[WZ1]=1330; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+3,1330,68)*/
goto l11;
l3:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=480; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(480,jvj+15,jvj+16)*/
x[jvj+79]=x[jvj+16] ;z[jvj+79]=z[jvj+16];
l4:if((x[jvj+79]>0)) goto l5;
x[jvj+14]=t[x[jvj+14]];
goto l2;
l5:x[jvj+77]=s[x[jvj+79]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+79];
V123=x[jvj+77];
pile[v[22]]=0; pile[WZ1]=(-3093); 
(*f[37])( );     /*SRA0(0,(-3093),V121)*/
V121=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V123; pile[WZ2]=V121; 
(*f[39])( );     /*SDX0(20,V123,V121,V122)*/
V122=pile[WZ3]; 
V140=V122-1;
V141=0;
l40:if((V141<=V140)) goto l41;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[135])( );     /*LND3(0,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NR; pile[WZ4]=jvj+78; 
(*f[192])( );     /*QUADRI4(100,41,130,NR,jvj+78)*/
pile[v[22]]=274; pile[WZ1]=jvj+77; pile[WZ2]=319; pile[WZ3]=jvj+78; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(274,jvj+77,319,jvj+78,jvj+17)*/
pile[v[22]]=jvj+13; pile[WZ1]=1371; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+13,1371,jvj+17)*/
x[jvj+79]=t[x[jvj+79]];
goto l4;
l6:x[jvj+18]=vo[13];z[jvj+18]=vz[13];
pile[v[22]]=jvj+18; pile[WZ1]=129; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+18,129,68)*/
goto l7;
l15:if((x[B]==1358)) goto l16;
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+25,jvj+28)*/
if((x[jvj+28]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+25,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+29,jvj+30)*/
if(x[jvj+30]!=25&&x[jvj+30]!=26) goto l16;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+31; 
(*f[887])( );     /*VARND0(jvj+25,jvj+31)*/
if((x[jvj+31]!=0)) goto l16;
pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[1159])( );if(v[102]) goto l16;     /*SIMPCT0(jvj+32,jvj+33)*/
l18:if((v[20]!=0)) goto l19;
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+33,jvj+41)*/
if((x[jvj+41]!=22)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+33,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+42,jvj+43)*/
if(x[jvj+43]!=25&&x[jvj+43]!=26&&x[jvj+43]!=27&&x[jvj+43]!=28&&x[jvj+43]!=29&&x[jvj+43]!=30&&x[jvj+43]!=625) goto l19;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+33,jvj+44)*/
pile[v[22]]=103; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+33,jvj+45)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=jvj+33; pile[WZ3]=jvj+43; pile[WZ4]=jvj+46; 
(*f[1156])( );if(v[102]) goto l19;     /*DIVFACT0(jvj+44,jvj+45,jvj+33,jvj+43,jvj+46)*/
v[20]=1;
l30:if((v[45]!=0)) goto l37;
x[jvj+57]=incon;
if((v[20]==0)) goto l24;
pile[v[22]]=B; pile[WZ1]=jvj+46; pile[WZ2]=jvj+57; 
(*f[1157])( );if(v[102]) goto l24;     /*NORME1(B,jvj+46,jvj+57)*/
l24:if((v[20]!=0)) goto l28;
if((x[B]==54)) goto l25;
pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+46,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=625)) goto l25;
x[jvj+60]=vo[16];z[jvj+60]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(905,jvj+60,V67)*/
V67=pile[WZ2]; 
if((V67!=(-9009))) goto l25;
pile[v[22]]=54; pile[WZ1]=jvj+46; pile[WZ2]=jvj+57; 
(*f[1157])( );if(v[102]) goto l25;     /*NORME1(54,jvj+46,jvj+57)*/
l25:x[jvj+61]=vo[16];z[jvj+61]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+61; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(905,jvj+61,V60)*/
V60=pile[WZ2]; 
if((V60!=(-9009))) goto l28;
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+46,jvj+62)*/
if((x[jvj+62]!=22)) goto l28;
pile[v[22]]=111; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+46,jvj+63)*/
pile[v[22]]=101; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+63,jvj+64)*/
if(x[jvj+64]!=29&&x[jvj+64]!=30&&x[jvj+64]!=25&&x[jvj+64]!=55&&x[jvj+64]!=48) goto l28;
pile[v[22]]=jvj+46; 
(*f[897])( );if(v[102]) goto l28;     /*DGR0(jvj+46,DG)*/
DG=pile[WZ1]; 
if((DG>2)) goto l23;
if((DG==2)) goto l26;
l28:if(x[jvj+57]==incon) goto l29;
l31:x[R]=x[jvj+57] ;z[R]=z[jvj+57];
if((x[B]!=68)) goto l32;
pile[v[22]]=R; pile[WZ1]=jvj+67; 
(*f[887])( );     /*VARND0(R,jvj+67)*/
for(i=x[jvj+67],V79=0;i>0;i=t[i],V79++)  ;
pile[WZ1]=870; pile[WZ2]=V79; 
(*f[43])( );     /*CHGC2(R,870,V79)*/
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,R,jvj+68)*/
if((x[jvj+68]!=22)) goto l32;
pile[v[22]]=111; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,R,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+69,jvj+70)*/
pile[v[22]]=R; pile[WZ1]=868; 
(*f[35])( );     /*CHGC1(R,868,jvj+70)*/
l32:pile[v[22]]=1070; pile[WZ1]=A; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(1070,A,jvj+71)*/
pile[v[22]]=R; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(R,1070,jvj+71)*/
l33:pile[v[22]]=1411; pile[WZ1]=A; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(1411,A,jvj+72)*/
pile[v[22]]=R; pile[WZ1]=1411; 
(*f[35])( );     /*CHGC1(R,1411,jvj+72)*/
l34:pile[v[22]]=1569; pile[WZ1]=A; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(1569,A,jvj+73)*/
pile[v[22]]=R; pile[WZ1]=1569; 
(*f[35])( );     /*CHGC1(R,1569,jvj+73)*/
l35:pile[v[22]]=405; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(405,A,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=405; pile[WZ2]=V76; 
(*f[43])( );     /*CHGC2(R,405,V76)*/
l36:pile[v[22]]=1006; pile[WZ1]=A; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(1006,A,jvj+74)*/
pile[v[22]]=R; pile[WZ1]=1006; 
(*f[34])( );     /*CHGC0(R,1006,jvj+74)*/
l38:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l16:pile[v[22]]=jvj+25; pile[WZ1]=jvj+34; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[1151])( );     /*SIMPLIFIE0(jvj+34,jvj+35,jvj+36)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[1152])( );     /*SIMPROD0(jvj+35,jvj+36,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[1153])( );     /*SIMPFACT0(jvj+37,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[1154])( );     /*SIMPEQM0(jvj+38,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+33; 
(*f[1155])( );     /*TAUTOLOGIE0(jvj+39,jvj+33)*/
goto l18;
l17:if((MA<MB)) goto l39;
l20:if(x[jvj+49]!=485&&x[jvj+49]!=486) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+33,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+52,jvj+53)*/
if((x[jvj+53]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+52,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+49]!=x[jvj+55])) goto l22;
pile[v[22]]=1070; pile[WZ1]=A; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1070,A,jvj+40)*/
if((x[jvj+40]==68)) goto l22;
l21:pile[v[22]]=jvj+52; pile[WZ1]=jvj+56; 
(*f[887])( );     /*VARND0(jvj+52,jvj+56)*/
if((x[jvj+56]==0)) goto l39;
l22:x[jvj+46]=x[jvj+33] ;z[jvj+46]=z[jvj+33];
goto l30;
l19:pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+33,jvj+47)*/
if((x[jvj+47]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+33,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+48,jvj+49)*/
if(x[jvj+49]!=29&&x[jvj+49]!=30) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+33,jvj+50)*/
pile[v[22]]=jvj+50; 
(*f[1160])( );if(v[102]) goto l20;     /*SUP0(jvj+50,MA)*/
MA=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,jvj+33,jvj+51)*/
pile[v[22]]=jvj+51; 
(*f[1161])( );if(v[102]) goto l20;     /*INF0(jvj+51,MB)*/
MB=pile[WZ1]; 
if((x[jvj+49]==29)) goto l17;
if((x[jvj+49]!=30)) goto l20;
if((MA<=MB)) goto l39;
goto l20;
l23:if(x[jvj+64]==55||x[jvj+64]==48) goto l26;
goto l28;
l26:pile[v[22]]=jvj+46; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[1158])( );if(v[102]) goto l28;     /*USETRINOME0(jvj+46,jvj+65,jvj+66)*/
if((x[jvj+66]==68)) goto l27;
goto l28;
l27:pile[v[22]]=jvj+65; pile[WZ1]=jvj+57; 
(*f[799])( );if(v[102]) goto l28;     /*NORME0(jvj+65,jvj+57)*/
goto l31;
l29:x[jvj+57]=x[jvj+46] ;z[jvj+57]=z[jvj+46];
goto l31;
l39:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+46)*/
goto l30;
l41:V143=c[0][V141];
V142=V143;
putchar(V142);
V141++;
goto l40;
}
