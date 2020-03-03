#include "dx.h"
void CREJGT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V20=0,N=0;
int AT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=10820;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==140&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AT=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=109; pile[WZ1]=AT; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,AT,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=10820; 
(*f[294])( );     /*PLUK2(jvj+2,10820)*/
pile[v[22]]=184; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(184,jvj+2)*/
l4:pile[v[22]]=757; pile[WZ1]=AT; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(757,AT,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,AT,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=274; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,274,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V4; pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,V4,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=103; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=108; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,108,102,jvj+32,jvj+31,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=(-20); pile[WZ2]=108; pile[WZ3]=jvj+29; 
(*f[180])( );     /*TRIENS0(jvj+28,(-20),108,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=69; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+29,69,100,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=436; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,436,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=111; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+27,jvj+26,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+22; 
(*f[180])( );     /*TRIENS0(jvj+21,(-20),105,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+22,42,100,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=184; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+9,184,jvj+10)*/
l5:pile[v[22]]=AT; pile[WZ1]=1223; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(AT,1223,jvj+11)*/
pile[v[22]]=109; pile[WZ1]=AT; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(109,AT,jvj+12)*/
l6:if((x[jvj+11]<=0)) goto l9;
x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+6,jvj+13)*/
if((x[jvj+13]!=611)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+6,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+14,V20)*/
V20=pile[WZ2]; 
x[jvj+56]=incon;
pile[v[22]]=1219; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1219,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+7,jvj+8)*/
x[jvj+58]=x[jvj+8] ;z[jvj+58]=z[jvj+8];
x[jvj+56]=x[jvj+58] ;z[jvj+56]=z[jvj+58];
l8:pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+15)*/
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+57]=x[jvj+15] ;z[jvj+57]=z[jvj+15];
l1:if((x[jvj+57]>0)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+6,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+6,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
N=V20;
x[jvj+46]=x[jvj+17] ;z[jvj+46]=z[jvj+17];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10821; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,10821,jvj+36)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=103; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+43; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+19,jvj+43,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=103; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+38; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+46,jvj+45,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-608); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+49)*/
pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(100,21,140,(-608),jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=103; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+49,jvj+48,jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=N; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,N,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-625); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(100,21,140,(-625),jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=103; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+52,jvj+51,jvj+40)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+56,jvj+55)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-657); pile[WZ4]=jvj+53; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=103; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+55,jvj+54,jvj+41)*/
pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+36; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,39,111,jvj+36,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=114; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+34,114,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+34,114,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+34,114,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+34,114,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+34,114,jvj+41)*/
pile[v[22]]=jvj+5; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[300])( );     /*TRI10(jvj+5,107,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+35; 
(*f[298])( );     /*TRIENS1(jvj+34,(-20),jvj+33,105,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+35,42,100,jvj+20)*/
pile[v[22]]=jvj+12; pile[WZ1]=184; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+12,184,jvj+20)*/
l7:x[jvj+11]=t[x[jvj+11]];
goto l6;
l2:x[jvj+3]=s[x[jvj+57]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+57];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
x[jvj+57]=t[x[jvj+57]];
goto l1;
l3:x[jvj+56]=36 ;z[jvj+56]=36;
goto l8;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
