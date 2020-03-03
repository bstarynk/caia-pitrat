#include "dx.h"
void Z70Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V68=0,V72=0,V71=0,V63=0,V94=0,V76=0,V73=0,V54=0,J=0,V39=0,V45=0,I=0,V40=0,V38=0,V78=0,V86=0,N=0,V18=0,K=0,V28=0,L=0,V34=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=72;
x[jvj+1]=15571;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1876&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,NNNY,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l16;
x[jvj+10]=d[20];z[jvj+10]=0;
l6:if((x[jvj+10]>0)) goto l7;
x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=905; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(905,jvj+20,V78)*/
V78=pile[WZ2]; 
if((V78!=(-9009))) goto l16;
x[jvj+21]=d[20];z[jvj+21]=0;
l11:if((x[jvj+21]<=0)) goto l16;
x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=NNNY; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+22,NNNY,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+22,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=NNNY; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+25,NNNY,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+26,V86)*/
V86=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=jvj+27; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(jvj+23,jvj+27)*/
x[jvj+3]=x[jvj+27] ;z[jvj+3]=z[jvj+27];
N=V86;
pile[v[22]]=N; pile[WZ1]=jvj+28; 
(*f[1007])( );if(v[102]) goto l12;     /*DECFACTPREM0(N,jvj+28)*/
x[jvj+66]=x[jvj+28] ;z[jvj+66]=z[jvj+28];
l13:if((x[jvj+66]<=0)) goto l12;
x[jvj+2]=s[x[jvj+66]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+66];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+2,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=1287; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1287,jvj+3,jvj+4)*/
if((x[jvj+4]==0)) goto l5;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V68) goto l5;
l15:NNNT=216;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+29)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+29; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+29,NNNX)*/
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[jvj+64]=t[x[jvj+64]];
l1:if((x[jvj+64]<=0)) goto l14;
x[jvj+6]=s[x[jvj+64]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+64];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+6,V71)*/
V71=pile[WZ2]; 
if((V71!=V72)) goto l2;
pile[v[22]]=195; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(195,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V73) goto l14;
V94=x[jvj+7];
l3:if((V94<=0)) goto l15;
V63=s[V94];
if((V63>=0)) goto l4;
V76=abs(V63);
if((V76<=V73)) goto l14;
l4:V94=t[V94];
goto l3;
l5:pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(515,jvj+2,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(510,jvj+2,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=1310; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1310,jvj+3,jvj+5)*/
x[jvj+64]=x[jvj+5] ;z[jvj+64]=z[jvj+5];
goto l1;
l7:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=NNNY; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+11,NNNY,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=486)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+11,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=NNNY; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+16,NNNY,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+17,V54)*/
V54=pile[WZ2]; 
J=V54;
V39=abs(J);
x[jvj+65]=x[jvj+15] ;z[jvj+65]=z[jvj+15];
l9:if((x[jvj+65]<=0)) goto l8;
x[jvj+18]=s[x[jvj+65]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+65];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+18,V45)*/
V45=pile[WZ2]; 
I=V45;
if((I==0)) goto l10;
V40=abs(I);
V38=V39%V40;
if((V38==0)) goto l10;
NNNT=154;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+19)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+19; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+19,NNNX)*/
goto l23;
l8:x[jvj+10]=t[x[jvj+10]];
goto l6;
l10:x[jvj+65]=t[x[jvj+65]];
goto l9;
l12:x[jvj+21]=t[x[jvj+21]];
goto l11;
l14:x[jvj+66]=t[x[jvj+66]];
goto l13;
l16:if(x[jvj+9]!=25&&x[jvj+9]!=26&&x[jvj+9]!=27&&x[jvj+9]!=28&&x[jvj+9]!=29&&x[jvj+9]!=30) goto l22;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,NNNY,jvj+30)*/
if((x[jvj+30]!=22)) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,NNNY,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=485)) goto l22;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,NNNY,jvj+34)*/
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=485)) goto l22;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+37)*/
pile[WZ1]=jvj+34; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+38)*/
x[jvj+67]=x[jvj+37] ;z[jvj+67]=z[jvj+37];
l17:if((x[jvj+67]<=0)) goto l22;
x[jvj+39]=s[x[jvj+67]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+67];
pile[v[22]]=130; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+39,V18)*/
V18=pile[WZ2]; 
K=V18;
if((K==0)) goto l18;
x[jvj+69]=x[jvj+37] ;z[jvj+69]=z[jvj+37];
l24:if((x[jvj+69]>0)) goto l25;
l18:x[jvj+67]=t[x[jvj+67]];
goto l17;
l22:x[NNNX]=NNNT=incon;
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l25:x[jvj+56]=s[x[jvj+69]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+69];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+39; pile[WZ2]=jvj+57; 
(*f[760])( );     /*MEMEX0(jvj+56,jvj+39,jvj+57)*/
if((x[jvj+57]==135)) goto l26;
x[jvj+69]=t[x[jvj+69]];
goto l24;
l26:x[jvj+58]=0 ;z[jvj+58]=0;
x[jvj+70]=x[jvj+37] ;z[jvj+70]=z[jvj+37];
l27:if((x[jvj+70]>0)) goto l28;
x[jvj+40]=x[jvj+58] ;z[jvj+40]=z[jvj+58];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[299])( );     /*COPEL0(jvj+40,jvj+41)*/
x[jvj+68]=x[jvj+38] ;z[jvj+68]=z[jvj+38];
l19:if((x[jvj+68]<=0)) goto l18;
x[jvj+42]=s[x[jvj+68]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+68];
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+42,V28)*/
V28=pile[WZ2]; 
L=V28;
if((L==0)) goto l20;
x[jvj+71]=x[jvj+38] ;z[jvj+71]=z[jvj+38];
l30:if((x[jvj+71]>0)) goto l31;
l20:x[jvj+68]=t[x[jvj+68]];
goto l19;
l28:x[jvj+59]=s[x[jvj+70]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+70];
if((x[jvj+59]==x[jvj+56])) goto l29;
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; 
(*f[68])( );     /*PLUE0(jvj+58,jvj+59)*/
l29:x[jvj+70]=t[x[jvj+70]];
goto l27;
l31:x[jvj+60]=s[x[jvj+71]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+71];
pile[v[22]]=jvj+60; pile[WZ1]=jvj+42; pile[WZ2]=jvj+61; 
(*f[760])( );     /*MEMEX0(jvj+60,jvj+42,jvj+61)*/
if((x[jvj+61]==135)) goto l32;
x[jvj+71]=t[x[jvj+71]];
goto l30;
l32:x[jvj+62]=0 ;z[jvj+62]=0;
x[jvj+72]=x[jvj+38] ;z[jvj+72]=z[jvj+38];
l33:if((x[jvj+72]>0)) goto l34;
x[jvj+43]=x[jvj+62] ;z[jvj+43]=z[jvj+62];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[299])( );     /*COPEL0(jvj+43,jvj+44)*/
V34=K-L;
NNNT=28;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+9; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+9,jvj+46)*/
pile[WZ3]=485; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V34; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,V34,jvj+52)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+51,jvj+50)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+50; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+41,jvj+50,107)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+44; pile[WZ2]=107; pile[WZ3]=jvj+55; 
(*f[301])( );     /*TRI11(jvj+54,jvj+44,107,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+55,22,100,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,103,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+50,jvj+49,jvj+45)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+45; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+45,NNNX)*/
goto l23;
l34:x[jvj+63]=s[x[jvj+72]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+72];
if((x[jvj+63]==x[jvj+60])) goto l35;
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[68])( );     /*PLUE0(jvj+62,jvj+63)*/
l35:x[jvj+72]=t[x[jvj+72]];
goto l33;
}
