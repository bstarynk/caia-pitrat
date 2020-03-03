#include "dx.h"
void SUPBV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V37=0,V32=0,V46=0,V120=0,V10=0,V11=0,V9=0,V24=0,V73=0,V93=0,V94=0,V92=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=79;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,A,jvj+18)*/
if((x[jvj+18]==41)) goto l15;
if((x[jvj+18]!=484)) goto l18;
pile[WZ1]=B; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,B,jvj+21)*/
if((x[jvj+21]!=484)) goto l18;
pile[v[22]]=B; pile[WZ1]=jvj+22; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(B,jvj+22)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(280,jvj+22,V32)*/
V32=pile[WZ2]; 
if((V32<0)) goto l18;
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+23; 
(*f[760])( );     /*MEMEX0(A,B,jvj+23)*/
if((x[jvj+23]==135)) goto l16;
if((x[jvj+23]==134)) goto l17;
l18:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,A,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]==485)) goto l19;
if((x[jvj+26]==52)) goto l21;
if((x[jvj+26]==596)) goto l22;
if((x[jvj+26]!=486)) goto l30;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+59)*/
if((x[jvj+59]!=484)) goto l30;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(107,A,jvj+60)*/
for(i=x[jvj+60],V93=0;i>0;i=t[i],V93++)  ;
pile[v[22]]=B; pile[WZ1]=jvj+61; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+61)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+61,V94)*/
V94=pile[WZ2]; 
if((V94<0)) goto l30;
x[jvj+79]=x[jvj+60] ;z[jvj+79]=z[jvj+60];
l7:if((x[jvj+79]>0)) goto l8;
x[jvj+14]=0 ;z[jvj+14]=0;
l10:if((x[jvj+60]>0)) goto l11;
for(i=x[jvj+14],V92=0;i>0;i=t[i],V92++)  ;
if((V92!=V93)) goto l30;
x[jvj+17]=0 ;z[jvj+17]=0;
l13:if((x[jvj+14]>0)) goto l14;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+78; 
(*f[301])( );     /*TRI11(jvj+77,jvj+17,107,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+78,22,100,R)*/
l31:v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:x[jvj+1]=vo[16];z[jvj+1]=vz[16];
pile[v[22]]=242; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(242,jvj+1,jvj+2)*/
if((x[jvj+2]==688)) goto l30;
l20:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,A,jvj+32)*/
for(i=x[jvj+32],V10=0;i>0;i=t[i],V10++)  ;
pile[v[22]]=B; pile[WZ1]=jvj+33; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+33)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+33,V11)*/
V11=pile[WZ2]; 
if((V11<0)) goto l30;
x[jvj+5]=0 ;z[jvj+5]=0;
l2:if((x[jvj+32]>0)) goto l3;
for(i=x[jvj+5],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=V10)) goto l30;
x[jvj+8]=0 ;z[jvj+8]=0;
l5:if((x[jvj+5]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+64; 
(*f[301])( );     /*TRI11(jvj+63,jvj+8,107,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+64,22,100,R)*/
goto l31;
l3:x[jvj+3]=s[x[jvj+32]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+32];
pile[v[22]]=B; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[3896])( );if(v[102]) goto l4;     /*SUPBV0(B,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+4)*/
l4:x[jvj+32]=t[x[jvj+32]];
goto l2;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l5;
l8:x[jvj+9]=s[x[jvj+79]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+79];
pile[v[22]]=B; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[3896])( );if(v[102]) goto l30;     /*SUPBV0(B,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1353])( );     /*POSOUNUL0(jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l9;
l30:v[0]=jvj; v[22]-=3; v[102]=1;return;
l9:x[jvj+79]=t[x[jvj+79]];
goto l7;
l11:x[jvj+12]=s[x[jvj+60]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+60];
pile[v[22]]=B; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[3896])( );if(v[102]) goto l12;     /*SUPBV0(B,jvj+12,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; 
(*f[522])( );     /*PLUB2(jvj+14,jvj+13)*/
l12:x[jvj+60]=t[x[jvj+60]];
goto l10;
l14:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+16)*/
x[jvj+14]=t[x[jvj+14]];
goto l13;
l15:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,B,jvj+19)*/
if((x[jvj+19]!=484)) goto l18;
pile[v[22]]=B; pile[WZ1]=jvj+20; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(B,jvj+20)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(280,jvj+20,V37)*/
V37=pile[WZ2]; 
if((V37>=0)) goto l16;
goto l18;
l16:x[R]=x[A] ;z[R]=z[A];
goto l31;
l17:pile[v[22]]=A; pile[WZ1]=jvj+24; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(A,jvj+24)*/
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(164,jvj+24,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V46; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V46,R)*/
goto l31;
l19:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+27)*/
if((x[jvj+27]!=484)) goto l30;
x[jvj+28]=vo[16];z[jvj+28]=vz[16];
pile[v[22]]=242; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(242,jvj+28,jvj+29)*/
if((x[jvj+29]!=688)) goto l1;
pile[v[22]]=B; pile[WZ1]=jvj+30; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(B,jvj+30)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,jvj+30,V120)*/
V120=pile[WZ2]; 
if((V120<0)) goto l1;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,A,jvj+31)*/
pile[v[22]]=B; pile[WZ1]=jvj+31; pile[WZ2]=R; 
(*f[4035])( );if(v[102]) goto l1;     /*AMSUP0(B,jvj+31,R)*/
goto l31;
l21:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+34)*/
if((x[jvj+34]!=484)) goto l30;
pile[v[22]]=B; pile[WZ1]=jvj+35; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+35)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+35,V24)*/
V24=pile[WZ2]; 
if((V24<0)) goto l30;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,A,jvj+36)*/
pile[v[22]]=B; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[3895])( );if(v[102]) goto l30;     /*INFBV0(B,jvj+36,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+66; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+66,R)*/
goto l31;
l22:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+39)*/
if((x[jvj+39]!=484)) goto l30;
pile[v[22]]=B; pile[WZ1]=jvj+40; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+40)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+40,V73)*/
V73=pile[WZ2]; 
if((V73<0)) goto l30;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,A,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[1585])( );     /*NEGATIF0(jvj+41,jvj+42)*/
if((x[jvj+42]==135)) goto l23;
l27:pile[v[22]]=jvj+41; pile[WZ1]=jvj+52; 
(*f[1352])( );     /*POSITIF0(jvj+41,jvj+52)*/
if((x[jvj+52]==135)) goto l28;
goto l30;
l23:pile[v[22]]=B; pile[WZ1]=jvj+41; pile[WZ2]=jvj+43; 
(*f[3895])( );if(v[102]) goto l27;     /*INFBV0(B,jvj+41,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,A,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[997])( );if(v[102]) goto l25;     /*IMPAIR0(jvj+45,jvj+46)*/
if((x[jvj+46]==135)) goto l24;
l25:pile[v[22]]=jvj+45; pile[WZ1]=jvj+49; 
(*f[996])( );if(v[102]) goto l27;     /*PAIR0(jvj+45,jvj+49)*/
if((x[jvj+49]==135)) goto l26;
goto l27;
l24:pile[v[22]]=B; pile[WZ1]=jvj+45; pile[WZ2]=jvj+47; 
(*f[3895])( );if(v[102]) goto l25;     /*INFBV0(B,jvj+45,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+68,jvj+48,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+69; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+69,R)*/
goto l31;
l26:pile[v[22]]=B; pile[WZ1]=jvj+45; pile[WZ2]=jvj+50; 
(*f[3896])( );if(v[102]) goto l27;     /*SUPBV0(B,jvj+45,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+71,jvj+51,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+72; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+72,R)*/
goto l31;
l28:pile[v[22]]=B; pile[WZ1]=jvj+41; pile[WZ2]=jvj+53; 
(*f[3896])( );if(v[102]) goto l30;     /*SUPBV0(B,jvj+41,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+54)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,A,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[1352])( );     /*POSITIF0(jvj+55,jvj+56)*/
if((x[jvj+56]==135)) goto l29;
goto l30;
l29:pile[v[22]]=B; pile[WZ1]=jvj+55; pile[WZ2]=jvj+57; 
(*f[3896])( );if(v[102]) goto l30;     /*SUPBV0(B,jvj+55,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(jvj+57,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+58; pile[WZ2]=103; pile[WZ3]=jvj+75; 
(*f[58])( );     /*TRI3(jvj+74,jvj+58,103,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+75; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+75,R)*/
goto l31;
}
