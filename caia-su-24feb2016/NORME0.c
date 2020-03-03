#include "dx.h"
void NORME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V123=0,V121=0,V122=0,NR=0,V22=0,V26=0,V89=0,V82=0,V83=0,V84=0,V85=0,V86=0,V87=0,MA=0,MB=0,V67=0,V60=0,DG=0,V76=0,V140=0,V141=0,V143=0,V142=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=73;
x[jvj+1]=10743;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==799&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=incon;
x[jvj+54]=547 ;z[jvj+54]=547;
v[45]=0;
V22=x[A];
v[200]=V22;
vo[39]=x[jvj+54];vz[39]=0;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=1328; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1328,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==169) goto l5;
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,A,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==408)) goto l5;
l7:if((v[178]!=1)) goto l9;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(454,jvj+3,jvj+4)*/
l1:if((x[jvj+4]>0)) goto l2;
v[178]=2;
l9:v[20]=0;
pile[v[22]]=A; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(A,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=548; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,548,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+70; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+70,jvj+19)*/
if((v[177]<=0)) goto l8;
x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=jvj+18; pile[WZ1]=502; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(jvj+18,502,jvj+19)*/
l8:x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(905,jvj+20,V26)*/
V26=pile[WZ2]; 
if((V26!=(-9009))) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+19,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=0; pile[WZ2]=102; pile[WZ3]=jvj+19; 
(*f[1147])( );     /*TREQM0(jvj+21,0,102,jvj+19)*/
l10:pile[v[22]]=jvj+19; 
(*f[1148])( );     /*METINV0(jvj+19)*/
(*f[1149])( );     /*BALAI0(jvj+19)*/
(*f[1150])( );     /*NETTOYREG0(jvj+19)*/
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+19,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=22)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+23,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+25,jvj+26)*/
if(x[jvj+26]!=25&&x[jvj+26]!=26) goto l11;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+27; 
(*f[887])( );     /*VARND0(jvj+23,jvj+27)*/
if((x[jvj+27]!=0)) goto l11;
pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[1159])( );if(v[102]) goto l11;     /*SIMPCT0(jvj+28,jvj+29)*/
l13:x[jvj+37]=vo[14];z[jvj+37]=vz[14];
V89=x[jvj+37];
pile[v[22]]=jvj+37; pile[WZ1]=0; pile[WZ2]=V89; pile[WZ3]=1330; 
(*f[285])( );     /*ENLY0(jvj+37,0,V89,1330,V82,V83)*/
V82=pile[WZ4]; V83=pile[WZ5]; 
pile[WZ1]=V83; pile[WZ2]=V82; pile[WZ3]=1334; 
(*f[285])( );     /*ENLY0(jvj+37,V83,V82,1334,V84,V85)*/
V84=pile[WZ4]; V85=pile[WZ5]; 
pile[WZ1]=V85; pile[WZ2]=V84; pile[WZ3]=1354; 
(*f[285])( );     /*ENLY0(jvj+37,V85,V84,1354,V86,V87)*/
V86=pile[WZ4]; V87=pile[WZ5]; 
if(x[jvj+29]!=incon) goto l14;
l31:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=480; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(480,jvj+5,jvj+6)*/
x[jvj+73]=x[jvj+6] ;z[jvj+73]=z[jvj+6];
l3:if((x[jvj+73]>0)) goto l4;
x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:x[jvj+71]=s[x[jvj+73]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+73];
V123=x[jvj+71];
pile[v[22]]=0; pile[WZ1]=(-3093); 
(*f[37])( );     /*SRA0(0,(-3093),V121)*/
V121=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V123; pile[WZ2]=V121; 
(*f[39])( );     /*SDX0(20,V123,V121,V122)*/
V122=pile[WZ3]; 
V140=V122-1;
V141=0;
l34:if((V141<=V140)) goto l35;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[135])( );     /*LND3(0,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NR; pile[WZ4]=jvj+72; 
(*f[192])( );     /*QUADRI4(100,41,130,NR,jvj+72)*/
pile[v[22]]=274; pile[WZ1]=jvj+71; pile[WZ2]=319; pile[WZ3]=jvj+72; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(274,jvj+71,319,jvj+72,jvj+7)*/
pile[v[22]]=jvj+3; pile[WZ1]=1371; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,1371,jvj+7)*/
x[jvj+73]=t[x[jvj+73]];
goto l3;
l5:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,A,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=408)) goto l6;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,A,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l6;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+14,jvj+16)*/
pile[v[22]]=1334; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1334,jvj+16,jvj+17)*/
pile[v[22]]=jvj+8; pile[WZ1]=1334; 
(*f[34])( );     /*CHGC0(jvj+8,1334,jvj+17)*/
l6:pile[v[22]]=jvj+8; pile[WZ1]=1330; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+8,1330,68)*/
goto l7;
l11:pile[v[22]]=jvj+23; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[1151])( );     /*SIMPLIFIE0(jvj+30,jvj+31,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[1152])( );     /*SIMPROD0(jvj+31,jvj+32,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[1153])( );     /*SIMPFACT0(jvj+33,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; 
(*f[1154])( );     /*SIMPEQM0(jvj+34,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+29; 
(*f[1155])( );     /*TAUTOLOGIE0(jvj+35,jvj+29)*/
goto l13;
l12:if((MA<MB)) goto l33;
l16:if(x[jvj+46]!=485&&x[jvj+46]!=486) goto l17;
pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+29,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=22)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+49,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+51,jvj+52)*/
if((x[jvj+46]!=x[jvj+52])) goto l17;
pile[v[22]]=jvj+49; pile[WZ1]=jvj+53; 
(*f[887])( );     /*VARND0(jvj+49,jvj+53)*/
if((x[jvj+53]!=0)) goto l17;
pile[v[22]]=1070; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(1070,A,jvj+36)*/
if((x[jvj+36]==68)) goto l17;
l33:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+43)*/
l25:if((v[45]!=0)) goto l31;
x[jvj+55]=incon;
if((v[20]==0)) goto l19;
pile[v[22]]=jvj+54; pile[WZ1]=jvj+43; pile[WZ2]=jvj+55; 
(*f[1157])( );if(v[102]) goto l19;     /*NORME1(jvj+54,jvj+43,jvj+55)*/
l19:if((v[20]!=0)) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+43,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=625)) goto l20;
x[jvj+58]=vo[16];z[jvj+58]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+58; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(905,jvj+58,V67)*/
V67=pile[WZ2]; 
if((V67!=(-9009))) goto l20;
pile[v[22]]=54; pile[WZ1]=jvj+43; pile[WZ2]=jvj+55; 
(*f[1157])( );if(v[102]) goto l20;     /*NORME1(54,jvj+43,jvj+55)*/
l20:x[jvj+59]=vo[16];z[jvj+59]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(905,jvj+59,V60)*/
V60=pile[WZ2]; 
if((V60!=(-9009))) goto l23;
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+43,jvj+60)*/
if((x[jvj+60]!=22)) goto l23;
pile[v[22]]=111; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+43,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+61,jvj+62)*/
if(x[jvj+62]!=29&&x[jvj+62]!=30&&x[jvj+62]!=25&&x[jvj+62]!=55&&x[jvj+62]!=48) goto l23;
pile[v[22]]=jvj+43; 
(*f[897])( );if(v[102]) goto l23;     /*DGR0(jvj+43,DG)*/
DG=pile[WZ1]; 
if((DG>2)) goto l18;
if((DG==2)) goto l21;
l23:if(x[jvj+55]==incon) goto l24;
l26:x[R]=x[jvj+55] ;z[R]=z[jvj+55];
pile[v[22]]=1070; pile[WZ1]=A; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(1070,A,jvj+65)*/
pile[v[22]]=R; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(R,1070,jvj+65)*/
l27:pile[v[22]]=1411; pile[WZ1]=A; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(1411,A,jvj+66)*/
pile[v[22]]=R; pile[WZ1]=1411; 
(*f[35])( );     /*CHGC1(R,1411,jvj+66)*/
l28:pile[v[22]]=1569; pile[WZ1]=A; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(1569,A,jvj+67)*/
pile[v[22]]=R; pile[WZ1]=1569; 
(*f[35])( );     /*CHGC1(R,1569,jvj+67)*/
l29:pile[v[22]]=405; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(405,A,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=405; pile[WZ2]=V76; 
(*f[43])( );     /*CHGC2(R,405,V76)*/
l30:pile[v[22]]=1006; pile[WZ1]=A; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(1006,A,jvj+68)*/
pile[v[22]]=R; pile[WZ1]=1006; 
(*f[34])( );     /*CHGC0(R,1006,jvj+68)*/
l32:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l14:if((v[20]!=0)) goto l15;
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+29,jvj+38)*/
if((x[jvj+38]!=22)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+29,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+39,jvj+40)*/
if(x[jvj+40]!=25&&x[jvj+40]!=26&&x[jvj+40]!=27&&x[jvj+40]!=28&&x[jvj+40]!=29&&x[jvj+40]!=30&&x[jvj+40]!=625) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+29,jvj+41)*/
pile[v[22]]=103; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+29,jvj+42)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=jvj+29; pile[WZ3]=jvj+40; pile[WZ4]=jvj+43; 
(*f[1156])( );if(v[102]) goto l15;     /*DIVFACT0(jvj+41,jvj+42,jvj+29,jvj+40,jvj+43)*/
v[20]=1;
goto l25;
l15:pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+29,jvj+44)*/
if((x[jvj+44]!=22)) goto l17;
pile[v[22]]=111; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+29,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+45,jvj+46)*/
if(x[jvj+46]!=29&&x[jvj+46]!=30) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+29,jvj+47)*/
pile[v[22]]=jvj+47; 
(*f[1160])( );if(v[102]) goto l16;     /*SUP0(jvj+47,MA)*/
MA=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=jvj+29; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+29,jvj+48)*/
pile[v[22]]=jvj+48; 
(*f[1161])( );if(v[102]) goto l16;     /*INF0(jvj+48,MB)*/
MB=pile[WZ1]; 
if((x[jvj+46]==29)) goto l12;
if((x[jvj+46]!=30)) goto l16;
if((MA<=MB)) goto l33;
goto l16;
l17:x[jvj+43]=x[jvj+29] ;z[jvj+43]=z[jvj+29];
goto l25;
l18:if(x[jvj+62]==55||x[jvj+62]==48) goto l21;
goto l23;
l21:pile[v[22]]=jvj+43; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[1158])( );if(v[102]) goto l23;     /*USETRINOME0(jvj+43,jvj+63,jvj+64)*/
if((x[jvj+64]==68)) goto l22;
goto l23;
l22:pile[v[22]]=jvj+63; pile[WZ1]=jvj+55; 
(*f[799])( );if(v[102]) goto l23;     /*NORME0(jvj+63,jvj+55)*/
goto l26;
l24:x[jvj+55]=x[jvj+43] ;z[jvj+55]=z[jvj+43];
goto l26;
l35:V143=c[0][V141];
V142=V143;
putchar(V142);
V141++;
goto l34;
}
