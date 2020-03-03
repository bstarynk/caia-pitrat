#include "dx.h"
void BOOTRADB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int WW=0,VV=0,V=0,V231=0,V275=0,V182=0,V150=0,V203=0,V222=0;
int T,BA,C;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=324;
x[jvj+1]=11709;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1714&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; BA=pile[v[22]+1]; C=pile[v[22]+2]; RT=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=T; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,T,jvj+2)*/
if((x[jvj+2]!=22)) goto l21;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,T,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]!=45&&x[jvj+4]!=1686) goto l21;
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,T,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=61)) goto l21;
pile[v[22]]=459; pile[WZ1]=C; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(459,C,jvj+7)*/
if((x[jvj+7]==228)) goto l21;
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,T,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+5,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=103; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+5,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+165; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+165)*/
pile[WZ3]=29; pile[WZ4]=jvj+241; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+241)*/
pile[v[22]]=jvj+241; pile[WZ1]=111; pile[WZ2]=jvj+242; 
(*f[54])( );     /*TRI1(jvj+241,111,jvj+242)*/
pile[v[22]]=jvj+242; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+243; 
(*f[58])( );     /*TRI3(jvj+242,jvj+11,103,jvj+243)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+243; pile[WZ5]=jvj+166; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+243,jvj+166)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+244; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+244)*/
pile[v[22]]=jvj+244; pile[WZ1]=111; pile[WZ2]=jvj+245; 
(*f[54])( );     /*TRI1(jvj+244,111,jvj+245)*/
pile[v[22]]=jvj+245; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+246; 
(*f[58])( );     /*TRI3(jvj+245,jvj+13,103,jvj+246)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+246; pile[WZ5]=jvj+167; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+246,jvj+167)*/
pile[WZ2]=111; pile[WZ3]=jvj+165; pile[WZ4]=RT; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+165,RT)*/
pile[v[22]]=RT; pile[WZ1]=107; pile[WZ2]=jvj+166; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+166)*/
pile[WZ2]=jvj+167; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+167)*/
l53:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l3:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+168; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=111; pile[WZ2]=jvj+169; 
(*f[54])( );     /*TRI1(jvj+168,111,jvj+169)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+170; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+169,107,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+171; 
(*f[58])( );     /*TRI3(jvj+170,22,100,jvj+171)*/
l32:x[RT]=x[jvj+171] ;z[RT]=z[jvj+171];
goto l53;
l4:pile[v[22]]=970; pile[WZ1]=BA; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(970,BA,jvj+23)*/
if((x[jvj+23]==11786)) goto l10;
l8:pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+20; pile[WZ3]=jvj+29; 
(*f[1503])( );if(v[102]) goto l10;     /*BOOTRADA0(C,BA,jvj+20,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+181)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-11168); pile[WZ4]=jvj+183; 
(*f[270])( );     /*QUADRI7(100,21,140,(-11168),jvj+183)*/
pile[v[22]]=jvj+181; pile[WZ1]=111; pile[WZ2]=jvj+182; 
(*f[54])( );     /*TRI1(jvj+181,111,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=jvj+183; pile[WZ2]=103; pile[WZ3]=jvj+184; 
(*f[58])( );     /*TRI3(jvj+182,jvj+183,103,jvj+184)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+184; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+184,jvj+176)*/
l10:pile[v[22]]=763; pile[WZ1]=774; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(763,774,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==x[jvj+33]) goto l11;
l13:if(x[jvj+176]==incon) goto l14;
l50:x[RT]=x[jvj+176] ;z[RT]=z[jvj+176];
if(x[jvj+33]!=1709&&x[jvj+33]!=1814&&x[jvj+33]!=1050) goto l53;
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l53;     /*FNDC1(140,jvj+20,V)*/
V=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=jvj+33; pile[WZ2]=BA; 
(*f[1501])( );     /*NATFNDA0(V,jvj+33,BA)*/
goto l53;
l5:pile[v[22]]=970; pile[WZ1]=BA; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(970,BA,jvj+26)*/
if((x[jvj+26]!=11786)) goto l9;
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+20,VV)*/
VV=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=VV; pile[WZ2]=jvj+24; 
(*f[1491])( );     /*VDSBA0(BA,VV,jvj+24)*/
pile[v[22]]=129; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(129,jvj+24,jvj+25)*/
if((x[jvj+25]==129)) goto l9;
goto l10;
l6:pile[v[22]]=jvj+20; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+172; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+172)*/
pile[WZ3]=654; pile[WZ4]=jvj+247; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+247)*/
pile[WZ3]=653; pile[WZ4]=jvj+252; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+252)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+252; pile[WZ4]=jvj+251; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+252,jvj+251)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=21; pile[WZ4]=jvj+249; 
(*f[181])( );     /*QUADRI2(100,20,101,21,jvj+249)*/
pile[v[22]]=jvj+247; pile[WZ1]=111; pile[WZ2]=jvj+248; 
(*f[54])( );     /*TRI1(jvj+247,111,jvj+248)*/
pile[v[22]]=jvj+248; pile[WZ1]=jvj+249; pile[WZ2]=103; pile[WZ3]=jvj+250; 
(*f[58])( );     /*TRI3(jvj+248,jvj+249,103,jvj+250)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+251; pile[WZ4]=jvj+250; pile[WZ5]=jvj+174; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+251,jvj+250,jvj+174)*/
pile[v[22]]=jvj+172; pile[WZ1]=111; pile[WZ2]=jvj+173; 
(*f[54])( );     /*TRI1(jvj+172,111,jvj+173)*/
pile[v[22]]=jvj+173; pile[WZ1]=jvj+174; pile[WZ2]=103; pile[WZ3]=jvj+175; 
(*f[58])( );     /*TRI3(jvj+173,jvj+174,103,jvj+175)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+175; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+175,jvj+176)*/
goto l10;
l7:pile[v[22]]=jvj+20; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+177; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+177)*/
pile[WZ3]=654; pile[WZ4]=jvj+253; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+253)*/
pile[WZ3]=653; pile[WZ4]=jvj+258; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+258)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+258; pile[WZ4]=jvj+257; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+258,jvj+257)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=324; pile[WZ4]=jvj+255; 
(*f[181])( );     /*QUADRI2(100,20,101,324,jvj+255)*/
pile[v[22]]=jvj+253; pile[WZ1]=111; pile[WZ2]=jvj+254; 
(*f[54])( );     /*TRI1(jvj+253,111,jvj+254)*/
pile[v[22]]=jvj+254; pile[WZ1]=jvj+255; pile[WZ2]=103; pile[WZ3]=jvj+256; 
(*f[58])( );     /*TRI3(jvj+254,jvj+255,103,jvj+256)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+257; pile[WZ4]=jvj+256; pile[WZ5]=jvj+179; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+257,jvj+256,jvj+179)*/
pile[v[22]]=jvj+177; pile[WZ1]=111; pile[WZ2]=jvj+178; 
(*f[54])( );     /*TRI1(jvj+177,111,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=jvj+179; pile[WZ2]=103; pile[WZ3]=jvj+180; 
(*f[58])( );     /*TRI3(jvj+178,jvj+179,103,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+180; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+180,jvj+176)*/
goto l10;
l9:pile[v[22]]=jvj+20; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+185; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+185)*/
pile[WZ3]=653; pile[WZ4]=jvj+262; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+262)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+262; pile[WZ4]=jvj+259; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+262,jvj+259)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+263; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+263)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+263; pile[WZ4]=jvj+261; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+263,jvj+261)*/
pile[v[22]]=jvj+259; pile[WZ1]=111; pile[WZ2]=jvj+260; 
(*f[54])( );     /*TRI1(jvj+259,111,jvj+260)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+261; pile[WZ4]=jvj+260; pile[WZ5]=jvj+187; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+261,jvj+260,jvj+187)*/
pile[v[22]]=jvj+185; pile[WZ1]=111; pile[WZ2]=jvj+186; 
(*f[54])( );     /*TRI1(jvj+185,111,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=jvj+187; pile[WZ2]=103; pile[WZ3]=jvj+188; 
(*f[58])( );     /*TRI3(jvj+186,jvj+187,103,jvj+188)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+188; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+188,jvj+176)*/
goto l10;
l11:pile[v[22]]=1775; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1775,jvj+33,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+20,WW)*/
WW=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=WW; pile[WZ2]=jvj+21; 
(*f[1491])( );     /*VDSBA0(BA,WW,jvj+21)*/
pile[v[22]]=129; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(129,jvj+21,jvj+22)*/
if((x[jvj+22]==1881)) goto l13;
l12:pile[v[22]]=jvj+20; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+189)*/
pile[WZ3]=654; pile[WZ4]=jvj+264; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+264)*/
pile[WZ3]=653; pile[WZ4]=jvj+269; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+269)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+269; pile[WZ4]=jvj+268; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+269,jvj+268)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+34; pile[WZ4]=jvj+266; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+34,jvj+266)*/
pile[v[22]]=jvj+264; pile[WZ1]=111; pile[WZ2]=jvj+265; 
(*f[54])( );     /*TRI1(jvj+264,111,jvj+265)*/
pile[v[22]]=jvj+265; pile[WZ1]=jvj+266; pile[WZ2]=103; pile[WZ3]=jvj+267; 
(*f[58])( );     /*TRI3(jvj+265,jvj+266,103,jvj+267)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+268; pile[WZ4]=jvj+267; pile[WZ5]=jvj+191; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+268,jvj+267,jvj+191)*/
pile[v[22]]=jvj+189; pile[WZ1]=111; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,111,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+191; pile[WZ2]=103; pile[WZ3]=jvj+192; 
(*f[58])( );     /*TRI3(jvj+190,jvj+191,103,jvj+192)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+192; pile[WZ5]=jvj+176; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+192,jvj+176)*/
goto l50;
l15:x[jvj+36]=228 ;z[jvj+36]=228;
l35:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,T,jvj+103)*/
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(447,C,jvj+104)*/
pile[WZ1]=jvj+104; pile[WZ2]=459; pile[WZ3]=jvj+36; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(447,jvj+104,459,jvj+36,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=BA; pile[WZ2]=jvj+103; pile[WZ3]=jvj+106; 
(*f[1503])( );if(v[102]) goto l38;     /*BOOTRADA0(jvj+105,BA,jvj+103,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+107; 
(*f[255])( );     /*COPEXP0(jvj+106,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+209; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=111; pile[WZ2]=jvj+210; 
(*f[54])( );     /*TRI1(jvj+209,111,jvj+210)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+210; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+107,jvj+210,RT)*/
pile[v[22]]=155; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(155,jvj+37,jvj+38)*/
if((x[jvj+38]!=68)) goto l53;
pile[v[22]]=107; pile[WZ1]=T; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,T,jvj+39)*/
l16:if((x[jvj+39]<=0)) goto l53;
x[jvj+41]=s[x[jvj+39]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+39];
pile[v[22]]=447; pile[WZ1]=jvj+104; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(447,jvj+104,459,865,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=BA; pile[WZ2]=jvj+41; pile[WZ3]=jvj+42; 
(*f[1503])( );if(v[102]) goto l17;     /*BOOTRADA0(jvj+40,BA,jvj+41,jvj+42)*/
pile[v[22]]=RT; pile[WZ1]=107; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+42)*/
l17:x[jvj+39]=t[x[jvj+39]];
goto l16;
l18:x[jvj+306]=1724 ;z[jvj+306]=1724;
l45:pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+43; pile[WZ3]=jvj+136; 
(*f[1503])( );if(v[102]) goto l51;     /*BOOTRADA0(C,BA,jvj+43,jvj+136)*/
pile[v[22]]=jvj+136; pile[WZ1]=jvj+137; 
(*f[255])( );     /*COPEXP0(jvj+136,jvj+137)*/
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+138; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,T,jvj+138)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+139; 
(*f[1503])( );if(v[102]) goto l51;     /*BOOTRADA0(C,BA,jvj+138,jvj+139)*/
pile[v[22]]=jvj+139; pile[WZ1]=jvj+140; 
(*f[255])( );     /*COPEXP0(jvj+139,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+306; pile[WZ4]=jvj+226; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+306,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=111; pile[WZ2]=jvj+227; 
(*f[54])( );     /*TRI1(jvj+226,111,jvj+227)*/
pile[v[22]]=jvj+227; pile[WZ1]=jvj+140; pile[WZ2]=103; pile[WZ3]=jvj+228; 
(*f[58])( );     /*TRI3(jvj+227,jvj+140,103,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+228; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+137,jvj+228,RT)*/
goto l53;
l21:pile[v[22]]=101; pile[WZ1]=T; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,T,jvj+57)*/
pile[v[22]]=1775; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1775,jvj+57,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+58; pile[WZ4]=RT; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+58,RT)*/
goto l53;
l22:pile[v[22]]=100; pile[WZ1]=T; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,T,jvj+59)*/
if((x[jvj+59]==43)) goto l23;
if((x[jvj+59]==22)) goto l25;
if((x[jvj+59]!=61)) goto l38;
pile[v[22]]=102; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,T,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]==833)) goto l38;
l19:pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+46,jvj+48)*/
if((x[jvj+48]==828)) goto l38;
l20:pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+46,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==653)) goto l38;
l36:pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,T,jvj+51)*/
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]==653)) goto l38;
l37:pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+46; pile[WZ3]=jvj+108; 
(*f[1503])( );if(v[102]) goto l38;     /*BOOTRADA0(C,BA,jvj+46,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; 
(*f[255])( );     /*COPEXP0(jvj+108,jvj+109)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+51; pile[WZ3]=jvj+110; 
(*f[1503])( );if(v[102]) goto l38;     /*BOOTRADA0(C,BA,jvj+51,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=jvj+111; 
(*f[255])( );     /*COPEXP0(jvj+110,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1772; pile[WZ4]=jvj+211; 
(*f[181])( );     /*QUADRI2(100,20,101,1772,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=111; pile[WZ2]=jvj+212; 
(*f[54])( );     /*TRI1(jvj+211,111,jvj+212)*/
pile[v[22]]=jvj+212; pile[WZ1]=jvj+111; pile[WZ2]=103; pile[WZ3]=jvj+213; 
(*f[58])( );     /*TRI3(jvj+212,jvj+111,103,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+109; pile[WZ4]=jvj+213; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+109,jvj+213,RT)*/
goto l53;
l23:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,T,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+60,jvj+61)*/
if((x[jvj+61]!=1805)) goto l24;
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,T,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=462; pile[WZ4]=jvj+195; 
(*f[181])( );     /*QUADRI2(100,20,101,462,jvj+195)*/
pile[WZ3]=498; pile[WZ4]=jvj+271; 
(*f[181])( );     /*QUADRI2(100,20,101,498,jvj+271)*/
pile[v[22]]=jvj+63; pile[WZ1]=103; pile[WZ2]=jvj+270; 
(*f[54])( );     /*TRI1(jvj+63,103,jvj+270)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+271; pile[WZ4]=jvj+270; pile[WZ5]=jvj+193; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+271,jvj+270,jvj+193)*/
pile[v[22]]=jvj+193; pile[WZ1]=103; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(jvj+193,103,jvj+194)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+195; pile[WZ4]=jvj+194; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+195,jvj+194,RT)*/
goto l53;
l24:pile[v[22]]=jvj+60; pile[WZ1]=jvj+64; 
(*f[255])( );     /*COPEXP0(jvj+60,jvj+64)*/
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,T,jvj+65)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+66; 
(*f[1503])( );if(v[102]) goto l38;     /*BOOTRADA0(C,BA,jvj+65,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[255])( );     /*COPEXP0(jvj+66,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=103; pile[WZ2]=jvj+196; 
(*f[54])( );     /*TRI1(jvj+67,103,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+196; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+64,jvj+196,RT)*/
goto l53;
l25:pile[v[22]]=107; pile[WZ1]=T; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(107,T,jvj+68)*/
for(i=x[jvj+68],V182=0;i>0;i=t[i],V182++)  ;
if((V182!=1)) goto l28;
pile[v[22]]=111; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,T,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+69,jvj+70)*/
pile[v[22]]=155; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(155,jvj+70,jvj+71)*/
if((x[jvj+71]!=68)) goto l28;
pile[v[22]]=498; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(498,jvj+70,jvj+72)*/
l26:if((x[jvj+68]<=0)) goto l28;
x[jvj+73]=s[x[jvj+68]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+68];
pile[v[22]]=111; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+73,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]!=267)) goto l27;
pile[v[22]]=107; pile[WZ1]=jvj+73; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(107,jvj+73,jvj+76)*/
pile[v[22]]=102; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+73,jvj+77)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+78; 
(*f[1503])( );if(v[102]) goto l27;     /*BOOTRADA0(C,BA,jvj+77,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; 
(*f[255])( );     /*COPEXP0(jvj+78,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+72; pile[WZ4]=jvj+197; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+72,jvj+197)*/
pile[WZ3]=267; pile[WZ4]=jvj+272; 
(*f[181])( );     /*QUADRI2(100,20,101,267,jvj+272)*/
pile[WZ3]=1779; pile[WZ4]=jvj+279; 
(*f[181])( );     /*QUADRI2(100,20,101,1779,jvj+279)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+283; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+283)*/
pile[WZ3]=(-8708); pile[WZ4]=jvj+281; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8708),jvj+281)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=447; pile[WZ4]=jvj+288; 
(*f[181])( );     /*QUADRI2(100,20,101,447,jvj+288)*/
pile[WZ4]=jvj+291; 
(*f[181])( );     /*QUADRI2(100,20,101,447,jvj+291)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+289; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+289)*/
pile[v[22]]=jvj+289; pile[WZ1]=103; pile[WZ2]=jvj+290; 
(*f[54])( );     /*TRI1(jvj+289,103,jvj+290)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+291; pile[WZ4]=jvj+290; pile[WZ5]=jvj+286; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+291,jvj+290,jvj+286)*/
pile[v[22]]=jvj+286; pile[WZ1]=103; pile[WZ2]=jvj+287; 
(*f[54])( );     /*TRI1(jvj+286,103,jvj+287)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+288; pile[WZ4]=jvj+287; pile[WZ5]=jvj+284; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+288,jvj+287,jvj+284)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=459; pile[WZ4]=jvj+294; 
(*f[181])( );     /*QUADRI2(100,20,101,459,jvj+294)*/
pile[WZ3]=865; pile[WZ4]=jvj+292; 
(*f[181])( );     /*QUADRI2(100,20,101,865,jvj+292)*/
pile[v[22]]=jvj+292; pile[WZ1]=103; pile[WZ2]=jvj+293; 
(*f[54])( );     /*TRI1(jvj+292,103,jvj+293)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+294; pile[WZ4]=jvj+293; pile[WZ5]=jvj+285; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+294,jvj+293,jvj+285)*/
pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+277; 
(*f[54])( );     /*TRI1(69,100,jvj+277)*/
pile[v[22]]=jvj+277; pile[WZ1]=108; pile[WZ2]=jvj+284; 
(*f[36])( );     /*PLUSC0(jvj+277,108,jvj+284)*/
pile[WZ2]=jvj+285; 
(*f[36])( );     /*PLUSC0(jvj+277,108,jvj+285)*/
pile[WZ1]=160; pile[WZ2]=jvj+278; 
(*f[54])( );     /*TRI1(jvj+277,160,jvj+278)*/
pile[v[22]]=jvj+278; pile[WZ1]=jvj+279; pile[WZ2]=111; pile[WZ3]=jvj+280; 
(*f[58])( );     /*TRI3(jvj+278,jvj+279,111,jvj+280)*/
pile[v[22]]=jvj+280; pile[WZ1]=jvj+281; pile[WZ2]=103; pile[WZ3]=jvj+282; 
(*f[58])( );     /*TRI3(jvj+280,jvj+281,103,jvj+282)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+283; pile[WZ4]=jvj+282; pile[WZ5]=jvj+276; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+283,jvj+282,jvj+276)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+295; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+295)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+299; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+299)*/
pile[WZ3]=(-697); pile[WZ4]=jvj+297; 
(*f[270])( );     /*QUADRI7(100,21,140,(-697),jvj+297)*/
pile[v[22]]=jvj+295; pile[WZ1]=111; pile[WZ2]=jvj+296; 
(*f[54])( );     /*TRI1(jvj+295,111,jvj+296)*/
pile[v[22]]=jvj+296; pile[WZ1]=jvj+297; pile[WZ2]=103; pile[WZ3]=jvj+298; 
(*f[58])( );     /*TRI3(jvj+296,jvj+297,103,jvj+298)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+299; pile[WZ4]=jvj+298; pile[WZ5]=jvj+274; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+299,jvj+298,jvj+274)*/
pile[v[22]]=jvj+272; pile[WZ1]=111; pile[WZ2]=jvj+273; 
(*f[54])( );     /*TRI1(jvj+272,111,jvj+273)*/
pile[v[22]]=jvj+274; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+275; 
(*f[298])( );     /*TRIENS1(jvj+274,(-20),jvj+273,107,jvj+275)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+276; pile[WZ5]=jvj+199; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+276,jvj+275,jvj+199)*/
pile[v[22]]=jvj+197; pile[WZ1]=111; pile[WZ2]=jvj+198; 
(*f[54])( );     /*TRI1(jvj+197,111,jvj+198)*/
pile[v[22]]=jvj+199; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+200; 
(*f[298])( );     /*TRIENS1(jvj+199,(-20),jvj+198,107,jvj+200)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+79,jvj+200,RT)*/
goto l53;
l27:x[jvj+68]=t[x[jvj+68]];
goto l26;
l28:pile[v[22]]=459; pile[WZ1]=C; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(459,C,jvj+80)*/
if((x[jvj+80]!=865)) goto l30;
pile[v[22]]=111; pile[WZ1]=T; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,T,jvj+81)*/
pile[v[22]]=101; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+81,jvj+82)*/
pile[v[22]]=1564; pile[WZ1]=145; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(1564,145,jvj+83)*/
for(a=x[jvj+83];a>0;a=t[a]) if(s[a]==x[jvj+82]) goto l29;
l30:pile[v[22]]=111; pile[WZ1]=T; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,T,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+86,jvj+37)*/
if(x[jvj+37]!=1884&&x[jvj+37]!=1885) goto l31;
pile[v[22]]=498; pile[WZ1]=jvj+37; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+37,jvj+87)*/
pile[v[22]]=218; pile[WZ1]=BA; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(218,BA,jvj+88)*/
pile[v[22]]=jvj+88; 
(*f[1239])( );if(v[102]) goto l31;     /*NOUVAR0(jvj+88,V150)*/
V150=pile[WZ1]; 
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,T,jvj+89)*/
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(447,C,jvj+90)*/
pile[WZ1]=jvj+90; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(447,jvj+90,459,865,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=BA; pile[WZ2]=jvj+89; pile[WZ3]=jvj+92; 
(*f[1503])( );if(v[102]) goto l31;     /*BOOTRADA0(jvj+91,BA,jvj+89,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; 
(*f[255])( );     /*COPEXP0(jvj+92,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+87; pile[WZ4]=jvj+201; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+87,jvj+201)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V150; pile[WZ4]=jvj+205; 
(*f[270])( );     /*QUADRI7(100,21,140,V150,jvj+205)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+300; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+300)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V150; pile[WZ4]=jvj+303; 
(*f[270])( );     /*QUADRI7(100,21,140,V150,jvj+303)*/
pile[v[22]]=jvj+300; pile[WZ1]=111; pile[WZ2]=jvj+301; 
(*f[54])( );     /*TRI1(jvj+300,111,jvj+301)*/
pile[v[22]]=jvj+301; pile[WZ1]=jvj+93; pile[WZ2]=103; pile[WZ3]=jvj+302; 
(*f[58])( );     /*TRI3(jvj+301,jvj+93,103,jvj+302)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+303; pile[WZ4]=jvj+302; pile[WZ5]=jvj+203; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+303,jvj+302,jvj+203)*/
pile[v[22]]=jvj+201; pile[WZ1]=111; pile[WZ2]=jvj+202; 
(*f[54])( );     /*TRI1(jvj+201,111,jvj+202)*/
pile[v[22]]=jvj+203; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+204; 
(*f[298])( );     /*TRIENS1(jvj+203,(-20),jvj+202,107,jvj+204)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+205; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+205,jvj+204,RT)*/
pile[v[22]]=RT; pile[WZ1]=BA; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(RT,BA,865)*/
goto l53;
l29:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,T,jvj+84)*/
pile[v[22]]=103; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,T,jvj+85)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+84; pile[WZ3]=T; pile[WZ4]=BA; pile[WZ5]=C; pile[v[22]+6]=RT; 
(*f[1921])( );if(v[102]) goto l30;     /*BOOTRADBAS0(jvj+82,jvj+84,jvj+85,T,BA,C,RT)*/
goto l53;
l31:if(x[jvj+37]!=1606&&x[jvj+37]!=1707) goto l33;
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,T,jvj+94)*/
pile[v[22]]=101; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+94,jvj+95)*/
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,T,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+95; pile[WZ2]=BA; pile[WZ3]=C; pile[WZ4]=jvj+18; 
(*f[1919])( );if(v[102]) goto l33;     /*BOOTRADIS0(jvj+96,jvj+95,BA,C,jvj+18)*/
x[jvj+171]=incon;
if((x[jvj+37]==1707)) goto l3;
x[jvj+171]=x[jvj+18] ;z[jvj+171]=z[jvj+18];
goto l32;
l33:if(x[jvj+37]!=1698&&x[jvj+37]!=1725) goto l34;
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,T,jvj+97)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+98; 
(*f[1503])( );if(v[102]) goto l34;     /*BOOTRADA0(C,BA,jvj+97,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+99; 
(*f[255])( );     /*COPEXP0(jvj+98,jvj+99)*/
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,T,jvj+100)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+101; 
(*f[1503])( );if(v[102]) goto l34;     /*BOOTRADA0(C,BA,jvj+100,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; 
(*f[255])( );     /*COPEXP0(jvj+101,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+37; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+37,jvj+206)*/
pile[v[22]]=jvj+206; pile[WZ1]=111; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,111,jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=jvj+102; pile[WZ2]=103; pile[WZ3]=jvj+208; 
(*f[58])( );     /*TRI3(jvj+207,jvj+102,103,jvj+208)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+99; pile[WZ4]=jvj+208; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+99,jvj+208,RT)*/
goto l53;
l34:pile[v[22]]=118; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(118,jvj+37,V203)*/
V203=pile[WZ2]; 
if((V203!=1)) goto l38;
x[jvj+36]=incon;
if((x[jvj+37]==156)) goto l15;
pile[v[22]]=459; pile[WZ1]=C; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(459,C,jvj+36)*/
goto l35;
l38:pile[v[22]]=111; pile[WZ1]=T; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,T,jvj+112)*/
pile[v[22]]=101; pile[WZ1]=jvj+112; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+112,jvj+113)*/
if((x[jvj+113]==1597)) goto l39;
if((x[jvj+113]==1715)) goto l41;
if((x[jvj+113]==1606)) goto l42;
if((x[jvj+113]==1686)) goto l44;
if((x[jvj+113]==1741)) goto l46;
if((x[jvj+113]==1847)) goto l47;
if((x[jvj+113]!=1604)) goto l51;
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+154; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,T,jvj+154)*/
pile[v[22]]=101; pile[WZ1]=jvj+154; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+154,jvj+33)*/
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,T,jvj+20)*/
x[jvj+176]=incon;
if((x[jvj+33]==387)) goto l6;
if((x[jvj+33]==1848)) goto l7;
if((x[jvj+33]==1732)) goto l4;
if((x[jvj+33]==1814)) goto l5;
if((x[jvj+33]!=1709)) goto l10;
l14:x[jvj+176]=250 ;z[jvj+176]=250;
goto l50;
l39:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,T,jvj+114)*/
x[jvj+115]=incon;
pile[v[22]]=jvj+114; pile[WZ1]=1045; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+114,1045,68)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+114; pile[WZ3]=jvj+115; 
(*f[1503])( );if(v[102]) goto l54;     /*BOOTRADA0(C,BA,jvj+114,jvj+115)*/
l54:pile[v[22]]=1045; pile[WZ1]=jvj+114; 
(*f[71])( );     /*ENLV0(1045,jvj+114)*/
if(x[jvj+115]!=incon) goto l40;
l51:pile[v[22]]=140; pile[WZ1]=T; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(140,T,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=1687; pile[WZ2]=jvj+155; 
(*f[33])( );     /*FNDE0(1687,T,jvj+155)*/
if((x[jvj+155]==0)) goto l52;
if((x[jvj+155]<=0)) goto l52;
x[jvj+156]=s[x[jvj+155]] ;z[jvj+156]=(x[jvj+156]<=sepcte) ? x[jvj+156] : z[jvj+155];
pile[v[22]]=100; pile[WZ1]=jvj+156; pile[WZ2]=jvj+157; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(100,jvj+156,jvj+157)*/
if((x[jvj+157]!=22)) goto l52;
pile[v[22]]=111; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,jvj+156,jvj+158)*/
pile[v[22]]=101; pile[WZ1]=jvj+158; pile[WZ2]=jvj+159; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+158,jvj+159)*/
pile[v[22]]=218; pile[WZ1]=jvj+159; pile[WZ2]=jvj+160; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(218,jvj+159,jvj+160)*/
pile[v[22]]=103; pile[WZ1]=jvj+156; pile[WZ2]=jvj+161; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(103,jvj+156,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=jvj+162; 
(*f[255])( );     /*COPEXP0(jvj+161,jvj+162)*/
pile[v[22]]=102; pile[WZ1]=jvj+156; pile[WZ2]=jvj+163; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(102,jvj+156,jvj+163)*/
pile[v[22]]=jvj+163; pile[WZ1]=jvj+164; 
(*f[255])( );     /*COPEXP0(jvj+163,jvj+164)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1424; pile[WZ4]=jvj+238; 
(*f[181])( );     /*QUADRI2(100,20,101,1424,jvj+238)*/
pile[WZ3]=jvj+160; pile[WZ4]=jvj+322; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+160,jvj+322)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V222; pile[WZ4]=jvj+320; 
(*f[270])( );     /*QUADRI7(100,21,140,V222,jvj+320)*/
pile[v[22]]=jvj+320; pile[WZ1]=160; pile[WZ2]=jvj+321; 
(*f[54])( );     /*TRI1(jvj+320,160,jvj+321)*/
pile[v[22]]=jvj+321; pile[WZ1]=jvj+322; pile[WZ2]=111; pile[WZ3]=jvj+323; 
(*f[58])( );     /*TRI3(jvj+321,jvj+322,111,jvj+323)*/
pile[v[22]]=jvj+323; pile[WZ1]=jvj+162; pile[WZ2]=103; pile[WZ3]=jvj+324; 
(*f[58])( );     /*TRI3(jvj+323,jvj+162,103,jvj+324)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+164; pile[WZ4]=jvj+324; pile[WZ5]=jvj+240; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+164,jvj+324,jvj+240)*/
pile[v[22]]=jvj+238; pile[WZ1]=111; pile[WZ2]=jvj+239; 
(*f[54])( );     /*TRI1(jvj+238,111,jvj+239)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+240; pile[WZ4]=jvj+239; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+240,jvj+239,RT)*/
goto l53;
l40:pile[v[22]]=jvj+115; pile[WZ1]=jvj+116; 
(*f[255])( );     /*COPEXP0(jvj+115,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+214; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=111; pile[WZ2]=jvj+215; 
(*f[54])( );     /*TRI1(jvj+214,111,jvj+215)*/
pile[v[22]]=jvj+116; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+216; 
(*f[298])( );     /*TRIENS1(jvj+116,(-20),jvj+215,107,jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RT; 
(*f[58])( );     /*TRI3(jvj+216,22,100,RT)*/
goto l53;
l41:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,T,jvj+117)*/
pile[v[22]]=103; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,T,jvj+118)*/
pile[v[22]]=107; pile[WZ2]=jvj+119; 
(*f[33])( );     /*FNDE0(107,T,jvj+119)*/
pile[v[22]]=T; pile[WZ1]=BA; pile[WZ2]=C; pile[WZ3]=RT; 
(*f[1918])( );if(v[102]) goto l51;     /*BOOTFORALL0(T,BA,C,RT)*/
goto l53;
l42:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,T,jvj+120)*/
pile[v[22]]=100; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+120,jvj+121)*/
if((x[jvj+121]==43)) goto l43;
if((x[jvj+121]!=22)) goto l51;
pile[v[22]]=111; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+120,jvj+129)*/
pile[v[22]]=101; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+129,jvj+130)*/
pile[v[22]]=146; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(146,jvj+130,jvj+131)*/
if((x[jvj+131]!=41)) goto l51;
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+132; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,T,jvj+132)*/
pile[v[22]]=101; pile[WZ1]=jvj+132; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+132,jvj+133)*/
if((x[jvj+133]!=1708)) goto l51;
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+120; pile[WZ3]=jvj+134; 
(*f[1503])( );if(v[102]) goto l51;     /*BOOTRADA0(C,BA,jvj+120,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; 
(*f[255])( );     /*COPEXP0(jvj+134,jvj+135)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+222)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-999999); pile[WZ4]=jvj+224; 
(*f[192])( );     /*QUADRI4(100,41,130,(-999999),jvj+224)*/
pile[v[22]]=jvj+222; pile[WZ1]=111; pile[WZ2]=jvj+223; 
(*f[54])( );     /*TRI1(jvj+222,111,jvj+223)*/
pile[v[22]]=jvj+223; pile[WZ1]=jvj+224; pile[WZ2]=103; pile[WZ3]=jvj+225; 
(*f[58])( );     /*TRI3(jvj+223,jvj+224,103,jvj+225)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+135; pile[WZ4]=jvj+225; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+135,jvj+225,RT)*/
goto l53;
l43:pile[v[22]]=102; pile[WZ1]=jvj+120; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+120,jvj+122)*/
pile[v[22]]=101; pile[WZ1]=jvj+122; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+122,jvj+123)*/
if((x[jvj+123]!=365)) goto l51;
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,T,jvj+124)*/
pile[v[22]]=101; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+124,jvj+125)*/
if((x[jvj+125]!=1708)) goto l51;
pile[v[22]]=103; pile[WZ1]=jvj+120; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,jvj+120,jvj+126)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+127; 
(*f[1503])( );if(v[102]) goto l51;     /*BOOTRADA0(C,BA,jvj+126,jvj+127)*/
pile[v[22]]=jvj+127; pile[WZ1]=jvj+128; 
(*f[255])( );     /*COPEXP0(jvj+127,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+217; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+217)*/
pile[WZ3]=202; pile[WZ4]=jvj+305; 
(*f[181])( );     /*QUADRI2(100,20,101,202,jvj+305)*/
pile[v[22]]=jvj+128; pile[WZ1]=103; pile[WZ2]=jvj+304; 
(*f[54])( );     /*TRI1(jvj+128,103,jvj+304)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+305; pile[WZ4]=jvj+304; pile[WZ5]=jvj+221; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+305,jvj+304,jvj+221)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=68; pile[WZ4]=jvj+219; 
(*f[181])( );     /*QUADRI2(100,20,101,68,jvj+219)*/
pile[v[22]]=jvj+217; pile[WZ1]=111; pile[WZ2]=jvj+218; 
(*f[54])( );     /*TRI1(jvj+217,111,jvj+218)*/
pile[v[22]]=jvj+218; pile[WZ1]=jvj+219; pile[WZ2]=103; pile[WZ3]=jvj+220; 
(*f[58])( );     /*TRI3(jvj+218,jvj+219,103,jvj+220)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+221; pile[WZ4]=jvj+220; pile[WZ5]=RT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+221,jvj+220,RT)*/
goto l53;
l44:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,T,jvj+43)*/
x[jvj+306]=incon;
pile[v[22]]=140; pile[WZ1]=jvj+43; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+43,V231)*/
V231=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=V231; pile[WZ2]=jvj+44; 
(*f[1491])( );     /*VDSBA0(BA,V231,jvj+44)*/
pile[v[22]]=129; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(129,jvj+44,jvj+45)*/
if((x[jvj+45]!=1881)) goto l18;
x[jvj+306]=45 ;z[jvj+306]=45;
goto l45;
l46:pile[v[22]]=107; pile[WZ1]=T; pile[WZ2]=jvj+141; 
(*f[33])( );     /*FNDE0(107,T,jvj+141)*/
pile[v[22]]=102; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,T,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=jvj+143; 
(*f[255])( );     /*COPEXP0(jvj+142,jvj+143)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ2]=jvj+142; pile[WZ3]=jvj+144; 
(*f[1503])( );if(v[102]) goto l51;     /*BOOTRADA0(C,BA,jvj+142,jvj+144)*/
pile[v[22]]=jvj+144; pile[WZ1]=jvj+145; 
(*f[255])( );     /*COPEXP0(jvj+144,jvj+145)*/
pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+146; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,T,jvj+146)*/
pile[v[22]]=C; pile[WZ1]=BA; pile[WZ3]=jvj+147; 
(*f[1503])( );if(v[102]) goto l51;     /*BOOTRADA0(C,BA,jvj+146,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=jvj+148; 
(*f[255])( );     /*COPEXP0(jvj+147,jvj+148)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=54; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,54,jvj+230)*/
pile[WZ3]=44; pile[WZ4]=jvj+307; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+307)*/
pile[v[22]]=jvj+307; pile[WZ1]=111; pile[WZ2]=jvj+308; 
(*f[54])( );     /*TRI1(jvj+307,111,jvj+308)*/
pile[v[22]]=jvj+308; pile[WZ1]=jvj+148; pile[WZ2]=103; pile[WZ3]=jvj+309; 
(*f[58])( );     /*TRI3(jvj+308,jvj+148,103,jvj+309)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+145; pile[WZ4]=jvj+309; pile[WZ5]=jvj+232; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+145,jvj+309,jvj+232)*/
pile[v[22]]=jvj+143; pile[WZ1]=436; pile[WZ2]=jvj+229; 
(*f[54])( );     /*TRI1(jvj+143,436,jvj+229)*/
pile[v[22]]=jvj+229; pile[WZ1]=jvj+230; pile[WZ2]=111; pile[WZ3]=jvj+231; 
(*f[58])( );     /*TRI3(jvj+229,jvj+230,111,jvj+231)*/
pile[v[22]]=jvj+232; pile[WZ1]=(-20); pile[WZ2]=jvj+231; pile[WZ3]=107; pile[WZ4]=jvj+233; 
(*f[298])( );     /*TRIENS1(jvj+232,(-20),jvj+231,107,jvj+233)*/
pile[v[22]]=jvj+233; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RT; 
(*f[58])( );     /*TRI3(jvj+233,22,100,RT)*/
pile[v[22]]=447; pile[WZ1]=C; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(447,C,jvj+14)*/
l1:if((x[jvj+141]<=0)) goto l53;
x[jvj+16]=s[x[jvj+141]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+141];
pile[v[22]]=447; pile[WZ1]=jvj+14; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(447,jvj+14,459,865,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=BA; pile[WZ2]=jvj+16; pile[WZ3]=jvj+17; 
(*f[1503])( );if(v[102]) goto l2;     /*BOOTRADA0(jvj+15,BA,jvj+16,jvj+17)*/
pile[v[22]]=RT; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(RT,107,jvj+17)*/
l2:x[jvj+141]=t[x[jvj+141]];
goto l1;
l47:pile[v[22]]=103; pile[WZ1]=T; pile[WZ2]=jvj+149; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,T,jvj+149)*/
pile[v[22]]=101; pile[WZ1]=jvj+149; pile[WZ2]=jvj+150; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+149,jvj+150)*/
pile[v[22]]=1775; pile[WZ1]=jvj+150; pile[WZ2]=jvj+151; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1775,jvj+150,jvj+151)*/
pile[v[22]]=1481; pile[WZ1]=100; pile[WZ2]=jvj+152; 
(*f[33])( );     /*FNDE0(1481,100,jvj+152)*/
for(a=x[jvj+152];a>0;a=t[a]) if(s[a]==x[jvj+151]) goto l48;
goto l51;
l48:pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,T,jvj+54)*/
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l49;     /*FNDC1(140,jvj+54,V275)*/
V275=pile[WZ2]; 
pile[v[22]]=BA; pile[WZ1]=V275; pile[WZ2]=jvj+55; 
(*f[1491])( );     /*VDSBA0(BA,V275,jvj+55)*/
pile[v[22]]=129; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(129,jvj+55,jvj+56)*/
if((x[jvj+56]==1881)) goto l51;
l49:pile[v[22]]=jvj+54; pile[WZ1]=jvj+153; 
(*f[255])( );     /*COPEXP0(jvj+54,jvj+153)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+234)*/
pile[WZ3]=278; pile[WZ4]=jvj+310; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+310)*/
pile[WZ3]=654; pile[WZ4]=jvj+314; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+314)*/
pile[WZ3]=653; pile[WZ4]=jvj+319; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+319)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+319; pile[WZ4]=jvj+318; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+319,jvj+318)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+151; pile[WZ4]=jvj+316; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+151,jvj+316)*/
pile[v[22]]=jvj+314; pile[WZ1]=111; pile[WZ2]=jvj+315; 
(*f[54])( );     /*TRI1(jvj+314,111,jvj+315)*/
pile[v[22]]=jvj+315; pile[WZ1]=jvj+316; pile[WZ2]=103; pile[WZ3]=jvj+317; 
(*f[58])( );     /*TRI3(jvj+315,jvj+316,103,jvj+317)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+318; pile[WZ4]=jvj+317; pile[WZ5]=jvj+312; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+318,jvj+317,jvj+312)*/
pile[v[22]]=jvj+310; pile[WZ1]=111; pile[WZ2]=jvj+311; 
(*f[54])( );     /*TRI1(jvj+310,111,jvj+311)*/
pile[v[22]]=jvj+311; pile[WZ1]=jvj+312; pile[WZ2]=103; pile[WZ3]=jvj+313; 
(*f[58])( );     /*TRI3(jvj+311,jvj+312,103,jvj+313)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+153; pile[WZ4]=jvj+313; pile[WZ5]=jvj+236; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+153,jvj+313,jvj+236)*/
pile[v[22]]=jvj+234; pile[WZ1]=111; pile[WZ2]=jvj+235; 
(*f[54])( );     /*TRI1(jvj+234,111,jvj+235)*/
pile[v[22]]=jvj+236; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+237; 
(*f[298])( );     /*TRIENS1(jvj+236,(-20),jvj+235,107,jvj+237)*/
pile[v[22]]=jvj+237; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RT; 
(*f[58])( );     /*TRI3(jvj+237,22,100,RT)*/
goto l53;
l52:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
