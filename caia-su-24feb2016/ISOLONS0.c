#include "dx.h"
void ISOLONS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V83=0,V40=0,V46=0;
int A,B,C;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=91;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[A] ;z[jvj+1]=z[A];
l27:x[R]=x[jvj+65]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l12;
x[jvj+4]=d[20];z[jvj+4]=0;
l1:if((x[jvj+4]>0)) goto l2;
if((x[C]!=486)) goto l12;
x[jvj+14]=d[20];z[jvj+14]=0;
l5:if((x[jvj+14]<=0)) goto l12;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+1; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,jvj+1,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=486)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+19)*/
for(i=x[jvj+19],V83=0;i>0;i=t[i],V83++)  ;
if((V83!=2)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+15,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+1; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+20,jvj+1,jvj+21)*/
x[jvj+84]=x[jvj+19] ;z[jvj+84]=z[jvj+19];
l7:if((x[jvj+84]<=0)) goto l6;
x[jvj+22]=s[x[jvj+84]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+84];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l8;
x[jvj+24]=x[jvj+22] ;z[jvj+24]=z[jvj+22];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+24,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[B]) goto l10;
l8:x[jvj+84]=t[x[jvj+84]];
goto l7;
l2:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+5,jvj+1,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=484)) goto l3;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+8,jvj+9)*/
if(x[jvj+9]!=96&&x[jvj+9]!=89&&x[jvj+9]!=41&&x[jvj+9]!=20&&x[jvj+9]!=128&&x[jvj+9]!=570&&x[jvj+9]!=1317) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+6,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[B]) goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l4:pile[v[22]]=268; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+5,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+1; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+11,jvj+1,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[B]) goto l3;
x[R]=x[jvj+12] ;z[R]=z[jvj+12];
l12:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+1,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l25;
x[jvj+30]=d[20];z[jvj+30]=0;
l13:if((x[jvj+30]>0)) goto l14;
if((x[C]!=68)) goto l25;
x[jvj+46]=d[20];z[jvj+46]=0;
l18:if((x[jvj+46]<=0)) goto l25;
x[jvj+47]=s[x[jvj+46]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+46];
pile[v[22]]=jvj+47; pile[WZ1]=jvj+1; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+47,jvj+1,jvj+48)*/
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=486)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+51)*/
for(i=x[jvj+51],V40=0;i>0;i=t[i],V40++)  ;
if((V40!=2)) goto l19;
pile[v[22]]=268; pile[WZ1]=jvj+47; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+47,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+1; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+52,jvj+1,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[887])( );     /*VARND0(jvj+53,jvj+54)*/
for(a=x[jvj+54];a>0;a=t[a]) if(s[a]==x[B]) goto l19;
pile[WZ1]=jvj+55; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+55)*/
x[jvj+91]=x[jvj+51] ;z[jvj+91]=z[jvj+51];
l20:if((x[jvj+91]<=0)) goto l19;
x[jvj+87]=s[x[jvj+91]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+91];
x[jvj+56]=x[jvj+87] ;z[jvj+56]=z[jvj+87];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[887])( );     /*VARND0(jvj+56,jvj+57)*/
for(a=x[jvj+57];a>0;a=t[a]) if(s[a]==x[B]) goto l22;
l21:x[jvj+91]=t[x[jvj+91]];
goto l20;
l6:x[jvj+14]=t[x[jvj+14]];
goto l5;
l10:x[jvj+85]=x[jvj+19] ;z[jvj+85]=z[jvj+19];
l9:if((x[jvj+85]<=0)) goto l8;
x[jvj+26]=s[x[jvj+85]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+85];
if((x[jvj+22]==x[jvj+26])) goto l11;
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=41)) goto l11;
x[R]=x[jvj+21] ;z[R]=z[jvj+21];
l11:x[jvj+85]=t[x[jvj+85]];
goto l9;
l14:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+1; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+31,jvj+1,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=485)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+35)*/
pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+31,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+1; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+36,jvj+1,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
x[jvj+86]=x[jvj+35] ;z[jvj+86]=z[jvj+35];
l16:if((x[jvj+86]<=0)) goto l15;
x[jvj+39]=s[x[jvj+86]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+86];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[887])( );     /*VARND0(jvj+39,jvj+40)*/
for(a=x[jvj+40];a>0;a=t[a]) if(s[a]==x[B]) goto l29;
l17:x[jvj+86]=t[x[jvj+86]];
goto l16;
l15:x[jvj+30]=t[x[jvj+30]];
goto l13;
l19:x[jvj+46]=t[x[jvj+46]];
goto l18;
l22:pile[v[22]]=jvj+56; pile[WZ1]=jvj+58; 
(*f[255])( );     /*COPEXP0(jvj+56,jvj+58)*/
x[jvj+88]=x[jvj+51] ;z[jvj+88]=z[jvj+51];
l23:if((x[jvj+88]<=0)) goto l21;
x[jvj+59]=s[x[jvj+88]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+88];
if((x[jvj+87]==x[jvj+59])) goto l24;
pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+59,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+66)*/
pile[WZ3]=990; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,990,jvj+76)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V46; pile[WZ4]=jvj+78; 
(*f[192])( );     /*QUADRI4(100,41,130,V46,jvj+78)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; pile[WZ2]=103; pile[WZ3]=jvj+79; 
(*f[58])( );     /*TRI3(jvj+77,jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+79; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+79,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+69; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+58,jvj+69,jvj+65)*/
l25:if(x[R]==incon) goto l26;
v[0]=jvj; v[22]-=4; v[102]=0;return;
l24:x[jvj+88]=t[x[jvj+88]];
goto l23;
l26:if(x[jvj+65]!=incon) goto l28;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l28:x[jvj+1]=x[jvj+65] ;z[jvj+1]=z[jvj+65];
goto l27;
l29:x[jvj+89]=x[jvj+35] ;z[jvj+89]=z[jvj+35];
l30:if((x[jvj+89]>0)) goto l31;
goto l17;
l31:x[jvj+80]=s[x[jvj+89]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+89];
pile[v[22]]=jvj+80; pile[WZ1]=jvj+39; pile[WZ2]=jvj+81; 
(*f[760])( );     /*MEMEX0(jvj+80,jvj+39,jvj+81)*/
if((x[jvj+81]==135)) goto l32;
x[jvj+89]=t[x[jvj+89]];
goto l30;
l32:x[jvj+82]=0 ;z[jvj+82]=0;
x[jvj+90]=x[jvj+35] ;z[jvj+90]=z[jvj+35];
l33:if((x[jvj+90]>0)) goto l34;
x[jvj+41]=x[jvj+82] ;z[jvj+41]=z[jvj+82];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[299])( );     /*COPEL0(jvj+41,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+60)*/
pile[WZ3]=52; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+70)*/
pile[WZ3]=485; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+42; pile[WZ2]=107; pile[WZ3]=jvj+75; 
(*f[301])( );     /*TRI11(jvj+74,jvj+42,107,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+75,22,100,jvj+72)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+72,jvj+71,jvj+61)*/
pile[WZ2]=111; pile[WZ3]=jvj+60; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+60,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=107; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+38)*/
pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+61)*/
pile[WZ1]=jvj+44; 
(*f[887])( );     /*VARND0(jvj+43,jvj+44)*/
for(a=x[jvj+44];a>0;a=t[a]) if(s[a]==x[B]) goto l17;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+39,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+43; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+63,jvj+43,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+64; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+45,jvj+64,jvj+65)*/
goto l25;
l34:x[jvj+83]=s[x[jvj+90]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+90];
if((x[jvj+83]==x[jvj+80])) goto l35;
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; 
(*f[68])( );     /*PLUE0(jvj+82,jvj+83)*/
l35:x[jvj+90]=t[x[jvj+90]];
goto l33;
}
