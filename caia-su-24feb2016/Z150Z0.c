#include "dx.h"
void Z150Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V112=0,V15=0,V64=0,V68=0,P=0,V70=0,V71=0,L=0,V40=0,V22=0,V30=0,V51=0,V74=0,V119=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=113;
x[jvj+1]=15651;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1883&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=543; pile[WZ1]=NNNY; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(543,NNNY,jvj+6)*/
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==486)) goto l5;
if((x[jvj+8]!=485)) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+18)*/
x[jvj+108]=x[jvj+18] ;z[jvj+108]=z[jvj+18];
l8:if((x[jvj+108]<=0)) goto l11;
x[jvj+19]=s[x[jvj+108]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+108];
if((x[NNNY]!=x[jvj+19])) goto l9;
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=22)) goto l9;
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+19,jvj+21)*/
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+21,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+19,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+22,jvj+23)*/
x[jvj+78]=x[jvj+23] ;z[jvj+78]=z[jvj+23];
if(x[jvj+78]!=63&&x[jvj+78]!=990) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+19,jvj+24)*/
x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+110]=x[jvj+18] ;z[jvj+110]=z[jvj+18];
l20:if((x[jvj+110]>0)) goto l21;
l10:pile[v[22]]=jvj+2; pile[WZ1]=jvj+25; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+25)*/
NNNT=36;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+78; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+78,jvj+73)*/
pile[WZ3]=485; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+79)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+79; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+79,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=107; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+77,107,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+77; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+25,jvj+77,107)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+75; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+75)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=103; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,103,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+77,jvj+76,jvj+26)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+26; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+6,jvj+26,NNNX)*/
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l3:x[jvj+5]=s[x[jvj+38]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+38];
if((x[jvj+5]==x[jvj+39])) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
l4:x[jvj+38]=t[x[jvj+38]];
l2:if((x[jvj+38]>0)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+40; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+40)*/
V51=V22/L;
NNNT=37;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+85)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V51; pile[WZ4]=jvj+86; 
(*f[192])( );     /*QUADRI4(100,41,130,V51,jvj+86)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+85; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+85,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=107; pile[WZ2]=jvj+86; 
(*f[36])( );     /*PLUSC0(jvj+41,107,jvj+86)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+40,jvj+41,107)*/
pile[v[22]]=NNNY; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+41,NNNX)*/
goto l19;
l5:pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+9)*/
x[jvj+112]=x[jvj+9] ;z[jvj+112]=z[jvj+9];
l26:if((x[jvj+112]>0)) goto l27;
l11:pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,NNNY,jvj+27)*/
if((x[jvj+27]!=22)) goto l15;
pile[v[22]]=102; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,NNNY,jvj+28)*/
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+28,V64)*/
V64=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,NNNY,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+29,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,NNNY,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+30,jvj+31)*/
if(x[jvj+31]!=63&&x[jvj+31]!=990) goto l12;
pile[v[22]]=V68; pile[WZ1]=V64; 
(*f[1011])( );     /*PGCD0(V68,V64,P)*/
P=pile[WZ2]; 
if((P<=1)) goto l12;
V70=V64/P;
V71=V68/P;
NNNT=38;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+31; pile[WZ4]=jvj+80; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+31,jvj+80)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V70; pile[WZ4]=jvj+84; 
(*f[192])( );     /*QUADRI4(100,41,130,V70,jvj+84)*/
pile[WZ3]=V71; pile[WZ4]=jvj+82; 
(*f[192])( );     /*QUADRI4(100,41,130,V71,jvj+82)*/
pile[v[22]]=jvj+80; pile[WZ1]=111; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+80,111,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; pile[WZ2]=103; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+81,jvj+82,103,jvj+83)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+84; pile[WZ4]=jvj+83; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+84,jvj+83,jvj+32)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+32; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+32,NNNX)*/
goto l19;
l7:x[jvj+9]=t[x[jvj+9]];
l6:if((x[jvj+9]<=0)) goto l11;
x[jvj+12]=s[x[jvj+9]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+9];
if((x[NNNY]!=x[jvj+12])) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=990)) goto l7;
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+12,jvj+15)*/
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+15,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+12,jvj+16)*/
NNNT=96;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=990; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,990,jvj+67)*/
pile[WZ3]=486; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+72)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+72,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=107; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+71,107,jvj+16)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+71; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+11,jvj+71,107)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V112; pile[WZ4]=jvj+69; 
(*f[192])( );     /*QUADRI4(100,41,130,V112,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; pile[WZ2]=103; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+68,jvj+69,103,jvj+70)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+70; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+71,jvj+70,jvj+17)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+17; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+6,jvj+17,NNNX)*/
goto l19;
l9:x[jvj+108]=t[x[jvj+108]];
goto l8;
l12:pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+28,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=486)) goto l15;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,NNNY,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+35,L)*/
L=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,NNNY,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+36,jvj+37)*/
if(x[jvj+37]!=63&&x[jvj+37]!=990) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+38)*/
x[jvj+109]=x[jvj+38] ;z[jvj+109]=z[jvj+38];
l13:if((x[jvj+109]<=0)) goto l15;
x[jvj+39]=s[x[jvj+109]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+109];
pile[v[22]]=130; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+39,V40)*/
V40=pile[WZ2]; 
V22=V40;
V30=V22%L;
if((V30!=0)) goto l14;
x[jvj+4]=0 ;z[jvj+4]=0;
goto l2;
l14:x[jvj+109]=t[x[jvj+109]];
goto l13;
l15:pile[v[22]]=539; pile[WZ1]=NNNY; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(539,NNNY,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=22)) goto l16;
pile[v[22]]=103; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+42,jvj+44)*/
if((x[NNNY]!=x[jvj+44])) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=990)) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+44,jvj+47)*/
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+47,V74)*/
V74=pile[WZ2]; 
if((V74<=0)) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+42,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+48,jvj+49)*/
if(x[jvj+49]!=25&&x[jvj+49]!=26&&x[jvj+49]!=27&&x[jvj+49]!=28&&x[jvj+49]!=29&&x[jvj+49]!=30) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+44; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+44,jvj+50)*/
pile[WZ1]=jvj+42; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+42,jvj+51)*/
NNNT=95;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+49; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+49,jvj+87)*/
pile[WZ3]=486; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+91)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V74; pile[WZ4]=jvj+92; 
(*f[192])( );     /*QUADRI4(100,41,130,V74,jvj+92)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+91,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=107; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+90,107,jvj+51)*/
pile[WZ2]=jvj+92; 
(*f[36])( );     /*PLUSC0(jvj+90,107,jvj+92)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+50; pile[WZ2]=103; pile[WZ3]=jvj+89; 
(*f[58])( );     /*TRI3(jvj+88,jvj+50,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+89,jvj+52)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+52; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+42,jvj+52,NNNX)*/
goto l19;
l16:pile[v[22]]=538; pile[WZ1]=NNNY; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(538,NNNY,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+53,jvj+54)*/
if((x[jvj+54]!=22)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+53,jvj+55)*/
if((x[NNNY]!=x[jvj+55])) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+55,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=990)) goto l18;
pile[v[22]]=103; pile[WZ1]=jvj+55; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+55,jvj+58)*/
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+58,V119)*/
V119=pile[WZ2]; 
if((V119<=0)) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+53,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+59,jvj+60)*/
if(x[jvj+60]!=25&&x[jvj+60]!=26&&x[jvj+60]!=27&&x[jvj+60]!=28&&x[jvj+60]!=29&&x[jvj+60]!=30) goto l18;
pile[v[22]]=102; pile[WZ1]=jvj+55; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+55,jvj+61)*/
pile[v[22]]=103; pile[WZ1]=jvj+53; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+53,jvj+62)*/
NNNT=97;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+60; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+60,jvj+93)*/
pile[WZ3]=486; pile[WZ4]=jvj+97; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+97)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V119; pile[WZ4]=jvj+98; 
(*f[192])( );     /*QUADRI4(100,41,130,V119,jvj+98)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+97; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+97,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=107; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+95,107,jvj+62)*/
pile[WZ2]=jvj+98; 
(*f[36])( );     /*PLUSC0(jvj+95,107,jvj+98)*/
pile[v[22]]=jvj+93; pile[WZ1]=111; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,111,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=jvj+95; pile[WZ2]=103; pile[WZ3]=jvj+96; 
(*f[58])( );     /*TRI3(jvj+94,jvj+95,103,jvj+96)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+61; pile[WZ4]=jvj+96; pile[WZ5]=jvj+63; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+61,jvj+96,jvj+63)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+63; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+53,jvj+63,NNNX)*/
goto l19;
l18:x[NNNX]=NNNT=incon;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l21:x[jvj+99]=s[x[jvj+110]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+110];
pile[v[22]]=jvj+99; pile[WZ1]=NNNY; pile[WZ2]=jvj+100; 
(*f[760])( );     /*MEMEX0(jvj+99,NNNY,jvj+100)*/
if((x[jvj+100]==135)) goto l22;
x[jvj+110]=t[x[jvj+110]];
goto l20;
l22:x[jvj+101]=0 ;z[jvj+101]=0;
x[jvj+111]=x[jvj+18] ;z[jvj+111]=z[jvj+18];
l23:if((x[jvj+111]>0)) goto l24;
x[jvj+107]=x[jvj+101] ;z[jvj+107]=z[jvj+101];
l1:if((x[jvj+107]<=0)) goto l10;
x[jvj+65]=s[x[jvj+107]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+107];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+64)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+66; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+66)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+64; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+64,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+65)*/
pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+66)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+3)*/
x[jvj+107]=t[x[jvj+107]];
goto l1;
l24:x[jvj+102]=s[x[jvj+111]] ;z[jvj+102]=(x[jvj+102]<=sepcte) ? x[jvj+102] : z[jvj+111];
if((x[jvj+102]==x[jvj+99])) goto l25;
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; 
(*f[68])( );     /*PLUE0(jvj+101,jvj+102)*/
l25:x[jvj+111]=t[x[jvj+111]];
goto l23;
l27:x[jvj+103]=s[x[jvj+112]] ;z[jvj+103]=(x[jvj+103]<=sepcte) ? x[jvj+103] : z[jvj+112];
pile[v[22]]=jvj+103; pile[WZ1]=NNNY; pile[WZ2]=jvj+104; 
(*f[760])( );     /*MEMEX0(jvj+103,NNNY,jvj+104)*/
if((x[jvj+104]==135)) goto l28;
x[jvj+112]=t[x[jvj+112]];
goto l26;
l28:x[jvj+105]=0 ;z[jvj+105]=0;
x[jvj+113]=x[jvj+9] ;z[jvj+113]=z[jvj+9];
l29:if((x[jvj+113]>0)) goto l30;
x[jvj+10]=x[jvj+105] ;z[jvj+10]=z[jvj+105];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[299])( );     /*COPEL0(jvj+10,jvj+11)*/
goto l6;
l30:x[jvj+106]=s[x[jvj+113]] ;z[jvj+106]=(x[jvj+106]<=sepcte) ? x[jvj+106] : z[jvj+113];
if((x[jvj+106]==x[jvj+103])) goto l31;
pile[v[22]]=jvj+105; pile[WZ1]=jvj+106; 
(*f[68])( );     /*PLUE0(jvj+105,jvj+106)*/
l31:x[jvj+113]=t[x[jvj+113]];
goto l29;
}
