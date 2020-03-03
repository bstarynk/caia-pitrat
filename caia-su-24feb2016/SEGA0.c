#include "dx.h"
void SEGA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V17=0,V=0;
int BL,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=10229;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1419&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,R,jvj+4)*/
if((x[jvj+4]!=42)) goto l6;
pile[v[22]]=107; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,R,jvj+5)*/
if((x[jvj+5]!=0)) goto l6;
pile[v[22]]=105; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(105,R,jvj+6)*/
for(i=x[jvj+6],V4=0;i>0;i=t[i],V4++)  ;
if((V4!=1)) goto l6;
x[jvj+48]=incon;
pile[v[22]]=337; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(337,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
x[jvj+48]=x[jvj+3] ;z[jvj+48]=z[jvj+3];
l2:if((x[jvj+6]<=0)) goto l6;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=82)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=433)) goto l3;
pile[v[22]]=436; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(436,jvj+7,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+13,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+14)*/
V=V17;
x[jvj+36]=x[jvj+48] ;z[jvj+36]=z[jvj+48];
x[jvj+50]=x[jvj+14] ;z[jvj+50]=z[jvj+14];
l7:if((x[jvj+50]<=0)) goto l12;
x[jvj+22]=s[x[jvj+50]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+50];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=452)) goto l8;
pile[v[22]]=107; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+24)*/
if((x[jvj+24]==0)) goto l9;
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+49]=x[jvj+24] ;z[jvj+49]=z[jvj+24];
l4:if((x[jvj+49]>0)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+22,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+46)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=436; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,436,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=111; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+45,jvj+46,111,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+47; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+28,jvj+47,jvj+34)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+33; 
(*f[300])( );     /*TRI10(jvj+19,107,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ3]=105; pile[WZ4]=jvj+35; 
(*f[298])( );     /*TRIENS1(jvj+34,(-20),jvj+33,105,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+35,42,100,jvj+20)*/
if((x[jvj+36]==206)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+36; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+36,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=337; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(jvj+20,337,jvj+21)*/
l11:pile[v[22]]=BL; pile[WZ1]=565; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(BL,565,jvj+20)*/
l8:x[jvj+50]=t[x[jvj+50]];
goto l7;
l1:x[jvj+48]=206 ;z[jvj+48]=206;
goto l2;
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l5:x[jvj+17]=s[x[jvj+49]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+49];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
pile[v[22]]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+18)*/
x[jvj+49]=t[x[jvj+49]];
goto l4;
l6:pile[v[22]]=BL; pile[WZ1]=565; pile[WZ2]=R; 
(*f[36])( );     /*PLUSC0(BL,565,R)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l9:pile[v[22]]=102; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+22,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=178; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,178,jvj+37)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+39)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+38,jvj+29)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=82; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,82,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=436; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,436,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=111; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=435; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+43; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,435,102,jvj+26,jvj+43,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+30; 
(*f[180])( );     /*TRIENS0(jvj+29,(-20),107,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ2]=jvj+30; pile[WZ3]=105; pile[WZ4]=jvj+32; 
(*f[298])( );     /*TRIENS1(jvj+31,(-20),jvj+30,105,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+32,42,100,jvj+15)*/
if((x[jvj+36]==206)) goto l10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+36; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+36,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=337; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+15,337,jvj+16)*/
l10:pile[v[22]]=BL; pile[WZ1]=565; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(BL,565,jvj+15)*/
goto l8;
}
