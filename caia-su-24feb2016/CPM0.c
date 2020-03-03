#include "dx.h"
void CPM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V220=0,H=0,C=0,I=0,SS=0,V=0,V283=0,V315=0,V302=0,V205=0,V55=0,CM=0,V306=0,V141=0,V30=0;
int B,A,R,S,VL,NV,XX,BOOT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=326;
x[jvj+1]=10576;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1820&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; S=pile[v[22]+3]; VL=pile[v[22]+4]; NV=pile[v[22]+5]; XX=pile[v[22]+6]; BOOT=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
CM=incon;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,B,jvj+26)*/
if(x[jvj+26]==20||x[jvj+26]==89||x[jvj+26]==41||x[jvj+26]==96||x[jvj+26]==1317) goto l6;
if((x[jvj+26]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,B,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+27,jvj+28)*/
if(x[jvj+28]==649||x[jvj+28]==650||x[jvj+28]==651||x[jvj+28]==653||x[jvj+28]==654||x[jvj+28]==151||x[jvj+28]==848) goto l6;
l7:H=67;
l10:pile[v[22]]=101; pile[WZ1]=B; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,B,jvj+34)*/
pile[v[22]]=A; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(A,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+141; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+141)*/
pile[WZ3]=101; pile[WZ4]=jvj+147; 
(*f[181])( );     /*QUADRI2(100,20,101,101,jvj+147)*/
pile[v[22]]=jvj+35; pile[WZ1]=103; pile[WZ2]=jvj+146; 
(*f[54])( );     /*TRI1(jvj+35,103,jvj+146)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+147; pile[WZ4]=jvj+146; pile[WZ5]=jvj+145; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+147,jvj+146,jvj+145)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+34; pile[WZ4]=jvj+143; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,jvj+143)*/
pile[v[22]]=jvj+141; pile[WZ1]=111; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,111,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; pile[WZ2]=103; pile[WZ3]=jvj+144; 
(*f[58])( );     /*TRI3(jvj+142,jvj+143,103,jvj+144)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+145; pile[WZ4]=jvj+144; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+145,jvj+144,jvj+36)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(R,107,jvj+36)*/
l11:pile[v[22]]=162; pile[WZ1]=B; 
(*f[219])( );if(v[102]) goto l12;     /*FNDC2(162,B,C)*/
C=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(A,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+148; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+148)*/
pile[WZ3]=162; pile[WZ4]=jvj+154; 
(*f[181])( );     /*QUADRI2(100,20,101,162,jvj+154)*/
pile[v[22]]=jvj+37; pile[WZ1]=103; pile[WZ2]=jvj+153; 
(*f[54])( );     /*TRI1(jvj+37,103,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+154; pile[WZ4]=jvj+153; pile[WZ5]=jvj+152; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+154,jvj+153,jvj+152)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=C; pile[WZ4]=jvj+150; 
(*f[272])( );     /*QUADRI9(100,89,162,C,jvj+150)*/
pile[v[22]]=jvj+148; pile[WZ1]=111; pile[WZ2]=jvj+149; 
(*f[54])( );     /*TRI1(jvj+148,111,jvj+149)*/
pile[v[22]]=jvj+149; pile[WZ1]=jvj+150; pile[WZ2]=103; pile[WZ3]=jvj+151; 
(*f[58])( );     /*TRI3(jvj+149,jvj+150,103,jvj+151)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+152; pile[WZ4]=jvj+151; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+152,jvj+151,jvj+38)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(R,107,jvj+38)*/
l12:pile[v[22]]=130; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,B,I)*/
I=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(A,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+155; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+155)*/
pile[WZ3]=130; pile[WZ4]=jvj+161; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+161)*/
pile[v[22]]=jvj+39; pile[WZ1]=103; pile[WZ2]=jvj+160; 
(*f[54])( );     /*TRI1(jvj+39,103,jvj+160)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+161; pile[WZ4]=jvj+160; pile[WZ5]=jvj+159; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+161,jvj+160,jvj+159)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+157; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+157)*/
pile[v[22]]=jvj+155; pile[WZ1]=111; pile[WZ2]=jvj+156; 
(*f[54])( );     /*TRI1(jvj+155,111,jvj+156)*/
pile[v[22]]=jvj+156; pile[WZ1]=jvj+157; pile[WZ2]=103; pile[WZ3]=jvj+158; 
(*f[58])( );     /*TRI3(jvj+156,jvj+157,103,jvj+158)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+159; pile[WZ4]=jvj+158; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+159,jvj+158,jvj+40)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(R,107,jvj+40)*/
l13:pile[v[22]]=163; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,B,SS)*/
SS=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(A,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+162)*/
pile[WZ3]=163; pile[WZ4]=jvj+168; 
(*f[181])( );     /*QUADRI2(100,20,101,163,jvj+168)*/
pile[v[22]]=jvj+41; pile[WZ1]=103; pile[WZ2]=jvj+167; 
(*f[54])( );     /*TRI1(jvj+41,103,jvj+167)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+168; pile[WZ4]=jvj+167; pile[WZ5]=jvj+166; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+168,jvj+167,jvj+166)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=SS; pile[WZ4]=jvj+164; 
(*f[270])( );     /*QUADRI7(100,96,163,SS,jvj+164)*/
pile[v[22]]=jvj+162; pile[WZ1]=111; pile[WZ2]=jvj+163; 
(*f[54])( );     /*TRI1(jvj+162,111,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=jvj+164; pile[WZ2]=103; pile[WZ3]=jvj+165; 
(*f[58])( );     /*TRI3(jvj+163,jvj+164,103,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+166; pile[WZ4]=jvj+165; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+166,jvj+165,jvj+42)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(R,107,jvj+42)*/
l14:pile[v[22]]=140; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,B,V)*/
V=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(A,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+169; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+169)*/
pile[WZ3]=140; pile[WZ4]=jvj+175; 
(*f[181])( );     /*QUADRI2(100,20,101,140,jvj+175)*/
pile[v[22]]=jvj+43; pile[WZ1]=103; pile[WZ2]=jvj+174; 
(*f[54])( );     /*TRI1(jvj+43,103,jvj+174)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+175; pile[WZ4]=jvj+174; pile[WZ5]=jvj+173; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+175,jvj+174,jvj+173)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V; pile[WZ4]=jvj+171; 
(*f[270])( );     /*QUADRI7(100,96,163,V,jvj+171)*/
pile[v[22]]=jvj+169; pile[WZ1]=111; pile[WZ2]=jvj+170; 
(*f[54])( );     /*TRI1(jvj+169,111,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=jvj+171; pile[WZ2]=103; pile[WZ3]=jvj+172; 
(*f[58])( );     /*TRI3(jvj+170,jvj+171,103,jvj+172)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+173; pile[WZ4]=jvj+172; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+173,jvj+172,jvj+44)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(R,107,jvj+44)*/
l15:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,B,jvj+29)*/
if((x[jvj+29]==387)) goto l16;
if((x[jvj+29]==1317)) goto l17;
if((x[jvj+29]!=22)) goto l28;
pile[v[22]]=111; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,B,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+50,jvj+51)*/
if(x[jvj+51]!=654&&x[jvj+51]!=848) goto l19;
pile[v[22]]=107; pile[WZ1]=B; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(107,B,jvj+52)*/
l18:if((x[jvj+52]<=0)) goto l19;
x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(R,107,jvj+53)*/
x[jvj+52]=t[x[jvj+52]];
goto l18;
l1:x[jvj+8]=vo[15];z[jvj+8]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(297,jvj+8,jvj+9)*/
pile[v[22]]=147; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(147,jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==V55) goto l23;
l24:pile[v[22]]=418; pile[WZ1]=jvj+51; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(418,jvj+51,jvj+68)*/
if((x[jvj+68]!=68)) goto l28;
pile[v[22]]=111; pile[WZ1]=XX; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,XX,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]==910)) goto l28;
l25:pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,B,jvj+16)*/
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(103,B,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=653)) goto l26;
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==653)) goto l28;
l26:pile[v[22]]=jvj+16; pile[WZ1]=jvj+19; pile[WZ2]=jvj+69; 
(*f[760])( );     /*MEMEX0(jvj+16,jvj+19,jvj+69)*/
if((x[jvj+69]==134)) goto l27;
l28:if((H!=67)) goto l31;
if((x[BOOT]!=68)) goto l29;
if((x[jvj+29]==178)) goto l29;
pile[v[22]]=763; pile[WZ1]=jvj+29; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(763,jvj+29,jvj+70)*/
if((x[jvj+70]==0)) goto l29;
pile[v[22]]=A; pile[WZ1]=jvj+71; 
(*f[255])( );     /*COPEXP0(A,jvj+71)*/
(*f[1817])( );     /*NOUV2(V306)*/
V306=pile[v[22]]; 
x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+31]=d[76];z[jvj+31]=0;
l8:if((x[jvj+70]>0)) goto l9;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+72; 
(*f[299])( );     /*COPEL0(jvj+33,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+202; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=111; pile[WZ2]=jvj+203; 
(*f[54])( );     /*TRI1(jvj+202,111,jvj+203)*/
pile[v[22]]=jvj+203; pile[WZ1]=jvj+72; pile[WZ2]=107; pile[WZ3]=jvj+204; 
(*f[301])( );     /*TRI11(jvj+203,jvj+72,107,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+204,22,100,jvj+73)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+73; 
(*f[36])( );     /*PLUSC0(R,107,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=100; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+211)*/
pile[v[22]]=jvj+71; pile[WZ1]=103; pile[WZ2]=jvj+210; 
(*f[54])( );     /*TRI1(jvj+71,103,jvj+210)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+211; pile[WZ4]=jvj+210; pile[WZ5]=jvj+209; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+211,jvj+210,jvj+209)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+207; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+207)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V306; pile[WZ4]=jvj+205; 
(*f[270])( );     /*QUADRI7(100,21,140,V306,jvj+205)*/
pile[v[22]]=jvj+205; pile[WZ1]=436; pile[WZ2]=jvj+206; 
(*f[54])( );     /*TRI1(jvj+205,436,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=jvj+207; pile[WZ2]=111; pile[WZ3]=jvj+208; 
(*f[58])( );     /*TRI3(jvj+206,jvj+207,111,jvj+208)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+209; pile[WZ4]=jvj+208; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+209,jvj+208,jvj+74)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+74; 
(*f[36])( );     /*PLUSC0(R,107,jvj+74)*/
l29:if((x[jvj+29]==178)) goto l31;
if((x[BOOT]==67)) goto l30;
pile[v[22]]=763; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(763,jvj+29,jvj+30)*/
if((x[jvj+30]==0)) goto l30;
l31:x[jvj+324]=w[x[jvj+29]][8];
if((x[jvj+29]!=22)) goto l32;
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,B,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]==654||x[jvj+4]==848) goto l34;
l32:if((x[jvj+324]<=0)) goto l34;
x[jvj+77]=s[x[jvj+324]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+324];
pile[v[22]]=jvj+77; pile[WZ1]=B; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(jvj+77,B,jvj+78)*/
if((x[jvj+78]==0)) goto l33;
pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(216,158,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=R; pile[WZ4]=jvj+77; pile[WZ5]=S; pile[v[22]+6]=VL; pile[v[22]+7]=NV; pile[v[22]+8]=XX; pile[v[22]+9]=BOOT; 
(*f[1984])( );     /*CPN0(jvj+79,A,B,R,jvj+77,S,VL,NV,XX,BOOT)*/
l33:x[jvj+324]=t[x[jvj+324]];
goto l32;
l2:x[jvj+103]=x[A] ;z[jvj+103]=z[A];
l43:pile[v[22]]=jvj+103; pile[WZ1]=jvj+104; 
(*f[255])( );     /*COPEXP0(jvj+103,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+279; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+279)*/
pile[WZ3]=100; pile[WZ4]=jvj+285; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+285)*/
pile[v[22]]=jvj+102; pile[WZ1]=103; pile[WZ2]=jvj+284; 
(*f[54])( );     /*TRI1(jvj+102,103,jvj+284)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+285; pile[WZ4]=jvj+284; pile[WZ5]=jvj+283; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+285,jvj+284,jvj+283)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+101; pile[WZ4]=jvj+281; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+101,jvj+281)*/
pile[v[22]]=jvj+279; pile[WZ1]=111; pile[WZ2]=jvj+280; 
(*f[54])( );     /*TRI1(jvj+279,111,jvj+280)*/
pile[v[22]]=jvj+280; pile[WZ1]=jvj+281; pile[WZ2]=103; pile[WZ3]=jvj+282; 
(*f[58])( );     /*TRI3(jvj+280,jvj+281,103,jvj+282)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+283; pile[WZ4]=jvj+282; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+283,jvj+282,jvj+105)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(R,107,jvj+105)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+286; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+286)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V141; pile[WZ4]=jvj+289; 
(*f[270])( );     /*QUADRI7(100,21,140,V141,jvj+289)*/
pile[v[22]]=jvj+286; pile[WZ1]=111; pile[WZ2]=jvj+287; 
(*f[54])( );     /*TRI1(jvj+286,111,jvj+287)*/
pile[v[22]]=jvj+287; pile[WZ1]=jvj+104; pile[WZ2]=103; pile[WZ3]=jvj+288; 
(*f[58])( );     /*TRI3(jvj+287,jvj+104,103,jvj+288)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+289; pile[WZ4]=jvj+288; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+289,jvj+288,jvj+106)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(R,107,jvj+106)*/
l44:pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,B,jvj+107)*/
pile[v[22]]=101; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+107,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=22)) goto l45;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+12,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+14,jvj+15)*/
if(x[jvj+15]==650||x[jvj+15]==651||x[jvj+15]==653) goto l47;
l45:pile[v[22]]=A; pile[WZ1]=jvj+109; 
(*f[255])( );     /*COPEXP0(A,jvj+109)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+110; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+110)*/
if((x[jvj+303]=w[x[jvj+108]][3])==incon) goto l47;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+290; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+290)*/
pile[WZ3]=100; pile[WZ4]=jvj+296; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+296)*/
pile[v[22]]=jvj+109; pile[WZ1]=103; pile[WZ2]=jvj+295; 
(*f[54])( );     /*TRI1(jvj+109,103,jvj+295)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+296; pile[WZ4]=jvj+295; pile[WZ5]=jvj+294; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+296,jvj+295,jvj+294)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+108; pile[WZ4]=jvj+292; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+108,jvj+292)*/
pile[v[22]]=jvj+290; pile[WZ1]=111; pile[WZ2]=jvj+291; 
(*f[54])( );     /*TRI1(jvj+290,111,jvj+291)*/
pile[v[22]]=jvj+291; pile[WZ1]=jvj+292; pile[WZ2]=103; pile[WZ3]=jvj+293; 
(*f[58])( );     /*TRI3(jvj+291,jvj+292,103,jvj+293)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+294; pile[WZ4]=jvj+293; pile[WZ5]=jvj+111; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+294,jvj+293,jvj+111)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+111; 
(*f[36])( );     /*PLUSC0(R,107,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+297; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+297)*/
pile[WZ3]=jvj+303; pile[WZ4]=jvj+302; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+303,jvj+302)*/
pile[v[22]]=jvj+109; pile[WZ1]=103; pile[WZ2]=jvj+301; 
(*f[54])( );     /*TRI1(jvj+109,103,jvj+301)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+302; pile[WZ4]=jvj+301; pile[WZ5]=jvj+299; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+302,jvj+301,jvj+299)*/
pile[v[22]]=jvj+297; pile[WZ1]=111; pile[WZ2]=jvj+298; 
(*f[54])( );     /*TRI1(jvj+297,111,jvj+298)*/
pile[v[22]]=jvj+298; pile[WZ1]=jvj+299; pile[WZ2]=103; pile[WZ3]=jvj+300; 
(*f[58])( );     /*TRI3(jvj+298,jvj+299,103,jvj+300)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+300; pile[WZ5]=jvj+112; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+110,jvj+300,jvj+112)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+112; 
(*f[36])( );     /*PLUSC0(R,107,jvj+112)*/
l47:if((CM!=68)) goto l48;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,B,jvj+115)*/
pile[v[22]]=103; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,B,jvj+116)*/
pile[v[22]]=A; pile[WZ1]=jvj+117; 
(*f[255])( );     /*COPEXP0(A,jvj+117)*/
(*f[1817])( );     /*NOUV2(V30)*/
V30=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=102; pile[WZ4]=jvj+309; 
(*f[181])( );     /*QUADRI2(100,20,101,102,jvj+309)*/
pile[WZ3]=103; pile[WZ4]=jvj+310; 
(*f[181])( );     /*QUADRI2(100,20,101,103,jvj+310)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+308; 
(*f[54])( );     /*TRI1(128,100,jvj+308)*/
pile[v[22]]=jvj+308; pile[WZ1]=128; pile[WZ2]=jvj+309; 
(*f[36])( );     /*PLUSC0(jvj+308,128,jvj+309)*/
pile[WZ2]=jvj+310; 
(*f[36])( );     /*PLUSC0(jvj+308,128,jvj+310)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=180; pile[WZ4]=jvj+306; 
(*f[181])( );     /*QUADRI2(100,20,101,180,jvj+306)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V30; pile[WZ4]=jvj+304; 
(*f[270])( );     /*QUADRI7(100,21,140,V30,jvj+304)*/
pile[v[22]]=jvj+304; pile[WZ1]=436; pile[WZ2]=jvj+305; 
(*f[54])( );     /*TRI1(jvj+304,436,jvj+305)*/
pile[v[22]]=jvj+305; pile[WZ1]=jvj+306; pile[WZ2]=111; pile[WZ3]=jvj+307; 
(*f[58])( );     /*TRI3(jvj+305,jvj+306,111,jvj+307)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+308; pile[WZ4]=jvj+307; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+308,jvj+307,jvj+118)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+118; 
(*f[36])( );     /*PLUSC0(R,107,jvj+118)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V30; pile[WZ4]=jvj+312; 
(*f[270])( );     /*QUADRI7(100,21,140,V30,jvj+312)*/
pile[v[22]]=jvj+117; pile[WZ1]=103; pile[WZ2]=jvj+311; 
(*f[54])( );     /*TRI1(jvj+117,103,jvj+311)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+312; pile[WZ4]=jvj+311; pile[WZ5]=jvj+119; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+312,jvj+311,jvj+119)*/
pile[v[22]]=jvj+115; pile[WZ1]=jvj+119; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+115,jvj+119,R,S,VL,NV,XX,BOOT)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=268; pile[WZ4]=jvj+317; 
(*f[181])( );     /*QUADRI2(100,20,101,268,jvj+317)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V30; pile[WZ4]=jvj+315; 
(*f[270])( );     /*QUADRI7(100,21,140,V30,jvj+315)*/
pile[v[22]]=jvj+315; pile[WZ1]=103; pile[WZ2]=jvj+316; 
(*f[54])( );     /*TRI1(jvj+315,103,jvj+316)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+317; pile[WZ4]=jvj+316; pile[WZ5]=jvj+314; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+317,jvj+316,jvj+314)*/
pile[v[22]]=jvj+117; pile[WZ1]=103; pile[WZ2]=jvj+313; 
(*f[54])( );     /*TRI1(jvj+117,103,jvj+313)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+314; pile[WZ4]=jvj+313; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+314,jvj+313,jvj+120)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+120; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+116,jvj+120,R,S,VL,NV,XX,BOOT)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=111; pile[WZ4]=jvj+319; 
(*f[181])( );     /*QUADRI2(100,20,101,111,jvj+319)*/
pile[v[22]]=jvj+117; pile[WZ1]=103; pile[WZ2]=jvj+318; 
(*f[54])( );     /*TRI1(jvj+117,103,jvj+318)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+319; pile[WZ4]=jvj+318; pile[WZ5]=jvj+121; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+319,jvj+318,jvj+121)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+121; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+80,jvj+121,R,S,VL,NV,XX,BOOT)*/
l48:if((H!=67)) goto l54;
if((CM==67)) goto l49;
if((CM!=68)) goto l54;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,B,jvj+127)*/
x[jvj+326]=w[x[jvj+127]][9];
pile[v[22]]=A; pile[WZ1]=jvj+128; 
(*f[255])( );     /*COPEXP0(A,jvj+128)*/
l52:if((x[jvj+326]<=0)) goto l54;
x[jvj+129]=s[x[jvj+326]] ;z[jvj+129]=(x[jvj+129]<=sepcte) ? x[jvj+129] : z[jvj+326];
if(x[jvj+129]==102||x[jvj+129]==103) goto l53;
pile[v[22]]=jvj+129; pile[WZ1]=B; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(jvj+129,B,jvj+130)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+129; pile[WZ4]=jvj+323; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+129,jvj+323)*/
pile[v[22]]=jvj+128; pile[WZ1]=103; pile[WZ2]=jvj+322; 
(*f[54])( );     /*TRI1(jvj+128,103,jvj+322)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+323; pile[WZ4]=jvj+322; pile[WZ5]=jvj+131; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+323,jvj+322,jvj+131)*/
pile[v[22]]=jvj+130; pile[WZ1]=jvj+131; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+130,jvj+131,R,S,VL,NV,XX,BOOT)*/
l53:x[jvj+326]=t[x[jvj+326]];
goto l52;
l4:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=110; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(110,jvj+25,V220)*/
V220=pile[WZ2]; 
if((V220!=V205)) goto l5;
x[jvj+64]=x[jvj+25] ;z[jvj+64]=z[jvj+25];
l21:pile[v[22]]=S; pile[WZ1]=159; pile[WZ2]=jvj+64; 
(*f[36])( );     /*PLUSC0(S,159,jvj+64)*/
pile[v[22]]=A; pile[WZ1]=444; pile[WZ2]=jvj+197; 
(*f[54])( );     /*TRI1(A,444,jvj+197)*/
pile[v[22]]=117; pile[WZ1]=NV; pile[WZ2]=218; pile[WZ3]=R; pile[WZ4]=jvj+197; pile[WZ5]=jvj+65; 
(*f[725])( );     /*QUADRI14(117,NV,218,R,jvj+197,jvj+65)*/
pile[v[22]]=jvj+64; pile[WZ1]=258; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+64,258,jvj+65)*/
l22:if(x[jvj+51]!=650&&x[jvj+51]!=651) goto l24;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,B,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+5,V55)*/
V55=pile[WZ2]; 
if((x[BOOT]!=68)) goto l1;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+6,jvj+7)*/
if(x[jvj+7]==1704||x[jvj+7]==1765) goto l1;
l23:pile[v[22]]=A; pile[WZ1]=jvj+66; 
(*f[255])( );     /*COPEXP0(A,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+198; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V55; pile[WZ4]=jvj+201; 
(*f[270])( );     /*QUADRI7(100,21,140,V55,jvj+201)*/
pile[v[22]]=jvj+198; pile[WZ1]=111; pile[WZ2]=jvj+199; 
(*f[54])( );     /*TRI1(jvj+198,111,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=jvj+66; pile[WZ2]=103; pile[WZ3]=jvj+200; 
(*f[58])( );     /*TRI3(jvj+199,jvj+66,103,jvj+200)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+201; pile[WZ4]=jvj+200; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+201,jvj+200,jvj+67)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(R,107,jvj+67)*/
goto l24;
l5:x[jvj+24]=t[x[jvj+24]];
l3:if((x[jvj+24]>0)) goto l4;
pile[v[22]]=V205; pile[WZ1]=110; pile[WZ2]=jvj+64; 
(*f[329])( );     /*TRI13(V205,110,jvj+64)*/
goto l21;
l6:H=68;
goto l10;
l9:x[jvj+140]=s[x[jvj+70]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+70];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+135; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+135)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V306; pile[WZ4]=jvj+139; 
(*f[270])( );     /*QUADRI7(100,21,140,V306,jvj+139)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+140; pile[WZ4]=jvj+137; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+140,jvj+137)*/
pile[v[22]]=jvj+135; pile[WZ1]=111; pile[WZ2]=jvj+136; 
(*f[54])( );     /*TRI1(jvj+135,111,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; pile[WZ2]=103; pile[WZ3]=jvj+138; 
(*f[58])( );     /*TRI3(jvj+136,jvj+137,103,jvj+138)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+139; pile[WZ4]=jvj+138; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+139,jvj+138,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[196])( );     /*PLUF0(jvj+31,jvj+32,jvj+33)*/
x[jvj+70]=t[x[jvj+70]];
goto l8;
l16:pile[v[22]]=1670; pile[WZ1]=B; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(1670,B,V283)*/
V283=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(A,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+176; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+176)*/
pile[WZ3]=1670; pile[WZ4]=jvj+182; 
(*f[181])( );     /*QUADRI2(100,20,101,1670,jvj+182)*/
pile[v[22]]=jvj+45; pile[WZ1]=103; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+45,103,jvj+181)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+182; pile[WZ4]=jvj+181; pile[WZ5]=jvj+180; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+182,jvj+181,jvj+180)*/
pile[WZ1]=96; pile[WZ2]=163; pile[WZ3]=V283; pile[WZ4]=jvj+178; 
(*f[270])( );     /*QUADRI7(100,96,163,V283,jvj+178)*/
pile[v[22]]=jvj+176; pile[WZ1]=111; pile[WZ2]=jvj+177; 
(*f[54])( );     /*TRI1(jvj+176,111,jvj+177)*/
pile[v[22]]=jvj+177; pile[WZ1]=jvj+178; pile[WZ2]=103; pile[WZ3]=jvj+179; 
(*f[58])( );     /*TRI3(jvj+177,jvj+178,103,jvj+179)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+180; pile[WZ4]=jvj+179; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+180,jvj+179,jvj+46)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(R,107,jvj+46)*/
goto l28;
l17:pile[v[22]]=B; pile[WZ1]=1352; pile[WZ3]=jvj+47; 
(*f[45])( );if(v[102]) goto l28;     /*FNDZ0(B,1352,V315,jvj+47)*/
V315=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(A,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+183; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+183)*/
pile[WZ3]=1352; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,1352,jvj+189)*/
pile[v[22]]=jvj+48; pile[WZ1]=103; pile[WZ2]=jvj+188; 
(*f[54])( );     /*TRI1(jvj+48,103,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+189; pile[WZ4]=jvj+188; pile[WZ5]=jvj+187; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+189,jvj+188,jvj+187)*/
pile[WZ1]=1427; pile[WZ2]=1352; pile[WZ3]=V315; pile[WZ4]=jvj+185; 
(*f[271])( );     /*QUADRI8(100,1427,1352,V315,jvj+185)*/
pile[v[22]]=jvj+183; pile[WZ1]=111; pile[WZ2]=jvj+184; 
(*f[54])( );     /*TRI1(jvj+183,111,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=jvj+185; pile[WZ2]=103; pile[WZ3]=jvj+186; 
(*f[58])( );     /*TRI3(jvj+184,jvj+185,103,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+187; pile[WZ4]=jvj+186; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+187,jvj+186,jvj+49)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(R,107,jvj+49)*/
goto l28;
l19:if((x[BOOT]==68)) goto l20;
if((x[BOOT]!=67)) goto l22;
if(x[jvj+51]!=650&&x[jvj+51]!=651) goto l22;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,B,jvj+60)*/
pile[v[22]]=140; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+60,V205)*/
V205=pile[WZ2]; 
x[jvj+61]=vo[15];z[jvj+61]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(297,jvj+61,jvj+62)*/
pile[v[22]]=147; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(147,jvj+62,jvj+63)*/
for(a=x[jvj+63];a>0;a=t[a]) if(s[a]==V205) goto l22;
x[jvj+64]=incon;
pile[v[22]]=159; pile[WZ1]=S; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(159,S,jvj+24)*/
goto l3;
l20:if(x[jvj+51]!=650&&x[jvj+51]!=651) goto l22;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,B,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+54,V302)*/
V302=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+55,jvj+56)*/
if(x[jvj+56]!=1704&&x[jvj+56]!=1765) goto l22;
pile[v[22]]=218; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(218,jvj+56,jvj+57)*/
pile[v[22]]=A; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(A,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+190; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+190)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V302; pile[WZ4]=jvj+194; 
(*f[270])( );     /*QUADRI7(100,21,140,V302,jvj+194)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+57; pile[WZ4]=jvj+196; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+57,jvj+196)*/
pile[v[22]]=jvj+58; pile[WZ1]=103; pile[WZ2]=jvj+195; 
(*f[54])( );     /*TRI1(jvj+58,103,jvj+195)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+196; pile[WZ4]=jvj+195; pile[WZ5]=jvj+192; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+196,jvj+195,jvj+192)*/
pile[v[22]]=jvj+190; pile[WZ1]=111; pile[WZ2]=jvj+191; 
(*f[54])( );     /*TRI1(jvj+190,111,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=jvj+192; pile[WZ2]=103; pile[WZ3]=jvj+193; 
(*f[58])( );     /*TRI3(jvj+191,jvj+192,103,jvj+193)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+194; pile[WZ4]=jvj+193; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+194,jvj+193,jvj+59)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(R,107,jvj+59)*/
goto l22;
l27:CM=68;
goto l28;
l30:pile[v[22]]=A; pile[WZ1]=jvj+75; 
(*f[255])( );     /*COPEXP0(A,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+212)*/
pile[WZ3]=100; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+218)*/
pile[v[22]]=jvj+75; pile[WZ1]=103; pile[WZ2]=jvj+217; 
(*f[54])( );     /*TRI1(jvj+75,103,jvj+217)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+218; pile[WZ4]=jvj+217; pile[WZ5]=jvj+216; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+218,jvj+217,jvj+216)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+29; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+29,jvj+214)*/
pile[v[22]]=jvj+212; pile[WZ1]=111; pile[WZ2]=jvj+213; 
(*f[54])( );     /*TRI1(jvj+212,111,jvj+213)*/
pile[v[22]]=jvj+213; pile[WZ1]=jvj+214; pile[WZ2]=103; pile[WZ3]=jvj+215; 
(*f[58])( );     /*TRI3(jvj+213,jvj+214,103,jvj+215)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+216; pile[WZ4]=jvj+215; pile[WZ5]=jvj+76; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+216,jvj+215,jvj+76)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(R,107,jvj+76)*/
goto l31;
l34:if(CM==incon) goto l35;
l36:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,B,jvj+80)*/
pile[v[22]]=101; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+80,jvj+81)*/
if((x[jvj+81]==848)) goto l37;
if((x[jvj+81]==654)) goto l39;
if((x[jvj+81]==650)) goto l46;
if((x[jvj+81]!=151)) goto l47;
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,B,jvj+114)*/
pile[v[22]]=67; pile[WZ1]=S; pile[WZ2]=R; pile[WZ3]=A; pile[WZ4]=jvj+114; pile[WZ5]=VL; pile[v[22]+6]=NV; pile[v[22]+7]=XX; pile[v[22]+8]=BOOT; 
(*f[1985])( );     /*CPM1(67,S,R,A,jvj+114,VL,NV,XX,BOOT)*/
goto l47;
l35:CM=67;
goto l36;
l37:pile[v[22]]=A; pile[WZ1]=jvj+82; 
(*f[255])( );     /*COPEXP0(A,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+219; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+219)*/
pile[WZ3]=100; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+225)*/
pile[v[22]]=jvj+82; pile[WZ1]=103; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+82,103,jvj+224)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+225; pile[WZ4]=jvj+224; pile[WZ5]=jvj+223; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+225,jvj+224,jvj+223)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=570; pile[WZ4]=jvj+221; 
(*f[181])( );     /*QUADRI2(100,20,101,570,jvj+221)*/
pile[v[22]]=jvj+219; pile[WZ1]=111; pile[WZ2]=jvj+220; 
(*f[54])( );     /*TRI1(jvj+219,111,jvj+220)*/
pile[v[22]]=jvj+220; pile[WZ1]=jvj+221; pile[WZ2]=103; pile[WZ3]=jvj+222; 
(*f[58])( );     /*TRI3(jvj+220,jvj+221,103,jvj+222)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+223; pile[WZ4]=jvj+222; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+223,jvj+222,jvj+83)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(R,107,jvj+83)*/
pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,B,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=102; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,102,jvj+227)*/
pile[v[22]]=jvj+82; pile[WZ1]=103; pile[WZ2]=jvj+226; 
(*f[54])( );     /*TRI1(jvj+82,103,jvj+226)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+227; pile[WZ4]=jvj+226; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+227,jvj+226,jvj+85)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+84,jvj+85,R,S,VL,NV,XX,BOOT)*/
l38:pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,B,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=103; pile[WZ4]=jvj+229; 
(*f[181])( );     /*QUADRI2(100,20,101,103,jvj+229)*/
pile[v[22]]=jvj+82; pile[WZ1]=103; pile[WZ2]=jvj+228; 
(*f[54])( );     /*TRI1(jvj+82,103,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+229; pile[WZ4]=jvj+228; pile[WZ5]=jvj+87; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+229,jvj+228,jvj+87)*/
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+86,jvj+87,R,S,VL,NV,XX,BOOT)*/
goto l47;
l39:pile[v[22]]=102; pile[WZ1]=B; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,B,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+12,jvj+88)*/
pile[v[22]]=101; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+88,jvj+89)*/
if((x[jvj+89]!=653)) goto l42;
pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,B,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+90,jvj+91)*/
if((x[jvj+91]==324)) goto l40;
if((x[jvj+91]!=201)) goto l41;
pile[v[22]]=A; pile[WZ1]=jvj+94; 
(*f[255])( );     /*COPEXP0(A,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+244; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+244)*/
pile[WZ3]=48; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+247)*/
pile[WZ3]=29; pile[WZ4]=jvj+251; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+251)*/
pile[WZ3]=130; pile[WZ4]=jvj+257; 
(*f[181])( );     /*QUADRI2(100,20,101,130,jvj+257)*/
pile[v[22]]=jvj+94; pile[WZ1]=103; pile[WZ2]=jvj+256; 
(*f[54])( );     /*TRI1(jvj+94,103,jvj+256)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+257; pile[WZ4]=jvj+256; pile[WZ5]=jvj+255; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+257,jvj+256,jvj+255)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+253; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+253)*/
pile[v[22]]=jvj+251; pile[WZ1]=111; pile[WZ2]=jvj+252; 
(*f[54])( );     /*TRI1(jvj+251,111,jvj+252)*/
pile[v[22]]=jvj+252; pile[WZ1]=jvj+253; pile[WZ2]=103; pile[WZ3]=jvj+254; 
(*f[58])( );     /*TRI3(jvj+252,jvj+253,103,jvj+254)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+255; pile[WZ4]=jvj+254; pile[WZ5]=jvj+249; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+255,jvj+254,jvj+249)*/
pile[v[22]]=jvj+247; pile[WZ1]=111; pile[WZ2]=jvj+248; 
(*f[54])( );     /*TRI1(jvj+247,111,jvj+248)*/
pile[v[22]]=jvj+249; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+250; 
(*f[298])( );     /*TRIENS1(jvj+249,(-20),jvj+248,107,jvj+250)*/
pile[v[22]]=jvj+250; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+245; 
(*f[58])( );     /*TRI3(jvj+250,22,100,jvj+245)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+258; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+258)*/
pile[WZ3]=25; pile[WZ4]=jvj+262; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+262)*/
pile[WZ3]=101; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,101,jvj+269)*/
pile[WZ3]=111; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,111,jvj+271)*/
pile[v[22]]=jvj+94; pile[WZ1]=103; pile[WZ2]=jvj+270; 
(*f[54])( );     /*TRI1(jvj+94,103,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+271; pile[WZ4]=jvj+270; pile[WZ5]=jvj+267; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+271,jvj+270,jvj+267)*/
pile[v[22]]=jvj+267; pile[WZ1]=103; pile[WZ2]=jvj+268; 
(*f[54])( );     /*TRI1(jvj+267,103,jvj+268)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+269; pile[WZ4]=jvj+268; pile[WZ5]=jvj+266; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+269,jvj+268,jvj+266)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+264; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+264)*/
pile[v[22]]=jvj+262; pile[WZ1]=111; pile[WZ2]=jvj+263; 
(*f[54])( );     /*TRI1(jvj+262,111,jvj+263)*/
pile[v[22]]=jvj+263; pile[WZ1]=jvj+264; pile[WZ2]=103; pile[WZ3]=jvj+265; 
(*f[58])( );     /*TRI3(jvj+263,jvj+264,103,jvj+265)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+266; pile[WZ4]=jvj+265; pile[WZ5]=jvj+260; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+266,jvj+265,jvj+260)*/
pile[v[22]]=jvj+258; pile[WZ1]=111; pile[WZ2]=jvj+259; 
(*f[54])( );     /*TRI1(jvj+258,111,jvj+259)*/
pile[v[22]]=jvj+260; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+261; 
(*f[298])( );     /*TRIENS1(jvj+260,(-20),jvj+259,107,jvj+261)*/
pile[v[22]]=jvj+261; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+246; 
(*f[58])( );     /*TRI3(jvj+261,22,100,jvj+246)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+244; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+244,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=107; pile[WZ2]=jvj+245; 
(*f[36])( );     /*PLUSC0(jvj+95,107,jvj+245)*/
pile[WZ2]=jvj+246; 
(*f[36])( );     /*PLUSC0(jvj+95,107,jvj+246)*/
pile[v[22]]=R; pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(R,107,jvj+95)*/
l41:if(x[jvj+91]==324||x[jvj+91]==201) goto l42;
pile[v[22]]=A; pile[WZ1]=jvj+96; 
(*f[255])( );     /*COPEXP0(A,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+272; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+272)*/
pile[WZ3]=100; pile[WZ4]=jvj+278; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+278)*/
pile[v[22]]=jvj+96; pile[WZ1]=103; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(jvj+96,103,jvj+277)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+278; pile[WZ4]=jvj+277; pile[WZ5]=jvj+276; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+278,jvj+277,jvj+276)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+91; pile[WZ4]=jvj+274; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+91,jvj+274)*/
pile[v[22]]=jvj+272; pile[WZ1]=111; pile[WZ2]=jvj+273; 
(*f[54])( );     /*TRI1(jvj+272,111,jvj+273)*/
pile[v[22]]=jvj+273; pile[WZ1]=jvj+274; pile[WZ2]=103; pile[WZ3]=jvj+275; 
(*f[58])( );     /*TRI3(jvj+273,jvj+274,103,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+276; pile[WZ4]=jvj+275; pile[WZ5]=jvj+97; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+276,jvj+275,jvj+97)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+97; 
(*f[36])( );     /*PLUSC0(R,107,jvj+97)*/
l42:if(x[jvj+89]!=650&&x[jvj+89]!=651) goto l44;
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+12,jvj+98)*/
if((x[jvj+98]!=22)) goto l44;
pile[v[22]]=102; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+12,jvj+99)*/
pile[v[22]]=140; pile[WZ1]=jvj+99; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+99,V141)*/
V141=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,B,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+100,jvj+101)*/
pile[v[22]]=A; pile[WZ1]=jvj+102; 
(*f[255])( );     /*COPEXP0(A,jvj+102)*/
x[jvj+103]=incon;
if((x[jvj+101]==128)) goto l2;
pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(A,jvj+11)*/
if((x[jvj+134]=w[x[jvj+101]][3])==incon) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+134; pile[WZ4]=jvj+133; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+134,jvj+133)*/
pile[v[22]]=jvj+11; pile[WZ1]=103; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+11,103,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+133; pile[WZ4]=jvj+132; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+133,jvj+132,jvj+103)*/
goto l43;
l40:pile[v[22]]=A; pile[WZ1]=jvj+92; 
(*f[255])( );     /*COPEXP0(A,jvj+92)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+230)*/
pile[WZ3]=100; pile[WZ4]=jvj+236; 
(*f[181])( );     /*QUADRI2(100,20,101,100,jvj+236)*/
pile[v[22]]=jvj+92; pile[WZ1]=103; pile[WZ2]=jvj+235; 
(*f[54])( );     /*TRI1(jvj+92,103,jvj+235)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+236; pile[WZ4]=jvj+235; pile[WZ5]=jvj+234; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+236,jvj+235,jvj+234)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=96; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,96,jvj+237)*/
pile[WZ3]=89; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,89,jvj+238)*/
pile[WZ3]=41; pile[WZ4]=jvj+239; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+239)*/
pile[WZ3]=20; pile[WZ4]=jvj+240; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+240)*/
pile[WZ3]=128; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+241)*/
pile[WZ3]=570; pile[WZ4]=jvj+242; 
(*f[181])( );     /*QUADRI2(100,20,101,570,jvj+242)*/
pile[WZ3]=1317; pile[WZ4]=jvj+243; 
(*f[181])( );     /*QUADRI2(100,20,101,1317,jvj+243)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(128,100,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=128; pile[WZ2]=jvj+237; 
(*f[36])( );     /*PLUSC0(jvj+232,128,jvj+237)*/
pile[WZ2]=jvj+238; 
(*f[36])( );     /*PLUSC0(jvj+232,128,jvj+238)*/
pile[WZ2]=jvj+239; 
(*f[36])( );     /*PLUSC0(jvj+232,128,jvj+239)*/
pile[WZ2]=jvj+240; 
(*f[36])( );     /*PLUSC0(jvj+232,128,jvj+240)*/
pile[WZ2]=jvj+241; 
(*f[36])( );     /*PLUSC0(jvj+232,128,jvj+241)*/
pile[WZ2]=jvj+242; 
(*f[36])( );     /*PLUSC0(jvj+232,128,jvj+242)*/
pile[WZ2]=jvj+243; 
(*f[36])( );     /*PLUSC0(jvj+232,128,jvj+243)*/
pile[v[22]]=jvj+230; pile[WZ1]=111; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,111,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=jvj+232; pile[WZ2]=103; pile[WZ3]=jvj+233; 
(*f[58])( );     /*TRI3(jvj+231,jvj+232,103,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+234; pile[WZ4]=jvj+233; pile[WZ5]=jvj+93; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+234,jvj+233,jvj+93)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+93; 
(*f[36])( );     /*PLUSC0(R,107,jvj+93)*/
goto l41;
l46:pile[v[22]]=103; pile[WZ1]=B; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,B,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=A; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+113,A,R,S,VL,NV,XX,BOOT)*/
goto l47;
l49:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,B,jvj+122)*/
x[jvj+325]=w[x[jvj+122]][9];
pile[v[22]]=A; pile[WZ1]=jvj+123; 
(*f[255])( );     /*COPEXP0(A,jvj+123)*/
l50:if((x[jvj+325]<=0)) goto l54;
x[jvj+124]=s[x[jvj+325]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+325];
pile[v[22]]=jvj+124; pile[WZ1]=B; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+124,B,jvj+125)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+124; pile[WZ4]=jvj+321; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+124,jvj+321)*/
pile[v[22]]=jvj+123; pile[WZ1]=103; pile[WZ2]=jvj+320; 
(*f[54])( );     /*TRI1(jvj+123,103,jvj+320)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+321; pile[WZ4]=jvj+320; pile[WZ5]=jvj+126; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+321,jvj+320,jvj+126)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+125,jvj+126,R,S,VL,NV,XX,BOOT)*/
l51:x[jvj+325]=t[x[jvj+325]];
goto l50;
l54:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=8; return;
}
