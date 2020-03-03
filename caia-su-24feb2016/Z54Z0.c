#include "dx.h"
void Z54Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V68=0,V69=0,V88=0,V89=0,V173=0,V174=0,V172=0,V176=0,V177=0,V175=0,V217=0,V218=0,V216=0,V220=0,V221=0,V219=0,N=0,V182=0,V197=0,I=0,V85=0,V226=0,V241=0,V209=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=227;
x[jvj+1]=15555;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1868&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(543,NNNY,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+66,jvj+67)*/
if((x[jvj+67]!=22)) goto l32;
pile[v[22]]=107; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(107,jvj+66,jvj+68)*/
pile[v[22]]=111; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+66,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+69,jvj+70)*/
if(x[jvj+70]!=485&&x[jvj+70]!=486&&x[jvj+70]!=48&&x[jvj+70]!=55) goto l32;
x[jvj+226]=x[jvj+68] ;z[jvj+226]=z[jvj+68];
l85:if((x[jvj+226]>0)) goto l86;
l32:pile[v[22]]=111; pile[WZ1]=jvj+66; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+66,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]!=486)) goto l37;
pile[v[22]]=107; pile[WZ1]=jvj+66; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(107,jvj+66,jvj+81)*/
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1330; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(1330,jvj+5,jvj+6)*/
if((x[jvj+6]==68)) goto l37;
l34:x[jvj+215]=x[jvj+81] ;z[jvj+215]=z[jvj+81];
l33:if((x[jvj+215]<=0)) goto l37;
x[jvj+82]=s[x[jvj+215]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+215];
if((x[NNNY]!=x[jvj+82])) goto l35;
pile[v[22]]=111; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+82,jvj+83)*/
pile[v[22]]=101; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+83,jvj+84)*/
if((x[jvj+84]!=485)) goto l35;
pile[v[22]]=107; pile[WZ1]=jvj+82; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(107,jvj+82,jvj+85)*/
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+220]=x[jvj+81] ;z[jvj+220]=z[jvj+81];
l65:if((x[jvj+220]>0)) goto l66;
l36:pile[v[22]]=jvj+11; pile[WZ1]=jvj+86; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+86)*/
NNNT=41;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+177; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+177)*/
pile[v[22]]=jvj+177; pile[WZ1]=111; pile[WZ2]=jvj+178; 
(*f[54])( );     /*TRI1(jvj+177,111,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=jvj+86; pile[WZ2]=107; pile[WZ3]=jvj+179; 
(*f[301])( );     /*TRI11(jvj+178,jvj+86,107,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+87; 
(*f[58])( );     /*TRI3(jvj+179,22,100,jvj+87)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+87; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+66,jvj+87,NNNX)*/
l62:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+77]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+77];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+77]=t[x[jvj+77]];
l1:if((x[jvj+77]>0)) goto l2;
NNNT=4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+70; pile[WZ4]=jvj+176; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+70,jvj+176)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+176; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+176,jvj+78)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+78; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+4,jvj+78,107)*/
pile[v[22]]=jvj+72; 
(*f[1118])( );     /*AJE3(jvj+72,jvj+78,107)*/
pile[v[22]]=jvj+66; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+66,jvj+78,NNNX)*/
goto l62;
l5:x[jvj+166]=s[x[jvj+104]] ;z[jvj+166]=(x[jvj+166]<=sepcte) ? x[jvj+166] : z[jvj+104];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+164; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+164)*/
pile[v[22]]=jvj+164; pile[WZ1]=111; pile[WZ2]=jvj+165; 
(*f[54])( );     /*TRI1(jvj+164,111,jvj+165)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+166; pile[WZ4]=jvj+165; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+166,jvj+165,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[196])( );     /*PLUF0(jvj+14,jvj+15,jvj+16)*/
x[jvj+104]=t[x[jvj+104]];
l4:if((x[jvj+104]>0)) goto l5;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+105; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+105)*/
NNNT=50;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+183; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=111; pile[WZ2]=jvj+184; 
(*f[54])( );     /*TRI1(jvj+183,111,jvj+184)*/
pile[v[22]]=jvj+184; pile[WZ1]=jvj+105; pile[WZ2]=107; pile[WZ3]=jvj+185; 
(*f[301])( );     /*TRI11(jvj+184,jvj+105,107,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+106; 
(*f[58])( );     /*TRI3(jvj+185,22,100,jvj+106)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+106; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+88,jvj+106,NNNX)*/
goto l62;
l8:V69=s[x[jvj+95]];
pile[v[22]]=jvj+17; pile[WZ1]=V69; 
(*f[207])( );     /*PLUE2(jvj+17,V69)*/
x[jvj+95]=t[x[jvj+95]];
l7:if((x[jvj+95]>0)) goto l8;
pile[v[22]]=jvj+17; 
(*f[2027])( );if(v[102]) goto l38;     /*PGCDENS0(jvj+17,N)*/
N=pile[WZ1]; 
if((N<=1)) goto l38;
pile[v[22]]=N; pile[WZ1]=jvj+92; pile[WZ2]=jvj+96; 
(*f[2028])( );if(v[102]) goto l38;     /*DIVISION0(N,jvj+92,jvj+96)*/
pile[WZ1]=jvj+93; pile[WZ2]=jvj+97; 
(*f[2028])( );if(v[102]) goto l38;     /*DIVISION0(N,jvj+93,jvj+97)*/
NNNT=101;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+91; pile[WZ4]=jvj+180; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+91,jvj+180)*/
pile[v[22]]=jvj+180; pile[WZ1]=111; pile[WZ2]=jvj+181; 
(*f[54])( );     /*TRI1(jvj+180,111,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=jvj+97; pile[WZ2]=103; pile[WZ3]=jvj+182; 
(*f[58])( );     /*TRI3(jvj+181,jvj+97,103,jvj+182)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+182; pile[WZ5]=jvj+98; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+96,jvj+182,jvj+98)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+98; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+88,jvj+98,NNNX)*/
goto l62;
l11:V89=s[x[jvj+130]];
pile[v[22]]=jvj+18; pile[WZ1]=V89; 
(*f[207])( );     /*PLUE2(jvj+18,V89)*/
x[jvj+130]=t[x[jvj+130]];
l10:if((x[jvj+130]>0)) goto l11;
pile[v[22]]=jvj+18; 
(*f[2027])( );if(v[102]) goto l49;     /*PGCDENS0(jvj+18,V85)*/
V85=pile[WZ1]; 
if((V85<=1)) goto l49;
pile[v[22]]=V85; pile[WZ1]=jvj+127; pile[WZ2]=jvj+131; 
(*f[2028])( );if(v[102]) goto l49;     /*DIVISION0(V85,jvj+127,jvj+131)*/
pile[WZ1]=jvj+128; pile[WZ2]=jvj+132; 
(*f[2028])( );if(v[102]) goto l49;     /*DIVISION0(V85,jvj+128,jvj+132)*/
NNNT=101;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+126; pile[WZ4]=jvj+186; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+126,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=111; pile[WZ2]=jvj+187; 
(*f[54])( );     /*TRI1(jvj+186,111,jvj+187)*/
pile[v[22]]=jvj+187; pile[WZ1]=jvj+132; pile[WZ2]=103; pile[WZ3]=jvj+188; 
(*f[58])( );     /*TRI3(jvj+187,jvj+132,103,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+131; pile[WZ4]=jvj+188; pile[WZ5]=jvj+133; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+131,jvj+188,jvj+133)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+133; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+123,jvj+133,NNNX)*/
goto l62;
l13:pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+19,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=52)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+19,jvj+28)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+28,jvj+29)*/
if((x[jvj+29]==135)) goto l18;
l14:pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+19,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=52)) goto l19;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+19,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=486)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+35)*/
x[jvj+211]=x[jvj+35] ;z[jvj+211]=z[jvj+35];
l15:if((x[jvj+211]<=0)) goto l19;
x[jvj+36]=s[x[jvj+211]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+211];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+36,jvj+37)*/
if((x[jvj+37]==135)) goto l18;
x[jvj+211]=t[x[jvj+211]];
goto l15;
l17:x[jvj+19]=s[x[jvj+212]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+212];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=486)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+22)*/
x[jvj+210]=x[jvj+22] ;z[jvj+210]=z[jvj+22];
l12:if((x[jvj+210]<=0)) goto l13;
x[jvj+24]=s[x[jvj+210]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+210];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l18;
x[jvj+210]=t[x[jvj+210]];
goto l12;
l19:pile[v[22]]=jvj+19; pile[WZ1]=jvj+23; pile[WZ2]=jvj+38; 
(*f[760])( );     /*MEMEX0(jvj+19,jvj+23,jvj+38)*/
if((x[jvj+38]==134)) goto l59;
l18:x[jvj+212]=t[x[jvj+212]];
l16:if((x[jvj+212]>0)) goto l17;
x[jvj+45]=0 ;z[jvj+45]=0;
l22:if((x[jvj+157]>0)) goto l23;
pile[v[22]]=jvj+45; pile[WZ1]=jvj+160; 
(*f[299])( );     /*COPEL0(jvj+45,jvj+160)*/
NNNT=145;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+189)*/
pile[WZ3]=485; pile[WZ4]=jvj+191; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=111; pile[WZ2]=jvj+192; 
(*f[54])( );     /*TRI1(jvj+191,111,jvj+192)*/
pile[v[22]]=jvj+192; pile[WZ1]=jvj+160; pile[WZ2]=107; pile[WZ3]=jvj+193; 
(*f[301])( );     /*TRI11(jvj+192,jvj+160,107,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+190; 
(*f[58])( );     /*TRI3(jvj+193,22,100,jvj+190)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+189; pile[WZ4]=jvj+161; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+189,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+161,107,jvj+23)*/
pile[WZ2]=jvj+190; 
(*f[36])( );     /*PLUSC0(jvj+161,107,jvj+190)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+161; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+161,NNNX)*/
goto l62;
l23:x[jvj+43]=s[x[jvj+157]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+157];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+23; pile[WZ2]=jvj+44; 
(*f[760])( );     /*MEMEX0(jvj+43,jvj+23,jvj+44)*/
if((x[jvj+44]==135)) goto l63;
l25:pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+43,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]==52)) goto l26;
if((x[jvj+48]!=486)) goto l24;
pile[v[22]]=107; pile[WZ1]=jvj+43; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(107,jvj+43,jvj+58)*/
x[jvj+213]=x[jvj+58] ;z[jvj+213]=z[jvj+58];
l20:if((x[jvj+213]<=0)) goto l24;
x[jvj+39]=s[x[jvj+213]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+213];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+23; pile[WZ2]=jvj+40; 
(*f[760])( );     /*MEMEX0(jvj+39,jvj+23,jvj+40)*/
if((x[jvj+40]==135)) goto l78;
x[jvj+213]=t[x[jvj+213]];
goto l20;
l26:pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+43,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+23; pile[WZ2]=jvj+50; 
(*f[760])( );     /*MEMEX0(jvj+49,jvj+23,jvj+50)*/
if((x[jvj+50]==135)) goto l64;
l27:pile[v[22]]=111; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+49,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=486)) goto l24;
pile[v[22]]=107; pile[WZ1]=jvj+49; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(107,jvj+49,jvj+54)*/
x[jvj+214]=x[jvj+54] ;z[jvj+214]=z[jvj+54];
l21:if((x[jvj+214]<=0)) goto l24;
x[jvj+41]=s[x[jvj+214]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+214];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+23; pile[WZ2]=jvj+42; 
(*f[760])( );     /*MEMEX0(jvj+41,jvj+23,jvj+42)*/
if((x[jvj+42]==135)) goto l71;
x[jvj+214]=t[x[jvj+214]];
goto l21;
l31:x[jvj+68]=t[x[jvj+68]];
l30:if((x[jvj+68]<=0)) goto l32;
x[jvj+73]=s[x[jvj+68]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+68];
if((x[NNNY]!=x[jvj+73])) goto l31;
pile[v[22]]=100; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(100,jvj+73,jvj+74)*/
if((x[jvj+74]!=22)) goto l31;
pile[v[22]]=111; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+73,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+70]!=x[jvj+76])) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+73; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,jvj+73,jvj+77)*/
x[jvj+4]=0 ;z[jvj+4]=0;
goto l1;
l35:x[jvj+215]=t[x[jvj+215]];
goto l33;
l37:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(538,NNNY,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+88,jvj+89)*/
if((x[jvj+89]!=22)) goto l38;
pile[v[22]]=111; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+88,jvj+90)*/
pile[v[22]]=101; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+90,jvj+91)*/
if(x[jvj+91]!=25&&x[jvj+91]!=26&&x[jvj+91]!=27&&x[jvj+91]!=28&&x[jvj+91]!=29&&x[jvj+91]!=30) goto l38;
pile[v[22]]=102; pile[WZ1]=jvj+88; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+88,jvj+92)*/
pile[v[22]]=103; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+88,jvj+93)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+94; 
(*f[2026])( );if(v[102]) goto l38;     /*COEFFS0(jvj+92,jvj+94)*/
if((x[jvj+94]==0)) goto l38;
pile[v[22]]=jvj+93; pile[WZ1]=jvj+95; 
(*f[2026])( );if(v[102]) goto l38;     /*COEFFS0(jvj+93,jvj+95)*/
if((x[jvj+95]==0)) goto l38;
x[jvj+17]=0 ;z[jvj+17]=0;
l6:if((x[jvj+94]<=0)) goto l7;
V68=s[x[jvj+94]];
pile[v[22]]=jvj+17; pile[WZ1]=V68; 
(*f[207])( );     /*PLUE2(jvj+17,V68)*/
x[jvj+94]=t[x[jvj+94]];
goto l6;
l38:pile[v[22]]=111; pile[WZ1]=jvj+88; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+88,jvj+99)*/
pile[v[22]]=101; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+99,jvj+100)*/
if((x[jvj+100]==52)) goto l39;
if((x[jvj+100]!=25)) goto l48;
x[jvj+107]=d[20];z[jvj+107]=0;
l41:if((x[jvj+107]<=0)) goto l48;
x[jvj+108]=s[x[jvj+107]] ;z[jvj+108]=(x[jvj+108]<=sepcte) ? x[jvj+108] : z[jvj+107];
pile[v[22]]=jvj+108; pile[WZ1]=jvj+88; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+108,jvj+88,jvj+109)*/
pile[v[22]]=111; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+109,jvj+110)*/
pile[v[22]]=101; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+110,jvj+111)*/
if((x[jvj+111]!=485)) goto l42;
pile[v[22]]=107; pile[WZ1]=jvj+109; pile[WZ2]=jvj+112; 
(*f[33])( );     /*FNDE0(107,jvj+109,jvj+112)*/
for(i=x[jvj+112],V182=0;i>0;i=t[i],V182++)  ;
if((V182!=2)) goto l42;
pile[v[22]]=268; pile[WZ1]=jvj+108; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(268,jvj+108,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+88; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+113,jvj+88,jvj+114)*/
pile[v[22]]=130; pile[WZ1]=jvj+114; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+114,V197)*/
V197=pile[WZ2]; 
I=V197;
x[jvj+216]=x[jvj+112] ;z[jvj+216]=z[jvj+112];
l43:if((x[jvj+216]<=0)) goto l42;
x[jvj+115]=s[x[jvj+216]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+216];
pile[v[22]]=100; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+115,jvj+116)*/
if((x[jvj+116]!=484)) goto l44;
x[jvj+117]=x[jvj+115] ;z[jvj+117]=z[jvj+115];
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; 
(*f[200])( );if(v[102]) goto l44;     /*NDD0(jvj+117,jvj+118)*/
x[jvj+62]=x[jvj+118] ;z[jvj+62]=z[jvj+118];
x[jvj+217]=x[jvj+112] ;z[jvj+217]=z[jvj+112];
l45:if((x[jvj+217]<=0)) goto l44;
x[jvj+119]=s[x[jvj+217]] ;z[jvj+119]=(x[jvj+119]<=sepcte) ? x[jvj+119] : z[jvj+217];
if((x[jvj+115]==x[jvj+119])) goto l46;
pile[v[22]]=100; pile[WZ1]=jvj+119; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+119,jvj+120)*/
if((x[jvj+120]!=484)) goto l46;
pile[v[22]]=jvj+119; pile[WZ1]=jvj+121; 
(*f[200])( );if(v[102]) goto l46;     /*NDD0(jvj+119,jvj+121)*/
x[jvj+63]=x[jvj+121] ;z[jvj+63]=z[jvj+121];
pile[v[22]]=280; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(280,jvj+62,V173)*/
V173=pile[WZ2]; 
pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(280,jvj+63,V174)*/
V174=pile[WZ2]; 
V172=V173+V174;
if((V172>I)) goto l47;
l28:pile[v[22]]=164; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(164,jvj+62,V176)*/
V176=pile[WZ2]; 
pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(164,jvj+63,V177)*/
V177=pile[WZ2]; 
V175=V176+V177;
if((V175<I)) goto l47;
l46:x[jvj+217]=t[x[jvj+217]];
goto l45;
l39:pile[v[22]]=102; pile[WZ1]=jvj+88; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+88,jvj+101)*/
pile[v[22]]=111; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+101,jvj+102)*/
pile[v[22]]=101; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+102,jvj+103)*/
if((x[jvj+103]!=485)) goto l48;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=1330; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(1330,jvj+12,jvj+13)*/
if((x[jvj+13]==68)) goto l48;
l40:pile[v[22]]=107; pile[WZ1]=jvj+101; pile[WZ2]=jvj+104; 
(*f[33])( );     /*FNDE0(107,jvj+101,jvj+104)*/
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+14]=d[118];z[jvj+14]=0;
goto l4;
l42:x[jvj+107]=t[x[jvj+107]];
goto l41;
l44:x[jvj+216]=t[x[jvj+216]];
goto l43;
l47:NNNT=208;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+122; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+122)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+122; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+88,jvj+122,NNNX)*/
goto l62;
l48:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(539,NNNY,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=jvj+123; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+123,jvj+124)*/
if((x[jvj+124]!=22)) goto l49;
pile[v[22]]=111; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+123,jvj+125)*/
pile[v[22]]=101; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+125,jvj+126)*/
if(x[jvj+126]!=25&&x[jvj+126]!=26&&x[jvj+126]!=27&&x[jvj+126]!=28&&x[jvj+126]!=29&&x[jvj+126]!=30) goto l49;
pile[v[22]]=102; pile[WZ1]=jvj+123; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+123,jvj+127)*/
pile[v[22]]=103; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+123,jvj+128)*/
pile[v[22]]=jvj+127; pile[WZ1]=jvj+129; 
(*f[2026])( );if(v[102]) goto l49;     /*COEFFS0(jvj+127,jvj+129)*/
if((x[jvj+129]==0)) goto l49;
pile[v[22]]=jvj+128; pile[WZ1]=jvj+130; 
(*f[2026])( );if(v[102]) goto l49;     /*COEFFS0(jvj+128,jvj+130)*/
if((x[jvj+130]==0)) goto l49;
x[jvj+18]=0 ;z[jvj+18]=0;
l9:if((x[jvj+129]<=0)) goto l10;
V88=s[x[jvj+129]];
pile[v[22]]=jvj+18; pile[WZ1]=V88; 
(*f[207])( );     /*PLUE2(jvj+18,V88)*/
x[jvj+129]=t[x[jvj+129]];
goto l9;
l49:pile[v[22]]=111; pile[WZ1]=jvj+123; pile[WZ2]=jvj+134; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+123,jvj+134)*/
pile[v[22]]=101; pile[WZ1]=jvj+134; pile[WZ2]=jvj+135; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+134,jvj+135)*/
if((x[jvj+135]!=25)) goto l57;
x[jvj+136]=d[20];z[jvj+136]=0;
l50:if((x[jvj+136]<=0)) goto l57;
x[jvj+137]=s[x[jvj+136]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+136];
pile[v[22]]=jvj+137; pile[WZ1]=jvj+123; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+137,jvj+123,jvj+138)*/
pile[v[22]]=111; pile[WZ1]=jvj+138; pile[WZ2]=jvj+139; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+138,jvj+139)*/
pile[v[22]]=101; pile[WZ1]=jvj+139; pile[WZ2]=jvj+140; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+139,jvj+140)*/
if((x[jvj+140]!=485)) goto l51;
pile[v[22]]=107; pile[WZ1]=jvj+138; pile[WZ2]=jvj+141; 
(*f[33])( );     /*FNDE0(107,jvj+138,jvj+141)*/
for(i=x[jvj+141],V226=0;i>0;i=t[i],V226++)  ;
if((V226!=2)) goto l51;
pile[v[22]]=268; pile[WZ1]=jvj+137; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(268,jvj+137,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+123; pile[WZ2]=jvj+143; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+142,jvj+123,jvj+143)*/
pile[v[22]]=130; pile[WZ1]=jvj+143; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+143,V241)*/
V241=pile[WZ2]; 
V209=V241;
x[jvj+218]=x[jvj+141] ;z[jvj+218]=z[jvj+141];
l52:if((x[jvj+218]<=0)) goto l51;
x[jvj+144]=s[x[jvj+218]] ;z[jvj+144]=(x[jvj+144]<=sepcte) ? x[jvj+144] : z[jvj+218];
pile[v[22]]=100; pile[WZ1]=jvj+144; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,jvj+144,jvj+145)*/
if((x[jvj+145]!=484)) goto l53;
x[jvj+146]=x[jvj+144] ;z[jvj+146]=z[jvj+144];
pile[v[22]]=jvj+146; pile[WZ1]=jvj+147; 
(*f[200])( );if(v[102]) goto l53;     /*NDD0(jvj+146,jvj+147)*/
x[jvj+64]=x[jvj+147] ;z[jvj+64]=z[jvj+147];
x[jvj+219]=x[jvj+141] ;z[jvj+219]=z[jvj+141];
l54:if((x[jvj+219]<=0)) goto l53;
x[jvj+148]=s[x[jvj+219]] ;z[jvj+148]=(x[jvj+148]<=sepcte) ? x[jvj+148] : z[jvj+219];
if((x[jvj+144]==x[jvj+148])) goto l55;
pile[v[22]]=100; pile[WZ1]=jvj+148; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(100,jvj+148,jvj+149)*/
if((x[jvj+149]!=484)) goto l55;
pile[v[22]]=jvj+148; pile[WZ1]=jvj+150; 
(*f[200])( );if(v[102]) goto l55;     /*NDD0(jvj+148,jvj+150)*/
x[jvj+65]=x[jvj+150] ;z[jvj+65]=z[jvj+150];
pile[v[22]]=280; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(280,jvj+64,V217)*/
V217=pile[WZ2]; 
pile[WZ1]=jvj+65; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(280,jvj+65,V218)*/
V218=pile[WZ2]; 
V216=V217+V218;
if((V216>V209)) goto l56;
l29:pile[v[22]]=164; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(164,jvj+64,V220)*/
V220=pile[WZ2]; 
pile[WZ1]=jvj+65; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(164,jvj+65,V221)*/
V221=pile[WZ2]; 
V219=V220+V221;
if((V219<V209)) goto l56;
l55:x[jvj+219]=t[x[jvj+219]];
goto l54;
l51:x[jvj+136]=t[x[jvj+136]];
goto l50;
l53:x[jvj+218]=t[x[jvj+218]];
goto l52;
l56:NNNT=208;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+151; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+151)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+151; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+123,jvj+151,NNNX)*/
goto l62;
l57:pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+152; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(111,NNNY,jvj+152)*/
pile[v[22]]=101; pile[WZ1]=jvj+152; pile[WZ2]=jvj+153; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(101,jvj+152,jvj+153)*/
if((x[jvj+153]!=485)) goto l61;
x[jvj+154]=vo[14];z[jvj+154]=vz[14];
pile[v[22]]=1330; pile[WZ1]=jvj+154; pile[WZ2]=jvj+155; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(1330,jvj+154,jvj+155)*/
if((x[jvj+155]!=68)) goto l61;
pile[v[22]]=NNNY; pile[WZ1]=jvj+156; 
(*f[887])( );     /*VARND0(NNNY,jvj+156)*/
pile[v[22]]=107; pile[WZ1]=NNNY; pile[WZ2]=jvj+157; 
(*f[33])( );     /*FNDE0(107,NNNY,jvj+157)*/
l58:if((x[jvj+156]<=0)) goto l61;
x[jvj+158]=s[x[jvj+156]] ;z[jvj+158]=(x[jvj+158]<=sepcte) ? x[jvj+158] : z[jvj+156];
pile[v[22]]=jvj+158; pile[WZ1]=jvj+159; 
(*f[1290])( );if(v[102]) goto l59;     /*DEPEXP0(jvj+158,jvj+159)*/
x[jvj+23]=x[jvj+159] ;z[jvj+23]=z[jvj+159];
x[jvj+212]=x[jvj+157] ;z[jvj+212]=z[jvj+157];
goto l16;
l59:x[jvj+156]=t[x[jvj+156]];
goto l58;
l61:x[NNNX]=NNNT=incon;
l60:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l63:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+46)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[522])( );     /*PLUB2(jvj+45,jvj+46)*/
goto l25;
l64:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+51)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+51; 
(*f[522])( );     /*PLUB2(jvj+45,jvj+51)*/
goto l27;
l66:x[jvj+194]=s[x[jvj+220]] ;z[jvj+194]=(x[jvj+194]<=sepcte) ? x[jvj+194] : z[jvj+220];
pile[v[22]]=jvj+194; pile[WZ1]=NNNY; pile[WZ2]=jvj+195; 
(*f[760])( );     /*MEMEX0(jvj+194,NNNY,jvj+195)*/
if((x[jvj+195]==135)) goto l67;
x[jvj+220]=t[x[jvj+220]];
goto l65;
l67:x[jvj+196]=0 ;z[jvj+196]=0;
x[jvj+221]=x[jvj+81] ;z[jvj+221]=z[jvj+81];
l68:if((x[jvj+221]>0)) goto l69;
x[jvj+7]=x[jvj+196] ;z[jvj+7]=z[jvj+196];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+8)*/
l3:if((x[jvj+85]<=0)) goto l36;
x[jvj+163]=s[x[jvj+85]] ;z[jvj+163]=(x[jvj+163]<=sepcte) ? x[jvj+163] : z[jvj+85];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+162; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+162)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+162; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+162,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+8,jvj+9,107)*/
pile[v[22]]=jvj+9; pile[WZ1]=107; pile[WZ2]=jvj+163; 
(*f[36])( );     /*PLUSC0(jvj+9,107,jvj+163)*/
pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+10)*/
x[jvj+85]=t[x[jvj+85]];
goto l3;
l69:x[jvj+197]=s[x[jvj+221]] ;z[jvj+197]=(x[jvj+197]<=sepcte) ? x[jvj+197] : z[jvj+221];
if((x[jvj+197]==x[jvj+194])) goto l70;
pile[v[22]]=jvj+196; pile[WZ1]=jvj+197; 
(*f[68])( );     /*PLUE0(jvj+196,jvj+197)*/
l70:x[jvj+221]=t[x[jvj+221]];
goto l68;
l71:x[jvj+222]=x[jvj+54] ;z[jvj+222]=z[jvj+54];
l72:if((x[jvj+222]>0)) goto l73;
l24:x[jvj+157]=t[x[jvj+157]];
goto l22;
l73:x[jvj+198]=s[x[jvj+222]] ;z[jvj+198]=(x[jvj+198]<=sepcte) ? x[jvj+198] : z[jvj+222];
pile[v[22]]=jvj+198; pile[WZ1]=jvj+41; pile[WZ2]=jvj+199; 
(*f[760])( );     /*MEMEX0(jvj+198,jvj+41,jvj+199)*/
if((x[jvj+199]==135)) goto l74;
x[jvj+222]=t[x[jvj+222]];
goto l72;
l74:x[jvj+200]=0 ;z[jvj+200]=0;
x[jvj+223]=x[jvj+54] ;z[jvj+223]=z[jvj+54];
l75:if((x[jvj+223]>0)) goto l76;
x[jvj+55]=x[jvj+200] ;z[jvj+55]=z[jvj+200];
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[299])( );     /*COPEL0(jvj+55,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+167)*/
pile[WZ3]=486; pile[WZ4]=jvj+170; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=111; pile[WZ2]=jvj+171; 
(*f[54])( );     /*TRI1(jvj+170,111,jvj+171)*/
pile[v[22]]=jvj+171; pile[WZ1]=jvj+56; pile[WZ2]=107; pile[WZ3]=jvj+172; 
(*f[301])( );     /*TRI11(jvj+171,jvj+56,107,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+169; 
(*f[58])( );     /*TRI3(jvj+172,22,100,jvj+169)*/
pile[v[22]]=jvj+167; pile[WZ1]=111; pile[WZ2]=jvj+168; 
(*f[54])( );     /*TRI1(jvj+167,111,jvj+168)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+169; pile[WZ4]=jvj+168; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+169,jvj+168,jvj+57)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+57; 
(*f[522])( );     /*PLUB2(jvj+45,jvj+57)*/
goto l24;
l76:x[jvj+201]=s[x[jvj+223]] ;z[jvj+201]=(x[jvj+201]<=sepcte) ? x[jvj+201] : z[jvj+223];
if((x[jvj+201]==x[jvj+198])) goto l77;
pile[v[22]]=jvj+200; pile[WZ1]=jvj+201; 
(*f[68])( );     /*PLUE0(jvj+200,jvj+201)*/
l77:x[jvj+223]=t[x[jvj+223]];
goto l75;
l78:x[jvj+224]=x[jvj+58] ;z[jvj+224]=z[jvj+58];
l79:if((x[jvj+224]>0)) goto l80;
goto l24;
l80:x[jvj+202]=s[x[jvj+224]] ;z[jvj+202]=(x[jvj+202]<=sepcte) ? x[jvj+202] : z[jvj+224];
pile[v[22]]=jvj+202; pile[WZ1]=jvj+39; pile[WZ2]=jvj+203; 
(*f[760])( );     /*MEMEX0(jvj+202,jvj+39,jvj+203)*/
if((x[jvj+203]==135)) goto l81;
x[jvj+224]=t[x[jvj+224]];
goto l79;
l81:x[jvj+204]=0 ;z[jvj+204]=0;
x[jvj+225]=x[jvj+58] ;z[jvj+225]=z[jvj+58];
l82:if((x[jvj+225]>0)) goto l83;
x[jvj+59]=x[jvj+204] ;z[jvj+59]=z[jvj+204];
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[299])( );     /*COPEL0(jvj+59,jvj+60)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+173; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=111; pile[WZ2]=jvj+174; 
(*f[54])( );     /*TRI1(jvj+173,111,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=jvj+60; pile[WZ2]=107; pile[WZ3]=jvj+175; 
(*f[301])( );     /*TRI11(jvj+174,jvj+60,107,jvj+175)*/
pile[v[22]]=jvj+175; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+175,22,100,jvj+61)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+61; 
(*f[522])( );     /*PLUB2(jvj+45,jvj+61)*/
goto l24;
l83:x[jvj+205]=s[x[jvj+225]] ;z[jvj+205]=(x[jvj+205]<=sepcte) ? x[jvj+205] : z[jvj+225];
if((x[jvj+205]==x[jvj+202])) goto l84;
pile[v[22]]=jvj+204; pile[WZ1]=jvj+205; 
(*f[68])( );     /*PLUE0(jvj+204,jvj+205)*/
l84:x[jvj+225]=t[x[jvj+225]];
goto l82;
l86:x[jvj+206]=s[x[jvj+226]] ;z[jvj+206]=(x[jvj+206]<=sepcte) ? x[jvj+206] : z[jvj+226];
pile[v[22]]=jvj+206; pile[WZ1]=NNNY; pile[WZ2]=jvj+207; 
(*f[760])( );     /*MEMEX0(jvj+206,NNNY,jvj+207)*/
if((x[jvj+207]==135)) goto l87;
x[jvj+226]=t[x[jvj+226]];
goto l85;
l87:x[jvj+208]=0 ;z[jvj+208]=0;
x[jvj+227]=x[jvj+68] ;z[jvj+227]=z[jvj+68];
l88:if((x[jvj+227]>0)) goto l89;
x[jvj+71]=x[jvj+208] ;z[jvj+71]=z[jvj+208];
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; 
(*f[299])( );     /*COPEL0(jvj+71,jvj+72)*/
goto l30;
l89:x[jvj+209]=s[x[jvj+227]] ;z[jvj+209]=(x[jvj+209]<=sepcte) ? x[jvj+209] : z[jvj+227];
if((x[jvj+209]==x[jvj+206])) goto l90;
pile[v[22]]=jvj+208; pile[WZ1]=jvj+209; 
(*f[68])( );     /*PLUE0(jvj+208,jvj+209)*/
l90:x[jvj+227]=t[x[jvj+227]];
goto l88;
}
