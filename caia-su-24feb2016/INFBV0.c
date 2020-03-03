#include "dx.h"
void INFBV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V36=0,V39=0,V118=0,V10=0,V11=0,V9=0,V24=0,V66=0,V86=0,V87=0,V85=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=80;
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
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(280,jvj+22,V36)*/
V36=pile[WZ2]; 
if((V36<0)) goto l18;
pile[v[22]]=A; pile[WZ1]=jvj+23; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(A,jvj+23)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l17;     /*FNDCND0(280,jvj+23,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+24; 
(*f[760])( );     /*MEMEX0(A,B,jvj+24)*/
if((x[jvj+24]==134)) goto l32;
l17:pile[v[22]]=A; pile[WZ1]=B; pile[WZ2]=jvj+25; 
(*f[760])( );     /*MEMEX0(A,B,jvj+25)*/
if((x[jvj+25]==135)) goto l16;
l18:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,A,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==485)) goto l19;
if((x[jvj+27]==52)) goto l21;
if((x[jvj+27]==596)) goto l22;
if((x[jvj+27]!=486)) goto l30;
pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+60)*/
if((x[jvj+60]!=484)) goto l30;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(107,A,jvj+61)*/
for(i=x[jvj+61],V86=0;i>0;i=t[i],V86++)  ;
pile[v[22]]=B; pile[WZ1]=jvj+62; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+62)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+62,V87)*/
V87=pile[WZ2]; 
if((V87<0)) goto l30;
x[jvj+80]=x[jvj+61] ;z[jvj+80]=z[jvj+61];
l7:if((x[jvj+80]>0)) goto l8;
x[jvj+14]=0 ;z[jvj+14]=0;
l10:if((x[jvj+61]>0)) goto l11;
for(i=x[jvj+14],V85=0;i>0;i=t[i],V85++)  ;
if((V85!=V86)) goto l30;
x[jvj+17]=0 ;z[jvj+17]=0;
l13:if((x[jvj+14]>0)) goto l14;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=111; pile[WZ2]=jvj+78; 
(*f[54])( );     /*TRI1(jvj+77,111,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+17; pile[WZ2]=107; pile[WZ3]=jvj+79; 
(*f[301])( );     /*TRI11(jvj+78,jvj+17,107,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+79,22,100,R)*/
l31:v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:x[jvj+1]=vo[16];z[jvj+1]=vz[16];
pile[v[22]]=242; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(242,jvj+1,jvj+2)*/
if((x[jvj+2]==688)) goto l30;
l20:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,A,jvj+33)*/
for(i=x[jvj+33],V10=0;i>0;i=t[i],V10++)  ;
pile[v[22]]=B; pile[WZ1]=jvj+34; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+34)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+34,V11)*/
V11=pile[WZ2]; 
if((V11<0)) goto l30;
x[jvj+5]=0 ;z[jvj+5]=0;
l2:if((x[jvj+33]>0)) goto l3;
for(i=x[jvj+5],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=V10)) goto l30;
x[jvj+8]=0 ;z[jvj+8]=0;
l5:if((x[jvj+5]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+65; 
(*f[301])( );     /*TRI11(jvj+64,jvj+8,107,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=R; 
(*f[58])( );     /*TRI3(jvj+65,22,100,R)*/
goto l31;
l3:x[jvj+3]=s[x[jvj+33]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+33];
pile[v[22]]=B; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[3895])( );if(v[102]) goto l4;     /*INFBV0(B,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+4)*/
l4:x[jvj+33]=t[x[jvj+33]];
goto l2;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l5;
l8:x[jvj+9]=s[x[jvj+80]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+80];
pile[v[22]]=B; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[3895])( );if(v[102]) goto l30;     /*INFBV0(B,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1353])( );     /*POSOUNUL0(jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l9;
l30:v[0]=jvj; v[22]-=3; v[102]=1;return;
l9:x[jvj+80]=t[x[jvj+80]];
goto l7;
l11:x[jvj+12]=s[x[jvj+61]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+61];
pile[v[22]]=B; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[3895])( );if(v[102]) goto l12;     /*INFBV0(B,jvj+12,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; 
(*f[522])( );     /*PLUB2(jvj+14,jvj+13)*/
l12:x[jvj+61]=t[x[jvj+61]];
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
(*f[1975])( );if(v[102]) goto l18;     /*FNDCND0(280,jvj+20,V30)*/
V30=pile[WZ2]; 
if((V30>=0)) goto l16;
goto l18;
l16:x[R]=x[A] ;z[R]=z[A];
goto l31;
l19:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+28)*/
if((x[jvj+28]!=484)) goto l30;
x[jvj+29]=vo[16];z[jvj+29]=vz[16];
pile[v[22]]=242; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(242,jvj+29,jvj+30)*/
if((x[jvj+30]!=688)) goto l1;
pile[v[22]]=B; pile[WZ1]=jvj+31; 
(*f[200])( );if(v[102]) goto l1;     /*NDD0(B,jvj+31)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(280,jvj+31,V118)*/
V118=pile[WZ2]; 
if((V118<0)) goto l1;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,A,jvj+32)*/
pile[v[22]]=B; pile[WZ1]=jvj+32; pile[WZ2]=R; 
(*f[4034])( );if(v[102]) goto l1;     /*AMINF0(B,jvj+32,R)*/
goto l31;
l21:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+35)*/
if((x[jvj+35]!=484)) goto l30;
pile[v[22]]=B; pile[WZ1]=jvj+36; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+36)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+36,V24)*/
V24=pile[WZ2]; 
if((V24<0)) goto l30;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,A,jvj+37)*/
pile[v[22]]=B; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[3896])( );if(v[102]) goto l30;     /*SUPBV0(B,jvj+37,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+67; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+67,R)*/
goto l31;
l22:pile[v[22]]=100; pile[WZ1]=B; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,B,jvj+40)*/
if((x[jvj+40]!=484)) goto l30;
pile[v[22]]=B; pile[WZ1]=jvj+41; 
(*f[200])( );if(v[102]) goto l30;     /*NDD0(B,jvj+41)*/
pile[v[22]]=280; 
(*f[1975])( );if(v[102]) goto l30;     /*FNDCND0(280,jvj+41,V66)*/
V66=pile[WZ2]; 
if((V66<0)) goto l30;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,A,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[1585])( );     /*NEGATIF0(jvj+42,jvj+43)*/
if((x[jvj+43]==135)) goto l23;
l27:pile[v[22]]=jvj+42; pile[WZ1]=jvj+53; 
(*f[1352])( );     /*POSITIF0(jvj+42,jvj+53)*/
if((x[jvj+53]==135)) goto l28;
goto l30;
l23:pile[v[22]]=B; pile[WZ1]=jvj+42; pile[WZ2]=jvj+44; 
(*f[3896])( );if(v[102]) goto l27;     /*SUPBV0(B,jvj+42,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+44,jvj+45)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,A,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[997])( );if(v[102]) goto l25;     /*IMPAIR0(jvj+46,jvj+47)*/
if((x[jvj+47]==135)) goto l24;
l25:pile[v[22]]=jvj+46; pile[WZ1]=jvj+50; 
(*f[996])( );if(v[102]) goto l27;     /*PAIR0(jvj+46,jvj+50)*/
if((x[jvj+50]==135)) goto l26;
goto l27;
l24:pile[v[22]]=B; pile[WZ1]=jvj+46; pile[WZ2]=jvj+48; 
(*f[3896])( );if(v[102]) goto l25;     /*SUPBV0(B,jvj+46,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+69,jvj+49,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+70; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+70,R)*/
goto l31;
l26:pile[v[22]]=B; pile[WZ1]=jvj+46; pile[WZ2]=jvj+51; 
(*f[3895])( );if(v[102]) goto l27;     /*INFBV0(B,jvj+46,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+51,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+72,jvj+52,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+73; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+73,R)*/
goto l31;
l28:pile[v[22]]=B; pile[WZ1]=jvj+42; pile[WZ2]=jvj+54; 
(*f[3895])( );if(v[102]) goto l30;     /*INFBV0(B,jvj+42,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+54,jvj+55)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,A,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[1352])( );     /*POSITIF0(jvj+56,jvj+57)*/
if((x[jvj+57]==135)) goto l29;
goto l30;
l29:pile[v[22]]=B; pile[WZ1]=jvj+56; pile[WZ2]=jvj+58; 
(*f[3895])( );if(v[102]) goto l30;     /*INFBV0(B,jvj+56,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; 
(*f[255])( );     /*COPEXP0(jvj+58,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+59; pile[WZ2]=103; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+75,jvj+59,103,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+76; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+76,R)*/
goto l31;
l32:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V39; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V39,R)*/
goto l31;
}
