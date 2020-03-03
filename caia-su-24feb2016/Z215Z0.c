#include "dx.h"
void Z215Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V98=0,V111=0,V116=0,V107=0,V123=0,V125=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=110;
x[jvj+1]=15716;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1894&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,NNNY,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=636)) goto l27;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,NNNY,jvj+4)*/
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,NNNY,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[760])( );     /*MEMEX0(jvj+4,jvj+5,jvj+6)*/
if((x[jvj+6]==135)) goto l1;
l4:x[jvj+7]=d[20];z[jvj+7]=0;
l2:if((x[jvj+7]>0)) goto l3;
x[jvj+14]=d[20];z[jvj+14]=0;
l7:if((x[jvj+14]>0)) goto l8;
x[jvj+20]=d[20];z[jvj+20]=0;
l10:if((x[jvj+20]>0)) goto l11;
x[jvj+41]=d[20];z[jvj+41]=0;
l17:if((x[jvj+41]>0)) goto l18;
x[jvj+53]=d[20];z[jvj+53]=0;
l22:if((x[jvj+53]<=0)) goto l27;
x[jvj+54]=s[x[jvj+53]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+53];
pile[v[22]]=268; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(268,jvj+54,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=NNNY; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+55,NNNY,jvj+56)*/
pile[v[22]]=111; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+56,jvj+57)*/
pile[v[22]]=101; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+57,jvj+58)*/
if((x[jvj+58]!=485)) goto l23;
pile[v[22]]=NNNY; pile[WZ1]=jvj+54; pile[WZ3]=jvj+59; 
(*f[45])( );if(v[102]) goto l23;     /*FNDZ0(NNNY,jvj+54,V125,jvj+59)*/
V125=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+56; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(107,jvj+56,jvj+60)*/
x[jvj+63]=V125 ;z[jvj+63]=(x[jvj+59]==20&&V125<=sepcte) ? V125 : (x[jvj+59]==41) ? (-1000) : 0;
x[jvj+85]=x[jvj+63] ;z[jvj+85]=z[jvj+63];
x[jvj+109]=x[jvj+60] ;z[jvj+109]=z[jvj+60];
l42:if((x[jvj+109]>0)) goto l43;
l23:x[jvj+53]=t[x[jvj+53]];
goto l22;
l1:NNNT=132;
pile[v[22]]=NNNY; pile[WZ1]=jvj+4; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+4,NNNX)*/
l28:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l3:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=NNNY; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,NNNY,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+9,V98)*/
V98=pile[WZ2]; 
if((V98!=1)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=NNNY; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,NNNY,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1446])( );     /*NONUL0(jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l6;
l5:x[jvj+7]=t[x[jvj+7]];
goto l2;
l6:NNNT=137;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+13)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+13; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+13,NNNX)*/
goto l28;
l8:x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=NNNY; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+15,NNNY,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+16,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+15,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=NNNY; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+17,NNNY,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+18,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=V116; pile[WZ1]=V111; 
(*f[1011])( );     /*PGCD0(V116,V111,V107)*/
V107=pile[WZ2]; 
NNNT=187;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V107; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,V107,jvj+19)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+19; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+19,NNNX)*/
goto l28;
l9:x[jvj+14]=t[x[jvj+14]];
goto l7;
l11:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=NNNY; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+21,NNNY,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=486)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+21,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=NNNY; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+25,NNNY,jvj+26)*/
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=486)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+29)*/
pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+30)*/
x[jvj+101]=x[jvj+29] ;z[jvj+101]=z[jvj+29];
l13:if((x[jvj+101]<=0)) goto l12;
x[jvj+37]=s[x[jvj+101]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+101];
x[jvj+31]=x[jvj+37] ;z[jvj+31]=z[jvj+37];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[1446])( );     /*NONUL0(jvj+31,jvj+32)*/
if((x[jvj+32]==135)) goto l29;
l14:x[jvj+101]=t[x[jvj+101]];
goto l13;
l12:x[jvj+20]=t[x[jvj+20]];
goto l10;
l16:NNNT=134;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+67)*/
pile[WZ3]=636; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,636,jvj+69)*/
pile[WZ3]=486; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; pile[WZ2]=107; pile[WZ3]=jvj+77; 
(*f[301])( );     /*TRI11(jvj+75,jvj+76,107,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+77,22,100,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=111; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+78,111,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+36; pile[WZ2]=107; pile[WZ3]=jvj+80; 
(*f[301])( );     /*TRI11(jvj+79,jvj+36,107,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+80,22,100,jvj+71)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+73; pile[WZ4]=jvj+72; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+73,jvj+72,jvj+68)*/
pile[WZ2]=111; pile[WZ3]=jvj+67; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+67,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+31)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+68)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+40; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+40,NNNX)*/
goto l28;
l18:x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=268; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+42,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=NNNY; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+43,NNNY,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=486)) goto l19;
pile[v[22]]=NNNY; pile[WZ1]=jvj+42; pile[WZ3]=jvj+47; 
(*f[45])( );if(v[102]) goto l19;     /*FNDZ0(NNNY,jvj+42,V123,jvj+47)*/
V123=pile[WZ2]; 
x[jvj+49]=V123 ;z[jvj+49]=(x[jvj+47]==20&&V123<=sepcte) ? V123 : (x[jvj+47]==41) ? (-1000) : 0;
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+48)*/
x[jvj+52]=x[jvj+49] ;z[jvj+52]=z[jvj+49];
x[jvj+103]=x[jvj+48] ;z[jvj+103]=z[jvj+48];
l20:if((x[jvj+103]<=0)) goto l19;
x[jvj+50]=s[x[jvj+103]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+103];
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+49,jvj+50,jvj+51)*/
if((x[jvj+51]==135)) goto l21;
x[jvj+103]=t[x[jvj+103]];
goto l20;
l19:x[jvj+41]=t[x[jvj+41]];
goto l17;
l21:NNNT=133;
pile[v[22]]=NNNY; pile[WZ1]=jvj+52; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+52,NNNX)*/
goto l28;
l25:NNNT=135;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=636; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,636,jvj+81)*/
pile[WZ3]=485; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+62; pile[WZ2]=107; pile[WZ3]=jvj+88; 
(*f[301])( );     /*TRI11(jvj+87,jvj+62,107,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+83; 
(*f[58])( );     /*TRI3(jvj+88,22,100,jvj+83)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; pile[WZ2]=103; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+82,jvj+83,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+85,jvj+84,jvj+66)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+66; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(NNNY,jvj+66,NNNX)*/
goto l28;
l27:x[NNNX]=NNNT=incon;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l29:x[jvj+105]=x[jvj+29] ;z[jvj+105]=z[jvj+29];
l30:if((x[jvj+105]>0)) goto l31;
goto l14;
l31:x[jvj+89]=s[x[jvj+105]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+105];
pile[v[22]]=jvj+89; pile[WZ1]=jvj+31; pile[WZ2]=jvj+90; 
(*f[760])( );     /*MEMEX0(jvj+89,jvj+31,jvj+90)*/
if((x[jvj+90]==135)) goto l32;
x[jvj+105]=t[x[jvj+105]];
goto l30;
l32:x[jvj+91]=0 ;z[jvj+91]=0;
x[jvj+106]=x[jvj+29] ;z[jvj+106]=z[jvj+29];
l33:if((x[jvj+106]>0)) goto l34;
x[jvj+33]=x[jvj+91] ;z[jvj+33]=z[jvj+91];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[299])( );     /*COPEL0(jvj+33,jvj+34)*/
x[jvj+107]=x[jvj+30] ;z[jvj+107]=z[jvj+30];
l36:if((x[jvj+107]>0)) goto l37;
goto l14;
l34:x[jvj+92]=s[x[jvj+106]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+106];
if((x[jvj+92]==x[jvj+89])) goto l35;
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[68])( );     /*PLUE0(jvj+91,jvj+92)*/
l35:x[jvj+106]=t[x[jvj+106]];
goto l33;
l37:x[jvj+93]=s[x[jvj+107]] ;z[jvj+93]=(x[jvj+93]<=sepcte) ? x[jvj+93] : z[jvj+107];
pile[v[22]]=jvj+93; pile[WZ1]=jvj+31; pile[WZ2]=jvj+94; 
(*f[760])( );     /*MEMEX0(jvj+93,jvj+31,jvj+94)*/
if((x[jvj+94]==135)) goto l38;
x[jvj+107]=t[x[jvj+107]];
goto l36;
l38:x[jvj+95]=0 ;z[jvj+95]=0;
x[jvj+108]=x[jvj+30] ;z[jvj+108]=z[jvj+30];
l39:if((x[jvj+108]>0)) goto l40;
x[jvj+35]=x[jvj+95] ;z[jvj+35]=z[jvj+95];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[299])( );     /*COPEL0(jvj+35,jvj+36)*/
x[jvj+76]=x[jvj+34] ;z[jvj+76]=z[jvj+34];
x[jvj+102]=x[jvj+30] ;z[jvj+102]=z[jvj+30];
l15:if((x[jvj+102]<=0)) goto l14;
x[jvj+38]=s[x[jvj+102]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+102];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+38,jvj+39)*/
if((x[jvj+39]==135)) goto l16;
x[jvj+102]=t[x[jvj+102]];
goto l15;
l40:x[jvj+96]=s[x[jvj+108]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+108];
if((x[jvj+96]==x[jvj+93])) goto l41;
pile[v[22]]=jvj+95; pile[WZ1]=jvj+96; 
(*f[68])( );     /*PLUE0(jvj+95,jvj+96)*/
l41:x[jvj+108]=t[x[jvj+108]];
goto l39;
l43:x[jvj+97]=s[x[jvj+109]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+109];
pile[v[22]]=jvj+97; pile[WZ1]=jvj+85; pile[WZ2]=jvj+98; 
(*f[760])( );     /*MEMEX0(jvj+97,jvj+85,jvj+98)*/
if((x[jvj+98]==135)) goto l44;
x[jvj+109]=t[x[jvj+109]];
goto l42;
l44:x[jvj+99]=0 ;z[jvj+99]=0;
x[jvj+110]=x[jvj+60] ;z[jvj+110]=z[jvj+60];
l45:if((x[jvj+110]>0)) goto l46;
x[jvj+61]=x[jvj+99] ;z[jvj+61]=z[jvj+99];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[299])( );     /*COPEL0(jvj+61,jvj+62)*/
x[jvj+104]=x[jvj+60] ;z[jvj+104]=z[jvj+60];
l24:if((x[jvj+104]<=0)) goto l23;
x[jvj+64]=s[x[jvj+104]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+104];
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[760])( );     /*MEMEX0(jvj+63,jvj+64,jvj+65)*/
if((x[jvj+65]==135)) goto l25;
x[jvj+104]=t[x[jvj+104]];
goto l24;
l46:x[jvj+100]=s[x[jvj+110]] ;z[jvj+100]=(x[jvj+100]<=sepcte) ? x[jvj+100] : z[jvj+110];
if((x[jvj+100]==x[jvj+97])) goto l47;
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; 
(*f[68])( );     /*PLUE0(jvj+99,jvj+100)*/
l47:x[jvj+110]=t[x[jvj+110]];
goto l45;
}
