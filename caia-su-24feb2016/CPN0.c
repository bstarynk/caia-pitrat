#include "dx.h"
void CPN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V26=0,V35=0,F=0,V12=0,W=0,V54=0,V=0,V9=0,VA=0,V41=0,VV=0,WW=0;
int L,A,B,R,AT,S,VL,NV,XX,BOOT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=100;
x[jvj+1]=10178;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1984&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; R=pile[v[22]+3]; AT=pile[v[22]+4]; S=pile[v[22]+5]; VL=pile[v[22]+6]; NV=pile[v[22]+7]; XX=pile[v[22]+8]; BOOT=pile[v[22]+9]; v[22]+=10; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=AT; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(AT,B,jvj+2)*/
for(i=x[jvj+2],V26=0;i>0;i=t[i],V26++)  ;
if((V26!=1)) goto l3;
pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(A,jvj+3)*/
l1:if((x[jvj+2]<=0)) goto l3;
x[jvj+4]=s[x[jvj+2]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+2];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=649)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V35)*/
V35=pile[WZ2]; 
x[jvj+22]=107 ;z[jvj+22]=107;
x[jvj+23]=x[jvj+4] ;z[jvj+23]=z[jvj+4];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=AT; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,AT,jvj+48)*/
pile[v[22]]=jvj+3; pile[WZ1]=103; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+3,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+46; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+48,jvj+47,jvj+46)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=179; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,179,jvj+44)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V35; pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,V35,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=436; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,436,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=111; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,111,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+46,jvj+45,jvj+8)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(R,107,jvj+8)*/
l11:pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(jvj+22,jvj+23,jvj+24)*/
x[jvj+100]=x[jvj+24] ;z[jvj+100]=z[jvj+24];
l4:if((x[jvj+100]>0)) goto l5;
pile[v[22]]=A; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(A,jvj+25)*/
for(i=x[jvj+24],V9=0;i>0;i=t[i],V9++)  ;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+61)*/
pile[WZ3]=74; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+66)*/
pile[WZ3]=AT; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,AT,jvj+70)*/
pile[v[22]]=jvj+25; pile[WZ1]=103; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+25,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+70,jvj+69,jvj+68)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+68; pile[WZ4]=jvj+67; pile[WZ5]=jvj+65; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+68,jvj+67,jvj+65)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+63; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+63)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+62,jvj+63,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+26)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(R,107,jvj+26)*/
l12:if((x[jvj+24]>0)) goto l13;
pile[v[22]]=AT; pile[WZ1]=B; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(AT,B,jvj+33)*/
for(i=x[jvj+33],V41=0;i>0;i=t[i],V41++)  ;
if((V41>1)) goto l15;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=10; return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l3:x[jvj+22]=x[AT] ;z[jvj+22]=z[AT];
x[jvj+23]=x[B] ;z[jvj+23]=z[B];
goto l11;
l5:x[jvj+9]=s[x[jvj+100]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+100];
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+11,jvj+12)*/
F=x[jvj+12];
if(F==653||F==649) goto l12;
l6:x[jvj+100]=t[x[jvj+100]];
goto l4;
l8:W=s[V54];
if((W==V)) goto l9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+49)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+53)*/
pile[WZ3]=V; pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+51)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+50,jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+52,jvj+18)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(R,107,jvj+18)*/
l9:V54=t[V54];
l7:if((V54>0)) goto l8;
pile[v[22]]=L; pile[WZ1]=273; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(L,273,V)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=AT; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,AT,jvj+60)*/
pile[v[22]]=jvj+19; pile[WZ1]=103; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+19,103,jvj+59)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+60; pile[WZ4]=jvj+59; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+60,jvj+59,jvj+58)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=180; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,180,jvj+56)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+54; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=436; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+54,436,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=111; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+55,jvj+56,111,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+58; pile[WZ4]=jvj+57; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+58,jvj+57,jvj+21)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(R,107,jvj+21)*/
l14:x[jvj+24]=t[x[jvj+24]];
goto l12;
l13:x[jvj+13]=s[x[jvj+24]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+24];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=22)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+15,jvj+16)*/
V12=x[jvj+16];
if(V12==653||V12==649) goto l14;
l10:
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=A; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(A,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+20)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+20; pile[WZ2]=R; pile[WZ3]=S; pile[WZ4]=VL; pile[WZ5]=NV; pile[v[22]+6]=XX; pile[v[22]+7]=BOOT; 
(*f[1820])( );     /*CPM0(jvj+13,jvj+20,R,S,VL,NV,XX,BOOT)*/
pile[v[22]]=273; pile[WZ1]=L; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(273,L,jvj+17)*/
V54=x[jvj+17];
goto l7;
l16:x[jvj+33]=t[x[jvj+33]];
l15:if((x[jvj+33]<=0)) goto l19;
x[jvj+27]=s[x[jvj+33]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+33];
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=649)) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+27,jvj+34)*/
pile[v[22]]=140; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(140,jvj+34,VV)*/
VV=pile[WZ2]; 
(*f[1817])( );     /*NOUV2(WW)*/
WW=pile[v[22]]; 
pile[v[22]]=A; pile[WZ1]=jvj+35; 
(*f[255])( );     /*COPEXP0(A,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=267; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,267,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+39)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+76)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+80; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+80)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=AT; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(100,20,101,AT,jvj+82)*/
pile[v[22]]=jvj+35; pile[WZ1]=103; pile[WZ2]=jvj+81; 
(*f[54])( );     /*TRI1(jvj+35,103,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+82; pile[WZ4]=jvj+81; pile[WZ5]=jvj+78; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+82,jvj+81,jvj+78)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; pile[WZ2]=103; pile[WZ3]=jvj+79; 
(*f[58])( );     /*TRI3(jvj+77,jvj+78,103,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+79; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+79,jvj+40)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=50; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,50,jvj+83)*/
pile[WZ3]=278; pile[WZ4]=jvj+87; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+87)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+91; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+91)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=151; pile[WZ4]=jvj+93; 
(*f[181])( );     /*QUADRI2(100,20,101,151,jvj+93)*/
pile[WZ3]=649; pile[WZ4]=jvj+95; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+95)*/
pile[v[22]]=jvj+93; pile[WZ1]=111; pile[WZ2]=jvj+94; 
(*f[54])( );     /*TRI1(jvj+93,111,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+95; pile[WZ4]=jvj+94; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+95,jvj+94,jvj+92)*/
pile[WZ2]=111; pile[WZ3]=jvj+92; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+92,jvj+89)*/
pile[v[22]]=jvj+87; pile[WZ1]=111; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(jvj+87,111,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=103; pile[WZ3]=jvj+90; 
(*f[58])( );     /*TRI3(jvj+88,jvj+89,103,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+91; pile[WZ4]=jvj+90; pile[WZ5]=jvj+85; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+91,jvj+90,jvj+85)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=jvj+85; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+86; 
(*f[298])( );     /*TRIENS1(jvj+85,(-20),jvj+84,107,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+86,22,100,jvj+41)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+38,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=107; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+41)*/
pile[v[22]]=273; pile[WZ1]=L; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(273,L,jvj+30)*/
l17:if((x[jvj+30]>0)) goto l18;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+98; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+98)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+96; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=436; pile[WZ2]=jvj+97; 
(*f[54])( );     /*TRI1(jvj+96,436,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=jvj+98; pile[WZ2]=111; pile[WZ3]=jvj+99; 
(*f[58])( );     /*TRI3(jvj+97,jvj+98,111,jvj+99)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+99; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+31,jvj+99,jvj+36)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(R,107,jvj+36)*/
goto l19;
l18:VA=s[x[jvj+30]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+71)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+75; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+75)*/
pile[WZ3]=VA; pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,VA,jvj+73)*/
pile[v[22]]=jvj+71; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+71,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+73; pile[WZ2]=103; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+72,jvj+73,103,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+75,jvj+74,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+31,107,jvj+32)*/
x[jvj+30]=t[x[jvj+30]];
goto l17;
}
