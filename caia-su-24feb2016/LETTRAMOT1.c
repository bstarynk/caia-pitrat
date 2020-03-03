#include "dx.h"
void LETTRAMOT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V8=0,LL=0,V9=0,V12=0,L=0,V13=0,V40=0,V10=0,V18=0,GG=0,V19=0,V22=0,NN=0,V43=0,MM=0,V23=0,V55=0,V24=0,V27=0,TT=0,V47=0,V46=0,Q=0,V28=0,V48=0,V29=0,V50=0,V30=0,V33=0,G=0,V54=0,V53=0,V52=0,U=0,V34=0,V35=0,V58=0,V36=0,V60=0,V37=0,B=0;
int P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=123;
x[jvj+1]=26083;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2327&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+19]=0 ;z[jvj+19]=0;
I=1;
l35:if((I<=P)) goto l1;
x[NNNE]=x[jvj+19] ;z[NNNE]=z[jvj+19];
l40:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=I; pile[WZ1]=(-612); 
(*f[3979])( );if(v[102]) goto l36;     /*LONGUEUR0(I,(-612),V8)*/
V8=pile[WZ2]; 
LL=1;
l2:if((LL>V8)) goto l36;
pile[v[22]]=LL; pile[WZ1]=I; pile[WZ2]=(-612); 
(*f[202])( );if(v[102]) goto l3;     /*FMATRICE0(LL,I,(-612),V9)*/
V9=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=V9; 
(*f[467])( );     /*PLUE4(jvj+2,V9)*/
l3:LL++;
goto l2;
l6:pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(117,jvj+3,V40)*/
V40=pile[WZ2]; 
V10=V40;
x[jvj+17]=incon;
if((V10==1)) goto l7;
if((V10==2)) goto l10;
if((V10==3)) goto l15;
if((V10==4)) goto l22;
x[jvj+17]=(-99999998);
l38:x[jvj+2]=t[x[jvj+2]];
l36:if((x[jvj+2]>0)) goto l37;
I++;
goto l35;
l7:x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l31;     /*LONGUEUR0(I,(-630),V18)*/
V18=pile[WZ2]; 
x[jvj+4]=d[76];z[jvj+4]=0;
GG=1;
l8:if((GG>V18)) goto l31;
pile[v[22]]=GG; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l9;     /*FTAB0(GG,I,(-630),V19)*/
V19=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+37)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+39,jvj+38,jvj+36)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+34; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[196])( );     /*PLUF0(jvj+4,jvj+5,jvj+6)*/
l9:GG++;
goto l8;
l10:x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l32;     /*LONGUEUR0(I,(-630),V22)*/
V22=pile[WZ2]; 
NN=V22;
V43=NN-1;
MM=1;
l11:if((MM>V43)) goto l32;
pile[v[22]]=MM; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l12;     /*FTAB0(MM,I,(-630),V23)*/
V23=pile[WZ3]; 
V55=MM+1;
l13:if((V55>NN)) goto l12;
pile[v[22]]=V55; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l14;     /*FTAB0(V55,I,(-630),V24)*/
V24=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+40)*/
pile[WZ3]=25; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+43)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V23; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,V23,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+47; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+50,jvj+49,jvj+47)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+45; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+47,jvj+46,jvj+41)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+51)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+56)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V24; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,V24,jvj+58)*/
pile[v[22]]=jvj+56; pile[WZ1]=111; pile[WZ2]=jvj+57; 
(*f[54])( );     /*TRI1(jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+58,jvj+57,jvj+55)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+53; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+55,jvj+54,jvj+42)*/
pile[WZ2]=111; pile[WZ3]=jvj+40; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+40,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+41)*/
pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+42)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
l14:V55++;
goto l13;
l12:MM++;
goto l11;
l15:x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l33;     /*LONGUEUR0(I,(-630),V27)*/
V27=pile[WZ2]; 
TT=V27;
V47=TT-1;
V46=V47-1;
Q=1;
l16:if((Q>V46)) goto l33;
pile[v[22]]=Q; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l17;     /*FTAB0(Q,I,(-630),V28)*/
V28=pile[WZ3]; 
V48=Q+1;
l18:if((V48>V47)) goto l17;
pile[v[22]]=V48; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l19;     /*FTAB0(V48,I,(-630),V29)*/
V29=pile[WZ3]; 
V50=V48+1;
l20:if((V50>TT)) goto l19;
pile[v[22]]=V50; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l21;     /*FTAB0(V50,I,(-630),V30)*/
V30=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+59)*/
pile[WZ3]=25; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+68)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V28; pile[WZ4]=jvj+70; 
(*f[192])( );     /*QUADRI4(100,41,130,V28,jvj+70)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+70,jvj+69,jvj+67)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+65; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+64,jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+66,jvj+60)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+71)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+76; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+76)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V29; pile[WZ4]=jvj+78; 
(*f[192])( );     /*QUADRI4(100,41,130,V29,jvj+78)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+78; pile[WZ4]=jvj+77; pile[WZ5]=jvj+75; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+78,jvj+77,jvj+75)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+73; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=103; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,103,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+61; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+75,jvj+74,jvj+61)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+79)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+84; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+84)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V30; pile[WZ4]=jvj+86; 
(*f[192])( );     /*QUADRI4(100,41,130,V30,jvj+86)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+86; pile[WZ4]=jvj+85; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+86,jvj+85,jvj+83)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+81; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+81)*/
pile[v[22]]=jvj+79; pile[WZ1]=111; pile[WZ2]=jvj+80; 
(*f[54])( );     /*TRI1(jvj+79,111,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; pile[WZ2]=103; pile[WZ3]=jvj+82; 
(*f[58])( );     /*TRI3(jvj+80,jvj+81,103,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+83; pile[WZ4]=jvj+82; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+83,jvj+82,jvj+62)*/
pile[WZ2]=111; pile[WZ3]=jvj+59; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+59,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+60)*/
pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+61)*/
pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+62)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
l21:V50++;
goto l20;
l17:Q++;
goto l16;
l19:V48++;
goto l18;
l22:x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l34;     /*LONGUEUR0(I,(-630),V33)*/
V33=pile[WZ2]; 
G=V33;
V54=G-1;
V53=V54-1;
V52=V53-1;
U=1;
l23:if((U>V52)) goto l34;
pile[v[22]]=U; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l24;     /*FTAB0(U,I,(-630),V34)*/
V34=pile[WZ3]; 
V55=U+1;
l25:if((V55>V53)) goto l24;
pile[v[22]]=V55; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l26;     /*FTAB0(V55,I,(-630),V35)*/
V35=pile[WZ3]; 
V58=V55+1;
l27:if((V58>V54)) goto l26;
pile[v[22]]=V58; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l28;     /*FTAB0(V58,I,(-630),V36)*/
V36=pile[WZ3]; 
V60=V58+1;
l29:if((V60>G)) goto l28;
pile[v[22]]=V60; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l30;     /*FTAB0(V60,I,(-630),V37)*/
V37=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+87)*/
pile[WZ3]=25; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+92)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+97; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+97)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V34; pile[WZ4]=jvj+99; 
(*f[192])( );     /*QUADRI4(100,41,130,V34,jvj+99)*/
pile[v[22]]=jvj+97; pile[WZ1]=111; pile[WZ2]=jvj+98; 
(*f[54])( );     /*TRI1(jvj+97,111,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+99; pile[WZ4]=jvj+98; pile[WZ5]=jvj+96; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+99,jvj+98,jvj+96)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+94; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+94)*/
pile[v[22]]=jvj+92; pile[WZ1]=111; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,111,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; pile[WZ2]=103; pile[WZ3]=jvj+95; 
(*f[58])( );     /*TRI3(jvj+93,jvj+94,103,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+96; pile[WZ4]=jvj+95; pile[WZ5]=jvj+88; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+96,jvj+95,jvj+88)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+100; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+100)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+105; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+105)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V35; pile[WZ4]=jvj+107; 
(*f[192])( );     /*QUADRI4(100,41,130,V35,jvj+107)*/
pile[v[22]]=jvj+105; pile[WZ1]=111; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,111,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+106; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+107,jvj+106,jvj+104)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+102; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+102)*/
pile[v[22]]=jvj+100; pile[WZ1]=111; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(jvj+100,111,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; pile[WZ2]=103; pile[WZ3]=jvj+103; 
(*f[58])( );     /*TRI3(jvj+101,jvj+102,103,jvj+103)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+104; pile[WZ4]=jvj+103; pile[WZ5]=jvj+89; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+104,jvj+103,jvj+89)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+108)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+113; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+113)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V36; pile[WZ4]=jvj+115; 
(*f[192])( );     /*QUADRI4(100,41,130,V36,jvj+115)*/
pile[v[22]]=jvj+113; pile[WZ1]=111; pile[WZ2]=jvj+114; 
(*f[54])( );     /*TRI1(jvj+113,111,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+115; pile[WZ4]=jvj+114; pile[WZ5]=jvj+112; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+115,jvj+114,jvj+112)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+110; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+110)*/
pile[v[22]]=jvj+108; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+110; pile[WZ2]=103; pile[WZ3]=jvj+111; 
(*f[58])( );     /*TRI3(jvj+109,jvj+110,103,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+112; pile[WZ4]=jvj+111; pile[WZ5]=jvj+90; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+112,jvj+111,jvj+90)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+116)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+121; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+121)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V37; pile[WZ4]=jvj+123; 
(*f[192])( );     /*QUADRI4(100,41,130,V37,jvj+123)*/
pile[v[22]]=jvj+121; pile[WZ1]=111; pile[WZ2]=jvj+122; 
(*f[54])( );     /*TRI1(jvj+121,111,jvj+122)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+123; pile[WZ4]=jvj+122; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+123,jvj+122,jvj+120)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+118; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+118)*/
pile[v[22]]=jvj+116; pile[WZ1]=111; pile[WZ2]=jvj+117; 
(*f[54])( );     /*TRI1(jvj+116,111,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=jvj+118; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+117,jvj+118,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+120; pile[WZ4]=jvj+119; pile[WZ5]=jvj+91; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+120,jvj+119,jvj+91)*/
pile[WZ2]=111; pile[WZ3]=jvj+87; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+87,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+88; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+88)*/
pile[WZ2]=jvj+89; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+89)*/
pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+90)*/
pile[WZ2]=jvj+91; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+91)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
l30:V60++;
goto l29;
l24:U++;
goto l23;
l26:V55++;
goto l25;
l28:V58++;
goto l27;
l31:pile[v[22]]=jvj+6; pile[WZ1]=jvj+13; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1029; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,1029,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+22; 
(*f[301])( );     /*TRI11(jvj+21,jvj+13,107,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+22,22,100,jvj+17)*/
l39:if((x[jvj+17]==(-99999998))) goto l38;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=jvj+19; 
(*f[522])( );     /*PLUB2(jvj+19,jvj+18)*/
goto l38;
l32:pile[v[22]]=jvj+7; pile[WZ1]=jvj+14; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1029; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,1029,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+14; pile[WZ2]=107; pile[WZ3]=jvj+25; 
(*f[301])( );     /*TRI11(jvj+24,jvj+14,107,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+25,22,100,jvj+17)*/
goto l39;
l33:pile[v[22]]=jvj+9; pile[WZ1]=jvj+15; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1029; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,1029,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+15; pile[WZ2]=107; pile[WZ3]=jvj+28; 
(*f[301])( );     /*TRI11(jvj+27,jvj+15,107,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+28,22,100,jvj+17)*/
goto l39;
l34:pile[v[22]]=jvj+11; pile[WZ1]=jvj+16; 
(*f[299])( );     /*COPEL0(jvj+11,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1029; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,1029,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+16; pile[WZ2]=107; pile[WZ3]=jvj+31; 
(*f[301])( );     /*TRI11(jvj+30,jvj+16,107,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+31,22,100,jvj+17)*/
goto l39;
l37:B=s[x[jvj+2]];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
pile[v[22]]=I; pile[WZ1]=(-612); 
(*f[3979])( );if(v[102]) goto l6;     /*LONGUEUR0(I,(-612),V12)*/
V12=pile[WZ2]; 
L=1;
l4:if((L>V12)) goto l6;
pile[v[22]]=L; pile[WZ1]=I; pile[WZ2]=(-612); 
(*f[202])( );if(v[102]) goto l5;     /*FMATRICE0(L,I,(-612),V13)*/
V13=pile[WZ3]; 
if((B!=V13)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
l5:L++;
goto l4;
}
