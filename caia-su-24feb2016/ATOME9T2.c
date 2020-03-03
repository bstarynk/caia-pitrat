#include "dx.h"
void ATOME9T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D=0,V10=0,B=0,BB=0,V12=0,V21=0,V22=0,V33=0,V57=0,V68=0,V81=0,V92=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=72;
x[jvj+1]=20009;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3350&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=55)) goto l14;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,RR,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=55)) goto l14;
pile[v[22]]=107; pile[WZ1]=RR; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,RR,jvj+16)*/
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(870,R,V21)*/
V21=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(870,RR,V22)*/
V22=pile[WZ2]; 
if((V21>V22)) goto l14;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+17,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(678,R,jvj+11)*/
l6:if((x[jvj+11]>0)) goto l7;
x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+18,jvj+19)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,R,jvj+20)*/
pile[v[22]]=1216; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1216,jvj+19,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==1291) goto l8;
l14:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+3]=s[x[jvj+69]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+69];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
if((x[jvj+4]<=0)) goto l5;
D=s[x[jvj+4]];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+3,jvj+53)*/
if((x[jvj+53]!=22)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+3,jvj+54)*/
pile[v[22]]=130; pile[WZ1]=jvj+54; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+54,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+3,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+55,jvj+56)*/
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+3,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+57,jvj+58)*/
if((x[jvj+58]!=484)) goto l19;
x[jvj+63]=x[jvj+56] ;z[jvj+63]=z[jvj+56];
B=V81;
l18:if(x[jvj+63]!=25&&x[jvj+63]!=26&&x[jvj+63]!=29&&x[jvj+63]!=30&&x[jvj+63]!=27&&x[jvj+63]!=28) goto l5;
x[jvj+7]=x[jvj+63] ;z[jvj+7]=z[jvj+63];
x[jvj+68]=x[jvj+27] ;z[jvj+68]=z[jvj+27];
l1:if((x[jvj+68]<=0)) goto l13;
x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
for(i=x[jvj+6],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=1)) goto l2;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==D) goto l15;
l2:x[jvj+68]=t[x[jvj+68]];
goto l1;
l5:x[jvj+69]=t[x[jvj+69]];
l3:if((x[jvj+69]>0)) goto l4;
x[jvj+71]=x[jvj+16] ;z[jvj+71]=z[jvj+16];
l20:if((x[jvj+71]>0)) goto l21;
l13:x[jvj+70]=t[x[jvj+70]];
l11:if((x[jvj+70]<=0)) goto l14;
x[jvj+24]=s[x[jvj+70]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+70];
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=48)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+27)*/
x[jvj+69]=x[jvj+20] ;z[jvj+69]=z[jvj+20];
goto l3;
l7:x[jvj+10]=s[x[jvj+11]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+11];
pile[v[22]]=472; pile[WZ1]=jvj+10; 
(*f[1975])( );if(v[102]) goto l14;     /*FNDCND0(472,jvj+10,V12)*/
V12=pile[WZ2]; 
if((V12!=1)) goto l14;
x[jvj+11]=t[x[jvj+11]];
goto l6;
l8:for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==1301) goto l9;
goto l14;
l9:pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1294,R,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==1301) goto l10;
goto l14;
l10:pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==1291) goto l12;
goto l14;
l12:x[jvj+70]=x[jvj+16] ;z[jvj+70]=z[jvj+16];
goto l11;
l15:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+42)*/
if((x[jvj+42]!=22)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+5,jvj+43)*/
pile[v[22]]=130; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+43,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+5,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+44,jvj+45)*/
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+5,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=484)) goto l17;
x[jvj+52]=x[jvj+45] ;z[jvj+52]=z[jvj+45];
BB=V57;
l16:if(x[jvj+52]!=25&&x[jvj+52]!=26&&x[jvj+52]!=29&&x[jvj+52]!=30&&x[jvj+52]!=27&&x[jvj+52]!=28) goto l2;
x[jvj+8]=x[jvj+52] ;z[jvj+8]=z[jvj+52];
pile[v[22]]=jvj+7; pile[WZ1]=B; pile[WZ2]=jvj+8; pile[WZ3]=BB; pile[WZ4]=jvj+9; 
(*f[3242])( );if(v[102]) goto l2;     /*INFEG0(jvj+7,B,jvj+8,BB,jvj+9)*/
if((x[jvj+9]==135)) goto l5;
goto l2;
l17:pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+43,jvj+48)*/
if((x[jvj+48]!=484)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+49)*/
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+49,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+50,jvj+51)*/
pile[v[22]]=514; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(514,jvj+51,jvj+52)*/
BB=V68;
goto l16;
l19:pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+54,jvj+59)*/
if((x[jvj+59]!=484)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+3,jvj+60)*/
pile[v[22]]=130; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+60,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+3,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+61,jvj+62)*/
pile[v[22]]=514; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(514,jvj+62,jvj+63)*/
B=V92;
goto l18;
l21:x[jvj+64]=s[x[jvj+71]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+71];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+24; pile[WZ2]=jvj+65; 
(*f[760])( );     /*MEMEX0(jvj+64,jvj+24,jvj+65)*/
if((x[jvj+65]==135)) goto l22;
x[jvj+71]=t[x[jvj+71]];
goto l20;
l22:x[jvj+66]=0 ;z[jvj+66]=0;
x[jvj+72]=x[jvj+16] ;z[jvj+72]=z[jvj+16];
l23:if((x[jvj+72]>0)) goto l24;
x[jvj+28]=x[jvj+66] ;z[jvj+28]=z[jvj+66];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[299])( );     /*COPEL0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+29; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+34,jvj+29,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[799])( );if(v[102]) goto l13;     /*NORME0(jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+39)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+40)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+41)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V33,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3350; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3350,246,jvj+38)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20009; pile[WZ4]=jvj+38; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(158,1,218,20009,jvj+38,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=159; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+32,159,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+32,159,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+32,159,jvj+41)*/
pile[v[22]]=RR; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+31,jvj+32)*/
goto l13;
l24:x[jvj+67]=s[x[jvj+72]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+72];
if((x[jvj+67]==x[jvj+64])) goto l25;
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+66,jvj+67)*/
l25:x[jvj+72]=t[x[jvj+72]];
goto l23;
}
