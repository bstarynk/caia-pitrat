#include "dx.h"
void ATOME175T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V5=0,P=0,II=0,V33=0,V=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=20175;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3766&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1347; pile[WZ1]=D; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1347,D,jvj+4)*/
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:V18=II+P;
V5=V18;
l11:x[jvj+23]=vo[14];z[jvj+23]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+23,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=865; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(865,jvj+23,jvj+24)*/
pile[v[22]]=202; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l16;     /*FNDOND0(202,D,jvj+3)*/
if((x[jvj+3]==68)) goto l13;
l16:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+35)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7141); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7141),jvj+36)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+34; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+34,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=107; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+35)*/
pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+36)*/
x[jvj+26]=incon;
if((V5!=0)) goto l14;
x[jvj+26]=x[jvj+32] ;z[jvj+26]=z[jvj+32];
l12:pile[v[22]]=D; pile[WZ1]=jvj+16; 
(*f[1290])( );if(v[102]) goto l13;     /*DEPEXP0(D,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+25)*/
pile[v[22]]=D; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; pile[WZ3]=jvj+17; 
(*f[3707])( );if(v[102]) goto l13;     /*CRETROUVERA0(D,jvj+21,jvj+26,jvj+17,V)*/
V=pile[WZ4]; 
pile[v[22]]=jvj+17; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,jvj+27,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+39; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+39,jvj+29)*/
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+14)*/
l6:if((x[jvj+14]>0)) goto l7;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+61; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+61)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+57; 
(*f[46])( );     /*TRI0(V33,858,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+58; 
(*f[189])( );     /*TRI4(jvj+57,v[13],642,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=3766; pile[WZ2]=246; pile[WZ3]=jvj+59; 
(*f[189])( );     /*TRI4(jvj+58,3766,246,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=20175; pile[WZ2]=218; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+59,20175,218,jvj+60)*/
pile[v[22]]=jvj+61; pile[WZ1]=(-20); pile[WZ2]=jvj+60; pile[WZ3]=159; pile[WZ4]=jvj+62; 
(*f[298])( );     /*TRIENS1(jvj+61,(-20),jvj+60,159,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+62,1,158,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=D; 
(*f[3708])( );     /*CRT0(jvj+28,D)*/
pile[v[22]]=jvj+29; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+29,1070,68)*/
pile[v[22]]=jvj+24; pile[WZ1]=1337; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+24,1337,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=1569; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+29,1569,67)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=110; pile[WZ3]=(-2223); pile[WZ4]=jvj+66; 
(*f[270])( );     /*QUADRI7(101,jvj+21,110,(-2223),jvj+66)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+67)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+63; 
(*f[46])( );     /*TRI0(V33,858,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+64; 
(*f[189])( );     /*TRI4(jvj+63,v[13],642,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=3766; pile[WZ2]=246; pile[WZ3]=jvj+65; 
(*f[189])( );     /*TRI4(jvj+64,3766,246,jvj+65)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20175; pile[WZ4]=jvj+65; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(158,1,218,20175,jvj+65,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=159; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+66)*/
pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+30,159,jvj+67)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[1296])( );     /*NOUVCONTR0(jvj+29,jvj+30)*/
goto l13;
l3:x[jvj+7]=s[x[jvj+68]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+68];
if((x[jvj+7]==x[D])) goto l4;
pile[v[22]]=1347; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1347,jvj+7,jvj+8)*/
l8:x[jvj+14]=t[x[jvj+14]];
goto l6;
l4:x[jvj+68]=t[x[jvj+68]];
l2:if((x[jvj+68]>0)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; 
(*f[3130])( );if(v[102]) goto l8;     /*SUBSTITUVAR1(jvj+5,jvj+16,jvj+17,jvj+19,jvj+18)*/
if((x[jvj+18]==135)) goto l9;
goto l8;
l7:x[jvj+5]=s[x[jvj+14]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+14];
if((x[jvj+5]==x[jvj+21])) goto l8;
pile[v[22]]=1300; pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1300,jvj+5,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==1280) goto l8;
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==636) goto l8;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
x[jvj+68]=x[jvj+6] ;z[jvj+68]=z[jvj+6];
goto l2;
l9:pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[799])( );if(v[102]) goto l8;     /*NORME0(jvj+19,jvj+20)*/
x[jvj+10]=x[jvj+20] ;z[jvj+10]=z[jvj+20];
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==596) goto l15;
l5:pile[v[22]]=1358; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1358,jvj+5,jvj+12)*/
if((x[jvj+12]!=68)) goto l8;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+55; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+55)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+51; 
(*f[46])( );     /*TRI0(V33,858,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+52; 
(*f[189])( );     /*TRI4(jvj+51,v[13],642,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=3766; pile[WZ2]=246; pile[WZ3]=jvj+53; 
(*f[189])( );     /*TRI4(jvj+52,3766,246,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=20175; pile[WZ2]=218; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+53,20175,218,jvj+54)*/
pile[v[22]]=jvj+55; pile[WZ1]=(-20); pile[WZ2]=jvj+54; pile[WZ3]=159; pile[WZ4]=jvj+56; 
(*f[298])( );     /*TRIENS1(jvj+55,(-20),jvj+54,159,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+56,1,158,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=1347; pile[WZ2]=jvj+10; 
(*f[1047])( );     /*EVENEMENT0(jvj+13,1347,jvj+10)*/
goto l8;
l10:pile[v[22]]=1603; pile[WZ1]=D; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1603,D,jvj+21)*/
pile[v[22]]=1474; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1474,D,jvj+22)*/
pile[v[22]]=117; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+22,P)*/
P=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,jvj+22,II)*/
II=pile[WZ2]; 
if((II==0)) goto l13;
V5=incon;
if((II<0)) goto l1;
V5=II;
goto l11;
l14:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+33)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+33)*/
goto l12;
l15:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+44)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(V33,858,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,v[13],642,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=3766; pile[WZ2]=246; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,3766,246,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=20175; pile[WZ2]=218; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,20175,218,jvj+43)*/
pile[v[22]]=jvj+44; pile[WZ1]=(-20); pile[WZ2]=jvj+43; pile[WZ3]=159; pile[WZ4]=jvj+45; 
(*f[298])( );     /*TRIENS1(jvj+44,(-20),jvj+43,159,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+45,1,158,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+9; 
(*f[1296])( );     /*NOUVCONTR0(jvj+10,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,(-608),jvj+49)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+50)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+46; 
(*f[46])( );     /*TRI0(V33,858,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+47; 
(*f[189])( );     /*TRI4(jvj+46,v[13],642,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=3766; pile[WZ2]=246; pile[WZ3]=jvj+48; 
(*f[189])( );     /*TRI4(jvj+47,3766,246,jvj+48)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20175; pile[WZ4]=jvj+48; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(158,1,218,20175,jvj+48,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=159; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+11,159,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+11,159,jvj+50)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1558])( );     /*RESTAURE0(jvj+5,jvj+10,jvj+11)*/
goto l5;
}
