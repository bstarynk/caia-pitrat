#include "dx.h"
void INCOMPATIBLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V69=0,V71=0,V43=0,V52=0,V73=0,V75=0;
int A,B;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=63;
x[jvj+1]=11418;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1565&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==48)) goto l1;
if((x[jvj+3]==25)) goto l6;
if((x[jvj+3]!=625)) goto l17;
pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,B,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=625)) goto l17;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(160,A,jvj+34)*/
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+34,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=B; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(160,B,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+35,V52)*/
V52=pile[WZ2]; 
if((V43!=V52)) goto l17;
x[jvj+36]=d[20];z[jvj+36]=0;
l12:if((x[jvj+36]<=0)) goto l17;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=A; pile[WZ1]=jvj+37; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(A,jvj+37,V73,jvj+38)*/
V73=pile[WZ2]; 
x[jvj+48]=V73 ;z[jvj+48]=(x[jvj+38]==20&&V73<=sepcte) ? V73 : (x[jvj+38]==41) ? (-1000) : 0;
pile[v[22]]=268; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+37,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=A; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+39,A,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
x[jvj+42]=d[20];z[jvj+42]=0;
l14:if((x[jvj+42]<=0)) goto l13;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=B; pile[WZ1]=jvj+43; pile[WZ3]=jvj+44; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(B,jvj+43,V75,jvj+44)*/
V75=pile[WZ2]; 
x[jvj+49]=V75 ;z[jvj+49]=(x[jvj+44]==20&&V75<=sepcte) ? V75 : (x[jvj+44]==41) ? (-1000) : 0;
pile[v[22]]=268; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+43,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=B; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+45,B,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+46,jvj+47)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[760])( );     /*MEMEX0(jvj+48,jvj+49,jvj+50)*/
if((x[jvj+50]==135)) goto l16;
l15:x[jvj+42]=t[x[jvj+42]];
goto l14;
l1:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,B,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=48)) goto l17;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,A,jvj+6)*/
pile[WZ1]=B; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,B,jvj+7)*/
l2:if((x[jvj+6]<=0)) goto l17;
x[jvj+8]=s[x[jvj+6]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+6];
x[jvj+63]=x[jvj+7] ;z[jvj+63]=z[jvj+7];
l3:if((x[jvj+63]>0)) goto l4;
x[jvj+6]=t[x[jvj+6]];
goto l2;
l4:x[jvj+9]=s[x[jvj+63]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+63];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1565])( );     /*INCOMPATIBLE0(jvj+8,jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l5;
x[jvj+63]=t[x[jvj+63]];
goto l3;
l5:x[RES]=135 ;z[RES]=135;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l6:pile[v[22]]=111; pile[WZ1]=B; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,B,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=25)) goto l17;
x[jvj+13]=d[20];z[jvj+13]=0;
l7:if((x[jvj+13]<=0)) goto l17;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=A; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(A,jvj+14,V69,jvj+15)*/
V69=pile[WZ2]; 
x[jvj+25]=V69 ;z[jvj+25]=(x[jvj+15]==20&&V69<=sepcte) ? V69 : (x[jvj+15]==41) ? (-1000) : 0;
pile[v[22]]=268; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+14,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+16,A,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
x[jvj+19]=d[20];z[jvj+19]=0;
l9:if((x[jvj+19]<=0)) goto l8;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=B; pile[WZ1]=jvj+20; pile[WZ3]=jvj+21; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(B,jvj+20,V71,jvj+21)*/
V71=pile[WZ2]; 
x[jvj+26]=V71 ;z[jvj+26]=(x[jvj+21]==20&&V71<=sepcte) ? V71 : (x[jvj+21]==41) ? (-1000) : 0;
pile[v[22]]=268; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+20,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=B; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+22,B,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[760])( );     /*MEMEX0(jvj+25,jvj+26,jvj+27)*/
if((x[jvj+27]==135)) goto l11;
l10:x[jvj+19]=t[x[jvj+19]];
goto l9;
l8:x[jvj+13]=t[x[jvj+13]];
goto l7;
l11:x[jvj+57]=x[jvj+24] ;z[jvj+57]=z[jvj+24];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+58; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+58,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[799])( );if(v[102]) goto l10;     /*NORME0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+30)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[760])( );     /*MEMEX0(jvj+29,jvj+30,jvj+31)*/
if((x[jvj+31]==135)) goto l5;
goto l10;
l13:x[jvj+36]=t[x[jvj+36]];
goto l12;
l16:x[jvj+61]=x[jvj+47] ;z[jvj+61]=z[jvj+47];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+62; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+62,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[799])( );if(v[102]) goto l15;     /*NORME0(jvj+51,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+53)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[760])( );     /*MEMEX0(jvj+52,jvj+53,jvj+54)*/
if((x[jvj+54]==135)) goto l5;
goto l15;
l17:x[RES]=134 ;z[RES]=134;
goto l18;
}
