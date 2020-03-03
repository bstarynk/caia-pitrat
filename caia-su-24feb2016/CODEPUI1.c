#include "dx.h"
void CODEPUI1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V65=0,V71=0,V123=0,V129=0,V59=0,V55=0,V105=0,V101=0,V76=0,V117=0,V113=0;
int R,P;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=199;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; P=pile[v[22]+1]; RR=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+32]=x[R] ;z[jvj+32]=z[R];
l12:pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]==596)) goto l13;
if((x[jvj+34]==485)) goto l14;
if((x[jvj+34]!=486)) goto l38;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+41)*/
x[jvj+170]=x[jvj+41] ;z[jvj+170]=z[jvj+41];
l15:if((x[jvj+170]>0)) goto l16;
x[jvj+171]=x[jvj+41] ;z[jvj+171]=z[jvj+41];
l19:if((x[jvj+171]>0)) goto l20;
x[jvj+173]=x[jvj+41] ;z[jvj+173]=z[jvj+41];
l27:if((x[jvj+173]>0)) goto l28;
x[jvj+175]=x[jvj+41] ;z[jvj+175]=z[jvj+41];
l33:if((x[jvj+175]<=0)) goto l38;
x[jvj+73]=s[x[jvj+175]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+175];
pile[v[22]]=111; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+73,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+74,jvj+75)*/
if((x[jvj+75]!=1356)) goto l34;
pile[v[22]]=160; pile[WZ1]=jvj+73; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(160,jvj+73,jvj+76)*/
pile[v[22]]=130; pile[WZ1]=jvj+76; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+76,V105)*/
V105=pile[WZ2]; 
if((P!=V105)) goto l34;
pile[v[22]]=103; pile[WZ1]=jvj+73; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(103,jvj+73,jvj+77)*/
pile[v[22]]=130; pile[WZ1]=jvj+77; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+77,V101)*/
V101=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+73; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+73,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+78,jvj+79)*/
if((x[jvj+79]!=484)) goto l34;
x[jvj+156]=x[jvj+73] ;z[jvj+156]=z[jvj+73];
V76=V101;
x[jvj+80]=x[jvj+78] ;z[jvj+80]=z[jvj+78];
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; 
(*f[255])( );     /*COPEXP0(jvj+80,jvj+81)*/
x[jvj+176]=x[jvj+41] ;z[jvj+176]=z[jvj+41];
l35:if((x[jvj+176]<=0)) goto l34;
x[jvj+82]=s[x[jvj+176]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+176];
if((x[jvj+73]==x[jvj+82])) goto l36;
pile[v[22]]=111; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+82,jvj+83)*/
pile[v[22]]=101; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+83,jvj+84)*/
if((x[jvj+84]!=1356)) goto l36;
pile[v[22]]=160; pile[WZ1]=jvj+82; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(160,jvj+82,jvj+85)*/
pile[v[22]]=130; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+85,V117)*/
V117=pile[WZ2]; 
if((P!=V117)) goto l36;
pile[v[22]]=103; pile[WZ1]=jvj+82; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+82,jvj+86)*/
pile[v[22]]=130; pile[WZ1]=jvj+86; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(130,jvj+86,V113)*/
V113=pile[WZ2]; 
x[jvj+151]=x[jvj+82] ;z[jvj+151]=z[jvj+82];
pile[v[22]]=102; pile[WZ1]=jvj+82; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+82,jvj+87)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[760])( );     /*MEMEX0(jvj+78,jvj+87,jvj+88)*/
if((x[jvj+88]==135)) goto l7;
l36:x[jvj+176]=t[x[jvj+176]];
goto l35;
l1:x[jvj+55]=x[jvj+1] ;z[jvj+55]=z[jvj+1];
l23:pile[v[22]]=jvj+55; pile[WZ1]=P; pile[WZ2]=jvj+56; 
(*f[1662])( );     /*CODEPUI1(jvj+55,P,jvj+56)*/
x[jvj+172]=x[jvj+41] ;z[jvj+172]=z[jvj+41];
l24:if((x[jvj+172]<=0)) goto l21;
x[jvj+58]=s[x[jvj+172]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+172];
if((x[jvj+50]==x[jvj+58])) goto l25;
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[760])( );     /*MEMEX0(jvj+57,jvj+58,jvj+59)*/
if((x[jvj+59]==135)) goto l26;
l25:x[jvj+172]=t[x[jvj+172]];
goto l24;
l3:x[jvj+177]=x[jvj+9] ;z[jvj+177]=z[jvj+9];
l40:x[jvj+32]=x[jvj+177] ;z[jvj+32]=z[jvj+177];
goto l12;
l4:x[jvj+15]=0 ;z[jvj+15]=0;
V71=V55+1;
x[jvj+13]=d[119];z[jvj+13]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+118)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V71; pile[WZ4]=jvj+120; 
(*f[192])( );     /*QUADRI4(100,41,130,V71,jvj+120)*/
pile[WZ3]=P; pile[WZ4]=jvj+116; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+116)*/
pile[v[22]]=jvj+116; pile[WZ1]=160; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,160,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=111; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,111,jvj+119)*/
pile[v[22]]=jvj+119; pile[WZ1]=jvj+120; pile[WZ2]=103; pile[WZ3]=jvj+121; 
(*f[58])( );     /*TRI3(jvj+119,jvj+120,103,jvj+121)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+121; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+121,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[196])( );     /*PLUF0(jvj+13,jvj+14,jvj+15)*/
x[jvj+183]=x[jvj+41] ;z[jvj+183]=z[jvj+41];
l54:if((x[jvj+183]>0)) goto l55;
l32:pile[v[22]]=jvj+15; pile[WZ1]=jvj+72; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=111; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(jvj+104,111,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=jvj+72; pile[WZ2]=107; pile[WZ3]=jvj+106; 
(*f[301])( );     /*TRI11(jvj+105,jvj+72,107,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+106,22,100,jvj+9)*/
x[jvj+177]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=486)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
for(i=x[jvj+12],V65=0;i>0;i=t[i],V65++)  ;
if((V65!=1)) goto l3;
if((x[jvj+12]<=0)) goto l3;
x[jvj+195]=s[x[jvj+12]] ;z[jvj+195]=(x[jvj+195]<=sepcte) ? x[jvj+195] : z[jvj+12];
x[jvj+177]=x[jvj+195] ;z[jvj+177]=z[jvj+195];
goto l40;
l6:x[jvj+178]=x[jvj+17] ;z[jvj+178]=z[jvj+17];
l41:x[jvj+32]=x[jvj+178] ;z[jvj+32]=z[jvj+178];
goto l12;
l7:x[jvj+23]=0 ;z[jvj+23]=0;
V129=V76+V113;
x[jvj+21]=d[119];z[jvj+21]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+124; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+124)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V129; pile[WZ4]=jvj+126; 
(*f[192])( );     /*QUADRI4(100,41,130,V129,jvj+126)*/
pile[WZ3]=P; pile[WZ4]=jvj+122; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=160; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,160,jvj+123)*/
pile[v[22]]=jvj+123; pile[WZ1]=jvj+124; pile[WZ2]=111; pile[WZ3]=jvj+125; 
(*f[58])( );     /*TRI3(jvj+123,jvj+124,111,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=jvj+126; pile[WZ2]=103; pile[WZ3]=jvj+127; 
(*f[58])( );     /*TRI3(jvj+125,jvj+126,103,jvj+127)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+81; pile[WZ4]=jvj+127; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+81,jvj+127,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[196])( );     /*PLUF0(jvj+21,jvj+22,jvj+23)*/
x[jvj+187]=x[jvj+41] ;z[jvj+187]=z[jvj+41];
l66:if((x[jvj+187]>0)) goto l67;
l37:pile[v[22]]=jvj+23; pile[WZ1]=jvj+89; 
(*f[299])( );     /*COPEL0(jvj+23,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+89; pile[WZ2]=107; pile[WZ3]=jvj+109; 
(*f[301])( );     /*TRI11(jvj+108,jvj+89,107,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+109,22,100,jvj+17)*/
x[jvj+178]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=486)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+20)*/
for(i=x[jvj+20],V123=0;i>0;i=t[i],V123++)  ;
if((V123!=1)) goto l6;
if((x[jvj+20]<=0)) goto l6;
x[jvj+196]=s[x[jvj+20]] ;z[jvj+196]=(x[jvj+196]<=sepcte) ? x[jvj+196] : z[jvj+20];
x[jvj+178]=x[jvj+196] ;z[jvj+178]=z[jvj+196];
goto l41;
l10:x[jvj+25]=s[x[jvj+39]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+39];
pile[v[22]]=jvj+25; pile[WZ1]=P; pile[WZ2]=jvj+26; 
(*f[1662])( );     /*CODEPUI1(jvj+25,P,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+27,jvj+26)*/
x[jvj+39]=t[x[jvj+39]];
l9:if((x[jvj+39]>0)) goto l10;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+40; 
(*f[299])( );     /*COPEL0(jvj+27,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=111; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(jvj+95,111,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=jvj+40; pile[WZ2]=107; pile[WZ3]=jvj+97; 
(*f[301])( );     /*TRI11(jvj+96,jvj+40,107,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RR; 
(*f[58])( );     /*TRI3(jvj+97,22,100,RR)*/
l39:v[0]=jvj; v[22]-=3; return;
l13:pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+32,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+35,jvj+36)*/
pile[v[22]]=103; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+32,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+92)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+90; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=160; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(jvj+90,160,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; pile[WZ2]=111; pile[WZ3]=jvj+93; 
(*f[58])( );     /*TRI3(jvj+91,jvj+92,111,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+93,jvj+38,103,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+94; pile[WZ5]=RR; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+94,RR)*/
goto l39;
l14:pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+39)*/
x[jvj+27]=0 ;z[jvj+27]=0;
goto l9;
l16:x[jvj+42]=s[x[jvj+170]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+170];
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+42,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+44]!=596)) goto l17;
x[jvj+161]=x[jvj+42] ;z[jvj+161]=z[jvj+42];
pile[v[22]]=102; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+42,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[255])( );     /*COPEXP0(jvj+45,jvj+46)*/
pile[v[22]]=103; pile[WZ1]=jvj+42; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+42,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+48)*/
x[jvj+30]=0 ;z[jvj+30]=0;
x[jvj+28]=d[119];z[jvj+28]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+130; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+130)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+128; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+128)*/
pile[v[22]]=jvj+128; pile[WZ1]=160; pile[WZ2]=jvj+129; 
(*f[54])( );     /*TRI1(jvj+128,160,jvj+129)*/
pile[v[22]]=jvj+129; pile[WZ1]=jvj+130; pile[WZ2]=111; pile[WZ3]=jvj+131; 
(*f[58])( );     /*TRI3(jvj+129,jvj+130,111,jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+132; 
(*f[58])( );     /*TRI3(jvj+131,jvj+48,103,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+132; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+46,jvj+132,jvj+29)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[196])( );     /*PLUF0(jvj+28,jvj+29,jvj+30)*/
x[jvj+191]=x[jvj+41] ;z[jvj+191]=z[jvj+41];
l78:if((x[jvj+191]>0)) goto l79;
l18:pile[v[22]]=jvj+30; pile[WZ1]=jvj+49; 
(*f[299])( );     /*COPEL0(jvj+30,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=111; pile[WZ2]=jvj+99; 
(*f[54])( );     /*TRI1(jvj+98,111,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+49; pile[WZ2]=107; pile[WZ3]=jvj+100; 
(*f[301])( );     /*TRI11(jvj+99,jvj+49,107,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=RR; 
(*f[58])( );     /*TRI3(jvj+100,22,100,RR)*/
goto l39;
l17:x[jvj+170]=t[x[jvj+170]];
goto l15;
l20:x[jvj+50]=s[x[jvj+171]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+171];
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=484)) goto l21;
x[jvj+57]=x[jvj+50] ;z[jvj+57]=z[jvj+50];
x[jvj+52]=x[jvj+57] ;z[jvj+52]=z[jvj+57];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[255])( );     /*COPEXP0(jvj+52,jvj+53)*/
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+5]=d[119];z[jvj+5]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1356; pile[WZ4]=jvj+112; 
(*f[181])( );     /*QUADRI2(100,20,101,1356,jvj+112)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+114; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+114)*/
pile[WZ3]=P; pile[WZ4]=jvj+110; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+110)*/
pile[v[22]]=jvj+110; pile[WZ1]=160; pile[WZ2]=jvj+111; 
(*f[54])( );     /*TRI1(jvj+110,160,jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=jvj+112; pile[WZ2]=111; pile[WZ3]=jvj+113; 
(*f[58])( );     /*TRI3(jvj+111,jvj+112,111,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+114; pile[WZ2]=103; pile[WZ3]=jvj+115; 
(*f[58])( );     /*TRI3(jvj+113,jvj+114,103,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+115; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+115,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+6,jvj+7)*/
x[jvj+179]=x[jvj+41] ;z[jvj+179]=z[jvj+41];
l42:if((x[jvj+179]>0)) goto l43;
l22:pile[v[22]]=jvj+7; pile[WZ1]=jvj+54; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,111,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+54; pile[WZ2]=107; pile[WZ3]=jvj+103; 
(*f[301])( );     /*TRI11(jvj+102,jvj+54,107,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+1; 
(*f[58])( );     /*TRI3(jvj+103,22,100,jvj+1)*/
x[jvj+55]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=486)) goto l1;
pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+4)*/
for(i=x[jvj+4],V22=0;i>0;i=t[i],V22++)  ;
if((V22!=1)) goto l1;
x[jvj+193]=x[jvj+4] ;z[jvj+193]=z[jvj+4];
if((x[jvj+193]<=0)) goto l1;
x[jvj+165]=s[x[jvj+193]] ;z[jvj+165]=(x[jvj+165]<=sepcte) ? x[jvj+165] : z[jvj+193];
x[jvj+55]=x[jvj+165] ;z[jvj+55]=z[jvj+165];
goto l23;
l21:x[jvj+171]=t[x[jvj+171]];
goto l19;
l26:x[RR]=x[jvj+56] ;z[RR]=z[jvj+56];
goto l39;
l28:x[jvj+60]=s[x[jvj+173]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+173];
pile[v[22]]=100; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+60,jvj+61)*/
if((x[jvj+61]!=484)) goto l29;
x[jvj+70]=x[jvj+60] ;z[jvj+70]=z[jvj+60];
x[jvj+62]=x[jvj+70] ;z[jvj+62]=z[jvj+70];
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
x[jvj+174]=x[jvj+41] ;z[jvj+174]=z[jvj+41];
l30:if((x[jvj+174]<=0)) goto l29;
x[jvj+64]=s[x[jvj+174]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+174];
if((x[jvj+60]==x[jvj+64])) goto l31;
pile[v[22]]=111; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+64,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]!=1356)) goto l31;
pile[v[22]]=160; pile[WZ1]=jvj+64; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(160,jvj+64,jvj+67)*/
pile[v[22]]=130; pile[WZ1]=jvj+67; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+67,V59)*/
V59=pile[WZ2]; 
if((P!=V59)) goto l31;
pile[v[22]]=103; pile[WZ1]=jvj+64; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(103,jvj+64,jvj+68)*/
pile[v[22]]=130; pile[WZ1]=jvj+68; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+68,V55)*/
V55=pile[WZ2]; 
x[jvj+146]=x[jvj+64] ;z[jvj+146]=z[jvj+64];
pile[v[22]]=102; pile[WZ1]=jvj+64; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+64,jvj+69)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+69; pile[WZ2]=jvj+71; 
(*f[760])( );     /*MEMEX0(jvj+70,jvj+69,jvj+71)*/
if((x[jvj+71]==135)) goto l4;
l31:x[jvj+174]=t[x[jvj+174]];
goto l30;
l29:x[jvj+173]=t[x[jvj+173]];
goto l27;
l34:x[jvj+175]=t[x[jvj+175]];
goto l33;
l38:x[RR]=x[jvj+32] ;z[RR]=z[jvj+32];
goto l39;
l43:x[jvj+133]=s[x[jvj+179]] ;z[jvj+133]=(x[jvj+133]<=sepcte) ? x[jvj+133] : z[jvj+179];
pile[v[22]]=jvj+133; pile[WZ1]=jvj+52; pile[WZ2]=jvj+134; 
(*f[760])( );     /*MEMEX0(jvj+133,jvj+52,jvj+134)*/
if((x[jvj+134]==135)) goto l44;
x[jvj+179]=t[x[jvj+179]];
goto l42;
l44:x[jvj+135]=0 ;z[jvj+135]=0;
x[jvj+180]=x[jvj+41] ;z[jvj+180]=z[jvj+41];
l45:if((x[jvj+180]>0)) goto l46;
x[jvj+197]=x[jvj+135] ;z[jvj+197]=z[jvj+135];
x[jvj+181]=x[jvj+197] ;z[jvj+181]=z[jvj+197];
l48:if((x[jvj+181]>0)) goto l49;
goto l22;
l46:x[jvj+136]=s[x[jvj+180]] ;z[jvj+136]=(x[jvj+136]<=sepcte) ? x[jvj+136] : z[jvj+180];
if((x[jvj+136]==x[jvj+133])) goto l47;
pile[v[22]]=jvj+135; pile[WZ1]=jvj+136; 
(*f[68])( );     /*PLUE0(jvj+135,jvj+136)*/
l47:x[jvj+180]=t[x[jvj+180]];
goto l45;
l49:x[jvj+137]=s[x[jvj+181]] ;z[jvj+137]=(x[jvj+137]<=sepcte) ? x[jvj+137] : z[jvj+181];
pile[v[22]]=jvj+137; pile[WZ1]=jvj+52; pile[WZ2]=jvj+138; 
(*f[760])( );     /*MEMEX0(jvj+137,jvj+52,jvj+138)*/
if((x[jvj+138]==135)) goto l50;
x[jvj+181]=t[x[jvj+181]];
goto l48;
l50:x[jvj+139]=0 ;z[jvj+139]=0;
x[jvj+182]=x[jvj+197] ;z[jvj+182]=z[jvj+197];
l51:if((x[jvj+182]>0)) goto l52;
x[jvj+194]=x[jvj+139] ;z[jvj+194]=z[jvj+139];
x[jvj+166]=x[jvj+194] ;z[jvj+166]=z[jvj+194];
l2:if((x[jvj+166]<=0)) goto l22;
x[jvj+8]=s[x[jvj+166]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+166];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
x[jvj+166]=t[x[jvj+166]];
goto l2;
l52:x[jvj+140]=s[x[jvj+182]] ;z[jvj+140]=(x[jvj+140]<=sepcte) ? x[jvj+140] : z[jvj+182];
if((x[jvj+140]==x[jvj+137])) goto l53;
pile[v[22]]=jvj+139; pile[WZ1]=jvj+140; 
(*f[68])( );     /*PLUE0(jvj+139,jvj+140)*/
l53:x[jvj+182]=t[x[jvj+182]];
goto l51;
l55:x[jvj+141]=s[x[jvj+183]] ;z[jvj+141]=(x[jvj+141]<=sepcte) ? x[jvj+141] : z[jvj+183];
pile[v[22]]=jvj+141; pile[WZ1]=jvj+62; pile[WZ2]=jvj+142; 
(*f[760])( );     /*MEMEX0(jvj+141,jvj+62,jvj+142)*/
if((x[jvj+142]==135)) goto l56;
x[jvj+183]=t[x[jvj+183]];
goto l54;
l56:x[jvj+143]=0 ;z[jvj+143]=0;
x[jvj+184]=x[jvj+41] ;z[jvj+184]=z[jvj+41];
l57:if((x[jvj+184]>0)) goto l58;
x[jvj+198]=x[jvj+143] ;z[jvj+198]=z[jvj+143];
x[jvj+185]=x[jvj+198] ;z[jvj+185]=z[jvj+198];
l60:if((x[jvj+185]>0)) goto l61;
goto l32;
l58:x[jvj+144]=s[x[jvj+184]] ;z[jvj+144]=(x[jvj+144]<=sepcte) ? x[jvj+144] : z[jvj+184];
if((x[jvj+144]==x[jvj+141])) goto l59;
pile[v[22]]=jvj+143; pile[WZ1]=jvj+144; 
(*f[68])( );     /*PLUE0(jvj+143,jvj+144)*/
l59:x[jvj+184]=t[x[jvj+184]];
goto l57;
l61:x[jvj+145]=s[x[jvj+185]] ;z[jvj+145]=(x[jvj+145]<=sepcte) ? x[jvj+145] : z[jvj+185];
pile[v[22]]=jvj+145; pile[WZ1]=jvj+146; pile[WZ2]=jvj+147; 
(*f[760])( );     /*MEMEX0(jvj+145,jvj+146,jvj+147)*/
if((x[jvj+147]==135)) goto l62;
x[jvj+185]=t[x[jvj+185]];
goto l60;
l62:x[jvj+148]=0 ;z[jvj+148]=0;
x[jvj+186]=x[jvj+198] ;z[jvj+186]=z[jvj+198];
l63:if((x[jvj+186]>0)) goto l64;
x[jvj+167]=x[jvj+148] ;z[jvj+167]=z[jvj+148];
l5:if((x[jvj+167]<=0)) goto l32;
x[jvj+16]=s[x[jvj+167]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+167];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
x[jvj+167]=t[x[jvj+167]];
goto l5;
l64:x[jvj+149]=s[x[jvj+186]] ;z[jvj+149]=(x[jvj+149]<=sepcte) ? x[jvj+149] : z[jvj+186];
if((x[jvj+149]==x[jvj+145])) goto l65;
pile[v[22]]=jvj+148; pile[WZ1]=jvj+149; 
(*f[68])( );     /*PLUE0(jvj+148,jvj+149)*/
l65:x[jvj+186]=t[x[jvj+186]];
goto l63;
l67:x[jvj+150]=s[x[jvj+187]] ;z[jvj+150]=(x[jvj+150]<=sepcte) ? x[jvj+150] : z[jvj+187];
pile[v[22]]=jvj+150; pile[WZ1]=jvj+151; pile[WZ2]=jvj+152; 
(*f[760])( );     /*MEMEX0(jvj+150,jvj+151,jvj+152)*/
if((x[jvj+152]==135)) goto l68;
x[jvj+187]=t[x[jvj+187]];
goto l66;
l68:x[jvj+153]=0 ;z[jvj+153]=0;
x[jvj+188]=x[jvj+41] ;z[jvj+188]=z[jvj+41];
l69:if((x[jvj+188]>0)) goto l70;
x[jvj+199]=x[jvj+153] ;z[jvj+199]=z[jvj+153];
x[jvj+189]=x[jvj+199] ;z[jvj+189]=z[jvj+199];
l72:if((x[jvj+189]>0)) goto l73;
goto l37;
l70:x[jvj+154]=s[x[jvj+188]] ;z[jvj+154]=(x[jvj+154]<=sepcte) ? x[jvj+154] : z[jvj+188];
if((x[jvj+154]==x[jvj+150])) goto l71;
pile[v[22]]=jvj+153; pile[WZ1]=jvj+154; 
(*f[68])( );     /*PLUE0(jvj+153,jvj+154)*/
l71:x[jvj+188]=t[x[jvj+188]];
goto l69;
l73:x[jvj+155]=s[x[jvj+189]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+189];
pile[v[22]]=jvj+155; pile[WZ1]=jvj+156; pile[WZ2]=jvj+157; 
(*f[760])( );     /*MEMEX0(jvj+155,jvj+156,jvj+157)*/
if((x[jvj+157]==135)) goto l74;
x[jvj+189]=t[x[jvj+189]];
goto l72;
l74:x[jvj+158]=0 ;z[jvj+158]=0;
x[jvj+190]=x[jvj+199] ;z[jvj+190]=z[jvj+199];
l75:if((x[jvj+190]>0)) goto l76;
x[jvj+168]=x[jvj+158] ;z[jvj+168]=z[jvj+158];
l8:if((x[jvj+168]<=0)) goto l37;
x[jvj+24]=s[x[jvj+168]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+168];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[68])( );     /*PLUE0(jvj+23,jvj+24)*/
x[jvj+168]=t[x[jvj+168]];
goto l8;
l76:x[jvj+159]=s[x[jvj+190]] ;z[jvj+159]=(x[jvj+159]<=sepcte) ? x[jvj+159] : z[jvj+190];
if((x[jvj+159]==x[jvj+155])) goto l77;
pile[v[22]]=jvj+158; pile[WZ1]=jvj+159; 
(*f[68])( );     /*PLUE0(jvj+158,jvj+159)*/
l77:x[jvj+190]=t[x[jvj+190]];
goto l75;
l79:x[jvj+160]=s[x[jvj+191]] ;z[jvj+160]=(x[jvj+160]<=sepcte) ? x[jvj+160] : z[jvj+191];
pile[v[22]]=jvj+160; pile[WZ1]=jvj+161; pile[WZ2]=jvj+162; 
(*f[760])( );     /*MEMEX0(jvj+160,jvj+161,jvj+162)*/
if((x[jvj+162]==135)) goto l80;
x[jvj+191]=t[x[jvj+191]];
goto l78;
l80:x[jvj+163]=0 ;z[jvj+163]=0;
x[jvj+192]=x[jvj+41] ;z[jvj+192]=z[jvj+41];
l81:if((x[jvj+192]>0)) goto l82;
x[jvj+169]=x[jvj+163] ;z[jvj+169]=z[jvj+163];
l11:if((x[jvj+169]<=0)) goto l18;
x[jvj+31]=s[x[jvj+169]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+169];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+30,jvj+31)*/
x[jvj+169]=t[x[jvj+169]];
goto l11;
l82:x[jvj+164]=s[x[jvj+192]] ;z[jvj+164]=(x[jvj+164]<=sepcte) ? x[jvj+164] : z[jvj+192];
if((x[jvj+164]==x[jvj+160])) goto l83;
pile[v[22]]=jvj+163; pile[WZ1]=jvj+164; 
(*f[68])( );     /*PLUE0(jvj+163,jvj+164)*/
l83:x[jvj+192]=t[x[jvj+192]];
goto l81;
}
