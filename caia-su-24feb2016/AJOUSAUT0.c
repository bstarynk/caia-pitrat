#include "dx.h"
void AJOUSAUT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V27=0,L=0,V65=0,V62=0,M=0,V44=0,MM=0,V47=0,SS=0,V68=0,V20=0;
int Z,BL,CT,E,V,G;
int Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=147;
x[jvj+1]=11057;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1408&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
Z=pile[v[22]]; BL=pile[v[22]+1]; CT=pile[v[22]+2]; E=pile[v[22]+3]; V=pile[v[22]+4]; G=pile[v[22]+5]; Y=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+52]=x[jvj+50]=x[jvj+53]=x[Y]=incon;
x[jvj+145]=0 ;z[jvj+145]=0;
x[jvj+53]=x[jvj+145] ;z[jvj+53]=z[jvj+145];
pile[v[22]]=1088; pile[WZ1]=BL; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1088,BL,jvj+45)*/
l32:if((x[jvj+45]<=0)) goto l56;
x[jvj+46]=s[x[jvj+45]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+45];
pile[v[22]]=140; pile[WZ1]=jvj+46; 
(*f[44])( );if(v[102]) goto l33;     /*FNDC1(140,jvj+46,V20)*/
V20=pile[WZ2]; 
if((V20==V)) goto l34;
pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(762,21,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V20) goto l34;
l33:x[jvj+45]=t[x[jvj+45]];
goto l32;
l2:x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
l1:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(120,jvj+5,jvj+6)*/
pile[v[22]]=218; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+6,jvj+7)*/
x[jvj+8]=x[jvj+6] ;z[jvj+8]=z[jvj+6];
l3:pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+8,jvj+9)*/
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(218,jvj+9,jvj+10)*/
if((x[jvj+4]!=x[jvj+10])) goto l4;
x[jvj+144]=x[jvj+47] ;z[jvj+144]=z[jvj+47];
l5:if((x[jvj+144]<=0)) goto l4;
x[jvj+11]=s[x[jvj+144]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+144];
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l6;
pile[v[22]]=1018; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1018,jvj+11,jvj+12)*/
if((x[jvj+12]==x[jvj+7])) goto l36;
l6:x[jvj+144]=t[x[jvj+144]];
goto l5;
l4:x[jvj+8]=x[jvj+9] ;z[jvj+8]=z[jvj+9];
goto l3;
l8:pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+3,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+16; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+16,jvj+29)*/
l18:if(x[jvj+29]!=incon) goto l19;
l20:pile[v[22]]=144; pile[WZ1]=jvj+17; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(144,jvj+17,jvj+31)*/
M=x[jvj+31];
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(145,jvj+3,jvj+32)*/
x[jvj+34]=x[jvj+32] ;z[jvj+34]=z[jvj+32];
pile[v[22]]=447; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(447,jvj+3,jvj+33)*/
x[jvj+132]=x[jvj+33] ;z[jvj+132]=z[jvj+33];
if((x[jvj+132]!=M)) goto l9;
if((x[jvj+34]==25)) goto l21;
l9:if((x[jvj+34]!=26)) goto l22;
if((x[jvj+132]!=M)) goto l21;
l22:pile[v[22]]=1096; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(1096,jvj+17,V44)*/
V44=pile[WZ2]; 
MM=V44;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+3,V47)*/
V47=pile[WZ2]; 
SS=V47;
pile[v[22]]=145; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(145,jvj+3,jvj+36)*/
x[jvj+37]=x[jvj+36] ;z[jvj+37]=z[jvj+36];
if((SS!=MM)) goto l10;
if((x[jvj+37]==25)) goto l23;
l10:if((x[jvj+37]!=26)) goto l24;
if((SS!=MM)) goto l23;
l24:if(x[jvj+59]==incon) goto l25;
l39:if(x[jvj+59]!=incon) goto l40;
l36:x[jvj+146]=t[x[jvj+146]];
l35:if((x[jvj+146]<=0)) goto l33;
x[jvj+3]=s[x[jvj+146]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+146];
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l36;
pile[v[22]]=1018; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1018,jvj+3,jvj+4)*/
x[jvj+5]=597 ;z[jvj+5]=597;
goto l1;
l14:pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(145,jvj+3,jvj+24)*/
pile[v[22]]=447; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(447,jvj+3,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+24; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+24,jvj+70)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+114)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V20; pile[WZ4]=jvj+112; 
(*f[270])( );     /*QUADRI7(100,21,140,V20,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=103; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,103,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+114; pile[WZ4]=jvj+113; pile[WZ5]=jvj+74; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+114,jvj+113,jvj+74)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+25; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+25,jvj+72)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+71,jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+73; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+74,jvj+73,jvj+59)*/
l15:pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(762,21,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==V20) goto l16;
l17:if(x[jvj+17]!=365&&x[jvj+17]!=489) goto l20;
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(145,jvj+3,jvj+28)*/
x[jvj+29]=incon;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+3,V27)*/
V27=pile[WZ2]; 
L=V27;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+29)*/
l7:if(x[jvj+29]==incon) goto l8;
goto l18;
l16:pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(117,jvj+3,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=145; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(145,jvj+3,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+27; pile[WZ4]=jvj+75; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+27,jvj+75)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+117)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V20; pile[WZ4]=jvj+115; 
(*f[270])( );     /*QUADRI7(100,21,140,V20,jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=103; pile[WZ2]=jvj+116; 
(*f[54])( );     /*TRI1(jvj+115,103,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+117; pile[WZ4]=jvj+116; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+117,jvj+116,jvj+79)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V62; pile[WZ4]=jvj+77; 
(*f[192])( );     /*QUADRI4(100,41,130,V62,jvj+77)*/
pile[v[22]]=jvj+75; pile[WZ1]=111; pile[WZ2]=jvj+76; 
(*f[54])( );     /*TRI1(jvj+75,111,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+77; pile[WZ2]=103; pile[WZ3]=jvj+78; 
(*f[58])( );     /*TRI3(jvj+76,jvj+77,103,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+79; pile[WZ4]=jvj+78; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+79,jvj+78,jvj+59)*/
goto l17;
l19:pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+28; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+28,jvj+80)*/
pile[WZ3]=74; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+118)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+123; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+123)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=103; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,103,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+123,jvj+122,jvj+120)*/
pile[v[22]]=jvj+118; pile[WZ1]=111; pile[WZ2]=jvj+119; 
(*f[54])( );     /*TRI1(jvj+118,111,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+83)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+81,jvj+30,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+82; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+83,jvj+82,jvj+59)*/
goto l20;
l21:pile[v[22]]=268; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+34,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+84)*/
pile[WZ3]=jvj+35; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+35,jvj+124)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+131; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+131)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+129; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=103; pile[WZ2]=jvj+130; 
(*f[54])( );     /*TRI1(jvj+129,103,jvj+130)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+131; pile[WZ4]=jvj+130; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+131,jvj+130,jvj+128)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+132; pile[WZ4]=jvj+126; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+132,jvj+126)*/
pile[v[22]]=jvj+124; pile[WZ1]=111; pile[WZ2]=jvj+125; 
(*f[54])( );     /*TRI1(jvj+124,111,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=103; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+125,jvj+126,103,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+128; pile[WZ4]=jvj+127; pile[WZ5]=jvj+86; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+128,jvj+127,jvj+86)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=jvj+86; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+87; 
(*f[298])( );     /*TRIENS1(jvj+86,(-20),jvj+85,107,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+87,22,100,jvj+59)*/
goto l22;
l23:pile[v[22]]=268; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+37,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+88; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+88)*/
pile[WZ3]=jvj+38; pile[WZ4]=jvj+133; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+38,jvj+133)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+140; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+140)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+138; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=103; pile[WZ2]=jvj+139; 
(*f[54])( );     /*TRI1(jvj+138,103,jvj+139)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+140; pile[WZ4]=jvj+139; pile[WZ5]=jvj+137; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+140,jvj+139,jvj+137)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=SS; pile[WZ4]=jvj+135; 
(*f[192])( );     /*QUADRI4(100,41,130,SS,jvj+135)*/
pile[v[22]]=jvj+133; pile[WZ1]=111; pile[WZ2]=jvj+134; 
(*f[54])( );     /*TRI1(jvj+133,111,jvj+134)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+135; pile[WZ2]=103; pile[WZ3]=jvj+136; 
(*f[58])( );     /*TRI3(jvj+134,jvj+135,103,jvj+136)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+137; pile[WZ4]=jvj+136; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+137,jvj+136,jvj+90)*/
pile[v[22]]=jvj+88; pile[WZ1]=111; pile[WZ2]=jvj+89; 
(*f[54])( );     /*TRI1(jvj+88,111,jvj+89)*/
pile[v[22]]=jvj+90; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+91; 
(*f[298])( );     /*TRIENS1(jvj+90,(-20),jvj+89,107,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+91,22,100,jvj+59)*/
goto l24;
l25:pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(145,jvj+3,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+92)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+143; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+143)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+141; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+141)*/
pile[v[22]]=jvj+141; pile[WZ1]=103; pile[WZ2]=jvj+142; 
(*f[54])( );     /*TRI1(jvj+141,103,jvj+142)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+143; pile[WZ4]=jvj+142; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+143,jvj+142,jvj+95)*/
pile[v[22]]=jvj+92; pile[WZ1]=111; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,111,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+93,jvj+48,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+95,jvj+94,jvj+59)*/
goto l39;
l26:x[jvj+42]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+3,V68)*/
V68=pile[WZ2]; 
L=V68;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+42)*/
l27:pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(447,jvj+3,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=128)) goto l28;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+42)*/
l28:if(x[jvj+42]==incon) goto l60;
l37:if(x[jvj+42]!=incon) goto l38;
goto l36;
l31:x[jvj+99]=x[jvj+14] ;z[jvj+99]=z[jvj+14];
l41:if(x[jvj+99]!=incon) goto l42;
goto l36;
l34:pile[v[22]]=258; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(258,jvj+46,jvj+47)*/
x[jvj+146]=x[jvj+47] ;z[jvj+146]=z[jvj+47];
goto l35;
l38:pile[v[22]]=jvj+42; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+48)*/
x[jvj+59]=incon;
pile[v[22]]=1018; pile[WZ1]=jvj+3; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1018,jvj+3,jvj+17)*/
if((x[jvj+17]!=1417)) goto l11;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+3,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=145; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(145,jvj+3,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+18; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+18,jvj+54)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V65; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,V65,jvj+58)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+17; pile[WZ4]=jvj+102; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+102)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+100; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=103; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,103,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+101; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+102,jvj+101,jvj+56)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+57,jvj+59)*/
l11:if(x[jvj+17]!=971&&x[jvj+17]!=1300&&x[jvj+17]!=1294) goto l12;
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(145,jvj+3,jvj+19)*/
pile[v[22]]=447; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(447,jvj+3,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+19; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+19,jvj+60)*/
pile[WZ3]=jvj+20; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+20,jvj+64)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+105; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+105)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+103; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=103; pile[WZ2]=jvj+104; 
(*f[54])( );     /*TRI1(jvj+103,103,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+105; pile[WZ4]=jvj+104; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+105,jvj+104,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+64,jvj+63,jvj+59)*/
l12:if(x[jvj+17]!=1182&&x[jvj+17]!=1216) goto l13;
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(145,jvj+3,jvj+21)*/
pile[v[22]]=447; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(447,jvj+3,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+21; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+21,jvj+65)*/
pile[WZ3]=jvj+22; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+22,jvj+69)*/
pile[WZ3]=jvj+17; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+17,jvj+108)*/
pile[WZ3]=498; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,498,jvj+111)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3629); pile[WZ4]=jvj+109; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3629),jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=103; pile[WZ2]=jvj+110; 
(*f[54])( );     /*TRI1(jvj+109,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+111,jvj+110,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=103; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(jvj+106,103,jvj+107)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+108; pile[WZ4]=jvj+107; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+108,jvj+107,jvj+67)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; pile[WZ2]=103; pile[WZ3]=jvj+68; 
(*f[58])( );     /*TRI3(jvj+66,jvj+67,103,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+68; pile[WZ5]=jvj+59; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+69,jvj+68,jvj+59)*/
l13:if(x[jvj+17]==1182||x[jvj+17]==1216) goto l15;
pile[v[22]]=762; pile[WZ1]=21; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(762,21,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==V20) goto l14;
goto l15;
l40:x[jvj+14]=x[jvj+59] ;z[jvj+14]=z[jvj+59];
if((x[G]!=67)) goto l29;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[703])( );     /*USW0(jvj+14,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==(-7423)) goto l36;
l29:x[jvj+99]=incon;
pile[v[22]]=201; pile[WZ1]=jvj+3; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(201,jvj+3,jvj+43)*/
if((x[jvj+43]!=68)) goto l30;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+96; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=111; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,111,jvj+97)*/
pile[v[22]]=jvj+44; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+98; 
(*f[298])( );     /*TRIENS1(jvj+44,(-20),jvj+97,107,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+99; 
(*f[58])( );     /*TRI3(jvj+98,22,100,jvj+99)*/
l30:if(x[jvj+99]==incon) goto l31;
goto l41;
l42:x[jvj+50]=x[jvj+99] ;z[jvj+50]=z[jvj+99];
pile[v[22]]=E; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(E,jvj+3)*/
if(x[jvj+52]==incon) goto l46;
l48:if(x[jvj+52]==incon) goto l49;
l51:if(x[Y]==incon) goto l52;
l55:if(x[Y]==incon) goto l56;
l58:if(x[Y]!=incon) goto l59;
l57:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; v[102]=1;return;
l44:x[jvj+49]=s[x[jvj+147]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+147];
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+49,jvj+50,jvj+51)*/
if((x[jvj+51]==135)) goto l48;
x[jvj+147]=t[x[jvj+147]];
l43:if((x[jvj+147]>0)) goto l44;
pile[v[22]]=Z; pile[WZ1]=jvj+50; pile[WZ2]=CT; pile[WZ3]=G; pile[WZ4]=jvj+52; 
(*f[1436])( );if(v[102]) goto l48;     /*CHERSAUT0(Z,jvj+50,CT,G,jvj+52)*/
pile[v[22]]=jvj+53; 
(*f[68])( );     /*PLUE0(jvj+53,jvj+50)*/
goto l48;
l45:x[jvj+147]=x[jvj+53] ;z[jvj+147]=z[jvj+53];
goto l43;
l46:if(x[jvj+50]!=incon) goto l47;
goto l48;
l47:if(x[jvj+53]!=incon) goto l45;
goto l48;
l49:if(x[jvj+50]!=incon) goto l50;
goto l51;
l50:x[jvj+52]=x[Z] ;z[jvj+52]=z[Z];
goto l51;
l52:if(x[jvj+52]!=incon) goto l53;
goto l55;
l53:if(x[jvj+53]!=incon) goto l54;
goto l55;
l54:pile[v[22]]=jvj+52; pile[WZ1]=BL; pile[WZ2]=366; pile[WZ3]=E; pile[WZ4]=V; pile[WZ5]=G; pile[v[22]+6]=jvj+53; pile[v[22]+7]=Y; 
(*f[1622])( );     /*AJOUSAUT1(jvj+52,BL,366,E,V,G,jvj+53,Y)*/
goto l55;
l56:x[Y]=x[Z] ;z[Y]=z[Z];
goto l58;
l59:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; v[102]=0;return;
l60:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+40; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+40,jvj+42)*/
goto l37;
}
