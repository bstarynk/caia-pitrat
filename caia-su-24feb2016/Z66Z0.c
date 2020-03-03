#include "dx.h"
void Z66Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,K=0,V45=0,V46=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=64;
x[jvj+1]=15567;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1874&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,NNNY,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=52)) goto l10;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,NNNY,jvj+15)*/
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+15,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=52)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+15,jvj+18)*/
NNNT=16;
pile[v[22]]=NNNY; pile[WZ1]=jvj+18; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+18,NNNX)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l3:x[jvj+2]=s[x[jvj+61]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+61];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+2,V30)*/
V30=pile[WZ2]; 
K=V30;
if((K<0)) goto l4;
l1:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==52)) goto l4;
l16:x[NNNX]=NNNT=incon;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l4:x[jvj+61]=t[x[jvj+61]];
l2:if((x[jvj+61]>0)) goto l3;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+5]=d[29];z[jvj+5]=0;
x[jvj+62]=x[jvj+41] ;z[jvj+62]=z[jvj+41];
l5:if((x[jvj+62]<=0)) goto l7;
x[jvj+6]=s[x[jvj+62]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+62];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+6,V45)*/
V45=pile[WZ2]; 
K=V45;
V46=(-K);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V46; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,V46,jvj+7)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+7,jvj+8)*/
l6:x[jvj+62]=t[x[jvj+62]];
goto l5;
l8:x[jvj+9]=s[x[jvj+41]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=52)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+9,jvj+12)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+12)*/
l9:x[jvj+41]=t[x[jvj+41]];
l7:if((x[jvj+41]>0)) goto l8;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+42; 
(*f[299])( );     /*COPEL0(jvj+8,jvj+42)*/
NNNT=142;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+51)*/
pile[WZ3]=485; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=111; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,111,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+42; pile[WZ2]=107; pile[WZ3]=jvj+56; 
(*f[301])( );     /*TRI11(jvj+55,jvj+42,107,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+56,22,100,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+52,jvj+43)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+43; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+43,NNNX)*/
goto l17;
l10:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(539,NNNY,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=408)) goto l11;
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+19,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=52)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+19,jvj+25)*/
pile[WZ1]=jvj+22; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+22,jvj+26)*/
NNNT=143;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,jvj+26,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+46; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+46,jvj+27)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+27; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+19,jvj+27,NNNX)*/
goto l17;
l11:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(543,NNNY,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]==486)) goto l12;
if((x[jvj+30]!=485)) goto l16;
x[jvj+39]=vo[14];z[jvj+39]=vz[14];
pile[v[22]]=1330; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1330,jvj+39,jvj+40)*/
if((x[jvj+40]!=68)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+41)*/
x[jvj+61]=x[jvj+41] ;z[jvj+61]=z[jvj+41];
goto l2;
l12:pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+31)*/
x[jvj+63]=x[jvj+31] ;z[jvj+63]=z[jvj+31];
l18:if((x[jvj+63]>0)) goto l19;
goto l16;
l14:x[jvj+31]=t[x[jvj+31]];
l13:if((x[jvj+31]<=0)) goto l16;
x[jvj+34]=s[x[jvj+31]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+31];
if((x[NNNY]!=x[jvj+34])) goto l14;
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=52)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+34,jvj+37)*/
NNNT=17;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+47)*/
pile[WZ3]=486; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+50)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+50,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=107; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+49,107,jvj+37)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+49; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+33,jvj+49,107)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+38)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+38; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+28,jvj+38,NNNX)*/
goto l17;
l19:x[jvj+57]=s[x[jvj+63]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+63];
pile[v[22]]=jvj+57; pile[WZ1]=NNNY; pile[WZ2]=jvj+58; 
(*f[760])( );     /*MEMEX0(jvj+57,NNNY,jvj+58)*/
if((x[jvj+58]==135)) goto l20;
x[jvj+63]=t[x[jvj+63]];
goto l18;
l20:x[jvj+59]=0 ;z[jvj+59]=0;
x[jvj+64]=x[jvj+31] ;z[jvj+64]=z[jvj+31];
l21:if((x[jvj+64]>0)) goto l22;
x[jvj+32]=x[jvj+59] ;z[jvj+32]=z[jvj+59];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[299])( );     /*COPEL0(jvj+32,jvj+33)*/
goto l13;
l22:x[jvj+60]=s[x[jvj+64]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+64];
if((x[jvj+60]==x[jvj+57])) goto l23;
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[68])( );     /*PLUE0(jvj+59,jvj+60)*/
l23:x[jvj+64]=t[x[jvj+64]];
goto l21;
}
