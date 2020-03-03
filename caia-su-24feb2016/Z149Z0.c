#include "dx.h"
void Z149Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V64=0,V68=0,P=0,V70=0,V71=0,L=0,V40=0,V22=0,V30=0,V51=0,V15=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=15650;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1882&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,NNNY,jvj+6)*/
if((x[jvj+6]!=22)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,NNNY,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+7,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,NNNY,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+8,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,NNNY,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+9,jvj+10)*/
if(x[jvj+10]!=63&&x[jvj+10]!=990) goto l5;
pile[v[22]]=V68; pile[WZ1]=V64; 
(*f[1011])( );     /*PGCD0(V68,V64,P)*/
P=pile[WZ2]; 
if((P<=1)) goto l5;
V70=V64/P;
V71=V68/P;
NNNT=38;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+10; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+10,jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V70; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,V70,jvj+40)*/
pile[WZ3]=V71; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V71,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+39,jvj+11)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+11; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+11,NNNX)*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l3:x[jvj+5]=s[x[jvj+17]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+17];
if((x[jvj+5]==x[jvj+18])) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
l4:x[jvj+17]=t[x[jvj+17]];
l2:if((x[jvj+17]>0)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+19; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+19)*/
V51=V22/L;
NNNT=37;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+41)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V51; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,V51,jvj+42)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+41,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=107; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+20,107,jvj+42)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+19,jvj+20,107)*/
pile[v[22]]=NNNY; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+20,NNNX)*/
goto l14;
l5:pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+7,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=486)) goto l8;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,NNNY,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+14,L)*/
L=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,NNNY,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if(x[jvj+16]!=63&&x[jvj+16]!=990) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+17)*/
x[jvj+55]=x[jvj+17] ;z[jvj+55]=z[jvj+17];
l6:if((x[jvj+55]<=0)) goto l8;
x[jvj+18]=s[x[jvj+55]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+55];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+18,V40)*/
V40=pile[WZ2]; 
V22=V40;
V30=V22%L;
if((V30!=0)) goto l7;
x[jvj+4]=0 ;z[jvj+4]=0;
goto l2;
l7:x[jvj+55]=t[x[jvj+55]];
goto l6;
l8:pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(543,NNNY,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+21,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=485)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+24)*/
x[jvj+56]=x[jvj+24] ;z[jvj+56]=z[jvj+24];
l9:if((x[jvj+56]<=0)) goto l13;
x[jvj+25]=s[x[jvj+56]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+56];
if((x[NNNY]!=x[jvj+25])) goto l10;
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=22)) goto l10;
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+25,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+27,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+25,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+28,jvj+29)*/
x[jvj+48]=x[jvj+29] ;z[jvj+48]=z[jvj+29];
if(x[jvj+48]!=63&&x[jvj+48]!=990) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+25,jvj+30)*/
x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+57]=x[jvj+24] ;z[jvj+57]=z[jvj+24];
l15:if((x[jvj+57]>0)) goto l16;
l11:pile[v[22]]=jvj+2; pile[WZ1]=jvj+31; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+31)*/
NNNT=36;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+48; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+48,jvj+43)*/
pile[WZ3]=485; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+49)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+49; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+49,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=107; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+47,107,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+47; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+31,jvj+47,107)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+46,jvj+32)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+32; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+21,jvj+32,NNNX)*/
goto l14;
l10:x[jvj+56]=t[x[jvj+56]];
goto l9;
l13:x[NNNX]=NNNT=incon;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l16:x[jvj+50]=s[x[jvj+57]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+57];
pile[v[22]]=jvj+50; pile[WZ1]=NNNY; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+50,NNNY,jvj+51)*/
if((x[jvj+51]==135)) goto l17;
x[jvj+57]=t[x[jvj+57]];
goto l15;
l17:x[jvj+52]=0 ;z[jvj+52]=0;
x[jvj+58]=x[jvj+24] ;z[jvj+58]=z[jvj+24];
l18:if((x[jvj+58]>0)) goto l19;
x[jvj+54]=x[jvj+52] ;z[jvj+54]=z[jvj+52];
l1:if((x[jvj+54]<=0)) goto l11;
x[jvj+34]=s[x[jvj+54]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+54];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+35)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+33; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+33,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+34)*/
pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+35)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+3)*/
x[jvj+54]=t[x[jvj+54]];
goto l1;
l19:x[jvj+53]=s[x[jvj+58]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+58];
if((x[jvj+53]==x[jvj+50])) goto l20;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[68])( );     /*PLUE0(jvj+52,jvj+53)*/
l20:x[jvj+58]=t[x[jvj+58]];
goto l18;
}
