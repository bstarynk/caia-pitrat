#include "dx.h"
void CPP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V7=0,F=0;
int A,B,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=11840;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1822&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+72]=0 ;z[jvj+72]=0;
x[jvj+40]=x[jvj+72] ;z[jvj+40]=z[jvj+72];
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(A,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+49)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=436; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,436,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=111; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,111,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+50; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+3,jvj+50,jvj+4)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(R,107,jvj+4)*/
pile[v[22]]=128; pile[WZ1]=B; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,B,jvj+5)*/
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=128; pile[WZ1]=B; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(128,B,jvj+32)*/
x[jvj+73]=x[jvj+32] ;z[jvj+73]=z[jvj+32];
l4:if((x[jvj+73]>0)) goto l5;
for(i=x[jvj+32],V7=0;i>0;i=t[i],V7++)  ;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+60)*/
pile[WZ3]=74; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+65)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+67)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+66,jvj+64)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+62)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+64,jvj+63,jvj+33)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(R,107,jvj+33)*/
l14:if((x[jvj+32]>0)) goto l15;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=654)) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+54)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+52,jvj+9,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+10)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(R,107,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+59)*/
pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+59,jvj+58,jvj+11)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(R,107,jvj+11)*/
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l5:x[jvj+12]=s[x[jvj+73]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+73];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==653)) goto l14;
l6:x[jvj+73]=t[x[jvj+73]];
goto l4;
l7:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,A,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+15,jvj+16)*/
x[jvj+17]=x[jvj+16] ;z[jvj+17]=z[jvj+16];
pile[v[22]]=1834; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1834,jvj+17,jvj+18)*/
if((x[jvj+18]==129)) goto l8;
l18:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,jvj+30,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+46; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+46,jvj+31)*/
l13:pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(R,107,jvj+31)*/
l11:x[jvj+74]=t[x[jvj+74]];
l9:if((x[jvj+74]>0)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+68)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; pile[WZ2]=103; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+69,jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+71; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+71,jvj+39)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(R,107,jvj+39)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+24)*/
l16:x[jvj+32]=t[x[jvj+32]];
goto l14;
l8:pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1409; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,1409,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+27,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+43; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+43,jvj+31)*/
goto l13;
l10:x[jvj+26]=s[x[jvj+74]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+74];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[760])( );     /*MEMEX0(jvj+24,jvj+26,jvj+29)*/
if((x[jvj+29]==134)) goto l12;
goto l11;
l12:pile[v[22]]=jvj+26; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+30)*/
x[jvj+31]=incon;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,A,jvj+23)*/
if((x[jvj+23]==22)) goto l7;
if((x[jvj+23]!=43)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,A,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+19,jvj+20)*/
x[jvj+21]=x[jvj+20] ;z[jvj+21]=z[jvj+20];
pile[v[22]]=1834; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1834,jvj+21,jvj+22)*/
if((x[jvj+22]==129)) goto l8;
goto l18;
l15:x[jvj+34]=s[x[jvj+32]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+32];
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=22)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+34,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+36,jvj+37)*/
F=x[jvj+37];
if(F!=650&&F!=651) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+34,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+38)*/
pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+28)*/
x[jvj+74]=x[jvj+40] ;z[jvj+74]=z[jvj+40];
goto l9;
}
