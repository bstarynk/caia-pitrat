#include "dx.h"
void ISOPRD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=89;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+58]=x[jvj+57]=incon;
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,B,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l10;
x[jvj+7]=d[20];z[jvj+7]=0;
l8:if((x[jvj+7]<=0)) goto l10;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=B; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+8,B,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l9;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l9;     /*NDD0(jvj+9,jvj+11)*/
if((x[A]!=x[jvj+11])) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+8,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=B; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+12,B,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1361])( );     /*VAROBJ0(jvj+13,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[A]) goto l9;
x[jvj+58]=x[jvj+13] ;z[jvj+58]=z[jvj+13];
l10:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,B,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=25)) goto l24;
x[jvj+17]=d[20];z[jvj+17]=0;
l11:if((x[jvj+17]>0)) goto l12;
x[jvj+28]=d[20];z[jvj+28]=0;
l15:if((x[jvj+28]>0)) goto l16;
x[jvj+44]=d[20];z[jvj+44]=0;
l20:if((x[jvj+44]<=0)) goto l24;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
pile[v[22]]=jvj+45; pile[WZ1]=B; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+45,B,jvj+46)*/
pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+46,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]!=486)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+46; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+46,jvj+49)*/
pile[v[22]]=268; pile[WZ1]=jvj+45; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(268,jvj+45,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=B; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+50,B,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[255])( );     /*COPEXP0(jvj+51,jvj+52)*/
x[jvj+89]=x[jvj+49] ;z[jvj+89]=z[jvj+49];
l22:if((x[jvj+89]<=0)) goto l21;
x[jvj+53]=s[x[jvj+89]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+89];
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[1361])( );     /*VAROBJ0(jvj+53,jvj+54)*/
for(a=x[jvj+54];a>0;a=t[a]) if(s[a]==x[A]) goto l23;
x[jvj+89]=t[x[jvj+89]];
goto l22;
l1:x[jvj+1]=0 ;z[jvj+1]=0;
x[jvj+87]=x[jvj+33] ;z[jvj+87]=z[jvj+33];
l2:if((x[jvj+87]>0)) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+40; 
(*f[299])( );     /*COPEL0(jvj+1,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+63)*/
pile[WZ3]=485; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+40; pile[WZ2]=107; pile[WZ3]=jvj+78; 
(*f[301])( );     /*TRI11(jvj+77,jvj+40,107,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+78,22,100,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[1361])( );     /*VAROBJ0(jvj+41,jvj+42)*/
for(a=x[jvj+42];a>0;a=t[a]) if(s[a]==x[A]) goto l19;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+66)*/
pile[WZ3]=485; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+79)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+79; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+79,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+68,107,jvj+37)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+68,107,jvj+41)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+69; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+69,jvj+57)*/
l24:if(x[jvj+58]==incon) goto l25;
l27:pile[v[22]]=jvj+58; pile[WZ1]=R; 
(*f[965])( );if(v[102]) goto l28;     /*NORM0(jvj+58,R)*/
v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:x[jvj+2]=s[x[jvj+87]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+87];
if((x[jvj+2]==x[jvj+38])) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+1,jvj+2)*/
l4:x[jvj+87]=t[x[jvj+87]];
goto l2;
l6:x[jvj+4]=s[x[jvj+49]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+49];
if((x[jvj+4]==x[jvj+53])) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
l7:x[jvj+49]=t[x[jvj+49]];
l5:if((x[jvj+49]>0)) goto l6;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+56; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+56)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+70)*/
pile[WZ3]=990; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,990,jvj+80)*/
pile[WZ3]=486; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+56; pile[WZ2]=107; pile[WZ3]=jvj+86; 
(*f[301])( );     /*TRI11(jvj+85,jvj+56,107,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+86,22,100,jvj+82)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+81,jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+83; pile[WZ5]=jvj+72; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+83,jvj+72)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+71,jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+73; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+73,jvj+57)*/
goto l24;
l9:x[jvj+7]=t[x[jvj+7]];
goto l8;
l12:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=jvj+18; pile[WZ1]=B; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+18,B,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=52)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1361])( );     /*VAROBJ0(jvj+22,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==x[A]) goto l14;
l13:x[jvj+17]=t[x[jvj+17]];
goto l11;
l14:pile[v[22]]=jvj+22; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+24)*/
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+18,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=B; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+25,B,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+59)*/
pile[WZ3]=52; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+75; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+75,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+62; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+62,jvj+57)*/
goto l24;
l16:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=B; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+29,B,jvj+30)*/
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=485)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+33)*/
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+29,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=B; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+34,B,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[1361])( );     /*VAROBJ0(jvj+35,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==x[A]) goto l17;
pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+37)*/
x[jvj+88]=x[jvj+33] ;z[jvj+88]=z[jvj+33];
l18:if((x[jvj+88]<=0)) goto l17;
x[jvj+38]=s[x[jvj+88]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+88];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[1361])( );     /*VAROBJ0(jvj+38,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==x[A]) goto l1;
l19:x[jvj+88]=t[x[jvj+88]];
goto l18;
l17:x[jvj+28]=t[x[jvj+28]];
goto l15;
l21:x[jvj+44]=t[x[jvj+44]];
goto l20;
l23:pile[v[22]]=jvj+53; pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+55)*/
x[jvj+3]=0 ;z[jvj+3]=0;
goto l5;
l25:if(x[jvj+57]!=incon) goto l26;
l28:v[0]=jvj; v[22]-=3; v[102]=1;return;
l26:pile[v[22]]=jvj+57; pile[WZ1]=A; pile[WZ2]=jvj+58; 
(*f[4055])( );if(v[102]) goto l28;     /*ISOPRD0(jvj+57,A,jvj+58)*/
goto l27;
}
