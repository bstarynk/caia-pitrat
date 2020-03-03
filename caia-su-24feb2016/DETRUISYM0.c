#include "dx.h"
void DETRUISYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V62=0,V77=0,V78=0,V82=0,V80=0,V85=0,V88=0,V20=0,V63=0;
int L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=96;
x[jvj+1]=11087;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4097&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l60:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(250,158,jvj+5)*/
if((v[107]!=0)) goto l13;
pile[v[22]]=1179; pile[WZ1]=L; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1179,L,jvj+15)*/
l7:if((x[jvj+15]<=0)) goto l13;
x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=158; pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(158,jvj+10,jvj+16)*/
if((x[jvj+16]!=301)) goto l8;
pile[v[22]]=191; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(191,jvj+10,jvj+11)*/
if((x[jvj+11]==68)) goto l8;
l9:pile[v[22]]=1179; pile[WZ1]=jvj+10; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1179,jvj+10,jvj+17)*/
x[jvj+91]=x[jvj+17] ;z[jvj+91]=z[jvj+17];
l10:if((x[jvj+91]<=0)) goto l8;
x[jvj+18]=s[x[jvj+91]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+91];
pile[v[22]]=447; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+18,jvj+19)*/
pile[v[22]]=459; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(459,jvj+18,jvj+20)*/
if((x[jvj+19]==x[jvj+20])) goto l11;
x[jvj+79]=incon;
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+12)*/
x[jvj+90]=x[jvj+12] ;z[jvj+90]=z[jvj+12];
l4:if((x[jvj+90]>0)) goto l5;
pile[v[22]]=jvj+19; pile[WZ1]=447; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+19,447,jvj+79)*/
l12:x[jvj+21]=x[jvj+79] ;z[jvj+21]=z[jvj+79];
pile[v[22]]=jvj+21; pile[WZ1]=350; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+21,350,jvj+18)*/
pile[WZ1]=258; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+21,258,jvj+10)*/
pile[v[22]]=jvj+5; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+5,159,jvj+21)*/
l11:x[jvj+91]=t[x[jvj+91]];
goto l10;
l2:x[jvj+7]=s[x[jvj+89]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+89];
pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(447,jvj+7,jvj+8)*/
if((x[jvj+8]!=x[jvj+26])) goto l3;
pile[v[22]]=1308; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1308,jvj+7,jvj+9)*/
if((x[jvj+9]!=x[jvj+4])) goto l3;
x[jvj+78]=x[jvj+7] ;z[jvj+78]=z[jvj+7];
l19:x[jvj+28]=x[jvj+78] ;z[jvj+28]=z[jvj+78];
pile[v[22]]=jvj+28; pile[WZ1]=350; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+28,350,jvj+25)*/
pile[WZ1]=258; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+28,258,jvj+2)*/
pile[v[22]]=jvj+5; pile[WZ1]=159; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+5,159,jvj+28)*/
l18:x[jvj+92]=t[x[jvj+92]];
l17:if((x[jvj+92]<=0)) goto l15;
x[jvj+25]=s[x[jvj+92]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+92];
pile[v[22]]=447; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+25,jvj+26)*/
pile[v[22]]=459; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(459,jvj+25,jvj+27)*/
if((x[jvj+26]==x[jvj+27])) goto l18;
x[jvj+78]=incon;
pile[v[22]]=1308; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1308,jvj+2,jvj+4)*/
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+6)*/
x[jvj+89]=x[jvj+6] ;z[jvj+89]=z[jvj+6];
l1:if((x[jvj+89]>0)) goto l2;
pile[v[22]]=447; pile[WZ1]=jvj+26; pile[WZ2]=1308; pile[WZ3]=jvj+4; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(447,jvj+26,1308,jvj+4,jvj+78)*/
goto l19;
l3:x[jvj+89]=t[x[jvj+89]];
goto l1;
l5:x[jvj+13]=s[x[jvj+90]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+90];
pile[v[22]]=447; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+13,jvj+14)*/
if((x[jvj+14]!=x[jvj+19])) goto l6;
x[jvj+79]=x[jvj+13] ;z[jvj+79]=z[jvj+13];
goto l12;
l6:x[jvj+90]=t[x[jvj+90]];
goto l4;
l8:x[jvj+15]=t[x[jvj+15]];
goto l7;
l13:if((v[107]<=0)) goto l49;
pile[v[22]]=1179; pile[WZ1]=L; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1179,L,jvj+22)*/
l14:if((x[jvj+22]<=0)) goto l49;
x[jvj+2]=s[x[jvj+22]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+22];
pile[v[22]]=158; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(158,jvj+2,jvj+23)*/
if((x[jvj+23]!=301)) goto l15;
pile[v[22]]=191; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(191,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l15;
l16:pile[v[22]]=1179; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1179,jvj+2,jvj+24)*/
x[jvj+92]=x[jvj+24] ;z[jvj+92]=z[jvj+24];
goto l17;
l15:x[jvj+22]=t[x[jvj+22]];
goto l14;
l21:x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=350; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(350,jvj+30,jvj+31)*/
for(i=x[jvj+31],V19=0;i>0;i=t[i],V19++)  ;
if(V20==incon) goto l58;
if((V19==V20)) goto l23;
if((V19>=V20)) goto l58;
l22:x[jvj+29]=t[x[jvj+29]];
l20:if((x[jvj+29]>0)) goto l21;
if((x[jvj+32]<=0)) goto l50;
x[jvj+37]=s[x[jvj+32]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+32];
pile[v[22]]=258; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(258,jvj+37,jvj+38)*/
l26:if((x[jvj+38]>0)) goto l27;
pile[v[22]]=350; pile[WZ1]=jvj+37; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(350,jvj+37,jvj+40)*/
pile[v[22]]=1308; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1308,jvj+37,jvj+41)*/
l28:if((x[jvj+40]<=0)) goto l51;
x[jvj+42]=s[x[jvj+40]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+40];
pile[v[22]]=447; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(447,jvj+42,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=459; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(459,jvj+42,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+45,jvj+46)*/
x[jvj+83]=x[jvj+44] ;z[jvj+83]=z[jvj+44];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+41; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+41,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+46; pile[WZ2]=103; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+81,jvj+46,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+82; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+83,jvj+82,jvj+34)*/
pile[v[22]]=1081; pile[WZ1]=L; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1081,L,jvj+33)*/
x[jvj+93]=x[jvj+33] ;z[jvj+93]=z[jvj+33];
l24:if((x[jvj+93]>0)) goto l25;
pile[v[22]]=L; pile[WZ1]=1081; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(L,1081,jvj+34)*/
l29:x[jvj+40]=t[x[jvj+40]];
goto l28;
l25:x[jvj+35]=s[x[jvj+93]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+93];
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(jvj+34,jvj+35,jvj+36)*/
if((x[jvj+36]==135)) goto l29;
x[jvj+93]=t[x[jvj+93]];
goto l24;
l27:x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=jvj+39; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+39,191,68)*/
x[jvj+38]=t[x[jvj+38]];
goto l26;
l31:x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=350; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(350,jvj+48,jvj+49)*/
for(i=x[jvj+49],V62=0;i>0;i=t[i],V62++)  ;
if(V63==incon) goto l59;
if((V62==V63)) goto l33;
if((V62>=V63)) goto l59;
l32:x[jvj+47]=t[x[jvj+47]];
l30:if((x[jvj+47]>0)) goto l31;
if((x[jvj+50]<=0)) goto l53;
x[jvj+64]=s[x[jvj+50]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+50];
pile[v[22]]=258; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(258,jvj+64,jvj+65)*/
l43:if((x[jvj+65]>0)) goto l44;
pile[v[22]]=350; pile[WZ1]=jvj+64; pile[WZ2]=jvj+67; 
(*f[33])( );     /*FNDE0(350,jvj+64,jvj+67)*/
l45:if((x[jvj+67]<=0)) goto l51;
x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=447; pile[WZ1]=jvj+68; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(447,jvj+68,jvj+56)*/
pile[v[22]]=111; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+56,jvj+57)*/
pile[v[22]]=140; pile[WZ1]=jvj+57; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(140,jvj+57,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=L; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(498,L,jvj+58)*/
pile[v[22]]=983; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(983,jvj+58,jvj+59)*/
pile[v[22]]=878; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(878,jvj+59,jvj+60)*/
x[jvj+95]=x[jvj+60] ;z[jvj+95]=z[jvj+60];
l36:if((x[jvj+95]<=0)) goto l46;
x[jvj+55]=s[x[jvj+95]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+95];
pile[v[22]]=163; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(163,jvj+55,V77)*/
V77=pile[WZ2]; 
pile[WZ1]=L; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(163,L,V78)*/
V78=pile[WZ2]; 
if((V77!=V78)) goto l37;
l38:pile[v[22]]=454; pile[WZ1]=jvj+55; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(454,jvj+55,jvj+61)*/
x[jvj+96]=x[jvj+61] ;z[jvj+96]=z[jvj+61];
l39:if((x[jvj+96]<=0)) goto l37;
x[jvj+62]=s[x[jvj+96]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+96];
pile[v[22]]=436; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(436,jvj+62,jvj+63)*/
pile[v[22]]=140; pile[WZ1]=jvj+63; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+63,V80)*/
V80=pile[WZ2]; 
if((V80!=V82)) goto l40;
x[jvj+88]=incon;
pile[v[22]]=688; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(688,jvj+62,V85)*/
V85=pile[WZ2]; 
if((V85!=1)) goto l41;
x[jvj+88]=29 ;z[jvj+88]=29;
l47:pile[v[22]]=jvj+56; pile[WZ1]=jvj+69; 
(*f[255])( );     /*COPEXP0(jvj+56,jvj+69)*/
pile[v[22]]=459; pile[WZ1]=jvj+68; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(459,jvj+68,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[255])( );     /*COPEXP0(jvj+70,jvj+71)*/
x[jvj+87]=x[jvj+69] ;z[jvj+87]=z[jvj+69];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+88; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+88,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+86; 
(*f[58])( );     /*TRI3(jvj+85,jvj+71,103,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+87; pile[WZ4]=jvj+86; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+87,jvj+86,jvj+52)*/
pile[v[22]]=1081; pile[WZ1]=L; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(1081,L,jvj+51)*/
x[jvj+94]=x[jvj+51] ;z[jvj+94]=z[jvj+51];
l34:if((x[jvj+94]>0)) goto l35;
pile[v[22]]=688; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(688,jvj+62,V88)*/
V88=pile[WZ2]; 
if((V88==1)) goto l48;
l42:pile[v[22]]=L; pile[WZ1]=1364; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(L,1364,67)*/
l48:pile[v[22]]=L; pile[WZ1]=1081; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(L,1081,jvj+52)*/
l46:x[jvj+67]=t[x[jvj+67]];
goto l45;
l35:x[jvj+53]=s[x[jvj+94]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+94];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[760])( );     /*MEMEX0(jvj+52,jvj+53,jvj+54)*/
if((x[jvj+54]==135)) goto l46;
x[jvj+94]=t[x[jvj+94]];
goto l34;
l37:x[jvj+95]=t[x[jvj+95]];
goto l36;
l40:x[jvj+96]=t[x[jvj+96]];
goto l39;
l41:x[jvj+88]=30 ;z[jvj+88]=30;
goto l47;
l44:x[jvj+66]=s[x[jvj+65]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+65];
pile[v[22]]=jvj+66; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+66,191,68)*/
x[jvj+65]=t[x[jvj+65]];
goto l43;
l49:if((v[107]<=0)) goto l50;
x[jvj+32]=0 ;z[jvj+32]=0;
V20=incon;
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+29)*/
goto l20;
l50:if((v[107]!=0)) goto l53;
x[jvj+50]=0 ;z[jvj+50]=0;
V63=incon;
pile[v[22]]=159; pile[WZ1]=jvj+5; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(159,jvj+5,jvj+47)*/
goto l30;
l51:pile[v[22]]=1179; pile[WZ1]=L; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(1179,L,jvj+74)*/
l52:if((x[jvj+74]<=0)) goto l53;
x[jvj+72]=s[x[jvj+74]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+74];
pile[v[22]]=191; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(191,jvj+72,jvj+73)*/
x[jvj+74]=t[x[jvj+74]];
goto l52;
l53:pile[v[22]]=1179; pile[WZ1]=L; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(1179,L,jvj+75)*/
l54:if((x[jvj+75]>0)) goto l55;
l57:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l55:x[jvj+76]=s[x[jvj+75]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+75];
pile[v[22]]=158; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(158,jvj+76,jvj+77)*/
if((x[jvj+77]!=301)) goto l56;
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+76)*/
l56:x[jvj+75]=t[x[jvj+75]];
goto l54;
l58:V20=V19;
x[jvj+32]=0 ;z[jvj+32]=0;
l23:pile[v[22]]=jvj+32; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+30)*/
goto l22;
l59:V63=V62;
x[jvj+50]=0 ;z[jvj+50]=0;
l33:pile[v[22]]=jvj+50; pile[WZ1]=jvj+48; 
(*f[68])( );     /*PLUE0(jvj+50,jvj+48)*/
goto l32;
}
