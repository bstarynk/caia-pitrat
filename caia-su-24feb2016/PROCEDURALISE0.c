#include "dx.h"
void PROCEDURALISE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V211=0,V222=0,I=0,V220=0,V224=0,V197=0,V239=0,V259=0,V261=0,V285=0,V169=0,V193=0,V165=0,W=0,V68=0;
int N;
int E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=243;
x[jvj+1]=11888;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==939&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+242]=0 ;z[jvj+242]=0;
x[E]=x[jvj+242] ;z[E]=z[jvj+242];
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(1688,N,jvj+34)*/
l9:if((x[jvj+34]>0)) goto l10;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(1689,N,jvj+57)*/
l15:if((x[jvj+57]>0)) goto l16;
l33:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+240]=t[x[jvj+240]];
l1:if((x[jvj+240]<=0)) goto l29;
x[jvj+3]=s[x[jvj+240]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+240];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l2;
x[jvj+6]=d[20];z[jvj+6]=0;
l3:if((x[jvj+6]<=0)) goto l2;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+7,jvj+3,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=74)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+8,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=43)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+11,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+131]!=x[jvj+14])) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+11,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+16,jvj+15,jvj+17)*/
if((x[jvj+17]==135)) goto l27;
l4:x[jvj+6]=t[x[jvj+6]];
goto l3;
l6:x[jvj+241]=t[x[jvj+241]];
l5:if((x[jvj+241]<=0)) goto l25;
x[jvj+19]=s[x[jvj+241]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+241];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=25)) goto l6;
x[jvj+22]=d[20];z[jvj+22]=0;
l7:if((x[jvj+22]<=0)) goto l6;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+19; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+23,jvj+19,jvj+24)*/
pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]!=74)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+24,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=43)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+27,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+131]!=x[jvj+30])) goto l8;
pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+27,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+31; pile[WZ2]=jvj+33; 
(*f[760])( );     /*MEMEX0(jvj+32,jvj+31,jvj+33)*/
if((x[jvj+33]==135)) goto l31;
l8:x[jvj+22]=t[x[jvj+22]];
goto l7;
l10:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=jvj+35; pile[WZ1]=1688; pile[WZ2]=N; pile[WZ3]=N; 
(*f[1240])( );     /*PROCEDURALISZ0(jvj+35,1688,N,N)*/
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]==1604)) goto l12;
if((x[jvj+37]!=1607)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+35,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+51,jvj+52)*/
if((x[jvj+52]!=22)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+51,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+53,jvj+54)*/
V224=x[jvj+54];
if(V224!=871&&V224!=1633) goto l11;
pile[v[22]]=(-7141); pile[WZ1]=110; pile[WZ2]=jvj+55; 
(*f[329])( );     /*TRI13((-7141),110,jvj+55)*/
pile[v[22]]=1668; pile[WZ1]=447; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(1668,447,jvj+56)*/
pile[v[22]]=jvj+55; pile[WZ1]=763; 
(*f[36])( );     /*PLUSC0(jvj+55,763,jvj+56)*/
pile[v[22]]=E; pile[WZ1]=jvj+55; 
(*f[68])( );     /*PLUE0(E,jvj+55)*/
l11:x[jvj+34]=t[x[jvj+34]];
goto l9;
l12:pile[v[22]]=102; pile[WZ1]=jvj+35; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+35,jvj+38)*/
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+38,V211)*/
V211=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+35; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+35,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=1704)) goto l11;
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1689,N,jvj+41)*/
V222=x[jvj+35];
I=V211;
x[jvj+243]=x[jvj+41] ;z[jvj+243]=z[jvj+41];
l13:if((x[jvj+243]<=0)) goto l11;
x[jvj+42]=s[x[jvj+243]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+243];
pile[v[22]]=111; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+42,jvj+43)*/
pile[v[22]]=101; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+43,jvj+44)*/
if((x[jvj+44]!=625)) goto l14;
pile[v[22]]=160; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(160,jvj+42,jvj+45)*/
pile[v[22]]=140; pile[WZ1]=jvj+45; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+45,V220)*/
V220=pile[WZ2]; 
if((I!=V220)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+42; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+42,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[255])( );     /*COPEXP0(jvj+46,jvj+47)*/
pile[v[22]]=103; pile[WZ1]=jvj+42; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+42,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[255])( );     /*COPEXP0(jvj+48,jvj+49)*/
x[jvj+150]=x[jvj+47] ;z[jvj+150]=z[jvj+47];
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=V222; 
(*f[134])( );     /*OTA0(1688,N,V222)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+142; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+142)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=I; pile[WZ4]=jvj+146; 
(*f[270])( );     /*QUADRI7(100,21,140,I,jvj+146)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1429; pile[WZ4]=jvj+147; 
(*f[181])( );     /*QUADRI2(100,20,101,1429,jvj+147)*/
pile[v[22]]=jvj+147; pile[WZ1]=111; pile[WZ2]=jvj+148; 
(*f[54])( );     /*TRI1(jvj+147,111,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+149; 
(*f[58])( );     /*TRI3(jvj+148,jvj+49,103,jvj+149)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+150; pile[WZ4]=jvj+149; pile[WZ5]=jvj+144; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+150,jvj+149,jvj+144)*/
pile[v[22]]=jvj+142; pile[WZ1]=111; pile[WZ2]=jvj+143; 
(*f[54])( );     /*TRI1(jvj+142,111,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=jvj+144; pile[WZ2]=103; pile[WZ3]=jvj+145; 
(*f[58])( );     /*TRI3(jvj+143,jvj+144,103,jvj+145)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+146; pile[WZ4]=jvj+145; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+146,jvj+145,jvj+50)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+50)*/
l14:x[jvj+243]=t[x[jvj+243]];
goto l13;
l16:x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=jvj+58; pile[WZ1]=1689; pile[WZ2]=N; pile[WZ3]=N; pile[WZ4]=jvj+59; 
(*f[1241])( );if(v[102]) goto l19;     /*PROCEDURALITHEN0(jvj+58,1689,N,N,jvj+59)*/
if((x[jvj+59]==68)) goto l18;
l19:pile[v[22]]=111; pile[WZ1]=jvj+58; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+58,jvj+60)*/
pile[v[22]]=101; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+60,jvj+61)*/
if((x[jvj+61]==1861)) goto l20;
if((x[jvj+61]!=1634)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+58,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+72,jvj+73)*/
if((x[jvj+73]!=43)) goto l21;
pile[v[22]]=102; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,jvj+72,jvj+74)*/
pile[v[22]]=101; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+74,jvj+75)*/
pile[v[22]]=N; 
(*f[1239])( );if(v[102]) goto l21;     /*NOUVAR0(N,V261)*/
V261=pile[WZ1]; 
pile[v[22]]=jvj+72; pile[WZ1]=jvj+76; 
(*f[255])( );     /*COPEXP0(jvj+72,jvj+76)*/
V285=x[jvj+58];
pile[v[22]]=103; pile[WZ1]=jvj+72; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+72,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; 
(*f[255])( );     /*COPEXP0(jvj+77,jvj+78)*/
pile[v[22]]=103; pile[WZ1]=jvj+58; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,jvj+58,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[255])( );     /*COPEXP0(jvj+79,jvj+80)*/
x[jvj+172]=x[jvj+75] ;z[jvj+172]=z[jvj+75];
x[jvj+175]=x[jvj+76] ;z[jvj+175]=z[jvj+76];
x[jvj+169]=x[jvj+78] ;z[jvj+169]=z[jvj+78];
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=V285; 
(*f[134])( );     /*OTA0(1689,N,V285)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+172; pile[WZ4]=jvj+171; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+172,jvj+171)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V261; pile[WZ4]=jvj+165; 
(*f[270])( );     /*QUADRI7(100,21,140,V261,jvj+165)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=904; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,904,jvj+167)*/
pile[v[22]]=jvj+165; pile[WZ1]=160; pile[WZ2]=jvj+166; 
(*f[54])( );     /*TRI1(jvj+165,160,jvj+166)*/
pile[v[22]]=jvj+166; pile[WZ1]=jvj+167; pile[WZ2]=111; pile[WZ3]=jvj+168; 
(*f[58])( );     /*TRI3(jvj+166,jvj+167,111,jvj+168)*/
pile[v[22]]=jvj+168; pile[WZ1]=jvj+169; pile[WZ2]=103; pile[WZ3]=jvj+170; 
(*f[58])( );     /*TRI3(jvj+168,jvj+169,103,jvj+170)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+171; pile[WZ4]=jvj+170; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+171,jvj+170,jvj+81)*/
pile[v[22]]=N; pile[WZ1]=1689; pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(N,1689,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+173; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+173)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V261; pile[WZ4]=jvj+177; 
(*f[270])( );     /*QUADRI7(100,21,140,V261,jvj+177)*/
pile[v[22]]=jvj+173; pile[WZ1]=111; pile[WZ2]=jvj+174; 
(*f[54])( );     /*TRI1(jvj+173,111,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=jvj+175; pile[WZ2]=103; pile[WZ3]=jvj+176; 
(*f[58])( );     /*TRI3(jvj+174,jvj+175,103,jvj+176)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+177; pile[WZ4]=jvj+176; pile[WZ5]=jvj+82; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+177,jvj+176,jvj+82)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+82)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1686; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,20,101,1686,jvj+178)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V261; pile[WZ4]=jvj+181; 
(*f[270])( );     /*QUADRI7(100,21,140,V261,jvj+181)*/
pile[v[22]]=jvj+178; pile[WZ1]=111; pile[WZ2]=jvj+179; 
(*f[54])( );     /*TRI1(jvj+178,111,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=jvj+80; pile[WZ2]=103; pile[WZ3]=jvj+180; 
(*f[58])( );     /*TRI3(jvj+179,jvj+80,103,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+181; pile[WZ4]=jvj+180; pile[WZ5]=jvj+83; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+181,jvj+180,jvj+83)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+83; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+83)*/
l21:pile[v[22]]=103; pile[WZ1]=jvj+58; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+58,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+84,jvj+85)*/
if((x[jvj+85]!=43)) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+84,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+86,jvj+87)*/
pile[v[22]]=N; 
(*f[1239])( );if(v[102]) goto l22;     /*NOUVAR0(N,V169)*/
V169=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V169; pile[WZ4]=jvj+88; 
(*f[270])( );     /*QUADRI7(100,21,140,V169,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; 
(*f[255])( );     /*COPEXP0(jvj+88,jvj+89)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+90; 
(*f[255])( );     /*COPEXP0(jvj+72,jvj+90)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+91; 
(*f[255])( );     /*COPEXP0(jvj+84,jvj+91)*/
V193=x[jvj+58];
pile[v[22]]=103; pile[WZ1]=jvj+84; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+84,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+93; 
(*f[255])( );     /*COPEXP0(jvj+92,jvj+93)*/
x[jvj+188]=x[jvj+87] ;z[jvj+188]=z[jvj+87];
x[jvj+193]=x[jvj+89] ;z[jvj+193]=z[jvj+89];
x[jvj+191]=x[jvj+90] ;z[jvj+191]=z[jvj+90];
x[jvj+196]=x[jvj+91] ;z[jvj+196]=z[jvj+91];
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=V193; 
(*f[134])( );     /*OTA0(1689,N,V193)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+188; pile[WZ4]=jvj+187; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+188,jvj+187)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V169; pile[WZ4]=jvj+182; 
(*f[270])( );     /*QUADRI7(100,21,140,V169,jvj+182)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=902; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,20,101,902,jvj+184)*/
pile[v[22]]=jvj+182; pile[WZ1]=160; pile[WZ2]=jvj+183; 
(*f[54])( );     /*TRI1(jvj+182,160,jvj+183)*/
pile[v[22]]=jvj+183; pile[WZ1]=jvj+184; pile[WZ2]=111; pile[WZ3]=jvj+185; 
(*f[58])( );     /*TRI3(jvj+183,jvj+184,111,jvj+185)*/
pile[v[22]]=jvj+185; pile[WZ1]=jvj+93; pile[WZ2]=103; pile[WZ3]=jvj+186; 
(*f[58])( );     /*TRI3(jvj+185,jvj+93,103,jvj+186)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+187; pile[WZ4]=jvj+186; pile[WZ5]=jvj+94; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+187,jvj+186,jvj+94)*/
pile[v[22]]=N; pile[WZ1]=1689; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(N,1689,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+189; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=111; pile[WZ2]=jvj+190; 
(*f[54])( );     /*TRI1(jvj+189,111,jvj+190)*/
pile[v[22]]=jvj+190; pile[WZ1]=jvj+191; pile[WZ2]=103; pile[WZ3]=jvj+192; 
(*f[58])( );     /*TRI3(jvj+190,jvj+191,103,jvj+192)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+193; pile[WZ4]=jvj+192; pile[WZ5]=jvj+95; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+193,jvj+192,jvj+95)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+95; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+95)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1686; pile[WZ4]=jvj+194; 
(*f[181])( );     /*QUADRI2(100,20,101,1686,jvj+194)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V169; pile[WZ4]=jvj+198; 
(*f[270])( );     /*QUADRI7(100,21,140,V169,jvj+198)*/
pile[v[22]]=jvj+194; pile[WZ1]=111; pile[WZ2]=jvj+195; 
(*f[54])( );     /*TRI1(jvj+194,111,jvj+195)*/
pile[v[22]]=jvj+195; pile[WZ1]=jvj+196; pile[WZ2]=103; pile[WZ3]=jvj+197; 
(*f[58])( );     /*TRI3(jvj+195,jvj+196,103,jvj+197)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+198; pile[WZ4]=jvj+197; pile[WZ5]=jvj+96; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+198,jvj+197,jvj+96)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+96; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+96)*/
l22:x[jvj+102]=x[jvj+61] ;z[jvj+102]=z[jvj+61];
if(x[jvj+102]!=1861&&x[jvj+102]!=1926) goto l23;
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+58,jvj+97)*/
if((x[jvj+97]!=22)) goto l23;
pile[v[22]]=103; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+58,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+98,jvj+99)*/
if((x[jvj+99]!=43)) goto l23;
pile[v[22]]=102; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+98,jvj+100)*/
pile[v[22]]=101; pile[WZ1]=jvj+100; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+100,jvj+101)*/
pile[v[22]]=22; pile[WZ1]=jvj+102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(22,jvj+102,jvj+103)*/
V165=x[jvj+58];
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+58,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=jvj+105; 
(*f[255])( );     /*COPEXP0(jvj+104,jvj+105)*/
pile[v[22]]=103; pile[WZ1]=jvj+98; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+98,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+107; 
(*f[255])( );     /*COPEXP0(jvj+106,jvj+107)*/
x[jvj+205]=x[jvj+101] ;z[jvj+205]=z[jvj+101];
x[jvj+199]=x[jvj+105] ;z[jvj+199]=z[jvj+105];
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=V165; 
(*f[134])( );     /*OTA0(1689,N,V165)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+205; pile[WZ4]=jvj+204; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+205,jvj+204)*/
pile[WZ3]=jvj+103; pile[WZ4]=jvj+201; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+103,jvj+201)*/
pile[v[22]]=jvj+199; pile[WZ1]=160; pile[WZ2]=jvj+200; 
(*f[54])( );     /*TRI1(jvj+199,160,jvj+200)*/
pile[v[22]]=jvj+200; pile[WZ1]=jvj+201; pile[WZ2]=111; pile[WZ3]=jvj+202; 
(*f[58])( );     /*TRI3(jvj+200,jvj+201,111,jvj+202)*/
pile[v[22]]=jvj+202; pile[WZ1]=jvj+107; pile[WZ2]=103; pile[WZ3]=jvj+203; 
(*f[58])( );     /*TRI3(jvj+202,jvj+107,103,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+204; pile[WZ4]=jvj+203; pile[WZ5]=jvj+108; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+204,jvj+203,jvj+108)*/
pile[v[22]]=N; pile[WZ1]=1689; pile[WZ2]=jvj+108; 
(*f[36])( );     /*PLUSC0(N,1689,jvj+108)*/
l23:if((x[jvj+61]!=1269)) goto l17;
pile[v[22]]=N; 
(*f[1239])( );if(v[102]) goto l17;     /*NOUVAR0(N,W)*/
W=pile[WZ1]; 
V68=x[jvj+58];
x[jvj+109]=d[20];z[jvj+109]=0;
l24:if((x[jvj+109]<=0)) goto l17;
x[jvj+110]=s[x[jvj+109]] ;z[jvj+110]=(x[jvj+110]<=sepcte) ? x[jvj+110] : z[jvj+109];
pile[v[22]]=jvj+110; pile[WZ1]=jvj+58; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+110,jvj+58,jvj+111)*/
pile[v[22]]=100; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+111,jvj+112)*/
if((x[jvj+112]!=43)) goto l25;
pile[v[22]]=102; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+111,jvj+113)*/
pile[v[22]]=101; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+113,jvj+114)*/
x[jvj+131]=x[jvj+114] ;z[jvj+131]=z[jvj+114];
pile[v[22]]=268; pile[WZ1]=jvj+110; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(268,jvj+110,jvj+115)*/
pile[v[22]]=jvj+115; pile[WZ1]=jvj+58; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+115,jvj+58,jvj+116)*/
pile[v[22]]=100; pile[WZ1]=jvj+116; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+116,jvj+117)*/
if((x[jvj+117]!=43)) goto l25;
pile[v[22]]=102; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+116,jvj+118)*/
pile[v[22]]=101; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+118,jvj+119)*/
x[jvj+120]=x[jvj+119] ;z[jvj+120]=z[jvj+119];
pile[v[22]]=679; pile[WZ1]=jvj+120; pile[WZ2]=jvj+121; 
(*f[33])( );     /*FNDE0(679,jvj+120,jvj+121)*/
for(a=x[jvj+121];a>0;a=t[a]) if(s[a]==x[jvj+131]) goto l26;
l29:pile[v[22]]=679; pile[WZ1]=jvj+131; pile[WZ2]=jvj+132; 
(*f[33])( );     /*FNDE0(679,jvj+131,jvj+132)*/
for(a=x[jvj+132];a>0;a=t[a]) if(s[a]==x[jvj+120]) goto l30;
l25:x[jvj+109]=t[x[jvj+109]];
goto l24;
l17:x[jvj+57]=t[x[jvj+57]];
goto l15;
l18:V197=x[jvj+58];
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=V197; 
(*f[134])( );     /*OTA0(1689,N,V197)*/
goto l19;
l20:pile[v[22]]=103; pile[WZ1]=jvj+58; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+58,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+62,jvj+63)*/
if((x[jvj+63]!=22)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+62,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+64,jvj+65)*/
x[jvj+66]=x[jvj+65] ;z[jvj+66]=z[jvj+65];
pile[v[22]]=1841; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1841,jvj+66,jvj+67)*/
if((x[jvj+67]!=68)) goto l22;
pile[v[22]]=N; 
(*f[1239])( );if(v[102]) goto l22;     /*NOUVAR0(N,V239)*/
V239=pile[WZ1]; 
pile[v[22]]=jvj+62; pile[WZ1]=jvj+68; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+68)*/
V259=x[jvj+58];
pile[v[22]]=102; pile[WZ1]=jvj+58; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+58,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; 
(*f[255])( );     /*COPEXP0(jvj+69,jvj+70)*/
x[jvj+162]=x[jvj+68] ;z[jvj+162]=z[jvj+68];
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=V259; 
(*f[134])( );     /*OTA0(1689,N,V259)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1282; pile[WZ4]=jvj+151; 
(*f[181])( );     /*QUADRI2(100,20,101,1282,jvj+151)*/
pile[WZ3]=25; pile[WZ4]=jvj+156; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+156)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V239; pile[WZ4]=jvj+158; 
(*f[270])( );     /*QUADRI7(100,21,140,V239,jvj+158)*/
pile[v[22]]=jvj+156; pile[WZ1]=111; pile[WZ2]=jvj+157; 
(*f[54])( );     /*TRI1(jvj+156,111,jvj+157)*/
pile[v[22]]=jvj+157; pile[WZ1]=jvj+158; pile[WZ2]=103; pile[WZ3]=jvj+159; 
(*f[58])( );     /*TRI3(jvj+157,jvj+158,103,jvj+159)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+159; pile[WZ5]=jvj+155; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+70,jvj+159,jvj+155)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+160; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+160)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V239; pile[WZ4]=jvj+164; 
(*f[270])( );     /*QUADRI7(100,21,140,V239,jvj+164)*/
pile[v[22]]=jvj+160; pile[WZ1]=111; pile[WZ2]=jvj+161; 
(*f[54])( );     /*TRI1(jvj+160,111,jvj+161)*/
pile[v[22]]=jvj+161; pile[WZ1]=jvj+162; pile[WZ2]=103; pile[WZ3]=jvj+163; 
(*f[58])( );     /*TRI3(jvj+161,jvj+162,103,jvj+163)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+164; pile[WZ4]=jvj+163; pile[WZ5]=jvj+153; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+164,jvj+163,jvj+153)*/
pile[v[22]]=jvj+151; pile[WZ1]=111; pile[WZ2]=jvj+152; 
(*f[54])( );     /*TRI1(jvj+151,111,jvj+152)*/
pile[v[22]]=jvj+153; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+154; 
(*f[298])( );     /*TRIENS1(jvj+153,(-20),jvj+152,107,jvj+154)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+155; pile[WZ5]=jvj+71; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+155,jvj+154,jvj+71)*/
pile[v[22]]=N; pile[WZ1]=1689; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(N,1689,jvj+71)*/
goto l22;
l26:pile[v[22]]=103; pile[WZ1]=jvj+111; pile[WZ2]=jvj+122; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,jvj+111,jvj+122)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+123; 
(*f[255])( );     /*COPEXP0(jvj+116,jvj+123)*/
pile[v[22]]=jvj+111; pile[WZ1]=jvj+124; 
(*f[255])( );     /*COPEXP0(jvj+111,jvj+124)*/
pile[v[22]]=103; pile[WZ1]=jvj+116; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,jvj+116,jvj+125)*/
x[jvj+16]=x[jvj+122] ;z[jvj+16]=z[jvj+122];
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1688,N,jvj+2)*/
x[jvj+240]=x[jvj+2] ;z[jvj+240]=z[jvj+2];
goto l1;
l27:pile[v[22]]=jvj+16; pile[WZ1]=jvj+126; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+126)*/
pile[v[22]]=jvj+122; pile[WZ1]=jvj+125; pile[WZ2]=jvj+127; 
(*f[760])( );     /*MEMEX0(jvj+122,jvj+125,jvj+127)*/
if((x[jvj+127]==135)) goto l28;
goto l29;
l28:x[jvj+215]=x[jvj+123] ;z[jvj+215]=z[jvj+123];
x[jvj+220]=x[jvj+124] ;z[jvj+220]=z[jvj+124];
x[jvj+210]=x[jvj+126] ;z[jvj+210]=z[jvj+126];
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=V68; 
(*f[134])( );     /*OTA0(1689,N,V68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+120; pile[WZ4]=jvj+212; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+120,jvj+212)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+206; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+206)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=904; pile[WZ4]=jvj+208; 
(*f[181])( );     /*QUADRI2(100,20,101,904,jvj+208)*/
pile[v[22]]=jvj+206; pile[WZ1]=160; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,160,jvj+207)*/
pile[v[22]]=jvj+207; pile[WZ1]=jvj+208; pile[WZ2]=111; pile[WZ3]=jvj+209; 
(*f[58])( );     /*TRI3(jvj+207,jvj+208,111,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=jvj+210; pile[WZ2]=103; pile[WZ3]=jvj+211; 
(*f[58])( );     /*TRI3(jvj+209,jvj+210,103,jvj+211)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+212; pile[WZ4]=jvj+211; pile[WZ5]=jvj+128; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+212,jvj+211,jvj+128)*/
pile[v[22]]=N; pile[WZ1]=1689; pile[WZ2]=jvj+128; 
(*f[36])( );     /*PLUSC0(N,1689,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+213; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+213)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+217; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+217)*/
pile[v[22]]=jvj+213; pile[WZ1]=111; pile[WZ2]=jvj+214; 
(*f[54])( );     /*TRI1(jvj+213,111,jvj+214)*/
pile[v[22]]=jvj+214; pile[WZ1]=jvj+215; pile[WZ2]=103; pile[WZ3]=jvj+216; 
(*f[58])( );     /*TRI3(jvj+214,jvj+215,103,jvj+216)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+217; pile[WZ4]=jvj+216; pile[WZ5]=jvj+129; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+217,jvj+216,jvj+129)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+129; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1686; pile[WZ4]=jvj+218; 
(*f[181])( );     /*QUADRI2(100,20,101,1686,jvj+218)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+222; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+222)*/
pile[v[22]]=jvj+218; pile[WZ1]=111; pile[WZ2]=jvj+219; 
(*f[54])( );     /*TRI1(jvj+218,111,jvj+219)*/
pile[v[22]]=jvj+219; pile[WZ1]=jvj+220; pile[WZ2]=103; pile[WZ3]=jvj+221; 
(*f[58])( );     /*TRI3(jvj+219,jvj+220,103,jvj+221)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+222; pile[WZ4]=jvj+221; pile[WZ5]=jvj+130; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+222,jvj+221,jvj+130)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+130; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+130)*/
goto l29;
l30:pile[v[22]]=103; pile[WZ1]=jvj+111; pile[WZ2]=jvj+133; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+111,jvj+133)*/
pile[v[22]]=jvj+116; pile[WZ1]=jvj+134; 
(*f[255])( );     /*COPEXP0(jvj+116,jvj+134)*/
pile[v[22]]=jvj+111; pile[WZ1]=jvj+135; 
(*f[255])( );     /*COPEXP0(jvj+111,jvj+135)*/
pile[v[22]]=103; pile[WZ1]=jvj+116; pile[WZ2]=jvj+136; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+116,jvj+136)*/
x[jvj+32]=x[jvj+133] ;z[jvj+32]=z[jvj+133];
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1688,N,jvj+18)*/
x[jvj+241]=x[jvj+18] ;z[jvj+241]=z[jvj+18];
goto l5;
l31:pile[v[22]]=jvj+32; pile[WZ1]=jvj+137; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+137)*/
pile[v[22]]=jvj+133; pile[WZ1]=jvj+136; pile[WZ2]=jvj+138; 
(*f[760])( );     /*MEMEX0(jvj+133,jvj+136,jvj+138)*/
if((x[jvj+138]==135)) goto l32;
goto l25;
l32:x[jvj+232]=x[jvj+134] ;z[jvj+232]=z[jvj+134];
x[jvj+237]=x[jvj+135] ;z[jvj+237]=z[jvj+135];
x[jvj+227]=x[jvj+137] ;z[jvj+227]=z[jvj+137];
pile[v[22]]=1689; pile[WZ1]=N; pile[WZ2]=V68; 
(*f[134])( );     /*OTA0(1689,N,V68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+120; pile[WZ4]=jvj+229; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+120,jvj+229)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+223; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+223)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=902; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,20,101,902,jvj+225)*/
pile[v[22]]=jvj+223; pile[WZ1]=160; pile[WZ2]=jvj+224; 
(*f[54])( );     /*TRI1(jvj+223,160,jvj+224)*/
pile[v[22]]=jvj+224; pile[WZ1]=jvj+225; pile[WZ2]=111; pile[WZ3]=jvj+226; 
(*f[58])( );     /*TRI3(jvj+224,jvj+225,111,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=jvj+227; pile[WZ2]=103; pile[WZ3]=jvj+228; 
(*f[58])( );     /*TRI3(jvj+226,jvj+227,103,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+229; pile[WZ4]=jvj+228; pile[WZ5]=jvj+139; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+229,jvj+228,jvj+139)*/
pile[v[22]]=N; pile[WZ1]=1689; pile[WZ2]=jvj+139; 
(*f[36])( );     /*PLUSC0(N,1689,jvj+139)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1686; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,1686,jvj+230)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+234; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+234)*/
pile[v[22]]=jvj+230; pile[WZ1]=111; pile[WZ2]=jvj+231; 
(*f[54])( );     /*TRI1(jvj+230,111,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=jvj+232; pile[WZ2]=103; pile[WZ3]=jvj+233; 
(*f[58])( );     /*TRI3(jvj+231,jvj+232,103,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+234; pile[WZ4]=jvj+233; pile[WZ5]=jvj+140; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+234,jvj+233,jvj+140)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+140; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+140)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+235; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+235)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+239; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+239)*/
pile[v[22]]=jvj+235; pile[WZ1]=111; pile[WZ2]=jvj+236; 
(*f[54])( );     /*TRI1(jvj+235,111,jvj+236)*/
pile[v[22]]=jvj+236; pile[WZ1]=jvj+237; pile[WZ2]=103; pile[WZ3]=jvj+238; 
(*f[58])( );     /*TRI3(jvj+236,jvj+237,103,jvj+238)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+239; pile[WZ4]=jvj+238; pile[WZ5]=jvj+141; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+239,jvj+238,jvj+141)*/
pile[v[22]]=N; pile[WZ1]=1688; pile[WZ2]=jvj+141; 
(*f[36])( );     /*PLUSC0(N,1688,jvj+141)*/
goto l25;
}
