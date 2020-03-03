#include "dx.h"
void ORJ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,NN=0,V36=0,V35=0,V16=0,V19=0,V27=0,V50=0,V37=0,V126=0,V113=0,V97=0,V90=0,V108=0,V102=0,W=0,V12=0,V4=0,V=0;
int X,XN,CB;
int CA,CS,B,VC;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=147;
x[jvj+1]=10708;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2094&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; XN=pile[v[22]+1]; CB=pile[v[22]+2]; CA=pile[v[22]+3]; CS=pile[v[22]+4]; B=pile[v[22]+5]; VC=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[CA]=x[CS]=x[VC]=x[B]=x[jvj+44]=W=incon;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=353)) goto l8;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,X,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+10,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,X,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=61)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+11,jvj+2)*/
pile[v[22]]=103; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+11,jvj+3)*/
V16=incon;
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+2,V32)*/
V32=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+3,NN)*/
NN=pile[WZ2]; 
V36=NN-V32;
V35=V36+1;
V16=V35;
l2:V19=incon;
if((V16<1000)) goto l3;
V19=1000;
l7:pile[v[22]]=jvj+3; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+13)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+83)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V27; pile[WZ4]=jvj+86; 
(*f[270])( );     /*QUADRI7(100,21,140,V27,jvj+86)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+85; 
(*f[58])( );     /*TRI3(jvj+84,jvj+13,103,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+85; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+86,jvj+85,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=102; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,102,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+89)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V27; pile[WZ4]=jvj+87; 
(*f[270])( );     /*QUADRI7(100,21,140,V27,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=436; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,436,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=111; pile[WZ3]=jvj+90; 
(*f[58])( );     /*TRI3(jvj+88,jvj+89,111,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+90; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+14,jvj+90,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=102; pile[WZ2]=VC; 
(*f[54])( );     /*TRI1(jvj+62,102,VC)*/
x[CS]=x[jvj+61] ;z[CS]=z[jvj+61];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=87; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+96)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V27; pile[WZ4]=jvj+98; 
(*f[270])( );     /*QUADRI7(100,21,140,V27,jvj+98)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+97; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+98,jvj+97,jvj+95)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=78; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,78,jvj+93)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V27; pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,V27,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=436; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,436,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; pile[WZ2]=111; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+92,jvj+93,111,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+95,jvj+94,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=102; pile[WZ2]=CA; 
(*f[54])( );     /*TRI1(jvj+63,102,CA)*/
x[B]=x[jvj+61] ;z[B]=z[jvj+61];
pile[v[22]]=135; pile[WZ1]=VC; pile[WZ2]=CS; 
(*f[1380])( );     /*RECZ0(135,VC,CS)*/
pile[WZ1]=CA; pile[WZ2]=B; 
(*f[1380])( );     /*RECZ0(135,CA,B)*/
pile[v[22]]=CA; pile[WZ1]=528; pile[WZ2]=V19; 
(*f[43])( );     /*CHGC2(CA,528,V19)*/
pile[v[22]]=B; pile[WZ1]=437; pile[WZ2]=135; 
(*f[35])( );     /*CHGC1(B,437,135)*/
pile[v[22]]=CA; pile[WZ1]=1157; pile[WZ2]=78; 
(*f[35])( );     /*CHGC1(CA,1157,78)*/
l12:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,X,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=180)) goto l21;
pile[v[22]]=436; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(436,X,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(140,jvj+31,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,X,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+4,jvj+32)*/
if((x[jvj+32]!=22)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+33)*/
pile[v[22]]=140; pile[WZ1]=jvj+33; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+33,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+34,jvj+35)*/
if(x[jvj+35]!=231&&x[jvj+35]!=1175) goto l5;
x[jvj+36]=vo[15];z[jvj+36]=vz[15];
pile[v[22]]=302; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(302,jvj+36,jvj+37)*/
l13:if((x[jvj+37]<=0)) goto l5;
x[jvj+38]=s[x[jvj+37]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+37];
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+38,jvj+39)*/
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=79)) goto l14;
pile[v[22]]=436; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(436,jvj+39,jvj+42)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+42,V108)*/
V108=pile[WZ2]; 
if((V90!=V108)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+39,jvj+43)*/
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+43,V102)*/
V102=pile[WZ2]; 
x[jvj+59]=incon;
if((x[jvj+35]==231)) goto l40;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V102; pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(100,21,140,V102,jvj+59)*/
l15:x[jvj+44]=x[jvj+59] ;z[jvj+44]=z[jvj+59];
W=V97;
l21:if(x[CA]==incon) goto l22;
if(x[CS]!=incon) goto l28;
l29:if(x[VC]!=incon) goto l30;
l31:if(x[CA]!=incon) goto l32;
l34:x[CA]=x[CS]=x[B]=x[VC]=incon;
l33:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; v[102]=1;return;
l1:V16=10;
goto l2;
l3:V19=V16;
goto l7;
l4:x[jvj+102]=120 ;z[jvj+102]=120;
l9:x[jvj+17]=vo[15];z[jvj+17]=vz[15];
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,X,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
(*f[1817])( );     /*NOUV2(V37)*/
V37=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+102,jvj+101)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V37; pile[WZ4]=jvj+99; 
(*f[270])( );     /*QUADRI7(100,21,140,V37,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=103; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,103,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+101,jvj+100,jvj+68)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+66)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V50; pile[WZ4]=jvj+64; 
(*f[270])( );     /*QUADRI7(100,21,140,V50,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=436; pile[WZ2]=jvj+65; 
(*f[54])( );     /*TRI1(jvj+64,436,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; pile[WZ2]=111; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+65,jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+68,jvj+67,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=102; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,102,jvj+21)*/
pile[v[22]]=V37; pile[WZ1]=20; 
(*f[1791])( );     /*DVF0(V37,20)*/
pile[v[22]]=100; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+105)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V37; pile[WZ4]=jvj+103; 
(*f[270])( );     /*QUADRI7(100,21,140,V37,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=436; pile[WZ2]=jvj+104; 
(*f[54])( );     /*TRI1(jvj+103,436,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=jvj+105; pile[WZ2]=111; pile[WZ3]=jvj+106; 
(*f[58])( );     /*TRI3(jvj+104,jvj+105,111,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+106; pile[WZ5]=jvj+69; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+19,jvj+106,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=102; pile[WZ2]=VC; 
(*f[54])( );     /*TRI1(jvj+69,102,VC)*/
x[CS]=x[jvj+21] ;z[CS]=z[jvj+21];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V50; pile[WZ4]=jvj+111; 
(*f[270])( );     /*QUADRI7(100,21,140,V50,jvj+111)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+109; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+109)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V37; pile[WZ4]=jvj+107; 
(*f[270])( );     /*QUADRI7(100,21,140,V37,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=436; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,436,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; pile[WZ2]=111; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+108,jvj+109,111,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+70; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+111,jvj+110,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=102; pile[WZ2]=CA; 
(*f[54])( );     /*TRI1(jvj+70,102,CA)*/
x[B]=x[jvj+21] ;z[B]=z[jvj+21];
pile[v[22]]=135; pile[WZ1]=VC; pile[WZ2]=B; 
(*f[1380])( );     /*RECZ0(135,VC,B)*/
pile[WZ1]=CA; 
(*f[1380])( );     /*RECZ0(135,CA,B)*/
pile[v[22]]=CA; pile[WZ1]=528; pile[WZ2]=6; 
(*f[43])( );     /*CHGC2(CA,528,6)*/
pile[v[22]]=B; pile[WZ1]=437; pile[WZ2]=135; 
(*f[35])( );     /*CHGC1(B,437,135)*/
pile[v[22]]=CA; pile[WZ1]=1157; pile[WZ2]=78; 
(*f[35])( );     /*CHGC1(CA,1157,78)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=jvj+17; pile[WZ3]=102; pile[WZ4]=jvj+20; 
(*f[1426])( );     /*DMP0(jvj+20,jvj+21,jvj+17,102,jvj+20)*/
goto l12;
l5:pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]==231||x[jvj+7]==1175) goto l21;
l16:x[jvj+44]=x[jvj+4] ;z[jvj+44]=z[jvj+4];
W=V97;
goto l21;
l6:x[jvj+115]=120 ;z[jvj+115]=120;
l11:x[jvj+24]=vo[15];z[jvj+24]=vz[15];
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,X,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
(*f[1817])( );     /*NOUV2(V113)*/
V113=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+115,jvj+114)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V126; pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,V126,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=103; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+114; pile[WZ4]=jvj+113; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+114,jvj+113,jvj+75)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+73)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V113; pile[WZ4]=jvj+71; 
(*f[270])( );     /*QUADRI7(100,21,140,V113,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=436; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,436,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=111; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,111,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+75,jvj+74,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=102; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,102,jvj+28)*/
pile[v[22]]=V113; pile[WZ1]=20; 
(*f[1791])( );     /*DVF0(V113,20)*/
pile[v[22]]=100; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+118)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V113; pile[WZ4]=jvj+116; 
(*f[270])( );     /*QUADRI7(100,21,140,V113,jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=436; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,436,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=111; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,111,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+119; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+26,jvj+119,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=102; pile[WZ2]=VC; 
(*f[54])( );     /*TRI1(jvj+76,102,VC)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V113; pile[WZ4]=jvj+124; 
(*f[270])( );     /*QUADRI7(100,21,140,V113,jvj+124)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+122; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+122)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V126; pile[WZ4]=jvj+120; 
(*f[270])( );     /*QUADRI7(100,21,140,V126,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=436; pile[WZ2]=jvj+121; 
(*f[54])( );     /*TRI1(jvj+120,436,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; pile[WZ2]=111; pile[WZ3]=jvj+123; 
(*f[58])( );     /*TRI3(jvj+121,jvj+122,111,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+77; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+124,jvj+123,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=102; pile[WZ2]=CS; 
(*f[54])( );     /*TRI1(jvj+77,102,CS)*/
x[CA]=x[jvj+28] ;z[CA]=z[jvj+28];
x[B]=x[jvj+28] ;z[B]=z[jvj+28];
pile[v[22]]=135; pile[WZ1]=VC; 
(*f[1380])( );     /*RECZ0(135,VC,CS)*/
pile[WZ1]=B; 
(*f[1380])( );     /*RECZ0(135,B,CS)*/
pile[v[22]]=CA; pile[WZ1]=528; pile[WZ2]=6; 
(*f[43])( );     /*CHGC2(CA,528,6)*/
pile[v[22]]=B; pile[WZ1]=437; pile[WZ2]=135; 
(*f[35])( );     /*CHGC1(B,437,135)*/
pile[v[22]]=CA; pile[WZ1]=1157; pile[WZ2]=78; 
(*f[35])( );     /*CHGC1(CA,1157,78)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=jvj+24; pile[WZ3]=102; pile[WZ4]=jvj+27; 
(*f[1426])( );     /*DMP0(jvj+27,jvj+28,jvj+24,102,jvj+27)*/
goto l12;
l8:if(x[jvj+9]!=723&&x[jvj+9]!=908) goto l10;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+15)*/
if((x[jvj+15]!=435)) goto l10;
pile[v[22]]=436; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(436,X,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+16,V50)*/
V50=pile[WZ2]; 
x[jvj+102]=incon;
if((x[jvj+9]==723)) goto l4;
x[jvj+102]=498 ;z[jvj+102]=498;
goto l9;
l10:if(x[jvj+9]!=903&&x[jvj+9]!=911) goto l12;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,X,jvj+22)*/
if((x[jvj+22]!=435)) goto l12;
pile[v[22]]=436; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,X,jvj+23)*/
pile[v[22]]=140; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+23,V126)*/
V126=pile[WZ2]; 
x[jvj+115]=incon;
if((x[jvj+9]==903)) goto l6;
x[jvj+115]=498 ;z[jvj+115]=498;
goto l11;
l14:x[jvj+37]=t[x[jvj+37]];
goto l13;
l17:x[jvj+142]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=128)) goto l18;
x[jvj+142]=599 ;z[jvj+142]=599;
l19:V4=incon;
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+44,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=599)) goto l20;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+44,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]!=128)) goto l20;
pile[v[22]]=128; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(128,jvj+48,jvj+50)*/
for(i=x[jvj+50],V12=0;i>0;i=t[i],V12++)  ;
V4=V12;
l27:pile[v[22]]=jvj+44; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+51)*/
x[jvj+52]=vo[15];z[jvj+52]=vz[15];
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=V; pile[WZ1]=23; 
(*f[1791])( );     /*DVF0(V,23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=183; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,183,jvj+130)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+132; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+132)*/
pile[v[22]]=jvj+130; pile[WZ1]=111; pile[WZ2]=jvj+131; 
(*f[54])( );     /*TRI1(jvj+130,111,jvj+131)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+132; pile[WZ4]=jvj+131; pile[WZ5]=jvj+129; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+132,jvj+131,jvj+129)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=78; pile[WZ4]=jvj+127; 
(*f[181])( );     /*QUADRI2(100,20,101,78,jvj+127)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+125; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=436; pile[WZ2]=jvj+126; 
(*f[54])( );     /*TRI1(jvj+125,436,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; pile[WZ2]=111; pile[WZ3]=jvj+128; 
(*f[58])( );     /*TRI3(jvj+126,jvj+127,111,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+129,jvj+128,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=102; pile[WZ2]=CA; 
(*f[54])( );     /*TRI1(jvj+78,102,CA)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+137; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+137)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=79; pile[WZ4]=jvj+135; 
(*f[181])( );     /*QUADRI2(100,20,101,79,jvj+135)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+133; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+133)*/
pile[v[22]]=jvj+133; pile[WZ1]=436; pile[WZ2]=jvj+134; 
(*f[54])( );     /*TRI1(jvj+133,436,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; pile[WZ2]=111; pile[WZ3]=jvj+136; 
(*f[58])( );     /*TRI3(jvj+134,jvj+135,111,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+136; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+137,jvj+136,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=102; pile[WZ2]=CS; 
(*f[54])( );     /*TRI1(jvj+79,102,CS)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+142; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+142,jvj+140)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+138; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=436; pile[WZ2]=jvj+139; 
(*f[54])( );     /*TRI1(jvj+138,436,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=jvj+140; pile[WZ2]=111; pile[WZ3]=jvj+141; 
(*f[58])( );     /*TRI3(jvj+139,jvj+140,111,jvj+141)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+141; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+51,jvj+141,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=102; pile[WZ2]=VC; 
(*f[54])( );     /*TRI1(jvj+80,102,VC)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+143; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+143)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+147; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+147)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+145; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+145)*/
pile[v[22]]=jvj+143; pile[WZ1]=111; pile[WZ2]=jvj+144; 
(*f[54])( );     /*TRI1(jvj+143,111,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; pile[WZ2]=103; pile[WZ3]=jvj+146; 
(*f[58])( );     /*TRI3(jvj+144,jvj+145,103,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+146; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+147,jvj+146,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=102; pile[WZ2]=B; 
(*f[54])( );     /*TRI1(jvj+81,102,B)*/
pile[v[22]]=135; pile[WZ1]=CA; 
(*f[1380])( );     /*RECZ0(135,CA,B)*/
pile[WZ1]=B; pile[WZ2]=CS; 
(*f[1380])( );     /*RECZ0(135,B,CS)*/
pile[WZ1]=VC; pile[WZ2]=B; 
(*f[1380])( );     /*RECZ0(135,VC,B)*/
pile[v[22]]=jvj+52; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(jvj+52,302,B)*/
pile[v[22]]=CA; pile[WZ1]=528; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(CA,528,V4)*/
pile[v[22]]=B; pile[WZ1]=437; pile[WZ2]=135; 
(*f[35])( );     /*CHGC1(B,437,135)*/
pile[v[22]]=CA; pile[WZ1]=1157; pile[WZ2]=78; 
(*f[35])( );     /*CHGC1(CA,1157,78)*/
l28:x[jvj+53]=vo[15];z[jvj+53]=vz[15];
pile[v[22]]=jvj+53; pile[WZ1]=302; pile[WZ2]=CS; 
(*f[36])( );     /*PLUSC0(jvj+53,302,CS)*/
goto l29;
l18:x[jvj+142]=179 ;z[jvj+142]=179;
goto l19;
l20:V4=6;
goto l27;
l22:if(x[CS]==incon) goto l23;
goto l28;
l23:if(x[VC]==incon) goto l24;
l30:x[jvj+54]=vo[15];z[jvj+54]=vz[15];
pile[v[22]]=jvj+54; pile[WZ1]=302; pile[WZ2]=VC; 
(*f[36])( );     /*PLUSC0(jvj+54,302,VC)*/
goto l31;
l24:if(x[B]==incon) goto l25;
goto l34;
l25:if(x[jvj+44]!=incon) goto l26;
l39:pile[v[22]]=X; pile[WZ1]=102; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(X,102,jvj+82)*/
x[CA]=x[CB] ;z[CA]=z[CB];
x[CS]=x[jvj+82] ;z[CS]=z[jvj+82];
x[VC]=x[jvj+82] ;z[VC]=z[jvj+82];
x[B]=x[jvj+82] ;z[B]=z[jvj+82];
goto l28;
l26:if(W!=incon) goto l17;
goto l39;
l32:if((x[CA]==250)) goto l35;
x[jvj+55]=vo[15];z[jvj+55]=vz[15];
pile[v[22]]=jvj+55; pile[WZ1]=302; pile[WZ2]=CA; 
(*f[36])( );     /*PLUSC0(jvj+55,302,CA)*/
l35:if(x[CS]!=incon) goto l36;
goto l34;
l36:if(x[B]!=incon) goto l37;
goto l34;
l37:if(x[VC]!=incon) goto l38;
goto l34;
l38:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; v[102]=0;return;
l40:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=183; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,183,jvj+56)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V102; pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(100,21,140,V102,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+59)*/
goto l15;
}
